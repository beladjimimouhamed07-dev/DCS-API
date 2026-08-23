#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockWireToPortDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockWireToPortDescriptor
{
public:

    // RVA: 0x271 | Ordinal: 626
        void __create_instance(void);

    // RVA: 0x2C3 | Ordinal: 708
        void clone(void) const;

    // RVA: 0x2F8 | Ordinal: 761
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x334 | Ordinal: 821
        void getBlockClassNameS(void);

    // RVA: 0x369 | Ordinal: 874
        void getBlockTypeName(void) const;

    // RVA: 0x399 | Ordinal: 922
        void getBlockTypeNameS(void);

    // RVA: 0x3CD | Ordinal: 974
        void getClassName(void) const;

    // RVA: 0x425 | Ordinal: 1062
        void getInputPorts_(void) const;

    // RVA: 0x45C | Ordinal: 1117
        void getInputWires_(void) const;

    // RVA: 0x4A7 | Ordinal: 1192
        void getOutputPorts_(void) const;

    // RVA: 0x4DD | Ordinal: 1246
        void getOutputWires_(void) const;

    // RVA: 0x50F | Ordinal: 1296
        void getParametersList(void);

    // RVA: 0x573 | Ordinal: 1396
        void serialize(class wBlockSerializer &);

    // RVA: 0x585 | Ordinal: 1414
        void set(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x10B | Ordinal: 268
        void wBlockWireToPortDescriptor(class wBlockWireToPortDescriptor &&);

    // RVA: 0x10C | Ordinal: 269
        void wBlockWireToPortDescriptor(class wBlockWireToPortDescriptor const &);

    // RVA: 0x10D | Ordinal: 270
        void wBlockWireToPortDescriptor(void);

    // RVA: 0x169 | Ordinal: 362
        void _wBlockWireToPortDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKWIRETOPORTDESCRIPTOR_HPP
