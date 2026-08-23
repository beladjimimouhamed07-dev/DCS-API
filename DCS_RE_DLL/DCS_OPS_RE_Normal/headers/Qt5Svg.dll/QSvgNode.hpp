#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgNode
{
public:

    // RVA: 0x3C | Ordinal: 61
        void QSvgNode(class QSvgNode const &);

    // RVA: 0x3D | Ordinal: 62
        void QSvgNode(class QSvgNode *);

    // RVA: 0x11D | Ordinal: 286
        void appendStyleProperty(class QSvgStyleProperty *, class QString const &);

    // RVA: 0x12A | Ordinal: 299
        void applyStyle(class QPainter *, struct QSvgExtraStates &) const;

    // RVA: 0x131 | Ordinal: 306
        void bounds(class QPainter *, struct QSvgExtraStates &) const;

    // RVA: 0x150 | Ordinal: 337
        void displayMode(void) const;

    // RVA: 0x153 | Ordinal: 340
        void document(void) const;

    // RVA: 0x17A | Ordinal: 379
        void isDescendantOf(class QSvgNode const *) const;

    // RVA: 0x17F | Ordinal: 384
        void isVisible(void) const;

    // RVA: 0x192 | Ordinal: 403
        void nodeId(void) const;

    // RVA: 0x198 | Ordinal: 409
        void parent(void) const;

    // RVA: 0x1BA | Ordinal: 443
        void requiredExtensions(void) const;

    // RVA: 0x1BB | Ordinal: 444
        void requiredFeatures(void) const;

    // RVA: 0x1BC | Ordinal: 445
        void requiredFonts(void) const;

    // RVA: 0x1BD | Ordinal: 446
        void requiredFormats(void) const;

    // RVA: 0x1BE | Ordinal: 447
        void requiredLanguages(void) const;

    // RVA: 0x1D2 | Ordinal: 467
        void revertStyle(class QPainter *, struct QSvgExtraStates &) const;

    // RVA: 0x1E3 | Ordinal: 484
        void setDisplayMode(enum QSvgNode::DisplayMode);

    // RVA: 0x1FA | Ordinal: 507
        void setNodeId(class QString const &);

    // RVA: 0x200 | Ordinal: 513
        void setRequiredExtensions(class QStringList const &);

    // RVA: 0x201 | Ordinal: 514
        void setRequiredFeatures(class QStringList const &);

    // RVA: 0x202 | Ordinal: 515
        void setRequiredFonts(class QStringList const &);

    // RVA: 0x203 | Ordinal: 516
        void setRequiredFormats(class QStringList const &);

    // RVA: 0x204 | Ordinal: 517
        void setRequiredLanguages(class QStringList const &);

    // RVA: 0x219 | Ordinal: 538
        void setVisible(bool);

    // RVA: 0x21F | Ordinal: 544
        void setXmlClass(class QString const &);

    // RVA: 0x229 | Ordinal: 554
        void strokeWidth(class QPainter *);

    // RVA: 0x22C | Ordinal: 557
        void styleProperty(class QString const &) const;

    // RVA: 0x22D | Ordinal: 558
        void styleProperty(enum QSvgStyleProperty::Type) const;

    // RVA: 0x23B | Ordinal: 572
        void transformedBounds(void) const;

    // RVA: 0x23C | Ordinal: 573
        void transformedBounds(class QPainter *, struct QSvgExtraStates &) const;

    // RVA: 0x263 | Ordinal: 612
        void xmlClass(void) const;

    // RVA: 0x87 | Ordinal: 136
        void _QSvgNode(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGNODE_HPP
