// addr:      7101e6a2a0
// offset:    0x1e6a2a0
// name:      FUN_7101e6a2a0
// mangled:   
// signature: undefined __cdecl FUN_7101e6a2a0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e6a2a0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  long lVar5;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  char *pcVar7;
  long *********ppppppppplVar8;
  long ****pppplVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  long ****pppplVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
  long ****pppplVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  undefined **local_70;
  ulong local_68;
  long ***local_60;
  undefined4 local_54;
  
  ppppppppplVar8 = (long *********)&DAT_00001000;
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x1e0),0,(long ****)&DAT_00001000,param_4,
                 param_5,param_6,param_7,param_8);
  lVar20 = *(long *)(param_1 + 0x330);
  plVar11 = *(long **)(lVar20 + 0x18);
  plVar18 = (long *)plVar11[1];
  if (plVar18 != (long *)0x0) {
    if ((char)plVar11[2] != '\0') {
      plVar23 = *(long **)(*plVar11 + 0x80);
      plVar11 = (long *)(*plVar11 + 0x88);
      if (plVar23 != plVar11) {
        do {
          while( true ) {
            uVar4 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
            if (((uVar4 & 1) != 0) &&
               (uVar4 = (**(code **)(*plVar18 + 0x120))(plVar18,plVar23[0xd]), (uVar4 & 1) != 0)) {
              (**(code **)(*(long *)plVar23[0xd] + 0x178))();
              (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
            }
            plVar22 = (long *)plVar23[1];
            if ((long *)plVar23[1] == (long *)0x0) break;
            do {
              plVar23 = plVar22;
              plVar22 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
LAB_7101e6a394:
            if (plVar23 == plVar11) goto LAB_7101e6a3ac;
          }
          plVar22 = plVar23 + 2;
          plVar25 = (long *)*plVar22;
          if ((long *)*plVar25 != plVar23) {
            do {
              lVar5 = *plVar22;
              plVar22 = (long *)(lVar5 + 0x10);
              plVar23 = (long *)*plVar22;
            } while (*plVar23 != lVar5);
            goto LAB_7101e6a394;
          }
          plVar23 = plVar25;
        } while (plVar25 != plVar11);
LAB_7101e6a3ac:
        plVar18 = *(long **)(*(long *)(lVar20 + 0x18) + 8);
      }
    }
    (**(code **)(*plVar18 + 0x178))(plVar18);
    lVar20 = *(long *)(param_1 + 0x330);
  }
  *(undefined1 *)(param_1 + 0x338) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar20 + 8),0x710434aa85);
  plVar11 = *(long **)(param_1 + 0x4d0);
  lVar20 = *(long *)(*plVar11 + 8);
  uVar6 = extraout_x1;
  if ((*(char *)(lVar20 + 0x388) != '\0') && ((ulong)*(byte *)(plVar11 + 1) < 3)) {
    lVar5 = *(long *)(lVar20 + (ulong)*(byte *)(plVar11 + 1) * 8 + 0x78);
    uVar6 = 0;
    if (lVar5 != 0) {
      FUN_7101e97fb0((long *)(param_1 + 0x340),lVar5);
      plVar11 = *(long **)(param_1 + 0x4d0);
      lVar20 = *(long *)(*plVar11 + 8);
      uVar6 = extraout_x1_00;
    }
  }
  if (((ulong)*(byte *)(plVar11 + 1) < 3) &&
     (lVar5 = *(long *)(lVar20 + (ulong)*(byte *)(plVar11 + 1) * 8 + 0x78),
     lVar5 != 0 && *(char *)(lVar20 + 0x388) != '\0')) {
    bVar2 = *(short *)(lVar5 + 0x38) != -1;
    uVar16 = 2;
    if (!bVar2) {
      uVar16 = 1;
    }
    uVar13 = (uint)bVar2;
    if (*(short *)(lVar5 + 0x20) != -1) {
      uVar13 = uVar16;
    }
    if (*(short *)(lVar5 + 0x50) != -1) {
      uVar13 = uVar13 + 1;
    }
    if (*(short *)(lVar5 + 0x68) != -1) {
      uVar13 = uVar13 + 1;
    }
    pppplVar19 = (long ****)(ulong)uVar13;
  }
  else {
    pppplVar19 = (long ****)0x0;
  }
  *(undefined1 *)(param_1 + 0x329) = 0;
  FUN_7101e980b0((long *)(param_1 + 0x310),uVar6,ppppppppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  bVar10 = *(byte *)(param_1 + 0x318);
  if (bVar10 != 0) {
    uVar4 = 0;
    do {
      if (3 < uVar4) goto LAB_7101e6ad94;
      lVar20 = *(long *)(*(long *)(param_1 + 0x310) + uVar4 * 8 + 0x18);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x50) = 0;
        FUN_71037790a0(*(long *)(lVar20 + 0x38),1,ppppppppplVar8,param_4,param_5,param_6,param_7,
                       param_8);
        bVar10 = *(byte *)(param_1 + 0x318);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar10);
  }
  iVar17 = (int)pppplVar19;
  *(char *)(param_1 + 0x318) = (char)pppplVar19;
  *(undefined1 *)(param_1 + 0x319) = 0;
  pppplVar9 = pppplVar19;
  FUN_7103778430(*(long *)(param_1 + 0x310),"slot_sum_%d",pppplVar19,param_4,param_5,param_6,param_7
                 ,param_8);
  lVar20 = *DAT_7105329fa0;
  lVar5 = *(long *)(lVar20 + 0x858);
  bVar10 = *(byte *)(*(long **)(param_1 + 0x4d0) + 1);
  uVar21 = (ulong)bVar10;
  uVar4 = (*(long *)(lVar20 + 0x860) - lVar5 >> 4) * -0x5555555555555555;
  if (uVar4 < uVar21 || uVar4 - uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar11 = (long *)(param_1 + 0x2e8);
  iVar3 = FUN_710251b000(*(long *)(**(long **)(param_1 + 0x4d0) + 8),bVar10);
  iVar1 = *(int *)(lVar5 + uVar21 * 0x30 + 8);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  uVar16 = *(uint *)(lVar20 + 0x840);
  if ((int)uVar16 < 2) {
    uVar16 = 1;
  }
  bVar10 = (byte)(uVar16 - 1);
  uVar13 = (uint)(((float)iVar3 / (float)iVar1) * (float)(uVar16 & 0xff));
  if (uVar13 <= (uVar16 - 1 & 0xff)) {
    bVar10 = (byte)uVar13;
  }
  FUN_7101e977a0(plVar11,bVar10,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  lVar20 = *plVar11;
  plVar18 = (long *)(lVar20 + 0x28);
  puVar26 = (undefined8 *)*plVar18;
  plVar23 = (long *)(lVar20 + 0x30);
  puVar24 = (undefined8 *)*plVar23;
  while (puVar24 != puVar26) {
    puVar24 = puVar24 + -2;
    (**(code **)*puVar24)(puVar24);
  }
  *plVar23 = (long)puVar26;
  if (iVar17 == 3) {
    FUN_71037780e0(&local_70,lVar20,(long ****)"anime_star_01",pppplVar9,param_4,param_5,param_6,
                   param_7,param_8);
    uVar4 = local_68;
    puVar24 = *(undefined8 **)(lVar20 + 0x30);
    if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
      *puVar24 = &PTR_FUN_710523d9e8;
      puVar24[1] = 0;
      if ((undefined ***)puVar24 != &local_70) {
        local_68 = 0;
        uVar21 = puVar24[1];
        puVar24[1] = uVar4;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
      *plVar23 = *plVar23 + 0x10;
    }
    else {
      FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    }
    uVar4 = local_68;
    local_70 = &PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    pcVar7 = "anime_star_03";
LAB_7101e6a880:
    FUN_71037780e0(&local_70,lVar20,(long ****)pcVar7,pppplVar9,param_4,param_5,param_6,param_7,
                   param_8);
    uVar4 = local_68;
    puVar24 = *(undefined8 **)(lVar20 + 0x30);
    if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
      *puVar24 = &PTR_FUN_710523d9e8;
      puVar24[1] = 0;
      if ((undefined ***)puVar24 != &local_70) {
        local_68 = 0;
        uVar21 = puVar24[1];
        puVar24[1] = uVar4;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
      *plVar23 = *plVar23 + 0x10;
    }
    else {
      FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    }
    uVar4 = local_68;
    local_70 = &PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    pcVar7 = "anime_star_05";
LAB_7101e6a8f4:
    FUN_71037780e0(&local_70,lVar20,(long ****)pcVar7,pppplVar9,param_4,param_5,param_6,param_7,
                   param_8);
    uVar4 = local_68;
    puVar24 = *(undefined8 **)(lVar20 + 0x30);
    if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
      *puVar24 = &PTR_FUN_710523d9e8;
      puVar24[1] = 0;
      if ((undefined ***)puVar24 != &local_70) {
        local_68 = 0;
        uVar21 = puVar24[1];
        puVar24[1] = uVar4;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
      *plVar23 = *plVar23 + 0x10;
    }
    else {
      FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    if (iVar17 == 2) {
      FUN_71037780e0(&local_70,lVar20,(long ****)"anime_star_02",pppplVar9,param_4,param_5,param_6,
                     param_7,param_8);
      uVar4 = local_68;
      puVar24 = *(undefined8 **)(lVar20 + 0x30);
      if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
        *puVar24 = &PTR_FUN_710523d9e8;
        puVar24[1] = 0;
        if ((undefined ***)puVar24 != &local_70) {
          local_68 = 0;
          uVar21 = puVar24[1];
          puVar24[1] = uVar4;
          if (uVar21 != 0) {
            FUN_710392eb40(uVar21);
          }
        }
        *plVar23 = *plVar23 + 0x10;
      }
      else {
        FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
      }
      uVar4 = local_68;
      local_70 = &PTR_FUN_710523d9e8;
      local_68 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      pcVar7 = "anime_star_04";
      goto LAB_7101e6a8f4;
    }
    if (iVar17 != 1) {
      FUN_71037780e0(&local_70,lVar20,(long ****)"anime_star_00",pppplVar9,param_4,param_5,param_6,
                     param_7,param_8);
      uVar4 = local_68;
      puVar24 = *(undefined8 **)(lVar20 + 0x30);
      if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
        *puVar24 = &PTR_FUN_710523d9e8;
        puVar24[1] = 0;
        if ((undefined ***)puVar24 != &local_70) {
          local_68 = 0;
          uVar21 = puVar24[1];
          puVar24[1] = uVar4;
          if (uVar21 != 0) {
            FUN_710392eb40(uVar21);
          }
        }
        *plVar23 = *plVar23 + 0x10;
      }
      else {
        FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
      }
      uVar4 = local_68;
      local_70 = &PTR_FUN_710523d9e8;
      local_68 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_71037780e0(&local_70,lVar20,(long ****)"anime_star_02",pppplVar9,param_4,param_5,param_6,
                     param_7,param_8);
      uVar4 = local_68;
      puVar24 = *(undefined8 **)(lVar20 + 0x30);
      if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
        *puVar24 = &PTR_FUN_710523d9e8;
        puVar24[1] = 0;
        if ((undefined ***)puVar24 != &local_70) {
          local_68 = 0;
          uVar21 = puVar24[1];
          puVar24[1] = uVar4;
          if (uVar21 != 0) {
            FUN_710392eb40(uVar21);
          }
        }
        *plVar23 = *plVar23 + 0x10;
      }
      else {
        FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
      }
      uVar4 = local_68;
      local_70 = &PTR_FUN_710523d9e8;
      local_68 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      pcVar7 = "anime_star_04";
      goto LAB_7101e6a880;
    }
    FUN_71037780e0(&local_70,lVar20,(long ****)"anime_star_03",pppplVar9,param_4,param_5,param_6,
                   param_7,param_8);
    uVar4 = local_68;
    puVar24 = *(undefined8 **)(lVar20 + 0x30);
    if (puVar24 < *(undefined8 **)(lVar20 + 0x38)) {
      *puVar24 = &PTR_FUN_710523d9e8;
      puVar24[1] = 0;
      if ((undefined ***)puVar24 != &local_70) {
        local_68 = 0;
        uVar21 = puVar24[1];
        puVar24[1] = uVar4;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
      }
      *plVar23 = *plVar23 + 0x10;
    }
    else {
      FUN_7101b09e60(plVar18,&local_70,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    }
  }
  uVar4 = local_68;
  local_70 = &PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  pppplVar14 = (long ****)(*(long *)(param_1 + 0x300) - *(long *)(param_1 + 0x2f8) >> 2);
  if (pppplVar14 < pppplVar19) {
    FUN_71003ca470((undefined8 *)(param_1 + 0x2f8),(long)pppplVar19 - (long)pppplVar14,pppplVar9,
                   param_4,param_5,param_6,param_7,param_8);
  }
  else if (pppplVar14 != pppplVar19) {
    *(long *)(param_1 + 0x300) = *(long *)(param_1 + 0x2f8) + (long)pppplVar19 * 4;
  }
  FUN_71037780e0(&local_70,*plVar11,(long ****)"treasure_out",pppplVar9,param_4,param_5,param_6,
                 param_7,param_8);
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000010;
      pppplVar9 = &local_60;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar24 != (undefined8 *)0x0)) goto LAB_7101e6aa04;
    }
    puVar24 = (undefined8 *)0x0;
  }
LAB_7101e6aa04:
  uVar4 = local_68;
  *puVar24 = &PTR_FUN_710523d9e8;
  puVar24[1] = 0;
  if (&local_70 != (undefined ***)puVar24) {
    local_68 = 0;
    puVar24[1] = uVar4;
  }
  plVar18 = *(long **)(*plVar11 + 0x20);
  *(undefined8 **)(*plVar11 + 0x20) = puVar24;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))(plVar18);
  }
  uVar4 = local_68;
  local_70 = &PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_710377b140(*(long *)(*(long *)(param_1 + 0x2e8) + 0x20));
  *(undefined1 *)(param_1 + 0x2f0) = 3;
  if (iVar17 != 0) {
    lVar20 = *(long *)(**(long **)(param_1 + 0x4d0) + 8);
    uVar27 = 0;
    if (((*(char *)(lVar20 + 0x388) != '\0') &&
        (uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 0x4d0) + 1), uVar4 < 3)) &&
       (lVar20 = *(long *)(lVar20 + uVar4 * 8 + 0x78), lVar20 != 0)) {
      uVar27 = *(undefined4 *)(lVar20 + 0x28);
    }
    if (*(undefined4 **)(param_1 + 0x300) != *(undefined4 **)(param_1 + 0x2f8)) {
      **(undefined4 **)(param_1 + 0x2f8) = uVar27;
    }
    if (iVar17 != 1) {
      lVar20 = *(long *)(**(long **)(param_1 + 0x4d0) + 8);
      uVar27 = 0;
      if (((*(char *)(lVar20 + 0x388) != '\0') &&
          (uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 0x4d0) + 1), uVar4 < 3)) &&
         (lVar20 = *(long *)(lVar20 + uVar4 * 8 + 0x78), lVar20 != 0)) {
        uVar27 = *(undefined4 *)(lVar20 + 0x40);
      }
      if (1 < (ulong)(*(long *)(param_1 + 0x300) - *(long *)(param_1 + 0x2f8) >> 2)) {
        *(undefined4 *)(*(long *)(param_1 + 0x2f8) + 4) = uVar27;
      }
      if (iVar17 != 2) {
        lVar20 = *(long *)(**(long **)(param_1 + 0x4d0) + 8);
        uVar27 = 0;
        if (((*(char *)(lVar20 + 0x388) != '\0') &&
            (uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 0x4d0) + 1), uVar4 < 3)) &&
           (lVar20 = *(long *)(lVar20 + uVar4 * 8 + 0x78), lVar20 != 0)) {
          uVar27 = *(undefined4 *)(lVar20 + 0x58);
        }
        if (2 < (ulong)(*(long *)(param_1 + 0x300) - *(long *)(param_1 + 0x2f8) >> 2)) {
          *(undefined4 *)(*(long *)(param_1 + 0x2f8) + 8) = uVar27;
        }
        if (iVar17 != 3) {
          lVar20 = *(long *)(**(long **)(param_1 + 0x4d0) + 8);
          uVar27 = 0;
          if (((*(char *)(lVar20 + 0x388) != '\0') &&
              (uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 0x4d0) + 1), uVar4 < 3)) &&
             (lVar20 = *(long *)(lVar20 + uVar4 * 8 + 0x78), lVar20 != 0)) {
            uVar27 = *(undefined4 *)(lVar20 + 0x70);
          }
          if (3 < (ulong)(*(long *)(param_1 + 0x300) - *(long *)(param_1 + 0x2f8) >> 2)) {
            *(undefined4 *)(*(long *)(param_1 + 0x2f8) + 0xc) = uVar27;
          }
        }
      }
    }
  }
  lVar20 = *(long *)(param_1 + 0x248);
  plVar18 = *(long **)(*(long *)(lVar20 + 0x18) + 0x10);
  plVar11 = (long *)(param_1 + 0x248);
  if (plVar18 != (long *)0x0) {
    pppplVar9 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
    FUN_71037a2270(plVar18,(ushort *)&local_70,0,0);
    lVar20 = *plVar11;
  }
  plVar18 = *(long **)(lVar20 + 0x40);
  if (plVar18 != (long *)0x0) {
    plVar23 = (long *)plVar18[1];
    plVar22 = (long *)plVar23[1];
    if (plVar22 == (long *)0x0) {
      *(undefined8 *)(lVar20 + 0x40) = 0;
    }
    else {
      if ((char)plVar23[2] != '\0') {
        plVar25 = *(long **)(*plVar23 + 0x80);
        plVar23 = (long *)(*plVar23 + 0x88);
        if (plVar25 != plVar23) {
          do {
            while( true ) {
              uVar4 = (**(code **)(*(long *)plVar25[0xd] + 0x148))();
              if (((uVar4 & 1) != 0) &&
                 (uVar4 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar25[0xd]), (uVar4 & 1) != 0))
              {
                (**(code **)(*(long *)plVar25[0xd] + 0x178))();
                (**(code **)(*(long *)plVar25[0xd] + 0x140))((long *)plVar25[0xd],0);
              }
              plVar12 = (long *)plVar25[1];
              if ((long *)plVar25[1] == (long *)0x0) break;
              do {
                plVar25 = plVar12;
                plVar12 = (long *)*plVar25;
              } while ((long *)*plVar25 != (long *)0x0);
LAB_7101e6acac:
              if (plVar25 == plVar23) goto LAB_7101e6acc4;
            }
            plVar12 = plVar25 + 2;
            plVar15 = (long *)*plVar12;
            if ((long *)*plVar15 != plVar25) {
              do {
                lVar20 = *plVar12;
                plVar12 = (long *)(lVar20 + 0x10);
                plVar25 = (long *)*plVar12;
              } while (*plVar25 != lVar20);
              goto LAB_7101e6acac;
            }
            plVar25 = plVar15;
          } while (plVar15 != plVar23);
LAB_7101e6acc4:
          plVar22 = *(long **)(plVar18[1] + 8);
        }
      }
      (**(code **)(*plVar22 + 0x178))(plVar22);
      plVar18 = *(long **)(*plVar11 + 0x40);
      *(undefined8 *)(*plVar11 + 0x40) = 0;
      if (plVar18 == (long *)0x0) goto LAB_7101e6ad04;
    }
    (**(code **)(*plVar18 + 8))(plVar18);
  }
LAB_7101e6ad04:
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x248) + 8),0x7104443dfb);
  *(undefined1 *)(param_1 + 0x251) = 0;
  *(undefined1 *)(param_1 + 0x2c0) = 1;
  FUN_7101e94e90(plVar11,1,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x2c1) = 4;
  if (0x12 < *(uint *)(param_1 + 0x1cc)) {
LAB_7101e6ad94:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1cc) * 4 + 0x180) = 1;
  if (*(int *)(param_1 + 0x1cc) < 0x12) {
    uVar16 = *(int *)(param_1 + 0x1cc) + 1;
    *(uint *)(param_1 + 0x1cc) = uVar16;
    if (0x12 < uVar16) goto LAB_7101e6ad94;
    *(undefined4 *)(param_1 + (long)(int)uVar16 * 4 + 0x180) = 0x11;
  }
  return;
}

