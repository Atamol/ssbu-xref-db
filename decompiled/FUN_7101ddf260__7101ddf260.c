// addr:      7101ddf260
// offset:    0x1ddf260
// name:      FUN_7101ddf260
// mangled:   
// signature: undefined __cdecl FUN_7101ddf260(undefined1[16] param_1, float param_2, float param_3, undefined8 param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ddf260(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  short *psVar1;
  ulong uVar2;
  undefined2 *puVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar12;
  long ****pppplVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  long *plVar21;
  void *__dest;
  int iVar22;
  int iVar23;
  long lVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  byte ***pppbVar30;
  long ***local_90;
  long *local_88;
  byte ***local_80;
  undefined8 uStack_78;
  undefined **local_68;
  long *local_60;
  undefined4 local_54;
  
  pppplVar13 = &local_90;
  if (0 < *(int *)(param_5 + 0x101c)) {
    return;
  }
  if (*(int *)(param_5 + 0xa4) == 1) {
    plVar21 = (long *)(param_5 + 0x40);
    iVar23 = *(int *)(*plVar21 + 0x2a4);
    uVar11 = (ulong)iVar23;
    lVar14 = *(long *)(param_5 + 0x50);
    uVar17 = *(long *)(param_5 + 0x58) - lVar14 >> 2;
    if (uVar11 < uVar17) {
      pcVar19 = (char *)(lVar14 + uVar11 * 4 + 2);
      cVar4 = *pcVar19;
      if (cVar4 != '\0') {
        *pcVar19 = cVar4 + -1;
        lVar14 = *(long *)(param_5 + 0x50);
        uVar17 = *(long *)(param_5 + 0x58) - lVar14 >> 2;
      }
    }
    if (uVar17 <= uVar11) {
LAB_7101ddfc30:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    psVar1 = (short *)(lVar14 + uVar11 * 4);
    sVar5 = *psVar1;
    FUN_7103776290(&local_68,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
    fVar29 = (float)param_4;
    local_80 = (byte ***)0x0;
    uStack_78 = 0;
    cVar4 = (char)psVar1[1];
    if (cVar4 == '\x01') {
      *(undefined4 *)(param_5 + 0xbc) = 10;
LAB_7101ddf408:
      lVar14 = *plVar21;
      uVar12 = extraout_x1;
      if (*(long **)(lVar14 + 0x160) != (long *)0x0) {
        (**(code **)(**(long **)(lVar14 + 0x160) + 0x18))();
        fVar29 = (float)param_4;
        iVar22 = *(int *)(lVar14 + 0x2c4);
        if (0 < iVar22) {
          lVar24 = 0;
          do {
            if ((iVar23 - *(int *)(lVar14 + 0x29c) == (int)lVar24) &&
               (iVar23 < *(int *)(lVar14 + 0x288))) {
              lVar15 = *(long *)(lVar14 + 0x168);
              lVar18 = *(long *)(lVar15 + lVar24 * 8);
              lVar20 = **(long **)(lVar18 + 0x20);
              if (lVar20 != 0) {
                *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
                lVar18 = *(long *)(lVar15 + lVar24 * 8);
              }
              *(int *)(lVar18 + 0x30) = iVar23;
              lVar15 = *(long *)(lVar15 + lVar24 * 8);
              param_7 = (long ****)(lVar15 + 8);
              param_8 = (byte ****)(lVar15 + 0x18);
              (**(code **)(**(long **)(lVar14 + 0x160) + 0x10))
                        (*(long **)(lVar14 + 0x160),*(undefined4 *)(lVar15 + 0x30));
              iVar22 = *(int *)(lVar14 + 0x2c4);
            }
            fVar29 = (float)param_4;
            lVar24 = lVar24 + 1;
          } while (lVar24 < iVar22);
        }
        (**(code **)(**(long **)(lVar14 + 0x160) + 0x20))();
        uVar12 = extraout_x1_00;
      }
    }
    else {
      if (cVar4 != '\0') goto LAB_7101ddf408;
      if ((int)((ulong)(*(long *)(param_5 + 0x58) - *(long *)(param_5 + 0x50)) >> 2) == 1) {
        lVar14 = *plVar21;
        iVar22 = *(int *)(lVar14 + 0x2c8);
        if ((iVar22 < 0) || (*(int *)(lVar14 + 0x2c0) <= iVar22)) {
          FUN_7103776290(&local_90,extraout_x1,param_7,param_8,param_9,param_10,param_11,param_12);
        }
        else {
          FUN_7103776390(&local_90,
                         (undefined8 *)(*(long *)(*(long *)(lVar14 + 0x168) + (long)iVar22 * 8) + 8)
                         ,param_7,param_8,param_9,param_10,param_11,param_12);
        }
        plVar9 = local_60;
        plVar7 = local_88;
        local_88 = (long *)0x0;
        local_60 = plVar7;
        if (plVar9 == (long *)0x0) {
          local_90 = (long ***)&PTR_FUN_710523d988;
          local_88 = (long *)0x0;
        }
        else {
          uVar11 = plVar9[3];
          plVar9[2] = (long)&PTR_FUN_710523d9a8;
          plVar9[3] = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40((ulong)plVar9);
          plVar9 = local_88;
          local_90 = (long ***)&PTR_FUN_710523d988;
          local_88 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            uVar11 = *(ulong *)((long)plVar9 + 0x18);
            *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)((long)plVar9 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40((ulong)plVar9);
          }
        }
        plVar9 = (long *)FUN_710392e290(0x10,8,param_7,param_8,param_9,param_10,param_11,param_12);
        if (plVar9 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_54 = 0;
            local_90 = (long ***)&DAT_00000008;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
            param_7 = pppplVar13;
            if (((uVar11 & 1) != 0) &&
               (plVar9 = (long *)FUN_710392e290(0x10,8,pppplVar13,param_8,param_9,param_10,param_11,
                                                param_12), param_7 = pppplVar13,
               plVar9 != (long *)0x0)) goto LAB_7101ddf6d4;
          }
          plVar9 = (long *)0x0;
        }
LAB_7101ddf6d4:
        *plVar9 = 0;
        lVar14 = plVar7[1];
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x60) == 0)) {
          *plVar9 = 0;
        }
        else {
          plVar10 = (long *)FUN_7103796f20(*(long *)(lVar14 + 0x60),*(long *)(lVar14 + 0x18) + 0xb0)
          ;
          *plVar9 = (long)plVar10;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x1f8))(plVar10,0);
            uVar11 = (**(code **)(*plVar10 + 0x200))(plVar10);
            if ((uVar11 & 1) == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)(*plVar10 + 0x210))(plVar10);
              uVar8 = uVar8 ^ 1;
            }
            param_7 = (long ****)0x0;
            (**(code **)(*plVar10 + 0x388))(plVar10,uVar8 & 1);
          }
        }
        FUN_710392eb40((ulong)plVar9);
        fVar26 = FUN_710379e030(*(long *)plVar7[3]);
        fVar28 = param_2 - fVar26;
        param_2 = param_3 + (fVar29 - param_3) * 0.5;
        param_3 = 540.0;
        pppbVar30 = (byte ***)CONCAT44(540.0 - param_2,fVar26 + fVar28 * 0.5 + -960.0);
        uStack_78 = 0;
        __dest = *(void **)(param_5 + 0x50);
        pvVar16 = *(void **)(param_5 + 0x58);
        local_80 = pppbVar30;
        if (__dest != pvVar16) {
          do {
            if (iVar23 == 0) {
              param_7 = (long ****)((long)pvVar16 - ((long)__dest + 4));
              lVar14 = (long)param_7 >> 2;
              if (param_7 != (long ****)0x0) {
                memmove(__dest,(void *)((long)__dest + 4),(size_t)param_7);
              }
              pvVar16 = (void *)((long)__dest + lVar14 * 4);
              *(void **)(param_5 + 0x58) = pvVar16;
            }
            else {
              __dest = (void *)((long)__dest + 4);
            }
            iVar23 = iVar23 + -1;
          } while (__dest != pvVar16);
          __dest = *(void **)(param_5 + 0x50);
        }
        fVar29 = SUB84(pppbVar30,0);
        FUN_7103783690(plVar21,(int)((ulong)((long)pvVar16 - (long)__dest) >> 2));
        FUN_7101ddcd20(param_5,extraout_x1_07,param_7,param_8,param_9,param_10,param_11,param_12);
        uVar12 = extraout_x1_08;
      }
      else {
        lVar14 = *plVar21;
        uVar12 = extraout_x1;
        if (*(long **)(lVar14 + 0x160) != (long *)0x0) {
          (**(code **)(**(long **)(lVar14 + 0x160) + 0x18))();
          fVar29 = (float)param_4;
          iVar22 = *(int *)(lVar14 + 0x2c4);
          if (0 < iVar22) {
            lVar24 = 0;
            do {
              if ((iVar23 - *(int *)(lVar14 + 0x29c) == (int)lVar24) &&
                 (iVar23 < *(int *)(lVar14 + 0x288))) {
                lVar15 = *(long *)(lVar14 + 0x168);
                lVar18 = *(long *)(lVar15 + lVar24 * 8);
                lVar20 = **(long **)(lVar18 + 0x20);
                if (lVar20 != 0) {
                  *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
                  lVar18 = *(long *)(lVar15 + lVar24 * 8);
                }
                *(int *)(lVar18 + 0x30) = iVar23;
                lVar15 = *(long *)(lVar15 + lVar24 * 8);
                param_7 = (long ****)(lVar15 + 8);
                param_8 = (byte ****)(lVar15 + 0x18);
                (**(code **)(**(long **)(lVar14 + 0x160) + 0x10))
                          (*(long **)(lVar14 + 0x160),*(undefined4 *)(lVar15 + 0x30));
                iVar22 = *(int *)(lVar14 + 0x2c4);
              }
              fVar29 = (float)param_4;
              lVar24 = lVar24 + 1;
            } while (lVar24 < iVar22);
          }
          (**(code **)(**(long **)(lVar14 + 0x160) + 0x20))();
          lVar14 = *plVar21;
          uVar12 = extraout_x1_01;
        }
        iVar22 = *(int *)(lVar14 + 0x2c8);
        if ((iVar22 < 0) || (*(int *)(lVar14 + 0x2c0) <= iVar22)) {
          FUN_7103776290(&local_90,uVar12,param_7,param_8,param_9,param_10,param_11,param_12);
          uVar12 = extraout_x1_03;
        }
        else {
          FUN_7103776390(&local_90,
                         (undefined8 *)(*(long *)(*(long *)(lVar14 + 0x168) + (long)iVar22 * 8) + 8)
                         ,param_7,param_8,param_9,param_10,param_11,param_12);
          uVar12 = extraout_x1_02;
        }
        plVar7 = local_60;
        local_60 = local_88;
        local_88 = (long *)0x0;
        if (plVar7 == (long *)0x0) {
          local_90 = (long ***)&PTR_FUN_710523d988;
          local_88 = (long *)0x0;
        }
        else {
          uVar17 = plVar7[3];
          plVar7[2] = (long)&PTR_FUN_710523d9a8;
          plVar7[3] = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40((ulong)plVar7);
          plVar7 = local_88;
          local_90 = (long ***)&PTR_FUN_710523d988;
          local_88 = (long *)0x0;
          uVar12 = extraout_x1_04;
          if (plVar7 != (long *)0x0) {
            uVar17 = *(ulong *)((long)plVar7 + 0x18);
            *(undefined ***)((long)plVar7 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)((long)plVar7 + 0x18) = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_710392eb40((ulong)plVar7);
            uVar12 = extraout_x1_05;
          }
        }
        lVar24 = *(long *)(param_5 + 0x50);
        uVar17 = *(long *)(param_5 + 0x58) - lVar24;
        lVar14 = 0;
        bVar6 = false;
        iVar22 = -1;
        pcVar19 = (char *)(lVar24 + (uVar11 + 1) * 4 + 2);
        do {
          uVar2 = uVar11 + 1 + lVar14;
          if ((long)(uVar17 * 0x40000000) >> 0x20 <= (long)uVar2) goto LAB_7101ddf7ac;
          if ((ulong)((long)uVar17 >> 2) <= uVar2) goto LAB_7101ddfc30;
          cVar4 = *pcVar19;
          bVar6 = (bool)(bVar6 | cVar4 != '\0');
          lVar14 = lVar14 + 1;
          pcVar19 = pcVar19 + 4;
        } while (cVar4 == '\0');
        iVar22 = iVar23 + (int)lVar14;
LAB_7101ddf7ac:
        if ((iVar23 != 0) && (!bVar6)) {
          pcVar19 = (char *)(lVar24 + uVar11 * 4 + -2);
          do {
            uVar2 = uVar11 - 1;
            if ((long)uVar11 < 1) goto LAB_7101ddf7d8;
            if ((ulong)((long)uVar17 >> 2) <= uVar2) goto LAB_7101ddfc30;
            cVar4 = *pcVar19;
            pcVar19 = pcVar19 + -4;
            uVar11 = uVar2;
          } while (cVar4 == '\0');
          iVar22 = (int)uVar2;
        }
LAB_7101ddf7d8:
        if ((-1 < iVar22) && (iVar22 < (int)(uVar17 >> 2))) {
          lVar14 = *(long *)(param_5 + 0x40);
          *(int *)(param_5 + 0x1020) = iVar22;
          iVar23 = *(int *)(lVar14 + 0x2c8);
          if ((iVar23 < 0) || (*(int *)(lVar14 + 0x2c0) <= iVar23)) {
            FUN_7103776290(&local_90,uVar12,param_7,param_8,param_9,param_10,param_11,param_12);
          }
          else {
            FUN_7103776390(&local_90,
                           (undefined8 *)
                           (*(long *)(*(long *)(lVar14 + 0x168) + (long)iVar23 * 8) + 8),param_7,
                           param_8,param_9,param_10,param_11,param_12);
          }
          plVar7 = local_88;
          if ((long ****)(param_5 + 0x1028) != &local_90) {
            local_88 = (long *)0x0;
            uVar11 = *(ulong *)(param_5 + 0x1030);
            *(long **)(param_5 + 0x1030) = plVar7;
            if (uVar11 != 0) {
              uVar17 = *(ulong *)(uVar11 + 0x18);
              *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar11 + 0x18) = 0;
              if (uVar17 != 0) {
                FUN_710392eb40(uVar17);
              }
              FUN_710392eb40(uVar11);
            }
          }
          plVar7 = local_88;
          local_90 = (long ***)&PTR_FUN_710523d988;
          local_88 = (long *)0x0;
          if (plVar7 != (long *)0x0) {
            uVar11 = plVar7[3];
            plVar7[2] = (long)&PTR_FUN_710523d9a8;
            plVar7[3] = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40((ulong)plVar7);
          }
          FUN_7103778300(0x3f800000,*(long *)(param_5 + 0x1030),0x71044228f0);
          *(undefined4 *)(param_5 + 0x101c) = 6;
          *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_5 + 8) + 0x600) + 0x4aa) = 0;
          lVar14 = *(long *)(*(long *)**(undefined8 **)(param_5 + 8) + 0x608);
          if (*(long *)(*(long *)**(undefined8 **)(param_5 + 8) + 0x610) == lVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          *(undefined1 *)(*(long *)(lVar14 + 8) + 0x4aa) = 0;
          uVar12 = extraout_x1_06;
        }
      }
      *(undefined4 *)(param_5 + 0xbc) = 10;
    }
    if ((int)((ulong)(*(long *)(param_5 + 0x58) - *(long *)(param_5 + 0x50)) >> 2) != 0) {
      lVar14 = *plVar21;
      iVar23 = *(int *)(lVar14 + 0x2c8);
      if ((iVar23 < 0) || (*(int *)(lVar14 + 0x2c0) <= iVar23)) {
        FUN_7103776290(&local_90,uVar12,param_7,param_8,param_9,param_10,param_11,param_12);
      }
      else {
        FUN_7103776390(&local_90,
                       (undefined8 *)(*(long *)(*(long *)(lVar14 + 0x168) + (long)iVar23 * 8) + 8),
                       param_7,param_8,param_9,param_10,param_11,param_12);
      }
      plVar7 = local_60;
      plVar21 = local_88;
      local_88 = (long *)0x0;
      local_60 = plVar21;
      if (plVar7 == (long *)0x0) {
        local_90 = (long ***)&PTR_FUN_710523d988;
        local_88 = (long *)0x0;
      }
      else {
        uVar11 = plVar7[3];
        plVar7[2] = (long)&PTR_FUN_710523d9a8;
        plVar7[3] = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40((ulong)plVar7);
        plVar7 = local_88;
        local_90 = (long ***)&PTR_FUN_710523d988;
        local_88 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          uVar11 = *(ulong *)((long)plVar7 + 0x18);
          *(undefined ***)((long)plVar7 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)((long)plVar7 + 0x18) = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40((ulong)plVar7);
        }
      }
      fVar26 = FUN_710379e030(*(long *)plVar21[3]);
      local_80 = (byte ***)
                 CONCAT44(540.0 - (param_3 + (fVar29 - param_3) * 0.5),
                          fVar26 + (param_2 - fVar26) * 0.5 + -960.0);
      uStack_78 = 0;
    }
    lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (sVar5 == -1) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = (ulong)*(ushort *)(lVar14 + (long)sVar5 * 2 + 0x60);
    }
    uVar17 = (*(long *)(lVar14 + 0x28) - *(long *)(lVar14 + 0x20) >> 6) * -0x3333333333333333;
    puVar3 = (undefined2 *)(*(long *)(lVar14 + 0x20) + uVar11 * 0x140);
    if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    uVar8 = 0;
    if (*(byte *)(puVar3 + 0x34) - 1 < 3) {
      uVar8 = (*(byte *)(puVar3 + 0x34) - 1 & 0xff) + 1;
    }
    param_7 = (long ****)(ulong)uVar8;
    if ((*(char *)(puVar3 + 0x2f) == '\0') && ((ulong)(long)*(char *)(puVar3 + 0x36) < 4)) {
      iVar23 = *(int *)(&DAT_7104469210 + (long)*(char *)(puVar3 + 0x36) * 4);
    }
    else {
      iVar23 = 5;
    }
    param_8 = &local_80;
    FUN_7101ddd430(param_5,iVar23,param_7,param_8,param_9,param_10,param_11,param_12);
    plVar21 = local_60;
    local_68 = &PTR_FUN_710523d988;
    local_60 = (long *)0x0;
    if (plVar21 == (long *)0x0) goto LAB_7101ddfbac;
    uVar11 = plVar21[3];
    plVar21[2] = (long)&PTR_FUN_710523d9a8;
    plVar21[3] = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  else {
    if (*(int *)(param_5 + 0xa4) != 0) goto LAB_7101ddfbac;
    FUN_7101ddcea0(param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
    uVar8 = *(uint *)(*(long *)(param_5 + 0x28) + 0x254);
    pppplVar13 = (long ****)(ulong)uVar8;
    FUN_7103771d60(&local_68,*(long *)(param_5 + 0x28),pppplVar13,param_8,param_9,param_10,param_11,
                   param_12);
    plVar21 = local_60;
    FUN_710377ad90(&local_90,*local_60,pppplVar13,param_8,param_9,param_10,param_11,param_12);
    plVar7 = local_88;
    lVar14 = *local_88;
    if (lVar14 == 0) {
      uVar25 = (undefined4)_ConstantZero;
      uVar27 = (undefined4)((ulong)_ConstantZero >> 0x20);
      uStack_78 = uRam0000007107459008;
    }
    else {
      uVar25 = *(undefined4 *)(lVar14 + 0x30);
      uVar27 = *(undefined4 *)(lVar14 + 0x34);
      uStack_78 = 0;
    }
    local_90 = (long ***)&PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    local_80 = (byte ***)CONCAT44(uVar27,uVar25);
    if (plVar7 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar7);
    }
    if (uVar8 != 2) {
      uVar8 = (uint)(uVar8 == 1);
    }
    param_7 = (long ****)(ulong)uVar8;
    param_8 = &local_80;
    FUN_7101ddd430(param_5,0,param_7,param_8,param_9,param_10,param_11,param_12);
    local_68 = &PTR_FUN_710523d9c8;
    local_60 = (long *)0x0;
    if (plVar21 == (long *)0x0) goto LAB_7101ddfbac;
  }
  FUN_710392eb40((ulong)plVar21);
LAB_7101ddfbac:
  FUN_7101ddc760(param_5,0,param_7,param_8,param_9,param_10,param_11,param_12);
  FUN_7103776640(&local_68,param_5 + 0x18,(byte ****)"set_parts_sp",param_7,param_8,param_9,param_10
                 ,param_11,param_12);
  plVar21 = local_60;
  FUN_7103778300(0x3f800000,(long)local_60,0x71043beb1c);
  local_68 = &PTR_FUN_710523d988;
  local_60 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    uVar11 = plVar21[3];
    plVar21[2] = (long)&PTR_FUN_710523d9a8;
    plVar21[3] = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40((ulong)plVar21);
  }
  return;
}

