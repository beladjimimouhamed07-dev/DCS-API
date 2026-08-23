#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockSummatorDescriptor<int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockSummatorDescriptor_int_
{
public:

    // RVA: 0x25C | Ordinal: 605
        void __create_instance(void);

    // RVA: 0x2AC | Ordinal: 685
        void clone(void) const;

    // RVA: 0x2E1 | Ordinal: 738
        void create(class Lua::Loader *);

    // RVA: 0x31F | Ordinal: 800
        void getBlockClassNameS(void);

    // RVA: 0x352 | Ordinal: 851
        void getBlockTypeName(void) const;

    // RVA: 0x384 | Ordinal: 901
        void getBlockTypeNameS(void);

    // RVA: 0x3B6 | Ordinal: 951
        void getClassName(void) const;

    // RVA: 0x3CE | Ordinal: 975
        void getCoeffs(void) const;

    // RVA: 0x40E | Ordinal: 1039
        void getInputPorts_(void) const;

    // RVA: 0x446 | Ordinal: 1095
        void getInputWires_(void) const;

    // RVA: 0x491 | Ordinal: 1170
        void getOutputPorts_(void) const;

    // RVA: 0x4C7 | Ordinal: 1224
        void getOutputWires_(void) const;

    // RVA: 0x4FA | Ordinal: 1275
        void getParametersList(void);

    // RVA: 0x568 | Ordinal: 1385
        void serialize(class wBlockSerializer &);

    // RVA: 0x57E | Ordinal: 1407
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0xBE | Ordinal: 191
        void wBlockSummatorDescriptor_int_(class wBlockSummatorDescriptor<int> &&);

    // RVA: 0xBF | Ordinal: 192
        void wBlockSummatorDescriptor_int_(class wBlockSummatorDescriptor<int> const &);

    // RVA: 0xC0 | Ordinal: 193
        void wBlockSummatorDescriptor_int_(void);

    // RVA: 0x14D | Ordinal: 334
        void _wBlockSummatorDescriptor_int_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKSUMMATORDESCRIPTOR_INT_HPP
