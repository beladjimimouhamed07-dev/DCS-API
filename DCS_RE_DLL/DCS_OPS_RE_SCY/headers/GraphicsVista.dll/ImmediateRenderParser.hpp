#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: ImmediateRenderParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class ImmediateRenderParser
{
public:

    // RVA: 0x5B | Ordinal: 92
        void DrawAll(void);

    // RVA: 0x9 | Ordinal: 10
        void ImmediateRenderParser(void);

    // RVA: 0x92 | Ordinal: 147
        void InitFrame(int *, int *);

    // RVA: 0x99 | Ordinal: 154
        void OnObjectReady(class Graphics::IRenderObject *, unsigned int);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_IMMEDIATERENDERPARSER_HPP
