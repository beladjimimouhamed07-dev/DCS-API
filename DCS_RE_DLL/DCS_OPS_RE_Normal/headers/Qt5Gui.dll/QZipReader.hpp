#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QZipReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QZipReader
{
public:

    // RVA: 0x3D1 | Ordinal: 978
        void QZipReader(class QString const &, class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x3D2 | Ordinal: 979
        void QZipReader(class QIODevice *);

    // RVA: 0xBEA | Ordinal: 3051
        void close(void);

    // RVA: 0xC7D | Ordinal: 3198
        void count(void) const;

    // RVA: 0xE43 | Ordinal: 3652
        void device(void) const;

    // RVA: 0xFDC | Ordinal: 4061
        void entryInfoAt(int) const;

    // RVA: 0xFFE | Ordinal: 4095
        void exists(void) const;

    // RVA: 0x1009 | Ordinal: 4106
        void extractAll(class QString const &) const;

    // RVA: 0x1027 | Ordinal: 4136
        void fileData(class QString const &) const;

    // RVA: 0x1029 | Ordinal: 4138
        void fileInfoList(void) const;

    // RVA: 0x506A | Ordinal: 20587
        void isReadable(void) const;

    // RVA: 0x5E04 | Ordinal: 24069
        void status(void) const;

    // RVA: 0x558 | Ordinal: 1369
        void _QZipReader(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QZIPREADER_HPP
