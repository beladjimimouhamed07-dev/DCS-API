#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLTextureBlitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLTextureBlitter
{
public:

    // RVA: 0x1D8 | Ordinal: 473
        void QOpenGLTextureBlitter(void);

    // RVA: 0xA8C | Ordinal: 2701
        void bind(unsigned int);

    // RVA: 0xAA2 | Ordinal: 2723
        void blit(unsigned int, class QMatrix4x4 const &, class QGenericMatrix<3, 3, float> const &);

    // RVA: 0xAA3 | Ordinal: 2724
        void blit(unsigned int, class QMatrix4x4 const &, enum QOpenGLTextureBlitter::Origin);

    // RVA: 0xC8E | Ordinal: 3215
        void create(void);

    // RVA: 0xD47 | Ordinal: 3400
        void d_func(void);

    // RVA: 0xD48 | Ordinal: 3401
        void d_func(void) const;

    // RVA: 0xE14 | Ordinal: 3605
        void destroy(void);

    // RVA: 0x4FFD | Ordinal: 20478
        void isCreated(void) const;

    // RVA: 0x56BA | Ordinal: 22203
        void release(void);

    // RVA: 0x5AAC | Ordinal: 23213
        void setOpacity(float);

    // RVA: 0x5B2F | Ordinal: 23344
        void setRedBlueSwizzle(bool);

    // RVA: 0x5D6C | Ordinal: 23917
        void sourceTransform(class QRectF const &, class QSize const &, enum QOpenGLTextureBlitter::Origin);

    // RVA: 0x5E62 | Ordinal: 24163
        void supportsExternalOESTarget(void) const;

    // RVA: 0x5ECB | Ordinal: 24268
        void targetTransform(class QRectF const &, class QRect const &);

    // RVA: 0x4A0 | Ordinal: 1185
        void _QOpenGLTextureBlitter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLTEXTUREBLITTER_HPP
