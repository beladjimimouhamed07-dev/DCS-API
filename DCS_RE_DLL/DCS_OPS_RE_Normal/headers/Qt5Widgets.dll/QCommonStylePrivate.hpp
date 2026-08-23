#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QCommonStylePrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCommonStylePrivate
{
public:

    // RVA: 0x2C | Ordinal: 45
        void QCommonStylePrivate(void);

    // RVA: 0x4C2 | Ordinal: 1219
        void _q_removeAnimation(void);

    // RVA: 0x5DC | Ordinal: 1501
        void animation(class QObject const *) const;

    // RVA: 0x5DE | Ordinal: 1503
        void animationTargets(void) const;

    // RVA: 0x67B | Ordinal: 1660
        void calculateElidedText(class QString const &, class QTextOption const &, class QFont const &, class QRect const &, class QFlags<enum Qt::AlignmentFlag>, enum Qt::TextElideMode, int, bool, class QPointF *) const;

    // RVA: 0xF69 | Ordinal: 3946
        void isViewItemCached(class QStyleOptionViewItem const &) const;

    // RVA: 0x1405 | Ordinal: 5126
        void q_func(void);

    // RVA: 0x1406 | Ordinal: 5127
        void q_func(void) const;

    // RVA: 0x1E7C | Ordinal: 7805
        void startAnimation(class QStyleAnimation *) const;

    // RVA: 0x1F34 | Ordinal: 7989
        void stopAnimation(class QObject const *) const;

    // RVA: 0x1F8F | Ordinal: 8080
        void tabLayout(class QStyleOptionTab const *, class QWidget const *, class QRect *, class QRect *) const;

    // RVA: 0x2050 | Ordinal: 8273
        void toolButtonElideText(class QStyleOptionToolButton const *, class QRect const &, int) const;

    // RVA: 0x2298 | Ordinal: 8857
        void viewItemDrawText(class QPainter *, class QStyleOptionViewItem const *, class QRect const &) const;

    // RVA: 0x2299 | Ordinal: 8858
        void viewItemLayout(class QStyleOptionViewItem const *, class QRect *, class QRect *, class QRect *, bool) const;

    // RVA: 0x229A | Ordinal: 8859
        void viewItemSize(class QStyleOptionViewItem const *, int) const;

    // RVA: 0x1CA | Ordinal: 459
        void _QCommonStylePrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCOMMONSTYLEPRIVATE_HPP
