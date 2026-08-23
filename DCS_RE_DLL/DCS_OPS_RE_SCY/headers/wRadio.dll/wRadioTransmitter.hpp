#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wRadioTransmitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioTransmitter
{
public:

    // RVA: 0x1EB | Ordinal: 492
        void checkMessageSignal(unsigned __int64) const;

    // RVA: 0x218 | Ordinal: 537
        void finishTransmission(void);

    // RVA: 0x23E | Ordinal: 575
        void getCurrMessage(void) const;

    // RVA: 0x24A | Ordinal: 587
        void getE(class osg::Vec3f const &) const;

    // RVA: 0x24B | Ordinal: 588
        void getE(class wRadioReceiver const *) const;

    // RVA: 0x2B1 | Ordinal: 690
        void getPower(void) const;

    // RVA: 0x2C2 | Ordinal: 707
        void getSignals(void) const;

    // RVA: 0x2E9 | Ordinal: 746
        void getType(void) const;

    // RVA: 0x301 | Ordinal: 770
        void init(struct TransmitterDesc const &);

    // RVA: 0x33E | Ordinal: 831
        void isReceptedByBandwidthAndSignal(double, double, unsigned __int64) const;

    // RVA: 0x355 | Ordinal: 854
        void onEvent(class wRadioDevice *, enum wRadioDevice::Event);

    // RVA: 0x40B | Ordinal: 1036
        void setCurrMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x42F | Ordinal: 1072
        void setModulation(enum wModulation);

    // RVA: 0x445 | Ordinal: 1094
        void setPower(double);

    // RVA: 0x465 | Ordinal: 1126
        void startTransmission(unsigned __int64);

    // RVA: 0x479 | Ordinal: 1146
        void transmit(class wRadioDevice::Action *, unsigned __int64);

    // RVA: 0x84 | Ordinal: 133
        void wRadioTransmitter(class wRadioTransmitter const &);

    // RVA: 0x85 | Ordinal: 134
        void wRadioTransmitter(void);

    // RVA: 0xB6 | Ordinal: 183
        void _wRadioTransmitter(void);
};

// DCS_OPS_RE_WRADIO.DLL_WRADIOTRANSMITTER_HPP
