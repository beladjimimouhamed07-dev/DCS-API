#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: Value
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ODDLParser {

class Value
{
public:

    // RVA: 0x6B | Ordinal: 108
        void Value(enum ODDLParser::Value::ValueType);

    // RVA: 0x282 | Ordinal: 643
        void dump(class ODDLParser::IOStreamBase &);

    // RVA: 0x28B | Ordinal: 652
        void getBool(void);

    // RVA: 0x292 | Ordinal: 659
        void getDouble(void) const;

    // RVA: 0x294 | Ordinal: 661
        void getFloat(void) const;

    // RVA: 0x299 | Ordinal: 666
        void getInt16(void);

    // RVA: 0x29A | Ordinal: 667
        void getInt32(void);

    // RVA: 0x29B | Ordinal: 668
        void getInt64(void);

    // RVA: 0x29C | Ordinal: 669
        void getInt8(void);

    // RVA: 0x2A5 | Ordinal: 678
        void getNext(void) const;

    // RVA: 0x2AB | Ordinal: 684
        void getRef(void) const;

    // RVA: 0x2AF | Ordinal: 688
        void getString(void) const;

    // RVA: 0x2B3 | Ordinal: 692
        void getUnsignedInt16(void) const;

    // RVA: 0x2B4 | Ordinal: 693
        void getUnsignedInt32(void) const;

    // RVA: 0x2B5 | Ordinal: 694
        void getUnsignedInt64(void) const;

    // RVA: 0x2B6 | Ordinal: 695
        void getUnsignedInt8(void) const;

    // RVA: 0x2E8 | Ordinal: 745
        void setBool(bool);

    // RVA: 0x2ED | Ordinal: 750
        void setDouble(double);

    // RVA: 0x2EE | Ordinal: 751
        void setFloat(float);

    // RVA: 0x2EF | Ordinal: 752
        void setInt16(short);

    // RVA: 0x2F0 | Ordinal: 753
        void setInt32(int);

    // RVA: 0x2F1 | Ordinal: 754
        void setInt64(__int64);

    // RVA: 0x2F2 | Ordinal: 755
        void setInt8(signed char);

    // RVA: 0x2F6 | Ordinal: 759
        void setNext(class ODDLParser::Value *);

    // RVA: 0x2F8 | Ordinal: 761
        void setRef(struct ODDLParser::Reference *);

    // RVA: 0x2FB | Ordinal: 764
        void setString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2FD | Ordinal: 766
        void setUnsignedInt16(unsigned short);

    // RVA: 0x2FE | Ordinal: 767
        void setUnsignedInt32(unsigned int);

    // RVA: 0x2FF | Ordinal: 768
        void setUnsignedInt64(unsigned __int64);

    // RVA: 0x300 | Ordinal: 769
        void setUnsignedInt8(unsigned char);

    // RVA: 0x304 | Ordinal: 773
        void size(void) const;

    // RVA: 0xA6 | Ordinal: 167
        void _Value(void);
};

} // namespace ODDLParser

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_VALUE_HPP
