#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSatelliteSystemStatus
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSatelliteSystemStatus
{
public:

    // RVA: 0x1A0 | Ordinal: 417
        void avSatelliteSystemStatus(struct cockpit::avSatelliteSystemStatus &&);

    // RVA: 0x1A1 | Ordinal: 418
        void avSatelliteSystemStatus(struct cockpit::avSatelliteSystemStatus const &);

    // RVA: 0x1A2 | Ordinal: 419
        void avSatelliteSystemStatus(void);

    // RVA: 0xABE | Ordinal: 2751
        void clear(void);

    // RVA: 0xAC5 | Ordinal: 2758
        void clearDOPs(void);

    // RVA: 0xAD2 | Ordinal: 2771
        void clear_status(void);

    // RVA: 0xC56 | Ordinal: 3159
        void getCEP(void) const;

    // RVA: 0xE4E | Ordinal: 3663
        void getVerMediumAccuracy(void) const;

    // RVA: 0x349 | Ordinal: 842
        void _avSatelliteSystemStatus(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSATELLITESYSTEMSTATUS_HPP
