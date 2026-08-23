#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationSystem
{
public:

    // RVA: 0x289 | Ordinal: 650
        void advanceDifferential_(double, double);

    // RVA: 0x28F | Ordinal: 656
        void calcDiffRhs(double, double *);

    // RVA: 0x2FC | Ordinal: 765
        void decSchemeQueueTime(double);

    // RVA: 0x3D3 | Ordinal: 980
        void getDataPtr(void);

    // RVA: 0x3D9 | Ordinal: 986
        void getDiffState(void);

    // RVA: 0x3DA | Ordinal: 987
        void getDiffStateSize(void);

    // RVA: 0x3DD | Ordinal: 990
        void getDtMultiplier(void) const;

    // RVA: 0x3E4 | Ordinal: 997
        void getInputData(class ed::vector<unsigned char, class ed::allocator<unsigned char>> *);

    // RVA: 0x3EE | Ordinal: 1007
        void getInputPort(class ed::basic_string<char> const &, bool);

    // RVA: 0x3EF | Ordinal: 1008
        void getInputPortSafe(class ed::basic_string<char> const &);

    // RVA: 0x3F1 | Ordinal: 1010
        void getInputPortTypeSafe(class ed::basic_string<char> const &);

    // RVA: 0x3F2 | Ordinal: 1011
        void getInputPortValueSafe(class ed::basic_string<char> const &);

    // RVA: 0x428 | Ordinal: 1065
        void getInputWire(class ed::basic_string<char> const &) const;

    // RVA: 0x474 | Ordinal: 1141
        void getOutputPort(class ed::basic_string<char> const &, bool);

    // RVA: 0x4AA | Ordinal: 1195
        void getOutputWire(class ed::basic_string<char> const &) const;

    // RVA: 0x514 | Ordinal: 1301
        void getSchemeQueueTime(void);

    // RVA: 0x515 | Ordinal: 1302
        void getSchemeStateData(class ed::vector<unsigned char, class ed::allocator<unsigned char>> *);

    // RVA: 0x516 | Ordinal: 1303
        void getSchemeStateDataSize(void);

    // RVA: 0x517 | Ordinal: 1304
        void getSleepTimeRem(void);

    // RVA: 0x52C | Ordinal: 1325
        void init_(class Lua::Loader *);

    // RVA: 0x557 | Ordinal: 1368
        void reset(void);

    // RVA: 0x558 | Ordinal: 1369
        void resetDiff_(bool);

    // RVA: 0x55E | Ordinal: 1375
        void schemeGetIOBlock(void) const;

    // RVA: 0x587 | Ordinal: 1416
        void setDirty_(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x597 | Ordinal: 1432
        void setSchemeQueueTime(double);

    // RVA: 0x598 | Ordinal: 1433
        void setSchemeStateData(class ed::vector<unsigned char, class ed::allocator<unsigned char>> const *);

    // RVA: 0x599 | Ordinal: 1434
        void setSimSysDtMultiplier(double);

    // RVA: 0x59C | Ordinal: 1437
        void simulate(double);

    // RVA: 0x59D | Ordinal: 1438
        void sleepFor(double);

    // RVA: 0x5AC | Ordinal: 1453
        void updateDirty_(class ed::vector<int, class ed::allocator<int>> const &, double);

    // RVA: 0x129 | Ordinal: 298
        void wSimulationSystem(class wSimulationSystemScheme const *, class Lua::Loader *, unsigned char *);

    // RVA: 0x174 | Ordinal: 373
        void _wSimulationSystem(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONSYSTEM_HPP
