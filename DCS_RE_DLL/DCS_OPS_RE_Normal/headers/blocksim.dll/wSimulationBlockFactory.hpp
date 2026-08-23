#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationBlockFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationBlockFactory
{
public:

    // RVA: 0x301 | Ordinal: 770
        void generate(class ed::basic_string<char> const &);

    // RVA: 0x460 | Ordinal: 1121
        void getKeysDescriptions(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void instance(void);

    // RVA: 0x54C | Ordinal: 1357
        void register_descriptor(class ed::basic_string<char> const &, class CoreMeta::Functor<class wSimulationBlockDescriptor *, struct CoreMeta::TypeList<class CoreMeta::NullType, class CoreMeta::NullType>> const &, class ed::basic_string<char> const &);

    // RVA: 0x11E | Ordinal: 287
        void wSimulationBlockFactory(class wSimulationBlockFactory &&);

    // RVA: 0x11F | Ordinal: 288
        void wSimulationBlockFactory(class wSimulationBlockFactory const &);

    // RVA: 0x120 | Ordinal: 289
        void wSimulationBlockFactory(void);

    // RVA: 0x170 | Ordinal: 369
        void _wSimulationBlockFactory(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONBLOCKFACTORY_HPP
