#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiShaderStage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiShaderStage
{
public:

    // RVA: 0x2B9 | Ordinal: 698
        void QRhiShaderStage(class QRhiShaderStage &&);

    // RVA: 0x2BA | Ordinal: 699
        void QRhiShaderStage(class QRhiShaderStage const &);

    // RVA: 0x2BB | Ordinal: 700
        void QRhiShaderStage(enum QRhiShaderStage::Type, class QShader const &, enum QShader::Variant);

    // RVA: 0x2BC | Ordinal: 701
        void QRhiShaderStage(void);

    // RVA: 0x5B7B | Ordinal: 23420
        void setShader(class QShader const &);

    // RVA: 0x5B84 | Ordinal: 23429
        void setShaderVariant(enum QShader::Variant);

    // RVA: 0x5C23 | Ordinal: 23588
        void setType(enum QRhiShaderStage::Type);

    // RVA: 0x5CE9 | Ordinal: 23786
        void shader(void) const;

    // RVA: 0x5CF3 | Ordinal: 23796
        void shaderVariant(void) const;

    // RVA: 0x606E | Ordinal: 24687
        void type(void) const;

    // RVA: 0x504 | Ordinal: 1285
        void _QRhiShaderStage(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHISHADERSTAGE_HPP
