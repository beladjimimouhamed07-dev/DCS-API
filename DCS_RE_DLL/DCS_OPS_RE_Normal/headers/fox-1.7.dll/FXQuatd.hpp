#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXQuatd
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXQuatd
{
public:

    // RVA: 0x25F | Ordinal: 608
        void FXQuatd(class FX::FXQuatd const &);

    // RVA: 0x260 | Ordinal: 609
        void FXQuatd(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x261 | Ordinal: 610
        void FXQuatd(class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x262 | Ordinal: 611
        void FXQuatd(class FX::FXVec3d const &, double);

    // RVA: 0x263 | Ordinal: 612
        void FXQuatd(double, double, double);

    // RVA: 0x264 | Ordinal: 613
        void FXQuatd(double, double, double, double);

    // RVA: 0x265 | Ordinal: 614
        void FXQuatd(double const *const);

    // RVA: 0x266 | Ordinal: 615
        void FXQuatd(void);

    // RVA: 0x968 | Ordinal: 2409
        void adjust(void);

    // RVA: 0xB38 | Ordinal: 2873
        void conj(void) const;

    // RVA: 0xE65 | Ordinal: 3686
        void exp(void) const;

    // RVA: 0x1031 | Ordinal: 4146
        void getAxes(class FX::FXVec3d &, class FX::FXVec3d &, class FX::FXVec3d &) const;

    // RVA: 0x1033 | Ordinal: 4148
        void getAxisAngle(class FX::FXVec3d &, double &) const;

    // RVA: 0x14FA | Ordinal: 5371
        void getPitchRollYaw(double &, double &, double &) const;

    // RVA: 0x14FC | Ordinal: 5373
        void getPitchYawRoll(double &, double &, double &) const;

    // RVA: 0x1539 | Ordinal: 5434
        void getRollPitchYaw(double &, double &, double &) const;

    // RVA: 0x153B | Ordinal: 5436
        void getRollYawPitch(double &, double &, double &) const;

    // RVA: 0x16CB | Ordinal: 5836
        void getXAxis(void) const;

    // RVA: 0x16D0 | Ordinal: 5841
        void getYAxis(void) const;

    // RVA: 0x16D4 | Ordinal: 5845
        void getYawPitchRoll(double &, double &, double &) const;

    // RVA: 0x16D6 | Ordinal: 5847
        void getYawRollPitch(double &, double &, double &) const;

    // RVA: 0x16D8 | Ordinal: 5849
        void getZAxis(void) const;

    // RVA: 0x18EC | Ordinal: 6381
        void invert(void) const;

    // RVA: 0x1A85 | Ordinal: 6790
        void length(void) const;

    // RVA: 0x1A7C | Ordinal: 6781
        void length2(void) const;

    // RVA: 0x1B9A | Ordinal: 7067
        void log(void) const;

    // RVA: 0x26A0 | Ordinal: 9889
        void pow(double) const;

    // RVA: 0x2931 | Ordinal: 10546
        void set(class FX::FXQuatd const &);

    // RVA: 0x2932 | Ordinal: 10547
        void set(double, double, double, double);

    // RVA: 0x2933 | Ordinal: 10548
        void set(double const *const);

    // RVA: 0x2996 | Ordinal: 10647
        void setAxes(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x2998 | Ordinal: 10649
        void setAxisAngle(class FX::FXVec3d const &, double);

    // RVA: 0x2C5E | Ordinal: 11359
        void setPitchRollYaw(double, double, double);

    // RVA: 0x2C60 | Ordinal: 11361
        void setPitchYawRoll(double, double, double);

    // RVA: 0x2C94 | Ordinal: 11413
        void setRollPitchYaw(double, double, double);

    // RVA: 0x2C96 | Ordinal: 11415
        void setRollYawPitch(double, double, double);

    // RVA: 0x2DE3 | Ordinal: 11748
        void setYawPitchRoll(double, double, double);

    // RVA: 0x2DE5 | Ordinal: 11750
        void setYawRollPitch(double, double, double);

    // RVA: 0x2EF9 | Ordinal: 12026
        void unitinvert(void) const;

    // RVA: 0x487 | Ordinal: 1160
        void _FXQuatd(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXQUATD_HPP
