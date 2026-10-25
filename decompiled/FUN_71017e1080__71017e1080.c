// addr:      71017e1080
// offset:    0x17e1080
// name:      FUN_71017e1080
// mangled:   
// signature: undefined __cdecl FUN_71017e1080(uint * param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017e1080(uint *param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  long *********ppppppppplVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte local_158 [256];
  undefined2 local_58;
  
  switch(param_3) {
  case 0:
    piVar2 = DAT_71052c3960;
    do {
      piVar16 = piVar2;
      if (piVar16 == DAT_71052c3968) goto switchD_71017e10bc_caseD_2;
      piVar2 = piVar16 + 2;
    } while (*piVar16 != param_2);
    break;
  case 1:
    piVar2 = DAT_71052c3978;
    do {
      piVar16 = piVar2;
      if (piVar16 == DAT_71052c3980) goto switchD_71017e10bc_caseD_2;
      piVar2 = piVar16 + 2;
    } while (*piVar16 != param_2);
    break;
  default:
    goto switchD_71017e10bc_caseD_2;
  case 3:
    piVar2 = DAT_71052c3990;
    do {
      piVar16 = piVar2;
      if (piVar16 == DAT_71052c3998) goto switchD_71017e10bc_caseD_2;
      piVar2 = piVar16 + 2;
    } while (*piVar16 != param_2);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    piVar2 = DAT_71052c39a8;
    do {
      piVar16 = piVar2;
      if (piVar16 == DAT_71052c39b0) goto switchD_71017e10bc_caseD_2;
      piVar2 = piVar16 + 2;
    } while (*piVar16 != param_2);
    break;
  case 9:
    piVar2 = DAT_71052c39c0;
    do {
      piVar16 = piVar2;
      if (piVar16 == DAT_71052c39c8) goto switchD_71017e10bc_caseD_2;
      piVar2 = piVar16 + 2;
    } while (*piVar16 != param_2);
  }
  param_2 = piVar16[1];
switchD_71017e10bc_caseD_2:
  lVar10 = (long)param_2;
  if (lVar10 - 0xa6U < 0x73) {
    ppppppppplVar5 = (long *********)"assist";
  }
  else if (lVar10 - 0x119U < 0x47) {
    ppppppppplVar5 = (long *********)"pokemon";
  }
  else {
    ppppppppplVar5 = (long *********)&DAT_71042c3080;
    if (lVar10 - 0x160U < 0x4a) {
      ppppppppplVar5 = (long *********)&DAT_7104349902;
    }
  }
  local_58 = 0;
  local_158[0] = 0;
  if (9 < param_3) {
    *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
    return;
  }
  ppppbVar6 = (byte ****)(&PTR_s_assist_7105071fe0)[lVar10 * 4];
  ppppbVar7 = ppppbVar6;
  switch(param_3) {
  case 0:
    FUN_710147f330((long)local_158,"%s/%s/model/body",ppppppppplVar5,ppppbVar6,ppppbVar6,param_6,
                   param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar11 = (ulong)~uVar8;
      uVar9 = uVar9 & 0xff00000000;
    }
    uVar9 = uVar9 | uVar11;
    if (uVar9 != 0) {
      puVar14 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar11 = (ulong)uVar19;
      puVar13 = puVar14 + uVar11;
      puVar15 = puVar14;
      if (uVar19 != 0) {
        do {
          uVar20 = uVar11;
          if ((long)uVar11 < 0) {
            uVar20 = uVar11 + 1;
          }
          uVar20 = (long)uVar20 >> 1;
          puVar14 = puVar15 + uVar20 + 1;
          uVar11 = uVar11 + ~uVar20;
          if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
            puVar14 = puVar15;
            uVar11 = uVar20;
          }
          puVar15 = puVar14;
        } while (uVar11 != 0);
      }
LAB_71017e1be8:
      if ((puVar14 != puVar13) && ((*puVar14 & 0xffffffffff) == uVar9)) {
        uVar19 = (uint)(*puVar14 >> 0x28);
        goto LAB_71017e1c0c;
      }
    }
    break;
  case 1:
    FUN_710147f330((long)local_158,"%s/%s/motion/body",ppppppppplVar5,ppppbVar6,ppppbVar6,param_6,
                   param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar11 = (ulong)~uVar8;
      uVar9 = uVar9 & 0xff00000000;
    }
    uVar9 = uVar9 | uVar11;
    if (uVar9 != 0) {
      puVar14 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar11 = (ulong)uVar19;
      puVar13 = puVar14 + uVar11;
      puVar15 = puVar14;
      if (uVar19 != 0) {
        do {
          uVar20 = uVar11;
          if ((long)uVar11 < 0) {
            uVar20 = uVar11 + 1;
          }
          uVar20 = (long)uVar20 >> 1;
          puVar14 = puVar15 + uVar20 + 1;
          uVar11 = uVar11 + ~uVar20;
          if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
            puVar14 = puVar15;
            uVar11 = uVar20;
          }
          puVar15 = puVar14;
        } while (uVar11 != 0);
      }
      goto LAB_71017e1be8;
    }
    break;
  case 2:
    FUN_710147f330((long)local_158,"%s/%s/motion/body",ppppppppplVar5,ppppbVar6,ppppbVar6,param_6,
                   param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar11 = (ulong)~uVar8;
      uVar9 = uVar9 & 0xff00000000;
    }
    uVar9 = uVar9 | uVar11;
    if (uVar9 != 0) {
      puVar14 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar11 = (ulong)uVar19;
      puVar13 = puVar14 + uVar11;
      puVar15 = puVar14;
      if (uVar19 != 0) {
        do {
          uVar20 = uVar11;
          if ((long)uVar11 < 0) {
            uVar20 = uVar11 + 1;
          }
          uVar20 = (long)uVar20 >> 1;
          puVar14 = puVar15 + uVar20 + 1;
          uVar11 = uVar11 + ~uVar20;
          if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
            puVar14 = puVar15;
            uVar11 = uVar20;
          }
          puVar15 = puVar14;
        } while (uVar11 != 0);
      }
      goto LAB_71017e1be8;
    }
    break;
  case 3:
    FUN_710147f330((long)local_158,"effect/%s/%s",ppppppppplVar5,ppppbVar6,ppppbVar6,param_6,param_7
                   ,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar11 = (ulong)~uVar8;
      uVar9 = uVar9 & 0xff00000000;
    }
    uVar9 = uVar9 | uVar11;
    if (uVar9 != 0) {
      puVar14 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar11 = (ulong)uVar19;
      puVar13 = puVar14 + uVar11;
      puVar15 = puVar14;
      if (uVar19 != 0) {
        do {
          uVar20 = uVar11;
          if ((long)uVar11 < 0) {
            uVar20 = uVar11 + 1;
          }
          uVar20 = (long)uVar20 >> 1;
          puVar14 = puVar15 + uVar20 + 1;
          uVar11 = uVar11 + ~uVar20;
          if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
            puVar14 = puVar15;
            uVar11 = uVar20;
          }
          puVar15 = puVar14;
        } while (uVar11 != 0);
      }
      goto LAB_71017e1be8;
    }
    break;
  case 4:
    FUN_710147f330((long)local_158,"sound/bank/%s/se_%s_%s.nus3bank",ppppppppplVar5,ppppppppplVar5,
                   ppppbVar6,param_6,param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) goto LAB_71017e1b10;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    pbVar17 = (byte *)((ulong)local_158 | 1);
    do {
      uVar18 = uVar19 + 0x20;
      if (0x19 < uVar19 - 0x41) {
        uVar18 = uVar19;
      }
      uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
      uVar19 = (uint)*pbVar17;
      uVar9 = uVar9 + 0x100000000;
      pbVar17 = pbVar17 + 1;
    } while (uVar19 != 0);
    uVar9 = uVar9 & 0xff00000000 | (ulong)~uVar8;
    if (uVar9 == 0) goto LAB_71017e1b10;
    lVar10 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
    uVar20 = (ulong)*(uint *)(lVar10 + 4);
    uVar11 = 0;
    if (uVar20 != 0) {
      uVar11 = uVar9 / uVar20;
    }
    lVar10 = lVar10 + (uVar9 - uVar11 * uVar20) * 8;
    uVar19 = *(uint *)(lVar10 + 0xc);
    uVar11 = (ulong)uVar19;
    puVar13 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                       (ulong)*(uint *)(lVar10 + 8) * 8);
    puVar14 = puVar13 + uVar11;
    puVar15 = puVar13;
    if (uVar19 != 0) {
      do {
        uVar20 = uVar11;
        if ((long)uVar11 < 0) {
          uVar20 = uVar11 + 1;
        }
        uVar20 = (long)uVar20 >> 1;
        puVar13 = puVar15 + uVar20 + 1;
        uVar11 = uVar11 + ~uVar20;
        if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
          puVar13 = puVar15;
          uVar11 = uVar20;
        }
        puVar15 = puVar13;
      } while (uVar11 != 0);
    }
LAB_71017e1aec:
    lVar10 = DAT_7105332f20;
    if (puVar13 == puVar14) goto LAB_71017e1b10;
    uVar11 = *puVar13;
    uVar8 = (uint)(uVar11 >> 0x28);
    if ((uVar11 & 0xffffffffff) != uVar9 || uVar8 == 0xffffff) goto LAB_71017e1b10;
    std::recursive_mutex::lock();
    puVar4 = FUN_71035404b0(lVar10,uVar11 & 0xffffff0000000000 | uVar9);
    std::recursive_mutex::unlock();
    uVar19 = 0xffffff;
    if (puVar4 != (uint *)0x0) {
      uVar19 = uVar8;
    }
    if ((uVar19 == 0xffffff) || (*(char *)(*(long *)(lVar10 + 8) + (ulong)uVar19 * 8 + 4) == '\0'))
    goto LAB_71017e1b10;
    goto LAB_71017e1b14;
  case 5:
    FUN_710147f330((long)local_158,"sound/bank/%s/se_%s_%s.tonelabel",ppppppppplVar5,ppppppppplVar5,
                   ppppbVar6,param_6,param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] != 0) {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar9 = uVar9 & 0xff00000000 | (ulong)~uVar8;
      if (uVar9 != 0) {
        lVar10 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
        uVar20 = (ulong)*(uint *)(lVar10 + 4);
        uVar11 = 0;
        if (uVar20 != 0) {
          uVar11 = uVar9 / uVar20;
        }
        lVar10 = lVar10 + (uVar9 - uVar11 * uVar20) * 8;
        uVar19 = *(uint *)(lVar10 + 0xc);
        uVar11 = (ulong)uVar19;
        puVar13 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                           (ulong)*(uint *)(lVar10 + 8) * 8);
        puVar14 = puVar13 + uVar11;
        puVar15 = puVar13;
        if (uVar19 != 0) {
          do {
            uVar20 = uVar11;
            if ((long)uVar11 < 0) {
              uVar20 = uVar11 + 1;
            }
            uVar20 = (long)uVar20 >> 1;
            puVar13 = puVar15 + uVar20 + 1;
            uVar11 = uVar11 + ~uVar20;
            if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
              puVar13 = puVar15;
              uVar11 = uVar20;
            }
            puVar15 = puVar13;
          } while (uVar11 != 0);
        }
        goto LAB_71017e1aec;
      }
    }
    goto LAB_71017e1b10;
  case 6:
    FUN_710147f330((long)local_158,"sound/bank/%s/se_%s_%s.nus3audio",ppppppppplVar5,ppppppppplVar5,
                   ppppbVar6,param_6,param_7,param_8);
    uVar8 = (uint)local_158[0];
    uVar19 = (uint)local_158[0];
    if (uVar19 != 0) {
      uVar9 = 0;
      uVar18 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar1 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar1 = uVar19;
        }
        uVar18 = (&DAT_7104754084)[(uVar1 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar9 = uVar9 & 0xff00000000 | (ulong)~uVar18;
      if (uVar9 != 0) {
        lVar12 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
        lVar10 = *(long *)(lVar12 + 0x50);
        uVar20 = (ulong)*(uint *)(lVar10 + 4);
        uVar11 = 0;
        if (uVar20 != 0) {
          uVar11 = uVar9 / uVar20;
        }
        lVar10 = lVar10 + (uVar9 - uVar11 * uVar20) * 8;
        uVar19 = *(uint *)(lVar10 + 0xc);
        uVar11 = (ulong)uVar19;
        puVar13 = (ulong *)(*(long *)(lVar12 + 0x58) + (ulong)*(uint *)(lVar10 + 8) * 8);
        puVar14 = puVar13 + uVar11;
        puVar15 = puVar13;
        if (uVar19 != 0) {
          do {
            uVar20 = uVar11;
            if ((long)uVar11 < 0) {
              uVar20 = uVar11 + 1;
            }
            uVar20 = (long)uVar20 >> 1;
            puVar13 = puVar15 + uVar20 + 1;
            uVar11 = uVar11 + ~uVar20;
            if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
              puVar13 = puVar15;
              uVar11 = uVar20;
            }
            puVar15 = puVar13;
          } while (uVar11 != 0);
        }
        if ((puVar13 != puVar14) &&
           ((*puVar13 & 0xffffffffff) == uVar9 && *puVar13 < 0xffffff0000000000)) {
          if (local_158[0] != 0) {
            uVar9 = 0;
            uVar19 = 0xffffffff;
            pbVar17 = (byte *)((ulong)local_158 | 1);
            do {
              uVar18 = uVar8 + 0x20;
              if (0x19 < uVar8 - 0x41) {
                uVar18 = uVar8;
              }
              uVar19 = (&DAT_7104754084)[(uVar18 ^ uVar19) & 0xff] ^ uVar19 >> 8;
              uVar8 = (uint)*pbVar17;
              uVar9 = uVar9 + 0x100000000;
              pbVar17 = pbVar17 + 1;
            } while (uVar8 != 0);
            uVar9 = uVar9 & 0xff00000000 | (ulong)~uVar19;
            if (uVar9 != 0) {
              lVar10 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
              uVar20 = (ulong)*(uint *)(lVar10 + 4);
              uVar11 = 0;
              if (uVar20 != 0) {
                uVar11 = uVar9 / uVar20;
              }
              lVar10 = lVar10 + (uVar9 - uVar11 * uVar20) * 8;
              uVar19 = *(uint *)(lVar10 + 0xc);
              uVar11 = (ulong)uVar19;
              puVar13 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                                 (ulong)*(uint *)(lVar10 + 8) * 8);
              puVar14 = puVar13 + uVar11;
              puVar15 = puVar13;
              if (uVar19 != 0) {
                do {
                  uVar20 = uVar11;
                  if ((long)uVar11 < 0) {
                    uVar20 = uVar11 + 1;
                  }
                  uVar20 = (long)uVar20 >> 1;
                  puVar13 = puVar15 + uVar20 + 1;
                  uVar11 = uVar11 + ~uVar20;
                  if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
                    puVar13 = puVar15;
                    uVar11 = uVar20;
                  }
                  puVar15 = puVar13;
                } while (uVar11 != 0);
              }
              goto LAB_71017e1aec;
            }
          }
          goto LAB_71017e1b10;
        }
      }
    }
    *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
    uVar19 = 0xffffff;
    goto LAB_71017e1b1c;
  case 7:
    FUN_710147f330((long)local_158,"sound/sequence/%s/%s.sqb",ppppppppplVar5,ppppbVar6,ppppbVar6,
                   param_6,param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] != 0) {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar9 = uVar9 & 0xff00000000 | (ulong)~uVar8;
      if (uVar9 != 0) {
        lVar10 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
        uVar20 = (ulong)*(uint *)(lVar10 + 4);
        uVar11 = 0;
        if (uVar20 != 0) {
          uVar11 = uVar9 / uVar20;
        }
        lVar10 = lVar10 + (uVar9 - uVar11 * uVar20) * 8;
        uVar19 = *(uint *)(lVar10 + 0xc);
        uVar11 = (ulong)uVar19;
        puVar13 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                           (ulong)*(uint *)(lVar10 + 8) * 8);
        puVar14 = puVar13 + uVar11;
        puVar15 = puVar13;
        if (uVar19 != 0) {
          do {
            uVar20 = uVar11;
            if ((long)uVar11 < 0) {
              uVar20 = uVar11 + 1;
            }
            uVar20 = (long)uVar20 >> 1;
            puVar13 = puVar15 + uVar20 + 1;
            uVar11 = uVar11 + ~uVar20;
            if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
              puVar13 = puVar15;
              uVar11 = uVar20;
            }
            puVar15 = puVar13;
          } while (uVar11 != 0);
        }
        goto LAB_71017e1aec;
      }
    }
LAB_71017e1b10:
    uVar19 = 0xffffff;
LAB_71017e1b14:
    *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
LAB_71017e1b1c:
    *param_1 = uVar19;
    return;
  case 8:
    FUN_710147f330((long)local_158,"%s/%s/script/animcmd/body",ppppppppplVar5,ppppbVar6,ppppbVar6,
                   param_6,param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar11 = (ulong)~uVar8;
      uVar9 = uVar9 & 0xff00000000;
    }
    uVar9 = uVar9 | uVar11;
    if (uVar9 != 0) {
      puVar14 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar11 = (ulong)uVar19;
      puVar13 = puVar14 + uVar11;
      puVar15 = puVar14;
      if (uVar19 != 0) {
        do {
          uVar20 = uVar11;
          if ((long)uVar11 < 0) {
            uVar20 = uVar11 + 1;
          }
          uVar20 = (long)uVar20 >> 1;
          puVar14 = puVar15 + uVar20 + 1;
          uVar11 = uVar11 + ~uVar20;
          if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
            puVar14 = puVar15;
            uVar11 = uVar20;
          }
          puVar15 = puVar14;
        } while (uVar11 != 0);
      }
      goto LAB_71017e1be8;
    }
    break;
  case 9:
    FUN_710147f330((long)local_158,"%s/%s/camera/c00",ppppppppplVar5,ppppbVar6,ppppbVar6,param_6,
                   param_7,param_8);
    uVar19 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0xffffffff;
      pbVar17 = (byte *)((ulong)local_158 | 1);
      do {
        uVar18 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar18 = uVar19;
        }
        uVar8 = (&DAT_7104754084)[(uVar18 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar9 = uVar9 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar11 = (ulong)~uVar8;
      uVar9 = uVar9 & 0xff00000000;
    }
    uVar9 = uVar9 | uVar11;
    if (uVar9 != 0) {
      puVar14 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar11 = (ulong)uVar19;
      puVar13 = puVar14 + uVar11;
      puVar15 = puVar14;
      if (uVar19 != 0) {
        do {
          uVar20 = uVar11;
          if ((long)uVar11 < 0) {
            uVar20 = uVar11 + 1;
          }
          uVar20 = (long)uVar20 >> 1;
          puVar14 = puVar15 + uVar20 + 1;
          uVar11 = uVar11 + ~uVar20;
          if (uVar9 <= (puVar15[uVar20] & 0xffffffffff)) {
            puVar14 = puVar15;
            uVar11 = uVar20;
          }
          puVar15 = puVar14;
        } while (uVar11 != 0);
      }
      goto LAB_71017e1be8;
    }
  }
  uVar19 = 0xffffff;
LAB_71017e1c0c:
  puVar3 = FUN_7103540d50(DAT_7105332f20,uVar19,ppppppppplVar5,ppppbVar6,(long ****)ppppbVar7,
                          param_6,param_7,param_8);
  puVar4 = &DAT_7104471f50;
  if (puVar3 != (uint *)0x0) {
    puVar4 = puVar3;
  }
  uVar19 = *puVar4;
  *param_1 = 0xffffff;
  param_1[1] = uVar19;
  return;
}

