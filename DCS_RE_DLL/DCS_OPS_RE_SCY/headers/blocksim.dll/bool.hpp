#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: bool>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class bool_
{
public:

    // RVA: 0x249 | Ordinal: 586
        void __create_instance(void);

    // RVA: 0x273 | Ordinal: 628
        void __getInputPorts(void);

    // RVA: 0x27B | Ordinal: 636
        void __getOutputPorts(void);

    // RVA: 0x299 | Ordinal: 666
        void clone(void) const;

    // RVA: 0x2CE | Ordinal: 719
        void create(class Lua::Loader *);

    // RVA: 0x30C | Ordinal: 781
        void getBlockClassNameS(void);

    // RVA: 0x33F | Ordinal: 832
        void getBlockTypeName(void) const;

    // RVA: 0x371 | Ordinal: 882
        void getBlockTypeNameS(void);

    // RVA: 0x3A3 | Ordinal: 932
        void getClassName(void) const;

    // RVA: 0x3E6 | Ordinal: 999
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x3FB | Ordinal: 1020
        void getInputPorts_(void) const;

    // RVA: 0x433 | Ordinal: 1076
        void getInputWires_(void) const;

    // RVA: 0x46C | Ordinal: 1133
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0x47E | Ordinal: 1151
        void getOutputPorts_(void) const;

    // RVA: 0x4B4 | Ordinal: 1205
        void getOutputWires_(void) const;

    // RVA: 0x4E7 | Ordinal: 1256
        void getParametersList(void);

    // RVA: 0x5A4 | Ordinal: 1445
        void update(double, unsigned char *);
};

// DCS_OPS_RE_BLOCKSIM.DLL_BOOL_HPP
