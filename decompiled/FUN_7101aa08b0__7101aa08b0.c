// addr:      7101aa08b0
// offset:    0x1aa08b0
// name:      FUN_7101aa08b0
// mangled:   
// signature: undefined __cdecl FUN_7101aa08b0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101aa08b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  long *plVar15;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x17c) == 0) {
    FUN_7103776910(&local_50,**(long **)(param_1 + 0x198) + 8,(long ****)"set_txt_report_count",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    piVar14 = (int *)**(undefined8 **)(*DAT_7105314510 + 0x68);
    iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_60);
    if (iVar2 == 0) {
      lVar10 = 0;
      uVar8 = 0;
      do {
        plVar5 = (long *)(*(long *)(piVar14 + 2) + 0x10dd8 + lVar10);
        lVar10 = lVar10 + 8;
        uVar3 = ((long)local_60 - *plVar5) * 1000000000;
        uVar1 = ((long)uVar3 >> 0x20) * 0xed75ed55 + ((uVar3 & 0xfffffe00) * 0xed75ed55 >> 0x20);
        uVar7 = (uint)uVar8;
        if (((long)(uVar3 + ((long)uVar3 >> 0x20) * -0x63a000da + ((long)uVar1 >> 0x20) +
                   ((long)((uVar3 & 0xfffffe00) * -0x63a000da + (uVar1 & 0xffffffff)) >> 0x20)) >>
            0x29) - ((long)uVar3 >> 0x3f) < (long)*piVar14) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = (ulong)uVar7;
      } while (lVar10 != 0xf0);
    }
    else {
      uVar8 = 0xffffffff;
    }
    uVar6 = 1;
    FUN_710377a280((long)&local_50,(byte *)"mnu_online_report_sixhour_count",1);
    uVar1 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    *(undefined2 *)(param_1 + 0x20a) = 0;
    FUN_7103776640(&local_50,**(long **)(param_1 + 0x198) + 8,(byte ****)"set_part_btn_01",uVar6,
                   uVar8,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_60,(long)&local_50,(long ****)"set_txt_00",uVar6,uVar8,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_48;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar1 != 0) {
      uVar3 = *(ulong *)(uVar1 + 0x18);
      *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar1);
    }
    uVar1 = local_58;
    if (*(long **)(local_58 + 0x10) != (long *)0x0) {
      uVar6 = 0;
      uVar8 = 0;
      local_50 = (undefined **)((ulong)local_50 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_58 + 0x10),(ushort *)&local_50,0,0);
    }
    FUN_7103776640(&local_50,**(long **)(param_1 + 0x198) + 8,(byte ****)"set_part_btn_01",uVar6,
                   uVar8,param_5,param_6,param_7,param_8);
    uVar3 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x710428106d);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar3);
    }
    FUN_7103776640(&local_50,**(long **)(param_1 + 0x198) + 8,(byte ****)"set_part_btn_00",uVar6,
                   uVar8,param_5,param_6,param_7,param_8);
    uVar3 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x7104433286);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar3);
    }
    FUN_7103776910(&local_50,**(long **)(param_1 + 0x198) + 8,(long ****)"set_txt_text_count",uVar6,
                   uVar8,param_5,param_6,param_7,param_8);
    uVar9 = 400;
    uVar6 = 0;
    FUN_710377a310((long)&local_50,2);
    uVar8 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_7103776910(&local_50,**(long **)(param_1 + 0x198) + 8,(long ****)"set_txt_report_count",
                   uVar6,uVar9,param_5,param_6,param_7,param_8);
    FUN_710377a310((long)&local_50,1);
    uVar8 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_7103771a80((long *)(param_1 + 0x1b0),0,1);
    plVar5 = *(long **)(param_1 + 0x1a8);
    plVar12 = (long *)plVar5[0x37];
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar5 + 0x37;
      plVar15 = plVar11;
      plVar13 = plVar12;
      do {
        if (0 < (int)plVar13[4]) {
          plVar15 = plVar13;
        }
        plVar13 = (long *)plVar13[(int)plVar13[4] < 1];
      } while (plVar13 != (long *)0x0);
      if (((plVar15 != plVar11) && ((int)plVar15[4] < 2)) &&
         (plVar15 = (long *)plVar15[5], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x1f8))(plVar15,0);
        (**(code **)(*plVar15 + 0x388))(plVar15,1,0);
        plVar5 = *(long **)(param_1 + 0x1a8);
        plVar12 = (long *)plVar5[0x37];
        plVar11 = plVar5 + 0x37;
      }
      plVar15 = plVar11;
      if (plVar12 != (long *)0x0) {
        do {
          if (1 < (int)plVar12[4]) {
            plVar15 = plVar12;
          }
          plVar12 = (long *)plVar12[(int)plVar12[4] < 2];
        } while (plVar12 != (long *)0x0);
        if (((plVar15 != plVar11) && ((int)plVar15[4] < 3)) &&
           (plVar12 = (long *)plVar15[5], plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          (**(code **)(*plVar12 + 0x388))(plVar12,1,0);
          plVar5 = *(long **)(param_1 + 0x1a8);
        }
      }
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,0);
    if (0x12 < *(uint *)(param_1 + 0x174)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x174) * 4 + 0x128) = 2;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
  }
  return;
}

