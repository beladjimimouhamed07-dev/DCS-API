#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wTransiver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTransiver
{
public:

    // RVA: 0x1BE | Ordinal: 447
        void addCallback(class wRadioDevice::Callback *);

    // RVA: 0x1E2 | Ordinal: 483
        void canReceiveFromByBandwidthAndSignal(class wRadioTransmitter *) const;

    // RVA: 0x219 | Ordinal: 538
        void finishTransmission(void);

    // RVA: 0x22F | Ordinal: 560
        void getBandWidth(void) const;

    // RVA: 0x23F | Ordinal: 576
        void getCurrTransmittedMessage(void) const;

    // RVA: 0x256 | Ordinal: 599
        void getFrequency(void) const;

    // RVA: 0x299 | Ordinal: 666
        void getModulation(void) const;

    // RVA: 0x2B6 | Ordinal: 695
        void getReceiver(void);

    // RVA: 0x2B7 | Ordinal: 696
        void getReceiver(void) const;

    // RVA: 0x2C0 | Ordinal: 705
        void getSNR(class wRadioTransmitter const *, bool) const;

    // RVA: 0x2C8 | Ordinal: 713
        void getSpectrumSelectivity(class wRadioTransmitter const *) const;

    // RVA: 0x2E4 | Ordinal: 741
        void getTransmitter(void);

    // RVA: 0x2E5 | Ordinal: 742
        void getTransmitter(void) const;

    // RVA: 0x33C | Ordinal: 829
        void isReceiverOn(void) const;

    // RVA: 0x342 | Ordinal: 835
        void isTransmitterOn(void) const;

    // RVA: 0x346 | Ordinal: 839
        void isTransmitting(void) const;

    // RVA: 0x3D4 | Ordinal: 981
        void removeCallback(class wRadioDevice::Callback *);

    // RVA: 0x3E1 | Ordinal: 994
        void select(bool);

    // RVA: 0x3FF | Ordinal: 1024
        void setAntenna(class wRadioAntenna const *);

    // RVA: 0x402 | Ordinal: 1027
        void setBandWidth(double);

    // RVA: 0x405 | Ordinal: 1030
        void setBody(class viObject *);

    // RVA: 0x40C | Ordinal: 1037
        void setCurrTransmittedMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x40F | Ordinal: 1040
        void setDevices(struct TransmitterDesc const &, struct ReceiverDesc const &);

    // RVA: 0x410 | Ordinal: 1041
        void setDevices(double, double);

    // RVA: 0x41A | Ordinal: 1051
        void setExactFrequency(double);

    // RVA: 0x41F | Ordinal: 1056
        void setFrequency(double);

    // RVA: 0x430 | Ordinal: 1073
        void setModulation(enum wModulation);

    // RVA: 0x433 | Ordinal: 1076
        void setName(char const *);

    // RVA: 0x440 | Ordinal: 1089
        void setPlace(class wRadioDevice::Place *);

    // RVA: 0x443 | Ordinal: 1092
        void setPosition(class wPosition3<float> const &);

    // RVA: 0x444 | Ordinal: 1093
        void setPosition(class viObject *);

    // RVA: 0x449 | Ordinal: 1098
        void setReceiverOnOff(bool);

    // RVA: 0x454 | Ordinal: 1109
        void setTransmitterOnOff(bool);

    // RVA: 0x456 | Ordinal: 1111
        void setUseFrequencySelectivity(bool, bool);

    // RVA: 0x466 | Ordinal: 1127
        void startTransmission(void);

    // RVA: 0x47A | Ordinal: 1147
        void transmit(class wRadioDevice::Action *);

    // RVA: 0x4AC | Ordinal: 1197
        void unselect(void);

    // RVA: 0x4B6 | Ordinal: 1207
        void update(void);

    // RVA: 0x89 | Ordinal: 138
        void wTransiver(class wTransiver &&);

    // RVA: 0x8A | Ordinal: 139
        void wTransiver(class wRadioTransmitter &, class wRadioReceiver &, bool);

    // RVA: 0x8B | Ordinal: 140
        void wTransiver(class wTransiver const &);

    // RVA: 0xB8 | Ordinal: 185
        void _wTransiver(void);
};

// DCS_OPS_RE_WRADIO.DLL_WTRANSIVER_HPP
