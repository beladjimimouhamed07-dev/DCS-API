/*
 * CockpitBase.dll class reconstruction
 * Function: get_camera
 * Address : 7ffada668690
 * Role    : method
 * Vtable slots: 3, 29
 */


/* public: virtual class Graphics::Camera const & __ptr64 __cdecl
   cockpit::avMovingMap::get_camera(void) __ptr64 */

Camera * __thiscall cockpit::avMovingMap::get_camera(avMovingMap *this)

{
  Camera *pCVar1;
  
                    /* 0x258690  3785  ?get_camera@avMovingMap@cockpit@@UEAAAEBVCamera@Graphics@@XZ
                        */
  pCVar1 = get_camera(this,false,DAT_7ffada84d238,DAT_7ffada84cc34,DAT_7ffada84d238,DAT_7ffada84cc34
                     );
  return pCVar1;
}

