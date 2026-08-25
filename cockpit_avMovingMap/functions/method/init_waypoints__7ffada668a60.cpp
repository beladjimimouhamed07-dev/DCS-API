/*
 * CockpitBase.dll class reconstruction
 * Function: init_waypoints
 * Address : 7ffada668a60
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::init_waypoints(void) __ptr64 */

void __thiscall cockpit::avKneeboard::init_waypoints(avKneeboard *this)

{
  ulonglong uVar1;
  size_t _Size;
  undefined8 *_Src;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  SimpleOctTree *pSVar7;
  lua_State *plVar8;
  longlong *plVar9;
  MovingObject *this_00;
  longlong lVar10;
  undefined1 *puVar11;
  void **ppvVar12;
  undefined8 *puVar13;
  avMovingMapPoint *this_01;
  void *_Dst;
  char *pcVar14;
  ulonglong uVar15;
  void *_Dst_00;
  MovingObject *pMVar16;
  size_t _Size_00;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  undefined8 local_1a0 [2];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178 [2];
  undefined4 local_168;
  undefined4 local_164;
  char *local_160;
  undefined8 local_158;
  avMovingMapPoint *local_150;
  undefined1 local_148 [64];
  float local_108 [8];
  char local_e6;
  void *local_d8;
  void *pvStack_d0;
  void *local_c8;
  void *pvStack_c0;
  void *local_88 [3];
  ulonglong local_70;
  ulonglong local_68;
  
                    /* 0x258a60  4483  ?init_waypoints@avKneeboard@cockpit@@IEAAXXZ */
  local_68 = DAT_7ffada94e840 ^ (ulonglong)auStack_1c8;
  if (this[0x408] == (avKneeboard)0x0) {
    uVar18 = (undefined4)DAT_7ffada855388;
    uVar19 = (undefined4)((ulonglong)DAT_7ffada855388 >> 0x20);
  }
  else {
    uVar18 = (undefined4)DAT_7ffada855380;
    uVar19 = (undefined4)((ulonglong)DAT_7ffada855380 >> 0x20);
  }
  fVar20 = (float)(double)CONCAT44(uVar19,uVar18);
  uStack_188 = CONCAT44(fVar20,(uint)fVar20 ^ DAT_7ffada84cdb0);
  local_190 = (double)CONCAT44(0xc3960000,(uint)fVar20 ^ DAT_7ffada84cdb0);
  local_180 = (double)CONCAT44(fVar20,0x46ea6000);
  pSVar7 = SimpleOctTree::create_quad_tree
                     ((BoundingBoxImpl<osg::Vec3f> *)&local_190,DAT_7ffada84cc34);
  *(SimpleOctTree **)(this + 0x428) = pSVar7;
  plVar8 = (lua_State *)(**(code **)(**(longlong **)globalDispatcher_exref + 0xd0))();
  Lua::Config::Config((Config *)local_178,plVar8,-0x2712);
  bVar3 = Lua::Config::open((Config *)local_178,s_db_human_group_route_points_7ffada855270);
  if (bVar3) {
    plVar8 = avDevice::ensured_Lua((avDevice *)this,(char *)0x0);
    Lua::Config::Config((Config *)local_1a0,plVar8,-0x2712);
    iVar5 = 1;
    local_1a8 = 1;
    bVar3 = Lua::Config::open((Config *)local_178,1);
    if (bVar3) {
      do {
        this_01 = (avMovingMapPoint *)0x0;
        local_108[0] = 0.0;
        local_108[1] = 0.0;
        local_108[2] = 0.0;
        pvStack_d0 = (void *)0x0;
        local_c8 = (void *)0x0;
        pvStack_c0 = (void *)0xf;
        local_d8 = (void *)0x0;
        read_waypoint((Waypoint *)local_108,(Config *)local_178);
        if (((byte)(local_e6 - 0xdU) < 2) || (local_e6 == '2')) {
          uVar4 = read_airdrome_id((Config *)local_178);
          plVar9 = (longlong *)
                   (**(code **)(**(longlong **)instance_exref + 0x10))
                             (*(longlong **)instance_exref,uVar4);
          if ((plVar9 == (longlong *)0x0) ||
             (this_00 = (MovingObject *)(**(code **)(*plVar9 + 0x38))(plVar9),
             this_00 == (MovingObject *)0x0)) goto LAB_7ffada668d95;
          lVar10 = (**(code **)(*(longlong *)this_00 + 0x148))(this_00);
          fVar20 = *(float *)(lVar10 + 0x30);
          fVar21 = *(float *)(lVar10 + 0x38);
          iVar5 = (**(code **)(*(longlong *)this_00 + 400))(this_00);
          iVar6 = (**(code **)(*(longlong *)this_00 + 400))(this_00);
          if (iVar6 == 0x80) {
            MovingObject::Type(this_00);
          }
          iVar6 = (**(code **)(*(longlong *)this_00 + 400))(this_00);
          if (iVar5 == 0x200) {
            puVar11 = (undefined1 *)(**(code **)(*(longlong *)this_00 + 0x3e0))(this_00,0);
            if (local_148 != puVar11) {
              fVar20 = *(float *)(puVar11 + 0x30);
              fVar21 = *(float *)(puVar11 + 0x38);
            }
            pMVar16 = this_00 + 0x2538;
            if ((MovingObject *)&local_d8 == pMVar16) goto LAB_7ffada668d85;
            if (0xf < *(ulonglong *)(this_00 + 0x2550)) {
              pMVar16 = *(MovingObject **)pMVar16;
            }
            FUN_7ffada5f0b10(&local_d8,pMVar16,*(size_t *)(this_00 + 0x2548));
            local_108[0] = fVar20;
            iVar5 = local_1a8;
            local_108[2] = fVar21;
          }
          else {
            if (iVar6 == 0x800) {
              local_168 = 3;
              puVar17 = &local_168;
            }
            else {
              local_164 = 3;
              puVar17 = &local_164;
            }
            ppvVar12 = (void **)(**(code **)(**(longlong **)globalDispatcher_exref + 0x130))
                                          (*(longlong **)globalDispatcher_exref,local_88,
                                           *(undefined4 *)(this_00 + 0x1c),puVar17);
            if (&local_d8 != ppvVar12) {
              if ((void *)0xf < pvStack_c0) {
                free(local_d8);
              }
              local_d8 = *ppvVar12;
              pvStack_d0 = ppvVar12[1];
              local_c8 = ppvVar12[2];
              pvStack_c0 = ppvVar12[3];
              ppvVar12[2] = (void *)0x0;
              *(undefined1 *)ppvVar12 = 0;
              ppvVar12[3] = (void *)0xf;
            }
            if (0xf < local_70) {
              free(local_88[0]);
            }
LAB_7ffada668d85:
            local_108[0] = fVar20;
            iVar5 = local_1a8;
            local_108[2] = fVar21;
          }
        }
        else {
LAB_7ffada668d95:
          fVar20 = local_108[0];
        }
        local_190 = (double)fVar20;
        uStack_188 = 0;
        local_180 = (double)local_108[2];
        puVar13 = (undefined8 *)to_map_units(this,(Vec3d *)local_88);
        local_190 = (double)*puVar13;
        uStack_188 = puVar13[1];
        local_180 = (double)puVar13[2];
        local_150 = (avMovingMapPoint *)FUN_7ffada82b29c(0x140);
        if (local_150 != (avMovingMapPoint *)0x0) {
          this_01 = (avMovingMapPoint *)avMovingMapPoint::avMovingMapPoint(local_150);
        }
        *(undefined4 *)(this_01 + 0x90) = 0;
        if (local_c8 != (void *)0x0) {
          (**(code **)(*(longlong *)this_01 + 0x18))(this_01,&local_d8);
        }
        *(int *)(this_01 + 0x138) = iVar5 + -1;
        uVar2 = _DAT_7ffada960f50;
        *(undefined8 *)(this_01 + 0x120) = _DAT_7ffada960f48;
        *(undefined8 *)(this_01 + 0x128) = uVar2;
        *(undefined8 *)(this_01 + 0x130) = DAT_7ffada960f58;
        avMovingMapPoint::setPoint(this_01,(Vec3d *)&local_190);
        SimpleOctTree::AddObject(*(SimpleOctTree **)(this + 0x428),(SimpleOctTreeLoad *)this_01);
        puVar13 = *(undefined8 **)(this + 0x440);
        if (puVar13 == *(undefined8 **)(this + 0x448)) {
          lVar10 = (longlong)puVar13 - *(longlong *)(this + 0x438) >> 3;
          if (lVar10 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_7ffada5f0ae0();
          }
          uVar1 = lVar10 + 1;
          uVar15 = (longlong)*(undefined8 **)(this + 0x448) - *(longlong *)(this + 0x438) >> 3;
          if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
            uVar15 = 0x1fffffffffffffff;
          }
          else {
            uVar15 = (uVar15 >> 1) + uVar15;
            if (uVar15 < uVar1) {
              uVar15 = uVar1;
            }
          }
          _Size = uVar15 * 8;
          _Dst = malloc(_Size);
          if (_Dst == (void *)0x0) {
            ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,_Size);
          }
          *(avMovingMapPoint **)((longlong)_Dst + lVar10 * 8) = this_01;
          _Src = *(undefined8 **)(this + 0x438);
          if (puVar13 == *(undefined8 **)(this + 0x440)) {
            _Size_00 = (longlong)*(undefined8 **)(this + 0x440) - (longlong)_Src;
            _Dst_00 = _Dst;
            puVar13 = _Src;
          }
          else {
            memmove(_Dst,_Src,(longlong)puVar13 - (longlong)_Src);
            _Size_00 = *(longlong *)(this + 0x440) - (longlong)puVar13;
            _Dst_00 = (void *)((longlong)_Dst + (lVar10 + 1) * 8);
          }
          memmove(_Dst_00,puVar13,_Size_00);
          if (*(void **)(this + 0x438) != (void *)0x0) {
            free(*(void **)(this + 0x438));
          }
          *(void **)(this + 0x438) = _Dst;
          *(void **)(this + 0x440) = (void *)((longlong)_Dst + uVar1 * 8);
          *(void **)(this + 0x448) = (void *)(_Size + (longlong)_Dst);
          iVar5 = local_1a8;
        }
        else {
          *puVar13 = this_01;
          *(longlong *)(this + 0x440) = *(longlong *)(this + 0x440) + 8;
        }
        Lua::Config::get((Config *)local_1a0,s_on_waypoint_adding_7ffada855290);
        iVar6 = lua_type(local_1a0[0],0xffffffff);
        if (iVar6 == 6) {
          lua_pushnumber(local_1a0[0],SUB84(local_190,0));
          lua_pushnumber(local_1a0[0],SUB84(local_180,0));
          lua_pushnumber(local_1a0[0],0);
          local_160 = s_on_waypoint_adding_7ffada855290;
          local_158 = ED_get_ticks();
          iVar6 = ED_lua_pcall(local_1a0[0],3,0,0);
          if (iVar6 == 0) {
            Lua::CallTiming::finish((CallTiming *)&local_160);
          }
          else {
            Lua::CallTiming::finish((CallTiming *)&local_160);
            pcVar14 = (char *)lua_tolstring(local_1a0[0],0xffffffff,0);
            Lua::Config::call_log((Config *)local_1a0,s_on_waypoint_adding_7ffada855290,pcVar14);
            lua_settop(local_1a0[0],0xfffffffe);
            Lua::CallTiming::finish((CallTiming *)&local_160);
          }
        }
        else {
          lua_settop(local_1a0[0],0xfffffffe);
        }
        lua_settop(local_178[0],0xfffffffe);
        if ((void *)0xf < pvStack_c0) {
          free(local_d8);
        }
        iVar5 = iVar5 + 1;
        local_1a8 = iVar5;
        bVar3 = Lua::Config::open((Config *)local_178,iVar5);
      } while (bVar3);
    }
    lua_settop(local_178[0],0xfffffffe);
    Lua::Config::~Config((Config *)local_1a0);
  }
  Lua::Config::~Config((Config *)local_178);
  return;
}

