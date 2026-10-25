// addr:      71019a7fb0
// offset:    0x19a7fb0
// name:      FUN_71019a7fb0
// mangled:   
// signature: undefined __cdecl FUN_71019a7fb0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019a7fb0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x2d4) == 0) {
    plVar1 = (long *)(param_1 + 0x2e0);
    param_3 = (undefined **)0x0;
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 1;
    FUN_7103771a80(plVar1,0,0);
    if (*(int *)(param_1 + 0x2d0) - 0xcU < 3) {
      (**(code **)(*(long *)*plVar1 + 0x60))((long *)*plVar1,1);
      (**(code **)(*(long *)*plVar1 + 0x70))((long *)*plVar1,1);
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x2e0) + 0x280) != '\0') {
    *(char **)(param_1 + 0x308) = "type_00";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
    *(undefined2 *)(param_1 + 800) = 0;
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_7105307d50 != -1) {
      FUN_71032dae00(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
      DAT_7105307d50 = -1;
    }
    if (*(uint *)(param_1 + 0x2cc) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 3;
      if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar2 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar2;
        if (0x12 < uVar2) goto LAB_71019a85cc;
        *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 1;
        if (*(int *)(param_1 + 0x2cc) < 0x12) {
          uVar2 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar2;
          if (0x12 < uVar2) goto LAB_71019a85cc;
          *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 2;
          if (*(int *)(param_1 + 0x2cc) < 0x12) {
            uVar2 = *(int *)(param_1 + 0x2cc) + 1;
            *(uint *)(param_1 + 0x2cc) = uVar2;
            if (0x12 < uVar2) goto LAB_71019a85cc;
            *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 0x20;
          }
        }
      }
      if (2 < *(int *)(param_1 + 0x2d0) - 0xcU) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x2e0) + 0x60))(*(long **)(param_1 + 0x2e0),0);
                    /* WARNING: Could not recover jumptable at 0x0071019a8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x2e0) + 0x70))(*(long **)(param_1 + 0x2e0),0);
      return;
    }
    goto LAB_71019a85cc;
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x2e0) + 0x25c);
  if (iVar4 == -1) {
    return;
  }
  if (iVar4 == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    piVar7 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar6 = DAT_710532f7b0;
    iVar4 = DAT_7105307d50;
    uVar5 = FUN_71032e1b80(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    *(uint *)(param_1 + 0x318) = (uint)uVar5 & 0xff;
    uVar2 = FUN_71032e1a80(*(long *)(lVar6 + 8),iVar4);
    *(uint *)(param_1 + 0x31c) = uVar2 & 0xffff;
    uVar5 = *(ulong *)(piVar7 + 2);
    puVar8 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x12915a4ff6);
    if (((uVar5 & 0xff00000000000000) == 0xc100000000000000) && ((uVar5 & 0xffffffffff) != 0)) {
      if (((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar8 & 0xffffffffff) != 0)) && ((((ulong)puVar8 ^ uVar5) & 0xffffffffff) == 0))
      goto LAB_71019a832c;
LAB_71019a8310:
      pcVar10 = "mnu_amiibo_reading_succession_level";
      pcVar12 = "mnu_amiibo_reading_succession";
    }
    else {
      if ((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar8 & 0xffffffffff) != 0)) goto LAB_71019a8310;
LAB_71019a832c:
      pcVar10 = "mnu_amiibo_reading_succession_plizardon_level";
      pcVar12 = "mnu_amiibo_reading_succession_plizardon";
    }
    *(char **)(param_1 + 0x308) = "type_04";
    if ((uVar2 & 0xffff) < 2) {
      pcVar12 = pcVar10;
    }
    *(char **)(param_1 + 0x310) = pcVar12;
    *(undefined2 *)(param_1 + 800) = 0x100;
    FUN_710323b9e0(*(long *)(param_1 + 0x2f8),extraout_x1_00,(long *********)param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    puVar13 = *(undefined1 **)(piVar7 + 2);
    lVar6 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar2 = FUN_71032632a0(lVar6,(ulong)puVar13);
    puVar8 = puVar13;
    if ((uVar2 & 1) != 0) {
      puVar8 = FUN_71032631a0(lVar6,0x11b1ccb807);
    }
    uVar3 = FUN_71032633f0(lVar6,(ulong)puVar13);
    uVar2 = (uint)*(byte *)((long)piVar7 + 0x12);
    if (uVar3 <= *(byte *)((long)piVar7 + 0x12)) {
      uVar2 = 0;
    }
    local_48 = FUN_7103238a70((ulong)puVar8,(ulong)uVar2,1);
    if ((local_48 & 0xffffffffff) != 0) {
      lVar6 = *(long *)(param_1 + 0x2f8);
      FUN_710323c4e0(lVar6,&local_48,(long *********)(long)*(int *)(lVar6 + 0x70),
                     (byte ****)(ulong)*(uint *)(lVar6 + 0x68),param_5,param_6,param_7,param_8);
    }
    uVar2 = *(uint *)(param_1 + 0x2cc);
    if (0x12 < uVar2) goto LAB_71019a85cc;
    uVar11 = 0xd;
LAB_71019a8400:
    *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = uVar11;
  }
  else if (iVar4 == 1) {
    *(char **)(param_1 + 0x308) = "type_05";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reset_fp_level_confirm";
    *(undefined2 *)(param_1 + 800) = 0x100;
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar6 = DAT_710532f7b0;
    iVar4 = DAT_7105307d50;
    uVar5 = FUN_71032e1b80(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    *(uint *)(param_1 + 0x318) = (uint)uVar5 & 0xff;
    uVar2 = FUN_71032e1a80(*(long *)(lVar6 + 8),iVar4);
    *(uint *)(param_1 + 0x31c) = uVar2 & 0xffff;
    FUN_710323b9e0(*(long *)(param_1 + 0x2f8),extraout_x1,(long *********)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar6 = *(long *)(param_1 + 0x2f8);
    FUN_710323c4e0(lVar6,(ulong *)&DAT_71045439b0,(long *********)(long)*(int *)(lVar6 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar6 + 0x68),param_5,param_6,param_7,param_8);
    uVar2 = *(uint *)(param_1 + 0x2cc);
    if (0x12 < uVar2) goto LAB_71019a85cc;
    uVar11 = 0xe;
    goto LAB_71019a8400;
  }
  puVar9 = (uint *)(param_1 + 0x2cc);
  if ((int)*puVar9 < 0x12) {
    uVar2 = *puVar9 + 1;
    *puVar9 = uVar2;
    if (0x12 < uVar2) {
LAB_71019a85cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 1;
    if (*(int *)(param_1 + 0x2cc) < 0x12) {
      uVar2 = *(int *)(param_1 + 0x2cc) + 1;
      *puVar9 = uVar2;
      if (0x12 < uVar2) goto LAB_71019a85cc;
      *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 0xb;
      if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar2 = *(int *)(param_1 + 0x2cc) + 1;
        *puVar9 = uVar2;
        if (0x12 < uVar2) goto LAB_71019a85cc;
        *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 0x20;
      }
    }
  }
  if (*(int *)(param_1 + 0x2d0) - 0xcU < 3) {
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x60))(*(long **)(param_1 + 0x2e0),0);
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x70))(*(long **)(param_1 + 0x2e0),0);
  }
  return;
}

