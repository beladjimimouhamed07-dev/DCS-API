#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockMinValDescriptor<int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockMinValDescriptor_int_
{
public:

    // RVA: 0x252 | Ordinal: 595
        void __create_instance(void);

    // RVA: 0x2A2 | Ordinal: 675
        void clone(void) const;

    // RVA: 0x2D7 | Ordinal: 728
        void create(class Lua::Loader *);

    // RVA: 0x315 | Ordinal: 790
        void getBlockClassNameS(void);

    // RVA: 0x348 | Ordinal: 841
        void getBlockTypeName(void) const;

    // RVA: 0x37A | Ordinal: 891
        void getBlockTypeNameS(void);

    // RVA: 0x3AC | Ordinal: 941
        void getClassName(void) const;

    // RVA: 0x404 | Ordinal: 1029
        void getInputPorts_(void) const;

    // RVA: 0x43C | Ordinal: 1085
        void getInputWires_(void) const;

    // RVA: 0x487 | Ordinal: 1160
        void getOutputPorts_(void) const;

    // RVA: 0x4BD | Ordinal: 1214
        void getOutputWires_(void) const;

    // RVA: 0x4F0 | Ordinal: 1265
        void getParametersList(void);

    // RVA: 0x565 | Ordinal: 1382
        void serialize(class wBlockSerializer &);

    // RVA: 0x57B | Ordinal: 1404
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0xA0 | Ordinal: 161
        void wBlockMinValDescriptor_int_(class wBlockMinValDescriptor<int> &&);

    // RVA: 0xA1 | Ordinal: 162
        void wBlockMinValDescriptor_int_(class wBlockMinValDescriptor<int> const &);

    // RVA: 0xA2 | Ordinal: 163
        void wBlockMinValDescriptor_int_(void);

    // RVA: 0x143 | Ordinal: 324
        void _wBlockMinValDescriptor_int_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKMINVALDESCRIPTOR_INT_HPP
