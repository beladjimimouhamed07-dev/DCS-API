/*
 * CockpitBase.dll class reconstruction
 * Function: ~ccMovingMap
 * Address : 7ffada7947e0
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::ccMovingMap::~ccMovingMap(void) __ptr64 */

void __thiscall cockpit::ccMovingMap::~ccMovingMap(ccMovingMap *this)

{
  ccMovingMap *pcVar1;
  undefined8 *puVar2;
  SimpleOctTree *this_00;
  undefined8 *puVar3;
  
                    /* 0x3847e0  906  ??1ccMovingMap@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  puVar2 = *(undefined8 **)(this + 0xa8);
  for (puVar3 = *(undefined8 **)(this + 0xa0); puVar3 != puVar2; puVar3 = puVar3 + 1) {
    if ((SimpleOctTree *)*puVar3 != (SimpleOctTree *)0x0) {
      SimpleOctTree::DeleteAll((SimpleOctTree *)*puVar3);
      this_00 = (SimpleOctTree *)*puVar3;
      if (this_00 != (SimpleOctTree *)0x0) {
        SimpleOctTree::~SimpleOctTree(this_00);
        free(this_00);
      }
      *puVar3 = 0;
    }
  }
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    free(*(void **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    free(*(void **)(this + 0xa0));
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
  }
  pcVar1 = this + 0x80;
  if (*(longlong **)pcVar1 != (longlong *)0x0) {
    FUN_7ffada62f2d0(*(longlong **)pcVar1,*(longlong **)(this + 0x88));
    free(*(void **)pcVar1);
    *(undefined8 *)pcVar1 = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x90) = 0;
  }
  ccIndicatorPage::~ccIndicatorPage((ccIndicatorPage *)this);
  return;
}

