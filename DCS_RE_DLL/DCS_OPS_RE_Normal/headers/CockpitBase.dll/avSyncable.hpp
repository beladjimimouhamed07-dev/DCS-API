#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSyncable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSyncable
{
public:

    // RVA: 0x917 | Ordinal: 2328
        void add_entity(unsigned int, float, float, unsigned int, class std::function<void __cdecl(unsigned int, float)>);

    // RVA: 0x918 | Ordinal: 2329
        void add_entity(unsigned int, class std::initializer_list<float>, class std::initializer_list<unsigned int>, class std::function<void __cdecl(unsigned int, float)>);

    // RVA: 0x919 | Ordinal: 2330
        void add_entity(unsigned int, class ed::span<float const, -1>, class ed::span<unsigned int const, -1>, class std::function<void __cdecl(unsigned int, float)>);

    // RVA: 0x1BE | Ordinal: 447
        void avSyncable(void);

    // RVA: 0x1111 | Ordinal: 4370
        void handle_connect_events(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x12A8 | Ordinal: 4777
        void is_alone(void) const;

    // RVA: 0x12B4 | Ordinal: 4789
        void is_first_sync(void) const;

    // RVA: 0x12B5 | Ordinal: 4790
        void is_fm_master(void);

    // RVA: 0x12BE | Ordinal: 4799
        void is_multiplayer(void);

    // RVA: 0x12BF | Ordinal: 4800
        void is_net_master(void);

    // RVA: 0x12C0 | Ordinal: 4801
        void is_player_present(unsigned char) const;

    // RVA: 0x12CA | Ordinal: 4811
        void is_syncing_now(void) const;

    // RVA: 0x139F | Ordinal: 5024
        void listen_multicrew_events(class cockpit::avDevice *);

    // RVA: 0x141D | Ordinal: 5150
        void net_sync(unsigned char, unsigned char, class Mail::Stream &);

    // RVA: 0x142B | Ordinal: 5164
        void num_slot(void);

    // RVA: 0x1578 | Ordinal: 5497
        void ready_to_sync(void);

    // RVA: 0x1685 | Ordinal: 5766
        void send_message(unsigned short, class ed::span<unsigned int const, -1>);

    // RVA: 0x1880 | Ordinal: 6273
        void set_entity_default_handler(class std::function<void __cdecl(unsigned int, float)>);

    // RVA: 0x18DA | Ordinal: 6363
        void set_message_handler(class std::function<void __cdecl(unsigned short, class ed::span<unsigned int const, -1>)>);

    // RVA: 0x1B5D | Ordinal: 7006
        void update_entity(unsigned int, float, bool);

    // RVA: 0x359 | Ordinal: 858
        void _avSyncable(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSYNCABLE_HPP
