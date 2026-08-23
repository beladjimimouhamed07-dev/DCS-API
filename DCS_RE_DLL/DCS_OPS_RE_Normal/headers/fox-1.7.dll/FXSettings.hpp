#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSettings
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSettings
{
public:

    // RVA: 0x2C3 | Ordinal: 708
        void FXSettings(class FX::FXSettings const &);

    // RVA: 0x2C4 | Ordinal: 709
        void FXSettings(void);

    // RVA: 0x972 | Ordinal: 2419
        void adopt(class FX::FXSettings &);

    // RVA: 0xA33 | Ordinal: 2612
        void at(class FX::FXString const &);

    // RVA: 0xA34 | Ordinal: 2613
        void at(char const *);

    // RVA: 0xA35 | Ordinal: 2614
        void at(class FX::FXString const &) const;

    // RVA: 0xA36 | Ordinal: 2615
        void at(char const *) const;

    // RVA: 0xAD7 | Ordinal: 2776
        void clear(void);

    // RVA: 0xC1E | Ordinal: 3103
        void data(__int64);

    // RVA: 0xC1F | Ordinal: 3104
        void data(__int64) const;

    // RVA: 0xC3F | Ordinal: 3136
        void deleteEntry(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0xC40 | Ordinal: 3137
        void deleteEntry(class FX::FXString const &, char const *);

    // RVA: 0xC41 | Ordinal: 3138
        void deleteEntry(char const *, char const *);

    // RVA: 0xC44 | Ordinal: 3141
        void deleteSection(class FX::FXString const &);

    // RVA: 0xC45 | Ordinal: 3142
        void deleteSection(char const *);

    // RVA: 0xDF4 | Ordinal: 3573
        void empty(void) const;

    // RVA: 0xDF5 | Ordinal: 3574
        void empty(__int64) const;

    // RVA: 0xE5C | Ordinal: 3677
        void existingEntry(class FX::FXString const &, class FX::FXString const &) const;

    // RVA: 0xE5D | Ordinal: 3678
        void existingEntry(class FX::FXString const &, char const *) const;

    // RVA: 0xE5E | Ordinal: 3679
        void existingEntry(char const *, char const *) const;

    // RVA: 0xE5F | Ordinal: 3680
        void existingSection(class FX::FXString const &) const;

    // RVA: 0xE60 | Ordinal: 3681
        void existingSection(char const *) const;

    // RVA: 0xF0B | Ordinal: 3852
        void find(class FX::FXString const &) const;

    // RVA: 0xF0C | Ordinal: 3853
        void find(char const *) const;

    // RVA: 0xF5F | Ordinal: 3936
        void free(__int64);

    // RVA: 0xF60 | Ordinal: 3937
        void free(void) const;

    // RVA: 0x19A5 | Ordinal: 6566
        void isModified(void) const;

    // RVA: 0x1A16 | Ordinal: 6679
        void key(__int64) const;

    // RVA: 0x1F1C | Ordinal: 7965
        void no(__int64);

    // RVA: 0x1F1D | Ordinal: 7966
        void no(void) const;

    // RVA: 0x2662 | Ordinal: 9827
        void parse(class FX::FXString const &, bool);

    // RVA: 0x2664 | Ordinal: 9829
        void parseFile(class FX::FXString const &, bool);

    // RVA: 0x26E6 | Ordinal: 9959
        void readBoolEntry(class FX::FXString const &, class FX::FXString const &, bool) const;

    // RVA: 0x26E7 | Ordinal: 9960
        void readBoolEntry(class FX::FXString const &, char const *, bool) const;

    // RVA: 0x26E8 | Ordinal: 9961
        void readBoolEntry(char const *, char const *, bool) const;

    // RVA: 0x26ED | Ordinal: 9966
        void readColorEntry(class FX::FXString const &, class FX::FXString const &, unsigned int) const;

    // RVA: 0x26EE | Ordinal: 9967
        void readColorEntry(class FX::FXString const &, char const *, unsigned int) const;

    // RVA: 0x26EF | Ordinal: 9968
        void readColorEntry(char const *, char const *, unsigned int) const;

    // RVA: 0x26F1 | Ordinal: 9970
        void readFormatEntry(class FX::FXString const &, class FX::FXString const &, char const *, ...) const;

    // RVA: 0x26F2 | Ordinal: 9971
        void readFormatEntry(class FX::FXString const &, char const *, char const *, ...) const;

    // RVA: 0x26F3 | Ordinal: 9972
        void readFormatEntry(char const *, char const *, char const *, ...) const;

    // RVA: 0x26F6 | Ordinal: 9975
        void readIntEntry(class FX::FXString const &, class FX::FXString const &, int) const;

    // RVA: 0x26F7 | Ordinal: 9976
        void readIntEntry(class FX::FXString const &, char const *, int) const;

    // RVA: 0x26F8 | Ordinal: 9977
        void readIntEntry(char const *, char const *, int) const;

    // RVA: 0x26FB | Ordinal: 9980
        void readLongEntry(class FX::FXString const &, class FX::FXString const &, __int64) const;

    // RVA: 0x26FC | Ordinal: 9981
        void readLongEntry(class FX::FXString const &, char const *, __int64) const;

    // RVA: 0x26FD | Ordinal: 9982
        void readLongEntry(char const *, char const *, __int64) const;

    // RVA: 0x2701 | Ordinal: 9986
        void readRealEntry(class FX::FXString const &, class FX::FXString const &, double) const;

    // RVA: 0x2702 | Ordinal: 9987
        void readRealEntry(class FX::FXString const &, char const *, double) const;

    // RVA: 0x2703 | Ordinal: 9988
        void readRealEntry(char const *, char const *, double) const;

    // RVA: 0x2704 | Ordinal: 9989
        void readStringEntry(class FX::FXString const &, class FX::FXString const &, char const *) const;

    // RVA: 0x2705 | Ordinal: 9990
        void readStringEntry(class FX::FXString const &, char const *, char const *) const;

    // RVA: 0x2706 | Ordinal: 9991
        void readStringEntry(char const *, char const *, char const *) const;

    // RVA: 0x2707 | Ordinal: 9992
        void readUIntEntry(class FX::FXString const &, class FX::FXString const &, unsigned int) const;

    // RVA: 0x2708 | Ordinal: 9993
        void readUIntEntry(class FX::FXString const &, char const *, unsigned int) const;

    // RVA: 0x2709 | Ordinal: 9994
        void readUIntEntry(char const *, char const *, unsigned int) const;

    // RVA: 0x270A | Ordinal: 9995
        void readULongEntry(class FX::FXString const &, class FX::FXString const &, unsigned __int64) const;

    // RVA: 0x270B | Ordinal: 9996
        void readULongEntry(class FX::FXString const &, char const *, unsigned __int64) const;

    // RVA: 0x270C | Ordinal: 9997
        void readULongEntry(char const *, char const *, unsigned __int64) const;

    // RVA: 0x2799 | Ordinal: 10138
        void resize(__int64);

    // RVA: 0x2C08 | Ordinal: 11273
        void setModified(bool);

    // RVA: 0x2F09 | Ordinal: 12042
        void unparse(class FX::FXString &) const;

    // RVA: 0x2F0B | Ordinal: 12044
        void unparseFile(class FX::FXString const &);

    // RVA: 0x2F29 | Ordinal: 12074
        void used(__int64);

    // RVA: 0x2F2A | Ordinal: 12075
        void used(void) const;

    // RVA: 0x2FDC | Ordinal: 12253
        void writeBoolEntry(class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0x2FDD | Ordinal: 12254
        void writeBoolEntry(class FX::FXString const &, char const *, bool);

    // RVA: 0x2FDE | Ordinal: 12255
        void writeBoolEntry(char const *, char const *, bool);

    // RVA: 0x2FE3 | Ordinal: 12260
        void writeColorEntry(class FX::FXString const &, class FX::FXString const &, unsigned int);

    // RVA: 0x2FE4 | Ordinal: 12261
        void writeColorEntry(class FX::FXString const &, char const *, unsigned int);

    // RVA: 0x2FE5 | Ordinal: 12262
        void writeColorEntry(char const *, char const *, unsigned int);

    // RVA: 0x2FE6 | Ordinal: 12263
        void writeFormatEntry(class FX::FXString const &, class FX::FXString const &, char const *, ...);

    // RVA: 0x2FE7 | Ordinal: 12264
        void writeFormatEntry(class FX::FXString const &, char const *, char const *, ...);

    // RVA: 0x2FE8 | Ordinal: 12265
        void writeFormatEntry(char const *, char const *, char const *, ...);

    // RVA: 0x2FE9 | Ordinal: 12266
        void writeIntEntry(class FX::FXString const &, class FX::FXString const &, int);

    // RVA: 0x2FEA | Ordinal: 12267
        void writeIntEntry(class FX::FXString const &, char const *, int);

    // RVA: 0x2FEB | Ordinal: 12268
        void writeIntEntry(char const *, char const *, int);

    // RVA: 0x2FEE | Ordinal: 12271
        void writeLongEntry(class FX::FXString const &, class FX::FXString const &, __int64);

    // RVA: 0x2FEF | Ordinal: 12272
        void writeLongEntry(class FX::FXString const &, char const *, __int64);

    // RVA: 0x2FF0 | Ordinal: 12273
        void writeLongEntry(char const *, char const *, __int64);

    // RVA: 0x2FF1 | Ordinal: 12274
        void writeRealEntry(class FX::FXString const &, class FX::FXString const &, double);

    // RVA: 0x2FF2 | Ordinal: 12275
        void writeRealEntry(class FX::FXString const &, char const *, double);

    // RVA: 0x2FF3 | Ordinal: 12276
        void writeRealEntry(char const *, char const *, double);

    // RVA: 0x2FF4 | Ordinal: 12277
        void writeStringEntry(class FX::FXString const &, class FX::FXString const &, char const *);

    // RVA: 0x2FF5 | Ordinal: 12278
        void writeStringEntry(class FX::FXString const &, char const *, char const *);

    // RVA: 0x2FF6 | Ordinal: 12279
        void writeStringEntry(char const *, char const *, char const *);

    // RVA: 0x2FF9 | Ordinal: 12282
        void writeUIntEntry(class FX::FXString const &, class FX::FXString const &, unsigned int);

    // RVA: 0x2FFA | Ordinal: 12283
        void writeUIntEntry(class FX::FXString const &, char const *, unsigned int);

    // RVA: 0x2FFB | Ordinal: 12284
        void writeUIntEntry(char const *, char const *, unsigned int);

    // RVA: 0x2FFC | Ordinal: 12285
        void writeULongEntry(class FX::FXString const &, class FX::FXString const &, unsigned __int64);

    // RVA: 0x2FFD | Ordinal: 12286
        void writeULongEntry(class FX::FXString const &, char const *, unsigned __int64);

    // RVA: 0x2FFE | Ordinal: 12287
        void writeULongEntry(char const *, char const *, unsigned __int64);

    // RVA: 0x4AE | Ordinal: 1199
        void _FXSettings(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSETTINGS_HPP
