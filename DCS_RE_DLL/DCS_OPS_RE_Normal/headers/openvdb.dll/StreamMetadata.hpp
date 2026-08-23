#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: StreamMetadata
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class StreamMetadata
{
public:

    // RVA: 0x371 | Ordinal: 882
        void StreamMetadata(class std::ios_base &);

    // RVA: 0x372 | Ordinal: 883
        void StreamMetadata(class openvdb::v9_0::io::StreamMetadata const &);

    // RVA: 0x373 | Ordinal: 884
        void StreamMetadata(void);

    // RVA: 0x508 | Ordinal: 1289
        void __setTest(unsigned int);

    // RVA: 0x509 | Ordinal: 1290
        void __test(void) const;

    // RVA: 0x56F | Ordinal: 1392
        void auxData(void);

    // RVA: 0x570 | Ordinal: 1393
        void auxData(void) const;

    // RVA: 0x585 | Ordinal: 1414
        void backgroundPtr(void) const;

    // RVA: 0x5C8 | Ordinal: 1481
        void compression(void) const;

    // RVA: 0x5EE | Ordinal: 1519
        void countingPasses(void) const;

    // RVA: 0x60C | Ordinal: 1549
        void delayedLoadMeta(void) const;

    // RVA: 0x64B | Ordinal: 1612
        void fileVersion(void) const;

    // RVA: 0x6E9 | Ordinal: 1770
        void gridClass(void) const;

    // RVA: 0x6EE | Ordinal: 1775
        void gridMetadata(void);

    // RVA: 0x6EF | Ordinal: 1776
        void gridMetadata(void) const;

    // RVA: 0x702 | Ordinal: 1795
        void halfFloat(void) const;

    // RVA: 0x795 | Ordinal: 1942
        void leaf(void) const;

    // RVA: 0x79B | Ordinal: 1948
        void libraryVersion(void) const;

    // RVA: 0x7E6 | Ordinal: 2023
        void pass(void) const;

    // RVA: 0x8BC | Ordinal: 2237
        void seekable(void) const;

    // RVA: 0x8C6 | Ordinal: 2247
        void setBackgroundPtr(void const *);

    // RVA: 0x8CE | Ordinal: 2255
        void setCompression(unsigned int);

    // RVA: 0x8D1 | Ordinal: 2258
        void setCountingPasses(bool);

    // RVA: 0x8DB | Ordinal: 2268
        void setFileVersion(unsigned int);

    // RVA: 0x8ED | Ordinal: 2286
        void setGridClass(unsigned int);

    // RVA: 0x8F3 | Ordinal: 2292
        void setHalfFloat(bool);

    // RVA: 0x8FF | Ordinal: 2304
        void setLeaf(unsigned __int64);

    // RVA: 0x901 | Ordinal: 2306
        void setLibraryVersion(struct openvdb::v9_0::VersionId);

    // RVA: 0x91D | Ordinal: 2334
        void setPass(unsigned int);

    // RVA: 0x925 | Ordinal: 2342
        void setSeekable(bool);

    // RVA: 0x950 | Ordinal: 2385
        void setWriteGridStats(bool);

    // RVA: 0x980 | Ordinal: 2433
        void str(void) const;

    // RVA: 0x994 | Ordinal: 2453
        void transferTo(class std::ios_base &) const;

    // RVA: 0xA0E | Ordinal: 2575
        void writeGridStats(void) const;

    // RVA: 0x3F2 | Ordinal: 1011
        void _StreamMetadata(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_STREAMMETADATA_HPP
