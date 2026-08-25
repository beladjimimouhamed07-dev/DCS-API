/*
 * CockpitBase.dll class reconstruction
 * Function: instance
 * Address : 7ffada5f2310
 * Role    : method
 */


/* public: static class cockpit::ccSound & __ptr64 __cdecl cockpit::ccSound::instance(void) */

ccSound * __cdecl cockpit::ccSound::instance(void)

{
                    /* 0x1e2310  4666  ?instance@ccSound@cockpit@@SAAEAV12@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      `public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'::
      __l2::_thread_safe_static_guard_0__) {
    FUN_7ffada82b8c4(&`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
                      ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ccSound(&`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
               ::__l2::inst);
      atexit(FUN_7ffada839710);
      _Init_thread_footer(&`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
              ::__l2::inst;
    }
  }
  return &`public:_static_class_cockpit::ccSound&___ptr64___cdecl_cockpit::ccSound::instance(void)'
          ::__l2::inst;
}

