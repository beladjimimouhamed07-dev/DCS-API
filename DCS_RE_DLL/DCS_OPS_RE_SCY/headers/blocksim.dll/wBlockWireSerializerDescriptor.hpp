#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockWireSerializerDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockWireSerializerDescriptor
{
public:

    // RVA: 0x270 | Ordinal: 625
        void __create_instance(void);

    // RVA: 0x2C2 | Ordinal: 707
        void clone(void) const;

    // RVA: 0x2F7 | Ordinal: 760
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x333 | Ordinal: 820
        void getBlockClassNameS(void);

    // RVA: 0x368 | Ordinal: 873
        void getBlockTypeName(void) const;

    // RVA: 0x398 | Ordinal: 921
        void getBlockTypeNameS(void);

    // RVA: 0x3CC | Ordinal: 973
        void getClassName(void) const;

    // RVA: 0x424 | Ordinal: 1061
        void getInputPorts_(void) const;

    // RVA: 0x45B | Ordinal: 1116
        void getInputWires_(void) const;

    // RVA: 0x4A6 | Ordinal: 1191
        void getOutputPorts_(void) const;

    // RVA: 0x4DC | Ordinal: 1245
        void getOutputWires_(void) const;

    // RVA: 0x50E | Ordinal: 1295
        void getParametersList(void);

    // RVA: 0x523 | Ordinal: 1316
        void getWires(void) const;

    // RVA: 0x572 | Ordinal: 1395
        void serialize(class wBlockSerializer &);

    // RVA: 0x584 | Ordinal: 1413
        void set(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x109 | Ordinal: 266
        void wBlockWireSerializerDescriptor(class wBlockWireSerializerDescriptor const &);

    // RVA: 0x10A | Ordinal: 267
        void wBlockWireSerializerDescriptor(void);

    // RVA: 0x168 | Ordinal: 361
        void _wBlockWireSerializerDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKWIRESERIALIZERDESCRIPTOR_HPP
