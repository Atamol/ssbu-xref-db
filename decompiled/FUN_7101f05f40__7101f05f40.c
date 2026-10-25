// addr:      7101f05f40
// offset:    0x1f05f40
// name:      FUN_7101f05f40
// mangled:   
// signature: undefined __cdecl FUN_7101f05f40(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f05f40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **local_40;
  ulong local_38;
  
  if (*(uint *)(param_1 + 500) < 0x13) {
    uVar3 = *(uint *)(param_1 + (long)(int)*(uint *)(param_1 + 500) * 4 + 0x1a8);
    if (*(uint *)(param_1 + 0x1f8) != uVar3) {
      *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x1f8);
      *(uint *)(param_1 + 0x1f8) = uVar3;
      if (0x16 < uVar3) goto LAB_7101f0646c;
      lVar8 = param_1 + (long)(int)uVar3 * 0x10;
      uVar2 = *(undefined8 *)(lVar8 + 0x40);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar8 + 0x38);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      pcVar6 = *(code **)(param_1 + 0x28);
      uVar7 = *(ulong *)(param_1 + 0x30) & 1;
      if (uVar7 != 0 || pcVar6 != (code *)0x0) {
        if (uVar7 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(param_1 + 0x10) +
                                                ((long)*(ulong *)(param_1 + 0x30) >> 1)));
        }
        (*pcVar6)();
      }
      *(undefined4 *)(param_1 + 0x1fc) = 0;
    }
    if (*(char *)(param_1 + 0x204) != '\0') {
      pcVar6 = *(code **)(param_1 + 0x28);
      uVar7 = *(ulong *)(param_1 + 0x30) & 1;
      if (uVar7 != 0 || pcVar6 != (code *)0x0) {
        if (uVar7 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(param_1 + 0x10) +
                                                ((long)*(ulong *)(param_1 + 0x30) >> 1)));
        }
        (*pcVar6)();
      }
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined1 *)(param_1 + 0x204) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      pcVar6 = *(code **)(param_1 + 0x18);
      uVar7 = *(ulong *)(param_1 + 0x20) & 1;
      if (uVar7 != 0 || pcVar6 != (code *)0x0) {
        if (uVar7 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(param_1 + 0x10) +
                                                ((long)*(ulong *)(param_1 + 0x20) >> 1)));
        }
        (*pcVar6)();
      }
    }
    lVar8 = *(long *)(param_1 + 0x2a0);
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    if (*(uint *)(lVar8 + 0x104) < 0x13) {
      uVar3 = *(uint *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0x104) * 4 + 0xb8);
      if (*(uint *)(lVar8 + 0x108) != uVar3) {
        *(uint *)(lVar8 + 0x110) = *(uint *)(lVar8 + 0x108);
        *(uint *)(lVar8 + 0x108) = uVar3;
        if (7 < uVar3) goto LAB_7101f0646c;
        lVar1 = lVar8 + (long)(int)uVar3 * 0x10;
        uVar2 = *(undefined8 *)(lVar1 + 0x40);
        *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar1 + 0x38);
        *(undefined8 *)(lVar8 + 0x20) = uVar2;
        pcVar6 = *(code **)(lVar8 + 0x28);
        uVar7 = *(ulong *)(lVar8 + 0x30) & 1;
        if (uVar7 != 0 || pcVar6 != (code *)0x0) {
          if (uVar7 != 0) {
            pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x10) +
                                                  ((long)*(ulong *)(lVar8 + 0x30) >> 1)));
          }
          (*pcVar6)();
        }
        *(undefined4 *)(lVar8 + 0x10c) = 0;
      }
      if (*(char *)(lVar8 + 0x114) != '\0') {
        pcVar6 = *(code **)(lVar8 + 0x28);
        uVar7 = *(ulong *)(lVar8 + 0x30) & 1;
        if (uVar7 != 0 || pcVar6 != (code *)0x0) {
          if (uVar7 != 0) {
            pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x10) +
                                                  ((long)*(ulong *)(lVar8 + 0x30) >> 1)));
          }
          (*pcVar6)();
        }
        *(undefined4 *)(lVar8 + 0x10c) = 0;
        *(undefined1 *)(lVar8 + 0x114) = 0;
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        pcVar6 = *(code **)(lVar8 + 0x18);
        uVar7 = *(ulong *)(lVar8 + 0x20) & 1;
        if (uVar7 != 0 || pcVar6 != (code *)0x0) {
          if (uVar7 != 0) {
            pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x10) +
                                                  ((long)*(ulong *)(lVar8 + 0x20) >> 1)));
          }
          (*pcVar6)();
        }
      }
      *(int *)(lVar8 + 0x10c) = *(int *)(lVar8 + 0x10c) + 1;
      puVar10 = *(undefined8 **)(param_1 + 0x220);
      for (puVar9 = *(undefined8 **)(param_1 + 0x218); puVar9 != puVar10; puVar9 = puVar9 + 2) {
        lVar8 = *(long *)*puVar9;
        FUN_7101efac00((long *)(lVar8 + 0x18));
        if (*(long *)(lVar8 + 0x18) != 0) {
          pcVar6 = *(code **)(lVar8 + 0x20);
          uVar7 = *(ulong *)(lVar8 + 0x28) & 1;
          if (uVar7 != 0 || pcVar6 != (code *)0x0) {
            if (uVar7 != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x18) +
                                                    ((long)*(ulong *)(lVar8 + 0x28) >> 1)));
            }
            (*pcVar6)();
          }
        }
        *(int *)(lVar8 + 0x204) = *(int *)(lVar8 + 0x204) + 1;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x238);
      for (puVar9 = *(undefined8 **)(param_1 + 0x230); puVar9 != puVar10; puVar9 = puVar9 + 2) {
        lVar8 = *(long *)*puVar9;
        FUN_7101efac00((long *)(lVar8 + 0x18));
        if (*(long *)(lVar8 + 0x18) != 0) {
          pcVar6 = *(code **)(lVar8 + 0x20);
          uVar7 = *(ulong *)(lVar8 + 0x28) & 1;
          if (uVar7 != 0 || pcVar6 != (code *)0x0) {
            if (uVar7 != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x18) +
                                                    ((long)*(ulong *)(lVar8 + 0x28) >> 1)));
            }
            (*pcVar6)();
          }
        }
        *(int *)(lVar8 + 0x204) = *(int *)(lVar8 + 0x204) + 1;
      }
      lVar8 = *(long *)(param_1 + 0x2a8);
      if (*(uint *)(lVar8 + 0xdc) < 0x13) {
        uVar3 = *(uint *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0xdc) * 4 + 0x90);
        if (*(uint *)(lVar8 + 0xe0) != uVar3) {
          *(uint *)(lVar8 + 0xe8) = *(uint *)(lVar8 + 0xe0);
          *(uint *)(lVar8 + 0xe0) = uVar3;
          if (4 < uVar3) goto LAB_7101f0646c;
          lVar1 = lVar8 + (long)(int)uVar3 * 0x10;
          uVar2 = *(undefined8 *)(lVar1 + 0x48);
          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar1 + 0x40);
          *(undefined8 *)(lVar8 + 0x28) = uVar2;
          pcVar6 = *(code **)(lVar8 + 0x30);
          uVar7 = *(ulong *)(lVar8 + 0x38) & 1;
          if (uVar7 != 0 || pcVar6 != (code *)0x0) {
            if (uVar7 != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x18) +
                                                    ((long)*(ulong *)(lVar8 + 0x38) >> 1)));
            }
            (*pcVar6)();
          }
          *(undefined4 *)(lVar8 + 0xe4) = 0;
        }
        if (*(char *)(lVar8 + 0xec) != '\0') {
          pcVar6 = *(code **)(lVar8 + 0x30);
          uVar7 = *(ulong *)(lVar8 + 0x38) & 1;
          if (uVar7 != 0 || pcVar6 != (code *)0x0) {
            if (uVar7 != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x18) +
                                                    ((long)*(ulong *)(lVar8 + 0x38) >> 1)));
            }
            (*pcVar6)();
          }
          *(undefined4 *)(lVar8 + 0xe4) = 0;
          *(undefined1 *)(lVar8 + 0xec) = 0;
        }
        if (*(long *)(lVar8 + 0x18) != 0) {
          pcVar6 = *(code **)(lVar8 + 0x20);
          uVar7 = *(ulong *)(lVar8 + 0x28) & 1;
          if (uVar7 != 0 || pcVar6 != (code *)0x0) {
            if (uVar7 != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x18) +
                                                    ((long)*(ulong *)(lVar8 + 0x28) >> 1)));
            }
            (*pcVar6)();
          }
        }
        *(int *)(lVar8 + 0xe4) = *(int *)(lVar8 + 0xe4) + 1;
        plVar5 = *(long **)(*(long *)(lVar8 + 0x130) + 8);
        if (((plVar5 != (long *)0x0) && (uVar7 = (**(code **)(*plVar5 + 0x130))(), (uVar7 & 1) != 0)
            ) && ((plVar5 = *(long **)(*(long *)(lVar8 + 0x130) + 8), plVar5 == (long *)0x0 ||
                  (uVar7 = (**(code **)(*plVar5 + 0x138))(), (uVar7 & 1) != 0)))) {
          iVar4 = *(int *)(lVar8 + 0x138);
          uVar3 = iVar4 + 2;
          if (-1 < iVar4 + 1) {
            uVar3 = iVar4 + 1;
          }
          uVar3 = (iVar4 + 1) - (uVar3 & 0xfffffffe);
          iVar4 = uVar3 + (uVar3 >> 0x1e & 2);
          *(int *)(lVar8 + 0x138) = iVar4;
          FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x110),
                         (long)(&PTR_s_controller_joy_dual_71050b3e30)[(long)iVar4 * 2]);
          FUN_7103776910(&local_40,lVar8 + 0x108,(long ****)"set_txt_btn",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_710377a120((long)&local_40,
                         (&PTR_s_mel_chara_select_help_press_any__71050b3e38)[(long)iVar4 * 2],
                         param_3,param_4,param_5,param_6,param_7,param_8);
          uVar7 = local_38;
          local_40 = &PTR_FUN_710523d9a8;
          local_38 = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
        }
        lVar8 = *(long *)(param_1 + 0x2b0);
        if (*(uint *)(lVar8 + 500) < 0x13) {
          uVar3 = *(uint *)(lVar8 + (long)(int)*(uint *)(lVar8 + 500) * 4 + 0x1a8);
          if (*(uint *)(lVar8 + 0x1f8) != uVar3) {
            *(uint *)(lVar8 + 0x200) = *(uint *)(lVar8 + 0x1f8);
            *(uint *)(lVar8 + 0x1f8) = uVar3;
            if (0x16 < uVar3) goto LAB_7101f0646c;
            lVar1 = lVar8 + (long)(int)uVar3 * 0x10;
            uVar2 = *(undefined8 *)(lVar1 + 0x40);
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar1 + 0x38);
            *(undefined8 *)(lVar8 + 0x20) = uVar2;
            pcVar6 = *(code **)(lVar8 + 0x28);
            uVar7 = *(ulong *)(lVar8 + 0x30) & 1;
            if (uVar7 != 0 || pcVar6 != (code *)0x0) {
              if (uVar7 != 0) {
                pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x10) +
                                                      ((long)*(ulong *)(lVar8 + 0x30) >> 1)));
              }
              (*pcVar6)();
            }
            *(undefined4 *)(lVar8 + 0x1fc) = 0;
          }
          if (*(char *)(lVar8 + 0x204) != '\0') {
            pcVar6 = *(code **)(lVar8 + 0x28);
            uVar7 = *(ulong *)(lVar8 + 0x30) & 1;
            if (uVar7 != 0 || pcVar6 != (code *)0x0) {
              if (uVar7 != 0) {
                pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x10) +
                                                      ((long)*(ulong *)(lVar8 + 0x30) >> 1)));
              }
              (*pcVar6)();
            }
            *(undefined4 *)(lVar8 + 0x1fc) = 0;
            *(undefined1 *)(lVar8 + 0x204) = 0;
          }
          if (*(long *)(lVar8 + 0x10) != 0) {
            pcVar6 = *(code **)(lVar8 + 0x18);
            uVar7 = *(ulong *)(lVar8 + 0x20) & 1;
            if (uVar7 != 0 || pcVar6 != (code *)0x0) {
              if (uVar7 != 0) {
                pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar8 + 0x10) +
                                                      ((long)*(ulong *)(lVar8 + 0x20) >> 1)));
              }
              (*pcVar6)();
            }
          }
          *(int *)(lVar8 + 0x1fc) = *(int *)(lVar8 + 0x1fc) + 1;
          return;
        }
      }
    }
  }
LAB_7101f0646c:
                    /* WARNING: Subroutine does not return */
  abort();
}

