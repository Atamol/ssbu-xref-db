// addr:      7101e767d0
// offset:    0x1e767d0
// name:      FUN_7101e767d0
// mangled:   
// signature: undefined __cdecl FUN_7101e767d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_7101e767d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,long param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 extraout_x1;
  undefined *puVar11;
  long *********ppppppppplVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined **local_d8;
  ulong local_d0 [8];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  
  lVar13 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar13 + 0x254);
  if (uVar1 == 0xffffffff) {
    return;
  }
  uVar5 = uVar1 & 0xff;
  if (uVar5 < 2) {
    *(undefined4 *)(param_1 + 0x174) = 1;
    goto LAB_7101e7684c;
  }
  if (1 < uVar5 - 3) {
    if (uVar5 != 2) goto LAB_7101e7684c;
    iVar2 = *(int *)(param_1 + 0x174);
    if (iVar2 == 0) {
      lVar18 = *(long *)(lVar13 + 0x1b8);
      if (lVar18 != 0) {
        lVar13 = lVar13 + 0x1b8;
        lVar16 = lVar13;
        lVar14 = lVar18;
        do {
          if (2 < *(int *)(lVar14 + 0x20)) {
            lVar16 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 3) * 8);
        } while (lVar14 != 0);
        if (((lVar16 != lVar13) && (*(int *)(lVar16 + 0x20) < 4)) &&
           (*(long **)(lVar16 + 0x28) != (long *)0x0)) {
          uVar17 = (**(code **)(**(long **)(lVar16 + 0x28) + 0x200))();
          if ((uVar17 & 1) == 0) {
            lVar13 = *(long *)(param_1 + 0x18) + 0x1b8;
            lVar18 = *(long *)(*(long *)(param_1 + 0x18) + 0x1b8);
            goto LAB_7101e76d00;
          }
LAB_7101e76d4c:
          iVar2 = *(int *)(param_1 + 0x174);
          goto joined_r0x007101e76d54;
        }
LAB_7101e76d00:
        lVar16 = lVar13;
        if (lVar18 != 0) {
          do {
            if (3 < *(int *)(lVar18 + 0x20)) {
              lVar16 = lVar18;
            }
            lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 4) * 8);
          } while (lVar18 != 0);
          if (((lVar16 != lVar13) && (*(int *)(lVar16 + 0x20) < 5)) &&
             ((*(long **)(lVar16 + 0x28) != (long *)0x0 &&
              (uVar17 = (**(code **)(**(long **)(lVar16 + 0x28) + 0x200))(), (uVar17 & 1) != 0))))
          goto LAB_7101e76d4c;
        }
      }
      *(undefined4 *)(param_1 + 0x174) = 1;
    }
    else {
joined_r0x007101e76d54:
      if (iVar2 != 1) goto LAB_7101e7684c;
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x1b8);
    if (lVar13 != 0) {
      lVar18 = *(long *)(param_1 + 0x18) + 0x1b8;
      lVar16 = lVar18;
      lVar14 = lVar13;
      do {
        bVar4 = *(int *)(lVar14 + 0x20) < 0;
        if (!bVar4) {
          lVar16 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar4 * 8);
      } while (lVar14 != 0);
      if (((lVar16 != lVar18) && (*(int *)(lVar16 + 0x20) < 1)) &&
         (*(long **)(lVar16 + 0x28) != (long *)0x0)) {
        uVar17 = (**(code **)(**(long **)(lVar16 + 0x28) + 0x200))();
        if ((uVar17 & 1) != 0) goto LAB_7101e7684c;
        lVar18 = *(long *)(param_1 + 0x18) + 0x1b8;
        lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x1b8);
      }
      lVar16 = lVar18;
      if (lVar13 != 0) {
        do {
          if (0 < *(int *)(lVar13 + 0x20)) {
            lVar16 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
        } while (lVar13 != 0);
        if ((((lVar16 != lVar18) && (*(int *)(lVar16 + 0x20) < 2)) &&
            (*(long **)(lVar16 + 0x28) != (long *)0x0)) &&
           (uVar17 = (**(code **)(**(long **)(lVar16 + 0x28) + 0x200))(), (uVar17 & 1) != 0))
        goto LAB_7101e7684c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
LAB_7101e7684c:
  if (uVar1 == *(uint *)(param_1 + 0x58)) {
    return;
  }
  *(uint *)(param_1 + 0x58) = uVar1;
  if ((uVar1 & 0xff) < 5) {
    lVar13 = *DAT_7105329f98;
    plVar6 = *(long **)(*(long *)(lVar13 + 0x40) + (ulong)(byte)uVar1 * 8 + 0x90);
    if (plVar6 != (long *)0x0) {
      FUN_7102510b80(plVar6,(ulong)(DAT_710532a860 != 0),param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    FUN_7101e76e40(param_1,uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar6 = *(long **)(*(long *)(lVar13 + 0x40) + ((ulong)uVar1 & 0xff) * 8 + 0x90);
    lVar18 = 0;
    uVar17 = 0;
    lVar13 = param_1 + 8;
    do {
      ppppppppplVar12 = (long *********)(uVar17 & 0xffffffff);
      FUN_7103776640(&local_d8,lVar13,(byte ****)"set_parts_item_%02d",ppppppppplVar12,param_4,
                     param_5,param_6,param_7,param_8);
      uVar3 = local_d0[0];
      FUN_7103778300(0x3f800000,local_d0[0],0x710431949f);
      lVar16 = *plVar6 + lVar18;
      if (*(char *)(lVar16 + 0x18) == '\x04') {
        pcVar10 = "type_00";
LAB_7101e769e0:
        FUN_7103778300(0x3f800000,uVar3,(long)pcVar10);
        uVar7 = FUN_71025128e0((ulong *)*plVar6,*plVar6 + lVar18 + 0x10,ppppppppplVar12,param_4,
                               param_5,param_6,param_7,param_8);
        if ((uVar7 & 1) == 0) {
          FUN_7103778300(0x3f800000,uVar3,0x710429257e);
          pcVar10 = "soldout_off";
        }
        else {
          FUN_7103778300(0x3f800000,uVar3,0x71043cd335);
          pcVar10 = "soldout_on";
        }
        FUN_7103778300(0x3f800000,uVar3,(long)pcVar10);
        FUN_7103776640(&local_80,(long)&local_d8,(byte ****)"set_parts_new",ppppppppplVar12,param_4,
                       param_5,param_6,param_7,param_8);
        uVar5 = FUN_710338b9b0((ulong *)(*plVar6 + lVar18 + 0x10),extraout_x1,ppppppppplVar12,
                               param_4,param_5,param_6,param_7,param_8);
        uVar7 = local_78;
        if ((uVar5 & 1) == 0) {
          puVar11 = &DAT_71043cd335;
        }
        else {
          puVar11 = &DAT_710429257e;
        }
        FUN_7103778300(0x3f800000,local_78,(long)puVar11);
        FUN_7103776640(&local_90,(long)&local_d8,(byte ****)"set_parts_excl",ppppppppplVar12,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar16 = *plVar6;
        puVar8 = FUN_71032817a0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8),
                                0x169337cd2e);
        uVar9 = local_88;
        uVar15 = *(ulong *)(lVar16 + lVar18 + 0x10);
        if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0)
            ) && ((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000 &&
                  (((ulong)puVar8 & 0xffffffffff) != 0)))) {
          if ((((ulong)puVar8 ^ uVar15) & 0xffffffffff) == 0) goto LAB_7101e76b5c;
LAB_7101e76b10:
          puVar11 = &DAT_71043cd335;
        }
        else {
          if ((((ulong)puVar8 & 0xffffffffff) != 0 &&
              ((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000) !=
              ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0))
          goto LAB_7101e76b10;
LAB_7101e76b5c:
          puVar11 = &DAT_710429257e;
        }
        FUN_7103778300(0x3f800000,local_88,(long)puVar11);
        local_90 = &PTR_FUN_710523d988;
        local_88 = 0;
        if (uVar9 != 0) {
          uVar15 = *(ulong *)(uVar9 + 0x18);
          *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar9 + 0x18) = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          FUN_710392eb40(uVar9);
        }
        local_80 = &PTR_FUN_710523d988;
        local_78 = 0;
        if (uVar7 != 0) {
          uVar9 = *(ulong *)(uVar7 + 0x18);
          *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar7 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar7);
        }
      }
      else {
        if (*(char *)(lVar16 + 0x18) == '\x05') {
LAB_7101e769d4:
          pcVar10 = "type_01";
          goto LAB_7101e769e0;
        }
        uVar15 = *(ulong *)(lVar16 + 0x20) & 0xffffffffff;
        uVar7 = FUN_710327d930(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8),
                               0x1ae148d108);
        uVar9 = uVar7 & 0xffffffffff;
        bVar4 = (uVar7 & 0xff00000000000000) == 0x2d00000000000000;
        if (uVar15 == 0) {
          if (!bVar4 || uVar9 == 0) goto LAB_7101e769d4;
        }
        else if ((bVar4 && uVar9 != 0) && uVar9 == uVar15) goto LAB_7101e769d4;
        FUN_7103778300(0x3f800000,uVar3,0x71043cd335);
        FUN_7103778300(0x3f800000,uVar3,0x710435be11);
      }
      local_d0[0] = 0;
      local_d8 = &PTR_FUN_710523d988;
      if (uVar3 != 0) {
        local_d0[0] = 0;
        local_d8 = &PTR_FUN_710523d988;
        uVar7 = *(ulong *)(uVar3 + 0x18);
        *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar3 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar3);
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x30;
    } while (uVar17 != 4);
    FUN_7103776910(&local_d8,lVar13,(long ****)"set_rep_bg",ppppppppplVar12,param_4,param_5,param_6,
                   param_7,param_8);
    uVar17 = local_d0[0];
    if (uVar1 < 5) {
      FUN_7103778b80(local_d0[0],param_1 + (long)(int)uVar1 * 0x10 + 0x118,ppppppppplVar12,param_4,
                     param_5,param_6,param_7,param_8);
      local_d8 = &PTR_FUN_710523d9a8;
      local_d0[0] = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_71003a4ca0((uint *)&local_d8,"cam_shop%d_shop_name",(ulong)uVar1 & 0xff,ppppppppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_80,lVar13,(long ****)"set_txt_store_name",ppppppppplVar12,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_80,(char *)local_d0,ppppppppplVar12,param_4,param_5,param_6,
                     param_7,param_8);
      uVar17 = local_78;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = 0;
      if (uVar17 == 0) {
        return;
      }
      FUN_710392eb40(uVar17);
      return;
    }
  }
  else {
    FUN_7101e76e40(param_1,uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

