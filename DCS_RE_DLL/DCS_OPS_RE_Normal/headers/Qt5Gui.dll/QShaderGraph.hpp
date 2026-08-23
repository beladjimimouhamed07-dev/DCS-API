#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShaderGraph
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShaderGraph
{
public:

    // RVA: 0x96F | Ordinal: 2416
        void addEdge(class QShaderGraph::Edge const &);

    // RVA: 0x981 | Ordinal: 2434
        void addNode(class QShaderNode const &);

    // RVA: 0xCC8 | Ordinal: 3273
        void createStatements(class QStringList const &) const;

    // RVA: 0xF6F | Ordinal: 3952
        void edges(void) const;

    // RVA: 0x5353 | Ordinal: 21332
        void nodes(void) const;

    // RVA: 0x56D4 | Ordinal: 22229
        void removeEdge(class QShaderGraph::Edge const &);

    // RVA: 0x56DE | Ordinal: 22239
        void removeNode(class QShaderNode const &);
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADERGRAPH_HPP
