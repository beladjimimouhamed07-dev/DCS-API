#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wRadioPropagationInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioPropagationInterface
{
public:

    // RVA: 0x1D0 | Ordinal: 465
        void add_new_pair(struct RadioPair);

    // RVA: 0x202 | Ordinal: 515
        void delete_pair(int);

    // RVA: 0x2AA | Ordinal: 683
        void getPairToUpdateInMT(void);

    // RVA: 0x2EF | Ordinal: 752
        void get_E(int);

    // RVA: 0x2F0 | Ordinal: 753
        void get_E_for_pair(class wRadioTransmitter const *, class wRadioReceiver const *);

    // RVA: 0x2F7 | Ordinal: 760
        void get_pair_index(struct RadioPair);

    // RVA: 0x32A | Ordinal: 811
        void insert_Gain_And_Co_for_pair(int, double, enum Radio::SignalCondition);

    // RVA: 0x349 | Ordinal: 842
        void is_new_radio_enabled(void);

    // RVA: 0x34A | Ordinal: 843
        void iterateNextPairToUpdateInMT(void);

    // RVA: 0x35C | Ordinal: 861
        void on_device_delete(class wRadioDevice const *);

    // RVA: 0x458 | Ordinal: 1113
        void set_debug_checkbox_from_VC_debug(bool *);

    // RVA: 0x4B5 | Ordinal: 1206
        void update(void);

    // RVA: 0x4C4 | Ordinal: 1221
        void update_pair(int);

    // RVA: 0x7F | Ordinal: 128
        void wRadioPropagationInterface(class wRadioPropagationInterface const &);

    // RVA: 0x80 | Ordinal: 129
        void wRadioPropagationInterface(void);

    // RVA: 0xB4 | Ordinal: 181
        void _wRadioPropagationInterface(void);
};

// DCS_OPS_RE_WRADIO.DLL_WRADIOPROPAGATIONINTERFACE_HPP
