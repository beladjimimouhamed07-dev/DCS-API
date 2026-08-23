#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HeatExchangeManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Heat {

class HeatExchangeManager
{
public:

    // RVA: 0x9C | Ordinal: 157
        void HeatExchangeManager(void);

    // RVA: 0x9D | Ordinal: 158
        void HeatExchangeManager(class EagleFM::Heat::HeatExchangeManager const &);

    // RVA: 0x454 | Ordinal: 1109
        void change_conductivity(char const *, char const *, char const *, double);

    // RVA: 0x48E | Ordinal: 1167
        void doSimulate(void);

    // RVA: 0x4CE | Ordinal: 1231
        void getAtmoBody(void);

    // RVA: 0x579 | Ordinal: 1402
        void getG(class ed::vector<class ed::vector<double, class ed::allocator<double>>, class ed::allocator<class ed::vector<double, class ed::allocator<double>>>> const &, unsigned __int64, unsigned __int64) const;

    // RVA: 0x6FD | Ordinal: 1790
        void get_group(char const *) const;

    // RVA: 0x76F | Ordinal: 1904
        void init_for_atmosphere(char const *, class EagleFM::DynamicBody *, bool);

    // RVA: 0x776 | Ordinal: 1911
        void instance(void);

    // RVA: 0x7BD | Ordinal: 1982
        void register_group(char const *, class EagleFM::Heat::HeatGroup);

    // RVA: 0x7BE | Ordinal: 1983
        void release(void);

    // RVA: 0x7BF | Ordinal: 1984
        void remove_c(struct std::pair<class ed::basic_string<char> const, class EagleFM::Heat::HeatGroup> &, unsigned __int64);

    // RVA: 0x7C0 | Ordinal: 1985
        void remove_group(char const *);

    // RVA: 0x93A | Ordinal: 2363
        void set_external_flow(char const *, class ed::vector<double, class ed::allocator<double>> &);

    // RVA: 0x1AB | Ordinal: 428
        void _HeatExchangeManager(void);
};

} // namespace Heat
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HEATEXCHANGEMANAGER_HPP
