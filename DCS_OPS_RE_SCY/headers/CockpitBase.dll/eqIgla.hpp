#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqIgla
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqIgla
{
public:

    // RVA: 0x7E0 | Ordinal: 2017
        void IsHeadReadyForLaunch(void) const;

    // RVA: 0x8DD | Ordinal: 2270
        void Type(void) const;

    // RVA: 0x253 | Ordinal: 596
        void eqIgla(class cockpit::eqIgla const &);

    // RVA: 0x254 | Ordinal: 597
        void eqIgla(class wsType const &);

    // RVA: 0xC4D | Ordinal: 3150
        void getAvaiableTime(void) const;

    // RVA: 0xDB8 | Ordinal: 3513
        void getReadyForBatteryRestore(void) const;

    // RVA: 0xDD3 | Ordinal: 3540
        void getSeeker(void);

    // RVA: 0xDD4 | Ordinal: 3541
        void getSeeker(void) const;

    // RVA: 0xE0C | Ordinal: 3597
        void getStatus(void) const;

    // RVA: 0x121D | Ordinal: 4638
        void initialize(void);

    // RVA: 0x1382 | Ordinal: 4995
        void launch(void);

    // RVA: 0x1628 | Ordinal: 5673
        void resetState(void);

    // RVA: 0x163B | Ordinal: 5692
        void restoreBattery(void);

    // RVA: 0x1662 | Ordinal: 5731
        void scheduleBatteryRestore(void);

    // RVA: 0x16FA | Ordinal: 5883
        void setElecPower(bool);

    // RVA: 0x172C | Ordinal: 5933
        void setHolder(class IwHumanPlane *);

    // RVA: 0x1755 | Ordinal: 5974
        void setMissileCoverState(bool);

    // RVA: 0x17BB | Ordinal: 6076
        void setStatus(enum cockpit::IGLA_STATUS);

    // RVA: 0x1934 | Ordinal: 6453
        void set_station(int, int);

    // RVA: 0x1AFA | Ordinal: 6907
        void update(double);

    // RVA: 0x3A8 | Ordinal: 937
        void _eqIgla(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQIGLA_HPP
