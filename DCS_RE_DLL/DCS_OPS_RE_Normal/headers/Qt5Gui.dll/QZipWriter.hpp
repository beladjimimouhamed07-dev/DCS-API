#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QZipWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QZipWriter
{
public:

    // RVA: 0x3D3 | Ordinal: 980
        void QZipWriter(class QString const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x3D4 | Ordinal: 981
        void QZipWriter(class QIODevice *);

    // RVA: 0x96E | Ordinal: 2415
        void addDirectory(class QString const &);

    // RVA: 0x977 | Ordinal: 2424
        void addFile(class QString const &, class QByteArray const &);

    // RVA: 0x978 | Ordinal: 2425
        void addFile(class QString const &, class QIODevice *);

    // RVA: 0x9A2 | Ordinal: 2467
        void addSymLink(class QString const &, class QString const &);

    // RVA: 0xBEB | Ordinal: 3052
        void close(void);

    // RVA: 0xC2E | Ordinal: 3119
        void compressionPolicy(void) const;

    // RVA: 0xCD1 | Ordinal: 3282
        void creationPermissions(void) const;

    // RVA: 0xE44 | Ordinal: 3653
        void device(void) const;

    // RVA: 0xFFF | Ordinal: 4096
        void exists(void) const;

    // RVA: 0x50BF | Ordinal: 20672
        void isWritable(void) const;

    // RVA: 0x58D9 | Ordinal: 22746
        void setCompressionPolicy(enum QZipWriter::CompressionPolicy);

    // RVA: 0x58E1 | Ordinal: 22754
        void setCreationPermissions(class QFlags<enum QFileDevice::Permission>);

    // RVA: 0x5E05 | Ordinal: 24070
        void status(void) const;

    // RVA: 0x559 | Ordinal: 1370
        void _QZipWriter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QZIPWRITER_HPP
