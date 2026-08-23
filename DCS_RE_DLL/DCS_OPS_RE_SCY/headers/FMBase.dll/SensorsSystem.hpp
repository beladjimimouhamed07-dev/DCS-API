#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: SensorsSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class SensorsSystem
{
public:

    // RVA: 0x12C | Ordinal: 301
        void SensorsSystem(class EagleFM::SensorsSystem const &);

    // RVA: 0x12D | Ordinal: 302
        void SensorsSystem(void);

    // RVA: 0x5C4 | Ordinal: 1477
        void getMasterWarning(void) const;

    // RVA: 0x605 | Ordinal: 1542
        void getPitotFlexHor(void) const;

    // RVA: 0x606 | Ordinal: 1543
        void getPitotFlexVert(void) const;

    // RVA: 0x67F | Ordinal: 1664
        void getSensorOutput(int) const;

    // RVA: 0x6C8 | Ordinal: 1737
        void getVaneAoA_Value(void) const;

    // RVA: 0x6C9 | Ordinal: 1738
        void getVaneAoS_Value(void) const;

    // RVA: 0x1D7 | Ordinal: 472
        void _SensorsSystem(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SENSORSSYSTEM_HPP
