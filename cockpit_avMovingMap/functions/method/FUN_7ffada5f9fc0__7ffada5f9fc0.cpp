/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada5f9fc0
 * Address : 7ffada5f9fc0
 * Role    : method
 */


ulonglong FUN_7ffada5f9fc0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong uVar3;
  undefined7 uVar4;
  float local_res8 [2];
  float local_res10 [2];
  
  fVar1 = *param_1;
  if (((fVar1 <= *param_2) || (fVar1 < *param_3 || fVar1 == *param_3)) &&
     ((*param_2 <= param_1[3] || (*param_3 <= param_1[3])))) {
    fVar1 = param_1[1];
    if (((fVar1 <= param_2[1]) || (fVar1 < param_3[1] || fVar1 == param_3[1])) &&
       ((param_2[1] <= param_1[4] || (param_3[1] <= param_1[4])))) {
      fVar1 = param_1[2];
      if (((fVar1 <= param_2[2]) || (fVar1 < param_3[2] || fVar1 == param_3[2])) &&
         ((param_2[2] <= param_1[5] || (param_3[2] <= param_1[5])))) {
        cVar2 = FUN_7ffada5f9230(param_1,param_2);
        uVar4 = extraout_var;
        if (cVar2 == '\0') {
          cVar2 = FUN_7ffada5f9230(param_1,param_3);
          uVar4 = extraout_var_00;
          if (cVar2 == '\0') {
            uVar3 = FUN_7ffada5f9de0(param_1,param_2,param_3,local_res10,local_res8);
            return uVar3;
          }
        }
        return CONCAT71(uVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

