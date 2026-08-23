#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: JConfigurator.dll
// Class: jconf
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class jconf
{
public:

    // RVA: 0x0 | Ordinal: 1
        void forceShutdown(void);

    // RVA: 0x1 | Ordinal: 2
        void getDumps(char const **);

    // RVA: 0x2 | Ordinal: 3
        void getIntParameter(char const *, int);

    // RVA: 0x3 | Ordinal: 4
        void registerBackendStatCallback(class ed::basic_string<char> (__cdecl *)(void));

    // RVA: 0x4 | Ordinal: 5
        void registerBool(char const *, class std::tuple<class std::function<bool __cdecl(void)>, class std::function<void __cdecl(bool)>>, enum jconf::RunInThread);

    // RVA: 0x5 | Ordinal: 6
        void registerColor(char const *, class osg::Vec3f &, enum jconf::RunInThread);

    // RVA: 0x6 | Ordinal: 7
        void registerColor(char const *, class std::tuple<class std::function<class osg::Vec3f __cdecl(void)>, class std::function<void __cdecl(class osg::Vec3f const &)>>, enum jconf::RunInThread);

    // RVA: 0x7 | Ordinal: 8
        void registerCommon(char const *, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x8 | Ordinal: 9
        void registerDouble(char const *, double, double, class std::tuple<class std::function<double __cdecl(void)>, class std::function<void __cdecl(double)>>, enum jconf::RunInThread);

    // RVA: 0x9 | Ordinal: 10
        void registerDropDownList(char const *, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class std::function<void __cdecl(unsigned int)>, unsigned int, enum jconf::RunInThread);

    // RVA: 0xA | Ordinal: 11
        void registerDropDownList(char const *, char const **, unsigned int, class std::function<void __cdecl(unsigned int)>, unsigned int, enum jconf::RunInThread);

    // RVA: 0xB | Ordinal: 12
        void registerDump(char const *, class std::function<void __cdecl(class ed::JsonWriter &)>);

    // RVA: 0xC | Ordinal: 13
        void registerEndpoint(char const *, class std::function<void __cdecl(class ed::JsonWriter &)>);

    // RVA: 0xD | Ordinal: 14
        void registerFileSelector(char const *, char const *, class std::function<void __cdecl(char const *, signed char const *, unsigned __int64)>, enum jconf::RunInThread);

    // RVA: 0x10 | Ordinal: 17
        void registerFloat(char const *, float, float, class std::tuple<class std::function<float __cdecl(void)>, class std::function<void __cdecl(float)>>, enum jconf::RunInThread);

    // RVA: 0xE | Ordinal: 15
        void registerFloat3(char const *, class osg::Vec3f &, enum jconf::RunInThread);

    // RVA: 0xF | Ordinal: 16
        void registerFloat3(char const *, class std::tuple<class std::function<class osg::Vec3f __cdecl(void)>, class std::function<void __cdecl(class osg::Vec3f const &)>>, enum jconf::RunInThread);

    // RVA: 0x11 | Ordinal: 18
        void registerFunc(char const *, class std::function<void __cdecl(void)>, enum jconf::RunInThread);

    // RVA: 0x12 | Ordinal: 19
        void registerInt(char const *, class std::tuple<class std::function<int __cdecl(void)>, class std::function<void __cdecl(int)>>, enum jconf::RunInThread);

    // RVA: 0x13 | Ordinal: 20
        void registerStaticText(char const *, class std::function<class ed::basic_string<char> __cdecl(void)>);

    // RVA: 0x14 | Ordinal: 21
        void registerTextEdit(char const *, char const *, class std::function<void __cdecl(char const *)>, enum jconf::RunInThread);

    // RVA: 0x15 | Ordinal: 22
        void setIntParameter(char const *, int);

    // RVA: 0x16 | Ordinal: 23
        void setRenderThreadId(class ed::thread::id const &);

    // RVA: 0x17 | Ordinal: 24
        void toggleFunc(char const *);

    // RVA: 0x18 | Ordinal: 25
        void unregister(char const *);

    // RVA: 0x19 | Ordinal: 26
        void unregisterBackendStatCallback(void);

    // RVA: 0x1A | Ordinal: 27
        void unregisterDump(char const *);

    // RVA: 0x1B | Ordinal: 28
        void unregisterEndpoint(char const *);
};

// DCS_OPS_RE_JCONFIGURATOR.DLL_JCONF_HPP
