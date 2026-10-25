// addr:      7101c3fbe0
// offset:    0x1c3fbe0
// name:      FUN_7101c3fbe0
// mangled:   
// signature: undefined __cdecl FUN_7101c3fbe0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c3fbe0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 local_b8;
  long *local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  
  lVar20 = *(long *)(param_1 + 0x80);
  if (0x12 < *(uint *)(lVar20 + 0x15c)) {
LAB_7101c40758:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar24 = *(uint *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0x15c) * 4 + 0x110);
  if (*(uint *)(lVar20 + 0x160) != uVar24) {
    *(uint *)(lVar20 + 0x168) = *(uint *)(lVar20 + 0x160);
    *(uint *)(lVar20 + 0x160) = uVar24;
    if (8 < uVar24) goto LAB_7101c40758;
    lVar23 = lVar20 + (long)(int)uVar24 * 0x10;
    uVar11 = *(undefined8 *)(lVar23 + 0x88);
    *(undefined8 *)(lVar20 + 0x60) = *(undefined8 *)(lVar23 + 0x80);
    *(undefined8 *)(lVar20 + 0x68) = uVar11;
    pcVar12 = *(code **)(lVar20 + 0x70);
    uVar18 = *(ulong *)(lVar20 + 0x78) & 1;
    if (uVar18 != 0 || pcVar12 != (code *)0x0) {
      if (uVar18 != 0) {
        pcVar12 = *(code **)(pcVar12 +
                            *(long *)(*(long *)(lVar20 + 0x58) +
                                     ((long)*(ulong *)(lVar20 + 0x78) >> 1)));
      }
      (*pcVar12)();
    }
    *(undefined4 *)(lVar20 + 0x164) = 0;
  }
  if (*(char *)(lVar20 + 0x16c) != '\0') {
    pcVar12 = *(code **)(lVar20 + 0x70);
    uVar18 = *(ulong *)(lVar20 + 0x78) & 1;
    if (uVar18 != 0 || pcVar12 != (code *)0x0) {
      if (uVar18 != 0) {
        pcVar12 = *(code **)(pcVar12 +
                            *(long *)(*(long *)(lVar20 + 0x58) +
                                     ((long)*(ulong *)(lVar20 + 0x78) >> 1)));
      }
      (*pcVar12)();
    }
    *(undefined4 *)(lVar20 + 0x164) = 0;
    *(undefined1 *)(lVar20 + 0x16c) = 0;
  }
  if (*(long *)(lVar20 + 0x58) != 0) {
    pcVar12 = *(code **)(lVar20 + 0x60);
    uVar18 = *(ulong *)(lVar20 + 0x68) & 1;
    if (uVar18 != 0 || pcVar12 != (code *)0x0) {
      if (uVar18 != 0) {
        pcVar12 = *(code **)(pcVar12 +
                            *(long *)(*(long *)(lVar20 + 0x58) +
                                     ((long)*(ulong *)(lVar20 + 0x68) >> 1)));
      }
      (*pcVar12)();
    }
  }
  *(int *)(lVar20 + 0x164) = *(int *)(lVar20 + 0x164) + 1;
  if (*(char *)(lVar20 + 0x408) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x210),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x220),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x230),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x240),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x250),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x260),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x270),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x280),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x290),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x2a0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x2b0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x2c0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x2d0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x2e0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x2f0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x300),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x310),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 800),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x330),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x340),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x350),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x360),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x370),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x380),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x390),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x3a0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x3b0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x3c0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x3d0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x3e0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x3f0),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x400),0x710425f93f);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar20 + 0x18) + 0x10),0x71043cd335);
    return;
  }
  pbVar3 = (byte *)(*(long *)(lVar20 + 0x180) + (ulong)*(uint *)(lVar20 + 0x198) * 8);
  local_b8 = (undefined **)CONCAT44(*(undefined4 *)(lVar20 + 0x170),(uint)*pbVar3);
  local_b0 = (long *)(ulong)CONCAT14(pbVar3[3],(uint)pbVar3[2]);
  local_a8 = (uint)pbVar3[4];
  local_a4 = (uint)pbVar3[5];
  local_a0 = (uint)pbVar3[6];
  local_9c = (uint)(pbVar3 + 2)[(ulong)pbVar3[1] - 1];
  FUN_7102350980(*(uint **)(DAT_7105329060 + 8),(uint *)&local_b8,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar13 = (long *)(DAT_7105329060 + 8);
  lVar23 = *plVar13;
  if (*(int *)(lVar23 + 0x198) != 0) {
    uVar24 = 0;
    do {
      if ((*(int *)(lVar23 + 4) == 0) ||
         (lVar14 = lVar23 + (ulong)(*(int *)(lVar23 + 4) - 1) * 0x18,
         puVar10 = *(undefined8 **)(lVar14 + 8), *(undefined8 **)(lVar14 + 0x10) == puVar10)) {
        plVar13 = (long *)0x0;
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = (undefined8 *)*puVar10;
        plVar13 = (long *)puVar10[1];
        if (plVar13 != (long *)0x0) {
          plVar21 = plVar13 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar7) {
              *plVar21 = *plVar21 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      FUN_710234d8a0((uint *)*puVar15);
      if (plVar13 != (long *)0x0) {
        plVar21 = plVar13 + 1;
        do {
          lVar14 = *plVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *plVar21 = lVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(uint *)(lVar23 + 0x198));
    plVar13 = (long *)(DAT_7105329060 + 8);
    lVar23 = *plVar13;
  }
  *(byte *)(lVar23 + 0xb0) = pbVar3[7];
  lVar23 = *plVar13;
  *(undefined8 *)(lVar23 + 0x108) = 0;
  *(undefined8 *)(lVar23 + 0x100) = 0x4417000044b5c000;
  *(undefined8 *)(lVar23 + 0x118) = 0;
  *(undefined8 *)(lVar23 + 0x110) = 0x4417000044b5c000;
  *(undefined4 *)(lVar23 + 0x130) = 0xbf800000;
  *(undefined8 *)(lVar23 + 0x128) = 0;
  *(undefined8 *)(lVar23 + 0x120) = 0x4417000044b5c000;
  lVar23 = *plVar13;
  *(undefined1 **)(lVar23 + 0xe4) = &DAT_3f8000003f800000;
  *(undefined8 *)(lVar23 + 0xec) = 0xbf8000003f800000;
  uVar24 = *(uint *)(lVar20 + 0x198);
  FUN_7103776910(&local_b8,**(long **)(lVar20 + 0x10) + 8,(long ****)"set_pic_final_base",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  plVar13 = local_b0;
  FUN_7101c3f510(698.0,538.0,lVar20,uVar24,*local_b0);
  local_b8 = &PTR_FUN_710523d9a8;
  local_b0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar13);
  }
  lVar23 = DAT_7105329060;
  lVar14 = *(long *)(DAT_7105329060 + 8);
  if ((*(int *)(lVar14 + 4) == 0) ||
     (lVar19 = lVar14 + (ulong)(*(int *)(lVar14 + 4) - 1) * 0x18, plVar13 = *(long **)(lVar19 + 8),
     *(long **)(lVar19 + 0x10) == plVar13)) {
    plVar13 = (long *)0x0;
    goto LAB_7101c406d8;
  }
  ppuVar4 = (undefined **)*plVar13;
  plVar13 = (long *)plVar13[1];
  if (plVar13 != (long *)0x0) {
    plVar21 = plVar13 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = *plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (ppuVar4 == (undefined **)0x0) goto LAB_7101c406d8;
  puVar10 = (undefined8 *)(lVar14 + 0x110);
  FUN_7102356460(*(long *)(lVar23 + 8));
  lVar23 = DAT_7105329060;
  if (plVar13 != (long *)0x0) {
    plVar21 = plVar13 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = *plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar23 = *(long *)(lVar23 + 8);
  local_b8 = ppuVar4;
  local_b0 = plVar13;
  if (plVar13 == (long *)0x0) {
    uVar11 = 0;
    FUN_7102351c30(lVar23,&local_b8,puVar10,0);
  }
  else {
    plVar21 = plVar13 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = *plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar11 = 0;
    FUN_7102351c30(lVar23,&local_b8,puVar10,0);
    do {
      lVar23 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar23 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar16 = *ppuVar4;
  bVar7 = *(int *)(puVar16 + 4) != 0;
  lVar23 = 0x30;
  if (bVar7) {
    lVar23 = 8;
  }
  lVar14 = 0x38;
  if (bVar7) {
    lVar14 = 0x10;
  }
  lVar19 = 2;
  if (bVar7) {
    lVar19 = 4;
  }
  if ((int)((ulong)(*(long *)(puVar16 + lVar14) - *(long *)(puVar16 + lVar23)) >> lVar19) != 0) {
    uVar18 = 0;
    do {
      uVar1 = uVar18 + 1;
      puVar10 = (undefined8 *)(uVar1 & 0xffffffff);
      FUN_7103776910(&local_b8,**(long **)(lVar20 + 0x18) + 8,(long ****)"set_final_pos_p%d",puVar10
                     ,uVar11,param_5,param_6,param_7,param_8);
      lVar23 = *(long *)(*ppuVar4 + 8);
      if ((ulong)(*(long *)(*ppuVar4 + 0x10) - lVar23 >> 4) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar15 = (undefined8 *)(lVar23 + uVar18 * 0x10);
      plVar21 = (long *)*puVar15;
      plVar5 = (long *)puVar15[1];
      if (plVar5 != (long *)0x0) {
        plVar2 = plVar5 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar23 = *local_b0;
      if (lVar23 != 0) {
        uVar27 = *(undefined8 *)(*plVar21 + 0xa0);
        fVar26 = (float)uVar27;
        fVar32 = 16.0;
        if (0.0 <= fVar26) {
          fVar32 = -16.0;
        }
        *(float *)(lVar23 + 0x30) = fVar26 + fVar32;
        *(float *)(lVar23 + 0x34) = -(float)((ulong)uVar27 >> 0x20);
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 0x10;
      }
      if (plVar5 != (long *)0x0) {
        plVar21 = plVar5 + 1;
        do {
          lVar23 = *plVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *plVar21 = lVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar21 = local_b0;
      local_b8 = &PTR_FUN_710523d9a8;
      local_b0 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar21);
      }
      puVar16 = *ppuVar4;
      lVar23 = 0x30;
      lVar14 = 0x38;
      if (*(int *)(puVar16 + 4) != 0) {
        lVar23 = 8;
        lVar14 = 0x10;
      }
      lVar19 = 2;
      if (*(int *)(puVar16 + 4) != 0) {
        lVar19 = 4;
      }
      uVar18 = uVar1;
    } while (uVar1 < ((ulong)(*(long *)(puVar16 + lVar14) - *(long *)(puVar16 + lVar23)) >> lVar19 &
                     0xffffffff));
  }
  lVar23 = *(long *)(DAT_7105329060 + 8);
  uVar17 = *(uint *)(lVar23 + 0xae10);
  uVar24 = *(int *)(lVar23 + 0xae14) + uVar17;
  if (uVar24 == 0) {
    uVar22 = 0;
    uVar25 = 0;
LAB_7101c40658:
    plVar21 = (long *)(lVar20 + (long)(int)uVar22 * 0x10 + 0x210);
    do {
      FUN_7103778300(0x3f800000,*plVar21,0x710425f93f);
      uVar22 = uVar22 + 1;
      plVar21 = plVar21 + 2;
    } while (uVar22 < 0x10);
  }
  else {
    fVar32 = *(float *)(lVar23 + 0xe8);
    uVar18 = 0;
    uVar22 = 0;
    uVar25 = 0;
    lVar14 = 0x210;
    while( true ) {
      plVar21 = (long *)(lVar23 + lVar14);
      if (uVar17 <= uVar18) {
        plVar21 = (long *)(lVar23 + (ulong)((int)uVar18 - uVar17) * 0x30 + 0xa210);
      }
      iVar8 = (**(code **)(*plVar21 + 0x10))(plVar21);
      if (iVar8 == 1) {
        lVar23 = plVar21[2];
        uVar30 = *(undefined8 *)(*(long *)(DAT_7105329060 + 8) + 0x110);
        FUN_7103776910(&local_b8,lVar20 + 0x30,(long ****)"set_current_table",puVar10,uVar11,param_5
                       ,param_6,param_7,param_8);
        plVar5 = local_b0;
        uVar27 = _ConstantZero;
        if (*local_b0 != 0) {
          uVar27 = *(undefined8 *)(*local_b0 + 0x30);
        }
        local_b8 = &PTR_FUN_710523d9a8;
        local_b0 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar5);
        }
        uVar28 = *(undefined8 *)(*(long *)(DAT_7105329060 + 8) + 0x110);
        lVar19 = lVar20 + (long)(int)uVar25 * 0x10 + 0x308;
        if ((char)plVar21[4] != '\0') {
          lVar19 = lVar20 + (long)(int)uVar22 * 0x10 + 0x208;
        }
        FUN_7103776910(&local_b8,lVar19,(long ****)"set_pic_panel",puVar10,uVar11,param_5,param_6,
                       param_7,param_8);
        plVar5 = local_b0;
        fVar26 = 0.0;
        if (*local_b0 != 0) {
          fVar26 = ABS(*(float *)(*local_b0 + 0x50));
        }
        local_b8 = &PTR_FUN_710523d9a8;
        local_b0 = (long *)0x0;
        fVar29 = fVar32 * ((float)lVar23 - (float)uVar30) + ((float)uVar28 - (float)uVar27) + -960.0
        ;
        fVar31 = (1080.0 - (fVar32 * ((float)((ulong)lVar23 >> 0x20) -
                                     (float)((ulong)uVar30 >> 0x20)) +
                           ((float)((ulong)uVar28 >> 0x20) - -(float)((ulong)uVar27 >> 0x20)))) +
                 -540.0;
        if (plVar5 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar5);
        }
        fVar26 = fVar26 * 0.5 + 3.0;
        lVar23 = **(long **)(*(long *)(lVar19 + 8) + 0x18);
        if ((char)plVar21[4] == '\0') {
          if (lVar23 != 0) {
            *(float *)(lVar23 + 0x30) = fVar29 + fVar26;
            *(float *)(lVar23 + 0x34) = fVar31;
            *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 0x10;
          }
          uVar25 = uVar25 + 1;
        }
        else {
          if (lVar23 != 0) {
            *(float *)(lVar23 + 0x30) = fVar29 - fVar26;
            *(float *)(lVar23 + 0x34) = fVar31;
            *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 0x10;
          }
          uVar22 = uVar22 + 1;
        }
        if (*(char *)((long)plVar21 + 0x21) == '\0') {
          pcVar9 = "participate";
        }
        else {
          pcVar9 = "missed";
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar19 + 8),(long)pcVar9);
        if (**(uint **)(DAT_7105329060 + 8) < 0x11) {
          pcVar9 = "size_h2";
        }
        else {
          pcVar9 = "size_h1";
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar19 + 8),(long)pcVar9);
      }
      if ((ulong)uVar24 - 1 == uVar18) break;
      lVar23 = *(long *)(DAT_7105329060 + 8);
      uVar17 = *(uint *)(lVar23 + 0xae10);
      uVar18 = uVar18 + 1;
      lVar14 = lVar14 + 0x50;
    }
    if (uVar22 < 0x10) goto LAB_7101c40658;
  }
  if (uVar25 < 0x10) {
    iVar8 = 0x10 - uVar25;
    plVar21 = (long *)(lVar20 + (long)(int)uVar25 * 0x10 + 0x310);
    do {
      FUN_7103778300(0x3f800000,*plVar21,0x710425f93f);
      iVar8 = iVar8 + -1;
      plVar21 = plVar21 + 2;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(*(long *)(DAT_7105329060 + 8) + 0xae14) = 0;
LAB_7101c406d8:
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar20 + 0x18) + 0x10),0x710429257e);
  if (plVar13 != (long *)0x0) {
    plVar21 = plVar13 + 1;
    do {
      lVar20 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

