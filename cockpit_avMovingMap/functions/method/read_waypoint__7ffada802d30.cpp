/*
 * CockpitBase.dll class reconstruction
 * Function: read_waypoint
 * Address : 7ffada802d30
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl cockpit::read_waypoint(struct Waypoint & __ptr64,class Lua::Config & __ptr64) */

void __cdecl cockpit::read_waypoint(Waypoint *param_1,Config *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong ***ppplVar3;
  basic_string<char> *pbVar4;
  int iVar5;
  longlong lVar6;
  basic_string<char> *pbVar7;
  Waypoint WVar8;
  undefined1 auStack_78 [32];
  longlong **local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  void *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
                    /* 0x3f2d30  5496  ?read_waypoint@cockpit@@YAXAEAUWaypoint@@AEAVConfig@Lua@@@Z
                        */
  local_18 = DAT_7ffada94e840 ^ (ulonglong)auStack_78;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  local_58 = (longlong **)0x0;
  Lua::Config::get(param_2,&DAT_7ffada855cf4);
  Lua::Config::pop(param_2,(basic_string<char> *)&local_58);
  ppplVar3 = &local_58;
  if (0xf < local_40) {
    ppplVar3 = (longlong ***)local_58;
  }
  if (local_48 == 7) {
    iVar5 = *(int *)ppplVar3 + -0x656b6154;
    if ((iVar5 == 0) && (iVar5 = *(ushort *)((longlong)ppplVar3 + 4) - 0x664f, iVar5 == 0)) {
      iVar5 = *(byte *)((longlong)ppplVar3 + 6) - 0x66;
    }
    if (iVar5 != 0) goto LAB_7ffada802dd4;
LAB_7ffada802e5c:
    param_1[0x22] = (Waypoint)0x32;
  }
  else {
LAB_7ffada802dd4:
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 0xe) {
      lVar6 = (longlong)*ppplVar3 + -0x5066664f656b6154;
      if ((lVar6 == 0) && (lVar6 = (ulonglong)*(uint *)(ppplVar3 + 1) - 0x696b7261, lVar6 == 0)) {
        lVar6 = (ulonglong)*(ushort *)((longlong)ppplVar3 + 0xc) - 0x676e;
      }
      if (lVar6 == 0) goto LAB_7ffada802e5c;
    }
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 0x11) {
      lVar6 = (longlong)*ppplVar3 + -0x5066664f656b6154;
      if ((lVar6 == 0) && (lVar6 = (longlong)ppplVar3[1] + -0x6f48676e696b7261, lVar6 == 0)) {
        lVar6 = (ulonglong)*(byte *)(ppplVar3 + 2) - 0x74;
      }
      if (lVar6 == 0) goto LAB_7ffada802e5c;
    }
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 0xd) {
      lVar6 = (longlong)*ppplVar3 + -0x52676e69646e614c;
      if ((lVar6 == 0) && (lVar6 = (ulonglong)*(uint *)(ppplVar3 + 1) - 0x41754665, lVar6 == 0)) {
        lVar6 = (ulonglong)*(byte *)((longlong)ppplVar3 + 0xc) - 0x72;
      }
      if (lVar6 == 0) {
        param_1[0x22] = (Waypoint)0x14;
        goto LAB_7ffada802ed3;
      }
    }
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if ((local_48 == 4) && (*(int *)ppplVar3 == 0x646e614c)) {
      param_1[0x22] = (Waypoint)0xe;
    }
    else {
      param_1[0x22] = (Waypoint)0x0;
    }
  }
LAB_7ffada802ed3:
  Lua::Config::get(param_2,s_alt_type_7ffada855d00);
  bVar2 = Lua::Config::pop(param_2,(basic_string<char> *)&local_58);
  if (bVar2) {
    ppplVar3 = &local_58;
    if (0xf < local_40) {
      ppplVar3 = (longlong ***)local_58;
    }
    if (local_48 == 5) {
      iVar5 = *(int *)ppplVar3 + -0x49444152;
      if (iVar5 == 0) {
        iVar5 = *(byte *)((longlong)ppplVar3 + 4) - 0x4f;
      }
      WVar8 = (Waypoint)(iVar5 == 0);
    }
    else {
      WVar8 = (Waypoint)0x0;
    }
    param_1[0xc] = WVar8;
  }
  Lua::Config::get(param_2,&DAT_7ffada84ea58);
  Lua::Config::pop(param_2,(float *)param_1);
  Lua::Config::get(param_2,&DAT_7ffada84ea5c);
  Lua::Config::pop(param_2,(float *)(param_1 + 8));
  Lua::Config::get(param_2,&DAT_7ffada855c24);
  Lua::Config::pop(param_2,(float *)(param_1 + 4));
  Lua::Config::get(param_2,s_speed_7ffada8502a8);
  Lua::Config::pop(param_2,(float *)(param_1 + 0x10));
  Lua::Config::get(param_2,s_speed_locked_7ffada86db18);
  Lua::Config::pop(param_2,(bool *)(param_1 + 0x20));
  Lua::Config::get(param_2,&DAT_7ffada86db28);
  Lua::Config::pop(param_2,(double *)(param_1 + 0x18));
  Lua::Config::get(param_2,s_ETA_locked_7ffada86db30);
  Lua::Config::pop(param_2,(bool *)(param_1 + 0x21));
  Lua::Config::get(param_2,&DAT_7ffada84d9bc);
  pbVar7 = (basic_string<char> *)(param_1 + 0x30);
  Lua::Config::pop(param_2,pbVar7);
  pbVar4 = (basic_string<char> *)
           (**(code **)(**(longlong **)globalDispatcher_exref + 0x198))
                     (*(longlong **)globalDispatcher_exref,local_38,pbVar7);
  if (pbVar7 != pbVar4) {
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      free(*(void **)pbVar7);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xf;
    *pbVar7 = (basic_string<char>)0x0;
    uVar1 = *(undefined8 *)(pbVar4 + 8);
    *(undefined8 *)pbVar7 = *(undefined8 *)pbVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(pbVar4 + 0x18);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(pbVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(pbVar4 + 0x10) = 0;
    *(undefined8 *)(pbVar4 + 0x18) = 0xf;
    *pbVar4 = (basic_string<char>)0x0;
  }
  if (0xf < local_20) {
    free(local_38[0]);
  }
  if (0xf < local_40) {
    free(local_58);
  }
  return;
}

