#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wRadioManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioManager
{
public:

    // RVA: 0x1B7 | Ordinal: 440
        void activateBeacons(void);

    // RVA: 0x1FF | Ordinal: 512
        void createBeacon(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, enum BeaconType, struct ed::array<double, 3> const &, class wPosition3<float> const &, enum wBeaconStatus, class ed::list<unsigned int, class ed::allocator<unsigned int>> const &, int, double);

    // RVA: 0x200 | Ordinal: 513
        void createChildBeacon(class ed::basic_string<char> const &, class ed::basic_string<char> const &, enum BeaconType, double, class MovingObject *, int, int, double);

    // RVA: 0x230 | Ordinal: 561
        void getBeacons(void);

    // RVA: 0x2B2 | Ordinal: 691
        void getPropagationInterface(void);

    // RVA: 0x34C | Ordinal: 845
        void loadBeacons(void);

    // RVA: 0x3C2 | Ordinal: 963
        void pushDbgParamToPropagationInterface(bool *);

    // RVA: 0x3CE | Ordinal: 975
        void release(void);

    // RVA: 0x3CF | Ordinal: 976
        void reloadBeacons(void);

    // RVA: 0x7E | Ordinal: 127
        void wRadioManager(void);

    // RVA: 0xB3 | Ordinal: 180
        void _wRadioManager(void);
};

// DCS_OPS_RE_WRADIO.DLL_WRADIOMANAGER_HPP
