#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: OpenDDLParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ODDLParser {

class OpenDDLParser
{
public:

    // RVA: 0x3E | Ordinal: 63
        void OpenDDLParser(char const *, unsigned __int64);

    // RVA: 0x3F | Ordinal: 64
        void OpenDDLParser(void);

    // RVA: 0x272 | Ordinal: 627
        void clear(void);

    // RVA: 0x286 | Ordinal: 647
        void exportContext(struct ODDLParser::Context *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x28C | Ordinal: 653
        void getBuffer(void) const;

    // RVA: 0x28D | Ordinal: 654
        void getBufferSize(void) const;

    // RVA: 0x290 | Ordinal: 657
        void getContext(void) const;

    // RVA: 0x29D | Ordinal: 670
        void getLogCallback(void) const)(enum ODDLParser::LogSeverity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2AD | Ordinal: 686
        void getRoot(void) const;

    // RVA: 0x2BC | Ordinal: 701
        void getVersion(void);

    // RVA: 0x2CA | Ordinal: 715
        void normalizeBuffer(class std::vector<char, class std::allocator<char>> &);

    // RVA: 0x2CC | Ordinal: 717
        void parse(void);

    // RVA: 0x2CD | Ordinal: 718
        void parseBooleanLiteral(char *, char *, class ODDLParser::Value **);

    // RVA: 0x2CE | Ordinal: 719
        void parseDataArrayList(char *, char *, enum ODDLParser::Value::ValueType, struct ODDLParser::DataArrayList **);

    // RVA: 0x2CF | Ordinal: 720
        void parseDataList(char *, char *, enum ODDLParser::Value::ValueType, class ODDLParser::Value **, unsigned __int64 &, struct ODDLParser::Reference **, unsigned __int64 &);

    // RVA: 0x2D1 | Ordinal: 722
        void parseFloatingLiteral(char *, char *, class ODDLParser::Value **, enum ODDLParser::Value::ValueType);

    // RVA: 0x2D2 | Ordinal: 723
        void parseHeader(char *, char *);

    // RVA: 0x2D3 | Ordinal: 724
        void parseHexaLiteral(char *, char *, class ODDLParser::Value **);

    // RVA: 0x2D4 | Ordinal: 725
        void parseIdentifier(char *, char *, struct ODDLParser::Text **);

    // RVA: 0x2D5 | Ordinal: 726
        void parseIntegerLiteral(char *, char *, class ODDLParser::Value **, enum ODDLParser::Value::ValueType);

    // RVA: 0x2D6 | Ordinal: 727
        void parseName(char *, char *, struct ODDLParser::Name **);

    // RVA: 0x2D7 | Ordinal: 728
        void parseNextNode(char *, char *);

    // RVA: 0x2D8 | Ordinal: 729
        void parsePrimitiveDataType(char *, char *, enum ODDLParser::Value::ValueType &, unsigned __int64 &);

    // RVA: 0x2D9 | Ordinal: 730
        void parseProperty(char *, char *, struct ODDLParser::Property **);

    // RVA: 0x2DA | Ordinal: 731
        void parseReference(char *, char *, class std::vector<struct ODDLParser::Name *, class std::allocator<struct ODDLParser::Name *>> &);

    // RVA: 0x2DB | Ordinal: 732
        void parseStringLiteral(char *, char *, class ODDLParser::Value **);

    // RVA: 0x2DC | Ordinal: 733
        void parseStructure(char *, char *);

    // RVA: 0x2DD | Ordinal: 734
        void parseStructureBody(char *, char *, bool &);

    // RVA: 0x2DE | Ordinal: 735
        void popNode(void);

    // RVA: 0x2DF | Ordinal: 736
        void pushNode(class ODDLParser::DDLNode *);

    // RVA: 0x2EA | Ordinal: 747
        void setBuffer(class std::vector<char, class std::allocator<char>> const &);

    // RVA: 0x2EB | Ordinal: 748
        void setBuffer(char const *, unsigned __int64);

    // RVA: 0x2F3 | Ordinal: 756
        void setLogCallback(void (__cdecl *)(enum ODDLParser::LogSeverity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &));

    // RVA: 0x306 | Ordinal: 775
        void top(void);

    // RVA: 0x91 | Ordinal: 146
        void _OpenDDLParser(void);
};

} // namespace ODDLParser

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_OPENDDLPARSER_HPP
