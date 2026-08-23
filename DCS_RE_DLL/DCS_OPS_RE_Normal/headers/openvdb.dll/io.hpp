#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: io
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class io
{
public:

    // RVA: 0x596 | Ordinal: 1431
        void bloscFromStream(class std::basic_istream<char, struct std::char_traits<char>> &, char *, unsigned __int64);

    // RVA: 0x597 | Ordinal: 1432
        void bloscToStream(class std::basic_ostream<char, struct std::char_traits<char>> &, char const *, unsigned __int64, unsigned __int64);

    // RVA: 0x598 | Ordinal: 1433
        void bloscToStreamSize(char const *, unsigned __int64, unsigned __int64);

    // RVA: 0x5B0 | Ordinal: 1457
        void clearStreamMetadataPtr(class std::ios_base &);

    // RVA: 0x5C9 | Ordinal: 1482
        void compressionToString(unsigned int);

    // RVA: 0x680 | Ordinal: 1665
        void getDataCompression(class std::ios_base &);

    // RVA: 0x683 | Ordinal: 1668
        void getFormatVersion(class std::ios_base &);

    // RVA: 0x691 | Ordinal: 1682
        void getGridBackgroundValuePtr(class std::ios_base &);

    // RVA: 0x695 | Ordinal: 1686
        void getGridClass(class std::ios_base &);

    // RVA: 0x699 | Ordinal: 1690
        void getHalfFloat(class std::ios_base &);

    // RVA: 0x6A6 | Ordinal: 1703
        void getLibraryVersion(class std::ios_base &);

    // RVA: 0x6A9 | Ordinal: 1706
        void getMappedFilePtr(class std::ios_base &);

    // RVA: 0x6CA | Ordinal: 1739
        void getStreamMetadataPtr(class std::ios_base &);

    // RVA: 0x6E1 | Ordinal: 1762
        void getVersion(class std::ios_base &);

    // RVA: 0x6E2 | Ordinal: 1763
        void getWriteGridStatsMetadata(class std::ios_base &);

    // RVA: 0x8D3 | Ordinal: 2260
        void setCurrentVersion(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x8D7 | Ordinal: 2264
        void setDataCompression(class std::ios_base &, unsigned int);

    // RVA: 0x8E9 | Ordinal: 2282
        void setGridBackgroundValuePtr(class std::ios_base &, void const *);

    // RVA: 0x8EE | Ordinal: 2287
        void setGridClass(class std::ios_base &, unsigned int);

    // RVA: 0x8F4 | Ordinal: 2293
        void setHalfFloat(class std::ios_base &, bool);

    // RVA: 0x90A | Ordinal: 2315
        void setMappedFilePtr(class std::ios_base &, class std::shared_ptr<class openvdb::v9_0::io::MappedFile> &);

    // RVA: 0x932 | Ordinal: 2355
        void setStreamMetadataPtr(class std::ios_base &, class std::shared_ptr<class openvdb::v9_0::io::StreamMetadata> &, bool);

    // RVA: 0x94F | Ordinal: 2384
        void setVersion(class std::ios_base &, struct openvdb::v9_0::VersionId const &, unsigned int);

    // RVA: 0x951 | Ordinal: 2386
        void setWriteGridStatsMetadata(class std::ios_base &, bool);

    // RVA: 0x9CE | Ordinal: 2511
        void unzipFromStream(class std::basic_istream<char, struct std::char_traits<char>> &, char *, unsigned __int64);

    // RVA: 0xA22 | Ordinal: 2595
        void zipToStream(class std::basic_ostream<char, struct std::char_traits<char>> &, char const *, unsigned __int64);

    // RVA: 0xA23 | Ordinal: 2596
        void zipToStreamSize(char const *, unsigned __int64);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_IO_HPP
