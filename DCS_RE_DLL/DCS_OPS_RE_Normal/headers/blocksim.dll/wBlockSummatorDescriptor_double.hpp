#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockSummatorDescriptor<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockSummatorDescriptor_double_
{
public:

    // RVA: 0x25D | Ordinal: 606
        void __create_instance(void);

    // RVA: 0x2AD | Ordinal: 686
        void clone(void) const;

    // RVA: 0x2E2 | Ordinal: 739
        void create(class Lua::Loader *);

    // RVA: 0x320 | Ordinal: 801
        void getBlockClassNameS(void);

    // RVA: 0x353 | Ordinal: 852
        void getBlockTypeName(void) const;

    // RVA: 0x385 | Ordinal: 902
        void getBlockTypeNameS(void);

    // RVA: 0x3B7 | Ordinal: 952
        void getClassName(void) const;

    // RVA: 0x3CF | Ordinal: 976
        void getCoeffs(void) const;

    // RVA: 0x40F | Ordinal: 1040
        void getInputPorts_(void) const;

    // RVA: 0x447 | Ordinal: 1096
        void getInputWires_(void) const;

    // RVA: 0x492 | Ordinal: 1171
        void getOutputPorts_(void) const;

    // RVA: 0x4C8 | Ordinal: 1225
        void getOutputWires_(void) const;

    // RVA: 0x4FB | Ordinal: 1276
        void getParametersList(void);

    // RVA: 0x569 | Ordinal: 1386
        void serialize(class wBlockSerializer &);

    // RVA: 0x57F | Ordinal: 1408
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0xC1 | Ordinal: 194
        void wBlockSummatorDescriptor_double_(class wBlockSummatorDescriptor<double> &&);

    // RVA: 0xC2 | Ordinal: 195
        void wBlockSummatorDescriptor_double_(class wBlockSummatorDescriptor<double> const &);

    // RVA: 0xC3 | Ordinal: 196
        void wBlockSummatorDescriptor_double_(void);

    // RVA: 0x14E | Ordinal: 335
        void _wBlockSummatorDescriptor_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKSUMMATORDESCRIPTOR_DOUBLE_HPP
