#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockMultiplexDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockMultiplexDescriptor
{
public:

    // RVA: 0x267 | Ordinal: 616
        void __create_instance(void);

    // RVA: 0x2B9 | Ordinal: 698
        void clone(void) const;

    // RVA: 0x2EE | Ordinal: 751
        void create(class Lua::Loader *);

    // RVA: 0x32A | Ordinal: 811
        void getBlockClassNameS(void);

    // RVA: 0x35F | Ordinal: 864
        void getBlockTypeName(void) const;

    // RVA: 0x38F | Ordinal: 912
        void getBlockTypeNameS(void);

    // RVA: 0x3C3 | Ordinal: 964
        void getClassName(void) const;

    // RVA: 0x41B | Ordinal: 1052
        void getInputPorts_(void) const;

    // RVA: 0x452 | Ordinal: 1107
        void getInputWires_(void) const;

    // RVA: 0x49D | Ordinal: 1182
        void getOutputPorts_(void) const;

    // RVA: 0x4D3 | Ordinal: 1236
        void getOutputWires_(void) const;

    // RVA: 0x505 | Ordinal: 1286
        void getParametersList(void);

    // RVA: 0x56E | Ordinal: 1391
        void serialize(class wBlockSerializer &);

    // RVA: 0x582 | Ordinal: 1411
        void set(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &, class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x5AE | Ordinal: 1455
        void update_(void) const;

    // RVA: 0xEC | Ordinal: 237
        void wBlockMultiplexDescriptor(class wBlockMultiplexDescriptor &&);

    // RVA: 0xED | Ordinal: 238
        void wBlockMultiplexDescriptor(class wBlockMultiplexDescriptor const &);

    // RVA: 0xEE | Ordinal: 239
        void wBlockMultiplexDescriptor(void);

    // RVA: 0x15E | Ordinal: 351
        void _wBlockMultiplexDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKMULTIPLEXDESCRIPTOR_HPP
