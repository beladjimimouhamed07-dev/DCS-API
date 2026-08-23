#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: BaseNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class BaseNode
{
public:

    // RVA: 0x82 | Ordinal: 131
        void getName(void) const;

    // RVA: 0x90 | Ordinal: 145
        void getProperties(void);

    // RVA: 0x91 | Ordinal: 146
        void getProperties(void) const;

    // RVA: 0xA5 | Ordinal: 166
        void getVersion(void) const;

    // RVA: 0x12B | Ordinal: 300
        void setName(char const *);

    // RVA: 0x134 | Ordinal: 309
        void setVersion(int);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_BASENODE_HPP
