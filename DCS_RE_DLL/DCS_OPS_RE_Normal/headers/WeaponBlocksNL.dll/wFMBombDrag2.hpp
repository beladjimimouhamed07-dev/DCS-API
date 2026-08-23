#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7DE | Ordinal: 2015
        void getDesc_(void);

    // RVA: 0x891 | Ordinal: 2194
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98E | Ordinal: 2447
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA9 | Ordinal: 2730
        void isChuteOpen_(void);

    // RVA: 0xAAF | Ordinal: 2736
        void isLeadChuteOpen_(void);

    // RVA: 0xAB0 | Ordinal: 2737
        void isMainChuteOpen_(void);

    // RVA: 0xB02 | Ordinal: 2819
        void procWaterForceTorque_(class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0xB0C | Ordinal: 2829
        void processNonAerodynForces_(class Math::Vector<3, double> &);

    // RVA: 0xB99 | Ordinal: 2970
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMBOMBDRAG2_HPP
