#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: gauge_input_adapter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class gauge_input_adapter
{
public:

    // RVA: 0x271 | Ordinal: 626
        void gauge_input_adapter(class cockpit::gauge_input_adapter &&);

    // RVA: 0x272 | Ordinal: 627
        void gauge_input_adapter(class cockpit::gauge_input_adapter const &);

    // RVA: 0x273 | Ordinal: 628
        void gauge_input_adapter(void);

    // RVA: 0xEA0 | Ordinal: 3745
        void get_animation(double) const;

    // RVA: 0xFDF | Ordinal: 4064
        void get_native(double) const;

    // RVA: 0x1353 | Ordinal: 4948
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x1869 | Ordinal: 6250
        void set_defalut(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0x3B4 | Ordinal: 949
        void _gauge_input_adapter(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GAUGE_INPUT_ADAPTER_HPP
