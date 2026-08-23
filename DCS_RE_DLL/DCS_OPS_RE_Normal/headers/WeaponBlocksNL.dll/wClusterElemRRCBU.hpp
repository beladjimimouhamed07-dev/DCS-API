#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemRRCBU
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemRRCBU
{
public:

    // RVA: 0x492 | Ordinal: 1171
        void __getInputPorts(void);

    // RVA: 0x52B | Ordinal: 1324
        void __getOutputPorts(void);

    // RVA: 0x6D7 | Ordinal: 1752
        void createElements(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, int, class wBombElem *);

    // RVA: 0x6DC | Ordinal: 1757
        void createPartsElem(void);

    // RVA: 0x7BA | Ordinal: 1979
        void getDesc_(void);

    // RVA: 0x86D | Ordinal: 2158
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96A | Ordinal: 2411
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD1A | Ordinal: 3355
        void simulate(double);

    // RVA: 0x80 | Ordinal: 129
        void wClusterElemRRCBU(class wClusterElemRRCBU &&);

    // RVA: 0x81 | Ordinal: 130
        void wClusterElemRRCBU(class wClusterElemRRCBU const &);

    // RVA: 0x82 | Ordinal: 131
        void wClusterElemRRCBU(class wClusterElemRRCBUDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x210 | Ordinal: 529
        void _wClusterElemRRCBU(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMRRCBU_HPP
