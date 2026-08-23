#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTouchDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTouchDevice
{
public:

    // RVA: 0x396 | Ordinal: 919
        void QTouchDevice(void);

    // RVA: 0xB54 | Ordinal: 2901
        void capabilities(void) const;

    // RVA: 0xE5B | Ordinal: 3676
        void devices(void);

    // RVA: 0x524B | Ordinal: 21068
        void maximumTouchPoints(void) const;

    // RVA: 0x5318 | Ordinal: 21273
        void name(void) const;

    // RVA: 0x5897 | Ordinal: 22680
        void setCapabilities(class QFlags<enum QTouchDevice::CapabilityFlag>);

    // RVA: 0x5A65 | Ordinal: 23142
        void setMaximumTouchPoints(int);

    // RVA: 0x5A93 | Ordinal: 23188
        void setName(class QString const &);

    // RVA: 0x5C24 | Ordinal: 23589
        void setType(enum QTouchDevice::DeviceType);

    // RVA: 0x6073 | Ordinal: 24692
        void type(void) const;

    // RVA: 0x54D | Ordinal: 1358
        void _QTouchDevice(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTOUCHDEVICE_HPP
