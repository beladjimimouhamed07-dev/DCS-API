#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: const_iterator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QAssociativeIterable {

class const_iterator
{
public:

    // RVA: 0x902 | Ordinal: 2307
        void begin(void);

    // RVA: 0x2C3 | Ordinal: 708
        void const_iterator(class QAssociativeIterable const &, class QAtomicInt *);

    // RVA: 0x2C4 | Ordinal: 709
        void const_iterator(class QtMetaTypePrivate::QAssociativeIterableImpl const &, class QAtomicInt *);

    // RVA: 0x2C5 | Ordinal: 710
        void const_iterator(struct QAssociativeIterable::const_iterator const &);

    // RVA: 0x2C6 | Ordinal: 711
        void const_iterator(class QSequentialIterable const &, class QAtomicInt *);

    // RVA: 0x2C7 | Ordinal: 712
        void const_iterator(class QtMetaTypePrivate::QSequentialIterableImpl const &, class QAtomicInt *);

    // RVA: 0x2C8 | Ordinal: 713
        void const_iterator(struct QSequentialIterable::const_iterator const &);

    // RVA: 0xD28 | Ordinal: 3369
        void end(void);

    // RVA: 0xE3C | Ordinal: 3645
        void find(class QVariant const &);

    // RVA: 0x1246 | Ordinal: 4679
        void key(void) const;

    // RVA: 0x1FC5 | Ordinal: 8134
        void value(void) const;

    // RVA: 0x391 | Ordinal: 914
        void _const_iterator(void);
};

} // namespace QAssociativeIterable

// DCS_OPS_RE_QT5CORE.DLL_CONST_ITERATOR_HPP
