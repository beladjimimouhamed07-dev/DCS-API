#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: InputOutputBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace wSimulationSystemScheme {

class InputOutputBlock
{
public:

    // RVA: 0xC9 | Ordinal: 202
        void InputOutputBlock(class wSimulationSystemScheme::InputOutputBlock &&);

    // RVA: 0xCA | Ordinal: 203
        void InputOutputBlock(class wSimulationSystemScheme::InputOutputBlock const &);

    // RVA: 0xCB | Ordinal: 204
        void InputOutputBlock(void);

    // RVA: 0x287 | Ordinal: 648
        void addLead(bool, bool, class ed::basic_string<char> const &, enum eLeadType);

    // RVA: 0x2AF | Ordinal: 688
        void clone(void) const;

    // RVA: 0x2E4 | Ordinal: 741
        void create(class Lua::Loader *, class wSimulationSystem *);

    // RVA: 0x355 | Ordinal: 854
        void getBlockTypeName(void) const;

    // RVA: 0x3B9 | Ordinal: 954
        void getClassName(void) const;

    // RVA: 0x411 | Ordinal: 1042
        void getInputPorts_(void) const;

    // RVA: 0x449 | Ordinal: 1098
        void getInputWires_(void) const;

    // RVA: 0x494 | Ordinal: 1173
        void getOutputPorts_(void) const;

    // RVA: 0x4CA | Ordinal: 1227
        void getOutputWires_(void) const;

    // RVA: 0x537 | Ordinal: 1336
        void load(class Lua::Loader &);

    // RVA: 0x53B | Ordinal: 1340
        void loadLeads_(class Lua::Loader &, class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> &);

    // RVA: 0x551 | Ordinal: 1362
        void removeLead(bool, bool, class ed::basic_string<char> const &);

    // RVA: 0x554 | Ordinal: 1365
        void renameLead(bool, bool, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x55A | Ordinal: 1371
        void save(class Lua::Loader &);

    // RVA: 0x55D | Ordinal: 1374
        void saveLeads_(class Lua::Loader &, class boost::container::small_vector<struct wLeadDescription, 16, class ed::allocator<struct wLeadDescription>, void> &);

    // RVA: 0x151 | Ordinal: 338
        void _InputOutputBlock(void);
};

} // namespace wSimulationSystemScheme

// DCS_OPS_RE_BLOCKSIM.DLL_INPUTOUTPUTBLOCK_HPP
