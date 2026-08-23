#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: OPrecipitation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class OPrecipitation
{
public:

    // RVA: 0x6 | Ordinal: 7
        void OPrecipitation(void);

    // RVA: 0x34 | Ordinal: 53
        void draw(float, float, float, float, struct render::SceneRenderContext const *);

    // RVA: 0x62 | Ordinal: 99
        void init(void);

    // RVA: 0x75 | Ordinal: 118
        void release(void);

    // RVA: 0x7C | Ordinal: 125
        void reset(void);

    // RVA: 0x12 | Ordinal: 19
        void _OPrecipitation(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS2.DLL_OPRECIPITATION_HPP
