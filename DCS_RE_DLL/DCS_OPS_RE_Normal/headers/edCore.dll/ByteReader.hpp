#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: ByteReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mail {

class ByteReader
{
public:

    // RVA: 0x3E | Ordinal: 63
        void ByteReader(class ed::Ptr<class Mail::Chunk, struct ed::DefaultDeleter> const &);

    // RVA: 0x3F | Ordinal: 64
        void ByteReader(void);

    // RVA: 0x140 | Ordinal: 321
        void add(class ed::Ptr<class Mail::Chunk, struct ed::DefaultDeleter> const &);

    // RVA: 0x1EA | Ordinal: 491
        void getData(unsigned __int64);

    // RVA: 0x1EB | Ordinal: 492
        void getData(void *, unsigned __int64);

    // RVA: 0x1F2 | Ordinal: 499
        void getInt(unsigned __int64);

    // RVA: 0x20D | Ordinal: 526
        void getRemainingData(void);

    // RVA: 0x24D | Ordinal: 590
        void init(class ed::Ptr<class Mail::Chunk, struct ed::DefaultDeleter> const &);

    // RVA: 0xAD | Ordinal: 174
        void _ByteReader(void);
};

} // namespace Mail

// DCS_OPS_RE_EDCORE.DLL_BYTEREADER_HPP
