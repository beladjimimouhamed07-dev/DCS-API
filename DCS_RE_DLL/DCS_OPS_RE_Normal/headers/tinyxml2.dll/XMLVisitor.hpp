#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tinyxml2.dll
// Class: XMLVisitor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tinyxml2 {

class XMLVisitor
{
public:

    // RVA: 0x146 | Ordinal: 327
        void Visit(class tinyxml2::XMLComment const &);

    // RVA: 0x147 | Ordinal: 328
        void Visit(class tinyxml2::XMLDeclaration const &);

    // RVA: 0x148 | Ordinal: 329
        void Visit(class tinyxml2::XMLText const &);

    // RVA: 0x149 | Ordinal: 330
        void Visit(class tinyxml2::XMLUnknown const &);

    // RVA: 0x14C | Ordinal: 333
        void VisitEnter(class tinyxml2::XMLDocument const &);

    // RVA: 0x14D | Ordinal: 334
        void VisitEnter(class tinyxml2::XMLElement const &, class tinyxml2::XMLAttribute const *);

    // RVA: 0x150 | Ordinal: 337
        void VisitExit(class tinyxml2::XMLDocument const &);

    // RVA: 0x151 | Ordinal: 338
        void VisitExit(class tinyxml2::XMLElement const &);

    // RVA: 0xF | Ordinal: 16
        void XMLVisitor(class tinyxml2::XMLVisitor const &);

    // RVA: 0x10 | Ordinal: 17
        void XMLVisitor(void);

    // RVA: 0x1A | Ordinal: 27
        void _XMLVisitor(void);
};

} // namespace tinyxml2

// DCS_OPS_RE_TINYXML2.DLL_XMLVISITOR_HPP
