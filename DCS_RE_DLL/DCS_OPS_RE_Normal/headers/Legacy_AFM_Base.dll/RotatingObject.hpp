#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: RotatingObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class RotatingObject
{
public:

    // RVA: 0x36C | Ordinal: 877
        void Construct(void);

    // RVA: 0x3CE | Ordinal: 975
        void Create(void);

    // RVA: 0x4CD | Ordinal: 1230
        void RotateObject(double);

    // RVA: 0xB1 | Ordinal: 178
        void RotatingObject(class AFM::RotatingObject &&);

    // RVA: 0xB2 | Ordinal: 179
        void RotatingObject(class AFM::RotatingObject const &);

    // RVA: 0xB3 | Ordinal: 180
        void RotatingObject(void);

    // RVA: 0x511 | Ordinal: 1298
        void calcAcceleration_ocsInPoint_ocs(double *, double *);

    // RVA: 0x554 | Ordinal: 1365
        void calcRotateSpeed_bcsByRotateSpeed_ocs(void);

    // RVA: 0x555 | Ordinal: 1366
        void calcRotateSpeed_ocsByRotateSpeed_bcs(void);

    // RVA: 0x55C | Ordinal: 1373
        void calcSpeed_ocsInPoint_ocs(double *, double *);

    // RVA: 0x720 | Ordinal: 1825
        void getRotateSpeedX_bcs(double *);

    // RVA: 0x721 | Ordinal: 1826
        void getRotateSpeedX_ocs(double *);

    // RVA: 0x722 | Ordinal: 1827
        void getRotateSpeedY_bcs(double *);

    // RVA: 0x723 | Ordinal: 1828
        void getRotateSpeedY_ocs(double *);

    // RVA: 0x724 | Ordinal: 1829
        void getRotateSpeedZ_bcs(double *);

    // RVA: 0x725 | Ordinal: 1830
        void getRotateSpeedZ_ocs(double *);

    // RVA: 0x726 | Ordinal: 1831
        void getRotateSpeed_bcs(double *);

    // RVA: 0x727 | Ordinal: 1832
        void getRotateSpeed_ocs(double *);

    // RVA: 0x8A4 | Ordinal: 2213
        void setRotateSpeedX_bcs(double);

    // RVA: 0x8A5 | Ordinal: 2214
        void setRotateSpeedX_ocs(double);

    // RVA: 0x8A6 | Ordinal: 2215
        void setRotateSpeedY_bcs(double);

    // RVA: 0x8A7 | Ordinal: 2216
        void setRotateSpeedY_ocs(double);

    // RVA: 0x8A8 | Ordinal: 2217
        void setRotateSpeedZ_bcs(double);

    // RVA: 0x8A9 | Ordinal: 2218
        void setRotateSpeedZ_ocs(double);

    // RVA: 0x8AA | Ordinal: 2219
        void setRotateSpeed_bcs(double *);

    // RVA: 0x8AB | Ordinal: 2220
        void setRotateSpeed_ocs(double *);

    // RVA: 0x13D | Ordinal: 318
        void _RotatingObject(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ROTATINGOBJECT_HPP
