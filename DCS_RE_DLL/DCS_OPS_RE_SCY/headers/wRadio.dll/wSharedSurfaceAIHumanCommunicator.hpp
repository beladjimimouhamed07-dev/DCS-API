#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wSharedSurfaceAIHumanCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSharedSurfaceAIHumanCommunicator
{
public:

    // RVA: 0x338 | Ordinal: 825
        void isMessageLegible(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x451 | Ordinal: 1106
        void setTransiver(class IwTransiver *, int);

    // RVA: 0x87 | Ordinal: 136
        void wSharedSurfaceAIHumanCommunicator(int, class MovingObject *);

    // RVA: 0x88 | Ordinal: 137
        void wSharedSurfaceAIHumanCommunicator(void);

    // RVA: 0xB7 | Ordinal: 184
        void _wSharedSurfaceAIHumanCommunicator(void);
};

// DCS_OPS_RE_WRADIO.DLL_WSHAREDSURFACEAIHUMANCOMMUNICATOR_HPP
