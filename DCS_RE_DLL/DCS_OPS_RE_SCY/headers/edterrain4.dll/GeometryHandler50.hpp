#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: GeometryHandler50
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {
namespace scene5 {

class GeometryHandler50
{
public:

    // RVA: 0x256 | Ordinal: 599
        void fillOffshoreMeshStreams(struct offshore::Mesh &, class ed::vector<struct landscape5::scene5::InstanceInfo, class ed::allocator<struct landscape5::scene5::InstanceInfo>> const &);

    // RVA: 0x302 | Ordinal: 771
        void getInstanceData(int);

    // RVA: 0x354 | Ordinal: 853
        void getOptions(int);

    // RVA: 0x381 | Ordinal: 898
        void getPos(int);

    // RVA: 0x3A9 | Ordinal: 938
        void getSeed(int);

    // RVA: 0x3FB | Ordinal: 1020
        void getType(int);

    // RVA: 0x41A | Ordinal: 1051
        void handlerType(void);

    // RVA: 0x57A | Ordinal: 1403
        void setOptions(int, unsigned int);

    // RVA: 0x580 | Ordinal: 1409
        void setSeed(int, float);

    // RVA: 0x589 | Ordinal: 1418
        void setType(int, int);

    // RVA: 0x5C8 | Ordinal: 1481
        void updateStreamCache(struct landscape4::GeometrySource const &);
};

} // namespace scene5
} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_GEOMETRYHANDLER50_HPP
