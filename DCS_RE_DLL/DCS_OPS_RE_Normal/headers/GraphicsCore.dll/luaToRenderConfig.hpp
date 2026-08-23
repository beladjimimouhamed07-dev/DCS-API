#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: luaToRenderConfig
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace GraphicsCore {

class luaToRenderConfig
{
public:

    // RVA: 0x167 | Ordinal: 360
        void fillRenderBackend(class Lua::Config &, class ed::basic_string<char> const &);

    // RVA: 0x5D | Ordinal: 94
        void luaToRenderConfig(class GraphicsCore::luaToRenderConfig &&);

    // RVA: 0x5E | Ordinal: 95
        void luaToRenderConfig(class GraphicsCore::luaToRenderConfig const &);

    // RVA: 0x5F | Ordinal: 96
        void luaToRenderConfig(void);

    // RVA: 0x21C | Ordinal: 541
        void open(class Lua::Config &, struct render::RenderConfig *);

    // RVA: 0x236 | Ordinal: 567
        void readValue(class Lua::Config &);

    // RVA: 0x8A | Ordinal: 139
        void _luaToRenderConfig(void);
};

} // namespace GraphicsCore

// DCS_OPS_RE_GRAPHICSCORE.DLL_LUATORENDERCONFIG_HPP
