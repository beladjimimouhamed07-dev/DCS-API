#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: CrewMemberAttachment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class CrewMemberAttachment
{
public:

    // RVA: 0xB | Ordinal: 12
        void CrewMemberAttachment(class AnimatorLogic::CrewMemberAttachment const &);

    // RVA: 0xC | Ordinal: 13
        void CrewMemberAttachment(class viObjectNode *);

    // RVA: 0xA6 | Ordinal: 167
        void get_connector_name(void);

    // RVA: 0xC0 | Ordinal: 193
        void get_name(void);

    // RVA: 0xE6 | Ordinal: 231
        void get_transform(void);

    // RVA: 0xE9 | Ordinal: 234
        void get_visible(void);

    // RVA: 0xF0 | Ordinal: 241
        void gui(void);

    // RVA: 0xF9 | Ordinal: 250
        void init(void);

    // RVA: 0x104 | Ordinal: 261
        void load(class Lua::Config &);

    // RVA: 0x118 | Ordinal: 281
        void on_set_visible(bool);

    // RVA: 0x11C | Ordinal: 285
        void parse(class Graphics::ModelInstance *, class wPosition3<float> const &, class Graphics::ModelParser &, class Graphics::effectState *);

    // RVA: 0x136 | Ordinal: 311
        void set_arg(int, float);

    // RVA: 0x14C | Ordinal: 333
        void set_owner(class viObjectNode *);

    // RVA: 0x158 | Ordinal: 345
        void set_visible(bool);

    // RVA: 0x173 | Ordinal: 372
        void update_pos(void);

    // RVA: 0x27 | Ordinal: 40
        void _CrewMemberAttachment(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_CREWMEMBERATTACHMENT_HPP
