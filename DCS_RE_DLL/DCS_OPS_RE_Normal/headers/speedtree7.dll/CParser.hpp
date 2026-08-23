#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CParser
{
public:

    // RVA: 0x3B | Ordinal: 60
        void CParser(void);

    // RVA: 0x193 | Ordinal: 404
        void ConvertEndianAllData(void);

    // RVA: 0x1A8 | Ordinal: 425
        void EndOfFile(unsigned int) const;

    // RVA: 0x1DC | Ordinal: 477
        void GetStringFromTable(int) const;

    // RVA: 0x20A | Ordinal: 523
        void LookupRenderStateStrings(struct SpeedTree::SRenderState &) const;

    // RVA: 0x20B | Ordinal: 524
        void LookupStringsByIDs(void);

    // RVA: 0x222 | Ordinal: 547
        void Parse(unsigned char const *, unsigned __int64 *const, unsigned int, class SpeedTree::CCore *, struct SpeedTree::SGeometry *);

    // RVA: 0x221 | Ordinal: 546
        void Parse3dGeometry(void);

    // RVA: 0x223 | Ordinal: 548
        void ParseAndCopyRenderState(struct SpeedTree::SRenderState *);

    // RVA: 0x224 | Ordinal: 549
        void ParseBillboards(void);

    // RVA: 0x225 | Ordinal: 550
        void ParseByte(void);

    // RVA: 0x226 | Ordinal: 551
        void ParseCollisionObjects(void);

    // RVA: 0x227 | Ordinal: 552
        void ParseCustomData(void);

    // RVA: 0x228 | Ordinal: 553
        void ParseExtents(void);

    // RVA: 0x22A | Ordinal: 555
        void ParseFloat(void);

    // RVA: 0x229 | Ordinal: 554
        void ParseFloat3(float *const);

    // RVA: 0x22B | Ordinal: 556
        void ParseHeader(void);

    // RVA: 0x22C | Ordinal: 557
        void ParseInt(void);

    // RVA: 0x22D | Ordinal: 558
        void ParseLOD(void);

    // RVA: 0x22E | Ordinal: 559
        void ParsePlatform(void);

    // RVA: 0x22F | Ordinal: 560
        void ParseRenderStateBlock(struct SpeedTree::SRenderState *&, int);

    // RVA: 0x230 | Ordinal: 561
        void ParseRenderStates(void);

    // RVA: 0x231 | Ordinal: 562
        void ParseString(class SpeedTree::CBasicFixedString<256> &, int);

    // RVA: 0x232 | Ordinal: 563
        void ParseStringTable(void);

    // RVA: 0x233 | Ordinal: 564
        void ParseUntilAligned(void);

    // RVA: 0x234 | Ordinal: 565
        void ParseVertexAndIndexData(void);

    // RVA: 0x235 | Ordinal: 566
        void ParseWind(void);

    // RVA: 0x8C | Ordinal: 141
        void _CParser(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CPARSER_HPP
