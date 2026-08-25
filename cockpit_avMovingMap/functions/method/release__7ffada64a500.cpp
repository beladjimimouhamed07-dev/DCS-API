/*
 * CockpitBase.dll class reconstruction
 * Function: release
 * Address : 7ffada64a500
 * Role    : method
 * Vtable slots: 11
 */


/* public: virtual void __cdecl cockpit::avDevice::release(void) __ptr64 */

void __thiscall cockpit::avDevice::release(avDevice *this)

{
                    /* 0x23a500  5551  ?release@avDevice@cockpit@@UEAAXXZ */
  FUN_7ffada5f21d0((longlong *)(this + 0x60));
  if (*(longlong *)(this + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(this + 0x58) + 0x68) = 1;
    wTime::KillMe(*(wTime **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  close_LuaState(this);
  return;
}

