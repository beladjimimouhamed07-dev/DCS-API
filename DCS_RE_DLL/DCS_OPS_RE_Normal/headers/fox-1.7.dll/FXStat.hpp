#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXStat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXStat
{
public:

    // RVA: 0x952 | Ordinal: 2387
        void accessed(void) const;

    // RVA: 0x953 | Ordinal: 2388
        void accessed(class FX::FXString const &);

    // RVA: 0x954 | Ordinal: 2389
        void accessed(class FX::FXString const &, __int64);

    // RVA: 0xBF8 | Ordinal: 3065
        void created(void) const;

    // RVA: 0xBF9 | Ordinal: 3066
        void created(class FX::FXString const &);

    // RVA: 0xBFA | Ordinal: 3067
        void created(class FX::FXString const &, __int64);

    // RVA: 0xE61 | Ordinal: 3682
        void exists(class FX::FXString const &);

    // RVA: 0x1030 | Ordinal: 4145
        void getAvailableDiskSpace(class FX::FXString const &, unsigned __int64 &);

    // RVA: 0x1663 | Ordinal: 5732
        void getTotalDiskSpace(class FX::FXString const &, unsigned __int64 &);

    // RVA: 0x16E6 | Ordinal: 5863
        void group(void) const;

    // RVA: 0x1889 | Ordinal: 6282
        void index(void) const;

    // RVA: 0x188A | Ordinal: 6283
        void index(class FX::FXString const &);

    // RVA: 0x18F0 | Ordinal: 6385
        void isAccessible(class FX::FXString const &, unsigned int);

    // RVA: 0x18FD | Ordinal: 6398
        void isBlock(void) const;

    // RVA: 0x1904 | Ordinal: 6405
        void isCharacter(void) const;

    // RVA: 0x191B | Ordinal: 6428
        void isDirectory(void) const;

    // RVA: 0x191C | Ordinal: 6429
        void isDirectory(class FX::FXString const &);

    // RVA: 0x1939 | Ordinal: 6458
        void isExecutable(void) const;

    // RVA: 0x193A | Ordinal: 6459
        void isExecutable(class FX::FXString const &);

    // RVA: 0x193F | Ordinal: 6464
        void isFifo(void) const;

    // RVA: 0x1942 | Ordinal: 6467
        void isFile(void) const;

    // RVA: 0x1943 | Ordinal: 6468
        void isFile(class FX::FXString const &);

    // RVA: 0x194A | Ordinal: 6475
        void isGroupExecutable(void) const;

    // RVA: 0x194B | Ordinal: 6476
        void isGroupExecutable(class FX::FXString const &);

    // RVA: 0x194C | Ordinal: 6477
        void isGroupReadWriteExecute(void) const;

    // RVA: 0x194D | Ordinal: 6478
        void isGroupReadWriteExecute(class FX::FXString const &);

    // RVA: 0x194E | Ordinal: 6479
        void isGroupReadable(void) const;

    // RVA: 0x194F | Ordinal: 6480
        void isGroupReadable(class FX::FXString const &);

    // RVA: 0x1950 | Ordinal: 6481
        void isGroupWritable(void) const;

    // RVA: 0x1951 | Ordinal: 6482
        void isGroupWritable(class FX::FXString const &);

    // RVA: 0x1955 | Ordinal: 6486
        void isHidden(void) const;

    // RVA: 0x1956 | Ordinal: 6487
        void isHidden(class FX::FXString const &);

    // RVA: 0x1993 | Ordinal: 6548
        void isLink(void) const;

    // RVA: 0x1994 | Ordinal: 6549
        void isLink(class FX::FXString const &);

    // RVA: 0x19B3 | Ordinal: 6580
        void isOtherExecutable(void) const;

    // RVA: 0x19B4 | Ordinal: 6581
        void isOtherExecutable(class FX::FXString const &);

    // RVA: 0x19B5 | Ordinal: 6582
        void isOtherReadWriteExecute(void) const;

    // RVA: 0x19B6 | Ordinal: 6583
        void isOtherReadWriteExecute(class FX::FXString const &);

    // RVA: 0x19B7 | Ordinal: 6584
        void isOtherReadable(void) const;

    // RVA: 0x19B8 | Ordinal: 6585
        void isOtherReadable(class FX::FXString const &);

    // RVA: 0x19B9 | Ordinal: 6586
        void isOtherWritable(void) const;

    // RVA: 0x19BA | Ordinal: 6587
        void isOtherWritable(class FX::FXString const &);

    // RVA: 0x19C1 | Ordinal: 6594
        void isOwnerExecutable(void) const;

    // RVA: 0x19C2 | Ordinal: 6595
        void isOwnerExecutable(class FX::FXString const &);

    // RVA: 0x19C4 | Ordinal: 6597
        void isOwnerReadWriteExecute(void) const;

    // RVA: 0x19C5 | Ordinal: 6598
        void isOwnerReadWriteExecute(class FX::FXString const &);

    // RVA: 0x19C6 | Ordinal: 6599
        void isOwnerReadable(void) const;

    // RVA: 0x19C7 | Ordinal: 6600
        void isOwnerReadable(class FX::FXString const &);

    // RVA: 0x19C8 | Ordinal: 6601
        void isOwnerWritable(void) const;

    // RVA: 0x19C9 | Ordinal: 6602
        void isOwnerWritable(class FX::FXString const &);

    // RVA: 0x19D8 | Ordinal: 6617
        void isReadable(void) const;

    // RVA: 0x19D9 | Ordinal: 6618
        void isReadable(class FX::FXString const &);

    // RVA: 0x19E6 | Ordinal: 6631
        void isSetGid(void) const;

    // RVA: 0x19E7 | Ordinal: 6632
        void isSetGid(class FX::FXString const &);

    // RVA: 0x19E8 | Ordinal: 6633
        void isSetSticky(void) const;

    // RVA: 0x19E9 | Ordinal: 6634
        void isSetSticky(class FX::FXString const &);

    // RVA: 0x19EA | Ordinal: 6635
        void isSetUid(void) const;

    // RVA: 0x19EB | Ordinal: 6636
        void isSetUid(class FX::FXString const &);

    // RVA: 0x19F1 | Ordinal: 6642
        void isSocket(void) const;

    // RVA: 0x1A0B | Ordinal: 6668
        void isWritable(void) const;

    // RVA: 0x1A0C | Ordinal: 6669
        void isWritable(class FX::FXString const &);

    // RVA: 0x1A9D | Ordinal: 6814
        void links(void) const;

    // RVA: 0x1A9E | Ordinal: 6815
        void links(class FX::FXString const &);

    // RVA: 0x1E9A | Ordinal: 7835
        void mode(void) const;

    // RVA: 0x1E9B | Ordinal: 7836
        void mode(class FX::FXString const &);

    // RVA: 0x1E9C | Ordinal: 7837
        void mode(class FX::FXString const &, unsigned int);

    // RVA: 0x1E9F | Ordinal: 7840
        void modified(void) const;

    // RVA: 0x1EA0 | Ordinal: 7841
        void modified(class FX::FXString const &);

    // RVA: 0x1EA1 | Ordinal: 7842
        void modified(class FX::FXString const &, __int64);

    // RVA: 0x2E38 | Ordinal: 11833
        void size(void) const;

    // RVA: 0x2E39 | Ordinal: 11834
        void size(class FX::FXString const &);

    // RVA: 0x2E59 | Ordinal: 11866
        void stat(class FX::FXFile const &, class FX::FXStat &);

    // RVA: 0x2E5A | Ordinal: 11867
        void statFile(class FX::FXString const &, class FX::FXStat &);

    // RVA: 0x2E5B | Ordinal: 11868
        void statLink(class FX::FXString const &, class FX::FXStat &);

    // RVA: 0x2F2F | Ordinal: 12080
        void user(void) const;

    // RVA: 0x2F64 | Ordinal: 12133
        void volume(void) const;

    // RVA: 0x2F65 | Ordinal: 12134
        void volume(class FX::FXString const &);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSTAT_HPP
