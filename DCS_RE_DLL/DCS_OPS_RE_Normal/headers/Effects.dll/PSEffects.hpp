#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects.dll
// Class: PSEffects
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class PSEffects
{
public:

    // RVA: 0x1C | Ordinal: 29
        void beginRenderPass(void);

    // RVA: 0x23 | Ordinal: 36
        void endRenderPass(void);

    // RVA: 0x24 | Ordinal: 37
        void getCurrentEffect(void);

    // RVA: 0x25 | Ordinal: 38
        void getCurrentOffset(void);

    // RVA: 0x2C | Ordinal: 45
        void preloadEffects(void);

    // RVA: 0x38 | Ordinal: 57
        void updateLodFOVcoef(float);
};

// DCS_OPS_RE_EFFECTS.DLL_PSEFFECTS_HPP
