#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x820 | Ordinal: 2081
        void getDesc_(void);

    // RVA: 0x8D3 | Ordinal: 2260
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D0 | Ordinal: 2513
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB16 | Ordinal: 2839
        void quantizeDeltas(struct INS::DataLinkMessage<3, double> &);

    // RVA: 0xBCF | Ordinal: 3024
        void registerStateData(void);

    // RVA: 0xC4D | Ordinal: 3150
        void setBoresightPitch(double);

    // RVA: 0xC96 | Ordinal: 3223
        void setManualTgtPos(class Math::Vector<3, double> const &);

    // RVA: 0xCD1 | Ordinal: 3282
        void setSyncDataLinkState(bool);

    // RVA: 0xCD6 | Ordinal: 3287
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD71 | Ordinal: 3442
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_AMRAAM_HPP
