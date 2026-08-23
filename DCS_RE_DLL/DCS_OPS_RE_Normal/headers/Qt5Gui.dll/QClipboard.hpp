#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QClipboard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QClipboard
{
public:

    // RVA: 0xA2 | Ordinal: 163
        void QClipboard(class QObject *);

    // RVA: 0xB7C | Ordinal: 2941
        void changed(enum QClipboard::Mode);

    // RVA: 0xB9F | Ordinal: 2976
        void clear(enum QClipboard::Mode);

    // RVA: 0xDAC | Ordinal: 3501
        void dataChanged(void);

    // RVA: 0xF84 | Ordinal: 3973
        void emitChanged(enum QClipboard::Mode);

    // RVA: 0x1074 | Ordinal: 4213
        void findBufferChanged(void);

    // RVA: 0x4EDB | Ordinal: 20188
        void image(enum QClipboard::Mode) const;

    // RVA: 0x5261 | Ordinal: 21090
        void metaObject(void) const;

    // RVA: 0x52B2 | Ordinal: 21171
        void mimeData(enum QClipboard::Mode) const;

    // RVA: 0x53CB | Ordinal: 21452
        void ownsClipboard(void) const;

    // RVA: 0x53CD | Ordinal: 21454
        void ownsFindBuffer(void) const;

    // RVA: 0x53CE | Ordinal: 21455
        void ownsMode(enum QClipboard::Mode) const;

    // RVA: 0x53D0 | Ordinal: 21457
        void ownsSelection(void) const;

    // RVA: 0x545B | Ordinal: 21596
        void pixmap(enum QClipboard::Mode) const;

    // RVA: 0x5578 | Ordinal: 21881
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55BC | Ordinal: 21949
        void qt_metacast(char const *);

    // RVA: 0x5612 | Ordinal: 22035
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x57F3 | Ordinal: 22516
        void selectionChanged(void);

    // RVA: 0x59FA | Ordinal: 23035
        void setImage(class QImage const &, enum QClipboard::Mode);

    // RVA: 0x5A69 | Ordinal: 23146
        void setMimeData(class QMimeData *, enum QClipboard::Mode);

    // RVA: 0x5AF9 | Ordinal: 23290
        void setPixmap(class QPixmap const &, enum QClipboard::Mode);

    // RVA: 0x5BEB | Ordinal: 23532
        void setText(class QString const &, enum QClipboard::Mode);

    // RVA: 0x5E63 | Ordinal: 24164
        void supportsFindBuffer(void) const;

    // RVA: 0x5E64 | Ordinal: 24165
        void supportsMode(enum QClipboard::Mode) const;

    // RVA: 0x5E6B | Ordinal: 24172
        void supportsSelection(void) const;

    // RVA: 0x5EEA | Ordinal: 24299
        void text(class QString &, enum QClipboard::Mode) const;

    // RVA: 0x5EEB | Ordinal: 24300
        void text(enum QClipboard::Mode) const;

    // RVA: 0x5F9D | Ordinal: 24478
        void tr(char const *, char const *, int);

    // RVA: 0x5FE4 | Ordinal: 24549
        void trUtf8(char const *, char const *, int);

    // RVA: 0x41B | Ordinal: 1052
        void _QClipboard(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QCLIPBOARD_HPP
