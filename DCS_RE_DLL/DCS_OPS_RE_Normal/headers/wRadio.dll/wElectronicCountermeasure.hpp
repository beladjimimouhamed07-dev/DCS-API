#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wElectronicCountermeasure
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wElectronicCountermeasure
{
public:

    // RVA: 0x1B2 | Ordinal: 435
        void Position(double);

    // RVA: 0x1B5 | Ordinal: 438
        void activate(enum SpoofingState, bool);

    // RVA: 0x1B6 | Ordinal: 439
        void activateAdaptiveJamming(bool);

    // RVA: 0x1B8 | Ordinal: 441
        void activateEcmForGLONASS(enum SpoofingState);

    // RVA: 0x1B9 | Ordinal: 442
        void activateEcmForGPS(enum SpoofingState);

    // RVA: 0x1BA | Ordinal: 443
        void activateSimpleJamming(bool);

    // RVA: 0x1C2 | Ordinal: 451
        void addDevice(unsigned int, unsigned __int64, int, class MovingObject *, char const *);

    // RVA: 0x2F3 | Ordinal: 756
        void get_frequency(unsigned __int64) const;

    // RVA: 0x2F6 | Ordinal: 759
        void get_name(void) const;

    // RVA: 0x2F8 | Ordinal: 761
        void get_type(void) const;

    // RVA: 0x2FF | Ordinal: 768
        void init(class ed::basic_string<char>, class MovingObject *);

    // RVA: 0x3CD | Ordinal: 974
        void release(void);

    // RVA: 0x3D5 | Ordinal: 982
        void removeDevice(unsigned int);

    // RVA: 0x457 | Ordinal: 1112
        void set_adaptive_jamming_freq_range(float, float);

    // RVA: 0x459 | Ordinal: 1114
        void set_ecm_type(enum ECMType);

    // RVA: 0x45A | Ordinal: 1115
        void set_frequency(double, unsigned __int64);

    // RVA: 0x45B | Ordinal: 1116
        void set_name(class ed::basic_string<char> const &);

    // RVA: 0x45C | Ordinal: 1117
        void set_owner(class MovingObject *);

    // RVA: 0x45D | Ordinal: 1118
        void set_position(class wPosition3<float> const &);

    // RVA: 0x45E | Ordinal: 1119
        void set_simple_jamming_freq_range(float, float);

    // RVA: 0x45F | Ordinal: 1120
        void set_spoofing_coordinates(float, float);

    // RVA: 0x460 | Ordinal: 1121
        void set_working_state(enum SpoofingState);

    // RVA: 0x4B2 | Ordinal: 1203
        void update(void);

    // RVA: 0x68 | Ordinal: 105
        void wElectronicCountermeasure(class wElectronicCountermeasure const &);

    // RVA: 0x69 | Ordinal: 106
        void wElectronicCountermeasure(void);

    // RVA: 0xA9 | Ordinal: 170
        void _wElectronicCountermeasure(void);
};

// DCS_OPS_RE_WRADIO.DLL_WELECTRONICCOUNTERMEASURE_HPP
