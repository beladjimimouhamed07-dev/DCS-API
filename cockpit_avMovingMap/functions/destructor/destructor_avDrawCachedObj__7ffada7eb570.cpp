/*
 * CockpitBase.dll class reconstruction
 * Function: ~avDrawCachedObj
 * Address : 7ffada7eb570
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::avDrawCachedObj::~avDrawCachedObj(void) __ptr64 */

void __thiscall cockpit::avDrawCachedObj::~avDrawCachedObj(avDrawCachedObj *this)

{
                    /* 0x3db570  765  ??1avDrawCachedObj@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  reset_draw_objects(this);
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

