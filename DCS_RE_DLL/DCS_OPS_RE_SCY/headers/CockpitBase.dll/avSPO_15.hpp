#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSPO_15
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSPO_15
{
public:

    // RVA: 0x19E | Ordinal: 415
        void avSPO_15(class cockpit::avSPO_15 const &);

    // RVA: 0x19F | Ordinal: 416
        void avSPO_15(void);

    // RVA: 0x96C | Ordinal: 2413
        void band_pass_distributed(double, struct cockpit::FreqRange const &);

    // RVA: 0x976 | Ordinal: 2423
        void block_20x_get_sector_gain(unsigned __int64, double, double, double, enum cockpit::avSPO_15::avSPO15_freq);

    // RVA: 0x977 | Ordinal: 2424
        void block_4_other_lamps(bool);

    // RVA: 0x978 | Ordinal: 2425
        void block_6_process_input(void);

    // RVA: 0x9F7 | Ordinal: 2552
        void cart_31_threshold_check(unsigned __int64, unsigned __int64, bool, double);

    // RVA: 0x9F8 | Ordinal: 2553
        void cart_32_vertical_channel(bool, double, double, double, struct cockpit::avRadarSource &, bool &, bool &, enum cockpit::avSPO_15::avSPO15_freq);

    // RVA: 0x9F9 | Ordinal: 2554
        void cart_33_34_sum_channel(bool, double, double, double, struct cockpit::avRadarSource &, double &, enum cockpit::avSPO_15::avSPO15_power_level &, enum cockpit::avSPO_15::avSPO15_freq);

    // RVA: 0x9FA | Ordinal: 2555
        void cart_510_T1_pulses(class std::multiset<struct cockpit::avSPO_15::avSPO15Signal, struct cockpit::avSPO_15::avSPO15SignalPowerComperator, class std::allocator<struct cockpit::avSPO_15::avSPO15Signal>> const &, bool &, bool &, unsigned __int64 &);

    // RVA: 0x9FB | Ordinal: 2556
        void cart_511_power_lamps(bool);

    // RVA: 0x9FC | Ordinal: 2557
        void cart_512_blocking(void);

    // RVA: 0x9FD | Ordinal: 2558
        void cart_512_track_signals(unsigned __int64, struct ed::array<class std::multiset<struct cockpit::avSPO_15::avSPO15Signal, struct cockpit::avSPO_15::avSPO15SignalPowerComperator, class std::allocator<struct cockpit::avSPO_15::avSPO15Signal>>, 16> &, struct ed::array<class std::multiset<struct cockpit::avSPO_15::avSPO15Signal, struct cockpit::avSPO_15::avSPO15SignalPowerComperator, class std::allocator<struct cockpit::avSPO_15::avSPO15Signal>>, 16> &);

    // RVA: 0x9FE | Ordinal: 2559
        void cart_51_audio_out(void);

    // RVA: 0x9FF | Ordinal: 2560
        void cart_51_pulse_width_measurment(struct cockpit::avRadarSource const *);

    // RVA: 0xA00 | Ordinal: 2561
        void cart_52_process_input(void);

    // RVA: 0xA01 | Ordinal: 2562
        void cart_53_55_CW_selector_record(unsigned __int64, struct ed::array<class std::multiset<struct cockpit::avSPO_15::avSPO15Signal, struct cockpit::avSPO_15::avSPO15SignalPowerComperator, class std::allocator<struct cockpit::avSPO_15::avSPO15Signal>>, 16> &);

    // RVA: 0xA02 | Ordinal: 2563
        void cart_53_59_long_memory_dump_pulses(void);

    // RVA: 0xA03 | Ordinal: 2564
        void cart_53_CW_correspondence(void);

    // RVA: 0xA04 | Ordinal: 2565
        void cart_53_alpha_correspondence(void);

    // RVA: 0xA05 | Ordinal: 2566
        void cart_53_band_commutator(void);

    // RVA: 0xA06 | Ordinal: 2567
        void cart_53_get_2Hz(void);

    // RVA: 0xA07 | Ordinal: 2568
        void cart_53_memory_dump_pulses(void);

    // RVA: 0xA08 | Ordinal: 2569
        void cart_54_55_510_check_and_record(unsigned __int64, unsigned __int64, bool, struct cockpit::avRadarSource &, enum cockpit::avSPO_15::avSPO15_power_level, struct ed::array<double, 16> &, struct ed::array<class std::multiset<struct cockpit::avSPO_15::avSPO15Signal, struct cockpit::avSPO_15::avSPO15SignalPowerComperator, class std::allocator<struct cockpit::avSPO_15::avSPO15Signal>>, 16> &, bool, bool);

    // RVA: 0xA09 | Ordinal: 2570
        void cart_54_sector_lamps(bool);

    // RVA: 0xA0A | Ordinal: 2571
        void cart_55_secondary_analysis(unsigned __int64, struct ed::array<class std::multiset<struct cockpit::avSPO_15::avSPO15Signal, struct cockpit::avSPO_15::avSPO15SignalPowerComperator, class std::allocator<struct cockpit::avSPO_15::avSPO15Signal>>, 16> const &, struct ed::array<class ed::vector<struct cockpit::avSPO_15::avSPO15Hit, class ed::allocator<struct cockpit::avSPO_15::avSPO15Hit>>, 16> &, enum cockpit::avSPO_15::avSPO15_freq, struct ed::array<double, 16> const &, bool);

    // RVA: 0xA0B | Ordinal: 2572
        void cart_56_PRT_measurement(unsigned __int64, bool, bool, struct cockpit::avRadarSource const *);

    // RVA: 0xA0C | Ordinal: 2573
        void cart_57_CW_type(enum cockpit::avSPO_15::avSPO15_freq, enum cockpit::avSPO_15::avSPO15_power_level);

    // RVA: 0xA0D | Ordinal: 2574
        void cart_57_pulse_type(enum cockpit::avSPO_15::avSPO15_freq, enum cockpit::avSPO_15::avSPO15_pw, enum cockpit::avSPO_15::avSPO15_prf, unsigned __int64);

    // RVA: 0xA0E | Ordinal: 2575
        void cart_58_57_54_channel_record_signal_H_alpha(enum cockpit::avSPO_15::avSPO15_type, unsigned __int64, enum cockpit::avSPO_15::avSPO15_pw, enum cockpit::avSPO_15::avSPO15_prf, bool, struct cockpit::avSPO_15::avSPO15Signal const &, struct ed::array<class ed::vector<struct cockpit::avSPO_15::avSPO15Hit, class ed::allocator<struct cockpit::avSPO_15::avSPO15Hit>>, 16> &);

    // RVA: 0xA0F | Ordinal: 2576
        void cart_59_type_lamps(bool);

    // RVA: 0xA10 | Ordinal: 2577
        void cart_59_type_record(unsigned __int64, struct ed::array<class ed::vector<struct cockpit::avSPO_15::avSPO15Hit, class ed::allocator<struct cockpit::avSPO_15::avSPO15Hit>>, 16> const &, struct ed::array<class ed::vector<struct cockpit::avSPO_15::avSPO15Hit, class ed::allocator<struct cockpit::avSPO_15::avSPO15Hit>>, 16> const &);

    // RVA: 0xE21 | Ordinal: 3618
        void getThreatProgram(void);

    // RVA: 0xE22 | Ordinal: 3619
        void getThreatProgramStock(void);

    // RVA: 0x117C | Ordinal: 4477
        void init_defaults(void);

    // RVA: 0x11EA | Ordinal: 4587
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1392 | Ordinal: 5011
        void limit_rolloff(double, struct cockpit::FreqRange const &);

    // RVA: 0x14C1 | Ordinal: 5314
        void postProcess(void);

    // RVA: 0x1528 | Ordinal: 5417
        void process_emitter_for_db(class std::map<struct cockpit::FreqRange, class std::map<unsigned int, struct cockpit::avRWRradarParams, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct cockpit::avRWRradarParams>>>, struct std::less<struct cockpit::FreqRange>, class ed::allocator<struct std::pair<struct cockpit::FreqRange const, class std::map<unsigned int, struct cockpit::avRWRradarParams, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct cockpit::avRWRradarParams>>>>>> *, enum cockpit::avSPO_15::avSPO15_type, class wsType, class ed::basic_string<char> const &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, double, double);

    // RVA: 0x15C3 | Ordinal: 5572
        void release(void);

    // RVA: 0x15FE | Ordinal: 5631
        void repair(void);

    // RVA: 0x161A | Ordinal: 5659
        void reset(void);

    // RVA: 0x182E | Ordinal: 6191
        void set_block_signal(enum cockpit::avSPO_15::eSPO15_sync, bool);

    // RVA: 0x1860 | Ordinal: 6241
        void set_damage(unsigned int, bool);

    // RVA: 0x18B8 | Ordinal: 6329
        void set_lamp(unsigned __int64, unsigned int);

    // RVA: 0x18B9 | Ordinal: 6330
        void set_lamp_single(bool);

    // RVA: 0x1A23 | Ordinal: 6692
        void syncFailureStates(unsigned int);

    // RVA: 0x1BA4 | Ordinal: 7077
        void zero_broken_memory(void);

    // RVA: 0x348 | Ordinal: 841
        void _avSPO_15(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSPO_15_HPP
