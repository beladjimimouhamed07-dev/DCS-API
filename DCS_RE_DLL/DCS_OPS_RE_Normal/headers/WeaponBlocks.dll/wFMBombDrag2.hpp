#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMBombDrag2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBombDrag2
{
public:

    // RVA: 0x4B6 | Ordinal: 1207
        void __getInputPorts(void);

    // RVA: 0x54F | Ordinal: 1360
        void __getOutputPorts(void);

    // RVA: 0x5D3 | Ordinal: 1492
        void calcEffectiveChuteCxPortion_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x5E0 | Ordinal: 1505
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x641 | Ordinal: 1602
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x7E6 | Ordinal: 2023
        void getDesc_(void);

    // RVA: 0x89A | Ordinal: 2203
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x997 | Ordinal: 2456
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xACF | Ordinal: 2768
        void isChuteOpen_(void);

    // RVA: 0xAD5 | Ordinal: 2774
        void isLeadChuteOpen_(void);

    // RVA: 0xAD6 | Ordinal: 2775
        void isMainChuteOpen_(void);

    // RVA: 0xB2C | Ordinal: 2861
        void procWaterForceTorque_(class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0xB36 | Ordinal: 2871
        void processNonAerodynForces_(class Math::Vector<3, double> &);

    // RVA: 0xBC3 | Ordinal: 3012
        void registerStateData(void);

    // RVA: 0xF8 | Ordinal: 249
        void wFMBombDrag2(class wFMBombDrag2 &&);

    // RVA: 0xF9 | Ordinal: 250
        void wFMBombDrag2(class wFMBombDrag2 const &);

    // RVA: 0xFA | Ordinal: 251
        void wFMBombDrag2(class wFMBombDrag2Descriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x23D | Ordinal: 574
        void _wFMBombDrag2(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMBOMBDRAG2_HPP
