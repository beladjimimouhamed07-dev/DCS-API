/*
 * CockpitBase.dll class reconstruction
 * Function: getHost
 * Address : 7ffada61f5b0
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class Sound::Host & __ptr64 __cdecl cockpit::ccSound::getHost(char const * __ptr64)
   __ptr64 */

Host * __thiscall cockpit::ccSound::getHost(ccSound *this,char *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *******pppppppuVar4;
  ulonglong uVar5;
  undefined8 *_Buf2;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 ******local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x20f5b0  3328  ?getHost@ccSound@cockpit@@QEAAAEAVHost@Sound@@PEBD@Z */
  local_38 = DAT_7ffada94e840 ^ (ulonglong)auStack_78;
  if (param_1 != (char *)0x0) {
    FUN_7ffada5f31a0(local_58,param_1);
    uVar5 = 0xcbf29ce484222325;
    pppppppuVar4 = local_58;
    if (0xf < local_40) {
      pppppppuVar4 = (undefined8 *******)local_58[0];
    }
    uVar6 = 0;
    uVar2 = uVar6;
    if (local_48 != 0) {
      do {
        uVar3 = uVar2 + 1;
        uVar5 = (uVar5 ^ *(byte *)((longlong)pppppppuVar4 + uVar2)) * 0x100000001b3;
        uVar2 = uVar3;
      } while (uVar3 < local_48);
    }
    uVar2 = *(ulonglong *)
             (*(longlong *)(this + 0x28) + 8 + (*(ulonglong *)(this + 0x40) & uVar5) * 0x10);
    uVar3 = uVar6;
    if (uVar2 != *(ulonglong *)(this + 0x18)) {
      uVar5 = *(ulonglong *)
               (*(longlong *)(this + 0x28) + (*(ulonglong *)(this + 0x40) & uVar5) * 0x10);
      while( true ) {
        _Buf2 = (undefined8 *)(uVar2 + 0x10);
        if (0xf < *(ulonglong *)(uVar2 + 0x28)) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        pppppppuVar4 = local_58;
        if (0xf < local_40) {
          pppppppuVar4 = (undefined8 *******)local_58[0];
        }
        if (((local_48 == *(ulonglong *)(uVar2 + 0x20)) &&
            ((uVar3 = uVar2, local_48 == 0 ||
             (iVar1 = memcmp(pppppppuVar4,_Buf2,local_48), iVar1 == 0)))) ||
           (uVar3 = uVar6, uVar2 == uVar5)) break;
        uVar2 = *(ulonglong *)(uVar2 + 8);
      }
    }
    if (uVar3 == 0) {
      uVar3 = *(ulonglong *)(this + 0x18);
    }
    if (0xf < local_40) {
      free(local_58[0]);
    }
    if (uVar3 != *(ulonglong *)(this + 0x18)) {
      if (*(Host **)(uVar3 + 0x30) == (Host *)0x0) {
        return (Host *)(this + 0x50);
      }
      return *(Host **)(uVar3 + 0x30);
    }
  }
  return (Host *)(this + 0x50);
}

