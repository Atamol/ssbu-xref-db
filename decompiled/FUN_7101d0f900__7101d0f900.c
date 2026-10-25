// addr:      7101d0f900
// offset:    0x1d0f900
// name:      FUN_7101d0f900
// mangled:   
// signature: undefined __cdecl FUN_7101d0f900(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0f900(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar3;
  char *pcVar4;
  long ****pppplVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  undefined1 auVar8 [16];
  long ***local_50;
  undefined4 local_44;
  
  pppplVar5 = &local_50;
  *param_1 = &PTR_FUN_71050aeac8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = (int)param_3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = extraout_x1;
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000008;
      auVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      uVar3 = auVar8._8_8_;
      param_3 = pppplVar5;
      if (((auVar8._0_8_ & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         uVar3 = extraout_x1_00, param_3 = pppplVar5, puVar2 != (undefined8 *)0x0))
      goto LAB_7101d0f9b4;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101d0f9b4:
  FUN_7103773200(puVar2,uVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0x10] = puVar2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  ppppppppplVar6 = (long *********)&DAT_7104545598;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  ppppbVar7 = (byte ****)0x1;
  FUN_71032cbf30(param_1 + 0x10,*param_2,(ulong *)&DAT_7104545598,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)param_1[0x10] + 0x10),0x710439d651);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)param_1[0x10] + 0x10),0x71042d64bc);
  if (iVar1 == 6) {
    pcVar4 = "trophy_offset_00";
  }
  else {
    pcVar4 = "trophy_offset_01";
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)param_1[0x10] + 0x10),(long)pcVar4);
  FUN_710323eba0((undefined8 *)(*param_2 + 8),(ulong *)&DAT_7104545598,ppppppppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  return;
}

