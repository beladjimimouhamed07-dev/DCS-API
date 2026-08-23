#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLUtil
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLUtil
{
public:

    // RVA: 0x3F | Ordinal: 64
        void ConvertUTF32ToUTF8(unsigned long, char *, int *);

    // RVA: 0x61 | Ordinal: 98
        void GetCharacterRef(char const *, char *, int *);

    // RVA: 0x74 | Ordinal: 117
        void IsNameChar(unsigned char);

    // RVA: 0x75 | Ordinal: 118
        void IsNameStartChar(unsigned char);

    // RVA: 0x76 | Ordinal: 119
        void IsUTF8Continuation(char);

    // RVA: 0x77 | Ordinal: 120
        void IsWhiteSpace(char);

    // RVA: 0xDB | Ordinal: 220
        void ReadBOM(char const *, bool *);

    // RVA: 0xF0 | Ordinal: 241
        void SetBoolSerialization(char const *, char const *);

    // RVA: 0x10A | Ordinal: 267
        void SkipWhiteSpace(char *, int *);

    // RVA: 0x10B | Ordinal: 268
        void SkipWhiteSpace(char const *, int *);

    // RVA: 0x10C | Ordinal: 269
        void StringEqual(char const *, char const *, int);

    // RVA: 0x10D | Ordinal: 270
        void ToBool(char const *, bool *);

    // RVA: 0x11C | Ordinal: 285
        void ToDouble(char const *, double *);

    // RVA: 0x124 | Ordinal: 293
        void ToFloat(char const *, float *);

    // RVA: 0x126 | Ordinal: 295
        void ToInt(char const *, int *);

    // RVA: 0x125 | Ordinal: 294
        void ToInt64(char const *, __int64 *);

    // RVA: 0x129 | Ordinal: 298
        void ToStr(int, char *, int);

    // RVA: 0x12A | Ordinal: 299
        void ToStr(unsigned int, char *, int);

    // RVA: 0x12B | Ordinal: 300
        void ToStr(float, char *, int);

    // RVA: 0x12C | Ordinal: 301
        void ToStr(double, char *, int);

    // RVA: 0x12D | Ordinal: 302
        void ToStr(__int64, char *, int);

    // RVA: 0x12E | Ordinal: 303
        void ToStr(bool, char *, int);

    // RVA: 0x13B | Ordinal: 316
        void ToUnsigned(char const *, unsigned int *);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLUTIL_HPP
