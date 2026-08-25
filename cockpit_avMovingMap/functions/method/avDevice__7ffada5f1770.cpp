/*
 * CockpitBase.dll class reconstruction
 * Function: avDevice
 * Address : 7ffada5f1770
 * Role    : method
 */


/* public: __cdecl cockpit::avDevice::avDevice(class cockpit::avDevice const & __ptr64) __ptr64 */

avDevice * __thiscall cockpit::avDevice::avDevice(avDevice *this,avDevice *param_1)

{
  avDevice *paVar1;
  void *pvVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  
                    /* 0x1e1770  247  ??0avDevice@cockpit@@QEAA@AEBV01@@Z */
  Common::FakeUnknown<Common::Identifiable>::FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)this,
             (FakeUnknown<class_Common::Identifiable> *)param_1);
  *(undefined ***)this = ccContextRelatedObject::vftable;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined ***)this = vftable_for_cockpit__ccContextRelatedObject_;
  *(undefined ***)(this + 0x20) = vftable_for_cockpit__avLuaRegistrable_;
  this[0x28] = param_1[0x28];
  this[0x29] = param_1[0x29];
  FUN_7ffada5ef690((undefined8 *)(this + 0x30),(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  paVar1 = this + 0x60;
  *(longlong *)paVar1 = 0;
  *(undefined8 *)(this + 0x68) = 0;
  pvVar2 = malloc(0x30);
  if (pvVar2 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x30);
  }
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)paVar1 = pvVar2;
  FUN_7ffada5f10d0((longlong *)paVar1,(longlong *)(param_1 + 0x60),in_R8,in_R9);
  paVar1 = this + 0x70;
  *(longlong *)paVar1 = 0;
  *(undefined8 *)(this + 0x78) = 0;
  pvVar2 = malloc(0x40);
  if (pvVar2 == (void *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x40);
  }
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)paVar1 = pvVar2;
  FUN_7ffada5f1180((longlong *)paVar1,(longlong *)(param_1 + 0x70),in_R8,in_R9);
  this[0x80] = param_1[0x80];
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  this[0x90] = param_1[0x90];
  this[0x91] = param_1[0x91];
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}

