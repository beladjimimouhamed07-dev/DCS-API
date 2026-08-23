#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: RayCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class RayCursor
{
public:

    // RVA: 0x21 | Ordinal: 34
        void RayCursor(class enlight::RayCursor const &);

    // RVA: 0x22 | Ordinal: 35
        void RayCursor(void);

    // RVA: 0x72 | Ordinal: 115
        void build(enum render::MSAA_ENUM, float);

    // RVA: 0x38 | Ordinal: 57
        void _RayCursor(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_RAYCURSOR_HPP
