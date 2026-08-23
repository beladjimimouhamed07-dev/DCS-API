#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CBlockPool<0>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CBlockPool_0_
{
public:

    // RVA: 0xD | Ordinal: 14
        void CBlockPool_0_(class SpeedTree::CBlockPool<0> const &);

    // RVA: 0xE | Ordinal: 15
        void CBlockPool_0_(unsigned __int64, unsigned __int64);

    // RVA: 0x1E4 | Ordinal: 485
        void GrabBlock(void);

    // RVA: 0x242 | Ordinal: 579
        void ReleaseBlock(void *&);

    // RVA: 0x246 | Ordinal: 583
        void ResolveBlock(void *const &) const;

    // RVA: 0x2BB | Ordinal: 700
        void clear(bool);

    // RVA: 0x2D7 | Ordinal: 728
        void resize(unsigned __int64);

    // RVA: 0x7D | Ordinal: 126
        void _CBlockPool_0_(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CBLOCKPOOL_0_HPP
