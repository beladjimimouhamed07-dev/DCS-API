#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: concurrent_vector_base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {
namespace internal {

class concurrent_vector_base
{
public:

    // RVA: 0x48 | Ordinal: 73
        void internal_assign(class tbb::internal::concurrent_vector_base const &, unsigned __int64, void (__cdecl *)(void *, unsigned __int64), void (__cdecl *)(void *, void const *, unsigned __int64), void (__cdecl *)(void *, void const *, unsigned __int64));

    // RVA: 0x4C | Ordinal: 77
        void internal_capacity(void) const;

    // RVA: 0x4E | Ordinal: 79
        void internal_clear(void (__cdecl *)(void *, unsigned __int64), bool);

    // RVA: 0x5F | Ordinal: 96
        void internal_copy(class tbb::internal::concurrent_vector_base const &, unsigned __int64, void (__cdecl *)(void *, void const *, unsigned __int64));

    // RVA: 0x72 | Ordinal: 115
        void internal_grow_by(unsigned __int64, unsigned __int64, void (__cdecl *)(void *, unsigned __int64));

    // RVA: 0x75 | Ordinal: 118
        void internal_grow_to_at_least(unsigned __int64, unsigned __int64, void (__cdecl *)(void *, unsigned __int64));

    // RVA: 0x82 | Ordinal: 131
        void internal_push_back(unsigned __int64, unsigned __int64 &);

    // RVA: 0x90 | Ordinal: 145
        void internal_reserve(unsigned __int64, unsigned __int64, unsigned __int64);
};

} // namespace internal
} // namespace tbb

// DCS_OPS_RE_TBB.DLL_CONCURRENT_VECTOR_BASE_HPP
