/*
 * CockpitBase.dll class reconstruction
 * Function: make_default_activity
 * Address : 7ffada64a1f0
 * Role    : method
 */


/* protected: void __cdecl cockpit::avDevice::make_default_activity(double) __ptr64 */

void __thiscall cockpit::avDevice::make_default_activity(avDevice *this,double param_1)

{
  double dVar1;
  wTime *this_00;
  double local_res8;
  wTime *local_res10;
  Config local_28 [32];
  
                    /* 0x23a1f0  5109  ?make_default_activity@avDevice@cockpit@@IEAAXN@Z */
  local_res8 = param_1;
  if (*(lua_State **)(this + 0x50) != (lua_State *)0x0) {
    Lua::Config::Config(local_28,*(lua_State **)(this + 0x50),-0x2712);
    Lua::Config::get(local_28,s_device_timer_dt_7ffada853748);
    Lua::Config::pop(local_28,&local_res8);
    Lua::Config::~Config(local_28);
  }
  if (*(longlong *)(this + 0x58) == 0) {
    this_00 = (wTime *)FUN_7ffada82b29c(0x70);
    dVar1 = local_res8;
    if (this_00 == (wTime *)0x0) {
      this_00 = (wTime *)0x0;
    }
    else {
      local_res10 = this_00;
      wTime::wTime(this_00);
      this_00[0x68] = (wTime)0x0;
      *(avDevice **)(this_00 + 0x58) = this;
      *(double *)(this_00 + 0x60) = dVar1;
      *(undefined ***)this_00 = avDevice_BasicTimer::vftable;
      ed::basic_string<char>::format
                ((basic_string<char> *)(this_00 + 0x38),s__s__update_7ffada853758,
                 *(undefined8 *)(this + 0x10));
    }
    *(wTime **)(this + 0x58) = this_00;
    return;
  }
  *(double *)(*(longlong *)(this + 0x58) + 0x60) = local_res8;
  return;
}

