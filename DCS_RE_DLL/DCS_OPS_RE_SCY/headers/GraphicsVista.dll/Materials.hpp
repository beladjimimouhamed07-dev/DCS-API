#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Materials
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Materials
{
public:

    // RVA: 0xDE | Ordinal: 223
        void create(char const *, char const *);

    // RVA: 0xDF | Ordinal: 224
        void create(char const *, char const *, class Graphics::Material * (__cdecl *)(void));

    // RVA: 0xE0 | Ordinal: 225
        void create(char const *);

    // RVA: 0xEB | Ordinal: 236
        void gc(bool);

    // RVA: 0x118 | Ordinal: 281
        void lib(void);

    // RVA: 0x123 | Ordinal: 292
        void regFactory(char const *, class Graphics::Material * (__cdecl *)(void));
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_MATERIALS_HPP
