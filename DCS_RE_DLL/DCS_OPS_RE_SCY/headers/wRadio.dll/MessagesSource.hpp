#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: MessagesSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class MessagesSource
{
public:

    // RVA: 0x33 | Ordinal: 52
        void MessagesSource(class Sounder::MessagesSource const &);

    // RVA: 0x34 | Ordinal: 53
        void MessagesSource(unsigned __int64);

    // RVA: 0x1FD | Ordinal: 510
        void create(class Sound::Host *);

    // RVA: 0x215 | Ordinal: 534
        void findOrTake_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x216 | Ordinal: 535
        void find_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x24D | Ordinal: 590
        void getElement(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x24E | Ordinal: 591
        void getElementBySenderID(unsigned int) const;

    // RVA: 0x24F | Ordinal: 592
        void getElementsBuffer(void) const;

    // RVA: 0x259 | Ordinal: 602
        void getGain(void) const;

    // RVA: 0x2A9 | Ordinal: 682
        void getOrCreateElement(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, float);

    // RVA: 0x46A | Ordinal: 1131
        void stop(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x4AD | Ordinal: 1198
        void update(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, float);

    // RVA: 0x97 | Ordinal: 152
        void _MessagesSource(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_MESSAGESSOURCE_HPP
