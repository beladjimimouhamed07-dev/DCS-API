#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CloudsPresetManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class CloudsPresetManager
{
public:

    // RVA: 0x11 | Ordinal: 18
        void CloudsPresetManager(class enlight::CloudsPresetManager const &);

    // RVA: 0x12 | Ordinal: 19
        void CloudsPresetManager(void);

    // RVA: 0x9F | Ordinal: 160
        void getCurrentDensityMapPreset(void) const;

    // RVA: 0xA0 | Ordinal: 161
        void getCurrentMapPreset(void) const;

    // RVA: 0xA2 | Ordinal: 163
        void getDetailsPreset(char const *) const;

    // RVA: 0xC4 | Ordinal: 197
        void loadPresets(char const *);

    // RVA: 0xD3 | Ordinal: 212
        void registerJConfEditor(void);

    // RVA: 0xEC | Ordinal: 237
        void setDensityMapPreset(struct enlight::CloudsDensityMapPreset const &);

    // RVA: 0xED | Ordinal: 238
        void setDensityMapPreset(char const *);

    // RVA: 0xEE | Ordinal: 239
        void setDensityMapPresetInternal(char const *);

    // RVA: 0xF6 | Ordinal: 247
        void setMapsPreset(int);

    // RVA: 0x106 | Ordinal: 263
        void updateCurrentPreset(void);

    // RVA: 0x107 | Ordinal: 264
        void updateFakeDensityMapParams(void);

    // RVA: 0x30 | Ordinal: 49
        void _CloudsPresetManager(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_CLOUDSPRESETMANAGER_HPP
