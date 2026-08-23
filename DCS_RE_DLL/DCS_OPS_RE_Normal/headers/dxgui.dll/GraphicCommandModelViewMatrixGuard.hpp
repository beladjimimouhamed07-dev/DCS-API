#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: GraphicCommandModelViewMatrixGuard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class GraphicCommandModelViewMatrixGuard
{
public:

    // RVA: 0x6E | Ordinal: 111
        void GraphicCommandModelViewMatrixGuard(class gui::GraphicCommands *);

    // RVA: 0x64B | Ordinal: 1612
        void makeIdentity(void);

    // RVA: 0x658 | Ordinal: 1625
        void makeRotate(float, float, float, float);

    // RVA: 0x65F | Ordinal: 1632
        void makeTranslate(float, float, float);

    // RVA: 0x8C6 | Ordinal: 2247
        void setIdentity(void);

    // RVA: 0x91B | Ordinal: 2332
        void setRotate(float, float, float, float);

    // RVA: 0x95A | Ordinal: 2395
        void setTranslate(float, float, float);

    // RVA: 0xF2 | Ordinal: 243
        void _GraphicCommandModelViewMatrixGuard(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRAPHICCOMMANDMODELVIEWMATRIXGUARD_HPP
