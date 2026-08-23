#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wDetectionModelParamsLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDetectionModelParamsLoader
{
public:

    // RVA: 0x672 | Ordinal: 1651
        void clear(void);

    // RVA: 0x935 | Ordinal: 2358
        void get_flags(struct std::pair<class wSensorInfo *, class ed::vector<class ed::vector<class wSensorInfo *, class ed::allocator<class wSensorInfo *>>, class ed::allocator<class ed::vector<class wSensorInfo *, class ed::allocator<class wSensorInfo *>>>>> const &) const;

    // RVA: 0xA4B | Ordinal: 2636
        void load(class ed::basic_string<char> const &);

    // RVA: 0x1E8 | Ordinal: 489
        void wDetectionModelParamsLoader(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WDETECTIONMODELPARAMSLOADER_HPP
