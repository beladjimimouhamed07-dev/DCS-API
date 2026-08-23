#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: md5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class md5
{
public:

    // RVA: 0x160 | Ordinal: 353
        void calc(void const *, unsigned __int64);

    // RVA: 0x16F | Ordinal: 368
        void clear(void);

    // RVA: 0x97 | Ordinal: 152
        void md5(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x98 | Ordinal: 153
        void md5(void const *, unsigned __int64);

    // RVA: 0x99 | Ordinal: 154
        void md5(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x9A | Ordinal: 155
        void md5(class ed::span<unsigned char const, 16>);

    // RVA: 0x9B | Ordinal: 156
        void md5(void);

    // RVA: 0x3B3 | Ordinal: 948
        void str(void) const;
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_MD5_HPP
