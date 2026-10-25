// addr:      7101c761a0
// offset:    0x1c761a0
// name:      FUN_7101c761a0
// mangled:   
// signature: undefined __cdecl FUN_7101c761a0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c761a0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long ****pppplVar4;
  long lVar5;
  float fVar6;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  long *local_58;
  undefined **local_50;
  long *local_48;
  long ***local_40;
  undefined4 local_34;
  
  lVar5 = param_1 + 0x18;
  fVar6 = (float)(param_2 - *(int *)(param_1 + 0x1d0)) * 40.0;
  FUN_7103776910(&local_50,lVar5,(long ****)"balloon_type_02",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_60,lVar5,(long ****)"set_txt_xsize_m",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_70,lVar5,(long ****)"set_txt_xsize_l",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&SUB_00000020;
      param_3 = &local_40;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar2 != (long *)0x0)) goto LAB_7101c7626c;
    }
    plVar2 = (long *)0x0;
  }
LAB_7101c7626c:
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar5 = *local_48;
  *plVar2 = lVar5;
  plVar2[1] = local_48[1];
  plVar2[2] = local_48[2];
  plVar2[3] = local_48[3];
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
    *(ulong *)(lVar5 + 0x30) =
         CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20),
                  (float)*(undefined8 *)(lVar5 + 0x30) + 0.0);
  }
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&SUB_00000020;
      param_3 = &local_40;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar2 != (long *)0x0)) goto LAB_7101c76334;
    }
    plVar2 = (long *)0x0;
  }
LAB_7101c76334:
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar5 = *local_58;
  *plVar2 = lVar5;
  plVar2[1] = local_58[1];
  plVar2[2] = local_58[2];
  plVar2[3] = local_58[3];
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
    *(ulong *)(lVar5 + 0x30) =
         CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20),
                  (float)*(undefined8 *)(lVar5 + 0x30) + 0.0);
  }
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&SUB_00000020;
      pppplVar4 = &local_40;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x20,pppplVar4,param_4,param_5,param_6,param_7,
                                          param_8), plVar2 != (long *)0x0)) goto LAB_7101c763f0;
    }
    plVar2 = (long *)0x0;
  }
LAB_7101c763f0:
  plVar1 = local_68;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar5 = *local_68;
  *plVar2 = lVar5;
  plVar2[1] = local_68[1];
  plVar2[2] = local_68[2];
  plVar2[3] = local_68[3];
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
    *(ulong *)(lVar5 + 0x30) =
         CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20),
                  (float)*(undefined8 *)(lVar5 + 0x30) + 0.0);
  }
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  *(int *)(param_1 + 0x1d0) = param_2;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  plVar2 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  plVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  return;
}

