/* DO NOT EDIT: automatically built by dist/s_include. */
#ifndef	_lock_ext_h_
#define	_lock_ext_h_

#if defined(__cplusplus)
extern "C" {
#endif

int __lock_vec_pp(DB_ENV *, uint32, uint32, DB_LOCKREQ *, int, DB_LOCKREQ **);
int __lock_vec(ENV *, DB_LOCKER *, uint32, DB_LOCKREQ *, int, DB_LOCKREQ **);
int __lock_get_pp(DB_ENV *, uint32, uint32, DBT *, db_lockmode_t, DB_LOCK *);
int __lock_get(ENV *, DB_LOCKER *, uint32, const DBT *, db_lockmode_t, DB_LOCK *);
int  __lock_get_internal(DB_LOCKTAB *, DB_LOCKER *, uint32, const DBT *, db_lockmode_t, db_timeout_t, DB_LOCK *);
int  __lock_put_pp(DB_ENV *, DB_LOCK *);
int  FASTCALL __lock_put(ENV *, DB_LOCK *);
int __lock_downgrade(ENV *, DB_LOCK *, db_lockmode_t, uint32);
int __lock_locker_same_family(ENV *, DB_LOCKER *, DB_LOCKER *, int *);
int __lock_wakeup(ENV *, const DBT *);
int __lock_promote(DB_LOCKTAB *, DB_LOCKOBJ *, int *, uint32);
int __lock_change(ENV *, DB_LOCK *, DB_LOCK *);
int __lock_detect_pp(DB_ENV *, uint32, uint32, int *);
int __lock_detect(ENV *, uint32, int *);
int __lock_failchk(ENV *);
int __lock_id_pp(DB_ENV *, uint32 *);
int  __lock_id(ENV *, uint32 *, DB_LOCKER **);
void __lock_set_thread_id(void *, pid_t, db_threadid_t);
int __lock_id_free_pp(DB_ENV *, uint32);
int  __lock_id_free(ENV *, DB_LOCKER *);
int __lock_id_set(ENV *, uint32, uint32);
int __lock_getlocker(DB_LOCKTAB *, uint32, int, DB_LOCKER **);
int __lock_getlocker_int(DB_LOCKTAB *, uint32, int, DB_LOCKER **);
int __lock_addfamilylocker(ENV *, uint32, uint32, uint32);
int __lock_freelocker (DB_LOCKTAB *, DB_LOCKER *);
int __lock_familyremove (DB_LOCKTAB *, DB_LOCKER *);
int __lock_fix_list(ENV *, DBT *, uint32);
int __lock_get_list(ENV *, DB_LOCKER *, uint32, db_lockmode_t, DBT *);
void __lock_list_print(ENV *, DB_MSGBUF *, DBT *);
int __lock_env_create(DB_ENV *);
void __lock_env_destroy(DB_ENV *);
int __lock_get_lk_conflicts(DB_ENV *, const uint8 **, int *);
int __lock_set_lk_conflicts(DB_ENV *, uint8 *, int);
int __lock_get_lk_detect(DB_ENV *, uint32 *);
int __lock_set_lk_detect(DB_ENV *, uint32);
int __lock_get_lk_max_locks(DB_ENV *, uint32 *);
int __lock_set_lk_max_locks(DB_ENV *, uint32);
int __lock_get_lk_max_lockers(DB_ENV *, uint32 *);
int __lock_set_lk_max_lockers(DB_ENV *, uint32);
int __lock_get_lk_max_objects(DB_ENV *, uint32 *);
int __lock_set_lk_max_objects(DB_ENV *, uint32);
int __lock_get_lk_partitions(DB_ENV *, uint32 *);
int __lock_set_lk_partitions(DB_ENV *, uint32);
int __lock_get_lk_tablesize(DB_ENV *, uint32 *);
int __lock_set_lk_tablesize(DB_ENV *, uint32);
int __lock_set_lk_priority(DB_ENV *, uint32, uint32);
int __lock_get_lk_priority(DB_ENV *, uint32, uint32 *);
int __lock_get_env_timeout(DB_ENV *, db_timeout_t *, uint32);
int __lock_set_env_timeout(DB_ENV *, db_timeout_t, uint32);
int __lock_open(ENV *);
int __lock_env_refresh(ENV *);
uint32 __lock_region_mutex_count(ENV *);
uint32 __lock_region_mutex_max(ENV *);
size_t __lock_region_max(ENV *);
size_t __lock_region_size(ENV *, size_t);
int __lock_stat_pp(DB_ENV *, DB_LOCK_STAT **, uint32);
int __lock_stat_print_pp(DB_ENV *, uint32);
int  __lock_stat_print(ENV *, uint32);
void __lock_printlock(DB_LOCKTAB *, DB_MSGBUF *mbp, struct __db_lock *, int);
int __lock_set_timeout(ENV *, DB_LOCKER *, db_timeout_t, uint32);
int __lock_set_timeout_internal(ENV *, DB_LOCKER *, db_timeout_t, uint32);
int __lock_inherit_timeout(ENV *, DB_LOCKER *, DB_LOCKER *);
uint32 __lock_ohash(const DBT *);
uint32 __lock_lhash(DB_LOCKOBJ *);
int __lock_nomem(ENV *, const char *);

#if defined(__cplusplus)
}
#endif
#endif /* !_lock_ext_h_ */
