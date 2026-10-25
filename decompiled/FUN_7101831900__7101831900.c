// addr:      7101831900
// offset:    0x1831900
// name:      FUN_7101831900
// mangled:   
// signature: undefined __cdecl FUN_7101831900(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101831900(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined **local_90;
  long lStack_88;
  long *local_70;
  undefined *local_60;
  long lStack_58;
  undefined **local_40;
  
  lVar7 = *(long *)(DAT_71052c4c58 + 8);
  local_60 = &DAT_71050a2800;
  lStack_58 = param_1;
  local_40 = &local_60;
  FUN_71016b4f70(*(long *)(lVar7 + 0x88),(long *)&local_60);
  if (&local_60 == local_40) {
    pcVar5 = *(code **)(*local_40 + 0x20);
LAB_7101831968:
    (*pcVar5)();
  }
  else if (local_40 != (undefined **)0x0) {
    pcVar5 = *(code **)(*local_40 + 0x28);
    goto LAB_7101831968;
  }
  local_90 = &PTR_FUN_71050a2848;
  lStack_88 = param_1;
  local_70 = (long *)&local_90;
  FUN_71016b50a0(*(long *)(lVar7 + 0x88),(long *)&local_90);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_71018319b0:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_71018319b0;
  }
  FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(DAT_710532f840 + 8) + 0xcc) = 1;
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 8) {
    uVar3 = 0xff1a9512056b;
LAB_7101831a24:
    if (*(char *)(param_1 + 0x133) == '\0') {
      param_3 = (long ****)0x1;
      FUN_71033145d0(DAT_710532f8d0,uVar3 | 0xd9ff000000000000,1,param_4,param_5,param_6,param_7,
                     param_8);
      cVar2 = *(char *)(param_1 + 0x128);
      uVar4 = extraout_x1_01;
      goto joined_r0x007101831a98;
    }
    FUN_71023edc60(DAT_7105329f38,uVar3 | 0xd9ff000000000000,param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    *(undefined1 *)(param_1 + 0x133) = 0;
    uVar4 = extraout_x1_00;
    if (*(char *)(param_1 + 0x128) != '\0') goto LAB_7101831b4c;
LAB_7101831a48:
    if (*(char *)(param_1 + 0x129) == '\0') {
      lVar7 = *(long *)(param_1 + 0xe8);
      lVar6 = *(long *)(lVar7 + 0x80);
      if (0x12 < *(uint *)(lVar6 + 0x134)) goto LAB_7101831c24;
      iVar1 = *(int *)(param_1 + 0xe0);
      *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0x134) * 4 + 0xe8) = 3;
      *(bool *)(lVar6 + 0xf85) = iVar1 != 2;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x100);
      lVar6 = *(long *)(lVar7 + 0x80);
      if (0x12 < *(uint *)(lVar6 + 0xd4)) goto LAB_7101831c24;
      iVar1 = *(int *)(param_1 + 0xe0);
      *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0xd4) * 4 + 0x88) = 1;
      *(bool *)(lVar6 + 0x2da) = iVar1 != 2;
    }
    *(undefined1 *)(lVar7 + 0x70) = 0;
    FUN_7101b1aeb0(*(long *)(param_1 + 0xf0),uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    if (iVar1 == 0x18) {
      uVar3 = 0xff17d8a015fc;
      goto LAB_7101831a24;
    }
    if (iVar1 == 0x1b) {
      uVar3 = 0xff198605a867;
      goto LAB_7101831a24;
    }
    if (iVar1 - 6U < 0x16) {
      uVar4 = extraout_x1;
      if ((0x3d3f8U >> (ulong)(iVar1 - 6U & 0x1f) & 1) != 0) {
        if (iVar1 == 0xc) {
          lVar7 = *(long *)(DAT_710532f8d0 + 8);
          *(undefined8 *)(lVar7 + 0x10) = 0xd9ffff0000000000;
          *(undefined2 *)(lVar7 + 0x88) = 0;
          *(undefined1 *)(lVar7 + 0x8a) = 0;
        }
        goto LAB_7101831ae4;
      }
    }
    else {
LAB_7101831ae4:
      lVar7 = DAT_710532f8d0;
      FUN_7103313c50(*(ulong **)(DAT_710532f8d0 + 8));
      lVar6 = *(long *)(lVar7 + 8);
      uVar4 = extraout_x1_02;
      if (*(char *)(lVar6 + 0x22) != '\0') {
        param_3 = (long ****)0x0;
        FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
        *(undefined1 *)(lVar6 + 0x22) = 0;
        lVar6 = *(long *)(lVar7 + 8);
        uVar4 = extraout_x1_03;
      }
      if (*(char *)(lVar6 + 0x23) != '\0') {
        *(undefined1 *)(lVar6 + 0x23) = 0;
        param_3 = (long ****)0x0;
        FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
        uVar4 = extraout_x1_04;
      }
    }
    cVar2 = *(char *)(param_1 + 0x128);
joined_r0x007101831a98:
    if (cVar2 == '\0') goto LAB_7101831a48;
LAB_7101831b4c:
    if (*(long *)*DAT_7105328e18 != 0) {
      FUN_7103778760(*(long *)(*(long *)**(undefined8 **)(*(long *)*DAT_7105328e18 + 0x80) + 0x10),
                     0x71042d4aad);
    }
    lVar7 = *(long *)(param_1 + 0xf8);
    lVar6 = *(long *)(lVar7 + 0x80);
    if (0x12 < *(uint *)(lVar6 + 0x104)) goto LAB_7101831c24;
    iVar1 = *(int *)(param_1 + 0xe0);
    *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0x104) * 4 + 0xb8) = 3;
    *(bool *)(lVar6 + 0x31a) = iVar1 != 2;
    *(undefined1 *)(lVar7 + 0x70) = 0;
  }
  nn::oe::SetCpuBoostMode(0);
  if (*(uint *)(param_1 + 0xb4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 2;
    return;
  }
LAB_7101831c24:
                    /* WARNING: Subroutine does not return */
  abort();
}

