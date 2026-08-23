#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockSubsystemDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockSubsystemDescriptor
{
public:

    // RVA: 0x26D | Ordinal: 622
        void __create_instance(void);

    // RVA: 0x288 | Ordinal: 649
        void addParameter_(class Lua::Loader *, class ed::basic_string<char> const &, class wBlockParameterContainer &);

    // RVA: 0x2BF | Ordinal: 704
        void clone(void) const;

    // RVA: 0x2F4 | Ordinal: 757
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x2F9 | Ordinal: 762
        void debug_dump(void);

    // RVA: 0x330 | Ordinal: 817
        void getBlockClassNameS(void);

    // RVA: 0x365 | Ordinal: 870
        void getBlockTypeName(void) const;

    // RVA: 0x395 | Ordinal: 918
        void getBlockTypeNameS(void);

    // RVA: 0x3C9 | Ordinal: 970
        void getClassName(void) const;

    // RVA: 0x421 | Ordinal: 1058
        void getInputPorts_(void) const;

    // RVA: 0x458 | Ordinal: 1113
        void getInputWires_(void) const;

    // RVA: 0x4A3 | Ordinal: 1188
        void getOutputPorts_(void) const;

    // RVA: 0x4D9 | Ordinal: 1242
        void getOutputWires_(void) const;

    // RVA: 0x50B | Ordinal: 1292
        void getParametersList(void);

    // RVA: 0x513 | Ordinal: 1300
        void getScheme(void);

    // RVA: 0x531 | Ordinal: 1330
        void isOfType(enum weBlockType) const;

    // RVA: 0x570 | Ordinal: 1393
        void serialize(class wBlockSerializer &);

    // RVA: 0x595 | Ordinal: 1430
        void setParameters(class ed::vector<class wBlockParameterContainer, class ed::allocator<class wBlockParameterContainer>> const &);

    // RVA: 0x5AB | Ordinal: 1452
        void update(void);

    // RVA: 0xFE | Ordinal: 255
        void wBlockSubsystemDescriptor(class wBlockSubsystemDescriptor &&);

    // RVA: 0xFF | Ordinal: 256
        void wBlockSubsystemDescriptor(class wBlockSubsystemDescriptor const &);

    // RVA: 0x100 | Ordinal: 257
        void wBlockSubsystemDescriptor(void);

    // RVA: 0x164 | Ordinal: 357
        void _wBlockSubsystemDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKSUBSYSTEMDESCRIPTOR_HPP
