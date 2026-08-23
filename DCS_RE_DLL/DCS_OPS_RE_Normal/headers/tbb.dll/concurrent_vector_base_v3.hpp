#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_vector_base_v3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_vector_base_v3
{
public:

    // RVA: 0x49 | Ordinal: 74
        void internal_assign(class tbb::internal::concurrent_vector_base_v3 const &, unsigned __int64, void (__cdecl *)(void *, unsigned __int64), void (__cdecl *)(void *, void const *, unsigned __int64), void (__cdecl *)(void *, void const *, unsigned __int64));

    // RVA: 0x4D | Ordinal: 78
        void internal_capacity(void) const;

    // RVA: 0x4F | Ordinal: 80
        void internal_clear(void (__cdecl *)(void *, unsigned __int64));

    // RVA: 0x50 | Ordinal: 81
        void internal_compact(unsigned __int64, void *, void (__cdecl *)(void *, unsigned __int64), void (__cdecl *)(void *, void const *, unsigned __int64));

    // RVA: 0x60 | Ordinal: 97
        void internal_copy(class tbb::internal::concurrent_vector_base_v3 const &, unsigned __int64, void (__cdecl *)(void *, void const *, unsigned __int64));

    // RVA: 0x73 | Ordinal: 116
        void internal_grow_by(unsigned __int64, unsigned __int64, void (__cdecl *)(void *, void const *, unsigned __int64), void const *);

    // RVA: 0x76 | Ordinal: 119
        void internal_grow_to_at_least(unsigned __int64, unsigned __int64, void (__cdecl *)(void *, void const *, unsigned __int64), void const *);

    // RVA: 0x77 | Ordinal: 120
        void internal_grow_to_at_least_with_result(unsigned __int64, unsigned __int64, void (__cdecl *)(void *, void const *, unsigned __int64), void const *);

    // RVA: 0x83 | Ordinal: 132
        void internal_push_back(unsigned __int64, unsigned __int64 &);

    // RVA: 0x91 | Ordinal: 146
        void internal_reserve(unsigned __int64, unsigned __int64, unsigned __int64);

    // RVA: 0x92 | Ordinal: 147
        void internal_resize(unsigned __int64, unsigned __int64, unsigned __int64, void const *, void (__cdecl *)(void *, unsigned __int64), void (__cdecl *)(void *, void const *, unsigned __int64));

    // RVA: 0x99 | Ordinal: 154
        void internal_swap(class tbb::internal::concurrent_vector_base_v3 &);

    // RVA: 0x9C | Ordinal: 157
        void internal_throw_exception(unsigned __int64) const;

    // RVA: 0xB | Ordinal: 12
        void _concurrent_vector_base_v3(void);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_VECTOR_BASE_V3_HPP
