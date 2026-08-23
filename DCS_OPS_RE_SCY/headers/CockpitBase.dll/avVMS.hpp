#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVMS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVMS
{
public:

    // RVA: 0x1D7 | Ordinal: 472
        void avVMS(class cockpit::avVMS const &);

    // RVA: 0x1D8 | Ordinal: 473
        void avVMS(void);

    // RVA: 0xA2C | Ordinal: 2605
        void checkAllSignals(void);

    // RVA: 0xAC8 | Ordinal: 2761
        void clearQueues(void);

    // RVA: 0xDF8 | Ordinal: 3577
        void getSoundElement(void);

    // RVA: 0xF84 | Ordinal: 3973
        void get_is_playing(void);

    // RVA: 0x1180 | Ordinal: 4481
        void init_messages_matrix(int);

    // RVA: 0x1205 | Ordinal: 4614
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1280 | Ordinal: 4737
        void isReadyToProcessSignals(void);

    // RVA: 0x1285 | Ordinal: 4742
        void isSignalApplicable(int);

    // RVA: 0x1286 | Ordinal: 4743
        void isSignalOn(int);

    // RVA: 0x1451 | Ordinal: 5202
        void onPwrOff(struct lwl::CSignalInfo const *);

    // RVA: 0x14B5 | Ordinal: 5302
        void play_message(unsigned int);

    // RVA: 0x1504 | Ordinal: 5381
        void post_initialize(void);

    // RVA: 0x15CD | Ordinal: 5582
        void release(void);

    // RVA: 0x1680 | Ordinal: 5761
        void selftest(void);

    // RVA: 0x17AF | Ordinal: 6064
        void setSignalOn(int, bool);

    // RVA: 0x19E1 | Ordinal: 6626
        void start_message(int);

    // RVA: 0x19E2 | Ordinal: 6627
        void start_message_playing(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x1A07 | Ordinal: 6664
        void stop_message(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x1A08 | Ordinal: 6665
        void stop_playing(void);

    // RVA: 0x1AE4 | Ordinal: 6885
        void update(void);

    // RVA: 0x1BA8 | Ordinal: 7081
        void zeroize_flags(void);

    // RVA: 0x36A | Ordinal: 875
        void _avVMS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVMS_HPP
