#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShaderKey
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShaderKey
{
public:

    // RVA: 0x2F4 | Ordinal: 757
        void QShaderKey(enum QShader::Source, class QShaderVersion const &, enum QShader::Variant);

    // RVA: 0x2F5 | Ordinal: 758
        void QShaderKey(void);

    // RVA: 0x5B97 | Ordinal: 23448
        void setSource(enum QShader::Source);

    // RVA: 0x5B9D | Ordinal: 23454
        void setSourceVariant(enum QShader::Variant);

    // RVA: 0x5B9E | Ordinal: 23455
        void setSourceVersion(class QShaderVersion const &);

    // RVA: 0x5D64 | Ordinal: 23909
        void source(void) const;

    // RVA: 0x5D6D | Ordinal: 23918
        void sourceVariant(void) const;

    // RVA: 0x5D6E | Ordinal: 23919
        void sourceVersion(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADERKEY_HPP
