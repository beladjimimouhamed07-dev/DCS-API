#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiVertexInputBinding
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiVertexInputBinding
{
public:

    // RVA: 0x2D7 | Ordinal: 728
        void QRhiVertexInputBinding(unsigned int, enum QRhiVertexInputBinding::Classification, int);

    // RVA: 0x2D8 | Ordinal: 729
        void QRhiVertexInputBinding(void);

    // RVA: 0xB92 | Ordinal: 2963
        void classification(void) const;

    // RVA: 0x4F8A | Ordinal: 20363
        void instanceStepRate(void) const;

    // RVA: 0x58A9 | Ordinal: 22698
        void setClassification(enum QRhiVertexInputBinding::Classification);

    // RVA: 0x5A08 | Ordinal: 23049
        void setInstanceStepRate(int);

    // RVA: 0x5BC3 | Ordinal: 23492
        void setStride(unsigned int);

    // RVA: 0x5E17 | Ordinal: 24088
        void stride(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIVERTEXINPUTBINDING_HPP
