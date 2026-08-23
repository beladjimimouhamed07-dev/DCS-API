#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: compression
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class compression
{
public:

    // RVA: 0x590 | Ordinal: 1425
        void bloscCanCompress(void);

    // RVA: 0x591 | Ordinal: 1426
        void bloscCompress(char const *, unsigned __int64, unsigned __int64 &, bool);

    // RVA: 0x592 | Ordinal: 1427
        void bloscCompress(char *, unsigned __int64 &, unsigned __int64, char const *, unsigned __int64);

    // RVA: 0x593 | Ordinal: 1428
        void bloscCompressedSize(char const *, unsigned __int64);

    // RVA: 0x594 | Ordinal: 1429
        void bloscDecompress(char const *, unsigned __int64, bool);

    // RVA: 0x595 | Ordinal: 1430
        void bloscDecompress(char *, unsigned __int64, unsigned __int64, char const *);

    // RVA: 0x599 | Ordinal: 1434
        void bloscUncompressedSize(char const *);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_COMPRESSION_HPP
