#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x823 | Ordinal: 2084
        void getDesc_(void);

    // RVA: 0x8D6 | Ordinal: 2263
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D3 | Ordinal: 2516
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3B | Ordinal: 2620
        void getRelativeDensity(double);

    // RVA: 0xA66 | Ordinal: 2663
        void handleDLExtMessage(struct INS::DataLinkMessage<3, double> *);

    // RVA: 0xB17 | Ordinal: 2840
        void quantizeDeltas(struct INS::DataLinkMessage<3, double> &);

    // RVA: 0xBD2 | Ordinal: 3027
        void registerStateData(void);

    // RVA: 0xC94 | Ordinal: 3221
        void setManualRange(double);

    // RVA: 0xCD9 | Ordinal: 3290
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xCDF | Ordinal: 3296
        void setTargetSize(int);

    // RVA: 0xD74 | Ordinal: 3445
        void simulate(double);

    // RVA: 0x1D0 | Ordinal: 465
        void wWCSE_R27R(class wWCSE_R27R const &);

    // RVA: 0x1D1 | Ordinal: 466
        void wWCSE_R27R(class wWCSE_R27R_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x28E | Ordinal: 655
        void _wWCSE_R27R(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSE_R27R_HPP
