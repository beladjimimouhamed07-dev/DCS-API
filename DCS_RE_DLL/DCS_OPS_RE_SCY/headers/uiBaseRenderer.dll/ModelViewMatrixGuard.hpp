#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: ModelViewMatrixGuard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace uiBaseRenderer {

class ModelViewMatrixGuard
{
public:

    // RVA: 0x1 | Ordinal: 2
        void ModelViewMatrixGuard(void);

    // RVA: 0x6B | Ordinal: 108
        void makeIdentity(void);

    // RVA: 0x6D | Ordinal: 110
        void makeRotate(float, float, float, float);

    // RVA: 0x6E | Ordinal: 111
        void makeTranslate(float, float, float);

    // RVA: 0x7C | Ordinal: 125
        void setIdentity(void);

    // RVA: 0x7E | Ordinal: 127
        void setMult(class osg::Matrixf const &);

    // RVA: 0x81 | Ordinal: 130
        void setRotate(float, float, float, float);

    // RVA: 0x8D | Ordinal: 142
        void setTranslate(float, float, float);

    // RVA: 0x16 | Ordinal: 23
        void _ModelViewMatrixGuard(void);
};

} // namespace uiBaseRenderer

// DCS_OPS_RE_UIBASERENDERER.DLL_MODELVIEWMATRIXGUARD_HPP
