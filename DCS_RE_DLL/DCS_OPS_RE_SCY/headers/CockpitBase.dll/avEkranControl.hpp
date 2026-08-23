#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avEkranControl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avEkranControl
{
public:

    // RVA: 0x87A | Ordinal: 2171
        void SetCommand(int, float);

    // RVA: 0x103 | Ordinal: 260
        void avEkranControl(class cockpit::avEkranControl const &);

    // RVA: 0x104 | Ordinal: 261
        void avEkranControl(void);

    // RVA: 0x9F0 | Ordinal: 2545
        void call(void);

    // RVA: 0xA2B | Ordinal: 2604
        void checkAllSignals(void);

    // RVA: 0xA5B | Ordinal: 2652
        void checkSelfTestConditions(void);

    // RVA: 0xA8C | Ordinal: 2701
        void check_to_document_transition(void);

    // RVA: 0xA8D | Ordinal: 2702
        void check_to_flightPK_transition(void);

    // RVA: 0xA8E | Ordinal: 2703
        void check_to_flightTO_transition(void);

    // RVA: 0xAC7 | Ordinal: 2760
        void clearPrintQueue(void);

    // RVA: 0xB68 | Ordinal: 2921
        void delete_message(int);

    // RVA: 0xB82 | Ordinal: 2947
        void document_print(void);

    // RVA: 0xC08 | Ordinal: 3081
        void flagOff(int);

    // RVA: 0xC09 | Ordinal: 3082
        void flagOn(int);

    // RVA: 0xD28 | Ordinal: 3369
        void getLampsTest(void) const;

    // RVA: 0xE74 | Ordinal: 3701
        void get_RAM_memory(void) const;

    // RVA: 0xE75 | Ordinal: 3702
        void get_RAM_queue(void) const;

    // RVA: 0xF85 | Ordinal: 3974
        void get_is_strip_end(void) const;

    // RVA: 0xF92 | Ordinal: 3987
        void get_last_text_frame_1(void) const;

    // RVA: 0xF93 | Ordinal: 3988
        void get_last_text_frame_2(void) const;

    // RVA: 0xFC5 | Ordinal: 4038
        void get_messages_base(void);

    // RVA: 0x102F | Ordinal: 4144
        void get_print_queue(void);

    // RVA: 0x10B5 | Ordinal: 4278
        void get_system_time(void);

    // RVA: 0x11B4 | Ordinal: 4533
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1235 | Ordinal: 4662
        void insert_memory(struct std::pair<int, class cockpit::avEkranMessage>);

    // RVA: 0x1236 | Ordinal: 4663
        void insert_queue(struct std::pair<int, class cockpit::avEkranMessage>);

    // RVA: 0x127F | Ordinal: 4736
        void isReadyToProcessSignals(void);

    // RVA: 0x1284 | Ordinal: 4741
        void isSignalApplicable(int);

    // RVA: 0x1302 | Ordinal: 4867
        void l_get_actual_text_frame(struct lua_State *);

    // RVA: 0x133F | Ordinal: 4928
        void l_metatable_name(void) const;

    // RVA: 0x1360 | Ordinal: 4961
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1417 | Ordinal: 5144
        void msg_priority(int) const;

    // RVA: 0x141F | Ordinal: 5152
        void new_message(int, bool);

    // RVA: 0x148D | Ordinal: 5262
        void override_print(class cockpit::avEkranMessage const &);

    // RVA: 0x14DE | Ordinal: 5343
        void post_initialize(void);

    // RVA: 0x150E | Ordinal: 5391
        void power_off(void);

    // RVA: 0x150F | Ordinal: 5392
        void power_on(void);

    // RVA: 0x1520 | Ordinal: 5409
        void priority_print(class cockpit::avEkranMessage const &);

    // RVA: 0x154C | Ordinal: 5453
        void push_RPK(class cockpit::avEkranMessage);

    // RVA: 0x15F5 | Ordinal: 5622
        void repair(void);

    // RVA: 0x1633 | Ordinal: 5684
        void reset_transition_timers(void);

    // RVA: 0x1757 | Ordinal: 5976
        void setMode(int);

    // RVA: 0x1815 | Ordinal: 6166
        void set_actual_text_frame_number(int);

    // RVA: 0x18BD | Ordinal: 6334
        void set_last_printed_msg(class cockpit::avEkranMessage const &);

    // RVA: 0x18BE | Ordinal: 6335
        void set_last_text_frame_1(char const *);

    // RVA: 0x18BF | Ordinal: 6336
        void set_last_text_frame_2(char const *);

    // RVA: 0x1947 | Ordinal: 6472
        void set_system_startup_time(void);

    // RVA: 0x19E7 | Ordinal: 6632
        void start_selftest(void);

    // RVA: 0x1AAD | Ordinal: 6830
        void update(void);

    // RVA: 0x2FD | Ordinal: 766
        void _avEkranControl(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVEKRANCONTROL_HPP
