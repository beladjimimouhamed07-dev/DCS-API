#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Mail
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Mail
{
public:

    // RVA: 0x1B5 | Ordinal: 438
        void exit(void);

    // RVA: 0x25A | Ordinal: 603
        void init(void);

    // RVA: 0x2A1 | Ordinal: 674
        void mem_alloc(enum Mail::AllocType, unsigned __int64);

    // RVA: 0x2A2 | Ordinal: 675
        void mem_free(enum Mail::AllocType, void *);

    // RVA: 0xFD | Ordinal: 254
        void operator__(class Mail::Stream &, class ed::basic_string<char> &);
};

// DCS_OPS_RE_EDCORE.DLL_MAIL_HPP
