/* DO NOT EDIT: automatically built by dist/s_include. */
#ifndef _db_ext_h_
#define _db_ext_h_

#if defined(__cplusplus)
extern "C" {
#endif

int __crdel_init_recover __P((ENV*, DB_DISTAB *));
int __crdel_metasub_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_inmem_create_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_inmem_rename_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_inmem_remove_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_init_print __P((ENV*, DB_DISTAB *));
int __crdel_metasub_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_inmem_create_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_inmem_rename_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __crdel_inmem_remove_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_master_open __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, uint32, int, DB**));
int __db_master_update __P((DB*, DB*, DB_THREAD_INFO*, DB_TXN*, const char *, DBTYPE, mu_action, const char *, uint32));
int __env_dbreg_setup __P((DB*, DB_TXN*, const char *, const char *, uint32));
int __env_setup __P((DB*, DB_TXN*, const char *, const char *, uint32, uint32));
int __env_mpool __P((DB*, const char *, uint32));
int __db_close __P((DB*, DB_TXN*, uint32));
int __db_refresh __P((DB*, DB_TXN*, uint32, int *, int));
int __db_log_page __P((DB*, DB_TXN*, DB_LSN*, db_pgno_t, PAGE *));
int __db_walk_cursors __P((DB*, DBC*, int (*)__P((DBC*, DBC*, uint32*, db_pgno_t, uint32, void *)), uint32*, db_pgno_t, uint32, void *));
int __db_backup_name __P((ENV*, const char *, DB_TXN*, char **));
#ifdef CONFIG_TEST
int __db_testcopy __P((ENV*, DB*, const char *));
#endif
int __db_testdocopy __P((ENV*, const char *));
int __db_cursor_int __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBTYPE, db_pgno_t, int, DB_LOCKER*, DBC**));
int __db_put __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBT*, DBT*, uint32));
int __db_del __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBT*, uint32));
int __db_sync __P((DB *));
int __db_associate __P((DB*, DB_THREAD_INFO*, DB_TXN*, DB*, int (*)(DB *, const DBT *, const DBT *, DBT *), uint32));
int __db_secondary_close __P((DB*, uint32));
int __db_associate_foreign __P((DB*, DB*, int (*)(DB *, const DBT *, DBT *, const DBT *, int *), uint32));
int __db_init_recover __P((ENV*, DB_DISTAB *));
int __db_addrem_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_addrem_42_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_big_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_big_42_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_ovref_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_relink_42_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_debug_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_noop_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_alloc_42_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_alloc_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_free_42_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_free_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_cksum_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_freedata_42_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_freedata_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_init_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_sort_44_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_trunc_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_realloc_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_relink_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_merge_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pgno_print __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_init_print __P((ENV*, DB_DISTAB *));
int __dbc_close(DBC *);
int __dbc_destroy(DBC *);
int __dbc_cmp __P((DBC*, DBC*, int *));
int __dbc_count __P((DBC*, db_recno_t *));
int __dbc_del (DBC*, uint32);
int __dbc_idel (DBC*, uint32);
#ifdef HAVE_COMPRESSION
int __dbc_bulk_del __P((DBC*, DBT*, uint32));
#endif
int __dbc_dup __P((DBC*, DBC**, uint32));
int __dbc_idup __P((DBC*, DBC**, uint32));
int __dbc_newopd __P((DBC*, db_pgno_t, DBC*, DBC**));
int __dbc_get(DBC*, DBT*, DBT*, uint32);
int __dbc_iget(DBC*, DBT*, DBT*, uint32);
int __dbc_put(DBC*, DBT*, DBT*, uint32);
int __dbc_iput(DBC*, DBT*, DBT*, uint32);
int __db_duperr __P((DB*, uint32));
int __dbc_cleanup __P((DBC*, DBC*, int));
int __dbc_secondary_get_pp(DBC*, DBT*, DBT*, uint32);
int __dbc_pget __P((DBC*, DBT*, DBT*, DBT*, uint32));
int __dbc_del_primary(DBC *);
int __db_s_first __P((DB*, DB**));
int __db_s_next __P((DB**, DB_TXN *));
int __db_s_done __P((DB*, DB_TXN *));
int __db_buildpartial __P((DB*, DBT*, DBT*, DBT *));
uint32 __db_partsize __P((uint32, DBT *));
#ifdef DIAGNOSTIC
void __db_check_skeyset __P((DB*, DBT *));
#endif
int __cdsgroup_begin __P((ENV*, DB_TXN**));
int __cdsgroup_begin_pp __P((DB_ENV*, DB_TXN**));
int __db_compact_int __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBT*, DBT*, DB_COMPACT*, uint32, DBT *));
int __db_exchange_page __P((DBC*, PAGE**, PAGE*, db_pgno_t, int));
int __db_truncate_overflow __P((DBC*, db_pgno_t, PAGE**, DB_COMPACT *));
int __db_truncate_root __P((DBC*, PAGE*, uint32, db_pgno_t*, uint32));
int __db_find_free __P((DBC*, uint32, uint32, db_pgno_t, db_pgno_t *));
int __db_relink __P((DBC*, PAGE*, PAGE*, db_pgno_t));
int __db_move_metadata __P((DBC*, DBMETA**, DB_COMPACT *));
int __db_pgin __P((DB_ENV*, db_pgno_t, void *, DBT *));
int __db_pgout __P((DB_ENV*, db_pgno_t, void *, DBT *));
int __db_decrypt_pg __P((ENV*, DB*, PAGE *));
int __db_encrypt_and_checksum_pg __P((ENV*, DB*, PAGE *));
void __db_metaswap __P((PAGE *));
int __db_byteswap __P((DB*, db_pgno_t, PAGE*, size_t, int));
int __db_pageswap __P((ENV*, DB*, void *, size_t, DBT*, int));
void __db_recordswap __P((uint32, uint32, void *, void *, uint32));
int __db_dispatch __P((ENV*, DB_DISTAB*, DBT*, DB_LSN*, db_recops, void *));
int __db_add_recovery __P((DB_ENV*, DB_DISTAB*, int (*)(DB_ENV *, DBT *, DB_LSN *, db_recops), uint32));
int __db_add_recovery_int __P((ENV*, DB_DISTAB*, int (*)(ENV *, DBT *, DB_LSN *, db_recops, void *), uint32));
int __db_txnlist_init __P((ENV*, DB_THREAD_INFO*, uint32, uint32, DB_LSN*, DB_TXNHEAD**));
int __db_txnlist_add __P((ENV*, DB_TXNHEAD*, uint32, uint32, DB_LSN *));
int __db_txnlist_remove __P((ENV*, DB_TXNHEAD*, uint32));
void __db_txnlist_ckp __P((ENV*, DB_TXNHEAD*, DB_LSN *));
void __db_txnlist_end __P((ENV*, DB_TXNHEAD *));
int __db_txnlist_find __P((ENV*, DB_TXNHEAD*, uint32, uint32 *));
int __db_txnlist_update __P((ENV*, DB_TXNHEAD*, uint32, uint32, DB_LSN*, uint32*, int));
int __db_txnlist_gen __P((ENV*, DB_TXNHEAD*, int, uint32, uint32));
int __db_txnlist_lsnadd __P((ENV*, DB_TXNHEAD*, DB_LSN *));
int __db_txnlist_lsnget __P((ENV*, DB_TXNHEAD*, DB_LSN*, uint32));
int __db_txnlist_lsninit __P((ENV*, DB_TXNHEAD*, DB_LSN *));
void __db_txnlist_print __P((DB_TXNHEAD *));
int __db_ditem_nolog __P((DBC*, PAGE*, uint32, uint32));
int __db_ditem __P((DBC*, PAGE*, uint32, uint32));
int __db_pitem_nolog __P((DBC*, PAGE*, uint32, uint32, DBT*, DBT *));
int __db_pitem __P((DBC*, PAGE*, uint32, uint32, DBT*, DBT *));
int __db_associate_pp __P((DB*, DB_TXN*, DB*, int (*)(DB *, const DBT *, const DBT *, DBT *), uint32));
int __db_close_pp __P((DB*, uint32));
int __db_cursor_pp __P((DB*, DB_TXN*, DBC**, uint32));
int __db_cursor __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBC**, uint32));
int __db_del_pp __P((DB*, DB_TXN*, DBT*, uint32));
int __db_exists __P((DB*, DB_TXN*, DBT*, uint32));
int __db_fd_pp __P((DB*, int *));
int __db_get_pp __P((DB*, DB_TXN*, DBT*, DBT*, uint32));
int __db_get __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBT*, DBT*, uint32));
int __db_join_pp __P((DB*, DBC**, DBC**, uint32));
int __db_key_range_pp __P((DB*, DB_TXN*, DBT*, DB_KEY_RANGE*, uint32));
int __db_open_pp __P((DB*, DB_TXN*, const char *, const char *, DBTYPE, uint32, int));
int __db_pget_pp __P((DB*, DB_TXN*, DBT*, DBT*, DBT*, uint32));
int __db_pget __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBT*, DBT*, DBT*, uint32));
int __db_put_pp __P((DB*, DB_TXN*, DBT*, DBT*, uint32));
int __db_compact_pp __P((DB*, DB_TXN*, DBT*, DBT*, DB_COMPACT*, uint32, DBT *));
int __db_associate_foreign_pp __P((DB*, DB*, int (*)(DB *, const DBT *, DBT *, const DBT *, int *), uint32));
int __db_sync_pp __P((DB*, uint32));
int __dbc_close_pp(DBC *);
int __dbc_cmp_pp __P((DBC*, DBC*, int *, uint32));
int __dbc_count_pp __P((DBC*, db_recno_t*, uint32));
int __dbc_del_pp (DBC*, uint32);
int __dbc_dup_pp __P((DBC*, DBC**, uint32));
int __dbc_get_pp(DBC*, DBT*, DBT*, uint32);
int __dbc_get_arg(DBC*, DBT*, DBT*, uint32);
int __db_secondary_close_pp __P((DB*, uint32));
int __dbc_pget_pp __P((DBC*, DBT*, DBT*, DBT*, uint32));
int __dbc_put_pp(DBC*, DBT*, DBT*, uint32);
int __db_txn_auto_init __P((ENV*, DB_THREAD_INFO*, DB_TXN**));
int __db_txn_auto_resolve __P((ENV*, DB_TXN*, int, int));
int __db_join __P((DB*, DBC**, DBC**, uint32));
int __db_join_close(DBC *);
int __db_secondary_corrupt __P((DB *));
int __db_new __P((DBC*, uint32, DB_LOCK*, PAGE**));
int __db_free __P((DBC*, PAGE*, uint32));
#ifdef HAVE_FTRUNCATE
void __db_freelist_pos __P((db_pgno_t, db_pgno_t*, uint32, uint32 *));
#endif
void __db_freelist_sort __P((db_pglist_t*, uint32));
#ifdef HAVE_FTRUNCATE
int __db_pg_truncate __P((DBC*, DB_TXN*, db_pglist_t*, DB_COMPACT*, uint32*, db_pgno_t, db_pgno_t*, DB_LSN*, int));
#endif
#ifdef HAVE_FTRUNCATE
int __db_free_truncate __P((DB*, DB_THREAD_INFO*, DB_TXN*, uint32, DB_COMPACT*, db_pglist_t**, uint32*, db_pgno_t *));
#endif
int __db_lprint(DBC *);
int __db_lget __P((DBC*, int, db_pgno_t, db_lockmode_t, uint32, DB_LOCK *));
#ifdef DIAGNOSTIC
int __db_haslock __P((ENV*, DB_LOCKER*, DB_MPOOLFILE*, db_pgno_t, db_lockmode_t, uint32));
#endif
#ifdef DIAGNOSTIC
int __db_has_pagelock __P((ENV*, DB_LOCKER*, DB_MPOOLFILE*, PAGE*, db_lockmode_t));
#endif
int __db_lput __P((DBC*, DB_LOCK *));
int __db_create_internal __P((DB**, ENV*, uint32));
int __dbh_am_chk __P((DB*, uint32));
int __db_get_flags __P((DB*, uint32 *));
int __db_set_flags __P((DB*, uint32));
int __db_get_lorder __P((DB*, int *));
int __db_set_lorder __P((DB*, int));
int __db_set_pagesize __P((DB*, uint32));
int __db_open __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, const char *, DBTYPE, uint32, int, db_pgno_t));
int __db_get_open_flags __P((DB*, uint32 *));
int __db_new_file __P((DB*, DB_THREAD_INFO*, DB_TXN*, DB_FH*, const char *));
int __db_init_subdb __P((DB*, DB*, const char *, DB_THREAD_INFO*, DB_TXN *));
int __db_chk_meta __P((ENV*, DB*, DBMETA*, uint32));
int __db_meta_setup __P((ENV*, DB*, const char *, DBMETA*, uint32, uint32));
int __db_reopen(DBC *);
int __db_goff __P((DBC*, DBT*, uint32, db_pgno_t, void **, uint32 *));
int __db_poff __P((DBC*, const DBT*, db_pgno_t *));
int __db_ovref __P((DBC*, db_pgno_t));
int __db_doff __P((DBC*, db_pgno_t));
int __db_moff __P((DBC*, const DBT*, db_pgno_t, uint32, int (*)(DB *, const DBT *, const DBT *), int *));
int __db_coff __P((DBC*, const DBT*, const DBT*, int (*)(DB *, const DBT *, const DBT *), int *));
int __db_vrfy_overflow __P((DB*, VRFY_DBINFO*, PAGE*, db_pgno_t, uint32));
int __db_vrfy_ovfl_structure __P((DB*, VRFY_DBINFO*, db_pgno_t, uint32, uint32));
int __db_safe_goff __P((DB*, VRFY_DBINFO*, db_pgno_t, DBT*, void *, uint32*, uint32));
void __db_loadme();
int __db_dumptree __P((DB*, DB_TXN*, char *, char *, db_pgno_t, db_pgno_t));
const FN * __db_get_flags_fn();
int __db_prnpage __P((DB*, DB_TXN*, db_pgno_t));
int __db_prpage __P((DB*, PAGE*, uint32));
const char * __db_lockmode_to_string __P((db_lockmode_t));
int __db_dumptree __P((DB*, DB_TXN*, char *, char *, db_pgno_t, db_pgno_t));
const FN * __db_get_flags_fn();
int __db_prpage_int __P((ENV*, DB_MSGBUF*, DB*, char *, PAGE*, uint32, uint8*, uint32));
void __db_prbytes __P((ENV*, DB_MSGBUF*, uint8*, uint32));
void __db_prflags __P((ENV*, DB_MSGBUF*, uint32, const FN*, const char *, const char *));
const char * __db_pagetype_to_string __P((uint32));
int __db_dump_pp __P((DB*, const char *, int (*)(void *, const void *), void *, int, int));
int __db_dump __P((DB*, const char *, int (*)(void *, const void *), void *, int, int));
int __db_prdbt __P((DBT*, int, const char *, void *, int (*)(void *, const void *), int, int));
int __db_prheader __P((DB*, const char *, int, int, void *, int (*)(void *, const void *), VRFY_DBINFO*, db_pgno_t));
int __db_prfooter __P((void *, int (*)(void *, const void *)));
int __db_pr_callback __P((void *, const void *));
const char * __db_dbtype_to_string __P((DBTYPE));
int __db_addrem_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_addrem_42_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_big_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_big_42_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_ovref_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_debug_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_noop_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_alloc_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_free_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_freedata_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_cksum_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_init_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_trunc_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_realloc_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_sort_44_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_alloc_42_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_free_42_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pg_freedata_42_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_relink_42_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_relink_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_merge_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
int __db_pgno_recover __P((ENV*, DBT*, DB_LSN*, db_recops, void *));
void __db_pglist_swap __P((uint32, void *));
void __db_pglist_print __P((ENV*, DB_MSGBUF*, DBT *));
int __db_traverse_big __P((DBC*, db_pgno_t, int (*)(DBC *, PAGE *, void *, int *), void *));
int __db_reclaim_callback __P((DBC*, PAGE*, void *, int *));
int __db_truncate_callback __P((DBC*, PAGE*, void *, int *));
int __env_dbremove_pp __P((DB_ENV*, DB_TXN*, const char *, const char *, uint32));
int __db_remove_pp __P((DB*, const char *, const char *, uint32));
int __db_remove __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, const char *, uint32));
int __db_remove_int __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, const char *, uint32));
int __db_inmem_remove __P((DB*, DB_TXN*, const char *));
int __env_dbrename_pp __P((DB_ENV*, DB_TXN*, const char *, const char *, const char *, uint32));
int __db_rename_pp __P((DB*, const char *, const char *, const char *, uint32));
int __db_rename_int __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, const char *, const char *, uint32));
int __db_ret __P((DBC*, PAGE*, uint32, DBT*, void **, uint32 *));
int __db_retcopy __P((ENV*, DBT*, void *, uint32, void **, uint32 *));
int __env_fileid_reset_pp __P((DB_ENV*, const char *, uint32));
int __env_fileid_reset __P((ENV*, DB_THREAD_INFO*, const char *, int));
int __env_lsn_reset_pp __P((DB_ENV*, const char *, uint32));
int __db_lsn_reset __P((DB_MPOOLFILE*, DB_THREAD_INFO *));
int __db_compare_both __P((DB*, const DBT*, const DBT*, const DBT*, const DBT *));
int __db_sort_multiple __P((DB*, DBT*, DBT*, uint32));
int __db_stat_pp __P((DB*, DB_TXN*, void *, uint32));
int __db_stat_print_pp __P((DB*, uint32));
int __db_stat_print __P((DB*, DB_THREAD_INFO*, uint32));
int __db_truncate_pp __P((DB*, DB_TXN*, uint32*, uint32));
int __db_truncate __P((DB*, DB_THREAD_INFO*, DB_TXN*, uint32 *));
int __db_upgrade_pp __P((DB*, const char *, uint32));
int __db_upgrade __P((DB*, const char *, uint32));
int __db_lastpgno __P((DB*, char *, DB_FH*, db_pgno_t *));
int __db_31_offdup __P((DB*, char *, DB_FH*, int, db_pgno_t *));
int __db_verify_pp __P((DB*, const char *, const char *, FILE*, uint32));
int __db_verify_internal __P((DB*, const char *, const char *, void *, int (*)(void *, const void *), uint32));
int __db_verify __P((DB*, DB_THREAD_INFO*, const char *, const char *, void *, int (*)(void *, const void *), void *, void *, uint32));
int __db_vrfy_common __P((DB*, VRFY_DBINFO*, PAGE*, db_pgno_t, uint32));
int __db_vrfy_datapage __P((DB*, VRFY_DBINFO*, PAGE*, db_pgno_t, uint32));
int __db_vrfy_meta __P((DB*, VRFY_DBINFO*, DBMETA*, db_pgno_t, uint32));
void __db_vrfy_struct_feedback __P((DB*, VRFY_DBINFO *));
int __db_salvage_pg __P((DB*, VRFY_DBINFO*, db_pgno_t, PAGE*, void *, int (*)(void *, const void *), uint32));
int __db_salvage_leaf __P((DB*, VRFY_DBINFO*, db_pgno_t, PAGE*, void *, int (*)(void *, const void *), uint32));
int __db_vrfy_inpitem __P((DB*, PAGE*, db_pgno_t, uint32, int, uint32, uint32*, uint32 *));
int __db_vrfy_duptype __P((DB*, VRFY_DBINFO*, db_pgno_t, uint32));
int __db_salvage_duptree __P((DB*, VRFY_DBINFO*, db_pgno_t, DBT*, void *, int (*)(void *, const void *), uint32));
int __db_vrfy_dbinfo_create __P((ENV*, DB_THREAD_INFO*, uint32, VRFY_DBINFO**));
int __db_vrfy_dbinfo_destroy __P((ENV*, VRFY_DBINFO *));
int __db_vrfy_getpageinfo __P((VRFY_DBINFO*, db_pgno_t, VRFY_PAGEINFO**));
int __db_vrfy_putpageinfo __P((ENV*, VRFY_DBINFO*, VRFY_PAGEINFO *));
int __db_vrfy_pgset __P((ENV*, DB_THREAD_INFO*, uint32, DB**));
int __db_vrfy_pgset_get __P((DB*, DB_THREAD_INFO*, DB_TXN*, db_pgno_t, int *));
int __db_vrfy_pgset_inc __P((DB*, DB_THREAD_INFO*, DB_TXN*, db_pgno_t));
int __db_vrfy_pgset_next __P((DBC*, db_pgno_t *));
int __db_vrfy_childcursor __P((VRFY_DBINFO*, DBC**));
int __db_vrfy_childput __P((VRFY_DBINFO*, db_pgno_t, VRFY_CHILDINFO *));
int __db_vrfy_ccset __P((DBC*, db_pgno_t, VRFY_CHILDINFO**));
int __db_vrfy_ccnext __P((DBC*, VRFY_CHILDINFO**));
int __db_vrfy_ccclose(DBC *);
int __db_salvage_init __P((VRFY_DBINFO *));
int __db_salvage_destroy __P((VRFY_DBINFO *));
int __db_salvage_getnext __P((VRFY_DBINFO*, DBC**, db_pgno_t*, uint32*, int));
int __db_salvage_isdone __P((VRFY_DBINFO*, db_pgno_t));
int __db_salvage_markdone __P((VRFY_DBINFO*, db_pgno_t));
int __db_salvage_markneeded __P((VRFY_DBINFO*, db_pgno_t, uint32));
int __db_vrfy_prdbt __P((DBT*, int, const char *, void *, int (*)(void *, const void *), int, int, VRFY_DBINFO *));
int __partition_init __P((DB*, uint32));
int __partition_set __P((DB*, uint32, DBT*, uint32 (* callback)(DB *, DBT * key)));
int __partition_set_dirs __P((DB*, const char **));
int __partition_open __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, DBTYPE, uint32, int, int));
int __partition_get_callback __P((DB*, uint32*, uint32(**callback) (DB*, DBT*key)));
int __partition_get_keys __P((DB*, uint32*, DBT**));
int __partition_get_dirs __P((DB*, const char ***));
int __partc_init(DBC *);
int __partc_get(DBC*, DBT*, DBT*, uint32);
int __partition_close __P((DB*, DB_TXN*, uint32));
int __partition_sync __P((DB *));
int __partition_stat __P((DBC*, void *, uint32));
int __part_truncate __P((DBC*, uint32 *));
int __part_compact __P((DB*, DB_THREAD_INFO*, DB_TXN*, DBT*, DBT*, DB_COMPACT*, uint32, DBT *));
int __part_lsn_reset __P((DB*, DB_THREAD_INFO *));
int __part_fileid_reset __P((ENV*, DB_THREAD_INFO*, const char *, uint32, int));
int __part_key_range __P((DBC*, DBT*, DB_KEY_RANGE*, uint32));
int __part_remove __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, const char *, uint32));
int __part_rename __P((DB*, DB_THREAD_INFO*, DB_TXN*, const char *, const char *, const char *));
int __part_verify __P((DB*, VRFY_DBINFO*, const char *, void *, int (*)(void *, const void *), uint32));
int __part_testdocopy __P((DB*, const char *));
int __db_no_partition(ENV *);
int __partition_set __P((DB*, uint32, DBT*, uint32 (* callback)(DB *, DBT * key)));
int __partition_get_callback __P((DB*, uint32*, uint32(**callback) (DB*, DBT*key)));
int __partition_get_dirs __P((DB*, const char ***));
int __partition_get_keys __P((DB*, uint32*, DBT**));
int __partition_init __P((DB*, uint32));
int __part_fileid_reset __P((ENV*, DB_THREAD_INFO*, const char *, uint32, int));
int __partition_set_dirs __P((DB*, const char **));

#if defined(__cplusplus)
}
#endif
#endif /* !_db_ext_h_ */
