#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: AttitudeIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class AttitudeIndicator
{
public:

    // RVA: 0x18 | Ordinal: 25
        void AttitudeIndicator(class AFM::AttitudeIndicator &&);

    // RVA: 0x19 | Ordinal: 26
        void AttitudeIndicator(class AFM::AttitudeIndicator const &);

    // RVA: 0x1A | Ordinal: 27
        void AttitudeIndicator(void);

    // RVA: 0x343 | Ordinal: 836
        void Construct(void);

    // RVA: 0x39B | Ordinal: 924
        void Create(void);

    // RVA: 0x48C | Ordinal: 1165
        void LockGyroscope(class AFM::Gyroscope *);

    // RVA: 0x4B3 | Ordinal: 1204
        void LockWire(class AFM::Wire *);

    // RVA: 0x4D4 | Ordinal: 1237
        void Simulation(double);

    // RVA: 0x64D | Ordinal: 1614
        void getIPointerPitchIndicator(class AFM::Indicator **);

    // RVA: 0x676 | Ordinal: 1655
        void getIPointerRollIndicator(class AFM::Indicator **);

    // RVA: 0x68E | Ordinal: 1679
        void getIPointerWire(class AFM::Wire **);

    // RVA: 0x83F | Ordinal: 2112
        void setPitchIndicatorStatus(double);

    // RVA: 0x840 | Ordinal: 2113
        void setPitchIndicatorTimeFactorOff(double);

    // RVA: 0x841 | Ordinal: 2114
        void setPitchIndicatorTimeFactorOn(double);

    // RVA: 0x891 | Ordinal: 2194
        void setRollIndicatorStatus(double);

    // RVA: 0x892 | Ordinal: 2195
        void setRollIndicatorTimeFactorOff(double);

    // RVA: 0x893 | Ordinal: 2196
        void setRollIndicatorTimeFactorOn(double);

    // RVA: 0x10A | Ordinal: 267
        void _AttitudeIndicator(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ATTITUDEINDICATOR_HPP
