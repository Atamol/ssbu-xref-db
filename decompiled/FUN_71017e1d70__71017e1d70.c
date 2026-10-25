// addr:      71017e1d70
// offset:    0x17e1d70
// name:      FUN_71017e1d70
// mangled:   
// signature: undefined __cdecl FUN_71017e1d70(uint * param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017e1d70(uint *param_1,int param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  byte local_158 [256];
  undefined2 local_58;
  
  if (4 < param_2) {
    *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
    return;
  }
  local_58 = 0;
  local_158[0] = 0;
  switch((ulong)param_3 & 0xffffffff) {
  case 0:
    param_3 = (long *********)(&PTR_s_yellowdevil_710509f9b8)[param_2];
    FUN_710147f330((long)local_158,"enemy/%s/model/body/c00",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar15 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar8 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar8 = (ulong)~uVar5;
      uVar12 = uVar12 & 0xff00000000;
    }
    uVar12 = uVar12 | uVar8;
    if (uVar12 != 0) {
      puVar6 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar15 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar8 = (ulong)uVar15;
      puVar7 = puVar6 + uVar8;
      puVar10 = puVar6;
      if (uVar15 != 0) {
        do {
          uVar14 = uVar8;
          if ((long)uVar8 < 0) {
            uVar14 = uVar8 + 1;
          }
          uVar14 = (long)uVar14 >> 1;
          puVar6 = puVar10 + uVar14 + 1;
          uVar8 = uVar8 + ~uVar14;
          if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
            puVar6 = puVar10;
            uVar8 = uVar14;
          }
          puVar10 = puVar6;
        } while (uVar8 != 0);
      }
LAB_71017e2420:
      if ((puVar6 != puVar7) && ((*puVar6 & 0xffffffffff) == uVar12)) {
        uVar15 = (uint)(*puVar6 >> 0x28);
        goto LAB_71017e2444;
      }
    }
    break;
  default:
    uVar15 = 0xffffff;
    goto LAB_71017e2444;
  case 3:
    param_3 = (long *********)(&PTR_s_yellowdevil_710509f9b8)[param_2];
    FUN_710147f330((long)local_158,"enemy/%s/motion/body/c00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar15 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar8 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar8 = (ulong)~uVar5;
      uVar12 = uVar12 & 0xff00000000;
    }
    uVar12 = uVar12 | uVar8;
    if (uVar12 != 0) {
      puVar6 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar15 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar8 = (ulong)uVar15;
      puVar7 = puVar6 + uVar8;
      puVar10 = puVar6;
      if (uVar15 != 0) {
        do {
          uVar14 = uVar8;
          if ((long)uVar8 < 0) {
            uVar14 = uVar8 + 1;
          }
          uVar14 = (long)uVar14 >> 1;
          puVar6 = puVar10 + uVar14 + 1;
          uVar8 = uVar8 + ~uVar14;
          if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
            puVar6 = puVar10;
            uVar8 = uVar14;
          }
          puVar10 = puVar6;
        } while (uVar8 != 0);
      }
      goto LAB_71017e2420;
    }
    break;
  case 4:
    FUN_710147f330((long)local_158,"enemy/%s/motion/body/c00/motion_list.bin",
                   (&PTR_s_yellowdevil_710509f9b8)[param_2],param_4,param_5,param_6,param_7,param_8)
    ;
    uVar15 = (uint)local_158[0];
    if (local_158[0] != 0) {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar12 = uVar12 & 0xff00000000 | (ulong)~uVar5;
      if (uVar12 != 0) {
        lVar2 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
        uVar14 = (ulong)*(uint *)(lVar2 + 4);
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar12 / uVar14;
        }
        lVar2 = lVar2 + (uVar12 - uVar8 * uVar14) * 8;
        uVar15 = *(uint *)(lVar2 + 0xc);
        uVar8 = (ulong)uVar15;
        puVar7 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                          (ulong)*(uint *)(lVar2 + 8) * 8);
        puVar6 = puVar7 + uVar8;
        puVar10 = puVar7;
        if (uVar15 != 0) {
          do {
            uVar14 = uVar8;
            if ((long)uVar8 < 0) {
              uVar14 = uVar8 + 1;
            }
            uVar14 = (long)uVar14 >> 1;
            puVar7 = puVar10 + uVar14 + 1;
            uVar8 = uVar8 + ~uVar14;
            if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
              puVar7 = puVar10;
              uVar8 = uVar14;
            }
            puVar10 = puVar7;
          } while (uVar8 != 0);
        }
LAB_71017e2540:
        lVar2 = DAT_7105332f20;
        if (puVar7 != puVar6) {
          uVar8 = *puVar7;
          uVar15 = (uint)(uVar8 >> 0x28);
          if ((uVar8 & 0xffffffffff) == uVar12 && uVar15 != 0xffffff) {
            std::recursive_mutex::lock();
            puVar4 = FUN_71035404b0(lVar2,uVar8 & 0xffffff0000000000 | uVar12);
            std::recursive_mutex::unlock();
            uVar5 = 0xffffff;
            if (puVar4 != (uint *)0x0) {
              uVar5 = uVar15;
            }
            if ((uVar5 != 0xffffff) &&
               (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar5 * 8 + 4) != '\0'))
            goto LAB_71017e2568;
          }
        }
      }
    }
    goto LAB_71017e2564;
  case 5:
    param_3 = (long *********)(&PTR_s_yellowdevil_710509f9b8)[param_2];
    FUN_710147f330((long)local_158,"effect/enemy/%s",param_3,param_4,param_5,param_6,param_7,param_8
                  );
    uVar15 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar8 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar8 = (ulong)~uVar5;
      uVar12 = uVar12 & 0xff00000000;
    }
    uVar12 = uVar12 | uVar8;
    if (uVar12 != 0) {
      puVar6 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar15 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar8 = (ulong)uVar15;
      puVar7 = puVar6 + uVar8;
      puVar10 = puVar6;
      if (uVar15 != 0) {
        do {
          uVar14 = uVar8;
          if ((long)uVar8 < 0) {
            uVar14 = uVar8 + 1;
          }
          uVar14 = (long)uVar14 >> 1;
          puVar6 = puVar10 + uVar14 + 1;
          uVar8 = uVar8 + ~uVar14;
          if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
            puVar6 = puVar10;
            uVar8 = uVar14;
          }
          puVar10 = puVar6;
        } while (uVar8 != 0);
      }
      goto LAB_71017e2420;
    }
    break;
  case 6:
    param_3 = (long *********)(&PTR_s_yellowdevil_710509f9b8)[param_2];
    FUN_710147f330((long)local_158,"enemy/%s/script/animcmd/body",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar15 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar8 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar8 = (ulong)~uVar5;
      uVar12 = uVar12 & 0xff00000000;
    }
    uVar12 = uVar12 | uVar8;
    if (uVar12 != 0) {
      puVar6 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar15 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar8 = (ulong)uVar15;
      puVar7 = puVar6 + uVar8;
      puVar10 = puVar6;
      if (uVar15 != 0) {
        do {
          uVar14 = uVar8;
          if ((long)uVar8 < 0) {
            uVar14 = uVar8 + 1;
          }
          uVar14 = (long)uVar14 >> 1;
          puVar6 = puVar10 + uVar14 + 1;
          uVar8 = uVar8 + ~uVar14;
          if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
            puVar6 = puVar10;
            uVar8 = uVar14;
          }
          puVar10 = puVar6;
        } while (uVar8 != 0);
      }
      goto LAB_71017e2420;
    }
    break;
  case 7:
    FUN_710147f330((long)local_158,"sound/bank/enemy/se_enemy_%s.nus3bank",
                   (&PTR_s_yellowdevil_710509f9b8)[param_2],param_4,param_5,param_6,param_7,param_8)
    ;
    uVar15 = (uint)local_158[0];
    if (local_158[0] != 0) {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar12 = uVar12 & 0xff00000000 | (ulong)~uVar5;
      if (uVar12 != 0) {
        lVar2 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
        uVar14 = (ulong)*(uint *)(lVar2 + 4);
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar12 / uVar14;
        }
        lVar2 = lVar2 + (uVar12 - uVar8 * uVar14) * 8;
        uVar15 = *(uint *)(lVar2 + 0xc);
        uVar8 = (ulong)uVar15;
        puVar7 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                          (ulong)*(uint *)(lVar2 + 8) * 8);
        puVar6 = puVar7 + uVar8;
        puVar10 = puVar7;
        if (uVar15 != 0) {
          do {
            uVar14 = uVar8;
            if ((long)uVar8 < 0) {
              uVar14 = uVar8 + 1;
            }
            uVar14 = (long)uVar14 >> 1;
            puVar7 = puVar10 + uVar14 + 1;
            uVar8 = uVar8 + ~uVar14;
            if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
              puVar7 = puVar10;
              uVar8 = uVar14;
            }
            puVar10 = puVar7;
          } while (uVar8 != 0);
        }
        goto LAB_71017e2540;
      }
    }
    goto LAB_71017e2564;
  case 8:
    FUN_710147f330((long)local_158,"sound/bank/enemy/se_enemy_%s.tonelabel",
                   (&PTR_s_yellowdevil_710509f9b8)[param_2],param_4,param_5,param_6,param_7,param_8)
    ;
    uVar15 = (uint)local_158[0];
    if (local_158[0] != 0) {
      uVar12 = 0;
      uVar5 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar15 + 0x20;
        if (0x19 < uVar15 - 0x41) {
          uVar13 = uVar15;
        }
        uVar5 = (&DAT_7104754084)[(uVar13 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar15 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      uVar12 = uVar12 & 0xff00000000 | (ulong)~uVar5;
      if (uVar12 != 0) {
        lVar2 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
        uVar14 = (ulong)*(uint *)(lVar2 + 4);
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar12 / uVar14;
        }
        lVar2 = lVar2 + (uVar12 - uVar8 * uVar14) * 8;
        uVar15 = *(uint *)(lVar2 + 0xc);
        uVar8 = (ulong)uVar15;
        puVar7 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                          (ulong)*(uint *)(lVar2 + 8) * 8);
        puVar6 = puVar7 + uVar8;
        puVar10 = puVar7;
        if (uVar15 != 0) {
          do {
            uVar14 = uVar8;
            if ((long)uVar8 < 0) {
              uVar14 = uVar8 + 1;
            }
            uVar14 = (long)uVar14 >> 1;
            puVar7 = puVar10 + uVar14 + 1;
            uVar8 = uVar8 + ~uVar14;
            if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
              puVar7 = puVar10;
              uVar8 = uVar14;
            }
            puVar10 = puVar7;
          } while (uVar8 != 0);
        }
        goto LAB_71017e2540;
      }
    }
    goto LAB_71017e2564;
  case 9:
    FUN_710147f330((long)local_158,"sound/bank/enemy/se_enemy_%s.nus3audio",
                   (&PTR_s_yellowdevil_710509f9b8)[param_2],param_4,param_5,param_6,param_7,param_8)
    ;
    uVar5 = (uint)local_158[0];
    uVar15 = (uint)local_158[0];
    if (uVar15 == 0) {
LAB_71017e2608:
      *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
      *param_1 = 0xffffff;
      return;
    }
    uVar12 = 0;
    uVar13 = 0xffffffff;
    pbVar11 = (byte *)((ulong)local_158 | 1);
    do {
      uVar1 = uVar15 + 0x20;
      if (0x19 < uVar15 - 0x41) {
        uVar1 = uVar15;
      }
      uVar13 = (&DAT_7104754084)[(uVar1 ^ uVar13) & 0xff] ^ uVar13 >> 8;
      uVar15 = (uint)*pbVar11;
      uVar12 = uVar12 + 0x100000000;
      pbVar11 = pbVar11 + 1;
    } while (uVar15 != 0);
    uVar12 = uVar12 & 0xff00000000 | (ulong)~uVar13;
    if (uVar12 == 0) goto LAB_71017e2608;
    lVar9 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
    lVar2 = *(long *)(lVar9 + 0x50);
    uVar14 = (ulong)*(uint *)(lVar2 + 4);
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = uVar12 / uVar14;
    }
    lVar2 = lVar2 + (uVar12 - uVar8 * uVar14) * 8;
    uVar15 = *(uint *)(lVar2 + 0xc);
    uVar8 = (ulong)uVar15;
    puVar7 = (ulong *)(*(long *)(lVar9 + 0x58) + (ulong)*(uint *)(lVar2 + 8) * 8);
    puVar6 = puVar7 + uVar8;
    puVar10 = puVar7;
    if (uVar15 != 0) {
      do {
        uVar14 = uVar8;
        if ((long)uVar8 < 0) {
          uVar14 = uVar8 + 1;
        }
        uVar14 = (long)uVar14 >> 1;
        puVar7 = puVar10 + uVar14 + 1;
        uVar8 = uVar8 + ~uVar14;
        if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
          puVar7 = puVar10;
          uVar8 = uVar14;
        }
        puVar10 = puVar7;
      } while (uVar8 != 0);
    }
    if ((puVar7 == puVar6) || ((*puVar7 & 0xffffffffff) != uVar12 || 0xfffffeffffffffff < *puVar7))
    goto LAB_71017e2608;
    if (local_158[0] != 0) {
      uVar12 = 0;
      uVar15 = 0xffffffff;
      pbVar11 = (byte *)((ulong)local_158 | 1);
      do {
        uVar13 = uVar5 + 0x20;
        if (0x19 < uVar5 - 0x41) {
          uVar13 = uVar5;
        }
        uVar15 = (&DAT_7104754084)[(uVar13 ^ uVar15) & 0xff] ^ uVar15 >> 8;
        uVar5 = (uint)*pbVar11;
        uVar12 = uVar12 + 0x100000000;
        pbVar11 = pbVar11 + 1;
      } while (uVar5 != 0);
      uVar12 = uVar12 & 0xff00000000 | (ulong)~uVar15;
      if (uVar12 != 0) {
        lVar2 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
        uVar14 = (ulong)*(uint *)(lVar2 + 4);
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar12 / uVar14;
        }
        lVar2 = lVar2 + (uVar12 - uVar8 * uVar14) * 8;
        uVar15 = *(uint *)(lVar2 + 0xc);
        uVar8 = (ulong)uVar15;
        puVar7 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                          (ulong)*(uint *)(lVar2 + 8) * 8);
        puVar6 = puVar7 + uVar8;
        puVar10 = puVar7;
        if (uVar15 != 0) {
          do {
            uVar14 = uVar8;
            if ((long)uVar8 < 0) {
              uVar14 = uVar8 + 1;
            }
            uVar14 = (long)uVar14 >> 1;
            puVar7 = puVar10 + uVar14 + 1;
            uVar8 = uVar8 + ~uVar14;
            if (uVar12 <= (puVar10[uVar14] & 0xffffffffff)) {
              puVar7 = puVar10;
              uVar8 = uVar14;
            }
            puVar10 = puVar7;
          } while (uVar8 != 0);
        }
        goto LAB_71017e2540;
      }
    }
LAB_71017e2564:
    uVar5 = 0xffffff;
LAB_71017e2568:
    *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
    *param_1 = uVar5;
    return;
  }
  uVar15 = 0xffffff;
LAB_71017e2444:
  puVar3 = FUN_7103540d50(DAT_7105332f20,uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar4 = &DAT_7104471f50;
  if (puVar3 != (uint *)0x0) {
    puVar4 = puVar3;
  }
  uVar15 = *puVar4;
  *param_1 = 0xffffff;
  param_1[1] = uVar15;
  return;
}

