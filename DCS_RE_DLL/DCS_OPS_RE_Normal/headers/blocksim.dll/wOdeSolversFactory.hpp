#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wOdeSolversFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wOdeSolversFactory
{
public:

    // RVA: 0x45F | Ordinal: 1120
        void getKeysDescriptions(void) const;

    // RVA: 0x52D | Ordinal: 1326
        void instance(void);

    // RVA: 0x54B | Ordinal: 1356
        void register_descriptor(class ed::basic_string<char> const &, class CoreMeta::Functor<class wOdeSolverDescriptor *, struct CoreMeta::TypeList<class CoreMeta::NullType, class CoreMeta::NullType>> const &, class ed::basic_string<char> const &);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WODESOLVERSFACTORY_HPP
