#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CloudsDensityMapPreset
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class CloudsDensityMapPreset
{
public:

    // RVA: 0xD | Ordinal: 14
        void CloudsDensityMapPreset(struct enlight::CloudsDensityMapPreset &&);

    // RVA: 0xE | Ordinal: 15
        void CloudsDensityMapPreset(struct enlight::CloudsDensityMapPreset const &);

    // RVA: 0xF | Ordinal: 16
        void CloudsDensityMapPreset(void);

    // RVA: 0x69 | Ordinal: 106
        void asPresetInfo(void) const;

    // RVA: 0xB5 | Ordinal: 182
        void isDefaultPreset(void) const;

    // RVA: 0xBE | Ordinal: 191
        void isValidLayersOrder(void) const;

    // RVA: 0xD1 | Ordinal: 210
        void printAsLua(void) const;

    // RVA: 0xD2 | Ordinal: 211
        void readFromConfig(class Lua::Config &);

    // RVA: 0x2E | Ordinal: 47
        void _CloudsDensityMapPreset(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_CLOUDSDENSITYMAPPRESET_HPP
