#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiReadbackDescription
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiReadbackDescription
{
public:

    // RVA: 0x2AA | Ordinal: 683
        void QRhiReadbackDescription(class QRhiTexture *);

    // RVA: 0x2AB | Ordinal: 684
        void QRhiReadbackDescription(void);

    // RVA: 0x511C | Ordinal: 20765
        void layer(void) const;

    // RVA: 0x5155 | Ordinal: 20822
        void level(void) const;

    // RVA: 0x5A27 | Ordinal: 23080
        void setLayer(int);

    // RVA: 0x5A3B | Ordinal: 23100
        void setLevel(int);

    // RVA: 0x5BFE | Ordinal: 23551
        void setTexture(class QRhiTexture *);

    // RVA: 0x5F19 | Ordinal: 24346
        void texture(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIREADBACKDESCRIPTION_HPP
