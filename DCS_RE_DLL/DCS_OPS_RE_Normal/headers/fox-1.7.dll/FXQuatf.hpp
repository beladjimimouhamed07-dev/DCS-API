#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXQuatf
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXQuatf
{
public:

    // RVA: 0x267 | Ordinal: 616
        void FXQuatf(class FX::FXQuatf const &);

    // RVA: 0x268 | Ordinal: 617
        void FXQuatf(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x269 | Ordinal: 618
        void FXQuatf(class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x26A | Ordinal: 619
        void FXQuatf(class FX::FXVec3f const &, float);

    // RVA: 0x26B | Ordinal: 620
        void FXQuatf(float, float, float);

    // RVA: 0x26C | Ordinal: 621
        void FXQuatf(float, float, float, float);

    // RVA: 0x26D | Ordinal: 622
        void FXQuatf(float const *const);

    // RVA: 0x26E | Ordinal: 623
        void FXQuatf(void);

    // RVA: 0x969 | Ordinal: 2410
        void adjust(void);

    // RVA: 0xB39 | Ordinal: 2874
        void conj(void) const;

    // RVA: 0xE66 | Ordinal: 3687
        void exp(void) const;

    // RVA: 0x1032 | Ordinal: 4147
        void getAxes(class FX::FXVec3f &, class FX::FXVec3f &, class FX::FXVec3f &) const;

    // RVA: 0x1034 | Ordinal: 4149
        void getAxisAngle(class FX::FXVec3f &, float &) const;

    // RVA: 0x14FB | Ordinal: 5372
        void getPitchRollYaw(float &, float &, float &) const;

    // RVA: 0x14FD | Ordinal: 5374
        void getPitchYawRoll(float &, float &, float &) const;

    // RVA: 0x153A | Ordinal: 5435
        void getRollPitchYaw(float &, float &, float &) const;

    // RVA: 0x153C | Ordinal: 5437
        void getRollYawPitch(float &, float &, float &) const;

    // RVA: 0x16CC | Ordinal: 5837
        void getXAxis(void) const;

    // RVA: 0x16D1 | Ordinal: 5842
        void getYAxis(void) const;

    // RVA: 0x16D5 | Ordinal: 5846
        void getYawPitchRoll(float &, float &, float &) const;

    // RVA: 0x16D7 | Ordinal: 5848
        void getYawRollPitch(float &, float &, float &) const;

    // RVA: 0x16D9 | Ordinal: 5850
        void getZAxis(void) const;

    // RVA: 0x18ED | Ordinal: 6382
        void invert(void) const;

    // RVA: 0x1A86 | Ordinal: 6791
        void length(void) const;

    // RVA: 0x1A7D | Ordinal: 6782
        void length2(void) const;

    // RVA: 0x1B9B | Ordinal: 7068
        void log(void) const;

    // RVA: 0x26A1 | Ordinal: 9890
        void pow(float) const;

    // RVA: 0x2934 | Ordinal: 10549
        void set(class FX::FXQuatf const &);

    // RVA: 0x2935 | Ordinal: 10550
        void set(float, float, float, float);

    // RVA: 0x2936 | Ordinal: 10551
        void set(float const *const);

    // RVA: 0x2997 | Ordinal: 10648
        void setAxes(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x2999 | Ordinal: 10650
        void setAxisAngle(class FX::FXVec3f const &, float);

    // RVA: 0x2C5F | Ordinal: 11360
        void setPitchRollYaw(float, float, float);

    // RVA: 0x2C61 | Ordinal: 11362
        void setPitchYawRoll(float, float, float);

    // RVA: 0x2C95 | Ordinal: 11414
        void setRollPitchYaw(float, float, float);

    // RVA: 0x2C97 | Ordinal: 11416
        void setRollYawPitch(float, float, float);

    // RVA: 0x2DE4 | Ordinal: 11749
        void setYawPitchRoll(float, float, float);

    // RVA: 0x2DE6 | Ordinal: 11751
        void setYawRollPitch(float, float, float);

    // RVA: 0x2EFA | Ordinal: 12027
        void unitinvert(void) const;

    // RVA: 0x488 | Ordinal: 1161
        void _FXQuatf(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXQUATF_HPP
