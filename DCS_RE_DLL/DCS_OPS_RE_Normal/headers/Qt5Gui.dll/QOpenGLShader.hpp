#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLShader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLShader
{
public:

    // RVA: 0x1D2 | Ordinal: 467
        void QOpenGLShader(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QObject *);

    // RVA: 0xC20 | Ordinal: 3105
        void compileSourceCode(class QByteArray const &);

    // RVA: 0xC21 | Ordinal: 3106
        void compileSourceCode(class QString const &);

    // RVA: 0xC22 | Ordinal: 3107
        void compileSourceCode(char const *);

    // RVA: 0xC23 | Ordinal: 3108
        void compileSourceFile(class QString const &);

    // RVA: 0xD41 | Ordinal: 3394
        void d_func(void);

    // RVA: 0xD42 | Ordinal: 3395
        void d_func(void) const;

    // RVA: 0x4E74 | Ordinal: 20085
        void hasOpenGLShaders(class QFlags<enum QOpenGLShader::ShaderTypeBit>, class QOpenGLContext *);

    // RVA: 0x4FDB | Ordinal: 20444
        void isCompiled(void) const;

    // RVA: 0x51A4 | Ordinal: 20901
        void log(void) const;

    // RVA: 0x5275 | Ordinal: 21110
        void metaObject(void) const;

    // RVA: 0x558C | Ordinal: 21901
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55D0 | Ordinal: 21969
        void qt_metacast(char const *);

    // RVA: 0x5626 | Ordinal: 22055
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5CED | Ordinal: 23790
        void shaderId(void) const;

    // RVA: 0x5CF1 | Ordinal: 23794
        void shaderType(void) const;

    // RVA: 0x5D66 | Ordinal: 23911
        void sourceCode(void) const;

    // RVA: 0x5FB3 | Ordinal: 24500
        void tr(char const *, char const *, int);

    // RVA: 0x5FFA | Ordinal: 24571
        void trUtf8(char const *, char const *, int);

    // RVA: 0x49B | Ordinal: 1180
        void _QOpenGLShader(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLSHADER_HPP
