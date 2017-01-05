/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1997, 2011 Oracle and/or its affiliates.  All rights reserved.
 *
 * $Id$
 */
#include "db_config.h"
#include "db_int.h"
#include "dbinc/db_page.h"
#include "dbinc/lock.h"
#include "dbinc/mp.h"
#include "dbinc/crypto.h"
#include "dbinc/btree.h"
#include "dbinc/hash.h"
#pragma hdrstop
/*
 * __dbt_usercopy --
 *	Take a copy of the user's data, if a callback is supplied.
 *
 * PUBLIC: int __dbt_usercopy(ENV *, DBT *);
 */
int __dbt_usercopy(ENV * env, DBT * dbt)
{
	void * buf;
	int ret;
	if(dbt == NULL || !F_ISSET(dbt, DB_DBT_USERCOPY) || dbt->size == 0 || dbt->data != NULL)
		return 0;
	buf = NULL;
	if((ret = __os_umalloc(env, dbt->size, &buf)) != 0 || (ret = env->dbt_usercopy(dbt, 0, buf, dbt->size, DB_USERCOPY_GETDATA)) != 0)
		goto err;
	dbt->data = buf;
	return 0;
err:
	if(buf != NULL) {
		__os_ufree(env, buf);
		dbt->data = NULL;
	}
	return ret;
}
/*
 * __dbt_userfree --
 *	Free a copy of the user's data, if necessary.
 *
 * PUBLIC: void __dbt_userfree __P((ENV *, DBT *, DBT *, DBT *));
 */
void __dbt_userfree(ENV * env, DBT * key, DBT * pkey, DBT * data)
{
	if(key != NULL && F_ISSET(key, DB_DBT_USERCOPY) && key->data != NULL) {
		__os_ufree(env, key->data);
		key->data = NULL;
	}
	if(pkey != NULL && F_ISSET(pkey, DB_DBT_USERCOPY) && pkey->data != NULL) {
		__os_ufree(env, pkey->data);
		pkey->data = NULL;
	}
	if(data != NULL && F_ISSET(data, DB_DBT_USERCOPY) && data->data != NULL) {
		__os_ufree(env, data->data);
		data->data = NULL;
	}
}
