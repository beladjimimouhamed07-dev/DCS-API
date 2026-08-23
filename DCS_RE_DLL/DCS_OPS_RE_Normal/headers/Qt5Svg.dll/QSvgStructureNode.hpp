#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgStructureNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgStructureNode
{
public:

    // RVA: 0x5C | Ordinal: 93
        void QSvgStructureNode(class QSvgStructureNode const &);

    // RVA: 0x5D | Ordinal: 94
        void QSvgStructureNode(class QSvgNode *);

    // RVA: 0x10D | Ordinal: 270
        void addChild(class QSvgNode *, class QString const &);

    // RVA: 0x136 | Ordinal: 311
        void bounds(class QPainter *, struct QSvgExtraStates &) const;

    // RVA: 0x19D | Ordinal: 414
        void previousSiblingNode(class QSvgNode *) const;

    // RVA: 0x1B8 | Ordinal: 441
        void renderers(void) const;

    // RVA: 0x1D3 | Ordinal: 468
        void scopeNode(class QString const &) const;

    // RVA: 0x92 | Ordinal: 147
        void _QSvgStructureNode(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGSTRUCTURENODE_HPP
