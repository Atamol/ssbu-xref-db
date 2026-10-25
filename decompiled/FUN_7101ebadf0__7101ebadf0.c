// addr:      7101ebadf0
// offset:    0x1ebadf0
// name:      FUN_7101ebadf0
// mangled:   
// signature: undefined __cdecl FUN_7101ebadf0(float param_1, long param_2, ulong param_3, undefined8 param_4, undefined8 param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ebadf0(float param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  uint auStack_f0 [2];
  char acStack_e8 [64];
  undefined **local_a8;
  long *local_a0;
  undefined **local_98;
  ulong local_90 [8];
  
  *(undefined1 *)(param_2 + 0x35) = 0;
  lVar8 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  if (lVar8 != 0) {
    puVar10 = *(undefined8 **)(lVar8 + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_710593ba40), iVar2 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_710593ba48), iVar2 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar10 != (undefined8 *)0x0) {
      for (puVar3 = (undefined8 *)(**(code **)*puVar10)(puVar10); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        if ((undefined8 **)puVar3 == &DAT_710593ba58) {
          lVar8 = puVar10[3];
          *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)((long)puVar10 + 0x54);
          if (lVar8 != 0) {
            *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)((long)puVar10 + 0x54);
            *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
          }
          lVar8 = puVar10[4];
          if (lVar8 != 0) {
            *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(puVar10 + 0xb);
            *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
          }
          if ((long *)puVar10[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar10[5] + 0x180))(0);
          }
          plVar4 = (long *)puVar10[6];
          if (plVar4 != (long *)0x0) {
            if (*(char *)((long)puVar10 + 99) == '\0') {
              (**(code **)(*plVar4 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar4 + 400))();
            }
          }
          *(undefined2 *)((long)puVar10 + 100) = 0;
          break;
        }
      }
    }
  }
  FUN_7103778950(*(long *)(*(long *)(param_2 + 0x18) + 8));
  FUN_7103776910(&local_a8,param_2,(long ****)"set_txt_bgm",param_4,param_5,param_6,param_7,param_8,
                 param_9);
  plVar4 = local_a0;
  lVar8 = *local_a0;
  if (((param_3 & 0xff00000000000000) != 0xd900000000000000) || ((param_3 & 0xffffffffff) == 0)) {
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71043e091b);
    FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710424fc57);
    if (local_a0 == (long *)0x0) {
      return;
    }
    goto LAB_7101ebb1a0;
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
  }
  lVar8 = *(long *)(DAT_710532f730 + 8);
  uVar7 = param_3;
  FUN_71032570e0((uint *)&local_98,*(long *)(lVar8 + 0x278),param_3);
  FUN_71003a4ca0(auStack_f0,"bgm_title_%s",local_90,uVar7,param_5,param_6,param_7,param_8,param_9);
  FUN_710377a120((long)&local_a8,acStack_e8,uVar7,param_5,param_6,param_7,param_8,param_9);
  FUN_7103776910(&local_98,param_2 + 0x10,(long ****)"set_txt_mask",uVar7,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_710377a120((long)&local_98,acStack_e8,uVar7,param_5,param_6,param_7,param_8,param_9);
  uVar1 = local_90[0];
  local_98 = &PTR_FUN_710523d9a8;
  local_90[0] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_7103776910(&local_98,param_2 + 0x10,(long ****)"set_txt_main",uVar7,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_710377a120((long)&local_98,acStack_e8,uVar7,param_5,param_6,param_7,param_8,param_9);
  uVar1 = local_90[0];
  local_98 = &PTR_FUN_710523d9a8;
  local_90[0] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_7103776910(&local_98,param_2 + 0x20,(long ****)"set_txt_mask",uVar7,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_710377a120((long)&local_98,acStack_e8,uVar7,param_5,param_6,param_7,param_8,param_9);
  uVar1 = local_90[0];
  local_98 = &PTR_FUN_710523d9a8;
  local_90[0] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_7103776910(&local_98,param_2 + 0x20,(long ****)"set_txt_main",uVar7,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_710377a120((long)&local_98,acStack_e8,uVar7,param_5,param_6,param_7,param_8,param_9);
  uVar1 = local_90[0];
  local_98 = &PTR_FUN_710523d9a8;
  local_90[0] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  lVar9 = local_a0[2];
  if (lVar9 == 0) {
LAB_7101ebb120:
    if ((float)_ConstantOne <= param_1) goto LAB_7101ebb0b0;
LAB_7101ebb134:
    lVar9 = *(long *)(param_2 + 8);
    pcVar6 = "text_def";
    *(undefined1 *)(param_2 + 0x34) = 0;
  }
  else {
    fVar11 = (float)*(undefined8 *)(lVar9 + 0x230);
    if ((fVar11 <= 1e-05) || ((float)((ulong)*(undefined8 *)(lVar9 + 0x230) >> 0x20) <= 1e-05))
    goto LAB_7101ebb120;
    if (param_1 < (float)*(undefined8 *)(lVar9 + 0x240) / fVar11) goto LAB_7101ebb134;
LAB_7101ebb0b0:
    lVar9 = *(long *)(param_2 + 8);
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    pcVar6 = "text_scr_off";
  }
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar6);
  uVar5 = FUN_710325d9e0(*(long *)(lVar8 + 0x278),param_3);
  if ((int)uVar5 == 3) {
    lVar8 = *(long *)(param_2 + 8);
    pcVar6 = "category_new_arrange";
  }
  else if ((int)uVar5 == 2) {
    lVar8 = *(long *)(param_2 + 8);
    pcVar6 = "category_arrange";
  }
  else {
    lVar8 = *(long *)(param_2 + 8);
    pcVar6 = "category_hidden";
  }
  FUN_7103778300(0x3f800000,lVar8,(long)pcVar6);
LAB_7101ebb1a0:
  local_a0 = (long *)0x0;
  local_a8 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)plVar4);
  return;
}

