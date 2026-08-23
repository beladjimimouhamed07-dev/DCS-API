#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: FSMappedFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edvfs {

class FSMappedFile
{
public:

    // RVA: 0x172 | Ordinal: 371
        void close(void);

    // RVA: 0x17F | Ordinal: 384
        void create(class ed::Ptr<class edvfs::MappedFileBuffer, struct edvfs::IBuffer::Deleter> &&, char const *, char const *, class edvfs::Metadata const *, struct std::atomic<unsigned __int64> *);

    // RVA: 0x198 | Ordinal: 409
        void data(void);

    // RVA: 0x1F7 | Ordinal: 504
        void getMetadata(char const *, double &) const;

    // RVA: 0x1F8 | Ordinal: 505
        void getMetadata(char const *, __int64 &) const;

    // RVA: 0x1F9 | Ordinal: 506
        void getMetadata(char const *, char const **) const;

    // RVA: 0x2AE | Ordinal: 687
        void name(void) const;

    // RVA: 0x313 | Ordinal: 788
        void read(void *, unsigned __int64);

    // RVA: 0x36C | Ordinal: 877
        void seek(unsigned __int64);

    // RVA: 0x3AA | Ordinal: 939
        void size(void);

    // RVA: 0x3B0 | Ordinal: 945
        void src_name(void) const;

    // RVA: 0x3C2 | Ordinal: 963
        void tell(void);

    // RVA: 0x403 | Ordinal: 1028
        void write(void const *, unsigned __int64);
};

} // namespace edvfs

// DCS_OPS_RE_EDCORE.DLL_FSMAPPEDFILE_HPP
