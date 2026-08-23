#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPaintDeviceWindowPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPaintDeviceWindowPrivate
{
public:

    // RVA: 0x1F5 | Ordinal: 502
        void QPaintDeviceWindowPrivate(void);

    // RVA: 0xA80 | Ordinal: 2689
        void beginPaint(class QRegion const &);

    // RVA: 0xE71 | Ordinal: 3698
        void doFlush(class QRegion const &);

    // RVA: 0xFC0 | Ordinal: 4033
        void endPaint(void);

    // RVA: 0x10A2 | Ordinal: 4259
        void flush(class QRegion const &);

    // RVA: 0x4E46 | Ordinal: 20039
        void handleUpdateEvent(void);

    // RVA: 0x5224 | Ordinal: 21029
        void markWindowAsDirty(void);

    // RVA: 0x53E0 | Ordinal: 21473
        void paint(class QRegion const &);

    // RVA: 0x5530 | Ordinal: 21809
        void q_func(void);

    // RVA: 0x5531 | Ordinal: 21810
        void q_func(void) const;

    // RVA: 0x4AE | Ordinal: 1199
        void _QPaintDeviceWindowPrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTDEVICEWINDOWPRIVATE_HPP
