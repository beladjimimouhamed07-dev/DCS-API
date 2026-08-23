#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiProfiler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiProfiler
{
public:

    // RVA: 0x2A9 | Ordinal: 682
        void QRhiProfiler(void);

    // RVA: 0x9A8 | Ordinal: 2473
        void addVMemAllocatorStats(void);

    // RVA: 0x1117 | Ordinal: 4376
        void frameBuildTimes(class QRhiSwapChain *) const;

    // RVA: 0x1122 | Ordinal: 4387
        void frameTimingWriteInterval(void) const;

    // RVA: 0x1123 | Ordinal: 4388
        void frameToFrameTimes(class QRhiSwapChain *) const;

    // RVA: 0x4E07 | Ordinal: 19976
        void gpuFrameTimes(class QRhiSwapChain *) const;

    // RVA: 0x593D | Ordinal: 22846
        void setDevice(class QIODevice *);

    // RVA: 0x59C9 | Ordinal: 22986
        void setFrameTimingWriteInterval(int);

    // RVA: 0x4FB | Ordinal: 1276
        void _QRhiProfiler(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIPROFILER_HPP
