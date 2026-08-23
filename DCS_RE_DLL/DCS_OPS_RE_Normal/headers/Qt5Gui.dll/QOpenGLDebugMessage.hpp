#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLDebugMessage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLDebugMessage
{
public:

    // RVA: 0x199 | Ordinal: 410
        void QOpenGLDebugMessage(class QOpenGLDebugMessage const &);

    // RVA: 0x19A | Ordinal: 411
        void QOpenGLDebugMessage(void);

    // RVA: 0xC9D | Ordinal: 3230
        void createApplicationMessage(class QString const &, unsigned int, enum QOpenGLDebugMessage::Severity, enum QOpenGLDebugMessage::Type);

    // RVA: 0xCCF | Ordinal: 3280
        void createThirdPartyMessage(class QString const &, unsigned int, enum QOpenGLDebugMessage::Severity, enum QOpenGLDebugMessage::Type);

    // RVA: 0x4ECF | Ordinal: 20176
        void id(void) const;

    // RVA: 0x5259 | Ordinal: 21082
        void message(void) const;

    // RVA: 0x5CE8 | Ordinal: 23785
        void severity(void) const;

    // RVA: 0x5D62 | Ordinal: 23907
        void source(void) const;

    // RVA: 0x5E85 | Ordinal: 24198
        void swap(class QOpenGLDebugMessage &);

    // RVA: 0x6069 | Ordinal: 24682
        void type(void) const;

    // RVA: 0x474 | Ordinal: 1141
        void _QOpenGLDebugMessage(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLDEBUGMESSAGE_HPP
