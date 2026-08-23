#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: CrewMemberAttachmentNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class CrewMemberAttachmentNode
{
public:

    // RVA: 0xD | Ordinal: 14
        void CrewMemberAttachmentNode(class AnimatorLogic::CrewMemberAttachmentNode const &);

    // RVA: 0xE | Ordinal: 15
        void CrewMemberAttachmentNode(class viObjectNode *);

    // RVA: 0x61 | Ordinal: 98
        void GetPoint(void);

    // RVA: 0x63 | Ordinal: 100
        void GetPosition(void);

    // RVA: 0x65 | Ordinal: 102
        void OnParentDeath(void);

    // RVA: 0x67 | Ordinal: 104
        void Position(double);

    // RVA: 0x90 | Ordinal: 145
        void full_local_transform_from(class Graphics::ModelInstance *);

    // RVA: 0x92 | Ordinal: 147
        void getPositionInParentSpace(double);

    // RVA: 0x119 | Ordinal: 282
        void on_set_visible(bool);

    // RVA: 0x28 | Ordinal: 41
        void _CrewMemberAttachmentNode(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_CREWMEMBERATTACHMENTNODE_HPP
