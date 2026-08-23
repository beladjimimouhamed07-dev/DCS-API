#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Models
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Models
{
public:

    // RVA: 0xE2 | Ordinal: 227
        void deinit(void);

    // RVA: 0xEC | Ordinal: 237
        void gc(void);

    // RVA: 0xED | Ordinal: 238
        void get(char const *, struct model::ModelOptions const *, bool);

    // RVA: 0xEE | Ordinal: 239
        void get(char const *, bool);

    // RVA: 0x107 | Ordinal: 264
        void init(void);

    // RVA: 0x117 | Ordinal: 280
        void inst(void);

    // RVA: 0x124 | Ordinal: 293
        void regFactory(class Graphics::Model * (__cdecl *)(char const *, struct model::ModelOptions const &));

    // RVA: 0x129 | Ordinal: 298
        void reloadAll(void);

    // RVA: 0x13C | Ordinal: 317
        void setDefaultModelOptions(struct model::ModelOptions const &);

    // RVA: 0x13E | Ordinal: 319
        void setGenerationId(unsigned int);

    // RVA: 0x15A | Ordinal: 347
        void unregFactory(class Graphics::Model * (__cdecl *)(char const *, struct model::ModelOptions const &));
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_MODELS_HPP
