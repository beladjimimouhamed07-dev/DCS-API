#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockMaxValDescriptor<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockMaxValDescriptor_double_
{
public:

    // RVA: 0x250 | Ordinal: 593
        void __create_instance(void);

    // RVA: 0x2A0 | Ordinal: 673
        void clone(void) const;

    // RVA: 0x2D5 | Ordinal: 726
        void create(class Lua::Loader *);

    // RVA: 0x313 | Ordinal: 788
        void getBlockClassNameS(void);

    // RVA: 0x346 | Ordinal: 839
        void getBlockTypeName(void) const;

    // RVA: 0x378 | Ordinal: 889
        void getBlockTypeNameS(void);

    // RVA: 0x3AA | Ordinal: 939
        void getClassName(void) const;

    // RVA: 0x402 | Ordinal: 1027
        void getInputPorts_(void) const;

    // RVA: 0x43A | Ordinal: 1083
        void getInputWires_(void) const;

    // RVA: 0x485 | Ordinal: 1158
        void getOutputPorts_(void) const;

    // RVA: 0x4BB | Ordinal: 1212
        void getOutputWires_(void) const;

    // RVA: 0x4EE | Ordinal: 1263
        void getParametersList(void);

    // RVA: 0x563 | Ordinal: 1380
        void serialize(class wBlockSerializer &);

    // RVA: 0x579 | Ordinal: 1402
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x9A | Ordinal: 155
        void wBlockMaxValDescriptor_double_(class wBlockMaxValDescriptor<double> &&);

    // RVA: 0x9B | Ordinal: 156
        void wBlockMaxValDescriptor_double_(class wBlockMaxValDescriptor<double> const &);

    // RVA: 0x9C | Ordinal: 157
        void wBlockMaxValDescriptor_double_(void);

    // RVA: 0x141 | Ordinal: 322
        void _wBlockMaxValDescriptor_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKMAXVALDESCRIPTOR_DOUBLE_HPP
