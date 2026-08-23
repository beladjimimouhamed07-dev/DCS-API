#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avK14GunSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avK14GunSight
{
public:

    // RVA: 0x887 | Ordinal: 2184
        void SetCommand(int, float);

    // RVA: 0x141 | Ordinal: 322
        void avK14GunSight(class cockpit::avK14GunSight const &);

    // RVA: 0x142 | Ordinal: 323
        void avK14GunSight(void);

    // RVA: 0x9D3 | Ordinal: 2516
        void calculateRangeMaskAngle(double);

    // RVA: 0x9D6 | Ordinal: 2519
        void calculateSpanMaskAngle(double);

    // RVA: 0xA3D | Ordinal: 2622
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xB04 | Ordinal: 2821
        void connect_electric_wire(class EagleFM::Elec::Wire &);

    // RVA: 0xC85 | Ordinal: 3206
        void getDbgSightSize(void) const;

    // RVA: 0xC9D | Ordinal: 3230
        void getElecPower(void) const;

    // RVA: 0xCB0 | Ordinal: 3249
        void getFixedReticleLightness(void) const;

    // RVA: 0xD65 | Ordinal: 3430
        void getMovableReticleLightness(void) const;

    // RVA: 0xDB5 | Ordinal: 3510
        void getRangeArg(void) const;

    // RVA: 0xDB7 | Ordinal: 3512
        void getRangeMaskAngle(void) const;

    // RVA: 0xDFE | Ordinal: 3583
        void getSpanMaskAngle(void) const;

    // RVA: 0xF39 | Ordinal: 3898
        void get_fixed_reticle_visible(void) const;

    // RVA: 0xF67 | Ordinal: 3944
        void get_gyro_sight_point(void) const;

    // RVA: 0xFCF | Ordinal: 4048
        void get_mode(void) const;

    // RVA: 0xFD9 | Ordinal: 4058
        void get_movable_reticle_visible(void) const;

    // RVA: 0x103C | Ordinal: 4157
        void get_range(void) const;

    // RVA: 0x1053 | Ordinal: 4180
        void get_ring_blanc_lever(void) const;

    // RVA: 0x11CB | Ordinal: 4556
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1391 | Ordinal: 5010
        void limitRangeMaskAngle(void);

    // RVA: 0x144D | Ordinal: 5198
        void onPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x14EE | Ordinal: 5359
        void post_initialize(void);

    // RVA: 0x156D | Ordinal: 5486
        void read_coefficients(class Lua::Config &);

    // RVA: 0x15B8 | Ordinal: 5561
        void release(void);

    // RVA: 0x15F7 | Ordinal: 5624
        void repair(void);

    // RVA: 0x185A | Ordinal: 6235
        void set_damage(unsigned int, bool);

    // RVA: 0x18E3 | Ordinal: 6372
        void set_mode(struct cockpit::Device_Mode const &);

    // RVA: 0x1B6D | Ordinal: 7022
        void update_gyro_sight(void);

    // RVA: 0x31B | Ordinal: 796
        void _avK14GunSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVK14GUNSIGHT_HPP
