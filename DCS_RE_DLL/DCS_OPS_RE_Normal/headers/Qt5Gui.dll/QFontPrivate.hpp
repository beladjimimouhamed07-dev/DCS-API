#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontPrivate
{
public:

    // RVA: 0x111 | Ordinal: 274
        void QFontPrivate(class QFontPrivate const &);

    // RVA: 0x112 | Ordinal: 275
        void QFontPrivate(void);

    // RVA: 0x9E3 | Ordinal: 2532
        void alterCharForCapitalization(class QChar &) const;

    // RVA: 0xE2D | Ordinal: 3630
        void detachButKeepEngineData(class QFont *);

    // RVA: 0xFC6 | Ordinal: 4039
        void engineForScript(int) const;

    // RVA: 0x1188 | Ordinal: 4489
        void get(class QFont const &);

    // RVA: 0x5734 | Ordinal: 22325
        void resolve(unsigned int, class QFontPrivate const *);

    // RVA: 0x5D56 | Ordinal: 23895
        void smallCapsFont(void) const;

    // RVA: 0x5D57 | Ordinal: 23896
        void smallCapsFontPrivate(void) const;

    // RVA: 0x440 | Ordinal: 1089
        void _QFontPrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTPRIVATE_HPP
