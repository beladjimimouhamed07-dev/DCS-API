#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationSystemScheme
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationSystemScheme
{
public:

    // RVA: 0x283 | Ordinal: 644
        void addBlock(class wSimulationBlockDescriptor *);

    // RVA: 0x284 | Ordinal: 645
        void addConnection(struct wSimulationSystemScheme::Connection const &);

    // RVA: 0x285 | Ordinal: 646
        void addIOLead(bool, bool, class ed::basic_string<char> const &, enum eLeadType);

    // RVA: 0x28E | Ordinal: 655
        void buildGraph_(int);

    // RVA: 0x2C4 | Ordinal: 709
        void clone(void) const;

    // RVA: 0x2FB | Ordinal: 764
        void debug_dump(void);

    // RVA: 0x300 | Ordinal: 769
        void findInputConnection_(class wSimulationBlockDescriptor const *, class ed::basic_string<char> const &);

    // RVA: 0x302 | Ordinal: 771
        void getBlockByIndex(int);

    // RVA: 0x303 | Ordinal: 772
        void getBlockByName(class ed::basic_string<char> const &);

    // RVA: 0x304 | Ordinal: 773
        void getBlockByName(class ed::basic_string<char> const &) const;

    // RVA: 0x335 | Ordinal: 822
        void getBlockOrder(class wSimulationBlockDescriptor *);

    // RVA: 0x39A | Ordinal: 923
        void getBlocks(void) const;

    // RVA: 0x39B | Ordinal: 924
        void getBlocksCount(void) const;

    // RVA: 0x3D1 | Ordinal: 978
        void getConnections(void) const;

    // RVA: 0x3D5 | Ordinal: 982
        void getDiffBlockIndex(int) const;

    // RVA: 0x3D6 | Ordinal: 983
        void getDiffBlocksCount(void) const;

    // RVA: 0x3D7 | Ordinal: 984
        void getDiffMemoryOffset(void) const;

    // RVA: 0x3D8 | Ordinal: 985
        void getDiffMemorySize(void) const;

    // RVA: 0x3DB | Ordinal: 988
        void getDiscreteBlockIndex(int) const;

    // RVA: 0x3DC | Ordinal: 989
        void getDiscreteBlocksCount(void) const;

    // RVA: 0x3DF | Ordinal: 992
        void getIOBlock(void);

    // RVA: 0x3E0 | Ordinal: 993
        void getIOBlock(void) const;

    // RVA: 0x3E1 | Ordinal: 994
        void getIOLeads(bool, bool) const;

    // RVA: 0x468 | Ordinal: 1129
        void getMemorySize(void) const;

    // RVA: 0x46A | Ordinal: 1131
        void getOdeSolverDescriptor(void) const;

    // RVA: 0x512 | Ordinal: 1299
        void getRootDir(void);

    // RVA: 0x518 | Ordinal: 1305
        void getSpecialCmdsBlock(void);

    // RVA: 0x519 | Ordinal: 1306
        void getSpecialCmdsBlock(void) const;

    // RVA: 0x51A | Ordinal: 1307
        void getStatelessBlockIndex(int) const;

    // RVA: 0x51B | Ordinal: 1308
        void getStatelessBlocksCount(void) const;

    // RVA: 0x51C | Ordinal: 1309
        void getStatelessBlocksInDiff(void) const;

    // RVA: 0x51D | Ordinal: 1310
        void getStatelessBlocksOnDiffInput(void) const;

    // RVA: 0x51E | Ordinal: 1311
        void getStatelessBlocksOnInput(int) const;

    // RVA: 0x51F | Ordinal: 1312
        void getStatelessBlocksOnOutput(int) const;

    // RVA: 0x520 | Ordinal: 1313
        void getStatelessBlocksOnSchemeInput(void) const;

    // RVA: 0x521 | Ordinal: 1314
        void getStatelessBlocksOnSchemeOutput(void) const;

    // RVA: 0x529 | Ordinal: 1322
        void indexOfBlock(class wSimulationBlockDescriptor const *) const;

    // RVA: 0x52A | Ordinal: 1323
        void indexOfConnection(struct wSimulationSystemScheme::Connection const &);

    // RVA: 0x52B | Ordinal: 1324
        void indexOfConnection_(struct wSimulationSystemScheme::Connection const &);

    // RVA: 0x530 | Ordinal: 1329
        void instantiate(class Lua::Loader *, unsigned char *) const;

    // RVA: 0x539 | Ordinal: 1338
        void loadForEdit(class ed::basic_string<char> const &, class ed::vector<int, class ed::allocator<int>> &, bool);

    // RVA: 0x53A | Ordinal: 1339
        void loadForRuntime(class ed::basic_string<char> const &, class Lua::Loader *, bool, class ed::ILuaSource *);

    // RVA: 0x53D | Ordinal: 1342
        void load_(class ed::basic_string<char> const &, class Lua::Loader *, class ed::vector<int, class ed::allocator<int>> *, bool, class ed::ILuaSource *);

    // RVA: 0x547 | Ordinal: 1352
        void postLoad_(bool);

    // RVA: 0x54E | Ordinal: 1359
        void removeBlock(class wSimulationBlockDescriptor *);

    // RVA: 0x54F | Ordinal: 1360
        void removeConnection(struct wSimulationSystemScheme::Connection const &);

    // RVA: 0x550 | Ordinal: 1361
        void removeIOLead(bool, bool, class ed::basic_string<char> const &);

    // RVA: 0x552 | Ordinal: 1363
        void renameBlock(class wSimulationBlockDescriptor *, class ed::basic_string<char> const &);

    // RVA: 0x553 | Ordinal: 1364
        void renameIOLead(bool, bool, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x555 | Ordinal: 1366
        void reorderBlock(class wSimulationBlockDescriptor *, int);

    // RVA: 0x55C | Ordinal: 1373
        void save(class ed::basic_string<char> const &);

    // RVA: 0x58F | Ordinal: 1424
        void setOdeSolverDescriptor(class wOdeSolverDescriptor *);

    // RVA: 0x59E | Ordinal: 1439
        void sortStateless_(void);

    // RVA: 0x12A | Ordinal: 299
        void wSimulationSystemScheme(class wSimulationSystemScheme const &);

    // RVA: 0x12B | Ordinal: 300
        void wSimulationSystemScheme(void);

    // RVA: 0x175 | Ordinal: 374
        void _wSimulationSystemScheme(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONSYSTEMSCHEME_HPP
