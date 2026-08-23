#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqSidewinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqSidewinder
{
public:

    // RVA: 0x7E6 | Ordinal: 2023
        void IsReadyToFire(void) const;

    // RVA: 0x8E0 | Ordinal: 2273
        void Type(void) const;

    // RVA: 0x25B | Ordinal: 604
        void eqSidewinder(class cockpit::eqSidewinder const &);

    // RVA: 0x25C | Ordinal: 605
        void eqSidewinder(class wsType const &);

    // RVA: 0xDD9 | Ordinal: 3546
        void getSeeker(void);

    // RVA: 0xDDA | Ordinal: 3547
        void getSeeker(void) const;

    // RVA: 0xE10 | Ordinal: 3601
        void getStatus(void) const;

    // RVA: 0x1221 | Ordinal: 4642
        void initialize(void);

    // RVA: 0x128D | Ordinal: 4750
        void isTrainingWeapon(void) const;

    // RVA: 0x1385 | Ordinal: 4998
        void launch(class IwHumanPlane *);

    // RVA: 0x16FE | Ordinal: 5887
        void setElecPower(bool);

    // RVA: 0x17BF | Ordinal: 6080
        void setStatus(unsigned int);

    // RVA: 0x1937 | Ordinal: 6456
        void set_station(int, int);

    // RVA: 0x1AFE | Ordinal: 6911
        void update(double);

    // RVA: 0x3AC | Ordinal: 941
        void _eqSidewinder(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQSIDEWINDER_HPP
