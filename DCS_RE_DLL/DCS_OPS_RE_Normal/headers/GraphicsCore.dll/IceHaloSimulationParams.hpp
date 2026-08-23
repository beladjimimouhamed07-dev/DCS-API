#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: IceHaloSimulationParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class IceHaloSimulationParams
{
public:

    // RVA: 0x25 | Ordinal: 38
        void IceHaloSimulationParams(void);

    // RVA: 0x22B | Ordinal: 556
        void printAsLua(void) const;

    // RVA: 0x235 | Ordinal: 566
        void readFromConfig(class Lua::Config &);

    // RVA: 0x292 | Ordinal: 659
        void setQuality(enum IceHaloSimulationParams::Quality);

    // RVA: 0x295 | Ordinal: 662
        void setSimulationPace(float);

    // RVA: 0x29B | Ordinal: 668
        void setUpdateThreshold(float);

    // RVA: 0x2C1 | Ordinal: 706
        void updateInternalParams(void);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_ICEHALOSIMULATIONPARAMS_HPP
