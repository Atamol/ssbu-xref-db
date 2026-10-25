// addr:      7101ef2480
// offset:    0x1ef2480
// name:      FUN_7101ef2480
// mangled:   
// signature: undefined __cdecl FUN_7101ef2480(undefined1[16] param_1, undefined4 param_2, float param_3, long param_4, undefined8 param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101ef2480(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,
                   undefined8 param_5,undefined **param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 extraout_d0;
  undefined8 uVar5;
  undefined8 extraout_var;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar7 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  if (*(int *)(param_4 + 0x24c) != 0) {
    if (*(int *)(*(long *)(*(long *)(param_4 + 0x270) + 8) + 0x1f8) != 0 ||
        *(int *)(*(long *)(*(long *)(param_4 + 0x278) + 8) + 0x1f8) != 0) {
      return;
    }
    if (*(uint *)(param_4 + 0x244) < 0x13) {
      *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0x244) * 4 + 0x1f8) = 5;
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    param_6 = (undefined **)&DAT_00000004;
    uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x15fdac38de,(long ****)&DAT_00000004,
                           param_7,param_8,param_9,param_10,param_11);
    uVar5 = extraout_d0;
    uVar7 = extraout_var;
    if ((uVar3 & 1) != 0) {
      auVar6 = FUN_71024076d0(local_70,0x15fdac38de);
      if (((local_60 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_58 == DAT_7106dd53ac)) {
        piVar4 = (int *)(local_60 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      goto LAB_7101ef2598;
    }
  }
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = uVar5;
  local_58 = 0x87650000000000;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  local_70[0] = 0;
  local_38 = 0;
LAB_7101ef2598:
  local_68 = &PTR_FUN_7104f73d50;
  local_60 = 0;
  local_50 = 0;
  auVar6 = FUN_7101f03200(auVar6,param_2,param_3,*(uint **)(*(long *)(param_4 + 0x270) + 8),
                          *(long **)(param_4 + 8),param_6,param_7,param_8,param_9,param_10,param_11)
  ;
  FUN_7101f03200(auVar6,param_2,param_3,*(uint **)(*(long *)(param_4 + 0x278) + 8),
                 *(long **)(param_4 + 8),param_6,param_7,param_8,param_9,param_10,param_11);
  FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x260),0x71042b4bf1);
  FUN_7103778300(0x3f800000,
                 *(long *)(*(long *)**(undefined8 **)(*(long *)*DAT_7105328e18 + 0x80) + 0x10),
                 0x710433a9e6);
  return;
}

