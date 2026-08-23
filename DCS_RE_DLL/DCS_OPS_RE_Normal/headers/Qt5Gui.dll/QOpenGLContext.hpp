#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLContext
{
public:

    // RVA: 0x193 | Ordinal: 404
        void QOpenGLContext(class QObject *);

    // RVA: 0x93F | Ordinal: 2368
        void aboutToBeDestroyed(void);

    // RVA: 0xA1E | Ordinal: 2591
        void areSharing(class QOpenGLContext *, class QOpenGLContext *);

    // RVA: 0xC8B | Ordinal: 3212
        void create(void);

    // RVA: 0xCE1 | Ordinal: 3298
        void currentContext(void);

    // RVA: 0xD31 | Ordinal: 3378
        void d_func(void);

    // RVA: 0xD32 | Ordinal: 3379
        void d_func(void) const;

    // RVA: 0xDCC | Ordinal: 3533
        void defaultFramebufferObject(void) const;

    // RVA: 0xDE7 | Ordinal: 3560
        void deleteQGLContext(void);

    // RVA: 0xE12 | Ordinal: 3603
        void destroy(void);

    // RVA: 0xE8C | Ordinal: 3725
        void doneCurrent(void);

    // RVA: 0x1005 | Ordinal: 4102
        void extensions(void) const;

    // RVA: 0x1008 | Ordinal: 4105
        void extraFunctions(void) const;

    // RVA: 0x10EF | Ordinal: 4336
        void format(void) const;

    // RVA: 0x1173 | Ordinal: 4468
        void functions(void) const;

    // RVA: 0x1174 | Ordinal: 4469
        void functionsBackendStorage(void) const;

    // RVA: 0x11AC | Ordinal: 4525
        void getProcAddress(class QByteArray const &) const)(void);

    // RVA: 0x11AD | Ordinal: 4526
        void getProcAddress(char const *) const)(void);

    // RVA: 0x4DE4 | Ordinal: 19941
        void globalShareContext(void);

    // RVA: 0x4E1A | Ordinal: 19995
        void handle(void) const;

    // RVA: 0x4E63 | Ordinal: 20068
        void hasExtension(class QByteArray const &) const;

    // RVA: 0x4F5D | Ordinal: 20318
        void insertExternalFunctions(class QAbstractOpenGLFunctions *);

    // RVA: 0x505E | Ordinal: 20575
        void isOpenGLES(void) const;

    // RVA: 0x5098 | Ordinal: 20633
        void isValid(void) const;

    // RVA: 0x51DE | Ordinal: 20959
        void makeCurrent(class QSurface *);

    // RVA: 0x5271 | Ordinal: 21106
        void metaObject(void) const;

    // RVA: 0x531D | Ordinal: 21278
        void nativeHandle(void) const;

    // RVA: 0x53A0 | Ordinal: 21409
        void openGLModuleHandle(void);

    // RVA: 0x53A1 | Ordinal: 21410
        void openGLModuleType(void);

    // RVA: 0x5508 | Ordinal: 21769
        void qGLContextHandle(void) const;

    // RVA: 0x5588 | Ordinal: 21897
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55CC | Ordinal: 21965
        void qt_metacast(char const *);

    // RVA: 0x5622 | Ordinal: 22051
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56D5 | Ordinal: 22230
        void removeExternalFunctions(class QAbstractOpenGLFunctions *);

    // RVA: 0x57C8 | Ordinal: 22473
        void screen(void) const;

    // RVA: 0x59B6 | Ordinal: 22967
        void setFormat(class QSurfaceFormat const &);

    // RVA: 0x5A9A | Ordinal: 23195
        void setNativeHandle(class QVariant const &);

    // RVA: 0x5B1D | Ordinal: 23326
        void setQGLContextHandle(void *, void (__cdecl *)(void *));

    // RVA: 0x5B72 | Ordinal: 23411
        void setScreen(class QScreen *);

    // RVA: 0x5B86 | Ordinal: 23431
        void setShareContext(class QOpenGLContext *);

    // RVA: 0x5C00 | Ordinal: 23553
        void setTextureFunctions(class QOpenGLTextureHelper *);

    // RVA: 0x5D00 | Ordinal: 23809
        void shareContext(void) const;

    // RVA: 0x5D03 | Ordinal: 23812
        void shareGroup(void) const;

    // RVA: 0x5D04 | Ordinal: 23813
        void shareHandle(void) const;

    // RVA: 0x5E6E | Ordinal: 24175
        void supportsThreadedOpenGL(void);

    // RVA: 0x5E70 | Ordinal: 24177
        void surface(void) const;

    // RVA: 0x5E97 | Ordinal: 24216
        void swapBuffers(class QSurface *);

    // RVA: 0x5F1B | Ordinal: 24348
        void textureFunctions(void) const;

    // RVA: 0x5FAF | Ordinal: 24496
        void tr(char const *, char const *, int);

    // RVA: 0x5FF6 | Ordinal: 24567
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60FF | Ordinal: 24832
        void versionFunctions(class QOpenGLVersionProfile const &) const;

    // RVA: 0x46E | Ordinal: 1135
        void _QOpenGLContext(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLCONTEXT_HPP
