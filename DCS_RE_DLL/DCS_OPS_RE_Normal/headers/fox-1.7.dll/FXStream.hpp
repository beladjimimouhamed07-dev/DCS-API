#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXStream
{
public:

    // RVA: 0x2EC | Ordinal: 749
        void FXStream(class FX::FXStream const &);

    // RVA: 0x2ED | Ordinal: 750
        void FXStream(class FX::FXObject const *);

    // RVA: 0x962 | Ordinal: 2403
        void addObject(class FX::FXObject const *);

    // RVA: 0xAFD | Ordinal: 2814
        void close(void);

    // RVA: 0xB55 | Ordinal: 2902
        void container(void) const;

    // RVA: 0xCD8 | Ordinal: 3289
        void direction(void) const;

    // RVA: 0xE2F | Ordinal: 3632
        void eof(void) const;

    // RVA: 0xF50 | Ordinal: 3921
        void flush(void);

    // RVA: 0x15CB | Ordinal: 5580
        void getSpace(void) const;

    // RVA: 0x18F9 | Ordinal: 6394
        void isBigEndian(void) const;

    // RVA: 0x19C0 | Ordinal: 6593
        void isOwned(void) const;

    // RVA: 0x1B2C | Ordinal: 6957
        void load(char *, unsigned __int64);

    // RVA: 0x1B2D | Ordinal: 6958
        void load(unsigned char *, unsigned __int64);

    // RVA: 0x1B2E | Ordinal: 6959
        void load(short *, unsigned __int64);

    // RVA: 0x1B2F | Ordinal: 6960
        void load(unsigned short *, unsigned __int64);

    // RVA: 0x1B30 | Ordinal: 6961
        void load(int *, unsigned __int64);

    // RVA: 0x1B31 | Ordinal: 6962
        void load(unsigned int *, unsigned __int64);

    // RVA: 0x1B32 | Ordinal: 6963
        void load(float *, unsigned __int64);

    // RVA: 0x1B33 | Ordinal: 6964
        void load(double *, unsigned __int64);

    // RVA: 0x1B34 | Ordinal: 6965
        void load(__int64 *, unsigned __int64);

    // RVA: 0x1B35 | Ordinal: 6966
        void load(unsigned __int64 *, unsigned __int64);

    // RVA: 0x1B36 | Ordinal: 6967
        void load(bool *, unsigned __int64);

    // RVA: 0x1B55 | Ordinal: 6998
        void loadObject(class FX::FXObject *&);

    // RVA: 0x2645 | Ordinal: 9798
        void open(enum FX::FXStreamDirection, unsigned char *, unsigned __int64, bool);

    // RVA: 0x62E | Ordinal: 1583
        void operator__(char const &);

    // RVA: 0x62F | Ordinal: 1584
        void operator__(unsigned char const &);

    // RVA: 0x630 | Ordinal: 1585
        void operator__(short const &);

    // RVA: 0x631 | Ordinal: 1586
        void operator__(unsigned short const &);

    // RVA: 0x632 | Ordinal: 1587
        void operator__(int const &);

    // RVA: 0x633 | Ordinal: 1588
        void operator__(unsigned int const &);

    // RVA: 0x634 | Ordinal: 1589
        void operator__(float const &);

    // RVA: 0x635 | Ordinal: 1590
        void operator__(double const &);

    // RVA: 0x636 | Ordinal: 1591
        void operator__(__int64 const &);

    // RVA: 0x637 | Ordinal: 1592
        void operator__(unsigned __int64 const &);

    // RVA: 0x638 | Ordinal: 1593
        void operator__(bool const &);

    // RVA: 0x5F0 | Ordinal: 1521
        void operator__(char &);

    // RVA: 0x5F1 | Ordinal: 1522
        void operator__(unsigned char &);

    // RVA: 0x5F2 | Ordinal: 1523
        void operator__(short &);

    // RVA: 0x5F3 | Ordinal: 1524
        void operator__(unsigned short &);

    // RVA: 0x5F4 | Ordinal: 1525
        void operator__(int &);

    // RVA: 0x5F5 | Ordinal: 1526
        void operator__(unsigned int &);

    // RVA: 0x5F6 | Ordinal: 1527
        void operator__(float &);

    // RVA: 0x5F7 | Ordinal: 1528
        void operator__(double &);

    // RVA: 0x5F8 | Ordinal: 1529
        void operator__(__int64 &);

    // RVA: 0x5F9 | Ordinal: 1530
        void operator__(unsigned __int64 &);

    // RVA: 0x5FA | Ordinal: 1531
        void operator__(bool &);

    // RVA: 0x269B | Ordinal: 9884
        void position(void) const;

    // RVA: 0x269C | Ordinal: 9885
        void position(__int64, enum FX::FXWhence);

    // RVA: 0x26EB | Ordinal: 9964
        void readBuffer(unsigned __int64);

    // RVA: 0x285D | Ordinal: 10334
        void save(char const *, unsigned __int64);

    // RVA: 0x285E | Ordinal: 10335
        void save(unsigned char const *, unsigned __int64);

    // RVA: 0x285F | Ordinal: 10336
        void save(short const *, unsigned __int64);

    // RVA: 0x2860 | Ordinal: 10337
        void save(unsigned short const *, unsigned __int64);

    // RVA: 0x2861 | Ordinal: 10338
        void save(int const *, unsigned __int64);

    // RVA: 0x2862 | Ordinal: 10339
        void save(unsigned int const *, unsigned __int64);

    // RVA: 0x2863 | Ordinal: 10340
        void save(float const *, unsigned __int64);

    // RVA: 0x2864 | Ordinal: 10341
        void save(double const *, unsigned __int64);

    // RVA: 0x2865 | Ordinal: 10342
        void save(__int64 const *, unsigned __int64);

    // RVA: 0x2866 | Ordinal: 10343
        void save(unsigned __int64 const *, unsigned __int64);

    // RVA: 0x2867 | Ordinal: 10344
        void save(bool const *, unsigned __int64);

    // RVA: 0x2881 | Ordinal: 10370
        void saveObject(class FX::FXObject const *);

    // RVA: 0x29B9 | Ordinal: 10682
        void setBigEndian(bool);

    // RVA: 0x2A7E | Ordinal: 10879
        void setError(enum FX::FXStreamStatus);

    // RVA: 0x2C46 | Ordinal: 11335
        void setOwned(bool);

    // RVA: 0x2D0F | Ordinal: 11536
        void setSpace(unsigned __int64);

    // RVA: 0x2E5C | Ordinal: 11869
        void status(void) const;

    // RVA: 0x2E83 | Ordinal: 11908
        void swapBytes(bool);

    // RVA: 0x2E84 | Ordinal: 11909
        void swapBytes(void) const;

    // RVA: 0x2FE1 | Ordinal: 12258
        void writeBuffer(unsigned __int64);

    // RVA: 0x4BD | Ordinal: 1214
        void _FXStream(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSTREAM_HPP
