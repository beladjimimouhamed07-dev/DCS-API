#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShaderNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShaderNode
{
public:

    // RVA: 0x98D | Ordinal: 2446
        void addPort(class QShaderNodePort const &);

    // RVA: 0x99A | Ordinal: 2459
        void addRule(class QShaderFormat const &, class QShaderNode::Rule const &);

    // RVA: 0xA3C | Ordinal: 2621
        void availableFormats(void) const;

    // RVA: 0xBBD | Ordinal: 3006
        void clearParameter(class QString const &);

    // RVA: 0x511F | Ordinal: 20768
        void layers(void) const;

    // RVA: 0x5400 | Ordinal: 21505
        void parameter(class QString const &) const;

    // RVA: 0x5401 | Ordinal: 21506
        void parameterNames(void) const;

    // RVA: 0x5487 | Ordinal: 21640
        void ports(void) const;

    // RVA: 0x56E1 | Ordinal: 22242
        void removePort(class QShaderNodePort const &);

    // RVA: 0x56E8 | Ordinal: 22249
        void removeRule(class QShaderFormat const &);

    // RVA: 0x578E | Ordinal: 22415
        void rule(class QShaderFormat const &) const;

    // RVA: 0x5A2A | Ordinal: 23083
        void setLayers(class QStringList const &);

    // RVA: 0x5AE2 | Ordinal: 23267
        void setParameter(class QString const &, class QVariant const &);

    // RVA: 0x5C8F | Ordinal: 23696
        void setUuid(class QUuid const &);

    // RVA: 0x606F | Ordinal: 24688
        void type(void) const;

    // RVA: 0x60E6 | Ordinal: 24807
        void uuid(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADERNODE_HPP
