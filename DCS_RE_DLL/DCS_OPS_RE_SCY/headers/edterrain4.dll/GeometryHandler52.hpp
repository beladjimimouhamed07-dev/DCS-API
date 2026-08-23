#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: GeometryHandler52
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {
namespace scene5 {

class GeometryHandler52
{
public:

    // RVA: 0x257 | Ordinal: 600
        void fillOffshoreMeshStreams(struct offshore::Mesh &, class ed::vector<struct landscape5::scene5::InstanceInfo, class ed::allocator<struct landscape5::scene5::InstanceInfo>> const &);

    // RVA: 0x303 | Ordinal: 772
        void getInstanceData(int);

    // RVA: 0x355 | Ordinal: 854
        void getOptions(int);

    // RVA: 0x382 | Ordinal: 899
        void getPos(int);

    // RVA: 0x3AA | Ordinal: 939
        void getSeed(int);

    // RVA: 0x3FC | Ordinal: 1021
        void getType(int);

    // RVA: 0x41B | Ordinal: 1052
        void handlerType(void);

    // RVA: 0x4CD | Ordinal: 1230
        void packOptions(unsigned int, unsigned int);

    // RVA: 0x4CE | Ordinal: 1231
        void packType(int, unsigned int);

    // RVA: 0x57B | Ordinal: 1404
        void setOptions(int, unsigned int);

    // RVA: 0x581 | Ordinal: 1410
        void setSeed(int, float);

    // RVA: 0x58A | Ordinal: 1419
        void setType(int, int);

    // RVA: 0x5C1 | Ordinal: 1474
        void unpackOptions(unsigned int);

    // RVA: 0x5C2 | Ordinal: 1475
        void unpackType(unsigned int);

    // RVA: 0x5C9 | Ordinal: 1482
        void updateStreamCache(struct landscape4::GeometrySource const &);
};

} // namespace scene5
} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_GEOMETRYHANDLER52_HPP
