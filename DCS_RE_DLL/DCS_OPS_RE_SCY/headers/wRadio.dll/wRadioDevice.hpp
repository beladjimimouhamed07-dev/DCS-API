#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wRadioDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioDevice
{
public:

    // RVA: 0x1B3 | Ordinal: 436
        void Position(void) const;

    // RVA: 0x1BD | Ordinal: 446
        void addCallback(class wRadioDevice::Callback *);

    // RVA: 0x226 | Ordinal: 551
        void generateEvent(enum wRadioDevice::Event);

    // RVA: 0x22C | Ordinal: 557
        void getAntenna(void) const;

    // RVA: 0x22E | Ordinal: 559
        void getBandWidth(void) const;

    // RVA: 0x231 | Ordinal: 562
        void getBody(void) const;

    // RVA: 0x255 | Ordinal: 598
        void getFrequency(void) const;

    // RVA: 0x257 | Ordinal: 600
        void getFrequencyAccuracy(void) const;

    // RVA: 0x258 | Ordinal: 601
        void getFrequencySelectivityQuality(void) const;

    // RVA: 0x27B | Ordinal: 636
        void getIsSimpleFrequencySelectivity(void) const;

    // RVA: 0x290 | Ordinal: 657
        void getMaxDistance(float &) const;

    // RVA: 0x291 | Ordinal: 658
        void getMaxFrequencyOfFullBandwidth(void) const;

    // RVA: 0x292 | Ordinal: 659
        void getMaxFrequencyOfNominalBandwidth(void) const;

    // RVA: 0x295 | Ordinal: 662
        void getMinFrequencyOfFullBandwidth(void) const;

    // RVA: 0x296 | Ordinal: 663
        void getMinFrequencyOfNominalBandwidth(void) const;

    // RVA: 0x298 | Ordinal: 665
        void getModulation(void) const;

    // RVA: 0x29F | Ordinal: 672
        void getName(void) const;

    // RVA: 0x2AB | Ordinal: 684
        void getPlace(void) const;

    // RVA: 0x2AF | Ordinal: 688
        void getPosition(void) const;

    // RVA: 0x2E7 | Ordinal: 744
        void getType(void) const;

    // RVA: 0x2ED | Ordinal: 750
        void getUseFrequencySelectivity(void) const;

    // RVA: 0x32D | Ordinal: 814
        void isActive(void) const;

    // RVA: 0x332 | Ordinal: 819
        void isFrequencyInFullBandwidth(float) const;

    // RVA: 0x333 | Ordinal: 820
        void isFrequencyInNominalBandwidth(float) const;

    // RVA: 0x33A | Ordinal: 827
        void isOn(void) const;

    // RVA: 0x353 | Ordinal: 852
        void onEvent(class wRadioDevice *, enum wRadioDevice::Event);

    // RVA: 0x3D3 | Ordinal: 980
        void removeCallback(class wRadioDevice::Callback *);

    // RVA: 0x3DF | Ordinal: 992
        void resetMaxDistance(void);

    // RVA: 0x3FE | Ordinal: 1023
        void setAntenna(class wRadioAntenna const *);

    // RVA: 0x400 | Ordinal: 1025
        void setBandWidth(double);

    // RVA: 0x404 | Ordinal: 1029
        void setBody(class viObject *);

    // RVA: 0x418 | Ordinal: 1049
        void setExactFrequency(double);

    // RVA: 0x41D | Ordinal: 1054
        void setFrequency(double);

    // RVA: 0x420 | Ordinal: 1057
        void setFrequencyAccuracy(double);

    // RVA: 0x421 | Ordinal: 1058
        void setFrequencySelectivityQuality(double);

    // RVA: 0x42C | Ordinal: 1069
        void setMaxDistance(float);

    // RVA: 0x42E | Ordinal: 1071
        void setModulation(enum wModulation);

    // RVA: 0x432 | Ordinal: 1075
        void setName(class ed::basic_string<char> const &);

    // RVA: 0x43C | Ordinal: 1085
        void setOnOff(bool);

    // RVA: 0x43F | Ordinal: 1088
        void setPlace(class wRadioDevice::Place *);

    // RVA: 0x441 | Ordinal: 1090
        void setPosition(class wPosition3<float> const &);

    // RVA: 0x442 | Ordinal: 1091
        void setPosition(class viObject *);

    // RVA: 0x455 | Ordinal: 1110
        void setUseFrequencySelectivity(bool, bool);

    // RVA: 0x4B4 | Ordinal: 1205
        void update(void);

    // RVA: 0x7C | Ordinal: 125
        void wRadioDevice(class wRadioDevice const &);

    // RVA: 0x7D | Ordinal: 126
        void wRadioDevice(void);

    // RVA: 0xB2 | Ordinal: 179
        void _wRadioDevice(void);
};

// DCS_OPS_RE_WRADIO.DLL_WRADIODEVICE_HPP
