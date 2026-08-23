#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: Importer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class Importer
{
public:

    // RVA: 0x122 | Ordinal: 291
        void ApplyCustomizedPostProcessing(class Assimp::BaseProcess *, bool);

    // RVA: 0x123 | Ordinal: 292
        void ApplyPostProcessing(unsigned int);

    // RVA: 0x181 | Ordinal: 386
        void FreeScene(void);

    // RVA: 0x191 | Ordinal: 402
        void GetErrorString(void) const;

    // RVA: 0x197 | Ordinal: 408
        void GetExtensionList(struct aiString &) const;

    // RVA: 0x198 | Ordinal: 409
        void GetExtensionList(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const;

    // RVA: 0x19B | Ordinal: 412
        void GetIOHandler(void) const;

    // RVA: 0x19D | Ordinal: 414
        void GetImporter(char const *) const;

    // RVA: 0x19E | Ordinal: 415
        void GetImporter(unsigned __int64) const;

    // RVA: 0x19F | Ordinal: 416
        void GetImporterCount(void) const;

    // RVA: 0x1A0 | Ordinal: 417
        void GetImporterIndex(char const *) const;

    // RVA: 0x1A1 | Ordinal: 418
        void GetImporterInfo(unsigned __int64) const;

    // RVA: 0x1A6 | Ordinal: 423
        void GetMemoryRequirements(struct aiMemoryInfo &) const;

    // RVA: 0x1AC | Ordinal: 429
        void GetOrphanedScene(void);

    // RVA: 0x1AD | Ordinal: 430
        void GetProgressHandler(void) const;

    // RVA: 0x1AF | Ordinal: 432
        void GetPropertyBool(char const *, bool) const;

    // RVA: 0x1B1 | Ordinal: 434
        void GetPropertyFloat(char const *, float) const;

    // RVA: 0x1B3 | Ordinal: 436
        void GetPropertyInteger(char const *, int) const;

    // RVA: 0x1B5 | Ordinal: 438
        void GetPropertyMatrix(char const *, class aiMatrix4x4t<float> const &) const;

    // RVA: 0x1B7 | Ordinal: 440
        void GetPropertyString(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1B8 | Ordinal: 441
        void GetScene(void) const;

    // RVA: 0x27 | Ordinal: 40
        void Importer(void);

    // RVA: 0x1D8 | Ordinal: 473
        void IsDefaultIOHandler(void) const;

    // RVA: 0x1D9 | Ordinal: 474
        void IsDefaultProgressHandler(void) const;

    // RVA: 0x1DA | Ordinal: 475
        void IsExtensionSupported(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1DB | Ordinal: 476
        void IsExtensionSupported(char const *) const;

    // RVA: 0x20D | Ordinal: 526
        void Pimpl(void);

    // RVA: 0x20E | Ordinal: 527
        void Pimpl(void) const;

    // RVA: 0x21E | Ordinal: 543
        void ReadFile(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned int);

    // RVA: 0x21F | Ordinal: 544
        void ReadFile(char const *, unsigned int);

    // RVA: 0x220 | Ordinal: 545
        void ReadFileFromMemory(void const *, unsigned __int64, unsigned int, char const *);

    // RVA: 0x222 | Ordinal: 547
        void RegisterLoader(class Assimp::BaseImporter *);

    // RVA: 0x223 | Ordinal: 548
        void RegisterPPStep(class Assimp::BaseProcess *);

    // RVA: 0x22C | Ordinal: 557
        void SetExtraVerbose(bool);

    // RVA: 0x22F | Ordinal: 560
        void SetIOHandler(class Assimp::IOSystem *);

    // RVA: 0x234 | Ordinal: 565
        void SetProgressHandler(class Assimp::ProgressHandler *);

    // RVA: 0x236 | Ordinal: 567
        void SetPropertyBool(char const *, bool);

    // RVA: 0x238 | Ordinal: 569
        void SetPropertyFloat(char const *, float);

    // RVA: 0x23A | Ordinal: 571
        void SetPropertyInteger(char const *, int);

    // RVA: 0x23C | Ordinal: 573
        void SetPropertyMatrix(char const *, class aiMatrix4x4t<float> const &);

    // RVA: 0x23E | Ordinal: 575
        void SetPropertyString(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x25B | Ordinal: 604
        void UnregisterLoader(class Assimp::BaseImporter *);

    // RVA: 0x25C | Ordinal: 605
        void UnregisterPPStep(class Assimp::BaseProcess *);

    // RVA: 0x260 | Ordinal: 609
        void ValidateFlags(unsigned int) const;

    // RVA: 0x86 | Ordinal: 135
        void _Importer(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_IMPORTER_HPP
