#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationBlockDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationBlockDescriptor
{
public:

    // RVA: 0x2FA | Ordinal: 763
        void debug_dump(void);

    // RVA: 0x3F0 | Ordinal: 1009
        void getInputPortType(class ed::basic_string<char> const &) const;

    // RVA: 0x3F3 | Ordinal: 1012
        void getInputPorts(void) const;

    // RVA: 0x426 | Ordinal: 1063
        void getInputPorts_(void) const;

    // RVA: 0x427 | Ordinal: 1064
        void getInputType(class ed::basic_string<char> const &) const;

    // RVA: 0x429 | Ordinal: 1066
        void getInputWireOffset(int) const;

    // RVA: 0x42A | Ordinal: 1067
        void getInputWires(void) const;

    // RVA: 0x45D | Ordinal: 1118
        void getInputWires_(void) const;

    // RVA: 0x461 | Ordinal: 1122
        void getLeadIndex(bool, bool, class ed::basic_string<char> const &, bool) const;

    // RVA: 0x462 | Ordinal: 1123
        void getLeadType(bool, bool, class ed::basic_string<char> const &) const;

    // RVA: 0x463 | Ordinal: 1124
        void getLeads(bool, bool) const;

    // RVA: 0x469 | Ordinal: 1130
        void getName(void) const;

    // RVA: 0x475 | Ordinal: 1142
        void getOutputPortType(class ed::basic_string<char> const &) const;

    // RVA: 0x476 | Ordinal: 1143
        void getOutputPorts(void) const;

    // RVA: 0x4A8 | Ordinal: 1193
        void getOutputPorts_(void) const;

    // RVA: 0x4A9 | Ordinal: 1194
        void getOutputType(class ed::basic_string<char> const &) const;

    // RVA: 0x4AB | Ordinal: 1196
        void getOutputWireOffset(int) const;

    // RVA: 0x4AC | Ordinal: 1197
        void getOutputWires(void) const;

    // RVA: 0x4DE | Ordinal: 1247
        void getOutputWires_(void) const;

    // RVA: 0x510 | Ordinal: 1297
        void getParametersList(void);

    // RVA: 0x524 | Ordinal: 1317
        void hasInputPort(class ed::basic_string<char> const &) const;

    // RVA: 0x525 | Ordinal: 1318
        void hasInputWire(class ed::basic_string<char> const &) const;

    // RVA: 0x526 | Ordinal: 1319
        void hasLead(bool, bool, class ed::basic_string<char> const &) const;

    // RVA: 0x527 | Ordinal: 1320
        void hasOutputPort(class ed::basic_string<char> const &) const;

    // RVA: 0x528 | Ordinal: 1321
        void hasOutputWire(class ed::basic_string<char> const &) const;

    // RVA: 0x533 | Ordinal: 1332
        void isOfType(enum weBlockType) const;

    // RVA: 0x574 | Ordinal: 1397
        void serialize(class wBlockSerializer &);

    // RVA: 0x58A | Ordinal: 1419
        void setInputWireOffsets(int *);

    // RVA: 0x58E | Ordinal: 1423
        void setName(class ed::basic_string<char> const &);

    // RVA: 0x591 | Ordinal: 1426
        void setOutputWireOffsets(int *);

    // RVA: 0x596 | Ordinal: 1431
        void setScheme(class wSimulationSystemScheme *);

    // RVA: 0x110 | Ordinal: 273
        void wSimulationBlockDescriptor(void);

    // RVA: 0x111 | Ordinal: 274
        void wSimulationBlockDescriptor(class wSimulationBlockDescriptor const &);

    // RVA: 0x16B | Ordinal: 364
        void _wSimulationBlockDescriptor(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONBLOCKDESCRIPTOR_HPP
