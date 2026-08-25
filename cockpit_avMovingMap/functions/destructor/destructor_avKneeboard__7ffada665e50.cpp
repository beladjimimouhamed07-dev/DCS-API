/*
 * CockpitBase.dll class reconstruction
 * Function: ~avKneeboard
 * Address : 7ffada665e50
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::avKneeboard::~avKneeboard(void) __ptr64 */

void __thiscall cockpit::avKneeboard::~avKneeboard(avKneeboard *this)

{
  SimpleOctTree *pSVar1;
  
                    /* 0x255e50  797  ??1avKneeboard@cockpit@@UEAA@XZ */
  *(undefined ***)this = &_vftable__for__cockpit__ccContextRelatedObject__;
  *(undefined ***)(this + 0x20) = &_vftable__for__cockpit__avLuaRegistrable__;
  *(undefined ***)(this + 0x98) = &_vftable_;
  if (*(SimpleOctTree **)(this + 0x428) != (SimpleOctTree *)0x0) {
    SimpleOctTree::DeleteAll(*(SimpleOctTree **)(this + 0x428));
    pSVar1 = *(SimpleOctTree **)(this + 0x428);
    if (pSVar1 != (SimpleOctTree *)0x0) {
      SimpleOctTree::~SimpleOctTree(pSVar1);
      free(pSVar1);
    }
    *(undefined8 *)(this + 0x428) = 0;
  }
  if (*(SimpleOctTree **)(this + 0x430) != (SimpleOctTree *)0x0) {
    SimpleOctTree::DeleteAll(*(SimpleOctTree **)(this + 0x430));
    pSVar1 = *(SimpleOctTree **)(this + 0x430);
    if (pSVar1 != (SimpleOctTree *)0x0) {
      SimpleOctTree::~SimpleOctTree(pSVar1);
      free(pSVar1);
    }
    *(undefined8 *)(this + 0x430) = 0;
  }
  if (0xf < *(ulonglong *)(this + 0x4f0)) {
    free(*(void **)(this + 0x4d8));
  }
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0xf;
  this[0x4d8] = (avKneeboard)0x0;
  FUN_7ffada667990((undefined8 *)(this + 0x4c0));
  if (*(void **)(this + 0x4a8) != (void *)0x0) {
    free(*(void **)(this + 0x4a8));
    *(undefined8 *)(this + 0x4a8) = 0;
    *(undefined8 *)(this + 0x4b0) = 0;
    *(undefined8 *)(this + 0x4b8) = 0;
  }
  if (*(void **)(this + 0x480) != (void *)0x0) {
    free(*(void **)(this + 0x480));
    *(undefined8 *)(this + 0x480) = 0;
    *(undefined8 *)(this + 0x488) = 0;
    *(undefined8 *)(this + 0x490) = 0;
  }
  if (*(void **)(this + 0x468) != (void *)0x0) {
    free(*(void **)(this + 0x468));
    *(undefined8 *)(this + 0x468) = 0;
    *(undefined8 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x478) = 0;
  }
  if (*(void **)(this + 0x450) != (void *)0x0) {
    free(*(void **)(this + 0x450));
    *(undefined8 *)(this + 0x450) = 0;
    *(undefined8 *)(this + 0x458) = 0;
    *(undefined8 *)(this + 0x460) = 0;
  }
  if (*(void **)(this + 0x438) != (void *)0x0) {
    free(*(void **)(this + 0x438));
    *(undefined8 *)(this + 0x438) = 0;
    *(undefined8 *)(this + 0x440) = 0;
    *(undefined8 *)(this + 0x448) = 0;
  }
  if (*(void **)(this + 0x410) != (void *)0x0) {
    free(*(void **)(this + 0x410));
    *(undefined8 *)(this + 0x410) = 0;
    *(undefined8 *)(this + 0x418) = 0;
    *(undefined8 *)(this + 0x420) = 0;
  }
  *(undefined ***)(this + 0x98) = avMovingMap::vftable;
  *(undefined ***)(this + 0x2a8) = ClipVolume::vftable;
  *(undefined ***)(this + 0xa8) = ClipVolume::vftable;
  avDevice::~avDevice((avDevice *)this);
  return;
}

