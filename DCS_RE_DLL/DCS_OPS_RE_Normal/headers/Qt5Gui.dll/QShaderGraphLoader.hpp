#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShaderGraphLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShaderGraphLoader
{
public:

    // RVA: 0x2F3 | Ordinal: 756
        void QShaderGraphLoader(void);

    // RVA: 0xE3E | Ordinal: 3647
        void device(void) const;

    // RVA: 0x4E10 | Ordinal: 19985
        void graph(void) const;

    // RVA: 0x5185 | Ordinal: 20870
        void load(void);

    // RVA: 0x54F7 | Ordinal: 21752
        void prototypes(void) const;

    // RVA: 0x593E | Ordinal: 22847
        void setDevice(class QIODevice *);

    // RVA: 0x5B1C | Ordinal: 23325
        void setPrototypes(class QHash<class QString, class QShaderNode> const &);

    // RVA: 0x5E02 | Ordinal: 24067
        void status(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADERGRAPHLOADER_HPP
