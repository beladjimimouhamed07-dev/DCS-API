#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqAGM_65E
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqAGM_65E
{
public:

    // RVA: 0x8CF | Ordinal: 2256
        void StartScan(double);

    // RVA: 0x941 | Ordinal: 2370
        void align_in_progress(void);

    // RVA: 0x985 | Ordinal: 2438
        void break_lock(void);

    // RVA: 0x9AE | Ordinal: 2479
        void cage(void);

    // RVA: 0x24F | Ordinal: 592
        void eqAGM_65E(class cockpit::eqAGM_65E const &);

    // RVA: 0x250 | Ordinal: 593
        void eqAGM_65E(class wsType const &);

    // RVA: 0xC1D | Ordinal: 3102
        void free_lock(void);

    // RVA: 0xC6C | Ordinal: 3181
        void getCountermeasuresMode(void) const;

    // RVA: 0xE59 | Ordinal: 3674
        void get_E_mode(void) const;

    // RVA: 0xEDE | Ordinal: 3807
        void get_code(void) const;

    // RVA: 0x111C | Ordinal: 4381
        void have_valid_target(void) const;

    // RVA: 0x121B | Ordinal: 4636
        void initialize(void);

    // RVA: 0x129D | Ordinal: 4766
        void is_LockOn(void) const;

    // RVA: 0x12A2 | Ordinal: 4771
        void is_PRF_entered(void) const;

    // RVA: 0x13BD | Ordinal: 5054
        void lockon(void);

    // RVA: 0x145B | Ordinal: 5212
        void on_TV_SENSOR_move_horizontal_abs(float, float, double);

    // RVA: 0x145F | Ordinal: 5216
        void on_TV_SENSOR_move_vertical_abs(float, float, double);

    // RVA: 0x1464 | Ordinal: 5221
        void on_axis_stop(void);

    // RVA: 0x165A | Ordinal: 5723
        void scan(double);

    // RVA: 0x165F | Ordinal: 5728
        void scan_stop(void);

    // RVA: 0x166E | Ordinal: 5743
        void search(void);

    // RVA: 0x16C8 | Ordinal: 5833
        void setCountermeasuresMode(bool);

    // RVA: 0x16F8 | Ordinal: 5881
        void setElecPower(bool);

    // RVA: 0x1840 | Ordinal: 6209
        void set_code(int, bool);

    // RVA: 0x184A | Ordinal: 6219
        void set_current_code_as_valid(bool);

    // RVA: 0x18A9 | Ordinal: 6314
        void set_gyro_moving(void);

    // RVA: 0x19A6 | Ordinal: 6567
        void slave_to_point(class osg::Vec3d const &);

    // RVA: 0x19B0 | Ordinal: 6577
        void slew_down(double);

    // RVA: 0x19B4 | Ordinal: 6581
        void slew_left(double);

    // RVA: 0x19B9 | Ordinal: 6586
        void slew_right(double);

    // RVA: 0x19BD | Ordinal: 6590
        void slew_stop(void);

    // RVA: 0x19C1 | Ordinal: 6594
        void slew_up(double);

    // RVA: 0x19E6 | Ordinal: 6631
        void start_search(void);

    // RVA: 0x1A0A | Ordinal: 6667
        void stop_search(void);

    // RVA: 0x1A50 | Ordinal: 6737
        void tracking(double);

    // RVA: 0x1A76 | Ordinal: 6775
        void uncage(void);

    // RVA: 0x1AF8 | Ordinal: 6905
        void update(double);

    // RVA: 0x1B93 | Ordinal: 7060
        void use_gyro_base(void) const;

    // RVA: 0x1BAC | Ordinal: 7085
        void zoom_in(void);

    // RVA: 0x1BB0 | Ordinal: 7089
        void zoom_out(void);

    // RVA: 0x3A6 | Ordinal: 935
        void _eqAGM_65E(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQAGM_65E_HPP
