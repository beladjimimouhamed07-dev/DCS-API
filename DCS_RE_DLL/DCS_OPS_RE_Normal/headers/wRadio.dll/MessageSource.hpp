#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: MessageSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class MessageSource
{
public:

    // RVA: 0x32 | Ordinal: 51
        void MessageSource(void);

    // RVA: 0x1DA | Ordinal: 475
        void assign(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x1FC | Ordinal: 509
        void create(class Sound::Host *);

    // RVA: 0x220 | Ordinal: 545
        void free(void);

    // RVA: 0x2F1 | Ordinal: 754
        void get_assigned_msg(void) const;

    // RVA: 0x3B5 | Ordinal: 950
        void play_(struct SND_SourceParams const &);

    // RVA: 0x469 | Ordinal: 1130
        void stop(void);

    // RVA: 0x46B | Ordinal: 1132
        void stop_(void);

    // RVA: 0x4C1 | Ordinal: 1218
        void update_(void);

    // RVA: 0x96 | Ordinal: 151
        void _MessageSource(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_MESSAGESOURCE_HPP
