#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: edvfs
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class edvfs
{
public:

    // RVA: 0x167 | Ordinal: 360
        void check_edcz_version(class edvfs::IBuffer const &, unsigned __int64 &, char const *const);

    // RVA: 0x179 | Ordinal: 378
        void compact(void);

    // RVA: 0x19B | Ordinal: 412
        void deinit(void);

    // RVA: 0x19D | Ordinal: 414
        void delete_on_fs(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1AD | Ordinal: 430
        void enumerate(char const *, void (__cdecl *)(void *, char const *, char const *, enum edvfs::FileType), void *);

    // RVA: 0x1AE | Ordinal: 431
        void enumerate_drivers(void (__cdecl *)(class edvfs::IDriver const &, void *), void *);

    // RVA: 0x1AF | Ordinal: 432
        void enumerate_on_fs(class std::basic_string_view<char, struct std::char_traits<char>>, void (__cdecl *)(void *, class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>, struct edvfs::FindStat const &), void *);

    // RVA: 0x1B0 | Ordinal: 433
        void enumerate_sources(void (__cdecl *)(char const *, char const *, void *), void *);

    // RVA: 0x1B4 | Ordinal: 437
        void exists(char const *);

    // RVA: 0x1BE | Ordinal: 447
        void extract_edcz_string(class ed::vector<char, class ed::allocator<char>> const &, unsigned __int64, unsigned __int64);

    // RVA: 0x21D | Ordinal: 542
        void get_base_dir(void);

    // RVA: 0x22A | Ordinal: 555
        void get_real_dir(char const *, void (__cdecl *)(char const *, void *), void *);

    // RVA: 0x22D | Ordinal: 558
        void get_write_dir(void);

    // RVA: 0x25F | Ordinal: 608
        void init(bool (__cdecl *)(char const *, void *), void *);

    // RVA: 0x290 | Ordinal: 657
        void load_edcz_file_list(class edvfs::IBuffer const &, unsigned __int64, char const *, class ed::vector<struct edvfs::EDCZFileName, class ed::allocator<struct edvfs::EDCZFileName>> &, class ed::vector<unsigned __int64, class ed::allocator<unsigned __int64>> &, class ed::vector<struct edvfs::EDCZFileName, class ed::allocator<struct edvfs::EDCZFileName>> &, class ed::vector<struct edvfs::EDCZFileInfo, class ed::allocator<struct edvfs::EDCZFileInfo>> &, class ed::vector<class edvfs::Metadata, class ed::allocator<class edvfs::Metadata>> &, class ed::vector<struct ed::array<unsigned char, 32>, class ed::allocator<struct ed::array<unsigned char, 32>>> &, class ed::vector<char, class ed::allocator<char>> &, class ed::vector<signed char, class ed::allocator<signed char>> &);

    // RVA: 0x29F | Ordinal: 672
        void make_write_dirs(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x2A4 | Ordinal: 677
        void mkdir_on_fs(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x2A5 | Ordinal: 678
        void mkdir_on_fs(class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x2A8 | Ordinal: 681
        void mount(char const *, char const *, bool, char const *, bool);

    // RVA: 0x2CB | Ordinal: 716
        void open(char const *, enum edvfs::OpenMode, bool);

    // RVA: 0x2CC | Ordinal: 717
        void open_from_fs(char const *, enum edvfs::OpenMode, bool);

    // RVA: 0x2CD | Ordinal: 718
        void open_mapped_buffer(char const *, bool &);

    // RVA: 0x2CE | Ordinal: 719
        void open_mapped_file(char const *, char const *, char const *, class edvfs::Metadata const *, struct std::atomic<unsigned __int64> *);

    // RVA: 0x32B | Ordinal: 812
        void read_edcz_crypto_header(class edvfs::IBuffer const &, unsigned __int64 &);

    // RVA: 0x32D | Ordinal: 814
        void read_file(char const *, bool);

    // RVA: 0x336 | Ordinal: 823
        void register_driver_factory(class edvfs::IDriver * (__cdecl *)(unsigned __int64, char const *, char const *, char const *, char const *, char *, unsigned __int64, bool &), bool);

    // RVA: 0x33B | Ordinal: 828
        void remount(class ed::basic_string<char> (__cdecl *const)(char const *, void *), void *);

    // RVA: 0x34C | Ordinal: 845
        void rename_on_fs(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x363 | Ordinal: 868
        void rmdir_on_fs(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x391 | Ordinal: 914
        void setVFS(class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0x39E | Ordinal: 927
        void set_mapped_file_min_size(unsigned __int64);

    // RVA: 0x3B1 | Ordinal: 946
        void stat(char const *, struct edvfs::Stat &);

    // RVA: 0x3EC | Ordinal: 1005
        void unmount(unsigned __int64);

    // RVA: 0x3ED | Ordinal: 1006
        void unmount_by_source(char const *);

    // RVA: 0x3EE | Ordinal: 1007
        void unmount_by_tag(char const *);

    // RVA: 0x3F0 | Ordinal: 1009
        void unregister_driver_factory(class edvfs::IDriver * (__cdecl *)(unsigned __int64, char const *, char const *, char const *, char const *, char *, unsigned __int64, bool &));

    // RVA: 0x419 | Ordinal: 1050
        void write_file(char const *, void const *, unsigned __int64, bool);
};

// DCS_OPS_RE_EDCORE.DLL_EDVFS_HPP
