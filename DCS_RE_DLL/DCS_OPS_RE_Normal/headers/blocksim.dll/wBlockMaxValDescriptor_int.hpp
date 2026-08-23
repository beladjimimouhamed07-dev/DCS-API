#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockMaxValDescriptor<int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockMaxValDescriptor_int_
{
public:

    // RVA: 0x24F | Ordinal: 592
        void __create_instance(void);

    // RVA: 0x29F | Ordinal: 672
        void clone(void) const;

    // RVA: 0x2D4 | Ordinal: 725
        void create(class Lua::Loader *);

    // RVA: 0x312 | Ordinal: 787
        void getBlockClassNameS(void);

    // RVA: 0x345 | Ordinal: 838
        void getBlockTypeName(void) const;

    // RVA: 0x377 | Ordinal: 888
        void getBlockTypeNameS(void);

    // RVA: 0x3A9 | Ordinal: 938
        void getClassName(void) const;

    // RVA: 0x401 | Ordinal: 1026
        void getInputPorts_(void) const;

    // RVA: 0x439 | Ordinal: 1082
        void getInputWires_(void) const;

    // RVA: 0x484 | Ordinal: 1157
        void getOutputPorts_(void) const;

    // RVA: 0x4BA | Ordinal: 1211
        void getOutputWires_(void) const;

    // RVA: 0x4ED | Ordinal: 1262
        void getParametersList(void);

    // RVA: 0x562 | Ordinal: 1379
        void serialize(class wBlockSerializer &);

    // RVA: 0x578 | Ordinal: 1401
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x97 | Ordinal: 152
        void wBlockMaxValDescriptor_int_(class wBlockMaxValDescriptor<int> &&);

    // RVA: 0x98 | Ordinal: 153
        void wBlockMaxValDescriptor_int_(class wBlockMaxValDescriptor<int> const &);

    // RVA: 0x99 | Ordinal: 154
        void wBlockMaxValDescriptor_int_(void);

    // RVA: 0x140 | Ordinal: 321
        void _wBlockMaxValDescriptor_int_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKMAXVALDESCRIPTOR_INT_HPP
