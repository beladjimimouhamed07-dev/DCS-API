#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiShaderResourceBindings
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiShaderResourceBindings
{
public:

    // RVA: 0x2B8 | Ordinal: 697
        void QRhiShaderResourceBindings(class QRhiImplementation *);

    // RVA: 0xB5F | Ordinal: 2912
        void cbeginBindings(void) const;

    // RVA: 0xB6D | Ordinal: 2926
        void cendBindings(void) const;

    // RVA: 0x503D | Ordinal: 20542
        void isLayoutCompatible(class QRhiShaderResourceBindings const *) const;

    // RVA: 0x5748 | Ordinal: 22345
        void resourceType(void) const;

    // RVA: 0x5862 | Ordinal: 22627
        void setBindings(class std::initializer_list<class QRhiShaderResourceBinding>);

    // RVA: 0x503 | Ordinal: 1284
        void _QRhiShaderResourceBindings(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHISHADERRESOURCEBINDINGS_HPP
