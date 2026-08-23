#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7DD | Ordinal: 2014
        void getDesc_(void);

    // RVA: 0x890 | Ordinal: 2193
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98D | Ordinal: 2446
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA28 | Ordinal: 2601
        void getPosition(void) const;

    // RVA: 0xCA5 | Ordinal: 3238
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0xCB6 | Ordinal: 3255
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xCEC | Ordinal: 3309
        void setVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xF3 | Ordinal: 244
        void wFMBase(class wFMBase const &);

    // RVA: 0xF4 | Ordinal: 245
        void wFMBase(class wFMBaseDescriptor const *, class wSimulationSystem *);

    // RVA: 0x23B | Ordinal: 572
        void _wFMBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMBASE_HPP
