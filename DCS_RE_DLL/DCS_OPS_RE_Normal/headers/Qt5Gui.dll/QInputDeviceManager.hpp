#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QInputDeviceManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInputDeviceManager
{
public:

    // RVA: 0x152 | Ordinal: 339
        void QInputDeviceManager(class QObject *);

    // RVA: 0xD00 | Ordinal: 3329
        void cursorPositionChangeRequested(class QPoint const &);

    // RVA: 0xD23 | Ordinal: 3364
        void d_func(void);

    // RVA: 0xD24 | Ordinal: 3365
        void d_func(void) const;

    // RVA: 0xE45 | Ordinal: 3654
        void deviceCount(enum QInputDeviceManager::DeviceType) const;

    // RVA: 0xE48 | Ordinal: 3657
        void deviceListChanged(enum QInputDeviceManager::DeviceType);

    // RVA: 0x50FC | Ordinal: 20733
        void keyboardModifiers(void) const;

    // RVA: 0x526A | Ordinal: 21099
        void metaObject(void) const;

    // RVA: 0x5581 | Ordinal: 21890
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55C5 | Ordinal: 21958
        void qt_metacast(char const *);

    // RVA: 0x561B | Ordinal: 22044
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x58EE | Ordinal: 22767
        void setCursorPos(class QPoint const &);

    // RVA: 0x5A1E | Ordinal: 23071
        void setKeyboardModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x5FA8 | Ordinal: 24489
        void tr(char const *, char const *, int);

    // RVA: 0x5FEF | Ordinal: 24560
        void trUtf8(char const *, char const *, int);

    // RVA: 0x459 | Ordinal: 1114
        void _QInputDeviceManager(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QINPUTDEVICEMANAGER_HPP
