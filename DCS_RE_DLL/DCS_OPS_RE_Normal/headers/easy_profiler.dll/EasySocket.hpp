#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: EasySocket
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class EasySocket
{
public:

    // RVA: 0x9 | Ordinal: 10
        void EasySocket(void);

    // RVA: 0x20 | Ordinal: 33
        void accept(void);

    // RVA: 0x22 | Ordinal: 35
        void bind(unsigned short);

    // RVA: 0x23 | Ordinal: 36
        void checkResult(int);

    // RVA: 0x24 | Ordinal: 37
        void checkSocket(unsigned __int64) const;

    // RVA: 0x27 | Ordinal: 40
        void connect(void);

    // RVA: 0x37 | Ordinal: 56
        void flush(void);

    // RVA: 0x3A | Ordinal: 59
        void init(void);

    // RVA: 0x3C | Ordinal: 61
        void isConnected(void) const;

    // RVA: 0x3D | Ordinal: 62
        void isDisconnected(void) const;

    // RVA: 0x3F | Ordinal: 64
        void listen(int);

    // RVA: 0x44 | Ordinal: 69
        void receive(void *, unsigned __int64);

    // RVA: 0x45 | Ordinal: 70
        void send(void const *, unsigned __int64);

    // RVA: 0x48 | Ordinal: 73
        void setAddress(char const *, unsigned short);

    // RVA: 0x49 | Ordinal: 74
        void setBlocking(unsigned __int64, bool);

    // RVA: 0x4B | Ordinal: 76
        void setReceiveTimeout(int);

    // RVA: 0x51 | Ordinal: 82
        void state(void) const;

    // RVA: 0x12 | Ordinal: 19
        void _EasySocket(void);
};

// DCS_OPS_RE_EASY_PROFILER.DLL_EASYSOCKET_HPP
