#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLEngineShaderManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLEngineShaderManager
{
public:

    // RVA: 0x19B | Ordinal: 412
        void QOpenGLEngineShaderManager(class QOpenGLContext *);

    // RVA: 0xAA8 | Ordinal: 2729
        void blitProgram(void);

    // RVA: 0xCF7 | Ordinal: 3320
        void currentProgram(void);

    // RVA: 0x11B5 | Ordinal: 4534
        void getUniformLocation(enum QOpenGLEngineShaderManager::Uniform);

    // RVA: 0x4E5B | Ordinal: 20060
        void hasComplexGeometry(void) const;

    // RVA: 0x5274 | Ordinal: 21109
        void metaObject(void) const;

    // RVA: 0x53A5 | Ordinal: 21414
        void optimiseForBrushTransform(enum QTransform::TransformationType);

    // RVA: 0x558B | Ordinal: 21900
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55CF | Ordinal: 21968
        void qt_metacast(char const *);

    // RVA: 0x5625 | Ordinal: 22054
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56D3 | Ordinal: 22228
        void removeCustomStage(void);

    // RVA: 0x58CD | Ordinal: 22734
        void setCompositionMode(enum QPainter::CompositionMode);

    // RVA: 0x58F5 | Ordinal: 22774
        void setCustomStage(class QOpenGLCustomShaderStage *);

    // RVA: 0x5948 | Ordinal: 22857
        void setDirty(void);

    // RVA: 0x59DE | Ordinal: 23007
        void setHasComplexGeometry(bool);

    // RVA: 0x5A59 | Ordinal: 23130
        void setMaskType(enum QOpenGLEngineShaderManager::MaskType);

    // RVA: 0x5AB0 | Ordinal: 23217
        void setOpacityMode(enum QOpenGLEngineShaderManager::OpacityMode);

    // RVA: 0x5BA2 | Ordinal: 23459
        void setSrcPixelType(enum Qt::BrushStyle);

    // RVA: 0x5BA3 | Ordinal: 23460
        void setSrcPixelType(enum QOpenGLEngineShaderManager::PixelSrcType);

    // RVA: 0x5D27 | Ordinal: 23848
        void simpleProgram(void);

    // RVA: 0x5FB2 | Ordinal: 24499
        void tr(char const *, char const *, int);

    // RVA: 0x5FF9 | Ordinal: 24570
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60D7 | Ordinal: 24792
        void useBlitProgram(void);

    // RVA: 0x60D9 | Ordinal: 24794
        void useCorrectShaderProg(void);

    // RVA: 0x60E1 | Ordinal: 24802
        void useSimpleProgram(void);

    // RVA: 0x475 | Ordinal: 1142
        void _QOpenGLEngineShaderManager(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLENGINESHADERMANAGER_HPP
