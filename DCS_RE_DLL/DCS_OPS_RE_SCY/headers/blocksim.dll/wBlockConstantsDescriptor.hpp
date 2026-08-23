#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockConstantsDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockConstantsDescriptor
{
public:

    // RVA: 0x261 | Ordinal: 610
        void __create_instance(void);

    // RVA: 0x2B3 | Ordinal: 692
        void clone(void) const;

    // RVA: 0x2C6 | Ordinal: 711
        void convertToWireType_(enum eParameterType);

    // RVA: 0x2E8 | Ordinal: 745
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x324 | Ordinal: 805
        void getBlockClassNameS(void);

    // RVA: 0x359 | Ordinal: 858
        void getBlockTypeName(void) const;

    // RVA: 0x389 | Ordinal: 906
        void getBlockTypeNameS(void);

    // RVA: 0x3BD | Ordinal: 958
        void getClassName(void) const;

    // RVA: 0x415 | Ordinal: 1046
        void getInputPorts_(void) const;

    // RVA: 0x44C | Ordinal: 1101
        void getInputWires_(void) const;

    // RVA: 0x497 | Ordinal: 1176
        void getOutputPorts_(void) const;

    // RVA: 0x4CD | Ordinal: 1230
        void getOutputWires_(void) const;

    // RVA: 0x4FF | Ordinal: 1280
        void getParametersList(void);

    // RVA: 0x56B | Ordinal: 1388
        void serialize(class wBlockSerializer &);

    // RVA: 0x593 | Ordinal: 1428
        void setParameters(class ed::vector<class wBlockParameterContainer, class ed::allocator<class wBlockParameterContainer>> const &);

    // RVA: 0x59B | Ordinal: 1436
        void setValueToLeadData_(class wBlockParameterContainer const &, unsigned char *);

    // RVA: 0x5AD | Ordinal: 1454
        void updateWiresList_(void);

    // RVA: 0xD9 | Ordinal: 218
        void wBlockConstantsDescriptor(class wBlockConstantsDescriptor const &);

    // RVA: 0xDA | Ordinal: 219
        void wBlockConstantsDescriptor(void);

    // RVA: 0x157 | Ordinal: 344
        void _wBlockConstantsDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKCONSTANTSDESCRIPTOR_HPP
