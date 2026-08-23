#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wListener>>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wListener__
{
public:

    // RVA: 0x600 | Ordinal: 1537
        void add(class Link<class wListener>);

    // RVA: 0x644 | Ordinal: 1605
        void cancel(void);

    // RVA: 0x64C | Ordinal: 1613
        void checkEachIteration(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class Link<class wListener>>>> &);

    // RVA: 0x66B | Ordinal: 1644
        void clear(void);

    // RVA: 0x78D | Ordinal: 1934
        void evoke(void (__cdecl wListener::*)(void));

    // RVA: 0xA66 | Ordinal: 2663
        void merge(class ed::vector<class Link<class wListener>, class ed::allocator<class Link<class wListener>>> &, class ed::vector<class Link<class wListener>, class ed::allocator<class Link<class wListener>>> const &);

    // RVA: 0xA98 | Ordinal: 2713
        void onFinishEvoke(void);

    // RVA: 0xAA5 | Ordinal: 2726
        void onStartEvoke(void);

    // RVA: 0xB58 | Ordinal: 2905
        void remove(class ed::vector<class Link<class wListener>, class ed::allocator<class Link<class wListener>>> &, class ed::vector<class Link<class wListener>, class ed::allocator<class Link<class wListener>>> const &);

    // RVA: 0xB59 | Ordinal: 2906
        void remove(class Link<class wListener>);

    // RVA: 0xB5E | Ordinal: 2911
        void removeAll(class ed::vector<class Link<class wListener>, class ed::allocator<class Link<class wListener>>> &, class Link<class wListener> const &);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WLISTENER_HPP
