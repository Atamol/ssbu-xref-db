// addr:      7101d43780
// offset:    0x1d43780
// name:      FUN_7101d43780
// mangled:   
// signature: undefined FUN_7101d43780(void)


void FUN_7101d43780(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *********ppppppppplVar5;
  long ****pppplVar6;
  ulong uVar7;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined **ppuStack_60;
  ulong uStack_58;
  undefined **ppuStack_50;
  ulong uStack_48;
  long ***ppplStack_40;
  undefined4 uStack_34;
  
  ppppppppplVar5 = param_3;
  FUN_7103778300(0x3f800000,(long)param_3[1],0x71043be92b);
  FUN_7103776390(&ppuStack_50,param_3,(long ****)ppppppppplVar5,param_4,param_5,param_6,param_7,
                 param_8);
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x1e8) + (long)param_2 * 8);
  FUN_7103776910(&ppuStack_60,(long)param_3,(long ****)"set_icn_profile",ppppppppplVar5,param_4,
                 param_5,param_6,param_7,param_8);
  plVar2 = FUN_7103240430(*(long **)(param_1 + 0x158),uVar7,(long ****)ppppppppplVar5,param_4,
                          param_5,param_6,param_7,param_8);
  if (*(long *)plVar2[1] == 0) {
    FUN_71037790a0(uStack_58,1,ppppppppplVar5,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7103778b80(uStack_58,(long)plVar2,ppppppppplVar5,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&ppuStack_70,(long)param_3,(long ****)"set_icn_profile_bg",ppppppppplVar5,param_4,
                 param_5,param_6,param_7,param_8);
  ppuStack_80 = &PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar5,param_4,param_5,param_6,param_7,
                          param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      uStack_34 = 0;
      ppplStack_40 = (long ***)&SUB_00000020;
      pppplVar6 = &ppplStack_40;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_34);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101d43880;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101d43880:
  puVar1 = puStack_68;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *puVar3 = *puStack_68;
  puVar3[1] = puStack_68[1];
  puVar3[2] = puStack_68[2];
  puVar3[3] = puStack_68[3];
  puStack_78 = puVar3;
  FUN_710337d450((long)&ppuStack_80,uVar7);
  ppuStack_80 = &PTR_FUN_710523d9a8;
  puStack_78 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  ppuStack_70 = &PTR_FUN_710523d9a8;
  puStack_68 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  uVar7 = uStack_58;
  ppuStack_60 = &PTR_FUN_710523d9a8;
  uStack_58 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = uStack_48;
  ppuStack_50 = &PTR_FUN_710523d988;
  uStack_48 = 0;
  if (uVar7 != 0) {
    uVar4 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

