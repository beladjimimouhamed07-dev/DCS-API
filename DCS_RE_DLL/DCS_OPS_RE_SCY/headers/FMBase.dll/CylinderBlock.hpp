#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: CylinderBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class CylinderBlock
{
public:

    // RVA: 0x64 | Ordinal: 101
        void CylinderBlock(void);

    // RVA: 0x65 | Ordinal: 102
        void CylinderBlock(class EagleFM::CylinderBlock const &);

    // RVA: 0x66 | Ordinal: 103
        void CylinderBlock(class EagleFM::PistonEngine *, double, double, double, double, double, double, double);

    // RVA: 0x771 | Ordinal: 1906
        void initialize(double, double);

    // RVA: 0x198 | Ordinal: 409
        void _CylinderBlock(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CYLINDERBLOCK_HPP
