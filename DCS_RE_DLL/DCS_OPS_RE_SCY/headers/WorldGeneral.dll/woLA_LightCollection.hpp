#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woLA_LightCollection
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace plane_lights {

class woLA_LightCollection
{
public:

    // RVA: 0x924 | Ordinal: 2341
        void get_child(unsigned int);

    // RVA: 0x925 | Ordinal: 2342
        void get_child(unsigned int) const;

    // RVA: 0x926 | Ordinal: 2343
        void get_child_count(void) const;

    // RVA: 0x927 | Ordinal: 2344
        void get_child_power(unsigned int) const;

    // RVA: 0x947 | Ordinal: 2376
        void get_mode(void) const;

    // RVA: 0x953 | Ordinal: 2388
        void get_power(void) const;

    // RVA: 0x9DE | Ordinal: 2527
        void is_sleeping(void) const;

    // RVA: 0xB00 | Ordinal: 2817
        void parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0xB19 | Ordinal: 2842
        void poke(void);

    // RVA: 0xB21 | Ordinal: 2850
        void prepare_for_rendering(void);

    // RVA: 0xB35 | Ordinal: 2870
        void push_back(class plane_lights::IwoLA_Light *);

    // RVA: 0xBC7 | Ordinal: 3016
        void setRootCollection(class plane_lights::IwoLA_Light *);

    // RVA: 0xBE3 | Ordinal: 3044
        void set_child_mode(unsigned int, int);

    // RVA: 0xBE4 | Ordinal: 3045
        void set_child_power(unsigned int, double);

    // RVA: 0xBEB | Ordinal: 3052
        void set_mode(int);

    // RVA: 0xBF3 | Ordinal: 3060
        void set_power(double);

    // RVA: 0xC01 | Ordinal: 3074
        void size(void) const;

    // RVA: 0xC24 | Ordinal: 3109
        void submit_debug_geometry(void);

    // RVA: 0xC46 | Ordinal: 3143
        void update(double);

    // RVA: 0x216 | Ordinal: 535
        void woLA_LightCollection(class plane_lights::woLA_LightCollection const &);

    // RVA: 0x217 | Ordinal: 536
        void woLA_LightCollection(void);

    // RVA: 0x2E7 | Ordinal: 744
        void _woLA_LightCollection(void);
};

} // namespace plane_lights

// DCS_OPS_RE_WORLDGENERAL.DLL_WOLA_LIGHTCOLLECTION_HPP
