#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: OpenDDLExport
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ODDLParser {

class OpenDDLExport
{
public:

    // RVA: 0x3D | Ordinal: 62
        void OpenDDLExport(class ODDLParser::IOStreamBase *);

    // RVA: 0x285 | Ordinal: 646
        void exportContext(struct ODDLParser::Context *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2BD | Ordinal: 702
        void handleNode(class ODDLParser::DDLNode *);

    // RVA: 0x30B | Ordinal: 780
        void writeNode(class ODDLParser::DDLNode *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x30C | Ordinal: 781
        void writeNodeHeader(class ODDLParser::DDLNode *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x30D | Ordinal: 782
        void writeProperties(class ODDLParser::DDLNode *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x30E | Ordinal: 783
        void writeToStream(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x30F | Ordinal: 784
        void writeValue(class ODDLParser::Value *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x310 | Ordinal: 785
        void writeValueArray(struct ODDLParser::DataArrayList *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x311 | Ordinal: 786
        void writeValueType(enum ODDLParser::Value::ValueType, unsigned __int64, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x90 | Ordinal: 145
        void _OpenDDLExport(void);
};

} // namespace ODDLParser

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_OPENDDLEXPORT_HPP
