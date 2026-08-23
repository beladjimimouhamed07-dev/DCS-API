#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: ed
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ed
{
public:

    // RVA: 0x138 | Ordinal: 313
        void VFS_secure_init(char const *, char const *, class ed::VFS_SecurityHook *);

    // RVA: 0x146 | Ordinal: 327
        void addExtension(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x14F | Ordinal: 336
        void add_timer(double, class std::function<bool __cdecl(void)>, enum ed::TimerDestination);

    // RVA: 0x158 | Ordinal: 345
        void basename(class ed::basic_string<char> const &);

    // RVA: 0x159 | Ordinal: 346
        void basename(char const *);

    // RVA: 0x17A | Ordinal: 379
        void completeWithSlash(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x197 | Ordinal: 408
        void current_exception_stack_trace(void);

    // RVA: 0x19C | Ordinal: 413
        void deinit_task_manager(void);

    // RVA: 0x1A1 | Ordinal: 418
        void dirname(class ed::basic_string<char> const &);

    // RVA: 0x1A2 | Ordinal: 419
        void dirname(class ed::basic_string<wchar_t> const &);

    // RVA: 0x1A9 | Ordinal: 426
        void dumpThreads(class ed::JsonWriter &);

    // RVA: 0x1B2 | Ordinal: 435
        void escapeRegex(class ed::basic_string<char> &);

    // RVA: 0x1B8 | Ordinal: 441
        void extractExtension(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1B9 | Ordinal: 442
        void extractFileName(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1BA | Ordinal: 443
        void extractFileNameNoExt(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1BB | Ordinal: 444
        void extractFolder(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1BC | Ordinal: 445
        void extractFolder(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x1BD | Ordinal: 446
        void extractPrefix(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1BF | Ordinal: 448
        void fatal_out_of_memory(char const *, unsigned __int64);

    // RVA: 0x1D0 | Ordinal: 465
        void from_utf8(class std::span<wchar_t, -1>, class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x1D8 | Ordinal: 473
        void gen_id(void);

    // RVA: 0x1E9 | Ordinal: 490
        void getCoreConfig(void);

    // RVA: 0x1F6 | Ordinal: 503
        void getMemUsage(void);

    // RVA: 0x20F | Ordinal: 528
        void getTaskManagerMode(void);

    // RVA: 0x217 | Ordinal: 536
        void get_app_branch(void);

    // RVA: 0x218 | Ordinal: 537
        void get_app_filename(void);

    // RVA: 0x219 | Ordinal: 538
        void get_app_name(void);

    // RVA: 0x21A | Ordinal: 539
        void get_app_pid(void);

    // RVA: 0x21B | Ordinal: 540
        void get_app_revision(void);

    // RVA: 0x21C | Ordinal: 541
        void get_app_version(void);

    // RVA: 0x21E | Ordinal: 543
        void get_build_number(void);

    // RVA: 0x229 | Ordinal: 554
        void get_os_strerror(int);

    // RVA: 0x22B | Ordinal: 556
        void get_renderer_revision(void);

    // RVA: 0x22C | Ordinal: 557
        void get_terrain_revision(void);

    // RVA: 0x235 | Ordinal: 566
        void hasPrefix(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x236 | Ordinal: 567
        void hasSuffix(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x239 | Ordinal: 570
        void iconv_utf8_from_acp(class ed::basic_string<char> const &);

    // RVA: 0x23A | Ordinal: 571
        void iconv_utf8_from_wchar(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x23B | Ordinal: 572
        void iconv_utf8_to_oem(class ed::basic_string<char> const &);

    // RVA: 0x23C | Ordinal: 573
        void iconv_utf8_to_wchar(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x23D | Ordinal: 574
        void iconv_utf8_to_wchar(char const *, wchar_t *, unsigned int);

    // RVA: 0x23E | Ordinal: 575
        void iconv_utf8_to_wchar(char const *, wchar_t *, unsigned __int64);

    // RVA: 0x23F | Ordinal: 576
        void iconv_utf8_to_wchar(char const *, class ed::basic_string<wchar_t> &);

    // RVA: 0x240 | Ordinal: 577
        void iconv_wchar_from_acp(class ed::basic_string<char> const &);

    // RVA: 0x24A | Ordinal: 587
        void inMainThread(void);

    // RVA: 0x26B | Ordinal: 620
        void init_task_manager(void);

    // RVA: 0x285 | Ordinal: 646
        void json2lua(struct lua_State *, struct yajl_val_s *);

    // RVA: 0x28B | Ordinal: 652
        void loadCoreConfigFromFile(char const *);

    // RVA: 0x28D | Ordinal: 654
        void loadFilePackage(char const *, class std::function<void __cdecl(char const *, void const *, unsigned __int64)>);

    // RVA: 0x28E | Ordinal: 655
        void loadFilePackage(void const *, unsigned __int64, class std::function<void __cdecl(char const *, void const *, unsigned __int64)>);

    // RVA: 0x292 | Ordinal: 659
        void lua2json(struct lua_State *, int);

    // RVA: 0x293 | Ordinal: 660
        void lua2json(struct yajl_gen_t *, struct lua_State *, int);

    // RVA: 0x296 | Ordinal: 663
        void luaDumpStack(struct lua_State *);

    // RVA: 0x298 | Ordinal: 665
        void luaPrint(struct lua_State *);

    // RVA: 0x29A | Ordinal: 667
        void makeWildcardForRegex(class ed::basic_string<char> &);

    // RVA: 0x29B | Ordinal: 668
        void make_error_string(class ed::basic_string<char> const &, int, class ed::basic_string<char> const &);

    // RVA: 0x29C | Ordinal: 669
        void make_main_thread_tasks(double);

    // RVA: 0x29D | Ordinal: 670
        void make_path(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x29E | Ordinal: 671
        void make_render_thread_tasks(double);

    // RVA: 0x2BE | Ordinal: 703
        void normalizePath(class std::basic_string_view<char, struct std::char_traits<char>>, char *, unsigned int, bool);

    // RVA: 0x2BF | Ordinal: 704
        void normalizePath(class std::basic_string_view<char, struct std::char_traits<char>>, class ed::basic_string<char> &, bool);

    // RVA: 0x2C0 | Ordinal: 705
        void normalizeShortPath(class std::basic_string_view<char, struct std::char_traits<char>>, bool, class ed::basic_short_string_base<char, struct std::char_traits<char>, class ed::allocator<char>> &);

    // RVA: 0x2D1 | Ordinal: 722
        void os_open_uri(class ed::basic_string<char> const &);

    // RVA: 0x2D3 | Ordinal: 724
        void path_getext(class ed::basic_string<char> const &);

    // RVA: 0x2D4 | Ordinal: 725
        void path_hash32(class ed::basic_string<char> const &);

    // RVA: 0x2D5 | Ordinal: 726
        void path_join(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x2D6 | Ordinal: 727
        void path_noext(class ed::basic_string<char> const &);

    // RVA: 0x2D7 | Ordinal: 728
        void path_normcase(class ed::basic_string<char>);

    // RVA: 0x2D8 | Ordinal: 729
        void path_split(class ed::basic_string<char>, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x2D9 | Ordinal: 730
        void path_unify(class ed::basic_string<char> const &);

    // RVA: 0x2F3 | Ordinal: 756
        void printSize(unsigned __int64);

    // RVA: 0x2F9 | Ordinal: 762
        void push_background_task(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x2FA | Ordinal: 763
        void push_background_task(class std::function<void __cdecl(void)> const &, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x2FB | Ordinal: 764
        void push_background_task(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x2FC | Ordinal: 765
        void push_main_thread_task(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x2FD | Ordinal: 766
        void push_main_thread_task(class std::function<void __cdecl(void)> const &, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x2FE | Ordinal: 767
        void push_main_thread_task(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x2FF | Ordinal: 768
        void push_pooled_task(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x300 | Ordinal: 769
        void push_pooled_task(class std::function<void __cdecl(void)> const &, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x301 | Ordinal: 770
        void push_pooled_task(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x302 | Ordinal: 771
        void push_render_thread_task(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x303 | Ordinal: 772
        void push_render_thread_task(class std::function<void __cdecl(void)> const &, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x304 | Ordinal: 773
        void push_render_thread_task(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x307 | Ordinal: 776
        void push_urgent_task(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x308 | Ordinal: 777
        void push_urgent_task(class std::function<void __cdecl(void)> const &, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x309 | Ordinal: 778
        void push_urgent_task(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>, char const *);

    // RVA: 0x33E | Ordinal: 831
        void removeExtension(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x342 | Ordinal: 835
        void removePrefix(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x343 | Ordinal: 836
        void removeSlashFromBegin(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x344 | Ordinal: 837
        void removeSlashFromBeginShort(class ed::basic_short_string_base<char, struct std::char_traits<char>, class ed::allocator<char>> &);

    // RVA: 0x345 | Ordinal: 838
        void removeSlashFromEnd(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x346 | Ordinal: 839
        void removeSlashFromEndShort(class ed::basic_short_string_base<char, struct std::char_traits<char>, class ed::allocator<char>> &);

    // RVA: 0x347 | Ordinal: 840
        void removeWhiteSpaces(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x34B | Ordinal: 844
        void remove_timer(struct ed::timer_id *);

    // RVA: 0x34D | Ordinal: 846
        void replaceAll(char *, char, char);

    // RVA: 0x369 | Ordinal: 874
        void run_process(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, char const *, bool);

    // RVA: 0x36A | Ordinal: 875
        void run_process(char const *, char const *, char const *, bool);

    // RVA: 0x38E | Ordinal: 911
        void setTaskManagerMode(enum ed::TaskManagerMode);

    // RVA: 0x396 | Ordinal: 919
        void set_app_branch(char const *);

    // RVA: 0x397 | Ordinal: 920
        void set_app_name(char const *);

    // RVA: 0x398 | Ordinal: 921
        void set_app_revision(char const *);

    // RVA: 0x399 | Ordinal: 922
        void set_build_number(char const *);

    // RVA: 0x3A3 | Ordinal: 932
        void set_renderer_revision(char const *);

    // RVA: 0x3A4 | Ordinal: 933
        void set_terrain_revision(char const *);

    // RVA: 0x3AD | Ordinal: 942
        void splitString(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x3AE | Ordinal: 943
        void splitString(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, bool);

    // RVA: 0x3AF | Ordinal: 944
        void splitStringAndDelims(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x3BB | Ordinal: 956
        void string_format(char const *, ...);

    // RVA: 0x3BC | Ordinal: 957
        void string_format(wchar_t const *, ...);

    // RVA: 0x3C4 | Ordinal: 965
        void this_thread_enable_exception_stack_trace(bool);

    // RVA: 0x3C5 | Ordinal: 966
        void this_thread_suspend_exception_stack_trace(bool);

    // RVA: 0x3C9 | Ordinal: 970
        void toLower(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x3CA | Ordinal: 971
        void toLower(class ed::basic_string<wchar_t> &);

    // RVA: 0x3CB | Ordinal: 972
        void toLowerShort(class std::basic_string_view<char, struct std::char_traits<char>>, class ed::basic_short_string_base<char, struct std::char_traits<char>, class ed::allocator<char>> &);

    // RVA: 0x3CC | Ordinal: 973
        void toUpper(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x3CD | Ordinal: 974
        void toUpper(class ed::basic_string<wchar_t> &);

    // RVA: 0x3CE | Ordinal: 975
        void toUpperShort(class std::basic_string_view<char, struct std::char_traits<char>>, class ed::basic_short_string_base<char, struct std::char_traits<char>, class ed::allocator<char>> &);

    // RVA: 0x3D0 | Ordinal: 977
        void to_string(class osg::Vec2d const &);

    // RVA: 0x3D1 | Ordinal: 978
        void to_string(class osg::Vec2f const &);

    // RVA: 0x3D2 | Ordinal: 979
        void to_string(class osg::Vec2i const &);

    // RVA: 0x3D3 | Ordinal: 980
        void to_string(class osg::Vec3d const &);

    // RVA: 0x3D4 | Ordinal: 981
        void to_string(class osg::Vec3f const &);

    // RVA: 0x3D5 | Ordinal: 982
        void to_string(class osg::Vec3i const &);

    // RVA: 0x3D6 | Ordinal: 983
        void to_string(class osg::Vec4d const &);

    // RVA: 0x3D7 | Ordinal: 984
        void to_string(class osg::Vec4f const &);

    // RVA: 0x3D8 | Ordinal: 985
        void to_string(class osg::Vec4i const &);

    // RVA: 0x3D9 | Ordinal: 986
        void to_string(class osg::Vec4ui const &);

    // RVA: 0x3DB | Ordinal: 988
        void to_utf8(class std::span<char, -1>, class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x3DC | Ordinal: 989
        void towlower(unsigned short);

    // RVA: 0x3DD | Ordinal: 990
        void towupper(unsigned short);

    // RVA: 0x3DE | Ordinal: 991
        void trim(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x3E5 | Ordinal: 998
        void try_wait_all_pools(double);

    // RVA: 0x3E7 | Ordinal: 1000
        void uni2mbstr(unsigned int);

    // RVA: 0x3F7 | Ordinal: 1016
        void utf8_substr(char const *, unsigned __int64, unsigned __int64);

    // RVA: 0x3F9 | Ordinal: 1018
        void validate_utf8(class std::basic_string_view<char, struct std::char_traits<char>>, bool);

    // RVA: 0x3FE | Ordinal: 1023
        void wait_all_pools(void);

    // RVA: 0x400 | Ordinal: 1025
        void wait_for_barrier(class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter>);

    // RVA: 0x401 | Ordinal: 1026
        void walk_utf8(class std::basic_string_view<char, struct std::char_traits<char>>, class std::function<void __cdecl(class std::span<wchar_t, -1>, struct ed::utf8_result)>);

    // RVA: 0x402 | Ordinal: 1027
        void walk_utf8_cancellable(class std::basic_string_view<char, struct std::char_traits<char>>, class std::function<bool __cdecl(class std::span<wchar_t, -1>, struct ed::utf8_result)>);
};

// DCS_OPS_RE_EDCORE.DLL_ED_HPP
