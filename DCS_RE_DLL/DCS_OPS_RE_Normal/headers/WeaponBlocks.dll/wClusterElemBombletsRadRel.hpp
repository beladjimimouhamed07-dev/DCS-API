#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6DA | Ordinal: 1755
        void createElements(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, int, class wBombElem *);

    // RVA: 0x7C0 | Ordinal: 1985
        void getDesc_(void);

    // RVA: 0x874 | Ordinal: 2165
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x971 | Ordinal: 2418
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB26 | Ordinal: 2855
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMBOMBLETSRADREL_HPP
