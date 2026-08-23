#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMovingMap_Cursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMovingMap_Cursor
{
public:

    // RVA: 0x165 | Ordinal: 358
        void avMovingMap_Cursor(class cockpit::avMovingMap_Cursor const &);

    // RVA: 0x166 | Ordinal: 359
        void avMovingMap_Cursor(void);

    // RVA: 0xABC | Ordinal: 2749
        void clear(void);

    // RVA: 0xACD | Ordinal: 2766
        void clear_moving(void);

    // RVA: 0xE52 | Ordinal: 3667
        void getX(void) const;

    // RVA: 0xE53 | Ordinal: 3668
        void getY(void) const;

    // RVA: 0xFA6 | Ordinal: 4007
        void get_limit_X(void) const;

    // RVA: 0xFA7 | Ordinal: 4008
        void get_limit_Y(void) const;

    // RVA: 0x1146 | Ordinal: 4423
        void in_limit(void);

    // RVA: 0x1148 | Ordinal: 4425
        void in_slew(void) const;

    // RVA: 0x1804 | Ordinal: 6149
        void setX(float);

    // RVA: 0x1805 | Ordinal: 6150
        void setY(float);

    // RVA: 0x1897 | Ordinal: 6296
        void set_from_axis_absolute_X(float, bool);

    // RVA: 0x1898 | Ordinal: 6297
        void set_from_axis_absolute_Y(float, bool);

    // RVA: 0x1899 | Ordinal: 6298
        void set_from_axis_relative_X(float, bool);

    // RVA: 0x189A | Ordinal: 6299
        void set_from_axis_relative_Y(float, bool);

    // RVA: 0x18C5 | Ordinal: 6342
        void set_limits_X(float, float);

    // RVA: 0x18C6 | Ordinal: 6343
        void set_limits_X(class cockpit::limits<double>);

    // RVA: 0x18C7 | Ordinal: 6344
        void set_limits_Y(float, float);

    // RVA: 0x18C8 | Ordinal: 6345
        void set_limits_Y(class cockpit::limits<double>);

    // RVA: 0x19DD | Ordinal: 6622
        void start_X(double);

    // RVA: 0x19DE | Ordinal: 6623
        void start_Y(double);

    // RVA: 0x1A05 | Ordinal: 6662
        void stop_X(void);

    // RVA: 0x1A06 | Ordinal: 6663
        void stop_Y(void);

    // RVA: 0x1A46 | Ordinal: 6727
        void to_limit(void);

    // RVA: 0x1B41 | Ordinal: 6978
        void update_X(double, bool);

    // RVA: 0x1B42 | Ordinal: 6979
        void update_Y(double, bool);

    // RVA: 0x32C | Ordinal: 813
        void _avMovingMap_Cursor(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMOVINGMAP_CURSOR_HPP
