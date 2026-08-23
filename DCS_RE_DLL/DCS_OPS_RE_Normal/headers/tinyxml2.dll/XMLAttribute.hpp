#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLAttribute
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLAttribute
{
public:

    // RVA: 0x35 | Ordinal: 54
        void BoolValue(void) const;

    // RVA: 0x4B | Ordinal: 76
        void DoubleValue(void) const;

    // RVA: 0x60 | Ordinal: 97
        void FloatValue(void) const;

    // RVA: 0x64 | Ordinal: 101
        void GetLineNum(void) const;

    // RVA: 0x70 | Ordinal: 113
        void Int64Value(void) const;

    // RVA: 0x73 | Ordinal: 116
        void IntValue(void) const;

    // RVA: 0x84 | Ordinal: 133
        void Name(void) const;

    // RVA: 0x8B | Ordinal: 140
        void Next(void) const;

    // RVA: 0x9B | Ordinal: 156
        void ParseDeep(char *, bool, int *);

    // RVA: 0xCA | Ordinal: 203
        void QueryBoolValue(bool *) const;

    // RVA: 0xCD | Ordinal: 206
        void QueryDoubleValue(double *) const;

    // RVA: 0xD0 | Ordinal: 209
        void QueryFloatValue(float *) const;

    // RVA: 0xD3 | Ordinal: 212
        void QueryInt64Value(__int64 *) const;

    // RVA: 0xD6 | Ordinal: 215
        void QueryIntValue(int *) const;

    // RVA: 0xDA | Ordinal: 219
        void QueryUnsignedValue(unsigned int *) const;

    // RVA: 0xE1 | Ordinal: 226
        void SetAttribute(int);

    // RVA: 0xE2 | Ordinal: 227
        void SetAttribute(unsigned int);

    // RVA: 0xE3 | Ordinal: 228
        void SetAttribute(float);

    // RVA: 0xE4 | Ordinal: 229
        void SetAttribute(double);

    // RVA: 0xE5 | Ordinal: 230
        void SetAttribute(char const *);

    // RVA: 0xE6 | Ordinal: 231
        void SetAttribute(__int64);

    // RVA: 0xE7 | Ordinal: 232
        void SetAttribute(bool);

    // RVA: 0xF3 | Ordinal: 244
        void SetName(char const *);

    // RVA: 0x13F | Ordinal: 320
        void UnsignedValue(void) const;

    // RVA: 0x140 | Ordinal: 321
        void Value(void) const;

    // RVA: 0x0 | Ordinal: 1
        void XMLAttribute(void);

    // RVA: 0x11 | Ordinal: 18
        void _XMLAttribute(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLATTRIBUTE_HPP
