#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: DcsSlotsDispatcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class DcsSlotsDispatcher
{
public:

    // RVA: 0x41 | Ordinal: 66
        void getSharedParamsConstantBufferSlot(enum render::SharedConstancBufferHandle);

    // RVA: 0x43 | Ordinal: 68
        void getSharedStructuredBufferSlot(enum render::SharedStructuredBufferHandle);

    // RVA: 0x45 | Ordinal: 70
        void getSharedTextureSlot(enum render::SharedTextureHandle);

    // RVA: 0x4E | Ordinal: 79
        void getTerrainConstantBuffersSlotRange(void);

    // RVA: 0x50 | Ordinal: 81
        void getTerrainStructuredBuffersSlotRange(void);

    // RVA: 0x52 | Ordinal: 83
        void getTerrainTexturesSlotRange(void);

    // RVA: 0x9 | Ordinal: 10
        void _DcsSlotsDispatcher(void);
};

} // namespace render

// DCS_OPS_RE_INTER.DLL_DCSSLOTSDISPATCHER_HPP
