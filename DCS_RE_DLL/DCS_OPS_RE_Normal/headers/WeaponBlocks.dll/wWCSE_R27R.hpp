#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wWCSE_R27R
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_R27R
{
public:

    // RVA: 0x4FB | Ordinal: 1276
        void __getInputPorts(void);

    // RVA: 0x594 | Ordinal: 1429
        void __getOutputPorts(void);

    // RVA: 0x82B | Ordinal: 2092
        void getDesc_(void);

    // RVA: 0x8DF | Ordinal: 2272
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9DC | Ordinal: 2525
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA46 | Ordinal: 2631
        void getRelativeDensity(double);

    // RVA: 0xA75 | Ordinal: 2678
        void handleDLExtMessage(struct INS::DataLinkMessage<3, double> *);

    // RVA: 0xB41 | Ordinal: 2882
        void quantizeDeltas(struct INS::DataLinkMessage<3, double> &);

    // RVA: 0xBFC | Ordinal: 3069
        void registerStateData(void);

    // RVA: 0xCDE | Ordinal: 3295
        void setManualRange(double);

    // RVA: 0xD24 | Ordinal: 3365
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD2A | Ordinal: 3371
        void setTargetSize(int);

    // RVA: 0xDBF | Ordinal: 3520
        void simulate(double);

    // RVA: 0x1D0 | Ordinal: 465
        void wWCSE_R27R(class wWCSE_R27R const &);

    // RVA: 0x1D1 | Ordinal: 466
        void wWCSE_R27R(class wWCSE_R27R_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28E | Ordinal: 655
        void _wWCSE_R27R(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSE_R27R_HPP
