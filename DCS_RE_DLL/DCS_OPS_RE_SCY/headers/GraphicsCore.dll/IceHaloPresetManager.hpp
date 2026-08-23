#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: IceHaloPresetManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class IceHaloPresetManager
{
public:

    // RVA: 0x22 | Ordinal: 35
        void IceHaloPresetManager(class enlight::IceHaloPresetManager &&);

    // RVA: 0x23 | Ordinal: 36
        void IceHaloPresetManager(class enlight::IceHaloPresetManager const &);

    // RVA: 0x24 | Ordinal: 37
        void IceHaloPresetManager(void);

    // RVA: 0x174 | Ordinal: 373
        void getCrystalsPresetParams(char const *) const;

    // RVA: 0x177 | Ordinal: 376
        void getCurrentCrystalsPresetParams(void) const;

    // RVA: 0x178 | Ordinal: 377
        void getCurrentPresetParams(void) const;

    // RVA: 0x179 | Ordinal: 378
        void getCurrentSimulationParams(void) const;

    // RVA: 0x19B | Ordinal: 412
        void getPresetParams(char const *) const;

    // RVA: 0x1F8 | Ordinal: 505
        void isOverrideSettings(void) const;

    // RVA: 0x209 | Ordinal: 522
        void loadPresets(char const *);

    // RVA: 0x237 | Ordinal: 568
        void registerJConfControls(void);

    // RVA: 0x273 | Ordinal: 628
        void savePresets(void);

    // RVA: 0x281 | Ordinal: 642
        void setCurrentCrystalsPreset(char const *);

    // RVA: 0x282 | Ordinal: 643
        void setCurrentPreset(char const *);

    // RVA: 0x2A9 | Ordinal: 682
        void sortPresets(void);

    // RVA: 0x2BC | Ordinal: 701
        void updateCurrentCrystalsPreset(void);

    // RVA: 0x2BD | Ordinal: 702
        void updateCurrentPreset(void);

    // RVA: 0x6D | Ordinal: 110
        void _IceHaloPresetManager(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_ICEHALOPRESETMANAGER_HPP
