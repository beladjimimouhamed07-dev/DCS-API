/*
 * CockpitBase.dll class reconstruction
 * Function: listen_event
 * Address : 7ffada5f65d0
 * Role    : method
 */


/* void __cdecl cockpit::listen_event(class cockpit::avDevice * __ptr64,class ed::basic_string<char>
   const & __ptr64) */

void __cdecl cockpit::listen_event(avDevice *param_1,basic_string<char> *param_2)

{
  longlong *plVar1;
  avDevice *local_res8 [4];
  longlong local_18 [3];
  
                    /* 0x1e65d0  5021
                       ?listen_event@cockpit@@YAXPEAVavDevice@1@AEBV?$basic_string@D@ed@@@Z */
  local_res8[0] = param_1;
  plVar1 = FUN_7ffada5f29f0((float *)&DAT_7ffada95fea0,local_18,(undefined8 *)param_2);
  FUN_7ffada5f6770((longlong *)(*plVar1 + 0x30),local_res8);
  return;
}

