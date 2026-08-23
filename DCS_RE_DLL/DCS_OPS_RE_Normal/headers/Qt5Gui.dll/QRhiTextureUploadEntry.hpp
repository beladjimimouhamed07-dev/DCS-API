#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiTextureUploadEntry
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiTextureUploadEntry
{
public:

    // RVA: 0x2D1 | Ordinal: 722
        void QRhiTextureUploadEntry(class QRhiTextureUploadEntry &&);

    // RVA: 0x2D2 | Ordinal: 723
        void QRhiTextureUploadEntry(class QRhiTextureUploadEntry const &);

    // RVA: 0x2D3 | Ordinal: 724
        void QRhiTextureUploadEntry(int, int, class QRhiTextureSubresourceUploadDescription const &);

    // RVA: 0x2D4 | Ordinal: 725
        void QRhiTextureUploadEntry(void);

    // RVA: 0xE05 | Ordinal: 3590
        void description(void) const;

    // RVA: 0x511D | Ordinal: 20766
        void layer(void) const;

    // RVA: 0x5156 | Ordinal: 20823
        void level(void) const;

    // RVA: 0x592F | Ordinal: 22832
        void setDescription(class QRhiTextureSubresourceUploadDescription const &);

    // RVA: 0x5A28 | Ordinal: 23081
        void setLayer(int);

    // RVA: 0x5A3C | Ordinal: 23101
        void setLevel(int);

    // RVA: 0x50B | Ordinal: 1292
        void _QRhiTextureUploadEntry(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHITEXTUREUPLOADENTRY_HPP
