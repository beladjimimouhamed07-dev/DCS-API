#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRWR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRWR
{
public:

    // RVA: 0x777 | Ordinal: 1912
        void ClearEmitters(void);

    // RVA: 0x7B2 | Ordinal: 1971
        void GetEmitters(void);

    // RVA: 0x7BB | Ordinal: 1980
        void GetMainEmitterPlace(void) const;

    // RVA: 0x7BE | Ordinal: 1983
        void GetNewestEmitter(void) const;

    // RVA: 0x85E | Ordinal: 2143
        void ResizeStorage(int);

    // RVA: 0x8B1 | Ordinal: 2226
        void SetEmitterIsNotValid(int);

    // RVA: 0x8B2 | Ordinal: 2227
        void SetEmitterIsValid(int);

    // RVA: 0x17C | Ordinal: 381
        void avRWR(void);

    // RVA: 0x9C2 | Ordinal: 2499
        void calc_priority(unsigned int, unsigned int, float) const;

    // RVA: 0x9D1 | Ordinal: 2514
        void calculateGroups(void);

    // RVA: 0xA12 | Ordinal: 2579
        void changeBrightness(void);

    // RVA: 0xA49 | Ordinal: 2634
        void checkEmitter(unsigned int, unsigned int);

    // RVA: 0xA4A | Ordinal: 2635
        void checkEmittersSize(void);

    // RVA: 0xA4F | Ordinal: 2640
        void checkLaunchEvent(void);

    // RVA: 0xA50 | Ordinal: 2641
        void checkLockEvent(void);

    // RVA: 0xB71 | Ordinal: 2930
        void dismissTgtSeparartion(void);

    // RVA: 0xBF5 | Ordinal: 3062
        void findNewPlace(void);

    // RVA: 0xBF8 | Ordinal: 3065
        void findWithLowestPriority(float &);

    // RVA: 0xC52 | Ordinal: 3155
        void getBrightness(void) const;

    // RVA: 0xCA6 | Ordinal: 3239
        void getEmitterPos(class MovingObject *, class wPosition3<float> &, float &, float &, class osg::Vec3f &);

    // RVA: 0xCA7 | Ordinal: 3240
        void getEmittersSize(void) const;

    // RVA: 0xD30 | Ordinal: 3377
        void getLaunchEventIsActive(void) const;

    // RVA: 0xD31 | Ordinal: 3378
        void getLaunchingSource(void) const;

    // RVA: 0xD3B | Ordinal: 3388
        void getLockEventIsActive(void) const;

    // RVA: 0xD3E | Ordinal: 3391
        void getLockingSource(void) const;

    // RVA: 0xD3F | Ordinal: 3392
        void getLockingType(void) const;

    // RVA: 0xDAA | Ordinal: 3499
        void getPriorityMode(void) const;

    // RVA: 0xDDE | Ordinal: 3551
        void getSeparateMode(void) const;

    // RVA: 0xDF0 | Ordinal: 3569
        void getSignalStreigth(class MovingObject *, class wPosition3<float> const &, int, int, float) const;

    // RVA: 0xE17 | Ordinal: 3608
        void getSymbolsStorage(void) const;

    // RVA: 0x11DC | Ordinal: 4573
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x122C | Ordinal: 4653
        void initialize_storage(void);

    // RVA: 0x1256 | Ordinal: 4695
        void isDegraded(void) const;

    // RVA: 0x1278 | Ordinal: 4729
        void isPositionEmpty(class wPosition3<double> const &, int);

    // RVA: 0x15BF | Ordinal: 5568
        void release(void);

    // RVA: 0x166B | Ordinal: 5740
        void search(int, int);

    // RVA: 0x1673 | Ordinal: 5748
        void selectMainEmitter(void);

    // RVA: 0x1686 | Ordinal: 5767
        void separateGroups(void);

    // RVA: 0x16A8 | Ordinal: 5801
        void setBrightness(float);

    // RVA: 0x1703 | Ordinal: 5892
        void setEmitterTypes(class MovingObject *, class cockpit::RWR_Emitter &);

    // RVA: 0x1744 | Ordinal: 5957
        void setLaunchEventIsActive(bool);

    // RVA: 0x1A59 | Ordinal: 6746
        void tryInsertEmitter(struct RWR_event const &);

    // RVA: 0x1ACA | Ordinal: 6859
        void update(void);

    // RVA: 0x1B10 | Ordinal: 6929
        void updateEmitters(void);

    // RVA: 0x336 | Ordinal: 823
        void _avRWR(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRWR_HPP
