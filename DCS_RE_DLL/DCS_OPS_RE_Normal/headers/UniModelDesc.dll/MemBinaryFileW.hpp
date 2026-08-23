#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: MemBinaryFileW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class MemBinaryFileW
{
public:

    // RVA: 0x3 | Ordinal: 4
        void MemBinaryFileW(void);

    // RVA: 0x67 | Ordinal: 104
        void getData(void) const;

    // RVA: 0x9D | Ordinal: 158
        void getStrings(void) const;

    // RVA: 0x118 | Ordinal: 281
        void seek(unsigned __int64);

    // RVA: 0x140 | Ordinal: 321
        void write(void const *, unsigned __int64);

    // RVA: 0x141 | Ordinal: 322
        void writeSTLString(class ed::basic_string<char> const &);

    // RVA: 0x10 | Ordinal: 17
        void _MemBinaryFileW(void);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_MEMBINARYFILEW_HPP
