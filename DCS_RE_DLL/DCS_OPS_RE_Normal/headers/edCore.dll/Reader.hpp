#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Reader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mail {

class Reader
{
public:

    // RVA: 0x80 | Ordinal: 129
        void Reader(struct Mail::VarNil const &);

    // RVA: 0x81 | Ordinal: 130
        void Reader(class Mail::Message const &);

    // RVA: 0x82 | Ordinal: 131
        void Reader(void);

    // RVA: 0x1E0 | Ordinal: 481
        void get(unsigned char);

    // RVA: 0x25C | Ordinal: 605
        void init(void);

    // RVA: 0x319 | Ordinal: 794
        void readFixed(int);

    // RVA: 0x31A | Ordinal: 795
        void readFixed(int, int);

    // RVA: 0x31C | Ordinal: 797
        void readHalf(void);

    // RVA: 0x3B5 | Ordinal: 950
        void stream(void *, int);

    // RVA: 0xCD | Ordinal: 206
        void _Reader(void);
};

} // namespace Mail

// DCS_OPS_RE_EDCORE.DLL_READER_HPP
