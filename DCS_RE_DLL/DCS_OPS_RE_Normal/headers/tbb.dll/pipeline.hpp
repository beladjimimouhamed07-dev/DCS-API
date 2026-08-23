#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tbb.dll
// Class: pipeline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace tbb {

class pipeline
{
public:

    // RVA: 0x16 | Ordinal: 23
        void add_filter(class tbb::filter &);

    // RVA: 0x29 | Ordinal: 42
        void clear(void);

    // RVA: 0x3D | Ordinal: 62
        void inject_token(class tbb::task &);

    // RVA: 0x5 | Ordinal: 6
        void pipeline(void);

    // RVA: 0xC8 | Ordinal: 201
        void run(unsigned __int64);

    // RVA: 0xC9 | Ordinal: 202
        void run(unsigned __int64, class tbb::task_group_context &);

    // RVA: 0xD | Ordinal: 14
        void _pipeline(void);
};

} // namespace tbb

// DCS_OPS_RE_TBB.DLL_PIPELINE_HPP
