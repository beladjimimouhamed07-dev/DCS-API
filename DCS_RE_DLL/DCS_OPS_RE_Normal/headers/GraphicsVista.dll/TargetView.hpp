#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: TargetView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class TargetView
{
public:

    // RVA: 0x1C | Ordinal: 29
        void TargetView(char const *, bool);

    // RVA: 0x12A | Ordinal: 299
        void reloadConfig(void);

    // RVA: 0x12C | Ordinal: 301
        void render(class Graphics::Context *);

    // RVA: 0x13A | Ordinal: 315
        void setConfig(char const *);

    // RVA: 0x33 | Ordinal: 52
        void _TargetView(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_TARGETVIEW_HPP
