// addr:      7101b5e230
// offset:    0x1b5e230
// name:      FUN_7101b5e230
// mangled:   
// signature: undefined __cdecl FUN_7101b5e230(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b5e230(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined4 auStack_80 [2];
  undefined **local_78;
  long local_70;
  int local_68;
  undefined1 local_60;
  long ***local_40;
  ulong local_38;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x2e4) != 0) {
    iVar3 = FUN_710143ea40((long *)*DAT_71052c35b8);
    if (iVar3 == 2) {
      uVar9 = 0xff1e41304c97;
    }
    else {
      if (iVar3 != 1) {
        return;
      }
      FUN_71024076d0(auStack_80,0xe35ab7bad);
      local_78 = &PTR_FUN_7104f73d50;
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
        piVar7 = (int *)(local_70 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uVar9 = 0xff1e1eed5764;
      local_70 = 0;
      local_60 = 0;
    }
    lVar8 = DAT_710532f820;
    bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),
                           uVar9 | 0x58ff000000000000);
    if (bVar2) {
      FUN_71032edf70(*(uint **)(lVar8 + 0x10),uVar9 | 0x58ff000000000000);
      FUN_71032f1bb0(*(long *)(lVar8 + 8),*(uint **)(lVar8 + 0x10),param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      *(undefined4 *)(*(long *)(lVar8 + 8) + 0x118) = 0;
    }
    *(undefined1 *)(param_1 + 0x2fc) = 0;
    FUN_7103776640(&local_40,**(long **)(param_1 + 8) + 8,(byte ****)"set_key_help_00",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    uVar9 = local_38;
    if ((*(long *)(local_38 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(local_38 + 8) + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    local_40 = (long ***)&PTR_FUN_710523d988;
    local_38 = 0;
    if (uVar9 != 0) {
      uVar6 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar9);
    }
    if (*(uint *)(param_1 + 0x2dc) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2dc) * 4 + 0x290) = 8;
      return;
    }
    goto LAB_7101b5e48c;
  }
  if (DAT_71052c35b8 == (long *)0x0) {
    plVar4 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar5 = extraout_x1;
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_24 = 0;
        local_40 = (long ***)&DAT_00000008;
        param_3 = &local_40;
        auVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
        uVar5 = auVar10._8_8_;
        if (((auVar10._0_8_ & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
           uVar5 = extraout_x1_00, plVar4 != (long *)0x0)) goto LAB_7101b5e34c;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101b5e34c:
    FUN_710143e850(plVar4,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
    DAT_71052c35b8 = plVar4;
  }
  lVar8 = *DAT_71052c35b8;
  *(undefined8 *)(lVar8 + 400) = 0;
  uVar5 = (**(code **)(*(long *)(DAT_71052c50f0 + 0x588) + 0x18))(DAT_71052c50f0 + 0x588);
  *(undefined8 *)(lVar8 + 0x198) = uVar5;
  if (*(uint *)(lVar8 + 0xf4) < 0x13) {
    *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0xf4) * 4 + 0xa8) = 1;
    *(undefined4 *)(lVar8 + 0x108) = 0;
    return;
  }
LAB_7101b5e48c:
                    /* WARNING: Subroutine does not return */
  abort();
}

