/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada613cb0
 * Address : 7ffada613cb0
 * Role    : method
 */


Factory * FUN_7ffada613cb0(Factory *param_1,uint param_2)

{
  Common::Factory::~Factory(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0x10);
  }
  return param_1 + -0x10;
}

