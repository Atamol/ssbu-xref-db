// addr:      71023b7370
// offset:    0x23b7370
// name:      FUN_71023b7370
// mangled:   
// signature: undefined __cdecl FUN_71023b7370(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023b7370(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar11;
  long *********ppppppppplVar12;
  undefined **ppuVar13;
  long *********ppppppppplVar14;
  long *********ppppppppplVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  short *psVar19;
  long lVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  long ********local_40;
  undefined4 local_34;
  
  ppppppppplVar12 = &local_40;
  ppppppppplVar14 = &local_40;
  ppppppppplVar15 = &local_40;
  plVar5 = (long *)FUN_710392e290(0x10,0x2348,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ********)0x2348;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x2348,(long ****)ppppppppplVar12,param_4,param_5,
                                          param_6,param_7,param_8), plVar5 != (long *)0x0))
      goto LAB_71023b73ec;
    }
    plVar5 = (long *)0x0;
  }
LAB_71023b73ec:
  ppuVar13 = (undefined **)0x14c;
  *plVar5 = param_1 + 0x50;
  plVar5[1] = (long)plVar5;
  *(undefined4 *)((long)plVar5 + 0x17c) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[0x30] = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x31) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0x18c) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  memset(plVar5 + 6,0,0x14c);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)ppuVar13,param_4,param_5,param_6,param_7,param_8);
  uVar11 = extraout_x1;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ********)&DAT_00000080;
      auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      uVar11 = auVar22._8_8_;
      ppuVar13 = (undefined **)ppppppppplVar14;
      if (((auVar22._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                  param_7,param_8), uVar11 = extraout_x1_00,
         ppuVar13 = (undefined **)ppppppppplVar14, puVar7 != (undefined8 *)0x0))
      goto LAB_71023b7470;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71023b7470:
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[2] = 0;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xb] = 0;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 3;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(undefined2 *)(puVar7 + 0xf) = 0x101;
  puVar7[0xc] = 0;
  puVar7[0xe] = 0;
  *(undefined2 *)(plVar5 + 0x34) = 0xffff;
  *(undefined1 *)((long)plVar5 + 0x1a4) = 0;
  plVar5[0x32] = (long)puVar7;
  plVar5[0x33] = 0;
  FUN_71025acda0(plVar5 + 0x467,uVar11,(long ****)ppuVar13,param_4,param_5,param_6,param_7,param_8);
  FUN_7103723a90(*plVar5,&DAT_7105329bd8,(long ****)ppuVar13,param_4,param_5,param_6,param_7,param_8
                );
  plVar5[6] = (long)FUN_71023b4730;
  plVar5[7] = 0;
  plVar5[8] = (long)FUN_71023b4860;
  plVar5[9] = 0;
  plVar5[0xc] = (long)FUN_71023b4a70;
  plVar5[0xd] = 0;
  plVar5[0xe] = (long)FUN_71023b4cf0;
  plVar5[0xf] = 0;
  plVar5[0x12] = (long)FUN_71023b5650;
  plVar5[0x13] = 0;
  plVar5[0x14] = (long)FUN_71023b5a80;
  plVar5[0x15] = 0;
  plVar5[0x18] = (long)FUN_71023b5fa0;
  plVar5[0x19] = 0;
  plVar5[0x1a] = (long)FUN_71023b6340;
  plVar5[0x1b] = 0;
  plVar5[0x1e] = (long)FUN_71023b6710;
  plVar5[0x1f] = 0;
  plVar5[10] = (long)FUN_71023b4890;
  plVar5[0xb] = 0;
  plVar5[0x20] = (long)FUN_71023b68f0;
  plVar5[0x21] = 0;
  plVar5[0x10] = (long)FUN_71023b54b0;
  plVar5[0x11] = 0;
  plVar5[0x16] = (long)FUN_71023b5dd0;
  plVar5[0x17] = 0;
  plVar5[0x1c] = (long)FUN_71023b6540;
  plVar5[0x1d] = 0;
  plVar5[0x22] = (long)FUN_71023b6ac0;
  plVar5[0x23] = 0;
  plVar5[0x24] = (long)FUN_71023b6dc0;
  plVar5[0x25] = 0;
  if (0x12 < *(uint *)((long)plVar5 + 0x17c)) {
LAB_71023b7bd4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar5 + (long)(int)*(uint *)((long)plVar5 + 0x17c) * 4 + 0x130) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar13 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_71053050f0 = 0x3030000;
  puVar7 = *(undefined8 **)(param_2 + 0xa8);
  puVar1 = (uint *)((long)plVar5 + 0x17c);
  if (puVar7 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105328150), iVar4 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105324750), iVar4 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar8 = (undefined8 *)(**(code **)*puVar7)(puVar7); puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)*puVar8) {
      if ((undefined8 **)puVar8 == &DAT_7105328158) {
        uVar16 = *(uint *)(puVar7 + 1);
        pcVar2 = (char *)(puVar7 + 2);
        if (uVar16 == 0x4677d4d1) {
          iVar4 = strcmp(pcVar2,"SpiritsRaiseScene");
          if (iVar4 != 0) goto LAB_71023b77e4;
          if (*(char *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac13) != '\0') {
            uVar16 = *(uint *)((long)plVar5 + 0x17c);
            bVar3 = true;
            *(undefined1 *)((long)plVar5 + 0x19f) = 1;
            plVar9 = DAT_7105329f98;
            if ((int)uVar16 < 0x12) goto LAB_71023b7720;
            goto LAB_71023b7944;
          }
          if (*(char *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac12) != '\0') {
            *(undefined1 *)((long)plVar5 + 0x19d) = 1;
          }
          if ((int)*puVar1 < 0x12) {
            uVar16 = *puVar1 + 1;
            *puVar1 = uVar16;
            if (uVar16 < 0x13) {
              lVar20 = (long)plVar5 + (long)(int)uVar16 * 4;
              uVar17 = 6;
              goto LAB_71023b7734;
            }
            goto LAB_71023b7bd4;
          }
LAB_71023b7930:
          bVar3 = true;
          plVar9 = DAT_7105329f98;
          goto LAB_71023b7944;
        }
        if (uVar16 == 0x88343cb7) {
          iVar4 = strcmp(pcVar2,"SpiritsSetScene");
          if (iVar4 == 0) {
            uVar16 = *puVar1;
            if (0x11 < (int)uVar16) goto LAB_71023b7930;
LAB_71023b7720:
            uVar16 = uVar16 + 1;
            *puVar1 = uVar16;
            if (0x12 < uVar16) goto LAB_71023b7bd4;
            lVar20 = (long)plVar5 + (long)(int)uVar16 * 4;
            uVar17 = 4;
LAB_71023b7734:
            *(undefined4 *)(lVar20 + 0x130) = uVar17;
            bVar3 = true;
            plVar9 = DAT_7105329f98;
            goto LAB_71023b7944;
          }
        }
        else if (uVar16 < 0xcd20d13f) {
          if (uVar16 == 0x931dc960) {
            iVar4 = strcmp(pcVar2,"SpiritsRecallScene");
            if (iVar4 == 0) {
              if (0x11 < (int)*puVar1) goto LAB_71023b7930;
              uVar16 = *puVar1 + 1;
              *puVar1 = uVar16;
              if (uVar16 < 0x13) {
                lVar20 = (long)plVar5 + (long)(int)uVar16 * 4;
                uVar17 = 7;
                goto LAB_71023b7734;
              }
              goto LAB_71023b7bd4;
            }
          }
          else if (0x4425842b < uVar16) {
            if (uVar16 == 0x686bace1) {
              iVar4 = strcmp(pcVar2,"SpiritsDirectoryBattleSequenceScene");
joined_r0x0071023b7904:
              if (iVar4 == 0) {
                if (0x11 < (int)*puVar1) goto LAB_71023b7930;
                uVar16 = *puVar1 + 1;
                *puVar1 = uVar16;
                if (uVar16 < 0x13) {
                  lVar20 = (long)plVar5 + (long)(int)uVar16 * 4;
                  uVar17 = 10;
                  goto LAB_71023b7734;
                }
                goto LAB_71023b7bd4;
              }
            }
            else if (uVar16 == 0x4f952745) {
              iVar4 = strcmp(pcVar2,"SpiritsItemViewScene");
              if (iVar4 == 0) {
                if (0x11 < (int)*puVar1) goto LAB_71023b7930;
                uVar16 = *puVar1 + 1;
                *puVar1 = uVar16;
                if (uVar16 < 0x13) {
                  lVar20 = (long)plVar5 + (long)(int)uVar16 * 4;
                  uVar17 = 0xb;
                  goto LAB_71023b7734;
                }
                goto LAB_71023b7bd4;
              }
            }
            else if (uVar16 == 0x4425842c) {
              iVar4 = strcmp(pcVar2,"SpiritsDirectoryScene");
              goto joined_r0x0071023b7904;
            }
          }
        }
        else if ((uVar16 == 0xcd20d13f) && (iVar4 = strcmp(pcVar2,"SpiritsReturnScene"), iVar4 == 0)
                ) {
          if (0x11 < (int)*puVar1) goto LAB_71023b7930;
          uVar16 = *puVar1 + 1;
          *puVar1 = uVar16;
          if (uVar16 < 0x13) {
            lVar20 = (long)plVar5 + (long)(int)uVar16 * 4;
            uVar17 = 8;
            goto LAB_71023b7734;
          }
          goto LAB_71023b7bd4;
        }
LAB_71023b77e4:
        bVar3 = *(char *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac12) == '\0';
        if (!bVar3) {
          *(undefined1 *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac13) = 1;
        }
        plVar9 = DAT_7105329f98;
        if (0x11 < (int)*puVar1) goto LAB_71023b7944;
        uVar16 = *puVar1 + 1;
        *puVar1 = uVar16;
        if (0x12 < uVar16) goto LAB_71023b7bd4;
        *(undefined4 *)((long)plVar5 + (long)(int)uVar16 * 4 + 0x130) = 3;
        plVar9 = DAT_7105329f98;
        goto LAB_71023b7944;
      }
    }
  }
  plVar9 = DAT_7105329f98;
  bVar3 = *(char *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac12) == '\0';
  if (!bVar3) {
    *(undefined1 *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac13) = 1;
  }
  if ((int)*puVar1 < 0x12) {
    uVar16 = *puVar1 + 1;
    *puVar1 = uVar16;
    if (0x12 < uVar16) goto LAB_71023b7bd4;
    *(undefined4 *)((long)plVar5 + (long)(int)uVar16 * 4 + 0x130) = 3;
  }
LAB_71023b7944:
  lVar18 = *(long *)(*plVar9 + 0x30);
  psVar19 = (short *)(lVar18 + 0x88d68);
  lVar20 = 8000;
  do {
    if ((((psVar19[-0x50] != -1) || (psVar19[-0x28] != -1)) || (*psVar19 != -1)) ||
       (psVar19[0x28] != -1)) {
      if ((int)*puVar1 < 0x12) {
        uVar16 = *puVar1 + 1;
        *puVar1 = uVar16;
        if (0x12 < uVar16) goto LAB_71023b7bd4;
        *(undefined4 *)((long)plVar5 + (long)(int)uVar16 * 4 + 0x130) = 2;
        lVar18 = *(long *)(*plVar9 + 0x30);
      }
      break;
    }
    lVar20 = lVar20 + -0x140;
    psVar19 = psVar19 + 0xa0;
  } while (lVar20 != 0);
  if (*(char *)(lVar18 + 0x8ac12) != '\0') {
    *(char *)(lVar18 + 0x8ac12) = '\0';
  }
  if ((bVar3) && (pcVar2 = (char *)(*(long *)(*plVar9 + 0x30) + 0x8ac13), *pcVar2 != '\0')) {
    *pcVar2 = '\0';
  }
  if (DAT_7105324aa8 != (long *)0x0) goto LAB_71023b7a84;
  plVar9 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppuVar13,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ********)&DAT_00000028;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      ppuVar13 = (undefined **)ppppppppplVar15;
      if (((uVar6 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar15,param_4,param_5,
                                          param_6,param_7,param_8),
         ppuVar13 = (undefined **)ppppppppplVar15, plVar9 != (long *)0x0)) goto LAB_71023b7a68;
    }
    plVar9 = (long *)0x0;
  }
LAB_71023b7a68:
  *(undefined2 *)(plVar9 + 2) = 0;
  *plVar9 = (long)&PTR_FUN_71050a6988;
  plVar9[1] = 0x811c9dc5;
  DAT_7105324aa8 = plVar9;
LAB_71023b7a84:
  plVar9 = DAT_7105324aa8;
  plVar21 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar5;
  if (plVar21 != (long *)0x0) {
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      DAT_7105324aa8 = (long *)0x0;
    }
    FUN_7103723e70(*plVar21,&DAT_7105329bd8,(long ****)ppuVar13,param_4,param_5,param_6,param_7,
                   param_8);
    **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xffffffef;
    uVar6 = plVar21[0x468];
    plVar21[0x467] = (long)&PTR_FUN_71050c5460;
    plVar21[0x468] = 0;
    uVar11 = extraout_x1_01;
    if (uVar6 != 0) {
      uVar10 = *(ulong *)(uVar6 + 0x218);
      *(undefined8 *)(uVar6 + 0x218) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar6);
      uVar11 = extraout_x1_02;
    }
    if (*(char *)((long)plVar21 + 0x1a4) != '\0') {
      *(undefined1 *)((long)plVar21 + 0x1a4) = 0;
    }
    FUN_710323b9e0(plVar21[0x32],uVar11,(long *********)ppuVar13,param_4,param_5,param_6,param_7,
                   param_8);
    plVar5 = (long *)plVar21[0x32];
    plVar21[0x32] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_710392eb40((ulong)plVar21);
    return;
  }
  return;
}

