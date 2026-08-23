#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wFMNurs
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMNurs
{
public:

    // RVA: 0x4BB | Ordinal: 1212
        void __getInputPorts(void);

    // RVA: 0x554 | Ordinal: 1365
        void __getOutputPorts(void);

    // RVA: 0x644 | Ordinal: 1605
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x7E3 | Ordinal: 2020
        void getDesc_(void);

    // RVA: 0x896 | Ordinal: 2199
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x993 | Ordinal: 2452
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB9B | Ordinal: 2972
        void registerStateData(void);

    // RVA: 0xBDB | Ordinal: 3036
        void reset(void);

    // RVA: 0xC46 | Ordinal: 3143
        void setAngularVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCA6 | Ordinal: 3239
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0xCB8 | Ordinal: 3257
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xCED | Ordinal: 3310
        void setVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xD82 | Ordinal: 3459
        void simulateDt(double, double);

    // RVA: 0xD88 | Ordinal: 3465
        void simulateFlight(double, double);

    // RVA: 0x115 | Ordinal: 278
        void wFMNurs(class wFMNurs const &);

    // RVA: 0x116 | Ordinal: 279
        void wFMNurs(class wFMNursDescriptor const *, class wSimulationSystem *);

    // RVA: 0x247 | Ordinal: 584
        void _wFMNurs(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMNURS_HPP
