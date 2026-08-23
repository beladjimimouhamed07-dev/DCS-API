#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLElement
{
public:

    // RVA: 0x2F | Ordinal: 48
        void Accept(class tinyxml2::XMLVisitor *) const;

    // RVA: 0x32 | Ordinal: 51
        void Attribute(char const *, char const *) const;

    // RVA: 0x33 | Ordinal: 52
        void BoolAttribute(char const *, bool) const;

    // RVA: 0x34 | Ordinal: 53
        void BoolText(bool) const;

    // RVA: 0x3D | Ordinal: 62
        void ClosingType(void) const;

    // RVA: 0x40 | Ordinal: 65
        void CreateAttribute(void);

    // RVA: 0x43 | Ordinal: 68
        void DeleteAttribute(class tinyxml2::XMLAttribute *);

    // RVA: 0x44 | Ordinal: 69
        void DeleteAttribute(char const *);

    // RVA: 0x49 | Ordinal: 74
        void DoubleAttribute(char const *, double) const;

    // RVA: 0x4A | Ordinal: 75
        void DoubleText(double) const;

    // RVA: 0x52 | Ordinal: 83
        void FindAttribute(char const *);

    // RVA: 0x53 | Ordinal: 84
        void FindAttribute(char const *) const;

    // RVA: 0x54 | Ordinal: 85
        void FindOrCreateAttribute(char const *);

    // RVA: 0x55 | Ordinal: 86
        void FirstAttribute(void) const;

    // RVA: 0x5E | Ordinal: 95
        void FloatAttribute(char const *, float) const;

    // RVA: 0x5F | Ordinal: 96
        void FloatText(float) const;

    // RVA: 0x66 | Ordinal: 103
        void GetText(void) const;

    // RVA: 0x6E | Ordinal: 111
        void Int64Attribute(char const *, __int64) const;

    // RVA: 0x6F | Ordinal: 112
        void Int64Text(__int64) const;

    // RVA: 0x71 | Ordinal: 114
        void IntAttribute(char const *, int) const;

    // RVA: 0x72 | Ordinal: 115
        void IntText(int) const;

    // RVA: 0x85 | Ordinal: 134
        void Name(void) const;

    // RVA: 0x9A | Ordinal: 155
        void ParseAttributes(char *, int *);

    // RVA: 0x9E | Ordinal: 159
        void ParseDeep(char *, class tinyxml2::StrPair *, int *);

    // RVA: 0xC2 | Ordinal: 195
        void QueryAttribute(char const *, int *) const;

    // RVA: 0xC3 | Ordinal: 196
        void QueryAttribute(char const *, unsigned int *) const;

    // RVA: 0xC4 | Ordinal: 197
        void QueryAttribute(char const *, float *) const;

    // RVA: 0xC5 | Ordinal: 198
        void QueryAttribute(char const *, double *) const;

    // RVA: 0xC6 | Ordinal: 199
        void QueryAttribute(char const *, __int64 *) const;

    // RVA: 0xC7 | Ordinal: 200
        void QueryAttribute(char const *, bool *) const;

    // RVA: 0xC8 | Ordinal: 201
        void QueryBoolAttribute(char const *, bool *) const;

    // RVA: 0xC9 | Ordinal: 202
        void QueryBoolText(bool *) const;

    // RVA: 0xCB | Ordinal: 204
        void QueryDoubleAttribute(char const *, double *) const;

    // RVA: 0xCC | Ordinal: 205
        void QueryDoubleText(double *) const;

    // RVA: 0xCE | Ordinal: 207
        void QueryFloatAttribute(char const *, float *) const;

    // RVA: 0xCF | Ordinal: 208
        void QueryFloatText(float *) const;

    // RVA: 0xD1 | Ordinal: 210
        void QueryInt64Attribute(char const *, __int64 *) const;

    // RVA: 0xD2 | Ordinal: 211
        void QueryInt64Text(__int64 *) const;

    // RVA: 0xD4 | Ordinal: 213
        void QueryIntAttribute(char const *, int *) const;

    // RVA: 0xD5 | Ordinal: 214
        void QueryIntText(int *) const;

    // RVA: 0xD7 | Ordinal: 216
        void QueryStringAttribute(char const *, char const **) const;

    // RVA: 0xD8 | Ordinal: 217
        void QueryUnsignedAttribute(char const *, unsigned int *) const;

    // RVA: 0xD9 | Ordinal: 218
        void QueryUnsignedText(unsigned int *) const;

    // RVA: 0xE8 | Ordinal: 233
        void SetAttribute(char const *, char const *);

    // RVA: 0xE9 | Ordinal: 234
        void SetAttribute(char const *, int);

    // RVA: 0xEA | Ordinal: 235
        void SetAttribute(char const *, unsigned int);

    // RVA: 0xEB | Ordinal: 236
        void SetAttribute(char const *, float);

    // RVA: 0xEC | Ordinal: 237
        void SetAttribute(char const *, double);

    // RVA: 0xED | Ordinal: 238
        void SetAttribute(char const *, __int64);

    // RVA: 0xEE | Ordinal: 239
        void SetAttribute(char const *, bool);

    // RVA: 0xF4 | Ordinal: 245
        void SetName(char const *, bool);

    // RVA: 0xF5 | Ordinal: 246
        void SetText(int);

    // RVA: 0xF6 | Ordinal: 247
        void SetText(unsigned int);

    // RVA: 0xF7 | Ordinal: 248
        void SetText(float);

    // RVA: 0xF8 | Ordinal: 249
        void SetText(double);

    // RVA: 0xF9 | Ordinal: 250
        void SetText(char const *);

    // RVA: 0xFA | Ordinal: 251
        void SetText(__int64);

    // RVA: 0xFB | Ordinal: 252
        void SetText(bool);

    // RVA: 0x101 | Ordinal: 258
        void ShallowClone(class tinyxml2::XMLDocument *) const;

    // RVA: 0x107 | Ordinal: 264
        void ShallowEqual(class tinyxml2::XMLNode const *) const;

    // RVA: 0x11E | Ordinal: 287
        void ToElement(void);

    // RVA: 0x11F | Ordinal: 288
        void ToElement(void) const;

    // RVA: 0x13D | Ordinal: 318
        void UnsignedAttribute(char const *, unsigned int) const;

    // RVA: 0x13E | Ordinal: 319
        void UnsignedText(unsigned int) const;

    // RVA: 0x7 | Ordinal: 8
        void XMLElement(class tinyxml2::XMLDocument *);

    // RVA: 0x15 | Ordinal: 22
        void _XMLElement(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLELEMENT_HPP
