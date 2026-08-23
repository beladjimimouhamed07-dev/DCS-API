#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QMovie
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMovie
{
public:

    // RVA: 0x186 | Ordinal: 391
        void QMovie(class QString const &, class QByteArray const &, class QObject *);

    // RVA: 0x187 | Ordinal: 392
        void QMovie(class QIODevice *, class QByteArray const &, class QObject *);

    // RVA: 0x188 | Ordinal: 393
        void QMovie(class QObject *);

    // RVA: 0xA59 | Ordinal: 2650
        void backgroundColor(void) const;

    // RVA: 0xB31 | Ordinal: 2866
        void cacheMode(void) const;

    // RVA: 0xCE8 | Ordinal: 3305
        void currentFrameNumber(void) const;

    // RVA: 0xCEA | Ordinal: 3307
        void currentImage(void) const;

    // RVA: 0xCF5 | Ordinal: 3318
        void currentPixmap(void) const;

    // RVA: 0xD29 | Ordinal: 3370
        void d_func(void);

    // RVA: 0xD2A | Ordinal: 3371
        void d_func(void) const;

    // RVA: 0xE3B | Ordinal: 3644
        void device(void) const;

    // RVA: 0xFE5 | Ordinal: 4070
        void error(enum QImageReader::ImageReaderError);

    // RVA: 0x102D | Ordinal: 4142
        void fileName(void) const;

    // RVA: 0x107F | Ordinal: 4224
        void finished(void);

    // RVA: 0x10ED | Ordinal: 4334
        void format(void) const;

    // RVA: 0x1118 | Ordinal: 4377
        void frameChanged(int);

    // RVA: 0x1119 | Ordinal: 4378
        void frameCount(void) const;

    // RVA: 0x111F | Ordinal: 4384
        void frameRect(void) const;

    // RVA: 0x5096 | Ordinal: 20631
        void isValid(void) const;

    // RVA: 0x50E1 | Ordinal: 20706
        void jumpToFrame(int);

    // RVA: 0x50E4 | Ordinal: 20709
        void jumpToNextFrame(void);

    // RVA: 0x510C | Ordinal: 20749
        void lastError(void) const;

    // RVA: 0x510D | Ordinal: 20750
        void lastErrorString(void) const;

    // RVA: 0x51BB | Ordinal: 20924
        void loopCount(void) const;

    // RVA: 0x526F | Ordinal: 21104
        void metaObject(void) const;

    // RVA: 0x5349 | Ordinal: 21322
        void nextFrameDelay(void) const;

    // RVA: 0x5586 | Ordinal: 21895
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55CA | Ordinal: 21963
        void qt_metacast(char const *);

    // RVA: 0x5620 | Ordinal: 22049
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x572E | Ordinal: 22319
        void resized(class QSize const &);

    // RVA: 0x57B9 | Ordinal: 22458
        void scaledSize(void);

    // RVA: 0x585C | Ordinal: 22621
        void setBackgroundColor(class QColor const &);

    // RVA: 0x5891 | Ordinal: 22674
        void setCacheMode(enum QMovie::CacheMode);

    // RVA: 0x593C | Ordinal: 22845
        void setDevice(class QIODevice *);

    // RVA: 0x596E | Ordinal: 22895
        void setFileName(class QString const &);

    // RVA: 0x59B4 | Ordinal: 22965
        void setFormat(class QByteArray const &);

    // RVA: 0x5AE7 | Ordinal: 23272
        void setPaused(bool);

    // RVA: 0x5B6B | Ordinal: 23404
        void setScaledSize(class QSize const &);

    // RVA: 0x5BA0 | Ordinal: 23457
        void setSpeed(int);

    // RVA: 0x5D72 | Ordinal: 23923
        void speed(void) const;

    // RVA: 0x5D83 | Ordinal: 23940
        void start(void);

    // RVA: 0x5D96 | Ordinal: 23959
        void started(void);

    // RVA: 0x5D98 | Ordinal: 23961
        void state(void) const;

    // RVA: 0x5DA2 | Ordinal: 23971
        void stateChanged(enum QMovie::MovieState);

    // RVA: 0x5E0E | Ordinal: 24079
        void stop(void);

    // RVA: 0x5E54 | Ordinal: 24149
        void supportedFormats(void);

    // RVA: 0x5FAD | Ordinal: 24494
        void tr(char const *, char const *, int);

    // RVA: 0x5FF4 | Ordinal: 24565
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60CE | Ordinal: 24783
        void updated(class QRect const &);

    // RVA: 0x468 | Ordinal: 1129
        void _QMovie(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QMOVIE_HPP
