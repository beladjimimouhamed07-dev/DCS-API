#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLBuffer
{
public:

    // RVA: 0x190 | Ordinal: 401
        void QOpenGLBuffer(class QOpenGLBuffer const &);

    // RVA: 0x191 | Ordinal: 402
        void QOpenGLBuffer(enum QOpenGLBuffer::Type);

    // RVA: 0x192 | Ordinal: 403
        void QOpenGLBuffer(void);

    // RVA: 0x9C6 | Ordinal: 2503
        void allocate(int);

    // RVA: 0x9C7 | Ordinal: 2504
        void allocate(void const *, int);

    // RVA: 0xA87 | Ordinal: 2696
        void bind(void);

    // RVA: 0xB13 | Ordinal: 2836
        void bufferId(void) const;

    // RVA: 0xC8A | Ordinal: 3211
        void create(void);

    // RVA: 0xD2F | Ordinal: 3376
        void d_func(void);

    // RVA: 0xD30 | Ordinal: 3377
        void d_func(void) const;

    // RVA: 0xE11 | Ordinal: 3602
        void destroy(void);

    // RVA: 0x4FFB | Ordinal: 20476
        void isCreated(void) const;

    // RVA: 0x51F5 | Ordinal: 20982
        void map(enum QOpenGLBuffer::Access);

    // RVA: 0x5209 | Ordinal: 21002
        void mapRange(int, int, class QFlags<enum QOpenGLBuffer::RangeAccessFlag>);

    // RVA: 0x5672 | Ordinal: 22131
        void read(int, void *, int);

    // RVA: 0x56B4 | Ordinal: 22197
        void release(void);

    // RVA: 0x56B5 | Ordinal: 22198
        void release(enum QOpenGLBuffer::Type);

    // RVA: 0x5C84 | Ordinal: 23685
        void setUsagePattern(enum QOpenGLBuffer::UsagePattern);

    // RVA: 0x5D32 | Ordinal: 23859
        void size(void) const;

    // RVA: 0x6068 | Ordinal: 24681
        void type(void) const;

    // RVA: 0x60A5 | Ordinal: 24742
        void unmap(void);

    // RVA: 0x60D6 | Ordinal: 24791
        void usagePattern(void) const;

    // RVA: 0x6198 | Ordinal: 24985
        void write(int, void const *, int);

    // RVA: 0x46D | Ordinal: 1134
        void _QOpenGLBuffer(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLBUFFER_HPP
