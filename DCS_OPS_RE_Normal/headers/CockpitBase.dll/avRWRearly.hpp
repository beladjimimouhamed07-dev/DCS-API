#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRWRearly
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRWRearly
{
public:

    // RVA: 0x84E | Ordinal: 2127
        void PRFPWDeterm(struct cockpit::avRadarSource &);

    // RVA: 0x17D | Ordinal: 382
        void avRWRearly(class cockpit::avRWRearly const &);

    // RVA: 0x17E | Ordinal: 383
        void avRWRearly(void);

    // RVA: 0xAD8 | Ordinal: 2777
        void cloneCW(struct cockpit::avRWRearly::RadarSig &, struct cockpit::avRWRradarParams const *&, unsigned int);

    // RVA: 0xB5D | Ordinal: 2910
        void deduceMode(struct RWR_event const &, struct cockpit::avRadarSource &, class std::map<unsigned int, struct cockpit::avRWRradarParams, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct cockpit::avRWRradarParams>>> const &, unsigned int);

    // RVA: 0xBF3 | Ordinal: 3060
        void findEmitter(class ed::basic_string<char> const &, class wsType, unsigned int, struct FrequencyRange, bool);

    // RVA: 0xC22 | Ordinal: 3107
        void freqDeterm(struct cockpit::avRadarSource &);

    // RVA: 0xCB5 | Ordinal: 3254
        void getFreqs(struct RWR_event const &);

    // RVA: 0xDA6 | Ordinal: 3495
        void getPower(struct cockpit::avRadarSource &, class osg::Vec3d const &);

    // RVA: 0x11DD | Ordinal: 4574
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1226 | Ordinal: 4647
        void initializeDatabase(class Lua::Config &);

    // RVA: 0x1227 | Ordinal: 4648
        void initializeDefaults(void);

    // RVA: 0x1229 | Ordinal: 4650
        void initializeOwnRadar(class std::map<unsigned int, struct cockpit::avRWRradarParams, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct cockpit::avRWRradarParams>>> const &, unsigned int);

    // RVA: 0x14BF | Ordinal: 5312
        void postProcess(void);

    // RVA: 0x1510 | Ordinal: 5393
        void preProcess(struct cockpit::avRadarSource &, class MovingObject *, class osg::Vec3d const &, class osg::Vec3d const &, bool);

    // RVA: 0x1515 | Ordinal: 5398
        void prepareEmulatedSource(struct cockpit::avRWRearly::RadarSig &);

    // RVA: 0x1516 | Ordinal: 5399
        void prepareFalseSource(struct cockpit::avRWRearly::RadarSig &, class wsType const &, unsigned int, struct cockpit::FreqRange const &, class std::map<unsigned int, struct cockpit::avRWRradarParams, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct cockpit::avRWRradarParams>>> const &, class ed::basic_string<char> const &);

    // RVA: 0x1518 | Ordinal: 5401
        void prepareSource(struct RWR_event const &, struct cockpit::avRWRearly::RadarSig &);

    // RVA: 0x1519 | Ordinal: 5402
        void prepareSourceCommon(struct cockpit::avRWRearly::RadarSig &, struct RWR_event const &, unsigned int &, struct cockpit::avRWRradarParams const *&);

    // RVA: 0x1524 | Ordinal: 5413
        void processEvent(struct cockpit::avRWRearly::RadarSig &, struct RWR_event const &, class MovingObject const *&);

    // RVA: 0x152E | Ordinal: 5423
        void pullOwnRadarFromDB(void) const;

    // RVA: 0x1563 | Ordinal: 5476
        void readEmitter(class Lua::Config &, bool);

    // RVA: 0x1564 | Ordinal: 5477
        void readEntry(class Lua::Config &, struct cockpit::avRWRradarParams *, bool);

    // RVA: 0x15C0 | Ordinal: 5569
        void release(void);

    // RVA: 0x15DE | Ordinal: 5599
        void removeSource(unsigned int);

    // RVA: 0x1776 | Ordinal: 6007
        void setOwnInterlevedMode(unsigned int);

    // RVA: 0x1777 | Ordinal: 6008
        void setOwnRadarIlluminatorState(bool);

    // RVA: 0x1778 | Ordinal: 6009
        void setOwnRadarMode(unsigned int);

    // RVA: 0x1779 | Ordinal: 6010
        void setOwnRadarSimplified(double, double, double, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0x177A | Ordinal: 6011
        void setOwnRadarState(bool);

    // RVA: 0x1ACB | Ordinal: 6860
        void update(void);

    // RVA: 0x1B2B | Ordinal: 6956
        void updateSource(struct RWR_event const &, struct cockpit::avRWRearly::RadarSig &);

    // RVA: 0x337 | Ordinal: 824
        void _avRWRearly(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRWREARLY_HPP
