#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockLuaDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockLuaDescriptor
{
public:

    // RVA: 0x266 | Ordinal: 615
        void __create_instance(void);

    // RVA: 0x2B8 | Ordinal: 697
        void clone(void) const;

    // RVA: 0x2ED | Ordinal: 750
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x329 | Ordinal: 810
        void getBlockClassNameS(void);

    // RVA: 0x35E | Ordinal: 863
        void getBlockTypeName(void) const;

    // RVA: 0x38E | Ordinal: 911
        void getBlockTypeNameS(void);

    // RVA: 0x3C2 | Ordinal: 963
        void getClassName(void) const;

    // RVA: 0x41A | Ordinal: 1051
        void getInputPorts_(void) const;

    // RVA: 0x451 | Ordinal: 1106
        void getInputWires_(void) const;

    // RVA: 0x466 | Ordinal: 1127
        void getLuaState_(void) const;

    // RVA: 0x49C | Ordinal: 1181
        void getOutputPorts_(void) const;

    // RVA: 0x4D2 | Ordinal: 1235
        void getOutputWires_(void) const;

    // RVA: 0x4DF | Ordinal: 1248
        void getParamValue_(class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x504 | Ordinal: 1285
        void getParametersList(void);

    // RVA: 0x53C | Ordinal: 1341
        void loadScript_(class wBlockSerializer &);

    // RVA: 0x56D | Ordinal: 1390
        void serialize(class wBlockSerializer &);

    // RVA: 0x589 | Ordinal: 1418
        void setInputPorts(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x58B | Ordinal: 1420
        void setInputs(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x590 | Ordinal: 1425
        void setOutPorts(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x592 | Ordinal: 1427
        void setOutputs(class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> const &);

    // RVA: 0x594 | Ordinal: 1429
        void setParameters(class ed::vector<class wBlockParameterContainer, class ed::allocator<class wBlockParameterContainer>> const &);

    // RVA: 0xEA | Ordinal: 235
        void wBlockLuaDescriptor(class wBlockLuaDescriptor const &);

    // RVA: 0xEB | Ordinal: 236
        void wBlockLuaDescriptor(void);

    // RVA: 0x15D | Ordinal: 350
        void _wBlockLuaDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKLUADESCRIPTOR_HPP
