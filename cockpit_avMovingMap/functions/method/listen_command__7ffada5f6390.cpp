/*
 * CockpitBase.dll class reconstruction
 * Function: listen_command
 * Address : 7ffada5f6390
 * Role    : method
 */


/* void __cdecl cockpit::listen_command(class cockpit::avDevice * __ptr64,int) */

void __cdecl cockpit::listen_command(avDevice *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [32];
  avDevice *local_res8;
  int local_res10 [2];
  
                    /* 0x1e6390  5016  ?listen_command@cockpit@@YAXPEAVavDevice@1@H@Z */
  local_res10[0] = param_2;
  plVar1 = FUN_7ffada5f3cc0(&DAT_7ffada95fe78,local_res10);
  local_res8 = param_1;
  pauVar2 = thunk_FUN_7ffada82ad30
                      ((undefined1 (*) [32])*plVar1,(undefined1 (*) [32])plVar1[1],
                       (ulonglong)param_1);
  if (pauVar2 == (undefined1 (*) [32])plVar1[1]) {
    FUN_7ffada5f6770(plVar1,&local_res8);
  }
  return;
}

