#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: LiveryBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class LiveryBuilder
{
public:

    // RVA: 0x2F | Ordinal: 48
        void LiveryBuilder(void);

    // RVA: 0xE3 | Ordinal: 228
        void addCountry(char const *);

    // RVA: 0xE4 | Ordinal: 229
        void addCustomArgument(unsigned int, float);

    // RVA: 0x10A | Ordinal: 267
        void addTexture(char const *, unsigned int, char const *);

    // RVA: 0x11E | Ordinal: 287
        void build(void);

    // RVA: 0x28A | Ordinal: 651
        void setName(char const *, char const *);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_LIVERYBUILDER_HPP
