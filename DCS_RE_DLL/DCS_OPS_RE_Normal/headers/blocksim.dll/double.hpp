#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: double>>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class double__
{
public:

    // RVA: 0x244 | Ordinal: 581
        void __create_instance(void);

    // RVA: 0x278 | Ordinal: 633
        void __getInputPorts(void);

    // RVA: 0x280 | Ordinal: 641
        void __getOutputPorts(void);

    // RVA: 0x291 | Ordinal: 658
        void calculate_dy(double, unsigned char *, unsigned char *);

    // RVA: 0x294 | Ordinal: 661
        void clone(void) const;

    // RVA: 0x2C9 | Ordinal: 714
        void create(class Lua::Loader *);

    // RVA: 0x2CC | Ordinal: 717
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x307 | Ordinal: 776
        void getBlockClassNameS(void);

    // RVA: 0x33A | Ordinal: 827
        void getBlockTypeName(void) const;

    // RVA: 0x36C | Ordinal: 877
        void getBlockTypeNameS(void);

    // RVA: 0x39E | Ordinal: 927
        void getClassName(void) const;

    // RVA: 0x3D0 | Ordinal: 977
        void getCoeffs(void) const;

    // RVA: 0x3EB | Ordinal: 1004
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x3F6 | Ordinal: 1015
        void getInputPorts_(void) const;

    // RVA: 0x42E | Ordinal: 1071
        void getInputWires_(void) const;

    // RVA: 0x471 | Ordinal: 1138
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0x479 | Ordinal: 1146
        void getOutputPorts_(void) const;

    // RVA: 0x4AF | Ordinal: 1200
        void getOutputWires_(void) const;

    // RVA: 0x4E2 | Ordinal: 1251
        void getParametersList(void);

    // RVA: 0x561 | Ordinal: 1378
        void serialize(class wBlockSerializer &);

    // RVA: 0x577 | Ordinal: 1400
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x580 | Ordinal: 1409
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<double, class ed::allocator<double>> const &);
};

// DCS_OPS_RE_BLOCKSIM.DLL_DOUBLE_HPP
