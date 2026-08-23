#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: StyleSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QCss {

class StyleSelector
{
public:

    // RVA: 0x3D9 | Ordinal: 986
        void StyleSelector(class QCss::StyleSelector const &);

    // RVA: 0x3DA | Ordinal: 987
        void StyleSelector(void);

    // RVA: 0xA62 | Ordinal: 2659
        void basicSelectorMatches(struct QCss::BasicSelector const &, union QCss::StyleSelector::NodePtr);

    // RVA: 0xDBD | Ordinal: 3518
        void declarationsForNode(union QCss::StyleSelector::NodePtr, char const *);

    // RVA: 0x522C | Ordinal: 21037
        void matchRule(union QCss::StyleSelector::NodePtr, struct QCss::StyleRule const &, enum QCss::StyleSheetOrigin, int, class QMultiMap<unsigned int, struct QCss::StyleRule> *);

    // RVA: 0x5351 | Ordinal: 21330
        void nodeIds(union QCss::StyleSelector::NodePtr) const;

    // RVA: 0x5352 | Ordinal: 21331
        void nodeNameEquals(union QCss::StyleSelector::NodePtr, class QString const &) const;

    // RVA: 0x57F8 | Ordinal: 22521
        void selectorMatches(struct QCss::Selector const &, union QCss::StyleSelector::NodePtr);

    // RVA: 0x5E3B | Ordinal: 24124
        void styleRulesForNode(union QCss::StyleSelector::NodePtr);

    // RVA: 0x55B | Ordinal: 1372
        void _StyleSelector(void);
};

} // namespace QCss

// DCS_OPS_RE_QT5GUI.DLL_STYLESELECTOR_HPP
