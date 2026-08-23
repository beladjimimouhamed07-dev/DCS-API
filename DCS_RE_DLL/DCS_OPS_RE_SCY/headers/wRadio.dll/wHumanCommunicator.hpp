#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wHumanCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wHumanCommunicator
{
public:

    // RVA: 0x1BC | Ordinal: 445
        void addCallback(class wRadioDevice::Callback *);

    // RVA: 0x1C4 | Ordinal: 453
        void addIncomingMessagesHandler(class wHumanCommunicator::ReceivingMessageHandler *);

    // RVA: 0x1C6 | Ordinal: 455
        void addOutgoingMessagesHandler(class wHumanCommunicator::OutgoingMessageHandler *);

    // RVA: 0x1CA | Ordinal: 459
        void addReceiver(class wRadioReceiver *);

    // RVA: 0x1D1 | Ordinal: 466
        void adjustSelfSoundVolume(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, float);

    // RVA: 0x1DD | Ordinal: 478
        void canBreakReceive(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1E1 | Ordinal: 482
        void canReceiveFromByBandwidthAndSignal(class wRadioTransmitter *) const;

    // RVA: 0x1E5 | Ordinal: 486
        void cannotInterruptReceive(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1E6 | Ordinal: 487
        void checkLoopedSourcesActuality(void);

    // RVA: 0x1E8 | Ordinal: 489
        void checkMessageFilter(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x21D | Ordinal: 542
        void finishTransmissionByPtr(bool, class IwTransiver *);

    // RVA: 0x221 | Ordinal: 546
        void freeSource(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x2BE | Ordinal: 703
        void getSNR(class wRadioTransmitter const *, bool) const;

    // RVA: 0x2C6 | Ordinal: 711
        void getSpectrumSelectivity(class wRadioTransmitter const *) const;

    // RVA: 0x2FA | Ordinal: 763
        void handleIncomingMessageFinish_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x2FB | Ordinal: 764
        void handleIncomingMessageUpdate_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x2FC | Ordinal: 765
        void handleOutgoingMessageFinish_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x2FD | Ordinal: 766
        void handleOutgoingMessageStart_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x327 | Ordinal: 808
        void initVOIP(bool);

    // RVA: 0x337 | Ordinal: 824
        void isMessageLegible(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x359 | Ordinal: 858
        void onReceiving(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, enum RadioMessageEvent, bool, bool);

    // RVA: 0x35B | Ordinal: 860
        void onSending(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, enum RadioMessageEvent);

    // RVA: 0x3C1 | Ordinal: 962
        void processMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x3D2 | Ordinal: 979
        void removeCallback(class wRadioDevice::Callback *);

    // RVA: 0x3D6 | Ordinal: 983
        void removeIncomingMessagesHandler(class wHumanCommunicator::ReceivingMessageHandler *);

    // RVA: 0x3DA | Ordinal: 987
        void removeOutgoingMessagesHandler(class wHumanCommunicator::OutgoingMessageHandler *);

    // RVA: 0x3DD | Ordinal: 990
        void removeReceiver(class wRadioReceiver *);

    // RVA: 0x450 | Ordinal: 1105
        void setTransiver(class IwTransiver *, int);

    // RVA: 0x464 | Ordinal: 1125
        void startMessageTransmission(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> const &, bool);

    // RVA: 0x484 | Ordinal: 1157
        void tryTransmitEnqueuedMessage(void);

    // RVA: 0x6C | Ordinal: 109
        void wHumanCommunicator(int, class MovingObject *, char const *);

    // RVA: 0x6D | Ordinal: 110
        void wHumanCommunicator(void);

    // RVA: 0xAB | Ordinal: 172
        void _wHumanCommunicator(void);
};

// DCS_OPS_RE_WRADIO.DLL_WHUMANCOMMUNICATOR_HPP
