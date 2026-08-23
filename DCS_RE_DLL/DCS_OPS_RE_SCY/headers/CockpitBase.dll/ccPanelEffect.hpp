#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccPanelEffect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccPanelEffect
{
public:

    // RVA: 0x92E | Ordinal: 2351
        void add_to_effects(class cockpit::ccMainPanel *);

    // RVA: 0x213 | Ordinal: 532
        void ccPanelEffect(class cockpit::ccPanelEffect const &);

    // RVA: 0x214 | Ordinal: 533
        void ccPanelEffect(void);

    // RVA: 0xC31 | Ordinal: 3122
        void get(void);

    // RVA: 0xEE1 | Ordinal: 3810
        void get_color(void);

    // RVA: 0x1570 | Ordinal: 5489
        void read_from_state(class Lua::Config &);

    // RVA: 0x168B | Ordinal: 5772
        void set(struct cockpit::ccPanelEffect::state const &);

    // RVA: 0x1827 | Ordinal: 6184
        void set_attenuation(float, float, float, float);

    // RVA: 0x1842 | Ordinal: 6211
        void set_color(class osg::Vec3f const &);

    // RVA: 0x1843 | Ordinal: 6212
        void set_color(float, float, float);

    // RVA: 0x1846 | Ordinal: 6215
        void set_cone(float, float);

    // RVA: 0x192E | Ordinal: 6447
        void set_softness(float);

    // RVA: 0x1AF0 | Ordinal: 6897
        void update(class cockpit::ccMainPanel *);

    // RVA: 0x38A | Ordinal: 907
        void _ccPanelEffect(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCPANELEFFECT_HPP
