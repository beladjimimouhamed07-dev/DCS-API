#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Indicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Indicator
{
public:

    // RVA: 0x35E | Ordinal: 863
        void Construct(void);

    // RVA: 0x3BB | Ordinal: 956
        void Create(void);

    // RVA: 0x78 | Ordinal: 121
        void Indicator(class AFM::Indicator &&);

    // RVA: 0x79 | Ordinal: 122
        void Indicator(class AFM::Indicator const &);

    // RVA: 0x7A | Ordinal: 123
        void Indicator(void);

    // RVA: 0x4B6 | Ordinal: 1207
        void LockWire(class AFM::Wire *);

    // RVA: 0x4E7 | Ordinal: 1256
        void Simulation(double);

    // RVA: 0x59F | Ordinal: 1440
        void getFailureFactor(double *);

    // RVA: 0x691 | Ordinal: 1682
        void getIPointerWire(class AFM::Wire **);

    // RVA: 0x69F | Ordinal: 1696
        void getInputSignal(double *);

    // RVA: 0x6CF | Ordinal: 1744
        void getMaxOutputSignal(double *);

    // RVA: 0x6DE | Ordinal: 1759
        void getMinOutputSignal(double *);

    // RVA: 0x6F2 | Ordinal: 1779
        void getOutputSignal(double *);

    // RVA: 0x72F | Ordinal: 1840
        void getSignalFactor(double *);

    // RVA: 0x733 | Ordinal: 1844
        void getSpeedFactor(double *);

    // RVA: 0x74E | Ordinal: 1871
        void getTimeFactor(double *);

    // RVA: 0x7A8 | Ordinal: 1961
        void setFailureFactor(double);

    // RVA: 0x7E8 | Ordinal: 2025
        void setInputSignal(double);

    // RVA: 0x816 | Ordinal: 2071
        void setMaxOutputSignal(double);

    // RVA: 0x827 | Ordinal: 2088
        void setMinOutputSignal(double);

    // RVA: 0x839 | Ordinal: 2106
        void setOutputSignal(double);

    // RVA: 0x8B0 | Ordinal: 2225
        void setSignalFactor(double);

    // RVA: 0x8B4 | Ordinal: 2229
        void setSpeedFactor(double);

    // RVA: 0x8D4 | Ordinal: 2261
        void setTimeFactor(double);

    // RVA: 0x8E5 | Ordinal: 2278
        void setTypeAsDeadBeat(void);

    // RVA: 0x8E7 | Ordinal: 2280
        void setTypeAsOscillation(void);

    // RVA: 0x12A | Ordinal: 299
        void _Indicator(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_INDICATOR_HPP
