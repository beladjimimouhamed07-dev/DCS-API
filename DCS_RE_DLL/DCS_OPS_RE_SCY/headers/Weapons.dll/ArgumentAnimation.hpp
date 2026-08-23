#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: ArgumentAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ArgumentAnimation
{
public:

    // RVA: 0x6 | Ordinal: 7
        void ArgumentAnimation(class ArgumentAnimation &&);

    // RVA: 0x7 | Ordinal: 8
        void ArgumentAnimation(class ArgumentAnimation const &);

    // RVA: 0x8 | Ordinal: 9
        void ArgumentAnimation(void);

    // RVA: 0x194 | Ordinal: 405
        void GetDefVal(void) const;

    // RVA: 0x1AA | Ordinal: 427
        void GetSpeed(void) const;

    // RVA: 0x1AC | Ordinal: 429
        void GetValue(void) const;

    // RVA: 0x37F | Ordinal: 896
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x43E | Ordinal: 1087
        void getTimeToEnd(void) const;

    // RVA: 0x4A6 | Ordinal: 1191
        void isCyclic(void) const;

    // RVA: 0x4B8 | Ordinal: 1209
        void isOnMax(void) const;

    // RVA: 0x4B9 | Ordinal: 1210
        void isOnMin(void) const;

    // RVA: 0x4BC | Ordinal: 1213
        void isPlaying(void);

    // RVA: 0x57A | Ordinal: 1403
        void playBackward(void);

    // RVA: 0x57C | Ordinal: 1405
        void playForward(void);

    // RVA: 0x5EA | Ordinal: 1515
        void setAnimation(float, float, float, double);

    // RVA: 0x5F5 | Ordinal: 1526
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x633 | Ordinal: 1588
        void setStartVal(float);

    // RVA: 0x66F | Ordinal: 1648
        void stop(unsigned char);

    // RVA: 0x675 | Ordinal: 1654
        void stopToDefault(void);
};

// DCS_OPS_RE_WEAPONS.DLL_ARGUMENTANIMATION_HPP
