#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Controller
{
public:

    // RVA: 0x70 | Ordinal: 113
        void Controller(class AI::Controller const &);

    // RVA: 0x71 | Ordinal: 114
        void Controller(void);

    // RVA: 0x822 | Ordinal: 2083
        void getDesc(void) const;

    // RVA: 0x8D4 | Ordinal: 2261
        void getOption(unsigned int) const;

    // RVA: 0x8FF | Ordinal: 2304
        void getTask(void) const;

    // RVA: 0x902 | Ordinal: 2307
        void getTaskState(void) const;

    // RVA: 0x974 | Ordinal: 2421
        void hasTask(void) const;

    // RVA: 0xA94 | Ordinal: 2709
        void onEvent(enum AI::Event, class Parameter const *);

    // RVA: 0xB31 | Ordinal: 2866
        void pushTask(class AI::Task const &);

    // RVA: 0xB32 | Ordinal: 2867
        void pushTask(class AI::Task *);

    // RVA: 0xB7F | Ordinal: 2944
        void resetTask(void);

    // RVA: 0xB9F | Ordinal: 2976
        void setCommand(class AI::Command const &);

    // RVA: 0xBA0 | Ordinal: 2977
        void setCommand(class AI::Command *);

    // RVA: 0xBBA | Ordinal: 3003
        void setOnOff(bool);

    // RVA: 0xBBB | Ordinal: 3004
        void setOption(unsigned int, class Parameter const &);

    // RVA: 0xBD3 | Ordinal: 3028
        void setTask(class AI::Task const &);

    // RVA: 0xBD4 | Ordinal: 3029
        void setTask(class AI::Task *);

    // RVA: 0xC3E | Ordinal: 3135
        void update(void);

    // RVA: 0x24F | Ordinal: 592
        void _Controller(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CONTROLLER_HPP
