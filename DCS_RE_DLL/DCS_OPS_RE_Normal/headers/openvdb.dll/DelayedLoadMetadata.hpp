#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: DelayedLoadMetadata
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace io {

class DelayedLoadMetadata
{
public:

    // RVA: 0x316 | Ordinal: 791
        void DelayedLoadMetadata(class openvdb::v9_0::io::DelayedLoadMetadata const &);

    // RVA: 0x317 | Ordinal: 792
        void DelayedLoadMetadata(void);

    // RVA: 0x56D | Ordinal: 1390
        void asBool(void) const;

    // RVA: 0x5A4 | Ordinal: 1445
        void clear(void);

    // RVA: 0x5DB | Ordinal: 1500
        void copy(class openvdb::v9_0::Metadata const &);

    // RVA: 0x5DC | Ordinal: 1501
        void copy(void) const;

    // RVA: 0x606 | Ordinal: 1543
        void createMetadata(void);

    // RVA: 0x63B | Ordinal: 1596
        void empty(void) const;

    // RVA: 0x67A | Ordinal: 1659
        void getCompressedSize(unsigned __int64) const;

    // RVA: 0x6AA | Ordinal: 1707
        void getMask(unsigned __int64) const;

    // RVA: 0x785 | Ordinal: 1926
        void isRegisteredType(void);

    // RVA: 0x86A | Ordinal: 2155
        void readValue(class std::basic_istream<char, struct std::char_traits<char>> &, unsigned int);

    // RVA: 0x879 | Ordinal: 2170
        void registerType(void);

    // RVA: 0x89A | Ordinal: 2203
        void resizeCompressedSize(unsigned __int64);

    // RVA: 0x89B | Ordinal: 2204
        void resizeMask(unsigned __int64);

    // RVA: 0x8CC | Ordinal: 2253
        void setCompressedSize(unsigned __int64, __int64 const &);

    // RVA: 0x90B | Ordinal: 2316
        void setMask(unsigned __int64, signed char const &);

    // RVA: 0x965 | Ordinal: 2406
        void size(void) const;

    // RVA: 0x976 | Ordinal: 2423
        void staticTypeName(void);

    // RVA: 0x97B | Ordinal: 2428
        void str(void) const;

    // RVA: 0x9BF | Ordinal: 2496
        void typeName(void) const;

    // RVA: 0x9CA | Ordinal: 2507
        void unregisterType(void);

    // RVA: 0xA1A | Ordinal: 2587
        void writeValue(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3D5 | Ordinal: 982
        void _DelayedLoadMetadata(void);
};

} // namespace io
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_DELAYEDLOADMETADATA_HPP
