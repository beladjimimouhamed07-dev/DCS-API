#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMemoryStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMemoryStream
{
public:

    // RVA: 0x209 | Ordinal: 522
        void FXMemoryStream(class FX::FXMemoryStream const &);

    // RVA: 0x20A | Ordinal: 523
        void FXMemoryStream(class FX::FXObject const *);

    // RVA: 0x20B | Ordinal: 524
        void FXMemoryStream(enum FX::FXStreamDirection, unsigned char *, unsigned __int64, bool);

    // RVA: 0x16DD | Ordinal: 5854
        void giveBuffer(unsigned char *, unsigned __int64);

    // RVA: 0x1B00 | Ordinal: 6913
        void load(char *, unsigned __int64);

    // RVA: 0x1B01 | Ordinal: 6914
        void load(unsigned char *, unsigned __int64);

    // RVA: 0x1B02 | Ordinal: 6915
        void load(short *, unsigned __int64);

    // RVA: 0x1B03 | Ordinal: 6916
        void load(unsigned short *, unsigned __int64);

    // RVA: 0x1B04 | Ordinal: 6917
        void load(int *, unsigned __int64);

    // RVA: 0x1B05 | Ordinal: 6918
        void load(unsigned int *, unsigned __int64);

    // RVA: 0x1B06 | Ordinal: 6919
        void load(float *, unsigned __int64);

    // RVA: 0x1B07 | Ordinal: 6920
        void load(double *, unsigned __int64);

    // RVA: 0x1B08 | Ordinal: 6921
        void load(__int64 *, unsigned __int64);

    // RVA: 0x1B09 | Ordinal: 6922
        void load(unsigned __int64 *, unsigned __int64);

    // RVA: 0x1B0A | Ordinal: 6923
        void load(bool *, unsigned __int64);

    // RVA: 0x1B54 | Ordinal: 6997
        void loadObject(class FX::FXObject *&);

    // RVA: 0x2641 | Ordinal: 9794
        void open(enum FX::FXStreamDirection, unsigned char *, unsigned __int64, bool);

    // RVA: 0x623 | Ordinal: 1572
        void operator__(char const &);

    // RVA: 0x624 | Ordinal: 1573
        void operator__(unsigned char const &);

    // RVA: 0x625 | Ordinal: 1574
        void operator__(short const &);

    // RVA: 0x626 | Ordinal: 1575
        void operator__(unsigned short const &);

    // RVA: 0x627 | Ordinal: 1576
        void operator__(int const &);

    // RVA: 0x628 | Ordinal: 1577
        void operator__(unsigned int const &);

    // RVA: 0x629 | Ordinal: 1578
        void operator__(float const &);

    // RVA: 0x62A | Ordinal: 1579
        void operator__(double const &);

    // RVA: 0x62B | Ordinal: 1580
        void operator__(__int64 const &);

    // RVA: 0x62C | Ordinal: 1581
        void operator__(unsigned __int64 const &);

    // RVA: 0x62D | Ordinal: 1582
        void operator__(bool const &);

    // RVA: 0x5E5 | Ordinal: 1510
        void operator__(char &);

    // RVA: 0x5E6 | Ordinal: 1511
        void operator__(unsigned char &);

    // RVA: 0x5E7 | Ordinal: 1512
        void operator__(short &);

    // RVA: 0x5E8 | Ordinal: 1513
        void operator__(unsigned short &);

    // RVA: 0x5E9 | Ordinal: 1514
        void operator__(int &);

    // RVA: 0x5EA | Ordinal: 1515
        void operator__(unsigned int &);

    // RVA: 0x5EB | Ordinal: 1516
        void operator__(float &);

    // RVA: 0x5EC | Ordinal: 1517
        void operator__(double &);

    // RVA: 0x5ED | Ordinal: 1518
        void operator__(__int64 &);

    // RVA: 0x5EE | Ordinal: 1519
        void operator__(unsigned __int64 &);

    // RVA: 0x5EF | Ordinal: 1520
        void operator__(bool &);

    // RVA: 0x2698 | Ordinal: 9881
        void position(void) const;

    // RVA: 0x2699 | Ordinal: 9882
        void position(__int64, enum FX::FXWhence);

    // RVA: 0x26EA | Ordinal: 9963
        void readBuffer(unsigned __int64);

    // RVA: 0x2831 | Ordinal: 10290
        void save(char const *, unsigned __int64);

    // RVA: 0x2832 | Ordinal: 10291
        void save(unsigned char const *, unsigned __int64);

    // RVA: 0x2833 | Ordinal: 10292
        void save(short const *, unsigned __int64);

    // RVA: 0x2834 | Ordinal: 10293
        void save(unsigned short const *, unsigned __int64);

    // RVA: 0x2835 | Ordinal: 10294
        void save(int const *, unsigned __int64);

    // RVA: 0x2836 | Ordinal: 10295
        void save(unsigned int const *, unsigned __int64);

    // RVA: 0x2837 | Ordinal: 10296
        void save(float const *, unsigned __int64);

    // RVA: 0x2838 | Ordinal: 10297
        void save(double const *, unsigned __int64);

    // RVA: 0x2839 | Ordinal: 10298
        void save(__int64 const *, unsigned __int64);

    // RVA: 0x283A | Ordinal: 10299
        void save(unsigned __int64 const *, unsigned __int64);

    // RVA: 0x283B | Ordinal: 10300
        void save(bool const *, unsigned __int64);

    // RVA: 0x2880 | Ordinal: 10369
        void saveObject(class FX::FXObject const *);

    // RVA: 0x2E90 | Ordinal: 11921
        void takeBuffer(unsigned char *&, unsigned __int64 &);

    // RVA: 0x2FE0 | Ordinal: 12257
        void writeBuffer(unsigned __int64);

    // RVA: 0x462 | Ordinal: 1123
        void _FXMemoryStream(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMEMORYSTREAM_HPP
