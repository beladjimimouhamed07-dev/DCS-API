#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7EB | Ordinal: 2028
        void getDesc_(void);

    // RVA: 0x89F | Ordinal: 2208
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99C | Ordinal: 2461
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBC5 | Ordinal: 3014
        void registerStateData(void);

    // RVA: 0xC05 | Ordinal: 3078
        void reset(void);

    // RVA: 0xC90 | Ordinal: 3217
        void setAngularVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCF0 | Ordinal: 3313
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0xD02 | Ordinal: 3331
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0xD38 | Ordinal: 3385
        void setVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xDCD | Ordinal: 3534
        void simulateDt(double, double);

    // RVA: 0xDD3 | Ordinal: 3540
        void simulateFlight(double, double);

    // RVA: 0x115 | Ordinal: 278
        void wFMNurs(class wFMNurs const &);

    // RVA: 0x116 | Ordinal: 279
        void wFMNurs(class wFMNursDescriptor const *, class wSimulationSystem *);

    // RVA: 0x247 | Ordinal: 584
        void _wFMNurs(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMNURS_HPP
