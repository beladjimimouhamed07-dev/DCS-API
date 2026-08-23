#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShader
{
public:

    // RVA: 0x2E6 | Ordinal: 743
        void QShader(class QShader const &);

    // RVA: 0x2E7 | Ordinal: 744
        void QShader(void);

    // RVA: 0xA44 | Ordinal: 2629
        void availableShaders(void) const;

    // RVA: 0xE06 | Ordinal: 3591
        void description(void) const;

    // RVA: 0xE28 | Ordinal: 3625
        void detach(void);

    // RVA: 0x1164 | Ordinal: 4453
        void fromSerialized(class QByteArray const &);

    // RVA: 0x50A4 | Ordinal: 20645
        void isValid(void) const;

    // RVA: 0x5326 | Ordinal: 21287
        void nativeResourceBindingMap(class QShaderKey const &) const;

    // RVA: 0x56E2 | Ordinal: 22243
        void removeResourceBindingMap(class QShaderKey const &);

    // RVA: 0x56EB | Ordinal: 22252
        void removeShader(class QShaderKey const &);

    // RVA: 0x5807 | Ordinal: 22536
        void serialized(void) const;

    // RVA: 0x5930 | Ordinal: 22833
        void setDescription(class QShaderDescription const &);

    // RVA: 0x5B41 | Ordinal: 23362
        void setResourceBindingMap(class QShaderKey const &, class QHash<int, struct QPair<int, int>> const &);

    // RVA: 0x5B7C | Ordinal: 23421
        void setShader(class QShaderKey const &, class QShaderCode const &);

    // RVA: 0x5BA4 | Ordinal: 23461
        void setStage(enum QShader::Stage);

    // RVA: 0x5CEA | Ordinal: 23787
        void shader(class QShaderKey const &) const;

    // RVA: 0x5D78 | Ordinal: 23929
        void stage(void) const;

    // RVA: 0x512 | Ordinal: 1299
        void _QShader(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADER_HPP
