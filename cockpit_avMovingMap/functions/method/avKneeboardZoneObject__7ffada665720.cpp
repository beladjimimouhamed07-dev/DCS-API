/*
 * CockpitBase.dll class reconstruction
 * Function: avKneeboardZoneObject
 * Address : 7ffada665720
 * Role    : method
 */


/* public: __cdecl cockpit::avKneeboardZoneObject::avKneeboardZoneObject(class Lua::Config &
   __ptr64) __ptr64 */

avKneeboardZoneObject * __thiscall
cockpit::avKneeboardZoneObject::avKneeboardZoneObject(avKneeboardZoneObject *this,Config *param_1)

{
  void *_Src;
  float *pfVar1;
  bool bVar2;
  void *_Dst;
  int iVar3;
  float local_res18 [2];
  float local_res20 [2];
  float local_38 [4];
  
                    /* 0x255720  326  ??0avKneeboardZoneObject@cockpit@@QEAA@AEAVConfig@Lua@@@Z */
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = SimpleOctTreeLoad::vftable;
  *(undefined4 *)(this + 0x10) = 0x7f7fffff;
  *(undefined4 *)(this + 0x14) = 0x7f7fffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined4 *)(this + 0x1c) = 0xff7fffff;
  *(undefined4 *)(this + 0x20) = 0xff7fffff;
  *(undefined4 *)(this + 0x24) = 0xff7fffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0x100;
  avDrawCachedObj::avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  _Dst = malloc(0x78);
  if (_Dst == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x78);
  }
  _Src = *(void **)(this + 0x58);
  memmove(_Dst,_Src,*(longlong *)(this + 0x60) - (longlong)_Src);
  if (_Src != (void *)0x0) {
    free(_Src);
  }
  *(void **)(this + 0x58) = _Dst;
  *(void **)(this + 0x60) = _Dst;
  *(longlong *)(this + 0x68) = (longlong)_Dst + 0x78;
  iVar3 = 1;
  bVar2 = Lua::Config::open(param_1,1);
  if (bVar2) {
    do {
      local_res20[0] = 0.0;
      Lua::Config::get(param_1,2);
      Lua::Config::pop(param_1,local_res20);
      local_res18[0] = 0.0;
      Lua::Config::get(param_1,1);
      Lua::Config::pop(param_1,local_res18);
      local_38[0] = local_res18[0];
      local_38[1] = 0.0;
      local_38[2] = local_res20[0];
      pfVar1 = *(float **)(this + 0x60);
      if (pfVar1 == *(float **)(this + 0x68)) {
        FUN_7ffada60de80((longlong *)(this + 0x58),pfVar1,(undefined8 *)local_38);
      }
      else {
        *pfVar1 = local_res18[0];
        pfVar1[1] = 0.0;
        pfVar1[2] = local_res20[0];
        *(longlong *)(this + 0x60) = *(longlong *)(this + 0x60) + 0xc;
      }
      lua_settop(*(undefined8 *)param_1,0xfffffffe);
      iVar3 = iVar3 + 1;
      bVar2 = Lua::Config::open(param_1,iVar3);
    } while (bVar2);
  }
  set_points(this,(vector<osg::Vec3f,ed::allocator<osg::Vec3f>_> *)(this + 0x58));
  return this;
}

