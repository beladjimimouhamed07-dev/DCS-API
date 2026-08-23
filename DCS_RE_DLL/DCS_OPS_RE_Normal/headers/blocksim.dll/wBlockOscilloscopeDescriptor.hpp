#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockOscilloscopeDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockOscilloscopeDescriptor
{
public:

    // RVA: 0x26C | Ordinal: 621
        void __create_instance(void);

    // RVA: 0x2BE | Ordinal: 703
        void clone(void) const;

    // RVA: 0x2F3 | Ordinal: 756
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x32F | Ordinal: 816
        void getBlockClassNameS(void);

    // RVA: 0x364 | Ordinal: 869
        void getBlockTypeName(void) const;

    // RVA: 0x394 | Ordinal: 917
        void getBlockTypeNameS(void);

    // RVA: 0x3C8 | Ordinal: 969
        void getClassName(void) const;

    // RVA: 0x3DE | Ordinal: 991
        void getFileName(void) const;

    // RVA: 0x420 | Ordinal: 1057
        void getInputPorts_(void) const;

    // RVA: 0x457 | Ordinal: 1112
        void getInputWires_(void) const;

    // RVA: 0x4A2 | Ordinal: 1187
        void getOutputPorts_(void) const;

    // RVA: 0x4D8 | Ordinal: 1241
        void getOutputWires_(void) const;

    // RVA: 0x50A | Ordinal: 1291
        void getParametersList(void);

    // RVA: 0x56F | Ordinal: 1392
        void serialize(class wBlockSerializer &);

    // RVA: 0x58C | Ordinal: 1421
        void setInputs(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0xFB | Ordinal: 252
        void wBlockOscilloscopeDescriptor(class wBlockOscilloscopeDescriptor &&);

    // RVA: 0xFC | Ordinal: 253
        void wBlockOscilloscopeDescriptor(class wBlockOscilloscopeDescriptor const &);

    // RVA: 0xFD | Ordinal: 254
        void wBlockOscilloscopeDescriptor(void);

    // RVA: 0x163 | Ordinal: 356
        void _wBlockOscilloscopeDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKOSCILLOSCOPEDESCRIPTOR_HPP
