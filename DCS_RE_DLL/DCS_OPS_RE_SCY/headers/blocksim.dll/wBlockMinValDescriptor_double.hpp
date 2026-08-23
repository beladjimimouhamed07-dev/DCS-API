#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockMinValDescriptor<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockMinValDescriptor_double_
{
public:

    // RVA: 0x253 | Ordinal: 596
        void __create_instance(void);

    // RVA: 0x2A3 | Ordinal: 676
        void clone(void) const;

    // RVA: 0x2D8 | Ordinal: 729
        void create(class Lua::Loader *);

    // RVA: 0x316 | Ordinal: 791
        void getBlockClassNameS(void);

    // RVA: 0x349 | Ordinal: 842
        void getBlockTypeName(void) const;

    // RVA: 0x37B | Ordinal: 892
        void getBlockTypeNameS(void);

    // RVA: 0x3AD | Ordinal: 942
        void getClassName(void) const;

    // RVA: 0x405 | Ordinal: 1030
        void getInputPorts_(void) const;

    // RVA: 0x43D | Ordinal: 1086
        void getInputWires_(void) const;

    // RVA: 0x488 | Ordinal: 1161
        void getOutputPorts_(void) const;

    // RVA: 0x4BE | Ordinal: 1215
        void getOutputWires_(void) const;

    // RVA: 0x4F1 | Ordinal: 1266
        void getParametersList(void);

    // RVA: 0x566 | Ordinal: 1383
        void serialize(class wBlockSerializer &);

    // RVA: 0x57C | Ordinal: 1405
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0xA3 | Ordinal: 164
        void wBlockMinValDescriptor_double_(class wBlockMinValDescriptor<double> &&);

    // RVA: 0xA4 | Ordinal: 165
        void wBlockMinValDescriptor_double_(class wBlockMinValDescriptor<double> const &);

    // RVA: 0xA5 | Ordinal: 166
        void wBlockMinValDescriptor_double_(void);

    // RVA: 0x144 | Ordinal: 325
        void _wBlockMinValDescriptor_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKMINVALDESCRIPTOR_DOUBLE_HPP
