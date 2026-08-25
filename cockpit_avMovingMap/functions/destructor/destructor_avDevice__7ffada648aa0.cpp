/*
 * CockpitBase.dll class reconstruction
 * Function: ~avDevice
 * Address : 7ffada648aa0
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::avDevice::~avDevice(void) __ptr64 */

void __thiscall cockpit::avDevice::~avDevice(avDevice *this)

{
                    /* 0x238aa0  759  ??1avDevice@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable_for_cockpit__ccContextRelatedObject_;
  *(undefined ***)(this + 0x20) = vftable_for_cockpit__avLuaRegistrable_;
  if (*(longlong *)(this + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(this + 0x58) + 0x68) = 1;
    wTime::KillMe(*(wTime **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  close_LuaState(this);
  FUN_7ffada5f1590(this + 0x70,this + 0x70,*(longlong **)(*(longlong *)(this + 0x70) + 8));
  free(*(void **)(this + 0x70));
  FUN_7ffada5f14c0((longlong *)(this + 0x60),this + 0x60);
  if (0xf < *(ulonglong *)(this + 0x48)) {
    free(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0xf;
  this[0x30] = (avDevice)0x0;
                    /* WARNING: Could not recover jumptable at 0x7ffada648b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Common::FakeUnknown<Common::Identifiable>::~FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)this);
  return;
}

