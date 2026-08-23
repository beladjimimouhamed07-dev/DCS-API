#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QResource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QResource
{
public:

    // RVA: 0x1D6 | Ordinal: 471
        void QResource(class QString const &, class QLocale const &);

    // RVA: 0x7BC | Ordinal: 1981
        void absoluteFilePath(void) const;

    // RVA: 0x810 | Ordinal: 2065
        void addSearchPath(class QString const &);

    // RVA: 0x9C6 | Ordinal: 2503
        void children(void) const;

    // RVA: 0xA67 | Ordinal: 2664
        void compressionAlgorithm(void) const;

    // RVA: 0xBC8 | Ordinal: 3017
        void d_func(void);

    // RVA: 0xBC9 | Ordinal: 3018
        void d_func(void) const;

    // RVA: 0xC05 | Ordinal: 3078
        void data(void) const;

    // RVA: 0xE05 | Ordinal: 3590
        void fileName(void) const;

    // RVA: 0x1095 | Ordinal: 4246
        void isCompressed(void) const;

    // RVA: 0x10BA | Ordinal: 4283
        void isDir(void) const;

    // RVA: 0x10ED | Ordinal: 4334
        void isFile(void) const;

    // RVA: 0x120D | Ordinal: 4622
        void isValid(void) const;

    // RVA: 0x1284 | Ordinal: 4741
        void lastModified(void) const;

    // RVA: 0x12BA | Ordinal: 4795
        void locale(void) const;

    // RVA: 0x1779 | Ordinal: 6010
        void registerResource(class QString const &, class QString const &);

    // RVA: 0x177A | Ordinal: 6011
        void registerResource(unsigned char const *, class QString const &);

    // RVA: 0x18E6 | Ordinal: 6375
        void searchPaths(void);

    // RVA: 0x19B7 | Ordinal: 6584
        void setFileName(class QString const &);

    // RVA: 0x1A02 | Ordinal: 6659
        void setLocale(class QLocale const &);

    // RVA: 0x1B40 | Ordinal: 6977
        void size(void) const;

    // RVA: 0x1F4D | Ordinal: 8014
        void uncompressedData(void) const;

    // RVA: 0x1F4E | Ordinal: 8015
        void uncompressedSize(void) const;

    // RVA: 0x1F74 | Ordinal: 8053
        void unregisterResource(class QString const &, class QString const &);

    // RVA: 0x1F75 | Ordinal: 8054
        void unregisterResource(unsigned char const *, class QString const &);

    // RVA: 0x351 | Ordinal: 850
        void _QResource(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QRESOURCE_HPP
