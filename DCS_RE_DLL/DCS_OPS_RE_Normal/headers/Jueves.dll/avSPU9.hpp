#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avSPU9
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avSPU9
{
public:

    // RVA: 0xD1 | Ordinal: 210
        void avSPU9(void);

    // RVA: 0x30E | Ordinal: 783
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x334 | Ordinal: 821
        void doSetCommand(int, float, bool, int);

    // RVA: 0x430 | Ordinal: 1073
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x444 | Ordinal: 1093
        void l_easy_comm_override(struct lua_State *);

    // RVA: 0x445 | Ordinal: 1094
        void l_get_noise_level(struct lua_State *);

    // RVA: 0x446 | Ordinal: 1095
        void l_get_signal_level(struct lua_State *);

    // RVA: 0x447 | Ordinal: 1096
        void l_is_communicator_available(struct lua_State *);

    // RVA: 0x448 | Ordinal: 1097
        void l_make_setup_for_communicator(struct lua_State *);

    // RVA: 0x449 | Ordinal: 1098
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x44A | Ordinal: 1099
        void l_set_communicator(struct lua_State *);

    // RVA: 0x481 | Ordinal: 1154
        void onAmplifierPowerUp(struct lwl::CSignalInfo const *);

    // RVA: 0x482 | Ordinal: 1155
        void onAmplifierShutOff(struct lwl::CSignalInfo const *);

    // RVA: 0x4C8 | Ordinal: 1225
        void post_initialize(void);

    // RVA: 0x4E1 | Ordinal: 1250
        void recommutate(void);

    // RVA: 0x4F0 | Ordinal: 1265
        void release(void);

    // RVA: 0x522 | Ordinal: 1315
        void repair(void);

    // RVA: 0x53C | Ordinal: 1341
        void setCommunicator(enum cockpit::dcswwii::avSPU9::avIntercom_communicator);

    // RVA: 0x60C | Ordinal: 1549
        void start_transmission(bool, bool);

    // RVA: 0x613 | Ordinal: 1556
        void trySetCommunicator(unsigned int);

    // RVA: 0x637 | Ordinal: 1592
        void update(void);

    // RVA: 0x142 | Ordinal: 323
        void _avSPU9(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVSPU9_HPP
