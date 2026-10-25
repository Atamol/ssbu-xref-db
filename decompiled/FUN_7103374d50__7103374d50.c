// addr:      7103374d50
// offset:    0x3374d50
// name:      FUN_7103374d50
// mangled:   
// signature: undefined4 __cdecl FUN_7103374d50(long param_1)


undefined4 FUN_7103374d50(long param_1)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  pbVar3 = (byte *)FUN_71038f4730(param_1,-(int)((ulong)(*(long *)(param_1 + 0x10) -
                                                        (**(long **)(param_1 + 0x20) + 0x10)) >> 4),
                                  (ulong *)0x0);
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar4 = (long *)(*(long *)(param_1 + 0x10) - 0x10);
  uVar12 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar12 == 2) {
    lVar5 = *plVar4;
    *(long **)(param_1 + 0x10) = plVar4;
    if (lVar5 != 0) goto joined_r0x007103374de8;
  }
  else {
    if (uVar12 == 7) {
      lVar5 = *plVar4;
      *(long **)(param_1 + 0x10) = plVar4;
      lVar5 = lVar5 + 0x28;
joined_r0x007103374de8:
      if (pbVar3 == (byte *)0x0) {
        plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
        while (plVar4 < plVar6) {
          *(long **)(param_1 + 0x10) = plVar4 + 2;
          *(undefined4 *)(plVar4 + 1) = 0;
          plVar4 = *(long **)(param_1 + 0x10);
        }
      }
      else {
        uVar12 = (uint)*pbVar3;
        if (*pbVar3 == 0) {
          uVar9 = 0;
          uVar7 = 0;
          uVar10 = *(ulong *)(lVar5 + 0x10);
        }
        else {
          uVar7 = 0;
          uVar8 = 0xffffffff;
          do {
            pbVar3 = pbVar3 + 1;
            uVar1 = uVar12 + 0x20;
            if (0x19 < uVar12 - 0x41) {
              uVar1 = uVar12;
            }
            uVar8 = (&DAT_7104754084)[(uVar1 ^ uVar8) & 0xff] ^ uVar8 >> 8;
            uVar12 = (uint)*pbVar3;
            uVar7 = uVar7 + 0x100000000;
          } while (uVar12 != 0);
          uVar9 = (ulong)~uVar8;
          uVar7 = uVar7 & 0xff00000000;
          uVar10 = *(ulong *)(lVar5 + 0x10);
        }
        if (uVar10 != 0) {
          uVar11 = uVar10 - 1;
          uVar7 = uVar7 | uVar9;
          if ((uVar11 & uVar10) == 0) {
            uVar9 = uVar11 & uVar7;
          }
          else {
            uVar9 = uVar7;
            if (uVar10 <= uVar7) {
              uVar9 = 0;
              if (uVar10 != 0) {
                uVar9 = uVar7 / uVar10;
              }
              uVar9 = uVar7 - uVar9 * uVar10;
            }
          }
          plVar6 = *(long **)(*(long *)(lVar5 + 8) + uVar9 * 8);
          if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
            if ((uVar11 & uVar10) == 0) {
              do {
                uVar10 = plVar6[1];
                if (uVar10 != uVar7 && (uVar10 & uVar11) != uVar9) break;
                if ((uVar10 == uVar7) && ((plVar6[2] & 0xffffffffffU) == uVar7))
                goto LAB_7103374fc0;
                plVar6 = (long *)*plVar6;
              } while (plVar6 != (long *)0x0);
            }
            else {
              do {
                uVar11 = plVar6[1];
                if (uVar11 == uVar7) {
                  if ((plVar6[2] & 0xffffffffffU) == uVar7) {
LAB_7103374fc0:
                    (**(code **)(*(long *)plVar6[3] + 0x10))((long *)plVar6[3],param_1);
                    return *(undefined4 *)(plVar6[3] + 8);
                  }
                }
                else {
                  if (uVar10 <= uVar11) {
                    uVar2 = 0;
                    if (uVar10 != 0) {
                      uVar2 = uVar11 / uVar10;
                    }
                    uVar11 = uVar11 - uVar2 * uVar10;
                  }
                  if (uVar11 != uVar9) break;
                }
                plVar6 = (long *)*plVar6;
              } while (plVar6 != (long *)0x0);
            }
          }
        }
        plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
        while (plVar4 < plVar6) {
          *(long **)(param_1 + 0x10) = plVar4 + 2;
          *(undefined4 *)(plVar4 + 1) = 0;
          plVar4 = *(long **)(param_1 + 0x10);
        }
      }
      goto LAB_7103374fac;
    }
    *(long **)(param_1 + 0x10) = plVar4;
  }
  plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  while (plVar4 < plVar6) {
    *(long **)(param_1 + 0x10) = plVar4 + 2;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4 = *(long **)(param_1 + 0x10);
  }
LAB_7103374fac:
  *(long **)(param_1 + 0x10) = plVar6;
  return 0;
}

