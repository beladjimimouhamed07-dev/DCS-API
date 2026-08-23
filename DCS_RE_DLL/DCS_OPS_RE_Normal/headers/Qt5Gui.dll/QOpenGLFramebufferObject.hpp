#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFramebufferObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFramebufferObject
{
public:

    // RVA: 0x1A5 | Ordinal: 422
        void QOpenGLFramebufferObject(class QSize const &, class QOpenGLFramebufferObjectFormat const &);

    // RVA: 0x1A6 | Ordinal: 423
        void QOpenGLFramebufferObject(class QSize const &, unsigned int);

    // RVA: 0x1A7 | Ordinal: 424
        void QOpenGLFramebufferObject(class QSize const &, enum QOpenGLFramebufferObject::Attachment, unsigned int, unsigned int);

    // RVA: 0x1A8 | Ordinal: 425
        void QOpenGLFramebufferObject(int, int, class QOpenGLFramebufferObjectFormat const &);

    // RVA: 0x1A9 | Ordinal: 426
        void QOpenGLFramebufferObject(int, int, unsigned int);

    // RVA: 0x1AA | Ordinal: 427
        void QOpenGLFramebufferObject(int, int, enum QOpenGLFramebufferObject::Attachment, unsigned int, unsigned int);

    // RVA: 0x969 | Ordinal: 2410
        void addColorAttachment(class QSize const &, unsigned int);

    // RVA: 0x96A | Ordinal: 2411
        void addColorAttachment(int, int, unsigned int);

    // RVA: 0xA31 | Ordinal: 2610
        void attachment(void) const;

    // RVA: 0xA88 | Ordinal: 2697
        void bind(void);

    // RVA: 0xA91 | Ordinal: 2706
        void bindDefault(void);

    // RVA: 0xAA4 | Ordinal: 2725
        void blitFramebuffer(class QOpenGLFramebufferObject *, class QOpenGLFramebufferObject *, unsigned int, unsigned int);

    // RVA: 0xAA5 | Ordinal: 2726
        void blitFramebuffer(class QOpenGLFramebufferObject *, class QRect const &, class QOpenGLFramebufferObject *, class QRect const &, unsigned int, unsigned int);

    // RVA: 0xAA6 | Ordinal: 2727
        void blitFramebuffer(class QOpenGLFramebufferObject *, class QRect const &, class QOpenGLFramebufferObject *, class QRect const &, unsigned int, unsigned int, int, int);

    // RVA: 0xAA7 | Ordinal: 2728
        void blitFramebuffer(class QOpenGLFramebufferObject *, class QRect const &, class QOpenGLFramebufferObject *, class QRect const &, unsigned int, unsigned int, int, int, enum QOpenGLFramebufferObject::FramebufferRestorePolicy);

    // RVA: 0xD3D | Ordinal: 3390
        void d_func(void);

    // RVA: 0xD3E | Ordinal: 3391
        void d_func(void) const;

    // RVA: 0x10F0 | Ordinal: 4337
        void format(void) const;

    // RVA: 0x4E1B | Ordinal: 19996
        void handle(void) const;

    // RVA: 0x4E71 | Ordinal: 20082
        void hasOpenGLFramebufferBlit(void);

    // RVA: 0x4E72 | Ordinal: 20083
        void hasOpenGLFramebufferObjects(void);

    // RVA: 0x4E91 | Ordinal: 20114
        void height(void) const;

    // RVA: 0x4FD0 | Ordinal: 20433
        void isBound(void) const;

    // RVA: 0x5099 | Ordinal: 20634
        void isValid(void) const;

    // RVA: 0x56B6 | Ordinal: 22199
        void release(void);

    // RVA: 0x5831 | Ordinal: 22578
        void setAttachment(enum QOpenGLFramebufferObject::Attachment);

    // RVA: 0x5D33 | Ordinal: 23860
        void size(void) const;

    // RVA: 0x5D4E | Ordinal: 23887
        void sizes(void) const;

    // RVA: 0x5EC3 | Ordinal: 24260
        void takeTexture(int);

    // RVA: 0x5EC4 | Ordinal: 24261
        void takeTexture(void);

    // RVA: 0x5F16 | Ordinal: 24343
        void texture(void) const;

    // RVA: 0x5F22 | Ordinal: 24355
        void textures(void) const;

    // RVA: 0x5F49 | Ordinal: 24394
        void toImage(void) const;

    // RVA: 0x5F4A | Ordinal: 24395
        void toImage(bool) const;

    // RVA: 0x5F4B | Ordinal: 24396
        void toImage(bool, int) const;

    // RVA: 0x6150 | Ordinal: 24913
        void width(void) const;

    // RVA: 0x47A | Ordinal: 1147
        void _QOpenGLFramebufferObject(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFRAMEBUFFEROBJECT_HPP
