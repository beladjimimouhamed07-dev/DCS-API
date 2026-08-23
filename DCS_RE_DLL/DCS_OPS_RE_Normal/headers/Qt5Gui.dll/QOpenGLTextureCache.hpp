#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLTextureCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLTextureCache
{
public:

    // RVA: 0x1D9 | Ordinal: 474
        void QOpenGLTextureCache(class QOpenGLContext *);

    // RVA: 0xA92 | Ordinal: 2707
        void bindTexture(class QOpenGLContext *, __int64, class QImage const &, class QFlags<enum QOpenGLTextureUploader::BindOption>);

    // RVA: 0xA93 | Ordinal: 2708
        void bindTexture(class QOpenGLContext *, class QImage const &, class QFlags<enum QOpenGLTextureUploader::BindOption>);

    // RVA: 0xA94 | Ordinal: 2709
        void bindTexture(class QOpenGLContext *, class QPixmap const &, class QFlags<enum QOpenGLTextureUploader::BindOption>);

    // RVA: 0xB2A | Ordinal: 2859
        void cacheForContext(class QOpenGLContext *);

    // RVA: 0x1127 | Ordinal: 4392
        void freeResource(class QOpenGLContext *);

    // RVA: 0x4FA6 | Ordinal: 20391
        void invalidate(__int64);

    // RVA: 0x4FAB | Ordinal: 20396
        void invalidateResource(void);

    // RVA: 0x4A1 | Ordinal: 1186
        void _QOpenGLTextureCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLTEXTURECACHE_HPP
