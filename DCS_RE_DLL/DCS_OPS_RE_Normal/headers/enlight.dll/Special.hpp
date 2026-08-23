#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: Special
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Special
{
public:

    // RVA: 0x86 | Ordinal: 135
        void deleteSceneProxy(class DCSSceneProxy &);

    // RVA: 0x94 | Ordinal: 149
        void generateUniqueObjectId(void);

    // RVA: 0xC7 | Ordinal: 200
        void newSceneProxy(class DCSSceneProxy &);

    // RVA: 0xD8 | Ordinal: 217
        void releaseUniqueObjectId(unsigned int);
};

} // namespace Graphics

// DCS_OPS_RE_ENLIGHT.DLL_SPECIAL_HPP
