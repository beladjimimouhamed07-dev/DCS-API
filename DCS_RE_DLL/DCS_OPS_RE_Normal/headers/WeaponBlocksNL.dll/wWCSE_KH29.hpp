#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wWCSE_KH29
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_KH29
{
public:

    // RVA: 0x4F9 | Ordinal: 1274
        void __getInputPorts(void);

    // RVA: 0x592 | Ordinal: 1427
        void __getOutputPorts(void);

    // RVA: 0x5FD | Ordinal: 1534
        void calcLOS_pitch_lim(class Math::Vector<3, double> const &);

    // RVA: 0x6E1 | Ordinal: 1762
        void decideUsingLoft(class Math::Vector<3, double> const &);

    // RVA: 0x821 | Ordinal: 2082
        void getDesc_(void);

    // RVA: 0x8D4 | Ordinal: 2261
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D1 | Ordinal: 2514
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBD0 | Ordinal: 3025
        void registerStateData(void);

    // RVA: 0xCD7 | Ordinal: 3288
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD72 | Ordinal: 3443
        void simulate(double);

    // RVA: 0x1CA | Ordinal: 459
        void wWCSE_KH29(class wWCSE_KH29 &&);

    // RVA: 0x1CB | Ordinal: 460
        void wWCSE_KH29(class wWCSE_KH29 const &);

    // RVA: 0x1CC | Ordinal: 461
        void wWCSE_KH29(class wWCSE_KH29_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28C | Ordinal: 653
        void _wWCSE_KH29(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_KH29_HPP
