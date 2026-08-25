/*
 * CockpitBase.dll class reconstruction
 * Function: initialize
 * Address : 7ffada669260
 * Role    : method
 * Vtable slots: 10
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __cdecl cockpit::avKneeboard::initialize(unsigned char,class
   ed::basic_string<char> const & __ptr64,class ed::basic_string<char> const & __ptr64) __ptr64 */

void __thiscall
cockpit::avKneeboard::initialize
          (avKneeboard *this,uchar param_1,basic_string<char> *param_2,basic_string<char> *param_3)

{
  avKneeboard *paVar1;
  undefined8 *puVar2;
  kneeboard_map_page *pkVar3;
  undefined8 uVar4;
  double dVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  wcCoalitionName wVar9;
  lua_State *plVar10;
  char *pcVar11;
  MovingObject *pMVar12;
  char *pcVar13;
  longlong lVar14;
  kneeboard_map_page *pkVar15;
  int iVar16;
  MovingObject *pMVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 auStackY_138 [32];
  avKneeboard local_108 [8];
  undefined8 local_100 [2];
  char *local_f0;
  undefined8 local_e8 [2];
  char *local_d8 [4];
  char *local_b8;
  undefined8 uStack_b0;
  double local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  ulonglong local_88;
  
                    /* 0x259260  4557
                       ?initialize@avKneeboard@cockpit@@UEAAXEAEBV?$basic_string@D@ed@@0@Z */
  local_88 = DAT_7ffada94e840 ^ (ulonglong)auStackY_138;
  avDevice::initialize((avDevice *)this,param_1,param_2,param_3);
  avDevice::make_default_activity((avDevice *)this,DAT_7ffada84fcc0);
  plVar10 = avDevice::ensured_Lua((avDevice *)this,(char *)0x0);
  Lua::Config::Config((Config *)local_100,plVar10,-0x2712);
  pcVar11 = DAT_7ffada84cc38;
  local_f0 = DAT_7ffada84cc38;
  Lua::Config::get((Config *)local_100,s_lat_lon_aspect_7ffada855150);
  Lua::Config::pop((Config *)local_100,(double *)&local_f0);
  *(char **)(this + 0x400) = local_f0;
  local_108[0] = (avKneeboard)0x0;
  Lua::Config::get((Config *)local_100,s_use_lat_lon_7ffada855160);
  Lua::Config::pop((Config *)local_100,(bool *)local_108);
  this[0x408] = local_108[0];
  pMVar17 = (MovingObject *)0x0;
  pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
  if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
    pMVar12 = pMVar17;
  }
  (**(code **)(*(longlong *)pMVar12 + 0x98))(pMVar12,&local_b8);
  to_map_units(this,(Vec3d *)local_d8);
  pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
  if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
    pMVar12 = pMVar17;
  }
  (**(code **)(*(longlong *)pMVar12 + 0x178))();
  init_waypoints(this);
  pcVar6 = local_d8[0];
  lua_pushnumber(local_100[0]);
  Lua::Config::set((Config *)local_100,s_x_start_7ffada855170);
  pcVar7 = local_d8[2];
  lua_pushnumber(local_100[0]);
  Lua::Config::set((Config *)local_100,s_z_start_7ffada855178);
  plVar10 = (lua_State *)(**(code **)(**(longlong **)globalDispatcher_exref + 0xd0))();
  Lua::Config::Config((Config *)local_e8,plVar10,-0x2712);
  bVar8 = Lua::Config::open((Config *)local_e8,s_mission_coalition_7ffada855180);
  if (bVar8) {
    pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
    if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
      pMVar12 = pMVar17;
    }
    wVar9 = MovingObject::Coalition(pMVar12);
    pcVar13 = s_neutrals_7ffada854e50;
    local_d8[0] = s_neutrals_7ffada854e50;
    local_d8[1] = &DAT_7ffada854e5c;
    local_d8[2] = &DAT_7ffada854e60;
    if (wVar9 < 3) {
      pcVar13 = local_d8[(int)wVar9];
    }
    bVar8 = Lua::Config::open((Config *)local_e8,pcVar13);
    if (bVar8) {
      bVar8 = Lua::Config::open((Config *)local_e8,s_bullseye_7ffada855198);
      if (bVar8) {
        Lua::Config::get((Config *)local_e8,&DAT_7ffada84ea58);
        Lua::Config::pop((Config *)local_e8,(double *)&local_f0);
        Lua::Config::get((Config *)local_e8,&DAT_7ffada84ea5c);
        Lua::Config::pop((Config *)local_e8,(double *)(local_d8 + 3));
        local_d8[0] = local_f0;
        local_d8[1] = (undefined *)0x0;
        local_d8[2] = local_d8[3];
        to_map_units(this,(Vec3d *)&local_b8);
        lua_pushnumber(local_100[0],local_b8);
        Lua::Config::set((Config *)local_100,s_x_bullseye_7ffada8551a8);
        lua_pushnumber(local_100[0],local_a8);
        Lua::Config::set((Config *)local_100,s_z_bullseye_7ffada8551b8);
        lua_settop(local_e8[0],0xfffffffe);
      }
      lua_settop(local_e8[0],0xfffffffe);
    }
    lua_settop(local_e8[0],0xfffffffe);
  }
  Lua::Config::call_func
            ((Config *)local_100,s_generate_maps_7ffada8551c8,(basic_string<char> *)0x0,0,0);
  bVar8 = Lua::Config::open((Config *)local_100,s_map_pages_7ffada8551d8);
  if (bVar8) {
    iVar16 = 1;
    bVar8 = Lua::Config::open((Config *)local_100,1);
    if (bVar8) {
      do {
        uStack_90 = 0;
        Lua::Config::get((Config *)local_100,s_scale_7ffada8551e4);
        bVar8 = Lua::Config::pop((Config *)local_100,(double *)&local_b8);
        if (!bVar8) {
          local_b8 = pcVar11;
        }
        Lua::Config::get((Config *)local_100,s_chart_7ffada8551ec);
        bVar8 = Lua::Config::pop((Config *)local_100,(uint *)&uStack_b0);
        uVar19 = (uint)uStack_b0;
        if (!bVar8) {
          uVar19 = 6;
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
        Lua::Config::get((Config *)local_100,&DAT_7ffada84ea58);
        bVar8 = Lua::Config::pop((Config *)local_100,(double *)&pcStack_a0);
        if (!bVar8) {
          pcStack_a0 = pcVar6;
        }
        Lua::Config::get((Config *)local_100,&DAT_7ffada84ea60);
        bVar8 = Lua::Config::pop((Config *)local_100,(double *)&local_98);
        if (!bVar8) {
          local_98 = pcVar7;
        }
        Lua::Config::get((Config *)local_100,s_rotation_7ffada84e538);
        bVar8 = Lua::Config::pop((Config *)local_100,&local_a8);
        if (!bVar8) {
          local_a8 = 0.0;
        }
        puVar2 = *(undefined8 **)(this + 0x418);
        if (puVar2 == *(undefined8 **)(this + 0x420)) {
          FUN_7ffada664310((longlong *)(this + 0x410),puVar2,&local_b8);
        }
        else {
          *puVar2 = local_b8;
          puVar2[1] = uStack_b0;
          puVar2[2] = local_a8;
          puVar2[3] = pcStack_a0;
          puVar2[4] = local_98;
          puVar2[5] = CONCAT71(uStack_8f,uStack_90);
          *(longlong *)(this + 0x418) = *(longlong *)(this + 0x418) + 0x30;
        }
        lua_settop(local_100[0],0xfffffffe);
        iVar16 = iVar16 + 1;
        bVar8 = Lua::Config::open((Config *)local_100,iVar16);
      } while (bVar8);
    }
    lua_settop(local_100[0],0xfffffffe);
  }
  paVar1 = this + 0x410;
  if (*(longlong *)paVar1 == *(longlong *)(this + 0x418)) {
    FUN_7ffada664600((longlong *)paVar1,1);
    local_f0 = DAT_7ffada84f6a0;
    Lua::Config::get((Config *)local_100,s_default_scale_7ffada8551f8);
    Lua::Config::pop((Config *)local_100,(double *)&local_f0);
    **(ulonglong **)paVar1 = (ulonglong)local_f0;
    Lua::Config::get((Config *)local_100,s_default_chart_7ffada855208);
    bVar8 = Lua::Config::pop((Config *)local_100,(int *)&local_f0);
    uVar18 = 6;
    if (bVar8) {
      uVar18 = local_f0._0_4_;
    }
    *(undefined4 *)(*(longlong *)paVar1 + 8) = uVar18;
    pMVar12 = (MovingObject *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
    if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
      pMVar12 = pMVar17;
    }
    uVar19 = (**(code **)(*(longlong *)pMVar12 + 0x178))();
    *(double *)(*(longlong *)paVar1 + 0x10) = (double)(float)(uVar19 ^ DAT_7ffada84cdb0);
    *(char **)(*(longlong *)paVar1 + 0x18) = pcVar6;
    *(char **)(*(longlong *)paVar1 + 0x20) = pcVar7;
  }
  pkVar3 = *(kneeboard_map_page **)(this + 0x418);
  for (pkVar15 = *(kneeboard_map_page **)paVar1; pkVar15 != pkVar3; pkVar15 = pkVar15 + 0x30) {
    find_available_coverage(this,pkVar15);
  }
  local_f0 = (char *)((ulonglong)local_f0 & 0xffffffff00000000);
  Lua::Config::get((Config *)local_100,s_number_of_additional_pages_7ffada855218);
  Lua::Config::pop((Config *)local_100,(int *)&local_f0);
  FUN_7ffada66a740((longlong *)(this + 0x480),
                   (*(longlong *)(this + 0x418) - *(longlong *)(this + 0x410)) / 0x30 +
                   ((ulonglong)local_f0 & 0xffffffff));
  lVar14 = *(longlong *)(this + 0x480);
  pMVar12 = pMVar17;
  if (*(longlong *)(this + 0x488) - lVar14 >> 3 != 0) {
    do {
      *(int *)(pMVar17 + lVar14 + 4) = (int)pMVar12;
      uVar19 = (int)pMVar12 + 1;
      pMVar17 = pMVar17 + 8;
      lVar14 = *(longlong *)(this + 0x480);
      pMVar12 = (MovingObject *)(ulonglong)uVar19;
    } while ((ulonglong)(longlong)(int)uVar19 <
             (ulonglong)(*(longlong *)(this + 0x488) - lVar14 >> 3));
  }
  init_zones(this);
  local_a8 = _DAT_7ffada84dd80;
  pcStack_a0 = pcRam00007ffada84dd88;
  local_b8 = (char *)s_AI__AttackGroup_7ffada84d5f8._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_AI__AttackGroup_7ffada84d5f8._12_2_,s_AI__AttackGroup_7ffada84d5f8._8_4_);
  uStack_b0._0_7_ = CONCAT16(s_AI__AttackGroup_7ffada84d5f8[0xe],(uint6)uStack_b0);
  uStack_b0 = (ulonglong)(uint7)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f710;
  pcStack_a0 = pcRam00007ffada84f718;
  local_b8 = (char *)s_AI__AttackUnit_7ffada84d608._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_AI__AttackUnit_7ffada84d608._12_2_,s_AI__AttackUnit_7ffada84d608._8_4_);
  uStack_b0 = (ulonglong)(uint6)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84dd70;
  pcStack_a0 = pcRam00007ffada84dd78;
  local_b8 = (char *)s_AI__Bombing_7ffada84d618._0_8_;
  uStack_b0 = (ulonglong)CONCAT12(s_AI__Bombing_7ffada84d618[10],s_AI__Bombing_7ffada84d618._8_2_);
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0.0;
  pcStack_a0 = (char *)0x0;
  pcVar11 = malloc(0x20);
  if (pcVar11 == (char *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x20);
  }
  uVar4 = s_AI__AttackMapObject_7ffada84d628._8_8_;
  local_a8 = _DAT_7ffada853450;
  pcStack_a0 = pcRam00007ffada853458;
  *(undefined8 *)pcVar11 = s_AI__AttackMapObject_7ffada84d628._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
  *(undefined2 *)(pcVar11 + 0x10) = s_AI__AttackMapObject_7ffada84d628._16_2_;
  pcVar11[0x12] = s_AI__AttackMapObject_7ffada84d628[0x12];
  pcVar11[0x13] = '\0';
  local_b8 = pcVar11;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0.0;
  pcStack_a0 = (char *)0x0;
  pcVar11 = malloc(0x20);
  if (pcVar11 == (char *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x20);
  }
  uVar4 = s_AI__BombingRunway_7ffada84d640._8_8_;
  local_a8 = _DAT_7ffada854400;
  pcStack_a0 = pcRam00007ffada854408;
  *(undefined8 *)pcVar11 = s_AI__BombingRunway_7ffada84d640._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar4;
  pcVar11[0x10] = s_AI__BombingRunway_7ffada84d640[0x10];
  pcVar11[0x11] = '\0';
  local_b8 = pcVar11;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84d120;
  pcStack_a0 = pcRam00007ffada84d128;
  local_b8 = (char *)s_AI__Orbit_7ffada84d658._0_8_;
  uStack_b0 = (ulonglong)(byte)s_AI__Orbit_7ffada84d658[8];
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada855390;
  pcStack_a0 = pcRam00007ffada855398;
  local_b8 = (char *)0x646e614c3a3a4941;
  uStack_b0 = 0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f700;
  pcStack_a0 = pcRam00007ffada84f708;
  local_b8 = (char *)s_AI__Refueling_7ffada84d678._0_8_;
  uStack_b0._0_5_ = CONCAT14(s_AI__Refueling_7ffada84d678[0xc],s_AI__Refueling_7ffada84d678._8_4_);
  uStack_b0 = (ulonglong)(uint5)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  pcVar11 = pcRam00007ffada8553a8;
  dVar5 = _DAT_7ffada8553a0;
  local_a8 = _DAT_7ffada8553a0;
  pcStack_a0 = pcRam00007ffada8553a8;
  local_b8 = (char *)s_AI__Follow_7ffada84d688._0_8_;
  uStack_b0 = (ulonglong)(ushort)s_AI__Follow_7ffada84d688._8_2_;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = dVar5;
  pcStack_a0 = pcVar11;
  local_b8 = (char *)s_AI__Escort_7ffada84d698._0_8_;
  uStack_b0 = (ulonglong)(ushort)s_AI__Escort_7ffada84d698._8_2_;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada855390;
  pcStack_a0 = pcRam00007ffada855398;
  local_b8 = (char *)0x6b7361543a3a4941;
  uStack_b0 = 0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f700;
  pcStack_a0 = pcRam00007ffada84f708;
  local_b8 = (char *)s_AI__resetTask_7ffada84d6b8._0_8_;
  uStack_b0._0_5_ = CONCAT14(s_AI__resetTask_7ffada84d6b8[0xc],s_AI__resetTask_7ffada84d6b8._8_4_);
  uStack_b0 = (ulonglong)(uint5)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84f710;
  pcStack_a0 = pcRam00007ffada84f718;
  local_b8 = (char *)s_onRadioMessage_7ffada855238._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_onRadioMessage_7ffada855238._12_2_,s_onRadioMessage_7ffada855238._8_4_);
  uStack_b0 = (ulonglong)(uint6)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  local_a8 = _DAT_7ffada84dd80;
  pcStack_a0 = pcRam00007ffada84dd88;
  local_b8 = (char *)s_onClipboardText_7ffada855248._0_8_;
  uStack_b0._0_6_ =
       CONCAT24(s_onClipboardText_7ffada855248._12_2_,s_onClipboardText_7ffada855248._8_4_);
  uStack_b0._0_7_ = CONCAT16(s_onClipboardText_7ffada855248[0xe],(uint6)uStack_b0);
  uStack_b0 = (ulonglong)(uint7)uStack_b0;
  listen_event((avDevice *)this,(basic_string<char> *)&local_b8);
  if ((char *)0xf < pcStack_a0) {
    free(local_b8);
  }
  listen_command((avDevice *)this,0xa3c);
  Lua::Config::get((Config *)local_100,s_note_generate_template_7ffada855258);
  Lua::Config::pop((Config *)local_100,(basic_string<char> *)(this + 0x4d8));
  Lua::Config::~Config((Config *)local_e8);
  Lua::Config::~Config((Config *)local_100);
  return;
}

