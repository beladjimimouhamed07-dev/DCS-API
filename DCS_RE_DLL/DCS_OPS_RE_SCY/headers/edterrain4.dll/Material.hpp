#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Material
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class Material
{
public:

    // RVA: 0x11C | Ordinal: 285
        void AddParameters(class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &);

    // RVA: 0x11E | Ordinal: 287
        void CopyFrom(struct landscape4::Material const &);

    // RVA: 0x147 | Ordinal: 328
        void addParam(char const *, char const *);

    // RVA: 0x20E | Ordinal: 527
        void dump(char const *) const;

    // RVA: 0x235 | Ordinal: 566
        void dumpParameters(void) const;

    // RVA: 0x247 | Ordinal: 584
        void eraseParameter(char const *);

    // RVA: 0x35B | Ordinal: 860
        void getParameter(class ed::basic_string<char> const &);

    // RVA: 0x35C | Ordinal: 861
        void getParameter(char const *);

    // RVA: 0x35D | Ordinal: 862
        void getParameter(class ed::basic_string<char> const &) const;

    // RVA: 0x35E | Ordinal: 863
        void getParameter(char const *) const;

    // RVA: 0x35F | Ordinal: 864
        void getParameter(char const *, int &) const;

    // RVA: 0x360 | Ordinal: 865
        void getParameter(char const *, float &) const;

    // RVA: 0x361 | Ordinal: 866
        void getParameter(char const *, double &) const;

    // RVA: 0x362 | Ordinal: 867
        void getParameter(char const *, class ed::basic_string<char> &) const;

    // RVA: 0x363 | Ordinal: 868
        void getParameter(char const *, bool &) const;

    // RVA: 0x364 | Ordinal: 869
        void getParameters(class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &) const;

    // RVA: 0x3B8 | Ordinal: 953
        void getShaderDefines(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x115 | Ordinal: 278
        void operator_(struct landscape4::Material const &) const;
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_MATERIAL_HPP
