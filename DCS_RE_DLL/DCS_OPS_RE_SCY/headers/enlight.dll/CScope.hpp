#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CScope
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class CScope
{
public:

    // RVA: 0x6 | Ordinal: 7
        void CScope(class enlight::CScope const &);

    // RVA: 0x7 | Ordinal: 8
        void CScope(void);

    // RVA: 0x6A | Ordinal: 107
        void available(void) const;

    // RVA: 0x77 | Ordinal: 120
        void buildLines(class render::Texture, class render::Texture, struct enlight::AGRadarData const &, int);

    // RVA: 0x88 | Ordinal: 137
        void draw(void);

    // RVA: 0x8E | Ordinal: 143
        void drawDebug(void);

    // RVA: 0x2B | Ordinal: 44
        void _CScope(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_CSCOPE_HPP
