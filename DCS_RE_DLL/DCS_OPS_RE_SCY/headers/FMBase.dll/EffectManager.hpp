#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: EffectManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class EffectManager
{
public:

    // RVA: 0x482 | Ordinal: 1155
        void dequeue(class std::function<void __cdecl(struct EagleFM::EffectManager::Effect &)> const &);

    // RVA: 0x7AD | Ordinal: 1966
        void pushEffect(enum WorldGeneral::EffectType);

    // RVA: 0x7AE | Ordinal: 1967
        void pushEffect(enum WorldGeneral::EffectType, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0x7AF | Ordinal: 1968
        void pushEffect(enum WorldGeneral::EffectType, double);

    // RVA: 0x7B2 | Ordinal: 1971
        void pushSoundEffect(int, int, double, double, double, double, double);

    // RVA: 0x7B3 | Ordinal: 1972
        void pushSoundEffect(int, double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_EFFECTMANAGER_HPP
