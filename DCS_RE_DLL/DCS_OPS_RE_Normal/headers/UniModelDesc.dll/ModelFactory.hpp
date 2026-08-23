#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: ModelFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ModelFactory
{
public:

    // RVA: 0x4C | Ordinal: 77
        void createById(char const *);

    // RVA: 0x84 | Ordinal: 133
        void getNumAliveObjects(void);

    // RVA: 0xB9 | Ordinal: 186
        void inst(void);

    // RVA: 0x13C | Ordinal: 317
        void unregObj(class model::IObject *);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_MODELFACTORY_HPP
