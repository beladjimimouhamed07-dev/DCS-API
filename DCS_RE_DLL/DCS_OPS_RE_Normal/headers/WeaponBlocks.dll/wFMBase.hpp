#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBase
{
public:

    // RVA: 0x4B5 | Ordinal: 1206
        void __getInputPorts(void);

    // RVA: 0x54E | Ordinal: 1359
        void __getOutputPorts(void);

    // RVA: 0x7E5 | Ordinal: 2022
        void getDesc_(void);

    // RVA: 0x899 | Ordinal: 2202
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x996 | Ordinal: 2455
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA31 | Ordinal: 2610
        void getPosition(void) const;

    // RVA: 0xCEF | Ordinal: 3312
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0xD00 | Ordinal: 3329
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xD37 | Ordinal: 3384
        void setVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xF3 | Ordinal: 244
        void wFMBase(class wFMBase const &);

    // RVA: 0xF4 | Ordinal: 245
        void wFMBase(class wFMBaseDescriptor const *, class wSimulationSystem *);

    // RVA: 0x23B | Ordinal: 572
        void _wFMBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMBASE_HPP
