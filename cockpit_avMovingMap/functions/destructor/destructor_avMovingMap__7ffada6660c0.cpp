/*
 * CockpitBase.dll class reconstruction
 * Function: ~avMovingMap
 * Address : 7ffada6660c0
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::avMovingMap::~avMovingMap(void) __ptr64 */

void __thiscall cockpit::avMovingMap::~avMovingMap(avMovingMap *this)

{
                    /* 0x2560c0  811  ??1avMovingMap@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x210) = ClipVolume::vftable;
  *(undefined ***)(this + 0x10) = ClipVolume::vftable;
  return;
}

