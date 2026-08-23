#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: EdgeSlotsDispatcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class EdgeSlotsDispatcher
{
public:

    // RVA: 0x42 | Ordinal: 67
        void getSharedParamsConstantBufferSlot(enum render::SharedConstancBufferHandle);

    // RVA: 0x44 | Ordinal: 69
        void getSharedStructuredBufferSlot(enum render::SharedStructuredBufferHandle);

    // RVA: 0x46 | Ordinal: 71
        void getSharedTextureSlot(enum render::SharedTextureHandle);

    // RVA: 0x4F | Ordinal: 80
        void getTerrainConstantBuffersSlotRange(void);

    // RVA: 0x51 | Ordinal: 82
        void getTerrainStructuredBuffersSlotRange(void);

    // RVA: 0x53 | Ordinal: 84
        void getTerrainTexturesSlotRange(void);

    // RVA: 0xA | Ordinal: 11
        void _EdgeSlotsDispatcher(void);
};

} // namespace render

// DCS_OPS_RE_INTER.DLL_EDGESLOTSDISPATCHER_HPP
