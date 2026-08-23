#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Space.dll
// Class: waSatellite
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class waSatellite
{
public:

    // RVA: 0x13 | Ordinal: 20
        void GetSize(void);

    // RVA: 0x16 | Ordinal: 23
        void LocalBox(double);

    // RVA: 0x17 | Ordinal: 24
        void Position(double);

    // RVA: 0x1A | Ordinal: 27
        void calcPosition(double) const;

    // RVA: 0x1B | Ordinal: 28
        void calcPosition(struct AlmanacGPS const &, double);

    // RVA: 0x1C | Ordinal: 29
        void calcVelocity(double, double) const;

    // RVA: 0x1D | Ordinal: 30
        void calcVelocity(struct AlmanacGPS const &, double, double);

    // RVA: 0x21 | Ordinal: 34
        void getAlmanac(void) const;

    // RVA: 0x25 | Ordinal: 38
        void getGlonassCommitDate(void);

    // RVA: 0x26 | Ordinal: 39
        void getGpsCommitDate(void);

    // RVA: 0x3E | Ordinal: 63
        void getSystem(void) const;

    // RVA: 0x41 | Ordinal: 66
        void getWGS84Position(void) const;

    // RVA: 0x42 | Ordinal: 67
        void getWGS84Velocity(void) const;

    // RVA: 0x44 | Ordinal: 69
        void get_number(void) const;

    // RVA: 0x48 | Ordinal: 73
        void setAlmanac(struct AlmanacGPS);

    // RVA: 0x4C | Ordinal: 77
        void setPosition(class osg::Vec3d const &);

    // RVA: 0x4D | Ordinal: 78
        void setSystem(unsigned char);

    // RVA: 0x4E | Ordinal: 79
        void setVelocity(class osg::Vec3d const &);

    // RVA: 0x4F | Ordinal: 80
        void set_number(int);

    // RVA: 0x55 | Ordinal: 86
        void update(double);

    // RVA: 0x53 | Ordinal: 84
        void update2(double, double);

    // RVA: 0x4 | Ordinal: 5
        void waSatellite(class waSatellite const &);

    // RVA: 0x5 | Ordinal: 6
        void waSatellite(int, unsigned char);

    // RVA: 0x6 | Ordinal: 7
        void waSatellite(int, unsigned char, char const *);

    // RVA: 0x7 | Ordinal: 8
        void waSatellite(void);

    // RVA: 0xA | Ordinal: 11
        void _waSatellite(void);
};

// DCS_OPS_RE_SPACE.DLL_WASATELLITE_HPP
