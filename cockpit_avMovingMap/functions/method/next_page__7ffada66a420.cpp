/*
 * CockpitBase.dll class reconstruction
 * Function: next_page
 * Address : 7ffada66a420
 * Role    : method
 */


/* public: void __cdecl cockpit::avKneeboard::next_page(void) __ptr64 */

void __thiscall cockpit::avKneeboard::next_page(avKneeboard *this)

{
                    /* 0x25a420  5158  ?next_page@avKneeboard@cockpit@@QEAAXXZ */
  *(int *)(this + 0x40c) = *(int *)(this + 0x40c) + 1;
  if ((ulonglong)(*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3) <=
      (ulonglong)*(uint *)(this + 0x40c)) {
    *(undefined4 *)(this + 0x40c) = 0;
  }
  if (*(int *)(this + 0x498) != 0) {
    *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
    return;
  }
  *(undefined4 *)(this + 0x498) = 0x7fffffff;
  return;
}

