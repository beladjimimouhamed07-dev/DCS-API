#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShaderFormat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShaderFormat
{
public:

    // RVA: 0x2F2 | Ordinal: 755
        void QShaderFormat(void);

    // RVA: 0x9F4 | Ordinal: 2549
        void api(void) const;

    // RVA: 0x1007 | Ordinal: 4104
        void extensions(void) const;

    // RVA: 0x50A6 | Ordinal: 20647
        void isValid(void) const;

    // RVA: 0x582C | Ordinal: 22573
        void setApi(enum QShaderFormat::Api);

    // RVA: 0x5962 | Ordinal: 22883
        void setExtensions(class QStringList const &);

    // RVA: 0x5B83 | Ordinal: 23428
        void setShaderType(enum QShaderFormat::ShaderType);

    // RVA: 0x5C95 | Ordinal: 23702
        void setVendor(class QString const &);

    // RVA: 0x5C97 | Ordinal: 23704
        void setVersion(class QVersionNumber const &);

    // RVA: 0x5CF2 | Ordinal: 23795
        void shaderType(void) const;

    // RVA: 0x5E5E | Ordinal: 24159
        void supports(class QShaderFormat const &) const;

    // RVA: 0x60F9 | Ordinal: 24826
        void vendor(void) const;

    // RVA: 0x60FC | Ordinal: 24829
        void version(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADERFORMAT_HPP
