#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Sensor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Sensor
{
public:

    // RVA: 0x36F | Ordinal: 880
        void Construct(void);

    // RVA: 0x3D1 | Ordinal: 978
        void Create(void);

    // RVA: 0x4B7 | Ordinal: 1208
        void LockWire(class AFM::Wire *);

    // RVA: 0xBA | Ordinal: 187
        void Sensor(class AFM::Sensor &&);

    // RVA: 0xBB | Ordinal: 188
        void Sensor(class AFM::Sensor const &);

    // RVA: 0xBC | Ordinal: 189
        void Sensor(void);

    // RVA: 0x4F0 | Ordinal: 1265
        void Simulation(double);

    // RVA: 0x5A2 | Ordinal: 1443
        void getFailureFactor(double *);

    // RVA: 0x692 | Ordinal: 1683
        void getIPointerWire(class AFM::Wire **);

    // RVA: 0x69E | Ordinal: 1695
        void getInputParameter(double *);

    // RVA: 0x6CC | Ordinal: 1741
        void getMaxInputParameter(double *);

    // RVA: 0x6D0 | Ordinal: 1745
        void getMaxOutputSignal(double *);

    // RVA: 0x6DB | Ordinal: 1756
        void getMinInputParameter(double *);

    // RVA: 0x6DF | Ordinal: 1760
        void getMinOutputSignal(double *);

    // RVA: 0x6F3 | Ordinal: 1780
        void getOutputSignal(double *);

    // RVA: 0x730 | Ordinal: 1841
        void getSignalFactor(double *);

    // RVA: 0x734 | Ordinal: 1845
        void getSpeedFactor(double *);

    // RVA: 0x74F | Ordinal: 1872
        void getTimeFactor(double *);

    // RVA: 0x7AB | Ordinal: 1964
        void setFailureFactor(double);

    // RVA: 0x7E7 | Ordinal: 2024
        void setInputParameter(double);

    // RVA: 0x813 | Ordinal: 2068
        void setMaxInputParameter(double);

    // RVA: 0x817 | Ordinal: 2072
        void setMaxOutputSignal(double);

    // RVA: 0x823 | Ordinal: 2084
        void setMinInputParameter(double);

    // RVA: 0x828 | Ordinal: 2089
        void setMinOutputSignal(double);

    // RVA: 0x83A | Ordinal: 2107
        void setOutputSignal(double);

    // RVA: 0x8B1 | Ordinal: 2226
        void setSignalFactor(double);

    // RVA: 0x8B5 | Ordinal: 2230
        void setSpeedFactor(double);

    // RVA: 0x8D5 | Ordinal: 2262
        void setTimeFactor(double);

    // RVA: 0x8E6 | Ordinal: 2279
        void setTypeAsDeadBeat(void);

    // RVA: 0x8E8 | Ordinal: 2281
        void setTypeAsOscillation(void);

    // RVA: 0x140 | Ordinal: 321
        void _Sensor(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SENSOR_HPP
