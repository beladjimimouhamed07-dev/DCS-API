#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wSensorCarrier
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSensorCarrier
{
public:

    // RVA: 0x7A7 | Ordinal: 1960
        void findLaserRanger_(void) const;

    // RVA: 0x7A8 | Ordinal: 1961
        void findRWRLockOnDetector_(void) const;

    // RVA: 0x9DC | Ordinal: 2525
        void is_sensor_type_present(enum wSensorInfo::wSensorType) const;

    // RVA: 0xA56 | Ordinal: 2647
        void load_from_state(class Lua::Config &);

    // RVA: 0x204 | Ordinal: 517
        void wSensorCarrier(struct wSensorCarrier &&);

    // RVA: 0x205 | Ordinal: 518
        void wSensorCarrier(struct wSensorCarrier const &);

    // RVA: 0x206 | Ordinal: 519
        void wSensorCarrier(void);

    // RVA: 0x2DD | Ordinal: 734
        void _wSensorCarrier(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WSENSORCARRIER_HPP
