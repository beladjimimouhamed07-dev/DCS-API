#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImageIOHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImageIOHandler
{
public:

    // RVA: 0x142 | Ordinal: 323
        void QImageIOHandler(class QImageIOHandlerPrivate &);

    // RVA: 0x143 | Ordinal: 324
        void QImageIOHandler(void);

    // RVA: 0xCEB | Ordinal: 3308
        void currentImageNumber(void) const;

    // RVA: 0xCED | Ordinal: 3310
        void currentImageRect(void) const;

    // RVA: 0xD21 | Ordinal: 3362
        void d_func(void);

    // RVA: 0xD22 | Ordinal: 3363
        void d_func(void) const;

    // RVA: 0xE38 | Ordinal: 3641
        void device(void) const;

    // RVA: 0x10EA | Ordinal: 4331
        void format(void) const;

    // RVA: 0x4EE1 | Ordinal: 20194
        void imageCount(void) const;

    // RVA: 0x50E2 | Ordinal: 20707
        void jumpToImage(int);

    // RVA: 0x50E5 | Ordinal: 20710
        void jumpToNextImage(void);

    // RVA: 0x51B9 | Ordinal: 20922
        void loopCount(void) const;

    // RVA: 0x5311 | Ordinal: 21266
        void name(void) const;

    // RVA: 0x534A | Ordinal: 21323
        void nextImageDelay(void) const;

    // RVA: 0x53A8 | Ordinal: 21417
        void option(enum QImageIOHandler::ImageOption) const;

    // RVA: 0x5939 | Ordinal: 22842
        void setDevice(class QIODevice *);

    // RVA: 0x59B0 | Ordinal: 22961
        void setFormat(class QByteArray const &);

    // RVA: 0x59B1 | Ordinal: 22962
        void setFormat(class QByteArray const &) const;

    // RVA: 0x5AB5 | Ordinal: 23222
        void setOption(enum QImageIOHandler::ImageOption, class QVariant const &);

    // RVA: 0x5E67 | Ordinal: 24168
        void supportsOption(enum QImageIOHandler::ImageOption) const;

    // RVA: 0x6196 | Ordinal: 24983
        void write(class QImage const &);

    // RVA: 0x452 | Ordinal: 1107
        void _QImageIOHandler(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGEIOHANDLER_HPP
