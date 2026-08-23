#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLSharedResourceGuard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLSharedResourceGuard
{
public:

    // RVA: 0x1D5 | Ordinal: 470
        void QOpenGLSharedResourceGuard(class QOpenGLContext *, unsigned int, void (__cdecl *)(class QOpenGLFunctions *, unsigned int));

    // RVA: 0x1126 | Ordinal: 4391
        void freeResource(class QOpenGLContext *);

    // RVA: 0x4ED0 | Ordinal: 20177
        void id(void) const;

    // RVA: 0x4FAA | Ordinal: 20395
        void invalidateResource(void);

    // RVA: 0x49E | Ordinal: 1183
        void _QOpenGLSharedResourceGuard(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLSHAREDRESOURCEGUARD_HPP
