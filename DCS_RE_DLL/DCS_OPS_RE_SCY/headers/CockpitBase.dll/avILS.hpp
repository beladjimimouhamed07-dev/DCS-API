#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avILS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avILS
{
public:

    // RVA: 0x834 | Ordinal: 2101
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x122 | Ordinal: 291
        void avILS(void);

    // RVA: 0xAF5 | Ordinal: 2806
        void connectElecPower(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0xC9C | Ordinal: 3229
        void getElecPower(void) const;

    // RVA: 0xCC9 | Ordinal: 3274
        void getGlideslopeDeviation(void) const;

    // RVA: 0xCCA | Ordinal: 3275
        void getGlideslopeFrequency(double) const;

    // RVA: 0xD38 | Ordinal: 3385
        void getLocalizerDeviation(void) const;

    // RVA: 0xD39 | Ordinal: 3386
        void getLocalizerFrequency(void) const;

    // RVA: 0xD3A | Ordinal: 3387
        void getLocalizerSoundElement(void);

    // RVA: 0xD4C | Ordinal: 3405
        void getMarkerBeaconsSoundElement(void);

    // RVA: 0x117E | Ordinal: 4479
        void init_frequencies_map(void);

    // RVA: 0x11BD | Ordinal: 4542
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x125C | Ordinal: 4701
        void isGlideslopeValid(void) const;

    // RVA: 0x1264 | Ordinal: 4709
        void isInnerMarkerSignal(void) const;

    // RVA: 0x1267 | Ordinal: 4712
        void isLocalizerValid(void) const;

    // RVA: 0x1269 | Ordinal: 4714
        void isMarkerBeacon(void) const;

    // RVA: 0x126A | Ordinal: 4715
        void isMiddleMarkerSignal(void) const;

    // RVA: 0x1277 | Ordinal: 4728
        void isOuterMarkerSignal(void) const;

    // RVA: 0x1436 | Ordinal: 5175
        void onBeaconPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x1437 | Ordinal: 5176
        void onBeaconPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x1441 | Ordinal: 5186
        void onFrequencyChanged(void);

    // RVA: 0x1447 | Ordinal: 5192
        void onLOCPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x1448 | Ordinal: 5193
        void onLOCPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x14E5 | Ordinal: 5350
        void post_initialize(void);

    // RVA: 0x15B2 | Ordinal: 5555
        void release(void);

    // RVA: 0x15F6 | Ordinal: 5623
        void repair(void);

    // RVA: 0x16EE | Ordinal: 5871
        void setElecPower(bool);

    // RVA: 0x170E | Ordinal: 5903
        void setFrequencyKHz(int);

    // RVA: 0x170F | Ordinal: 5904
        void setFrequencyMHz(int);

    // RVA: 0x1859 | Ordinal: 6234
        void set_damage(unsigned int, bool);

    // RVA: 0x18CB | Ordinal: 6348
        void set_localizer_on_off(bool);

    // RVA: 0x18CE | Ordinal: 6351
        void set_marker_beacon_on_off(bool);

    // RVA: 0x1AB2 | Ordinal: 6835
        void update(void);

    // RVA: 0x1B3B | Ordinal: 6972
        void update_LOC(void);

    // RVA: 0x1B3C | Ordinal: 6973
        void update_Marker(void);

    // RVA: 0x30C | Ordinal: 781
        void _avILS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVILS_HPP
