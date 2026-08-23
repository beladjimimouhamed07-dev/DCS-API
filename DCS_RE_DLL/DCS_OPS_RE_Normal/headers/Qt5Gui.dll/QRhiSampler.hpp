#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiSampler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiSampler
{
public:

    // RVA: 0x2B4 | Ordinal: 693
        void QRhiSampler(class QRhiImplementation *, enum QRhiSampler::Filter, enum QRhiSampler::Filter, enum QRhiSampler::Filter, enum QRhiSampler::AddressMode, enum QRhiSampler::AddressMode, enum QRhiSampler::AddressMode);

    // RVA: 0x9AB | Ordinal: 2476
        void addressU(void) const;

    // RVA: 0x9AC | Ordinal: 2477
        void addressV(void) const;

    // RVA: 0x9AD | Ordinal: 2478
        void addressW(void) const;

    // RVA: 0x51D8 | Ordinal: 20953
        void magFilter(void) const;

    // RVA: 0x52BA | Ordinal: 21179
        void minFilter(void) const;

    // RVA: 0x52D7 | Ordinal: 21208
        void mipmapMode(void) const;

    // RVA: 0x5747 | Ordinal: 22344
        void resourceType(void) const;

    // RVA: 0x5819 | Ordinal: 22554
        void setAddressU(enum QRhiSampler::AddressMode);

    // RVA: 0x581A | Ordinal: 22555
        void setAddressV(enum QRhiSampler::AddressMode);

    // RVA: 0x581B | Ordinal: 22556
        void setAddressW(enum QRhiSampler::AddressMode);

    // RVA: 0x5A48 | Ordinal: 23113
        void setMagFilter(enum QRhiSampler::Filter);

    // RVA: 0x5A6E | Ordinal: 23151
        void setMinFilter(enum QRhiSampler::Filter);

    // RVA: 0x5A7D | Ordinal: 23166
        void setMipmapMode(enum QRhiSampler::Filter);

    // RVA: 0x5BFF | Ordinal: 23552
        void setTextureCompareOp(enum QRhiSampler::CompareOp);

    // RVA: 0x5F1A | Ordinal: 24347
        void textureCompareOp(void) const;

    // RVA: 0x502 | Ordinal: 1283
        void _QRhiSampler(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHISAMPLER_HPP
