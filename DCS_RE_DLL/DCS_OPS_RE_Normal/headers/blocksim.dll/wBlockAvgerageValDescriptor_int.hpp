#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockAvgerageValDescriptor<int>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockAvgerageValDescriptor_int_
{
public:

    // RVA: 0x242 | Ordinal: 579
        void __create_instance(void);

    // RVA: 0x292 | Ordinal: 659
        void clone(void) const;

    // RVA: 0x2C7 | Ordinal: 712
        void create(class Lua::Loader *);

    // RVA: 0x305 | Ordinal: 774
        void getBlockClassNameS(void);

    // RVA: 0x338 | Ordinal: 825
        void getBlockTypeName(void) const;

    // RVA: 0x36A | Ordinal: 875
        void getBlockTypeNameS(void);

    // RVA: 0x39C | Ordinal: 925
        void getClassName(void) const;

    // RVA: 0x3F4 | Ordinal: 1013
        void getInputPorts_(void) const;

    // RVA: 0x42C | Ordinal: 1069
        void getInputWires_(void) const;

    // RVA: 0x477 | Ordinal: 1144
        void getOutputPorts_(void) const;

    // RVA: 0x4AD | Ordinal: 1198
        void getOutputWires_(void) const;

    // RVA: 0x4E0 | Ordinal: 1249
        void getParametersList(void);

    // RVA: 0x55F | Ordinal: 1376
        void serialize(class wBlockSerializer &);

    // RVA: 0x575 | Ordinal: 1398
        void set(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x5B | Ordinal: 92
        void wBlockAvgerageValDescriptor_int_(class wBlockAvgerageValDescriptor<int> &&);

    // RVA: 0x5C | Ordinal: 93
        void wBlockAvgerageValDescriptor_int_(class wBlockAvgerageValDescriptor<int> const &);

    // RVA: 0x5D | Ordinal: 94
        void wBlockAvgerageValDescriptor_int_(void);

    // RVA: 0x12C | Ordinal: 301
        void _wBlockAvgerageValDescriptor_int_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKAVGERAGEVALDESCRIPTOR_INT_HPP
