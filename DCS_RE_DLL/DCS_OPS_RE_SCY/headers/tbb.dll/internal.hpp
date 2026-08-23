#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: internal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class internal
{
public:

    // RVA: 0x10 | Ordinal: 17
        void NFS_Allocate(unsigned __int64, unsigned __int64, void *);

    // RVA: 0x11 | Ordinal: 18
        void NFS_Free(void *);

    // RVA: 0x12 | Ordinal: 19
        void NFS_GetLineSize(void);

    // RVA: 0x1E | Ordinal: 31
        void allocate_closure_v3(unsigned __int64);

    // RVA: 0x1F | Ordinal: 32
        void allocate_via_handler_v3(unsigned __int64);

    // RVA: 0x24 | Ordinal: 37
        void call_itt_notify_v5(int, void *);

    // RVA: 0x2A | Ordinal: 43
        void deallocate_via_handler_v3(void *);

    // RVA: 0x36 | Ordinal: 55
        void free_closure_v3(void *);

    // RVA: 0x37 | Ordinal: 56
        void get_initial_auto_partitioner_divisor(void);

    // RVA: 0x38 | Ordinal: 57
        void handle_perror(int, char const *);

    // RVA: 0x51 | Ordinal: 82
        void internal_condition_variable_notify_all(union tbb::interface5::internal::condvar_impl_t &);

    // RVA: 0x52 | Ordinal: 83
        void internal_condition_variable_notify_one(union tbb::interface5::internal::condvar_impl_t &);

    // RVA: 0x53 | Ordinal: 84
        void internal_condition_variable_wait(union tbb::interface5::internal::condvar_impl_t &, class tbb::mutex *, class tbb::tick_count::interval_t const *);

    // RVA: 0x6A | Ordinal: 107
        void internal_destroy_condition_variable(union tbb::interface5::internal::condvar_impl_t &);

    // RVA: 0x79 | Ordinal: 122
        void internal_initialize_condition_variable(union tbb::interface5::internal::condvar_impl_t &);

    // RVA: 0xAA | Ordinal: 171
        void is_malloc_used_v3(void);

    // RVA: 0xAC | Ordinal: 173
        void isolate_within_arena(class tbb::interface7::internal::delegate_base &, __int64);

    // RVA: 0xAD | Ordinal: 174
        void itt_load_pointer_v3(void const *);

    // RVA: 0xAE | Ordinal: 175
        void itt_load_pointer_with_acquire_v3(void const *);

    // RVA: 0xAF | Ordinal: 176
        void itt_make_task_group_v7(enum tbb::internal::itt_domain_enum, void *, unsigned __int64, void *, unsigned __int64, enum tbb::internal::string_index);

    // RVA: 0xB0 | Ordinal: 177
        void itt_metadata_str_add_v7(enum tbb::internal::itt_domain_enum, void *, unsigned __int64, enum tbb::internal::string_index, char const *);

    // RVA: 0xB1 | Ordinal: 178
        void itt_region_begin_v9(enum tbb::internal::itt_domain_enum, void *, unsigned __int64, void *, unsigned __int64, enum tbb::internal::string_index);

    // RVA: 0xB2 | Ordinal: 179
        void itt_region_end_v9(enum tbb::internal::itt_domain_enum, void *, unsigned __int64);

    // RVA: 0xB3 | Ordinal: 180
        void itt_relation_add_v7(enum tbb::internal::itt_domain_enum, void *, unsigned __int64, enum tbb::internal::itt_relation, void *, unsigned __int64);

    // RVA: 0xB4 | Ordinal: 181
        void itt_set_sync_name_v3(void *, wchar_t const *);

    // RVA: 0xB5 | Ordinal: 182
        void itt_store_pointer_with_release_v3(void *, void *);

    // RVA: 0xB6 | Ordinal: 183
        void itt_task_begin_v7(enum tbb::internal::itt_domain_enum, void *, unsigned __int64, void *, unsigned __int64, enum tbb::internal::string_index);

    // RVA: 0xB7 | Ordinal: 184
        void itt_task_end_v7(enum tbb::internal::itt_domain_enum);

    // RVA: 0xBD | Ordinal: 190
        void move_v3(class tbb::internal::tbb_thread_v3 &, class tbb::internal::tbb_thread_v3 &);

    // RVA: 0xCA | Ordinal: 203
        void runtime_warning(char const *, ...);

    // RVA: 0xD2 | Ordinal: 211
        void thread_get_id_v3(void);

    // RVA: 0xD3 | Ordinal: 212
        void thread_sleep_v3(class tbb::tick_count::interval_t const &);

    // RVA: 0xD4 | Ordinal: 213
        void thread_yield_v3(void);

    // RVA: 0xD5 | Ordinal: 214
        void throw_bad_last_alloc_exception_v4(void);

    // RVA: 0xD6 | Ordinal: 215
        void throw_exception_v4(enum tbb::internal::exception_id);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_INTERNAL_HPP
