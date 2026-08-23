#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: AoASensor_40
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class AoASensor_40
{
public:

    // RVA: 0x15 | Ordinal: 22
        void AoASensor_40(class AFM::AoASensor_40 &&);

    // RVA: 0x16 | Ordinal: 23
        void AoASensor_40(class AFM::AoASensor_40 const &);

    // RVA: 0x17 | Ordinal: 24
        void AoASensor_40(void);

    // RVA: 0x342 | Ordinal: 835
        void Construct(void);

    // RVA: 0x39A | Ordinal: 923
        void Create(void);

    // RVA: 0x472 | Ordinal: 1139
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4D3 | Ordinal: 1236
        void Simulation(double);

    // RVA: 0x679 | Ordinal: 1658
        void getIPointerSensor(class AFM::Sensor **);

    // RVA: 0x780 | Ordinal: 1921
        void setAoASensorPosition_scs(double *);

    // RVA: 0x8C9 | Ordinal: 2250
        void setSurfaceProp(double *, double *);

    // RVA: 0x109 | Ordinal: 266
        void _AoASensor_40(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_AOASENSOR_40_HPP
