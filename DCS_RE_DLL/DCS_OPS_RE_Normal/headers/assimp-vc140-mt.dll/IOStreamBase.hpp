#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: IOStreamBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ODDLParser {

class IOStreamBase
{
public:

    // RVA: 0x23 | Ordinal: 36
        void IOStreamBase(class ODDLParser::IOStreamBase const &);

    // RVA: 0x24 | Ordinal: 37
        void IOStreamBase(class ODDLParser::StreamFormatterBase *);

    // RVA: 0x274 | Ordinal: 629
        void close(void);

    // RVA: 0x2C5 | Ordinal: 710
        void isOpen(void) const;

    // RVA: 0x2CB | Ordinal: 716
        void open(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2E0 | Ordinal: 737
        void read(unsigned __int64, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x30A | Ordinal: 779
        void write(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x84 | Ordinal: 133
        void _IOStreamBase(void);
};

} // namespace ODDLParser

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_IOSTREAMBASE_HPP
