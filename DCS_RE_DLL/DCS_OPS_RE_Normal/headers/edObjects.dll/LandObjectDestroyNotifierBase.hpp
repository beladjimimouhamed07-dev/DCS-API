#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: LandObjectDestroyNotifierBase>>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class LandObjectDestroyNotifierBase__
{
public:

    // RVA: 0x14A | Ordinal: 331
        void add(class Link<class LandObjectDestroyNotifierBase>);

    // RVA: 0x151 | Ordinal: 338
        void cancel(void);

    // RVA: 0x15F | Ordinal: 352
        void checkEachIteration(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class Link<class LandObjectDestroyNotifierBase>>>> &);

    // RVA: 0x160 | Ordinal: 353
        void clear(void);

    // RVA: 0x165 | Ordinal: 358
        void evoke(void (__cdecl LandObjectDestroyNotifierBase::*)(void));

    // RVA: 0x19F | Ordinal: 416
        void merge(class ed::vector<class Link<class LandObjectDestroyNotifierBase>, class ed::allocator<class Link<class LandObjectDestroyNotifierBase>>> &, class ed::vector<class Link<class LandObjectDestroyNotifierBase>, class ed::allocator<class Link<class LandObjectDestroyNotifierBase>>> const &);

    // RVA: 0x1A6 | Ordinal: 423
        void onFinishEvoke(void);

    // RVA: 0x1A7 | Ordinal: 424
        void onStartEvoke(void);

    // RVA: 0x1AC | Ordinal: 429
        void remove(class ed::vector<class Link<class LandObjectDestroyNotifierBase>, class ed::allocator<class Link<class LandObjectDestroyNotifierBase>>> &, class ed::vector<class Link<class LandObjectDestroyNotifierBase>, class ed::allocator<class Link<class LandObjectDestroyNotifierBase>>> const &);

    // RVA: 0x1AD | Ordinal: 430
        void remove(class Link<class LandObjectDestroyNotifierBase>);

    // RVA: 0x1AE | Ordinal: 431
        void removeAll(class ed::vector<class Link<class LandObjectDestroyNotifierBase>, class ed::allocator<class Link<class LandObjectDestroyNotifierBase>>> &, class Link<class LandObjectDestroyNotifierBase> const &);
};

// DCS_OPS_RE_EDOBJECTS.DLL_LANDOBJECTDESTROYNOTIFIERBASE_HPP
