/*
 * Copyright 2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/*
 * Derived from the BLAKE2 reference implementation written by Samuel Neves.
 * Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
 * More information about the BLAKE2 hash function and its implementations
 * can be found at https://blake2.net.
 */
#include "internal/cryptlib.h"
#pragma hdrstop
#ifndef OPENSSL_NO_BLAKE2
#include "blake2_locl.h"

static int init(EVP_MD_CTX * ctx)
{
	return BLAKE2b_Init((BLAKE2B_CTX *)EVP_MD_CTX_md_data(ctx));
}

static int update(EVP_MD_CTX * ctx, const void * data, size_t count)
{
	return BLAKE2b_Update((BLAKE2B_CTX *)EVP_MD_CTX_md_data(ctx), data, count);
}

static int final(EVP_MD_CTX * ctx, uchar * md)
{
	return BLAKE2b_Final(md, (BLAKE2B_CTX *)EVP_MD_CTX_md_data(ctx));
}

static const EVP_MD blake2b_md = {
	NID_blake2b512,
	0,
	BLAKE2B_DIGEST_LENGTH,
	0,
	init,
	update,
	final,
	NULL,
	NULL,
	BLAKE2B_BLOCKBYTES,
	sizeof(EVP_MD *) + sizeof(BLAKE2B_CTX),
};

const EVP_MD * EVP_blake2b512(void)
{
	return (&blake2b_md);
}

#endif
