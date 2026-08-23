#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CCoordSys
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CCoordSys
{
public:

    // RVA: 0x194 | Ordinal: 405
        void ConvertFromStd(float, float, float);

    // RVA: 0x195 | Ordinal: 406
        void ConvertFromStd(float const *const);

    // RVA: 0x197 | Ordinal: 408
        void ConvertToStd(float, float, float);

    // RVA: 0x198 | Ordinal: 409
        void ConvertToStd(float const *const);

    // RVA: 0x19A | Ordinal: 411
        void CoordSysName(enum SpeedTree::CCoordSys::ECoordSysType);

    // RVA: 0x1BA | Ordinal: 443
        void GetBuiltInConverter(enum SpeedTree::CCoordSys::ECoordSysType);

    // RVA: 0x1BE | Ordinal: 447
        void GetCoordSysType(void);

    // RVA: 0x1F4 | Ordinal: 501
        void IsDefaultCoordSys(void);

    // RVA: 0x1F8 | Ordinal: 505
        void IsLeftHanded(void);

    // RVA: 0x202 | Ordinal: 515
        void IsYAxisUp(void);

    // RVA: 0x21F | Ordinal: 544
        void OutAxis(void);

    // RVA: 0x220 | Ordinal: 545
        void OutComponent(float const *const);

    // RVA: 0x249 | Ordinal: 586
        void RightAxis(void);

    // RVA: 0x24A | Ordinal: 587
        void RightComponent(float const *const);

    // RVA: 0x24E | Ordinal: 591
        void RotateOutAxis(class SpeedTree::Mat3x3 &, float);

    // RVA: 0x24F | Ordinal: 592
        void RotateOutAxis(class SpeedTree::Mat4x4 &, float);

    // RVA: 0x250 | Ordinal: 593
        void RotateUpAxis(class SpeedTree::Mat3x3 &, float);

    // RVA: 0x251 | Ordinal: 594
        void RotateUpAxis(class SpeedTree::Mat4x4 &, float);

    // RVA: 0x275 | Ordinal: 630
        void SetCoordSys(enum SpeedTree::CCoordSys::ECoordSysType, class SpeedTree::CCoordSysBase const *);

    // RVA: 0x2A6 | Ordinal: 679
        void UpAxis(void);

    // RVA: 0x2A7 | Ordinal: 680
        void UpComponent(float const *const);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CCOORDSYS_HPP
