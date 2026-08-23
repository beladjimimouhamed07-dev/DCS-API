#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockWireDeserializerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockWireDeserializerDescriptor
{
public:

    // RVA: 0x26F | Ordinal: 624
        void __create_instance(void);

    // RVA: 0x2C1 | Ordinal: 706
        void clone(void) const;

    // RVA: 0x2F6 | Ordinal: 759
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x332 | Ordinal: 819
        void getBlockClassNameS(void);

    // RVA: 0x367 | Ordinal: 872
        void getBlockTypeName(void) const;

    // RVA: 0x397 | Ordinal: 920
        void getBlockTypeNameS(void);

    // RVA: 0x3CB | Ordinal: 972
        void getClassName(void) const;

    // RVA: 0x423 | Ordinal: 1060
        void getInputPorts_(void) const;

    // RVA: 0x45A | Ordinal: 1115
        void getInputWires_(void) const;

    // RVA: 0x4A5 | Ordinal: 1190
        void getOutputPorts_(void) const;

    // RVA: 0x4DB | Ordinal: 1244
        void getOutputWires_(void) const;

    // RVA: 0x50D | Ordinal: 1294
        void getParametersList(void);

    // RVA: 0x522 | Ordinal: 1315
        void getWires(void) const;

    // RVA: 0x571 | Ordinal: 1394
        void serialize(class wBlockSerializer &);

    // RVA: 0x583 | Ordinal: 1412
        void set(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x107 | Ordinal: 264
        void wBlockWireDeserializerDescriptor(class wBlockWireDeserializerDescriptor const &);

    // RVA: 0x108 | Ordinal: 265
        void wBlockWireDeserializerDescriptor(void);

    // RVA: 0x167 | Ordinal: 360
        void _wBlockWireDeserializerDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKWIREDESERIALIZERDESCRIPTOR_HPP
