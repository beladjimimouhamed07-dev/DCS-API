#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccArcade_template_buffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccArcade_template_buffer
{
public:

    // RVA: 0x91E | Ordinal: 2335
        void add_mission_target_list(class ed::list<class cockpit::mission_target, class ed::allocator<class cockpit::mission_target>> const &);

    // RVA: 0x929 | Ordinal: 2346
        void add_target(class cockpit::arcade_target const &);

    // RVA: 0x92A | Ordinal: 2347
        void add_target(class cockpit::arcade_target const &, unsigned int);

    // RVA: 0x92B | Ordinal: 2348
        void add_target(class cockpit::mission_target const &);

    // RVA: 0x92C | Ordinal: 2349
        void add_target_list(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> const &);

    // RVA: 0x92D | Ordinal: 2350
        void add_target_list(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> const &, unsigned int);

    // RVA: 0x98B | Ordinal: 2444
        void build_airfields(class std::map<unsigned int, class cockpit::mov_ptr_mark, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, class cockpit::mov_ptr_mark>>> const &);

    // RVA: 0x98C | Ordinal: 2445
        void build_mlws_contacts(class cockpit::avMLWS *);

    // RVA: 0x98D | Ordinal: 2446
        void build_targets(class cockpit::avArcadeRadar *);

    // RVA: 0x1E4 | Ordinal: 485
        void ccArcade_template_buffer(class cockpit::ccArcade_template_buffer const &);

    // RVA: 0x1E5 | Ordinal: 486
        void ccArcade_template_buffer(unsigned int, unsigned int);

    // RVA: 0xB85 | Ordinal: 2950
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0x10C5 | Ordinal: 4294
        void get_target_type(class cockpit::arcade_target const &) const;

    // RVA: 0x120B | Ordinal: 4620
        void initialize(class cockpit::ccIndicator *, struct lua_State *, char const *);

    // RVA: 0x157B | Ordinal: 5500
        void rebuild(class cockpit::Element *);

    // RVA: 0x161C | Ordinal: 5661
        void reset(void);

    // RVA: 0x372 | Ordinal: 883
        void _ccArcade_template_buffer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCARCADE_TEMPLATE_BUFFER_HPP
