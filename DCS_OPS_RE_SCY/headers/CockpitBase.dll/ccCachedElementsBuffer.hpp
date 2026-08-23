#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccCachedElementsBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccCachedElementsBuffer
{
public:

    // RVA: 0x1E8 | Ordinal: 489
        void ccCachedElementsBuffer(class cockpit::ccCachedElementsBuffer const &);

    // RVA: 0x1E9 | Ordinal: 490
        void ccCachedElementsBuffer(unsigned __int64);

    // RVA: 0xB6E | Ordinal: 2927
        void disable(bool);

    // RVA: 0xB86 | Ordinal: 2951
        void draw(class cockpit::ccIndicationRenderParser &, unsigned char);

    // RVA: 0x120D | Ordinal: 4622
        void initialize(class cockpit::ccIndicator *, struct lua_State *, char const *);

    // RVA: 0x1258 | Ordinal: 4697
        void isDisabled(void) const;

    // RVA: 0x157C | Ordinal: 5501
        void rebuild(class cockpit::Element *);

    // RVA: 0x374 | Ordinal: 885
        void _ccCachedElementsBuffer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCCACHEDELEMENTSBUFFER_HPP
