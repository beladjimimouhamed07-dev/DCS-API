#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CCoordSysBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CCoordSysBase
{
public:

    // RVA: 0x26 | Ordinal: 39
        void CCoordSysBase(class SpeedTree::CCoordSysBase const &);

    // RVA: 0x27 | Ordinal: 40
        void CCoordSysBase(void);

    // RVA: 0x196 | Ordinal: 407
        void ConvertFromStd(float const *const) const;

    // RVA: 0x199 | Ordinal: 410
        void ConvertToStd(float const *const) const;

    // RVA: 0x87 | Ordinal: 136
        void _CCoordSysBase(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CCOORDSYSBASE_HPP
