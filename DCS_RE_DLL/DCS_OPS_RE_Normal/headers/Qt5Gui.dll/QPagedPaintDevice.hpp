#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPagedPaintDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPagedPaintDevice
{
public:

    // RVA: 0x1EF | Ordinal: 496
        void QPagedPaintDevice(class QPagedPaintDevicePrivate *);

    // RVA: 0x1F0 | Ordinal: 497
        void QPagedPaintDevice(void);

    // RVA: 0xDB6 | Ordinal: 3511
        void dd(void);

    // RVA: 0xE4A | Ordinal: 3659
        void devicePageLayout(void);

    // RVA: 0xE4B | Ordinal: 3660
        void devicePageLayout(void) const;

    // RVA: 0x5218 | Ordinal: 21017
        void margins(void) const;

    // RVA: 0x53D7 | Ordinal: 21464
        void pageLayout(void) const;

    // RVA: 0x53DB | Ordinal: 21468
        void pageSize(void) const;

    // RVA: 0x53DD | Ordinal: 21470
        void pageSizeMM(void) const;

    // RVA: 0x5A51 | Ordinal: 23122
        void setMargins(struct QPagedPaintDevice::Margins const &);

    // RVA: 0x5ACD | Ordinal: 23246
        void setPageLayout(class QPageLayout const &);

    // RVA: 0x5ACF | Ordinal: 23248
        void setPageMargins(class QMarginsF const &);

    // RVA: 0x5AD0 | Ordinal: 23249
        void setPageMargins(class QMarginsF const &, enum QPageLayout::Unit);

    // RVA: 0x5AD2 | Ordinal: 23251
        void setPageOrientation(enum QPageLayout::Orientation);

    // RVA: 0x5AD5 | Ordinal: 23254
        void setPageSize(class QPageSize const &);

    // RVA: 0x5AD6 | Ordinal: 23255
        void setPageSize(enum QPagedPaintDevice::PageSize);

    // RVA: 0x5ADA | Ordinal: 23259
        void setPageSizeMM(class QSizeF const &);

    // RVA: 0x4AA | Ordinal: 1195
        void _QPagedPaintDevice(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAGEDPAINTDEVICE_HPP
