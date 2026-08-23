#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lMeshAsset
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class lMeshAsset
{
public:

    // RVA: 0x21F | Ordinal: 544
        void dump(bool, class ed::basic_string<char> const &, class DumpHelper::AdditionalData *);

    // RVA: 0x220 | Ordinal: 545
        void dump(void);

    // RVA: 0x2A4 | Ordinal: 677
        void getBoundZ(double &, double &) const;

    // RVA: 0x2DF | Ordinal: 736
        void getDefaultHeight(void) const;

    // RVA: 0x2E2 | Ordinal: 739
        void getDepth(void) const;

    // RVA: 0x2E3 | Ordinal: 740
        void getDepthJitter(void) const;

    // RVA: 0x317 | Ordinal: 792
        void getMatchColorPolygonFillRatio(void) const;

    // RVA: 0x389 | Ordinal: 906
        void getReflectionReceiverDistance(void) const;

    // RVA: 0x43C | Ordinal: 1085
        void isAvailableNormalAngle(class osg::Vec3d const &);

    // RVA: 0x43E | Ordinal: 1087
        void isCompatibleNode(struct offshore::Scene &, int) const;

    // RVA: 0x443 | Ordinal: 1092
        void isConstantHeight(void) const;

    // RVA: 0x44D | Ordinal: 1102
        void isGenerateInternalVerts(void) const;

    // RVA: 0x44F | Ordinal: 1104
        void isIgnoreUnderBridgeSeparators(void) const;

    // RVA: 0x454 | Ordinal: 1109
        void isMatchColorEnable(void) const;

    // RVA: 0x473 | Ordinal: 1140
        void isVectorized(void) const;

    // RVA: 0x3B | Ordinal: 60
        void lMeshAsset(void);

    // RVA: 0x4E6 | Ordinal: 1255
        void postloading(class landscape4::lTerraDispatchImpl *);

    // RVA: 0x5A9 | Ordinal: 1450
        void surfaceType(void) const;
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LMESHASSET_HPP
