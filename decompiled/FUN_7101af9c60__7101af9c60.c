// addr:      7101af9c60
// offset:    0x1af9c60
// name:      FUN_7101af9c60
// mangled:   
// signature: undefined __cdecl FUN_7101af9c60(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af9c60(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined **local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0x1fc) != 1) {
      lVar4 = **(long **)(param_1 + 0x130);
      FUN_7103776910(&local_30,lVar4 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar1 = local_28;
      lVar2 = *local_28;
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
      }
      local_30 = &PTR_FUN_710523d9a8;
      local_28 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71042a3672);
      *(undefined4 *)(param_1 + 0x1fc) = 1;
      param_2 = extraout_x1;
    }
  }
  FUN_7101afd490(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(long *)(param_1 + 0x120) != 0) {
    auVar5 = FUN_7101afa660(param_1,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar3 = auVar5._4_4_;
    switch(auVar5._0_4_) {
    case 2:
      FUN_7101afdbe0(param_1,(ulong)(iVar3 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(char *)(param_1 + 500) != '\0') {
        if (*(int *)(param_1 + 0x1e4) == 1) {
          FUN_7101afb9a0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_7101afdcf0(param_1,(ulong)(iVar3 != 0),param_3,param_4,param_5,param_6,param_7,param_8
                        );
          if (*(uint *)(param_1 + 0xe4) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 5;
            return;
          }
          goto LAB_7101af9e34;
        }
        FUN_7101afbc50(param_1,(ulong)(iVar3 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
      }
      if (0x12 < *(uint *)(param_1 + 0xe4)) {
LAB_7101af9e34:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 0;
      break;
    case 4:
      FUN_7101afd1f0(param_1,(ulong)(iVar3 != 0),(long ****)(ulong)(auVar5._8_4_ != 0),param_4,
                     param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)(param_1 + 0xe4)) goto LAB_7101af9e34;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 2;
      break;
    case 5:
      FUN_7101afdcf0(param_1,(ulong)(iVar3 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7101afd000(param_1,(ulong)(iVar3 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
      break;
    case 6:
      FUN_7101afbc50(param_1,(ulong)(iVar3 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  return;
}

