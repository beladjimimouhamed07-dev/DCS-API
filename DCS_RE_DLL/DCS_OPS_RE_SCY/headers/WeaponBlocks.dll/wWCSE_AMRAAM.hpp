#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wWCSE_AMRAAM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_AMRAAM
{
public:

    // RVA: 0x4F8 | Ordinal: 1273
        void __getInputPorts(void);

    // RVA: 0x591 | Ordinal: 1426
        void __getOutputPorts(void);

    // RVA: 0x828 | Ordinal: 2089
        void getDesc_(void);

    // RVA: 0x8DC | Ordinal: 2269
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D9 | Ordinal: 2522
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB40 | Ordinal: 2881
        void quantizeDeltas(struct INS::DataLinkMessage<3, double> &);

    // RVA: 0xBF9 | Ordinal: 3066
        void registerStateData(void);

    // RVA: 0xC97 | Ordinal: 3224
        void setBoresightPitch(double);

    // RVA: 0xCE0 | Ordinal: 3297
        void setManualTgtPos(class Math::Vector<3, double> const &);

    // RVA: 0xD1C | Ordinal: 3357
        void setSyncDataLinkState(bool);

    // RVA: 0xD21 | Ordinal: 3362
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xDBC | Ordinal: 3517
        void simulate(double);

    // RVA: 0x1C7 | Ordinal: 456
        void wWCSE_AMRAAM(class wWCSE_AMRAAM &&);

    // RVA: 0x1C8 | Ordinal: 457
        void wWCSE_AMRAAM(class wWCSE_AMRAAM const &);

    // RVA: 0x1C9 | Ordinal: 458
        void wWCSE_AMRAAM(class wWCSE_AMRAAM_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28B | Ordinal: 652
        void _wWCSE_AMRAAM(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSE_AMRAAM_HPP
