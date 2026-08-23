#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: IAnimatedProperty
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class IAnimatedProperty
{
public:

    // RVA: 0xC7 | Ordinal: 200
        void load(class io::IBinaryFileR &);

    // RVA: 0x10A | Ordinal: 267
        void save(class io::IBinaryFileW &) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_IANIMATEDPROPERTY_HPP
