#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationBlockDisc
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationBlockDisc
{
public:

    // RVA: 0x28D | Ordinal: 654
        void blockHasStateData(void) const;

    // RVA: 0x336 | Ordinal: 823
        void getBlockStateData(unsigned char *);

    // RVA: 0x337 | Ordinal: 824
        void getBlockStateDataSize(void);

    // RVA: 0x467 | Ordinal: 1128
        void getMasElemCount(void *, int);

    // RVA: 0x53E | Ordinal: 1343
        void masClear(void *, int);

    // RVA: 0x53F | Ordinal: 1344
        void masElemPtrByType(void *, int, int);

    // RVA: 0x540 | Ordinal: 1345
        void masResize(void *, int, int);

    // RVA: 0x541 | Ordinal: 1346
        void masSizeByType(int);

    // RVA: 0x549 | Ordinal: 1354
        void regStr(class ed::basic_string<char> *);

    // RVA: 0x54A | Ordinal: 1355
        void registerStateData(void);

    // RVA: 0x556 | Ordinal: 1367
        void reset(void);

    // RVA: 0x586 | Ordinal: 1415
        void setBlockStateDataByPtr(unsigned char const *);

    // RVA: 0x118 | Ordinal: 281
        void wSimulationBlockDisc(class wSimulationBlockDisc &&);

    // RVA: 0x119 | Ordinal: 282
        void wSimulationBlockDisc(class wSimulationBlockDisc const &);

    // RVA: 0x11A | Ordinal: 283
        void wSimulationBlockDisc(class wSimulationBlockDiscDescriptor const *, class wSimulationSystem *);

    // RVA: 0x16E | Ordinal: 367
        void _wSimulationBlockDisc(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONBLOCKDISC_HPP
