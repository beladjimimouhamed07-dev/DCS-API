#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPictureIO
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPictureIO
{
public:

    // RVA: 0x223 | Ordinal: 548
        void QPictureIO(class QString const &, char const *);

    // RVA: 0x224 | Ordinal: 549
        void QPictureIO(class QIODevice *, char const *);

    // RVA: 0x225 | Ordinal: 550
        void QPictureIO(void);

    // RVA: 0xDDB | Ordinal: 3548
        void defineIOHandler(char const *, char const *, char const *, void (__cdecl *)(class QPictureIO *), void (__cdecl *)(class QPictureIO *));

    // RVA: 0xE03 | Ordinal: 3588
        void description(void) const;

    // RVA: 0x102E | Ordinal: 4143
        void fileName(void) const;

    // RVA: 0x10F2 | Ordinal: 4339
        void format(void) const;

    // RVA: 0x1178 | Ordinal: 4473
        void gamma(void) const;

    // RVA: 0x4F05 | Ordinal: 20230
        void init(void);

    // RVA: 0x4F40 | Ordinal: 20289
        void inputFormats(void);

    // RVA: 0x4FB8 | Ordinal: 20409
        void ioDevice(void) const;

    // RVA: 0x53C0 | Ordinal: 21441
        void outputFormats(void);

    // RVA: 0x5403 | Ordinal: 21508
        void parameters(void) const;

    // RVA: 0x5447 | Ordinal: 21576
        void picture(void) const;

    // RVA: 0x5449 | Ordinal: 21578
        void pictureFormat(class QString const &);

    // RVA: 0x544A | Ordinal: 21579
        void pictureFormat(class QIODevice *);

    // RVA: 0x565B | Ordinal: 22108
        void quality(void) const;

    // RVA: 0x5673 | Ordinal: 22132
        void read(void);

    // RVA: 0x592D | Ordinal: 22830
        void setDescription(class QString const &);

    // RVA: 0x596F | Ordinal: 22896
        void setFileName(class QString const &);

    // RVA: 0x59B8 | Ordinal: 22969
        void setFormat(char const *);

    // RVA: 0x59D0 | Ordinal: 22993
        void setGamma(float);

    // RVA: 0x59F5 | Ordinal: 23030
        void setIODevice(class QIODevice *);

    // RVA: 0x5AE3 | Ordinal: 23268
        void setParameters(char const *);

    // RVA: 0x5AEF | Ordinal: 23280
        void setPicture(class QPicture const &);

    // RVA: 0x5B20 | Ordinal: 23329
        void setQuality(int);

    // RVA: 0x5BB5 | Ordinal: 23478
        void setStatus(int);

    // RVA: 0x5E01 | Ordinal: 24066
        void status(void) const;

    // RVA: 0x619A | Ordinal: 24987
        void write(void);

    // RVA: 0x4C0 | Ordinal: 1217
        void _QPictureIO(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPICTUREIO_HPP
