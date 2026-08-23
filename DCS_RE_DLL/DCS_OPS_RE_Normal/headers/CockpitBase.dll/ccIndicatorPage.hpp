#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccIndicatorPage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccIndicatorPage
{
public:

    // RVA: 0x8FD | Ordinal: 2302
        void addElem(class cockpit::Element *);

    // RVA: 0x203 | Ordinal: 516
        void ccIndicatorPage(class cockpit::ccIndicatorPage const &);

    // RVA: 0x204 | Ordinal: 517
        void ccIndicatorPage(void);

    // RVA: 0xB7B | Ordinal: 2940
        void distribute_elements(void);

    // RVA: 0xB8A | Ordinal: 2955
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0xC74 | Ordinal: 3189
        void getCurrentVertexScaleModifier(void) const;

    // RVA: 0xE34 | Ordinal: 3637
        void getType(void) const;

    // RVA: 0xE72 | Ordinal: 3699
        void get_PageElems(void);

    // RVA: 0xE73 | Ordinal: 3700
        void get_PageElems(void) const;

    // RVA: 0xE7B | Ordinal: 3708
        void get_SortedPageElems(void);

    // RVA: 0x1102 | Ordinal: 4355
        void getparent(void) const;

    // RVA: 0x1215 | Ordinal: 4630
        void initialize(class ed::basic_string<char> const &, bool);

    // RVA: 0x1347 | Ordinal: 4936
        void l_push_guid_string(struct lua_State *);

    // RVA: 0x13BF | Ordinal: 5056
        void log(class ed::basic_string<char> &);

    // RVA: 0x1422 | Ordinal: 5155
        void nextElement(void);

    // RVA: 0x1583 | Ordinal: 5508
        void reg_in_reusable_state(struct lua_State *);

    // RVA: 0x1585 | Ordinal: 5510
        void reg_in_script(struct lua_State *);

    // RVA: 0x16CC | Ordinal: 5837
        void setCurrentVertexScaleModifier(char, float);

    // RVA: 0x177E | Ordinal: 6015
        void setParent(class cockpit::ccDrawable *);

    // RVA: 0x17B0 | Ordinal: 6065
        void setSize(float, float);

    // RVA: 0x17FE | Ordinal: 6143
        void setViewDistance(float);

    // RVA: 0x1AEA | Ordinal: 6891
        void update(unsigned char);

    // RVA: 0x1AEB | Ordinal: 6892
        void update(void);

    // RVA: 0x382 | Ordinal: 899
        void _ccIndicatorPage(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCINDICATORPAGE_HPP
