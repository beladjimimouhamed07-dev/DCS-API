#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: RotationSpeedSensor_20
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class RotationSpeedSensor_20
{
public:

    // RVA: 0x36D | Ordinal: 878
        void Construct(void);

    // RVA: 0x3CF | Ordinal: 976
        void Create(void);

    // RVA: 0x47D | Ordinal: 1150
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0xB4 | Ordinal: 181
        void RotationSpeedSensor_20(class AFM::RotationSpeedSensor_20 &&);

    // RVA: 0xB5 | Ordinal: 182
        void RotationSpeedSensor_20(class AFM::RotationSpeedSensor_20 const &);

    // RVA: 0xB6 | Ordinal: 183
        void RotationSpeedSensor_20(void);

    // RVA: 0x4EE | Ordinal: 1263
        void Simulation(double);

    // RVA: 0x67C | Ordinal: 1661
        void getIPointerSensor(class AFM::Sensor **);

    // RVA: 0x7A3 | Ordinal: 1956
        void setDirection_scs(double, double);

    // RVA: 0x13E | Ordinal: 319
        void _RotationSpeedSensor_20(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ROTATIONSPEEDSENSOR_20_HPP
