#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemBombletsRadRel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemBombletsRadRel
{
public:

    // RVA: 0x490 | Ordinal: 1169
        void __getInputPorts(void);

    // RVA: 0x529 | Ordinal: 1322
        void __getOutputPorts(void);

    // RVA: 0x6D6 | Ordinal: 1751
        void createElements(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, int, class wBombElem *);

    // RVA: 0x7B8 | Ordinal: 1977
        void getDesc_(void);

    // RVA: 0x86B | Ordinal: 2156
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x968 | Ordinal: 2409
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAFE | Ordinal: 2815
        void prepareInitData(void);

    // RVA: 0x7B | Ordinal: 124
        void wClusterElemBombletsRadRel(class wClusterElemBombletsRadRel &&);

    // RVA: 0x7C | Ordinal: 125
        void wClusterElemBombletsRadRel(class wClusterElemBombletsRadRel const &);

    // RVA: 0x7D | Ordinal: 126
        void wClusterElemBombletsRadRel(class wClusterElemBombletsRadRelDesc const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20E | Ordinal: 527
        void _wClusterElemBombletsRadRel(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMBOMBLETSRADREL_HPP
