// addr:      7101afed00
// offset:    0x1afed00
// name:      FUN_7101afed00
// mangled:   
// signature: undefined __cdecl FUN_7101afed00(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101afed00(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  char *pcVar4;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined **local_40;
  long *local_38;
  
  if (*(char *)((long)param_1 + 0x1f7) != '\0') {
    **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xffffefff;
    *(undefined1 *)((long)param_1 + 0x1f7) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  if (((int)param_1[0x1d] != 0) && ((int)param_1[0x1d] != 5)) {
    FUN_7101afdf90((long)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  lVar14 = *(long *)(DAT_710532f820 + 8);
  uVar2 = FUN_7101eefe30(*(long *)(*(long *)(lVar14 + 0x110) + 0x80));
  lVar7 = DAT_710532f820;
  if ((*(int *)(lVar14 + 0xf8) == 0 && (((uint)uVar2 ^ 0xffffffff) & 1) == 0) &&
      *(char *)(lVar14 + 0x142) == '\0') {
LAB_7101afedd4:
    lVar14 = *(long *)(DAT_710532f828 + 8);
    uVar2 = FUN_7101eefe30(*(long *)(*(long *)(lVar14 + 0x110) + 0x80));
    lVar7 = DAT_710532f828;
    if ((*(int *)(lVar14 + 0xf8) == 0 && (((uint)uVar2 ^ 0xffffffff) & 1) == 0) &&
        *(char *)(lVar14 + 0x142) == '\0') {
      bVar13 = 0;
      uVar2 = extraout_x1_00;
    }
    else {
      lVar14 = *(long *)(DAT_710532f828 + 8);
      uVar2 = FUN_7101eefe30(*(long *)(*(long *)(lVar14 + 0x110) + 0x80));
      bVar5 = false;
      if ((*(int *)(lVar14 + 0xf8) != 0 || (((uint)uVar2 ^ 0xffffffff) & 1) != 0) ||
          *(char *)(lVar14 + 0x142) != '\0') {
        bVar5 = 3 < **(int **)(lVar7 + 0x10);
      }
      bVar13 = bVar5 ^ 1;
      uVar2 = extraout_x1_01;
    }
  }
  else {
    lVar14 = *(long *)(DAT_710532f820 + 8);
    uVar2 = FUN_7101eefe30(*(long *)(*(long *)(lVar14 + 0x110) + 0x80));
    if (((*(int *)(lVar14 + 0xf8) != 0 || (((uint)uVar2 ^ 0xffffffff) & 1) != 0) ||
         *(char *)(lVar14 + 0x142) != '\0') && (3 < **(int **)(lVar7 + 0x10))) goto LAB_7101afedd4;
    bVar13 = 1;
    uVar2 = extraout_x1;
  }
  if (*(byte *)(param_1 + 0x3f) != bVar13) {
    if (*(int *)((long)param_1 + 0x1fc) == 1) {
      lVar14 = *(long *)param_1[0x26];
      FUN_7103776910(&local_40,lVar14 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar3 = local_38;
      lVar7 = *local_38;
      if (lVar7 != 0) {
        *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar13 ^ 1;
      }
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      if (bVar13 == 0) {
        pcVar4 = "type_00";
      }
      else {
        pcVar4 = "type_02";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),(long)pcVar4);
      uVar2 = extraout_x1_02;
    }
    *(byte *)(param_1 + 0x3f) = bVar13;
  }
  if (((*(long *)param_1[0x29] != 0) &&
      (plVar3 = (long *)((long *)param_1[0x29])[1], plVar3 != (long *)0x0)) &&
     (auVar15 = (**(code **)(*plVar3 + 0x138))(), uVar2 = auVar15._8_8_, (auVar15._0_8_ & 1) != 0))
  {
    *(undefined8 *)param_1[0x29] = 0;
    *(undefined8 *)(param_1[0x29] + 8) = 0;
    FUN_7103775fa0(*(long **)param_1[0x25],uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)((long)param_1 + 0x1f2) = 0;
    uVar2 = extraout_x1_03;
  }
  iVar6 = *(int *)((long)param_1 + 0x1e4);
  if (iVar6 == 0) {
LAB_7101aff038:
    if ((*(long *)param_1[0x2b] != 0) &&
       (plVar3 = (long *)((long *)param_1[0x2b])[1], plVar3 != (long *)0x0)) {
      if ((*(long *)param_1[0x31] == 0) ||
         (plVar8 = (long *)((long *)param_1[0x31])[1], plVar8 == (long *)0x0)) {
        auVar15 = (**(code **)(*plVar3 + 0x138))();
        uVar2 = auVar15._8_8_;
        if ((auVar15._0_8_ & 1) != 0) {
          *(undefined8 *)param_1[0x2b] = 0;
          *(undefined8 *)(param_1[0x2b] + 8) = 0;
          FUN_7103775fa0(*(long **)param_1[0x26],uVar2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          *(undefined1 *)((long)param_1 + 500) = 0;
          uVar2 = extraout_x1_06;
        }
      }
      else {
        auVar15 = (**(code **)(*plVar8 + 0x138))(plVar8);
        uVar2 = auVar15._8_8_;
        if ((auVar15._0_8_ & 1) != 0) {
          *(undefined8 *)param_1[0x31] = 0;
          *(undefined8 *)(param_1[0x31] + 8) = 0;
          FUN_710377aee0(0x3f800000,(long)(param_1 + 0x2a));
          uVar2 = extraout_x1_05;
        }
      }
    }
    iVar6 = *(int *)((long)param_1 + 0x1ec);
    if (0 < iVar6) {
      if ((*(char *)((long)param_1 + 500) != '\0') && (*(char *)((long)param_1 + 0x1f6) != '\0')) {
        *(int *)((long)param_1 + 0x1ec) = iVar6 + -1;
        if (iVar6 + -1 != 0 && 0 < iVar6) goto LAB_7101aff190;
        lVar7 = param_1[0x20];
        lVar14 = param_1[0x21];
        uVar11 = 0;
        if (lVar14 - lVar7 != 0) {
          uVar11 = (lVar14 - lVar7 >> 3) * 0x155 - 1;
        }
        uVar12 = param_1[0x24] + param_1[0x23];
        if (uVar11 == uVar12) {
          FUN_7101afbf30((ulong *)(param_1 + 0x1f),uVar2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          uVar12 = param_1[0x23] + param_1[0x24];
          lVar7 = param_1[0x20];
          lVar14 = param_1[0x21];
        }
        if (lVar14 == lVar7) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)(*(long *)(lVar7 + (uVar12 / 0x155) * 8) + (uVar12 % 0x155) * 0xc);
        }
        *puVar9 = &DAT_100000006;
        *(undefined4 *)(puVar9 + 1) = 0;
        param_1[0x24] = param_1[0x24] + 1;
      }
      *(undefined4 *)((long)param_1 + 0x1ec) = 0;
    }
  }
  else {
    plVar3 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    if (plVar3 == (long *)0x0) {
LAB_7101afef68:
      if (iVar6 != 3) {
        FUN_7101afbc50((long)param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
        *(undefined4 *)((long)param_1 + 0x1ec) = 0;
        *(undefined4 *)((long)param_1 + 0x1e4) = 0;
        uVar2 = extraout_x1_04;
        goto LAB_7101aff038;
      }
    }
    else {
      auVar15 = (**(code **)(*plVar3 + 0x48))();
      uVar2 = auVar15._8_8_;
      if ((auVar15._0_8_ & 1) == 0) {
        iVar6 = *(int *)((long)param_1 + 0x1e4);
        goto LAB_7101afef68;
      }
    }
    if (((*(char *)((long)param_1 + 0x1f2) == '\0') ||
        ((*(long *)param_1[0x29] != 0 && (((long *)param_1[0x29])[1] != 0)))) ||
       ((*(uint *)(param_1 + 0x1d) | 1) != 3)) goto LAB_7101aff038;
    if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) == '\0') {
      if (*(int *)((long)param_1 + 0x1fc) != 1) {
        lVar14 = *(long *)param_1[0x26];
        FUN_7103776910(&local_40,lVar14 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6
                       ,param_7,param_8);
        plVar3 = local_38;
        lVar7 = *local_38;
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
        }
        local_40 = &PTR_FUN_710523d9a8;
        local_38 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar3);
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x71042a3672);
        *(undefined4 *)((long)param_1 + 0x1fc) = 1;
      }
    }
    else if (*(int *)((long)param_1 + 0x1fc) != 2) {
      lVar14 = *(long *)param_1[0x26];
      FUN_7103776910(&local_40,lVar14 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar3 = local_38;
      lVar7 = *local_38;
      if (lVar7 != 0) {
        *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
      }
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x71042917af);
      *(undefined4 *)((long)param_1 + 0x1fc) = 2;
    }
  }
LAB_7101aff190:
  if (*(uint *)((long)param_1 + 0xe4) < 0x13) {
    uVar1 = *(uint *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0xe4) * 4 + 0x98);
    if (*(uint *)(param_1 + 0x1d) != uVar1) {
      *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1d);
      *(uint *)(param_1 + 0x1d) = uVar1;
      if (6 < uVar1) goto LAB_7101aff2f0;
      lVar7 = param_1[(long)(int)uVar1 * 2 + 6];
      param_1[1] = param_1[(long)(int)uVar1 * 2 + 5];
      param_1[2] = lVar7;
      pcVar10 = (code *)param_1[3];
      uVar11 = param_1[4] & 1;
      if (uVar11 != 0 || pcVar10 != (code *)0x0) {
        if (uVar11 != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(*param_1 + (param_1[4] >> 1)));
        }
        (*pcVar10)();
      }
      *(undefined4 *)((long)param_1 + 0xec) = 0;
    }
    if (*(char *)((long)param_1 + 0xf4) != '\0') {
      pcVar10 = (code *)param_1[3];
      uVar11 = param_1[4] & 1;
      if (uVar11 != 0 || pcVar10 != (code *)0x0) {
        if (uVar11 != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(*param_1 + (param_1[4] >> 1)));
        }
        (*pcVar10)();
      }
      *(undefined4 *)((long)param_1 + 0xec) = 0;
      *(undefined1 *)((long)param_1 + 0xf4) = 0;
    }
    if (*param_1 != 0) {
      pcVar10 = (code *)param_1[1];
      uVar11 = param_1[2] & 1;
      if (uVar11 != 0 || pcVar10 != (code *)0x0) {
        if (uVar11 != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(*param_1 + (param_1[2] >> 1)));
        }
        (*pcVar10)();
      }
    }
    *(int *)((long)param_1 + 0xec) = *(int *)((long)param_1 + 0xec) + 1;
    return;
  }
LAB_7101aff2f0:
                    /* WARNING: Subroutine does not return */
  abort();
}

