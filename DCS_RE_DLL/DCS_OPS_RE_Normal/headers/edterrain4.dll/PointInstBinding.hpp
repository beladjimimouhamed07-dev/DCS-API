#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: PointInstBinding
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace vd5 {

class PointInstBinding
{
public:

    // RVA: 0x19 | Ordinal: 26
        void PointInstBinding(void);

    // RVA: 0x15A | Ordinal: 347
        void anchorPos(void) const;

    // RVA: 0x36A | Ordinal: 875
        void getPointAnchor(void) const;

    // RVA: 0x36D | Ordinal: 878
        void getPointInstance(void) const;

    // RVA: 0x470 | Ordinal: 1137
        void isValid(void) const;

    // RVA: 0x116 | Ordinal: 279
        void operator_(class vd5::PointInstBinding const &) const;

    // RVA: 0x5BB | Ordinal: 1468
        void toString(void) const;
};

} // namespace vd5

// DCS_OPS_RE_EDTERRAIN4.DLL_POINTINSTBINDING_HPP
