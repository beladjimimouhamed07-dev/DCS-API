#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class int_
{
public:

    // RVA: 0x24B | Ordinal: 588
        void __create_instance(void);

    // RVA: 0x275 | Ordinal: 630
        void __getInputPorts(void);

    // RVA: 0x27D | Ordinal: 638
        void __getOutputPorts(void);

    // RVA: 0x29B | Ordinal: 668
        void clone(void) const;

    // RVA: 0x2D0 | Ordinal: 721
        void create(class Lua::Loader *);

    // RVA: 0x30E | Ordinal: 783
        void getBlockClassNameS(void);

    // RVA: 0x341 | Ordinal: 834
        void getBlockTypeName(void) const;

    // RVA: 0x373 | Ordinal: 884
        void getBlockTypeNameS(void);

    // RVA: 0x3A5 | Ordinal: 934
        void getClassName(void) const;

    // RVA: 0x3E8 | Ordinal: 1001
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x3FD | Ordinal: 1022
        void getInputPorts_(void) const;

    // RVA: 0x435 | Ordinal: 1078
        void getInputWires_(void) const;

    // RVA: 0x46E | Ordinal: 1135
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0x480 | Ordinal: 1153
        void getOutputPorts_(void) const;

    // RVA: 0x4B6 | Ordinal: 1207
        void getOutputWires_(void) const;

    // RVA: 0x4E9 | Ordinal: 1258
        void getParametersList(void);

    // RVA: 0x5A6 | Ordinal: 1447
        void update(double, unsigned char *);
};

// DCS_OPS_RE_BLOCKSIM.DLL_INT_HPP
