#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDataTarget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDataTarget
{
public:

    // RVA: 0xB4 | Ordinal: 181
        void FXDataTarget(char &, class FX::FXObject *, unsigned int);

    // RVA: 0xB5 | Ordinal: 182
        void FXDataTarget(unsigned char &, class FX::FXObject *, unsigned int);

    // RVA: 0xB6 | Ordinal: 183
        void FXDataTarget(short &, class FX::FXObject *, unsigned int);

    // RVA: 0xB7 | Ordinal: 184
        void FXDataTarget(unsigned short &, class FX::FXObject *, unsigned int);

    // RVA: 0xB8 | Ordinal: 185
        void FXDataTarget(int &, class FX::FXObject *, unsigned int);

    // RVA: 0xB9 | Ordinal: 186
        void FXDataTarget(unsigned int &, class FX::FXObject *, unsigned int);

    // RVA: 0xBA | Ordinal: 187
        void FXDataTarget(float &, class FX::FXObject *, unsigned int);

    // RVA: 0xBB | Ordinal: 188
        void FXDataTarget(double &, class FX::FXObject *, unsigned int);

    // RVA: 0xBC | Ordinal: 189
        void FXDataTarget(class FX::FXString &, class FX::FXObject *, unsigned int);

    // RVA: 0xBD | Ordinal: 190
        void FXDataTarget(__int64 &, class FX::FXObject *, unsigned int);

    // RVA: 0xBE | Ordinal: 191
        void FXDataTarget(unsigned __int64 &, class FX::FXObject *, unsigned int);

    // RVA: 0xBF | Ordinal: 192
        void FXDataTarget(bool &, class FX::FXObject *, unsigned int);

    // RVA: 0xC0 | Ordinal: 193
        void FXDataTarget(class FX::FXObject *, unsigned int);

    // RVA: 0xC1 | Ordinal: 194
        void FXDataTarget(void);

    // RVA: 0xB3A | Ordinal: 2875
        void connect(char &);

    // RVA: 0xB3B | Ordinal: 2876
        void connect(char &, class FX::FXObject *, unsigned int);

    // RVA: 0xB3C | Ordinal: 2877
        void connect(unsigned char &);

    // RVA: 0xB3D | Ordinal: 2878
        void connect(unsigned char &, class FX::FXObject *, unsigned int);

    // RVA: 0xB3E | Ordinal: 2879
        void connect(short &);

    // RVA: 0xB3F | Ordinal: 2880
        void connect(short &, class FX::FXObject *, unsigned int);

    // RVA: 0xB40 | Ordinal: 2881
        void connect(unsigned short &);

    // RVA: 0xB41 | Ordinal: 2882
        void connect(unsigned short &, class FX::FXObject *, unsigned int);

    // RVA: 0xB42 | Ordinal: 2883
        void connect(int &);

    // RVA: 0xB43 | Ordinal: 2884
        void connect(int &, class FX::FXObject *, unsigned int);

    // RVA: 0xB44 | Ordinal: 2885
        void connect(unsigned int &);

    // RVA: 0xB45 | Ordinal: 2886
        void connect(unsigned int &, class FX::FXObject *, unsigned int);

    // RVA: 0xB46 | Ordinal: 2887
        void connect(float &);

    // RVA: 0xB47 | Ordinal: 2888
        void connect(float &, class FX::FXObject *, unsigned int);

    // RVA: 0xB48 | Ordinal: 2889
        void connect(double &);

    // RVA: 0xB49 | Ordinal: 2890
        void connect(double &, class FX::FXObject *, unsigned int);

    // RVA: 0xB4A | Ordinal: 2891
        void connect(class FX::FXString &);

    // RVA: 0xB4B | Ordinal: 2892
        void connect(class FX::FXString &, class FX::FXObject *, unsigned int);

    // RVA: 0xB4C | Ordinal: 2893
        void connect(__int64 &);

    // RVA: 0xB4D | Ordinal: 2894
        void connect(__int64 &, class FX::FXObject *, unsigned int);

    // RVA: 0xB4E | Ordinal: 2895
        void connect(unsigned __int64 &);

    // RVA: 0xB4F | Ordinal: 2896
        void connect(unsigned __int64 &, class FX::FXObject *, unsigned int);

    // RVA: 0xB50 | Ordinal: 2897
        void connect(bool &);

    // RVA: 0xB51 | Ordinal: 2898
        void connect(bool &, class FX::FXObject *, unsigned int);

    // RVA: 0xB52 | Ordinal: 2899
        void connect(class FX::FXObject *, unsigned int);

    // RVA: 0xB53 | Ordinal: 2900
        void connect(void);

    // RVA: 0x10F7 | Ordinal: 4344
        void getData(void) const;

    // RVA: 0x13BD | Ordinal: 5054
        void getMetaClass(void) const;

    // RVA: 0x159A | Ordinal: 5531
        void getSelector(void) const;

    // RVA: 0x15EA | Ordinal: 5611
        void getTarget(void) const;

    // RVA: 0x166A | Ordinal: 5739
        void getType(void) const;

    // RVA: 0x173C | Ordinal: 5949
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BFE | Ordinal: 7167
        void manufacture(void);

    // RVA: 0x2106 | Ordinal: 8455
        void onCmdOption(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2235 | Ordinal: 8758
        void onCmdValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25CD | Ordinal: 9678
        void onUpdOption(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2619 | Ordinal: 9754
        void onUpdValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2CDE | Ordinal: 11487
        void setSelector(unsigned int);

    // RVA: 0x2D33 | Ordinal: 11572
        void setTarget(class FX::FXObject *);

    // RVA: 0x3E8 | Ordinal: 1001
        void _FXDataTarget(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDATATARGET_HPP
