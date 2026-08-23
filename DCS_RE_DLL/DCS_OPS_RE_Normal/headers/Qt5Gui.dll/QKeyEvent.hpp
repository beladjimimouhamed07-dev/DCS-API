#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QKeyEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QKeyEvent
{
public:

    // RVA: 0x15F | Ordinal: 352
        void QKeyEvent(class QKeyEvent const &);

    // RVA: 0x160 | Ordinal: 353
        void QKeyEvent(enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x161 | Ordinal: 354
        void QKeyEvent(enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, unsigned int, unsigned int, unsigned int, class QString const &, bool, unsigned short);

    // RVA: 0xC79 | Ordinal: 3194
        void count(void) const;

    // RVA: 0xCA3 | Ordinal: 3236
        void createExtendedKeyEvent(enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, unsigned int, unsigned int, unsigned int, class QString const &, bool, unsigned short);

    // RVA: 0x4E62 | Ordinal: 20067
        void hasExtendedInfo(void) const;

    // RVA: 0x4FCC | Ordinal: 20429
        void isAutoRepeat(void) const;

    // RVA: 0x50EC | Ordinal: 20717
        void key(void) const;

    // RVA: 0x522E | Ordinal: 21039
        void matches(enum QKeySequence::StandardKey) const;

    // RVA: 0x52ED | Ordinal: 21230
        void modifiers(void) const;

    // RVA: 0x5323 | Ordinal: 21284
        void nativeModifiers(void) const;

    // RVA: 0x5332 | Ordinal: 21299
        void nativeScanCode(void) const;

    // RVA: 0x5334 | Ordinal: 21301
        void nativeVirtualKey(void) const;

    // RVA: 0x5EF0 | Ordinal: 24305
        void text(void) const;

    // RVA: 0x461 | Ordinal: 1122
        void _QKeyEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QKEYEVENT_HPP
