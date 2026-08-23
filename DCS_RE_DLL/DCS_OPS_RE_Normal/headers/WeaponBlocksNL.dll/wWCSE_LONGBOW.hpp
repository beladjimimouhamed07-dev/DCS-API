#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wWCSE_LONGBOW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_LONGBOW
{
public:

    // RVA: 0x4FA | Ordinal: 1275
        void __getInputPorts(void);

    // RVA: 0x593 | Ordinal: 1428
        void __getOutputPorts(void);

    // RVA: 0x822 | Ordinal: 2083
        void getDesc_(void);

    // RVA: 0x8D5 | Ordinal: 2262
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D2 | Ordinal: 2515
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBD1 | Ordinal: 3026
        void registerStateData(void);

    // RVA: 0xCD8 | Ordinal: 3289
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xCE6 | Ordinal: 3303
        void setTgtPosHuman(class Math::Vector<3, double> const &);

    // RVA: 0xD73 | Ordinal: 3444
        void simulate(double);

    // RVA: 0x1CD | Ordinal: 462
        void wWCSE_LONGBOW(class wWCSE_LONGBOW &&);

    // RVA: 0x1CE | Ordinal: 463
        void wWCSE_LONGBOW(class wWCSE_LONGBOW const &);

    // RVA: 0x1CF | Ordinal: 464
        void wWCSE_LONGBOW(class wWCSE_LONGBOW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28D | Ordinal: 654
        void _wWCSE_LONGBOW(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_LONGBOW_HPP
