// addr:      7102633b90
// offset:    0x2633b90
// name:      FUN_7102633b90
// mangled:   
// signature: undefined8 __cdecl FUN_7102633b90(long param_1, long * * * * * * * * * param_2, uint param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7102633b90(long param_1,long *********param_2,uint param_3,undefined8 param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar5;
  byte ****ppppbVar6;
  long ****pppplVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 local_40;
  uint local_38 [2];
  
  pcVar3 = strstr((char *)param_2,"stage");
  uVar4 = 0;
  if (pcVar3 != (char *)0x0) {
    if (2 < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar3 = ".shpcanim";
    lVar1 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0xb4) * 8) + 0xd0;
    ppppppppplVar5 = param_2;
    FUN_7102618630((uint *)&local_40,lVar1,(byte *)param_2,(byte *)".shpcanim");
    if ((uint)local_40 == 0xffffff) {
      pcVar3 = ".shpc";
      FUN_7102618630(local_38,lVar1,(byte *)param_2,(byte *)".shpc");
      uVar4 = extraout_x1_00;
      ppppppppplVar5 = param_2;
    }
    else {
      local_38[0] = (uint)local_40;
      local_40 = CONCAT44(local_40._4_4_,0xffffff);
      uVar4 = extraout_x1;
    }
    uVar2 = local_38[0];
    if (local_38[0] == 0xffffff) {
      uVar4 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_7102619a80(puVar9,uVar4,ppppppppplVar5,(byte ****)pcVar3,param_5,param_6,param_7,param_8
                      );
        FUN_710392eb40((ulong)puVar9);
      }
      ppppppppplVar5 = *(long **********)(param_1 + 8);
      uVar8 = (ulong)(param_3 & 1);
      ppppbVar6 = (byte ****)local_38;
      pppplVar7 = (long ****)&DAT_00000004;
      FUN_7103176db0(&local_40,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0),
                     (long ****)ppppppppplVar5,ppppbVar6,(long ****)&DAT_00000004,uVar8,param_7,
                     param_8);
      uVar4 = local_40;
      local_40 = 0;
      puVar9 = *(undefined8 **)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_7102619a80(puVar9,extraout_x1_01,ppppppppplVar5,ppppbVar6,pppplVar7,uVar8,param_7,
                       param_8);
        FUN_710392eb40((ulong)puVar9);
      }
      local_40 = 0;
      FUN_7103540b10(DAT_7105332f20,uVar2,ppppppppplVar5,ppppbVar6,pppplVar7,uVar8,param_7,param_8);
      uVar4 = 1;
    }
  }
  return uVar4;
}

