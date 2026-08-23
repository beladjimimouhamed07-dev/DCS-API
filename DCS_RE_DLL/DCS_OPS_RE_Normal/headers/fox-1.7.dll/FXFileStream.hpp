#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFileStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFileStream
{
public:

    // RVA: 0x11C | Ordinal: 285
        void FXFileStream(class FX::FXString const &, enum FX::FXStreamDirection, unsigned __int64);

    // RVA: 0x11D | Ordinal: 286
        void FXFileStream(class FX::FXObject const *);

    // RVA: 0xAF5 | Ordinal: 2806
        void close(void);

    // RVA: 0x1ACE | Ordinal: 6863
        void load(char *, unsigned __int64);

    // RVA: 0x1ACF | Ordinal: 6864
        void load(unsigned char *, unsigned __int64);

    // RVA: 0x1AD0 | Ordinal: 6865
        void load(short *, unsigned __int64);

    // RVA: 0x1AD1 | Ordinal: 6866
        void load(unsigned short *, unsigned __int64);

    // RVA: 0x1AD2 | Ordinal: 6867
        void load(int *, unsigned __int64);

    // RVA: 0x1AD3 | Ordinal: 6868
        void load(unsigned int *, unsigned __int64);

    // RVA: 0x1AD4 | Ordinal: 6869
        void load(float *, unsigned __int64);

    // RVA: 0x1AD5 | Ordinal: 6870
        void load(double *, unsigned __int64);

    // RVA: 0x1AD6 | Ordinal: 6871
        void load(__int64 *, unsigned __int64);

    // RVA: 0x1AD7 | Ordinal: 6872
        void load(unsigned __int64 *, unsigned __int64);

    // RVA: 0x1AD8 | Ordinal: 6873
        void load(bool *, unsigned __int64);

    // RVA: 0x1B53 | Ordinal: 6996
        void loadObject(class FX::FXObject *&);

    // RVA: 0x263B | Ordinal: 9788
        void open(class FX::FXString const &, enum FX::FXStreamDirection, unsigned __int64);

    // RVA: 0x618 | Ordinal: 1561
        void operator__(char const &);

    // RVA: 0x619 | Ordinal: 1562
        void operator__(unsigned char const &);

    // RVA: 0x61A | Ordinal: 1563
        void operator__(short const &);

    // RVA: 0x61B | Ordinal: 1564
        void operator__(unsigned short const &);

    // RVA: 0x61C | Ordinal: 1565
        void operator__(int const &);

    // RVA: 0x61D | Ordinal: 1566
        void operator__(unsigned int const &);

    // RVA: 0x61E | Ordinal: 1567
        void operator__(float const &);

    // RVA: 0x61F | Ordinal: 1568
        void operator__(double const &);

    // RVA: 0x620 | Ordinal: 1569
        void operator__(__int64 const &);

    // RVA: 0x621 | Ordinal: 1570
        void operator__(unsigned __int64 const &);

    // RVA: 0x622 | Ordinal: 1571
        void operator__(bool const &);

    // RVA: 0x5DA | Ordinal: 1499
        void operator__(char &);

    // RVA: 0x5DB | Ordinal: 1500
        void operator__(unsigned char &);

    // RVA: 0x5DC | Ordinal: 1501
        void operator__(short &);

    // RVA: 0x5DD | Ordinal: 1502
        void operator__(unsigned short &);

    // RVA: 0x5DE | Ordinal: 1503
        void operator__(int &);

    // RVA: 0x5DF | Ordinal: 1504
        void operator__(unsigned int &);

    // RVA: 0x5E0 | Ordinal: 1505
        void operator__(float &);

    // RVA: 0x5E1 | Ordinal: 1506
        void operator__(double &);

    // RVA: 0x5E2 | Ordinal: 1507
        void operator__(__int64 &);

    // RVA: 0x5E3 | Ordinal: 1508
        void operator__(unsigned __int64 &);

    // RVA: 0x5E4 | Ordinal: 1509
        void operator__(bool &);

    // RVA: 0x268C | Ordinal: 9869
        void position(void) const;

    // RVA: 0x268D | Ordinal: 9870
        void position(__int64, enum FX::FXWhence);

    // RVA: 0x26E9 | Ordinal: 9962
        void readBuffer(unsigned __int64);

    // RVA: 0x27FF | Ordinal: 10240
        void save(char const *, unsigned __int64);

    // RVA: 0x2800 | Ordinal: 10241
        void save(unsigned char const *, unsigned __int64);

    // RVA: 0x2801 | Ordinal: 10242
        void save(short const *, unsigned __int64);

    // RVA: 0x2802 | Ordinal: 10243
        void save(unsigned short const *, unsigned __int64);

    // RVA: 0x2803 | Ordinal: 10244
        void save(int const *, unsigned __int64);

    // RVA: 0x2804 | Ordinal: 10245
        void save(unsigned int const *, unsigned __int64);

    // RVA: 0x2805 | Ordinal: 10246
        void save(float const *, unsigned __int64);

    // RVA: 0x2806 | Ordinal: 10247
        void save(double const *, unsigned __int64);

    // RVA: 0x2807 | Ordinal: 10248
        void save(__int64 const *, unsigned __int64);

    // RVA: 0x2808 | Ordinal: 10249
        void save(unsigned __int64 const *, unsigned __int64);

    // RVA: 0x2809 | Ordinal: 10250
        void save(bool const *, unsigned __int64);

    // RVA: 0x287F | Ordinal: 10368
        void saveObject(class FX::FXObject const *);

    // RVA: 0x2FDF | Ordinal: 12256
        void writeBuffer(unsigned __int64);

    // RVA: 0x40D | Ordinal: 1038
        void _FXFileStream(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILESTREAM_HPP
