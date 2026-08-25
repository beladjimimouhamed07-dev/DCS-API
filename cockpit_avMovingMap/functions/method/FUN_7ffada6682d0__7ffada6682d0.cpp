/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada6682d0
 * Address : 7ffada6682d0
 * Role    : method
 */


longlong FUN_7ffada6682d0(undefined8 param_1,undefined8 *param_2)

{
  avKneeboard *this;
  longlong lVar1;
  
  this = (avKneeboard *)FUN_7ffada82b29c(0x4f8);
  if (this == (avKneeboard *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = cockpit::avKneeboard::avKneeboard(this);
  }
  *(undefined8 *)(lVar1 + 0x10) = *param_2;
  return lVar1;
}

