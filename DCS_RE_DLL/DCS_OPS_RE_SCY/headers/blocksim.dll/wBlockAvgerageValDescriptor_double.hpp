#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockAvgerageValDescriptor<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockAvgerageValDescriptor_double_
{
public:

    // RVA: 0x243 | Ordinal: 580
        void __create_instance(void);

    // RVA: 0x293 | Ordinal: 660
        void clone(void) const;

    // RVA: 0x2C8 | Ordinal: 713
        void create(class Lua::Loader *);

    // RVA: 0x306 | Ordinal: 775
        void getBlockClassNameS(void);

    // RVA: 0x339 | Ordinal: 826
        void getBlockTypeName(void) const;

    // RVA: 0x36B | Ordinal: 876
        void getBlockTypeNameS(void);

    // RVA: 0x39D | Ordinal: 926
        void getClassName(void) const;

    // RVA: 0x3F5 | Ordinal: 1014
        void getInputPorts_(void) const;

    // RVA: 0x42D | Ordinal: 1070
        void getInputWires_(void) const;

    // RVA: 0x478 | Ordinal: 1145
        void getOutputPorts_(void) const;

    // RVA: 0x4AE | Ordinal: 1199
        void getOutputWires_(void) const;

    // RVA: 0x4E1 | Ordinal: 1250
        void getParametersList(void);

    // RVA: 0x560 | Ordinal: 1377
        void serialize(class wBlockSerializer &);

    // RVA: 0x576 | Ordinal: 1399
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x5E | Ordinal: 95
        void wBlockAvgerageValDescriptor_double_(class wBlockAvgerageValDescriptor<double> &&);

    // RVA: 0x5F | Ordinal: 96
        void wBlockAvgerageValDescriptor_double_(class wBlockAvgerageValDescriptor<double> const &);

    // RVA: 0x60 | Ordinal: 97
        void wBlockAvgerageValDescriptor_double_(void);

    // RVA: 0x12D | Ordinal: 302
        void _wBlockAvgerageValDescriptor_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKAVGERAGEVALDESCRIPTOR_DOUBLE_HPP
