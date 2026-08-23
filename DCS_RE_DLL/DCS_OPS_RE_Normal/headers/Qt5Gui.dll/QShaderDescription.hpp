#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShaderDescription
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShaderDescription
{
public:

    // RVA: 0x2EC | Ordinal: 749
        void QShaderDescription(class QShaderDescription const &);

    // RVA: 0x2ED | Ordinal: 750
        void QShaderDescription(void);

    // RVA: 0xC15 | Ordinal: 3094
        void combinedImageSamplers(void) const;

    // RVA: 0xC31 | Ordinal: 3122
        void computeShaderLocalSize(void) const;

    // RVA: 0xE07 | Ordinal: 3592
        void deserialize(class QDataStream *, int);

    // RVA: 0xE29 | Ordinal: 3626
        void detach(void);

    // RVA: 0x112B | Ordinal: 4396
        void fromBinaryJson(class QByteArray const &);

    // RVA: 0x112C | Ordinal: 4397
        void fromCbor(class QByteArray const &);

    // RVA: 0x4F47 | Ordinal: 20296
        void inputVariables(void) const;

    // RVA: 0x50A5 | Ordinal: 20646
        void isValid(void) const;

    // RVA: 0x53C1 | Ordinal: 21442
        void outputVariables(void) const;

    // RVA: 0x54FE | Ordinal: 21759
        void pushConstantBlocks(void) const;

    // RVA: 0x5806 | Ordinal: 22535
        void serialize(class QDataStream *) const;

    // RVA: 0x5E11 | Ordinal: 24082
        void storageBlocks(void) const;

    // RVA: 0x5E12 | Ordinal: 24083
        void storageImages(void) const;

    // RVA: 0x5F39 | Ordinal: 24378
        void toCbor(void) const;

    // RVA: 0x5F53 | Ordinal: 24404
        void toJson(void) const;

    // RVA: 0x608D | Ordinal: 24718
        void uniformBlocks(void) const;

    // RVA: 0x514 | Ordinal: 1301
        void _QShaderDescription(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSHADERDESCRIPTION_HPP
