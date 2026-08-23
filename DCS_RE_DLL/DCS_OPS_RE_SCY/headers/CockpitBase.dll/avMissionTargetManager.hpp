#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMissionTargetManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMissionTargetManager
{
public:

    // RVA: 0x15C | Ordinal: 349
        void avMissionTargetManager(class cockpit::avMissionTargetManager const &);

    // RVA: 0x15D | Ordinal: 350
        void avMissionTargetManager(void);

    // RVA: 0xFE5 | Ordinal: 4070
        void get_objects(class ClipVolume *) const;

    // RVA: 0xFE6 | Ordinal: 4071
        void get_objects(void) const;

    // RVA: 0x11D5 | Ordinal: 4566
        void initialize(void);

    // RVA: 0x1AC2 | Ordinal: 6851
        void update(void);

    // RVA: 0x327 | Ordinal: 808
        void _avMissionTargetManager(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMISSIONTARGETMANAGER_HPP
