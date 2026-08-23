#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wRadioReceiver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioReceiver
{
public:

    // RVA: 0x1E9 | Ordinal: 490
        void checkMessageFilter(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1F4 | Ordinal: 501
        void clearTransmitters_(void);

    // RVA: 0x1FA | Ordinal: 507
        void computeSelectivity(class wRadioTransmitter const *, bool) const;

    // RVA: 0x249 | Ordinal: 586
        void getE(class wRadioTransmitter const *) const;

    // RVA: 0x24C | Ordinal: 589
        void getE_(class wRadioTransmitter const *, bool);

    // RVA: 0x294 | Ordinal: 661
        void getMessageE2(class wRadioTransmitter const *) const;

    // RVA: 0x2A2 | Ordinal: 675
        void getNoiseLevel(void) const;

    // RVA: 0x2BF | Ordinal: 704
        void getSNR(class wRadioTransmitter const *, bool);

    // RVA: 0x2C1 | Ordinal: 706
        void getSignalCondition(class wRadioTransmitter const *) const;

    // RVA: 0x2C3 | Ordinal: 708
        void getSignalsOfInterest(void);

    // RVA: 0x2C7 | Ordinal: 712
        void getSpectrumSelectivity(class wRadioTransmitter const *, bool) const;

    // RVA: 0x2D3 | Ordinal: 724
        void getSumE2(void) const;

    // RVA: 0x2E6 | Ordinal: 743
        void getTransmitters(void) const;

    // RVA: 0x2E8 | Ordinal: 745
        void getType(void) const;

    // RVA: 0x300 | Ordinal: 769
        void init(struct ReceiverDesc const &);

    // RVA: 0x32E | Ordinal: 815
        void isActive(void) const;

    // RVA: 0x330 | Ordinal: 817
        void isBlanked(void) const;

    // RVA: 0x354 | Ordinal: 853
        void onEvent(class wRadioDevice *, enum wRadioDevice::Event);

    // RVA: 0x401 | Ordinal: 1026
        void setBandWidth(double);

    // RVA: 0x403 | Ordinal: 1028
        void setBlanked(bool);

    // RVA: 0x419 | Ordinal: 1050
        void setExactFrequency(double);

    // RVA: 0x41C | Ordinal: 1053
        void setFilter(class wRadioReceiver::SignalFilter const *);

    // RVA: 0x41E | Ordinal: 1055
        void setFrequency(double);

    // RVA: 0x438 | Ordinal: 1081
        void setNoiseLevel(double);

    // RVA: 0x43D | Ordinal: 1086
        void setOnOff(bool);

    // RVA: 0x44A | Ordinal: 1099
        void setSignalOfInterest(unsigned __int64);

    // RVA: 0x81 | Ordinal: 130
        void wRadioReceiver(class wRadioReceiver &&);

    // RVA: 0x82 | Ordinal: 131
        void wRadioReceiver(class wRadioReceiver const &);

    // RVA: 0x83 | Ordinal: 132
        void wRadioReceiver(void);

    // RVA: 0xB5 | Ordinal: 182
        void _wRadioReceiver(void);
};

// DCS_OPS_RE_WRADIO.DLL_WRADIORECEIVER_HPP
