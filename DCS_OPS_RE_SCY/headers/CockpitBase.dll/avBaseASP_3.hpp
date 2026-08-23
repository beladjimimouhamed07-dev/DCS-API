#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBaseASP_3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBaseASP_3
{
public:

    // RVA: 0x872 | Ordinal: 2163
        void SetCommand(int, float);

    // RVA: 0xCF | Ordinal: 208
        void avBaseASP_3(class cockpit::avBaseASP_3 const &);

    // RVA: 0xD0 | Ordinal: 209
        void avBaseASP_3(void);

    // RVA: 0x9D2 | Ordinal: 2515
        void calculateMasksAngles(void);

    // RVA: 0xA35 | Ordinal: 2614
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xA48 | Ordinal: 2633
        void checkElectricCage(void);

    // RVA: 0xAFA | Ordinal: 2811
        void connect_electric(void);

    // RVA: 0xC72 | Ordinal: 3187
        void getCurrentSpan(void) const;

    // RVA: 0xC84 | Ordinal: 3205
        void getDbgSightSize(void) const;

    // RVA: 0xC95 | Ordinal: 3222
        void getElecPower(void) const;

    // RVA: 0xD55 | Ordinal: 3414
        void getMirrorRotation(void) const;

    // RVA: 0xD64 | Ordinal: 3429
        void getMovableReticleLightness(void) const;

    // RVA: 0xDB4 | Ordinal: 3509
        void getRangeArg(void) const;

    // RVA: 0xDB6 | Ordinal: 3511
        void getRangeMaskAngle(void) const;

    // RVA: 0xDFD | Ordinal: 3582
        void getSpanMaskAngle(void) const;

    // RVA: 0xF66 | Ordinal: 3943
        void get_gyro_sight_point(void) const;

    // RVA: 0xFD7 | Ordinal: 4056
        void get_movable_reticle_on(void) const;

    // RVA: 0xFD8 | Ordinal: 4057
        void get_movable_reticle_visible(void) const;

    // RVA: 0x1038 | Ordinal: 4153
        void get_radius_for_teta(double) const;

    // RVA: 0x103B | Ordinal: 4156
        void get_range(void) const;

    // RVA: 0x1052 | Ordinal: 4179
        void get_ring_blanc_lever(void) const;

    // RVA: 0x10CB | Ordinal: 4300
        void get_teta_for_radius(double) const;

    // RVA: 0x11A3 | Ordinal: 4516
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x144C | Ordinal: 5197
        void onPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x14D3 | Ordinal: 5332
        void post_initialize(void);

    // RVA: 0x156C | Ordinal: 5485
        void read_coefficients(class Lua::Config &);

    // RVA: 0x15A8 | Ordinal: 5545
        void release(void);

    // RVA: 0x15F2 | Ordinal: 5619
        void repair(void);

    // RVA: 0x1855 | Ordinal: 6230
        void set_damage(unsigned int, bool);

    // RVA: 0x1B6C | Ordinal: 7021
        void update_gyro_sight(void);

    // RVA: 0x2E3 | Ordinal: 740
        void _avBaseASP_3(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASEASP_3_HPP
