#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: TreeNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class TreeNode
{
public:

    // RVA: 0xC | Ordinal: 13
        void TreeNode(int, int, class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, unsigned __int64);

    // RVA: 0xD | Ordinal: 14
        void TreeNode(int, int, char const *, char const *, int, unsigned __int64);

    // RVA: 0xE | Ordinal: 15
        void TreeNode(void);

    // RVA: 0x172 | Ordinal: 371
        void getParams(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> &) const;

    // RVA: 0x173 | Ordinal: 372
        void getParams(class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &) const;

    // RVA: 0x1EA | Ordinal: 491
        void removeChild(int);

    // RVA: 0x232 | Ordinal: 563
        void setParams(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x233 | Ordinal: 564
        void setParams(class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_TREENODE_HPP
