#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: MapRegistry
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class MapRegistry
{
public:

    // RVA: 0x340 | Ordinal: 833
        void MapRegistry(void);

    // RVA: 0x341 | Ordinal: 834
        void MapRegistry(class openvdb::v9_0::math::MapRegistry &&);

    // RVA: 0x342 | Ordinal: 835
        void MapRegistry(class openvdb::v9_0::math::MapRegistry const &);

    // RVA: 0x5A5 | Ordinal: 1446
        void clear(void);

    // RVA: 0x605 | Ordinal: 1542
        void createMap(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x73D | Ordinal: 1854
        void instance(void);

    // RVA: 0x77D | Ordinal: 1918
        void isRegistered(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x870 | Ordinal: 2161
        void registerMap(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class openvdb::v9_0::math::MapBase> (__cdecl *)(void));

    // RVA: 0x975 | Ordinal: 2422
        void staticInstance(void);

    // RVA: 0x9C8 | Ordinal: 2505
        void unregisterMap(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x3E1 | Ordinal: 994
        void _MapRegistry(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_MAPREGISTRY_HPP
