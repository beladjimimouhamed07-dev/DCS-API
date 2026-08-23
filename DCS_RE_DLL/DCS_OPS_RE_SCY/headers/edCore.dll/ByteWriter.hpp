#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: ByteWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mail {

class ByteWriter
{
public:

    // RVA: 0x40 | Ordinal: 65
        void ByteWriter(void);

    // RVA: 0x1AB | Ordinal: 428
        void end(void);

    // RVA: 0x2F0 | Ordinal: 753
        void prepare(void);

    // RVA: 0x30B | Ordinal: 780
        void putData(void const *, unsigned __int64);

    // RVA: 0x30C | Ordinal: 781
        void putInt(int, unsigned __int64);

    // RVA: 0xAE | Ordinal: 175
        void _ByteWriter(void);
};

} // namespace Mail

// DCS_OPS_RE_EDCORE.DLL_BYTEWRITER_HPP
