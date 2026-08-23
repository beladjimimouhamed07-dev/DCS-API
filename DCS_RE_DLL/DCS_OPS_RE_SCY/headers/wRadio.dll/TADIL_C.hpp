#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: TADIL_C
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TADIL_C
{
public:

    // RVA: 0x279 | Ordinal: 634
        void getIntervalBetweenTimeSlots(enum TADIL_C::RecurrenceRateNumber);

    // RVA: 0x2A6 | Ordinal: 679
        void getNumberOfAvailableTimeSlotsPerEpoch(enum TADIL_C::RecurrenceRateNumber);

    // RVA: 0x2B3 | Ordinal: 692
        void getRRN(enum TADIL_C::C_Message);

    // RVA: 0x2D9 | Ordinal: 730
        void getTimeIntervalBetweenTimeSlots(enum TADIL_C::RecurrenceRateNumber);

    // RVA: 0x13A | Ordinal: 315
        void operator__(class ed::basic_string<char> &, struct TADIL_C::ACLS_Message5 const &);

    // RVA: 0x13B | Ordinal: 316
        void operator__(class ed::basic_string<char> &, struct TADIL_C::ACLS_Message6 const &);

    // RVA: 0x13C | Ordinal: 317
        void operator__(class ed::basic_string<char> &, struct TADIL_C::ACLS_PreciseControl const &);

    // RVA: 0x13D | Ordinal: 318
        void operator__(class ed::basic_string<char> &, struct TADIL_C::ACLS_UTM_Broadcast const &);

    // RVA: 0x13E | Ordinal: 319
        void operator__(class ed::basic_string<char> &, struct TADIL_C::ACLS_Vector const &);

    // RVA: 0x12E | Ordinal: 303
        void operator__(class TADIL_C::msgPacker const &, struct TADIL_C::ACLS_Message5 &);

    // RVA: 0x12F | Ordinal: 304
        void operator__(class TADIL_C::msgPacker const &, struct TADIL_C::ACLS_Message6 &);

    // RVA: 0x130 | Ordinal: 305
        void operator__(class TADIL_C::msgPacker const &, struct TADIL_C::ACLS_PreciseControl &);

    // RVA: 0x131 | Ordinal: 306
        void operator__(class TADIL_C::msgPacker const &, struct TADIL_C::ACLS_UTM_Broadcast &);

    // RVA: 0x132 | Ordinal: 307
        void operator__(class TADIL_C::msgPacker const &, struct TADIL_C::ACLS_Vector &);
};

// DCS_OPS_RE_WRADIO.DLL_TADIL_C_HPP
