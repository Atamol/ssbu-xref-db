// addr:      7101bc0f30
// offset:    0x1bc0f30
// name:      FUN_7101bc0f30
// mangled:   
// signature: undefined __cdecl FUN_7101bc0f30(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101bc0f30(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *__src;
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  void *__dest;
  undefined8 uVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulong uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long ****pppplVar29;
  undefined4 uVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined4 auStack_1198 [2];
  undefined **local_1190;
  long local_1188;
  int local_1180;
  undefined1 local_1178;
  uint local_1158 [2];
  byte local_1150 [64];
  uint local_1110 [2];
  byte local_1108 [16];
  undefined4 local_10f8;
  undefined8 local_10c8;
  byte local_10c0 [64];
  void *local_1080;
  void *local_1078;
  void *local_1070;
  undefined8 local_1068;
  undefined **local_1060;
  long local_1058;
  undefined8 local_1050;
  undefined1 local_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  
  lVar23 = *(long *)(param_1 + 0x80);
  if (*(int *)(*(long *)(lVar23 + 0x7b0) + 0x25c) == 1) {
    if (*(int *)(*DAT_71052b8f00 + 4) == 0xc) {
      FUN_71024076d0(auStack_1198,0xed63546f2);
      local_1190 = &PTR_FUN_7104f73d50;
      if (((local_1188 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_1180 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_1188 + 0x38);
        do {
          cVar18 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar1) {
            *piVar13 = *piVar13 + -1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
      }
      local_1188 = 0;
      local_1178 = 0;
    }
    else {
      switch(*(undefined4 *)(lVar23 + 0xb68)) {
      case 0:
        *(undefined4 *)(lVar23 + 0xb68) = 2;
        pcVar16 = "mel_training_camera_expand";
        break;
      case 1:
        *(undefined4 *)(lVar23 + 0xb68) = 3;
        pcVar16 = "mel_training_camera_fixing";
        break;
      case 2:
        *(undefined4 *)(lVar23 + 0xb68) = 1;
        pcVar16 = "mel_training_camera_more_expand";
        break;
      case 3:
        pcVar16 = "mel_training_camera_normal";
        *(undefined4 *)(lVar23 + 0xb68) = 0;
        break;
      default:
        goto switchD_7101bc1008_default;
      }
      FUN_710377a120(lVar23 + 0x388,pcVar16,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,lVar23 + 0x2b8);
    }
  }
switchD_7101bc1008_default:
  iVar25 = *(int *)(lVar23 + 0xb70);
  if (iVar25 - 2U < 4) {
    uVar3 = (**(code **)(**(long **)(lVar23 + 0x7c0) + 0x68))();
    if ((uVar3 & 1) == 0) {
      return;
    }
    switch(*(undefined4 *)(lVar23 + 0xb70)) {
    case 2:
      if (*(int *)(lVar23 + 0xad0) == 0) {
        plVar26 = (long *)(lVar23 + 0xa58);
LAB_7101bc11a4:
        lVar28 = *plVar26;
        lVar27 = plVar26[1];
        if (lVar27 != lVar28) {
          uVar3 = 0;
          lVar31 = 8;
          do {
            if ((ulong)(lVar27 - lVar28 >> 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            param_3 = (long ****)(ulong)*(uint *)(lVar23 + 0xad0);
            uVar21 = FUN_7101bbd2b0(lVar23,*(ulong *)(lVar28 + uVar3 * 8),*(uint *)(lVar23 + 0xad0))
            ;
            lVar28 = *(long *)(lVar23 + 0xab8);
            if (uVar3 < (ulong)(*(long *)(lVar23 + 0xac0) - lVar28 >> 4)) {
              plVar5 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8
                                             );
              if (plVar5 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_10c8._0_4_ = 0;
                  local_1068 = (long ****)&DAT_00000008;
                  param_3 = (long ****)&local_1068;
                  uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_10c8);
                  if (((uVar6 & 1) != 0) &&
                     (plVar5 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7
                                                      ,param_8), plVar5 != (long *)0x0))
                  goto LAB_7101bc1250;
                }
                plVar5 = (long *)0x0;
              }
LAB_7101bc1250:
              *plVar5 = 0;
              lVar28 = *(long *)(*(long *)(lVar28 + lVar31) + 8);
              if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
                *plVar5 = 0;
              }
              else {
                plVar4 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),
                                                *(long *)(lVar28 + 0x18) + 0xb0);
                *plVar5 = (long)plVar4;
                if (plVar4 != (long *)0x0) {
                  (**(code **)(*plVar4 + 0x208))(plVar4,uVar21 & 1);
                  uVar6 = (**(code **)(*plVar4 + 0x200))(plVar4);
                  if ((uVar6 & 1) == 0) {
                    uVar21 = 1;
                  }
                  else {
                    uVar21 = (**(code **)(*plVar4 + 0x210))(plVar4);
                    uVar21 = uVar21 ^ 1;
                  }
                  param_3 = (long ****)0x0;
                  (**(code **)(*plVar4 + 0x388))(plVar4,uVar21 & 1);
                }
              }
              FUN_710392eb40((ulong)plVar5);
            }
            lVar28 = *plVar26;
            lVar27 = plVar26[1];
            uVar3 = uVar3 + 1;
            lVar31 = lVar31 + 0x10;
          } while (uVar3 < (ulong)(lVar27 - lVar28 >> 3));
        }
      }
      break;
    case 3:
      if (*(int *)(lVar23 + 0xad0) == 1) {
        plVar26 = (long *)(lVar23 + 0xa70);
        goto LAB_7101bc11a4;
      }
      break;
    case 4:
      if (*(int *)(lVar23 + 0xad0) == 2) {
        plVar26 = (long *)(lVar23 + 0xa88);
        goto LAB_7101bc11a4;
      }
      break;
    case 5:
      if (*(int *)(lVar23 + 0xad0) == 3) {
        plVar26 = (long *)(lVar23 + 0xaa0);
        goto LAB_7101bc11a4;
      }
    }
    plVar26 = *(long **)(lVar23 + 0xb30);
    if ((plVar26 != (long *)0x0) &&
       (iVar25 = *(int *)(*(long *)(lVar23 + 0x7c0) + 0x2b4), iVar25 != -1)) {
      iVar12 = *(int *)(lVar23 + 0xb74);
      if (iVar12 == 1) {
        plVar5 = (long *)(lVar23 + 0xa70);
      }
      else if (iVar12 == 2) {
        plVar5 = (long *)(lVar23 + 0xa88);
      }
      else if (iVar12 == 3) {
        plVar5 = (long *)(lVar23 + 0xaa0);
      }
      else {
        plVar5 = (long *)(lVar23 + 0xa58);
      }
      if ((((ulong)(long)iVar25 < (ulong)(plVar5[1] - *plVar5 >> 3)) &&
          (pppplVar29 = *(long *****)(*plVar5 + (long)iVar25 * 8),
          ((ulong)pppplVar29 & 0xff00000000000000) == 0x1e00000000000000)) &&
         (((ulong)pppplVar29 & 0xffffffffff) != 0)) {
        iVar25 = *(int *)(lVar23 + 0xb70);
        if (iVar25 == 2) {
          lVar28 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268) + 8);
          uVar3 = FUN_710327fb30(lVar28,0x10bd3564e2);
          if ((((((uVar3 & 0xff00000000000000) == 0x1e00000000000000) &&
                ((uVar3 & 0xffffffffff) != 0)) &&
               (((uVar3 ^ (ulong)pppplVar29) & 0xffffffffff) == 0)) ||
              (((uVar3 = FUN_710327fb30(lVar28,0xe346ef289),
                (uVar3 & 0xff00000000000000) == 0x1e00000000000000 && ((uVar3 & 0xffffffffff) != 0))
               && (((uVar3 ^ (ulong)pppplVar29) & 0xffffffffff) == 0)))) ||
             (((uVar3 = FUN_710327fb30(lVar28,0x124c25c799),
               (uVar3 & 0xff00000000000000) == 0x1e00000000000000 && ((uVar3 & 0xffffffffff) != 0))
              && (((uVar3 ^ (ulong)pppplVar29) & 0xffffffffff) == 0)))) goto LAB_7101bc1470;
        }
        param_3 = (long ****)&local_10c8;
        local_10c8._0_4_ = CONCAT31(local_10c8._1_3_,iVar25 == 5);
        local_1068 = pppplVar29;
        (**(code **)(*plVar26 + 0x30))(plVar26,&local_1068);
      }
    }
LAB_7101bc1470:
    lVar28 = *(long *)(lVar23 + 0x7c0);
    iVar12 = *(int *)(lVar23 + 0xbd4);
    iVar25 = *(int *)(lVar28 + 0x2a4);
    if (iVar12 == -1) {
      iVar11 = -1;
      if (iVar25 != -1) goto LAB_7101bc1498;
LAB_7101bc14d4:
      iVar24 = -1;
      if (iVar12 != -1) goto LAB_7101bc14ac;
LAB_7101bc14e0:
      iVar19 = -1;
      if (iVar25 != -1) goto LAB_7101bc14bc;
LAB_7101bc14ec:
      iVar20 = -1;
    }
    else {
      iVar11 = *(int *)(lVar28 + 0x28c);
      iVar24 = 0;
      if (iVar11 != 0) {
        iVar24 = iVar12 / iVar11;
      }
      iVar11 = iVar12 - iVar24 * iVar11;
      if (iVar25 == -1) goto LAB_7101bc14d4;
LAB_7101bc1498:
      iVar24 = *(int *)(lVar28 + 0x28c);
      iVar19 = 0;
      if (iVar24 != 0) {
        iVar19 = iVar25 / iVar24;
      }
      iVar24 = iVar25 - iVar19 * iVar24;
      if (iVar12 == -1) goto LAB_7101bc14e0;
LAB_7101bc14ac:
      iVar19 = 0;
      if (*(int *)(lVar28 + 0x28c) != 0) {
        iVar19 = iVar12 / *(int *)(lVar28 + 0x28c);
      }
      if (iVar25 == -1) goto LAB_7101bc14ec;
LAB_7101bc14bc:
      iVar20 = 0;
      if (*(int *)(lVar28 + 0x28c) != 0) {
        iVar20 = iVar25 / *(int *)(lVar28 + 0x28c);
      }
    }
    uVar3 = (ulong)iVar25;
    if (iVar19 == iVar20) {
      iVar12 = *(int *)(lVar23 + 0xb74);
      if (iVar12 == 1) {
        plVar26 = (long *)(lVar23 + 0xa70);
      }
      else if (iVar12 == 2) {
        plVar26 = (long *)(lVar23 + 0xa88);
      }
      else if (iVar12 == 3) {
        plVar26 = (long *)(lVar23 + 0xaa0);
      }
      else {
        plVar26 = (long *)(lVar23 + 0xa58);
      }
      if ((((ulong)(plVar26[1] - *plVar26 >> 3) <= uVar3 + 8) && (iVar11 != iVar24)) &&
         (iVar24 != 7)) {
        if (iVar12 == 1) {
          plVar26 = (long *)(lVar23 + 0xa70);
        }
        else if (iVar12 == 2) {
          plVar26 = (long *)(lVar23 + 0xa88);
        }
        else if (iVar12 == 3) {
          plVar26 = (long *)(lVar23 + 0xaa0);
        }
        else {
          plVar26 = (long *)(lVar23 + 0xa58);
        }
        if ((iVar11 != 0) && ((ulong)(plVar26[1] - *plVar26 >> 3) <= uVar3 + 1)) {
LAB_7101bc1ba8:
          lVar28 = *(long *)(*(long *)**(undefined8 **)(lVar23 + 0x18) + 0x600);
          *(undefined1 *)(lVar28 + 0x410) = 1;
          *(undefined1 *)(lVar28 + 0x428) = 1;
        }
      }
    }
    else if (iVar11 == iVar24) {
      iVar11 = *(int *)(lVar23 + 0xb74);
      if (iVar20 == 0) {
        if (iVar11 == 1) {
          plVar26 = (long *)(lVar23 + 0xa70);
        }
        else if (iVar11 == 2) {
          plVar26 = (long *)(lVar23 + 0xa88);
        }
        else if (iVar11 == 3) {
          plVar26 = (long *)(lVar23 + 0xaa0);
        }
        else {
          plVar26 = (long *)(lVar23 + 0xa58);
        }
        if ((long)iVar12 + 8U < (ulong)(plVar26[1] - *plVar26 >> 3)) goto LAB_7101bc1ba8;
      }
      if (iVar11 == 1) {
        plVar26 = (long *)(lVar23 + 0xa70);
      }
      else if (iVar11 == 2) {
        plVar26 = (long *)(lVar23 + 0xa88);
      }
      else if (iVar11 == 3) {
        plVar26 = (long *)(lVar23 + 0xaa0);
      }
      else {
        plVar26 = (long *)(lVar23 + 0xa58);
      }
      if ((iVar19 != 0) && ((ulong)(plVar26[1] - *plVar26 >> 3) <= uVar3 + 8)) goto LAB_7101bc1ba8;
    }
    *(int *)(lVar23 + 0xbd4) = iVar25;
    *(undefined4 *)(lVar23 + 0xbd8) = *(undefined4 *)(*(long *)(lVar23 + 0x7c0) + 0x260);
    plVar26 = (long *)(lVar23 + 0x7c0);
    bVar2 = (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x78))();
    plVar5 = *(long **)(lVar23 + 0x7c0);
    if ((int)plVar5[0x57] == 2) {
      if (iVar25 == -1) {
        iVar25 = -1;
      }
      else {
        iVar12 = *(int *)((long)plVar5 + 0x28c);
        iVar11 = 0;
        if (iVar12 != 0) {
          iVar11 = iVar25 / iVar12;
        }
        iVar25 = iVar25 - iVar11 * iVar12;
      }
      param_3 = (long ****)0x1;
      param_4 = (byte ****)0x1;
      FUN_7103783c10(plVar26,iVar25,1,1,param_5,param_6,param_7,param_8);
      (**(code **)(**(long **)(lVar23 + 0x7c0) + 0x70))(*(long **)(lVar23 + 0x7c0),1);
LAB_7101bc2314:
      *(byte *)(lVar23 + 0xbac) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        if (3 < *(uint *)(lVar23 + 0xba8)) goto LAB_7101bc2eec;
        *(int *)(lVar23 + (ulong)*(uint *)(lVar23 + 0xba8) * 0xc + 0xb78) = iVar25;
        *(undefined1 *)(lVar23 + 0xbac) = 0;
        uVar21 = *(uint *)(lVar23 + 0xba8);
        if (3 < uVar21) goto LAB_7101bc2eec;
        lVar28 = lVar23 + (ulong)uVar21 * 0xc;
        iVar25 = *(int *)(lVar28 + 0xb78);
        uVar3 = (ulong)iVar25;
        if ((iVar25 == *(int *)(lVar28 + 0xb7c)) &&
           (*(char *)(lVar23 + (ulong)uVar21 * 0xc + 0xb80) == '\0')) {
          return;
        }
        if (iVar25 == -1) {
          plVar26 = *(long **)(*(long *)(lVar23 + 0x360) + 0x10);
          if (plVar26 != (long *)0x0) {
            local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
            FUN_71037a2270(plVar26,(ushort *)&local_1068,0,0);
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x370) + 0x10);
          if (plVar26 != (long *)0x0) {
            local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
            FUN_71037a2270(plVar26,(ushort *)&local_1068,0,0);
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x380) + 0x10);
          if (plVar26 == (long *)0x0) {
            return;
          }
          local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
          puVar9 = (ushort *)&local_1068;
          goto LAB_7101bc23b8;
        }
        lVar28 = *(long *)(DAT_710532f730 + 8);
        iVar25 = *(int *)(lVar23 + 0xb74);
        if (iVar25 == 1) {
          puVar15 = (undefined8 *)(lVar23 + 0xa70);
        }
        else if (iVar25 == 2) {
          puVar15 = (undefined8 *)(lVar23 + 0xa88);
        }
        else if (iVar25 == 3) {
          puVar15 = (undefined8 *)(lVar23 + 0xaa0);
        }
        else {
          puVar15 = (undefined8 *)(lVar23 + 0xa58);
        }
        local_1078 = (void *)0x0;
        local_1070 = (void *)0x0;
        local_1080 = (void *)0x0;
        __src = (void *)*puVar15;
        pppplVar29 = (long ****)(puVar15[1] - (long)__src);
        if (pppplVar29 == (long ****)0x0) {
          __dest = (void *)0x0;
        }
        else {
          if ((ulong)((long)pppplVar29 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          __dest = (void *)FUN_710392e290(0x10,pppplVar29,param_3,param_4,param_5,param_6,param_7,
                                          param_8);
          if (__dest == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_10c8._0_4_ = 0;
              param_3 = (long ****)&local_1068;
              local_1068 = pppplVar29;
              uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_10c8);
              if (((uVar6 & 1) != 0) &&
                 (__dest = (void *)FUN_710392e290(0x10,pppplVar29,param_3,param_4,param_5,param_6,
                                                  param_7,param_8), __dest != (void *)0x0))
              goto LAB_7101bc2518;
            }
            __dest = (void *)0x0;
          }
LAB_7101bc2518:
          local_1070 = (void *)((long)__dest + ((long)pppplVar29 >> 3) * 8);
          local_1080 = __dest;
          local_1078 = __dest;
          if (0 < (long)pppplVar29) {
            param_3 = pppplVar29;
            memcpy(__dest,__src,(size_t)pppplVar29);
            local_1078 = (void *)((long)__dest + (long)pppplVar29);
          }
        }
        if ((ulong)((long)local_1078 - (long)__dest >> 3) <= uVar3) goto LAB_7101bc2eac;
        uVar6 = *(ulong *)((long)__dest + uVar3 * 8);
        if (((uVar6 & 0xff00000000000000) == 0x1e00000000000000) && ((uVar6 & 0xffffffffff) != 0)) {
          FUN_710377aee0(0x3f800000,lVar23 + 0x198);
          lVar27 = uVar3 * 8;
          uVar6 = *(ulong *)((long)__dest + lVar27);
          FUN_710327fc30((uint *)&local_1068,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),uVar6)
          ;
          FUN_71003a4ca0((uint *)&local_10c8,"nam_item_%s",&local_1060,uVar6,param_4,param_5,param_6
                         ,param_7,param_8);
          FUN_71033980b0(local_1110,*(ulong *)((long)__dest + lVar27));
          uVar6 = *(ulong *)((long)__dest + lVar27);
          FUN_710327fc30((uint *)&local_1068,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),uVar6)
          ;
          FUN_71003a4ca0(local_1158,"nam_item_help_%s",&local_1060,uVar6,param_4,param_5,param_6,
                         param_7,param_8);
          uVar7 = FUN_7103280000(*(long *)(lVar28 + 0x268),*(ulong *)((long)__dest + lVar27));
          iVar25 = *(int *)(lVar23 + 0xba8);
          bVar1 = iVar25 == 3;
          uVar30 = (undefined4)uVar7;
          if (iVar25 == 2) {
            uVar8 = FUN_710327fb30(*(long *)(*(long *)(lVar28 + 0x268) + 8),0xe346ef289);
            uVar17 = *(ulong *)((long)__dest + uVar3 * 8);
            uVar3 = uVar8 & 0xffffffffff;
            if (((uVar17 & 0xff00000000000000) == 0x1e00000000000000) &&
               ((uVar17 & 0xffffffffff) != 0)) {
              if (((uVar8 & 0xff00000000000000) != 0x1e00000000000000) || (uVar3 == 0))
              goto LAB_7101bc2bc0;
              uVar3 = (uVar8 ^ uVar17) & 0xffffffffff;
joined_r0x007101bc29a8:
              if (uVar3 != 0) goto LAB_7101bc2bc0;
            }
            else if ((uVar8 & 0xff00000000000000) == 0x1e00000000000000)
            goto joined_r0x007101bc29a8;
            pbVar10 = local_10c0;
            local_10c0[0x10] = 0;
            local_1158[0] = 0x811c9dc5;
            local_10c0[0] = 0x6d;
            local_10c0[1] = 0x65;
            local_10c0[2] = 0x6c;
            local_10c0[3] = 0x5f;
            local_10c0[4] = 0x74;
            local_10c0[5] = 0x72;
            local_10c0[6] = 0x61;
            local_10c0[7] = 0x69;
            local_10c0[8] = 0x6e;
            local_10c0[9] = 0x69;
            local_10c0[10] = 0x6e;
            local_10c0[0xb] = 0x67;
            local_10c0[0xc] = 0x5f;
            local_10c0[0xd] = 0x61;
            local_10c0[0xe] = 0x6e;
            local_10c0[0xf] = 0x79;
            local_10c8._4_4_ = 0x10;
            uVar21 = 0x6d;
            uVar22 = 0x6d;
            local_10c8._0_4_ = local_1158[0];
            do {
              pbVar10 = pbVar10 + 1;
              local_10c8._0_4_ = (uint)local_10c8 * 0x89 ^ uVar22;
              uVar22 = (uint)*pbVar10;
            } while (uVar22 != 0);
            local_1108[0] = 0x6e;
            local_1108[1] = 0x61;
            local_1108[2] = 0x6d;
            local_1108[3] = 0x5f;
            local_1108[4] = 0x69;
            local_1108[5] = 0x74;
            local_1108[6] = 0x65;
            local_1108[7] = 0x6d;
            local_1108[8] = 0x5f;
            local_1108[9] = 0x61;
            local_1108[10] = 0x73;
            local_1108[0xb] = 0x73;
            local_1108[0xc] = 0x69;
            local_1108[0xd] = 0x73;
            local_1108[0xe] = 0x74;
            local_1108[0xf] = 0;
            pbVar10 = local_1108;
            uVar22 = 0x6e;
            local_1110[1] = 0xf;
            local_1110[0] = local_1158[0];
            do {
              pbVar10 = pbVar10 + 1;
              local_1110[0] = local_1110[0] * 0x89 ^ uVar22;
              uVar22 = (uint)*pbVar10;
            } while (uVar22 != 0);
            local_1150[8] = 0x6e;
            local_1150[9] = 0x69;
            local_1150[10] = 0x6e;
            local_1150[0xb] = 0x67;
            local_1150[0xc] = 0x5f;
            local_1150[0xd] = 0x68;
            local_1150[0xe] = 0x65;
            local_1150[0xf] = 0x6c;
            local_1150[0x10] = 0x70;
            local_1150[0x11] = 0x5f;
            local_1150[0] = 0x6d;
            local_1150[1] = 0x65;
            local_1150[2] = 0x6c;
            local_1150[3] = 0x5f;
            local_1150[4] = 0x74;
            local_1150[5] = 0x72;
            local_1150[6] = 0x61;
            local_1150[7] = 0x69;
            pbVar10 = local_1150;
            local_1150[0x1e] = 0x6d;
            local_1150[0x1f] = 0;
            local_1150[0x12] = 0x61;
            local_1150[0x13] = 0x73;
            local_1150[0x14] = 0x73;
            local_1150[0x15] = 0x69;
            local_1150[0x16] = 0x73;
            local_1150[0x17] = 0x74;
            local_1150[0x18] = 0x5f;
            local_1150[0x19] = 0x72;
            local_1150[0x1a] = 0x61;
            local_1150[0x1b] = 0x6e;
            local_1150[0x1c] = 100;
            local_1150[0x1d] = 0x6f;
            local_1158[1] = 0x1f;
            do {
              pbVar10 = pbVar10 + 1;
              local_1158[0] = local_1158[0] * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar10;
            } while (uVar21 != 0);
            uVar30 = 0xe;
          }
          else if (iVar25 == 1) {
            uVar8 = FUN_710327fb30(*(long *)(*(long *)(lVar28 + 0x268) + 8),0x10bd3564e2);
            uVar17 = *(ulong *)((long)__dest + uVar3 * 8);
            uVar3 = uVar8 & 0xffffffffff;
            if (((uVar17 & 0xff00000000000000) == 0x1e00000000000000) &&
               ((uVar17 & 0xffffffffff) != 0)) {
              if (((uVar8 & 0xff00000000000000) != 0x1e00000000000000) || (uVar3 == 0))
              goto LAB_7101bc2bc0;
              uVar3 = (uVar8 ^ uVar17) & 0xffffffffff;
joined_r0x007101bc2850:
              if (uVar3 != 0) goto LAB_7101bc2bc0;
            }
            else if ((uVar8 & 0xff00000000000000) == 0x1e00000000000000)
            goto joined_r0x007101bc2850;
            pbVar10 = local_10c0;
            local_10c0[0x10] = 0;
            local_1158[0] = 0x811c9dc5;
            local_10c0[0] = 0x6d;
            local_10c0[1] = 0x65;
            local_10c0[2] = 0x6c;
            local_10c0[3] = 0x5f;
            local_10c0[4] = 0x74;
            local_10c0[5] = 0x72;
            local_10c0[6] = 0x61;
            local_10c0[7] = 0x69;
            local_10c0[8] = 0x6e;
            local_10c0[9] = 0x69;
            local_10c0[10] = 0x6e;
            local_10c0[0xb] = 0x67;
            local_10c0[0xc] = 0x5f;
            local_10c0[0xd] = 0x61;
            local_10c0[0xe] = 0x6e;
            local_10c0[0xf] = 0x79;
            local_10c8._4_4_ = 0x10;
            uVar21 = 0x6d;
            local_10c8._0_4_ = local_1158[0];
            do {
              pbVar10 = pbVar10 + 1;
              local_10c8._0_4_ = (uint)local_10c8 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar10;
            } while (uVar21 != 0);
            local_1108[0] = 0x6e;
            local_1108[1] = 0x61;
            local_1108[2] = 0x6d;
            local_1108[3] = 0x5f;
            local_1108[4] = 0x69;
            local_1108[5] = 0x74;
            local_1108[6] = 0x65;
            local_1108[7] = 0x6d;
            local_1108[8] = 0x5f;
            local_1108[9] = 0x70;
            local_1108[10] = 0x6f;
            local_1108[0xb] = 0x6b;
            local_1108[0xc] = 0x65;
            local_1108[0xd] = 0x62;
            local_1108[0xe] = 0x61;
            local_1108[0xf] = 0x6c;
            pbVar10 = local_1108;
            local_10f8 = CONCAT22(local_10f8._2_2_,0x6c);
            uVar21 = 0x6e;
            local_1110[1] = 0x11;
            local_1110[0] = local_1158[0];
            do {
              pbVar10 = pbVar10 + 1;
              local_1110[0] = local_1110[0] * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar10;
            } while (uVar21 != 0);
            local_1150[8] = 0x6e;
            local_1150[9] = 0x69;
            local_1150[10] = 0x6e;
            local_1150[0xb] = 0x67;
            local_1150[0xc] = 0x5f;
            local_1150[0xd] = 0x68;
            local_1150[0xe] = 0x65;
            local_1150[0xf] = 0x6c;
            local_1150[0x10] = 0x70;
            local_1150[0x11] = 0x5f;
            local_1150[0x12] = 0x70;
            local_1150[0x13] = 0x6f;
            local_1150[0x14] = 0x6b;
            local_1150[0x15] = 0x65;
            local_1150[0x16] = 0x6d;
            local_1150[0x17] = 0x6f;
            local_1150[0x18] = 0x6e;
            local_1150[0x19] = 0x5f;
            local_1150[0x1a] = 0x72;
            local_1150[0x1b] = 0x61;
            local_1150[0x1c] = 0x6e;
            local_1150[0x1d] = 100;
            local_1150[0] = 0x6d;
            local_1150[1] = 0x65;
            local_1150[2] = 0x6c;
            local_1150[3] = 0x5f;
            local_1150[4] = 0x74;
            local_1150[5] = 0x72;
            local_1150[6] = 0x61;
            local_1150[7] = 0x69;
            pbVar10 = local_1150;
            local_1150[0x20] = 0;
            local_1150[0x1e] = 0x6f;
            local_1150[0x1f] = 0x6d;
            local_1158[1] = 0x20;
            uVar21 = 0x6d;
            do {
              pbVar10 = pbVar10 + 1;
              local_1158[0] = local_1158[0] * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar10;
            } while (uVar21 != 0);
            bVar1 = false;
            uVar30 = 0xf;
          }
          else if (iVar25 == 3) {
            uVar8 = FUN_710327fb30(*(long *)(*(long *)(lVar28 + 0x268) + 8),0x124c25c799);
            uVar3 = *(ulong *)((long)__dest + uVar3 * 8);
            if (((uVar3 & 0xff00000000000000) == 0x1e00000000000000) &&
               ((uVar3 & 0xffffffffff) != 0)) {
              bVar1 = true;
              if (((uVar8 & 0xff00000000000000) == 0x1e00000000000000) &&
                 ((uVar8 & 0xffffffffff) != 0)) {
                if (((uVar8 ^ uVar3) & 0xffffffffff) != 0) goto LAB_7101bc2bb4;
LAB_7101bc2c88:
                pbVar10 = local_10c0;
                local_10c0[0x10] = 0;
                local_1158[0] = 0x811c9dc5;
                local_10c0[0] = 0x6d;
                local_10c0[1] = 0x65;
                local_10c0[2] = 0x6c;
                local_10c0[3] = 0x5f;
                local_10c0[4] = 0x74;
                local_10c0[5] = 0x72;
                local_10c0[6] = 0x61;
                local_10c0[7] = 0x69;
                local_10c0[8] = 0x6e;
                local_10c0[9] = 0x69;
                local_10c0[10] = 0x6e;
                local_10c0[0xb] = 0x67;
                local_10c0[0xc] = 0x5f;
                local_10c0[0xd] = 0x61;
                local_10c0[0xe] = 0x6e;
                local_10c0[0xf] = 0x79;
                local_10c8._4_4_ = 0x10;
                uVar21 = 0x6d;
                local_10c8._0_4_ = local_1158[0];
                do {
                  pbVar10 = pbVar10 + 1;
                  local_10c8._0_4_ = (uint)local_10c8 * 0x89 ^ uVar21;
                  uVar21 = (uint)*pbVar10;
                } while (uVar21 != 0);
                local_1108[0] = 0x6e;
                local_1108[1] = 0x61;
                local_1108[2] = 0x6d;
                local_1108[3] = 0x5f;
                local_1108[4] = 0x69;
                local_1108[5] = 0x74;
                local_1108[6] = 0x65;
                local_1108[7] = 0x6d;
                local_1108[8] = 0x5f;
                local_1108[9] = 0x6d;
                local_1108[10] = 0x61;
                local_1108[0xb] = 0x73;
                local_1108[0xc] = 0x74;
                local_1108[0xd] = 0x65;
                local_1108[0xe] = 0x72;
                local_1108[0xf] = 0x62;
                pbVar10 = local_1108;
                local_10f8 = 0x6c6c61;
                uVar21 = 0x6e;
                local_1110[1] = 0x13;
                local_1110[0] = local_1158[0];
                do {
                  pbVar10 = pbVar10 + 1;
                  local_1110[0] = local_1110[0] * 0x89 ^ uVar21;
                  uVar21 = (uint)*pbVar10;
                } while (uVar21 != 0);
                local_1150[8] = 0x6e;
                local_1150[9] = 0x69;
                local_1150[10] = 0x6e;
                local_1150[0xb] = 0x67;
                local_1150[0xc] = 0x5f;
                local_1150[0xd] = 0x68;
                local_1150[0xe] = 0x65;
                local_1150[0xf] = 0x6c;
                local_1150[0x10] = 0x70;
                local_1150[0x11] = 0x5f;
                local_1150[0x12] = 0x70;
                local_1150[0x13] = 0x6f;
                local_1150[0x14] = 0x6b;
                local_1150[0x15] = 0x65;
                local_1150[0x16] = 0x6d;
                local_1150[0x17] = 0x6f;
                local_1150[0x18] = 0x6e;
                local_1150[0x19] = 0x5f;
                local_1150[0x1a] = 0x72;
                local_1150[0x1b] = 0x61;
                local_1150[0x1c] = 0x6e;
                local_1150[0x1d] = 100;
                local_1150[0] = 0x6d;
                local_1150[1] = 0x65;
                local_1150[2] = 0x6c;
                local_1150[3] = 0x5f;
                local_1150[4] = 0x74;
                local_1150[5] = 0x72;
                local_1150[6] = 0x61;
                local_1150[7] = 0x69;
                pbVar10 = local_1150;
                local_1150[0x20] = 0;
                local_1150[0x1e] = 0x6f;
                local_1150[0x1f] = 0x6d;
                local_1158[1] = 0x20;
                uVar21 = 0x6d;
                do {
                  pbVar10 = pbVar10 + 1;
                  local_1158[0] = local_1158[0] * 0x89 ^ uVar21;
                  uVar21 = (uint)*pbVar10;
                } while (uVar21 != 0);
                uVar30 = 0xf;
                bVar1 = true;
              }
            }
            else {
              if (((uVar8 & 0xff00000000000000) != 0x1e00000000000000) ||
                 ((uVar8 & 0xffffffffff) == 0)) goto LAB_7101bc2c88;
LAB_7101bc2bb4:
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
LAB_7101bc2bc0:
          FUN_710377a120(lVar23 + 0x378,(char *)local_10c0,uVar6,param_4,param_5,param_6,param_7,
                         param_8);
          FUN_710377a120(lVar23 + 0x368,(char *)local_1108,uVar6,param_4,param_5,param_6,param_7,
                         param_8);
          FUN_710377a120(lVar23 + 0x358,(char *)local_1150,uVar6,param_4,param_5,param_6,param_7,
                         param_8);
          switch(uVar30) {
          case 1:
            lVar28 = lVar23 + 0x1b8;
            break;
          case 2:
            lVar28 = lVar23 + 0x1c8;
            break;
          case 3:
            lVar28 = lVar23 + 0x1d8;
            break;
          case 4:
            lVar28 = lVar23 + 0x1e8;
            break;
          case 5:
            lVar28 = lVar23 + 0x1f8;
            break;
          case 6:
            lVar28 = lVar23 + 0x208;
            break;
          case 7:
            lVar28 = lVar23 + 0x218;
            break;
          case 8:
            lVar28 = lVar23 + 0x228;
            break;
          case 9:
            lVar28 = lVar23 + 0x238;
            break;
          case 10:
            lVar28 = lVar23 + 0x248;
            break;
          case 0xb:
            lVar28 = lVar23 + 600;
            break;
          case 0xc:
            lVar28 = lVar23 + 0x268;
            break;
          case 0xd:
            lVar28 = lVar23 + 0x278;
            break;
          case 0xe:
            lVar28 = lVar23 + 0x298;
            break;
          case 0xf:
            if (bVar1) {
              lVar28 = lVar23 + 0x2a8;
            }
            else {
              lVar28 = lVar23 + 0x288;
            }
            break;
          default:
            goto switchD_7101bc2c08_default;
          }
          FUN_710377aee0(0x3f800000,lVar28);
        }
        else {
          FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
          if (*(int *)(lVar23 + 0xba8) == 0) {
            pcVar16 = "mel_training_back_training";
          }
          else {
            pcVar16 = "mel_training_back_item";
          }
          FUN_710377a120(lVar23 + 0x348,pcVar16,param_3,param_4,param_5,param_6,param_7,param_8);
          plVar26 = *(long **)(*(long *)(lVar23 + 0x360) + 0x10);
          if (plVar26 != (long *)0x0) {
            local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
            FUN_71037a2270(plVar26,(ushort *)&local_1068,0,0);
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x370) + 0x10);
          if (plVar26 != (long *)0x0) {
            local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
            FUN_71037a2270(plVar26,(ushort *)&local_1068,0,0);
          }
          plVar26 = *(long **)(*(long *)(lVar23 + 0x380) + 0x10);
          if (plVar26 != (long *)0x0) {
            local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
            FUN_71037a2270(plVar26,(ushort *)&local_1068,0,0);
          }
        }
switchD_7101bc2c08_default:
        *(undefined1 *)(lVar23 + 0xbbc) = 0;
        if (*(uint *)(lVar23 + 0xba8) < 4) {
          lVar23 = lVar23 + (ulong)*(uint *)(lVar23 + 0xba8) * 0xc;
          *(undefined4 *)(lVar23 + 0xb7c) = *(undefined4 *)(lVar23 + 0xb78);
          *(undefined1 *)(lVar23 + 0xb80) = 0;
          __dest = local_1080;
LAB_7101bc2eac:
          if (__dest == (void *)0x0) {
            return;
          }
          if (__dest == (void *)0x0) {
            return;
          }
          local_1078 = __dest;
          FUN_710392eb40((ulong)__dest);
          return;
        }
        goto LAB_7101bc2eec;
      }
      cVar18 = *(char *)(lVar23 + 0xbbc);
    }
    else {
      plVar4 = (long *)(lVar23 + 0x7b8);
      if ((int)plVar5[0x57] == 1) {
        (**(code **)(*plVar5 + 0x70))(plVar5,0);
        (**(code **)(*(long *)*plVar4 + 0x70))((long *)*plVar4,1);
        param_3 = (long ****)0x0;
        FUN_7103771a80(plVar4,0,0);
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_3 = (long ****)&DAT_00000004;
          uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8);
          if ((uVar3 & 1) == 0) goto LAB_7101bc1d5c;
          FUN_71024076d0((undefined4 *)&local_1068,0x10c0b65170);
          if (((local_1058 != 0) && (DAT_7106dd53a8 == '\x01')) &&
             ((int)local_1050 == DAT_7106dd53ac)) {
            piVar13 = (int *)(local_1058 + 0x38);
            do {
              cVar18 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar1) {
                *piVar13 = *piVar13 + -1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
          }
        }
        else {
LAB_7101bc1d5c:
          local_1050 = 0x87650000000000;
          local_1040 = 0xffffffffffffffff;
          uStack_1038 = 0;
          local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
          local_1030 = 0;
        }
        local_1060 = &PTR_FUN_7104f73d50;
        local_1058 = 0;
        local_1048 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar5 + 0x80))();
        plVar5 = (long *)*plVar4;
        if ((uVar6 & 1) != 0) {
          (**(code **)(*plVar5 + 0x70))(plVar5,0);
          if (3 < *(uint *)(lVar23 + 0xba8)) goto LAB_7101bc2eec;
          lVar28 = lVar23 + (ulong)*(uint *)(lVar23 + 0xba8) * 0xc;
          *(undefined4 *)(lVar28 + 0xb7c) = *(undefined4 *)(lVar28 + 0xb78);
          *(undefined1 *)(lVar28 + 0xb80) = 1;
          switch(*(undefined4 *)(lVar23 + 0xb70)) {
          case 2:
            plVar26 = (long *)(lVar23 + 0xa58);
            break;
          case 3:
            plVar26 = (long *)(lVar23 + 0xa70);
            break;
          case 4:
            plVar26 = (long *)(lVar23 + 0xa88);
            break;
          case 5:
            plVar26 = (long *)(lVar23 + 0xaa0);
            break;
          default:
            goto switchD_7101bc1d50_default;
          }
          if ((ulong)(plVar26[1] - *plVar26 >> 3) <= uVar3) goto switchD_7101bc1d50_default;
          uVar3 = *(ulong *)(*plVar26 + uVar3 * 8);
LAB_7101bc1ee8:
          if (((uVar3 & 0xff00000000000000) != 0x1e00000000000000) || ((uVar3 & 0xffffffffff) == 0))
          goto LAB_7101bc2314;
switchD_7101bc1d50_default:
          FUN_710377aee0(0x3f800000,lVar23 + 0x198);
          goto LAB_7101bc2314;
        }
        uVar3 = (**(code **)(*plVar5 + 0x80))();
        if ((uVar3 & 1) == 0) {
          uVar3 = (**(code **)(*(long *)*plVar4 + 0x78))();
          if (((uVar3 & 1) == 0) || (0.0 <= *(float *)(*plVar4 + 0x234))) {
            uVar3 = (**(code **)(*(long *)*plVar4 + 0x78))();
            if (((uVar3 & 1) == 0) || (*(float *)(*plVar4 + 0x234) <= 0.0)) goto LAB_7101bc2314;
            iVar25 = *(int *)(lVar23 + 0xb74);
            iVar12 = *(int *)(lVar23 + 0xbd4);
            if (iVar25 == 1) {
              plVar5 = (long *)(lVar23 + 0xa70);
            }
            else if (iVar25 == 2) {
              plVar5 = (long *)(lVar23 + 0xa88);
            }
            else if (iVar25 == 3) {
              plVar5 = (long *)(lVar23 + 0xaa0);
            }
            else {
              plVar5 = (long *)(lVar23 + 0xa58);
            }
            iVar11 = 0;
            uVar3 = plVar5[1] - *plVar5 >> 3;
            uVar21 = 1;
            iVar24 = 0;
            do {
              if (iVar12 == -1) {
                iVar19 = -1;
              }
              else {
                iVar25 = *(int *)(*plVar26 + 0x28c);
                iVar19 = 0;
                if (iVar25 != 0) {
                  iVar19 = iVar12 / iVar25;
                }
                iVar19 = iVar12 - iVar19 * iVar25;
              }
              iVar19 = iVar19 + iVar11;
              iVar25 = iVar19;
              if (uVar3 <= (ulong)(long)iVar19) {
                iVar25 = iVar24;
              }
              if (10 < uVar21) break;
              uVar21 = uVar21 + 1;
              iVar11 = iVar11 + 8;
              iVar24 = iVar25;
            } while ((ulong)(long)iVar19 < uVar3);
            (**(code **)(**(long **)(lVar23 + 0x7c0) + 0x70))(*(long **)(lVar23 + 0x7c0),1);
            param_3 = (long ****)0x1;
            param_4 = (byte ****)0x1;
            FUN_7103783c10(plVar26,iVar25,1,1,param_5,param_6,param_7,param_8);
            (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x70))(*(long **)(lVar23 + 0x7b8),0);
            if (3 < *(uint *)(lVar23 + 0xba8)) goto LAB_7101bc2eec;
            lVar28 = lVar23 + (ulong)*(uint *)(lVar23 + 0xba8) * 0xc;
            *(undefined4 *)(lVar28 + 0xb7c) = *(undefined4 *)(lVar28 + 0xb78);
            *(undefined1 *)(lVar28 + 0xb80) = 1;
            switch(*(undefined4 *)(lVar23 + 0xb70)) {
            case 2:
              goto switchD_7101bc20a8_caseD_2;
            case 3:
              goto switchD_7101bc20a8_caseD_3;
            case 4:
              goto switchD_7101bc20a8_caseD_4;
            case 5:
              goto switchD_7101bc20a8_caseD_5;
            }
          }
          else {
            iVar25 = *(int *)(lVar23 + 0xbd4);
            plVar5 = *(long **)(lVar23 + 0x7c0);
            if (iVar25 == -1) {
              iVar25 = -1;
            }
            else {
              iVar12 = *(int *)((long)plVar5 + 0x28c);
              iVar11 = 0;
              if (iVar12 != 0) {
                iVar11 = iVar25 / iVar12;
              }
              iVar25 = iVar25 - iVar11 * iVar12;
            }
            (**(code **)(*plVar5 + 0x70))(plVar5,1);
            param_3 = (long ****)0x1;
            param_4 = (byte ****)0x1;
            FUN_7103783c10(plVar26,iVar25,1,1,param_5,param_6,param_7,param_8);
            (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x70))(*(long **)(lVar23 + 0x7b8),0);
            if (3 < *(uint *)(lVar23 + 0xba8)) goto LAB_7101bc2eec;
            lVar28 = lVar23 + (ulong)*(uint *)(lVar23 + 0xba8) * 0xc;
            *(undefined4 *)(lVar28 + 0xb7c) = *(undefined4 *)(lVar28 + 0xb78);
            *(undefined1 *)(lVar28 + 0xb80) = 1;
            switch(*(undefined4 *)(lVar23 + 0xb70)) {
            case 2:
switchD_7101bc20a8_caseD_2:
              plVar26 = (long *)(lVar23 + 0xa58);
              break;
            case 3:
switchD_7101bc20a8_caseD_3:
              plVar26 = (long *)(lVar23 + 0xa70);
              break;
            case 4:
switchD_7101bc20a8_caseD_4:
              plVar26 = (long *)(lVar23 + 0xa88);
              break;
            case 5:
switchD_7101bc20a8_caseD_5:
              plVar26 = (long *)(lVar23 + 0xaa0);
              break;
            default:
              goto switchD_7101bc1d50_default;
            }
            if ((ulong)(long)iVar25 < (ulong)(plVar26[1] - *plVar26 >> 3)) {
              uVar3 = *(ulong *)(*plVar26 + (long)iVar25 * 8);
              goto LAB_7101bc1ee8;
            }
          }
          goto switchD_7101bc1d50_default;
        }
        (**(code **)(**(long **)(lVar23 + 0x7c0) + 0x70))(*(long **)(lVar23 + 0x7c0),0);
      }
      if (3 < *(uint *)(lVar23 + 0xba8)) {
LAB_7101bc2eec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar28 = lVar23 + (ulong)*(uint *)(lVar23 + 0xba8) * 0xc;
      *(undefined4 *)(lVar28 + 0xb7c) = *(undefined4 *)(lVar28 + 0xb78);
      *(undefined1 *)(lVar28 + 0xb80) = 1;
      FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
      *(undefined1 *)(lVar23 + 0xbac) = 1;
      cVar18 = *(char *)(lVar23 + 0xbbc);
    }
    if (cVar18 != '\0') {
      return;
    }
    FUN_710377a120(lVar23 + 0x348,"mel_training_help_end",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    *(undefined1 *)(lVar23 + 0xbbc) = 1;
    plVar26 = *(long **)(*(long *)(lVar23 + 0x360) + 0x10);
    if (plVar26 != (long *)0x0) {
      local_10c8._0_4_ = 0;
      FUN_71037a2270(plVar26,(ushort *)&local_10c8,0,0);
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x370) + 0x10);
    if (plVar26 != (long *)0x0) {
      local_10c8._0_4_ = 0;
      FUN_71037a2270(plVar26,(ushort *)&local_10c8,0,0);
    }
    plVar26 = *(long **)(*(long *)(lVar23 + 0x380) + 0x10);
    if (plVar26 == (long *)0x0) {
      return;
    }
    puVar9 = (ushort *)&local_10c8;
    local_10c8._0_4_ = 0;
LAB_7101bc23b8:
    FUN_71037a2270(plVar26,puVar9,0,0);
    return;
  }
  if (iVar25 != 1) {
    if (iVar25 != 0) {
      return;
    }
    plVar26 = (long *)(lVar23 + 0x7b8);
    plVar5 = (long *)(lVar23 + 0x7a8);
    uVar3 = (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x78))();
    if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar5 + 0x78))(), (uVar3 & 1) != 0))
    {
      uVar3 = (**(code **)(*(long *)*plVar26 + 0x80))();
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)*plVar26;
      }
      else {
        plVar4 = (long *)*plVar5;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
    }
    uVar3 = (**(code **)(*(long *)*plVar26 + 0x78))();
    if ((uVar3 & 1) != 0) {
      plVar26 = (long *)*plVar26;
      if (0.0 < *(float *)((long)plVar26 + 0x234)) {
        (**(code **)(*plVar26 + 0x70))(plVar26,0);
        FUN_710376b960(*(long *)(lVar23 + 0x7b8));
        *(undefined1 *)(lVar23 + 0xb6d) = 0;
        (**(code **)(**(long **)(lVar23 + 0x7a8) + 0x70))(*(long **)(lVar23 + 0x7a8),1);
        if (*(char *)(lVar23 + 0xbdc) == '\0') {
          iVar25 = 6;
        }
        else {
          iVar25 = 5;
        }
      }
      else {
        if (0.0 <= *(float *)((long)plVar26 + 0x234)) {
          if ((*(char *)(lVar23 + 0xbc8) != '\0') || (*(int *)(lVar23 + 0xbb0) != 0xd)) {
            *(undefined1 *)(lVar23 + 0xbc8) = 0;
            FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
            FUN_710377a120(lVar23 + 0x348,"mel_training_help_end",param_3,param_4,param_5,param_6,
                           param_7,param_8);
            *(undefined4 *)(lVar23 + 0xbb0) = 0xd;
          }
          goto LAB_7101bc18fc;
        }
        (**(code **)(*plVar26 + 0x70))(plVar26,0);
        FUN_710376b960(*(long *)(lVar23 + 0x7b8));
        *(undefined1 *)(lVar23 + 0xb6d) = 0;
        (**(code **)(**(long **)(lVar23 + 0x7a8) + 0x70))(*(long **)(lVar23 + 0x7a8),1);
        iVar25 = 0;
      }
      goto LAB_7101bc1910;
    }
    auVar32 = (**(code **)(*(long *)*plVar5 + 0x78))();
    if ((auVar32._0_8_ & 1) == 0) {
      return;
    }
    iVar25 = *(int *)(*plVar5 + 0x254);
    if (iVar25 == -1) {
      return;
    }
    if (iVar25 != 0xd) {
      *(undefined1 *)(lVar23 + 0xb6d) = 0;
      *(int *)(lVar23 + 0x7f4) = iVar25;
      FUN_7101bb0c00(lVar23 + 2000,auVar32._8_8_,param_3,param_4,param_5,param_6,param_7,param_8);
      *(int *)(lVar23 + 0xbcc) = iVar25;
      if (iVar25 == 6) {
        *(undefined1 *)(lVar23 + 0xbdc) = 0;
LAB_7101bc1f08:
        cVar18 = *(char *)(lVar23 + 0xbc8);
      }
      else {
        if (iVar25 != 5) goto LAB_7101bc1f08;
        *(undefined1 *)(lVar23 + 0xbdc) = 1;
        cVar18 = *(char *)(lVar23 + 0xbc8);
      }
      if (cVar18 != '\0') goto LAB_7101bc1f54;
LAB_7101bc1f10:
      if (*(int *)(lVar23 + 0xbb0) != iVar25) goto LAB_7101bc1f54;
      if (iVar25 != 4) {
        return;
      }
      if (*(int *)(lVar23 + 0xbc0) == *(int *)(lVar23 + 0xb4c)) {
        return;
      }
      *(int *)(lVar23 + 0xbc0) = *(int *)(lVar23 + 0xb4c);
      *(undefined1 *)(lVar23 + 0xbc8) = 0;
      FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
LAB_7101bc2144:
      switch(*(undefined4 *)(lVar23 + 0xbc0)) {
      case 1:
        pcVar16 = "mel_training_help_cp_movement_stop";
        break;
      case 2:
        pcVar16 = "mel_training_help_cp_movement_lv_n";
        break;
      case 3:
        pcVar16 = "mel_training_help_cp_movement_walk";
        break;
      case 4:
        pcVar16 = "mel_training_help_cp_movement_escape";
        break;
      case 5:
        pcVar16 = "mel_training_help_cp_movement_jump";
        break;
      case 6:
        pcVar16 = "mel_training_help_cp_movement_attack";
        break;
      case 7:
        pcVar16 = "mel_training_help_cp_movement_smash_side";
        break;
      case 8:
        pcVar16 = "mel_training_help_cp_movement_operation";
        break;
      default:
switchD_7101bc2164_default:
        *(int *)(lVar23 + 0xbb0) = iVar25;
        return;
      }
      goto LAB_7101bc2134;
    }
    param_3 = (long ****)0x0;
    FUN_7103771a80(plVar26,0,0);
    (**(code **)(*(long *)*plVar26 + 0x70))((long *)*plVar26,1);
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar3 & 1) == 0) goto LAB_7101bc1a34;
      FUN_71024076d0((undefined4 *)&local_1068,0x10c0b65170);
      if (((local_1058 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1050 == DAT_7106dd53ac))
      {
        piVar13 = (int *)(local_1058 + 0x38);
        do {
          cVar18 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar1) {
            *piVar13 = *piVar13 + -1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
      }
    }
    else {
LAB_7101bc1a34:
      local_1050 = 0x87650000000000;
      local_1040 = 0xffffffffffffffff;
      uStack_1038 = 0;
      local_1068 = (long ****)((ulong)local_1068 & 0xffffffff00000000);
      local_1030 = 0;
    }
    local_1060 = &PTR_FUN_7104f73d50;
    local_1058 = 0;
    local_1048 = 0;
    *(undefined1 *)(lVar23 + 0xb6d) = 1;
    FUN_710376b960(*(long *)(lVar23 + 0x7a8));
    if (*(char *)(lVar23 + 0x10) != '\0') {
      FUN_710377b140(lVar23 + 1000);
      FUN_710377b140(lVar23 + 0x528);
      FUN_710377b140(lVar23 + 0x668);
    }
    (**(code **)(**(long **)(lVar23 + 0x7a8) + 0x70))(*(long **)(lVar23 + 0x7a8),0);
    lVar28 = *(long *)(*(long *)**(undefined8 **)(lVar23 + 0x18) + 0x600);
    *(undefined1 *)(lVar28 + 0x410) = 1;
    *(undefined1 *)(lVar28 + 0x428) = 1;
    *(undefined4 *)(lVar23 + 0x7f4) = 0xd;
    FUN_7101bb0c00(lVar23 + 2000,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar23 + 0xbcc) = 0;
    if (*(char *)(lVar23 + 0xbc8) == '\0') goto LAB_7101bc1f10;
LAB_7101bc1f54:
    *(undefined1 *)(lVar23 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
    switch(iVar25) {
    case 0:
      pcVar16 = "mel_training_help_cp_quantity";
      break;
    case 1:
      pcVar16 = "mel_training_help_cp_dmg";
      break;
    case 2:
      cVar18 = *(char *)(lVar23 + 0xb48);
      pcVar14 = "mel_training_help_cp_dmg_fixing";
      pcVar16 = "mel_training_help_cp_dmg_fixing_off";
      goto LAB_7101bc212c;
    case 3:
      cVar18 = *(char *)(lVar23 + 0xb49);
      pcVar14 = "mel_training_help_trajectory";
      pcVar16 = "mel_training_help_trajectory_off";
LAB_7101bc212c:
      if (cVar18 != '\0') {
        pcVar16 = pcVar14;
      }
      break;
    case 4:
      goto LAB_7101bc2144;
    case 5:
      pcVar16 = "mel_training_help_item";
      break;
    case 6:
      pcVar16 = "mel_training_help_menu_change2";
      break;
    default:
      plVar26 = *(long **)(*(long *)(lVar23 + 0x350) + 0x10);
      if (plVar26 != (long *)0x0) {
        local_10c8._0_4_ = 0;
        FUN_71037a2270(plVar26,(ushort *)&local_10c8,0,0);
      }
      goto switchD_7101bc2164_default;
    case 0xd:
      pcVar16 = "mel_training_help_end";
    }
LAB_7101bc2134:
    FUN_710377a120(lVar23 + 0x348,pcVar16,param_3,param_4,param_5,param_6,param_7,param_8);
    *(int *)(lVar23 + 0xbb0) = iVar25;
    return;
  }
  plVar26 = (long *)(lVar23 + 0x7a8);
  uVar3 = (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x78))();
  if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar26 + 0x78))(), (uVar3 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x80))();
    if ((uVar3 & 1) == 0) {
      plVar5 = *(long **)(lVar23 + 0x7b8);
    }
    else {
      plVar5 = (long *)*plVar26;
    }
    (**(code **)(*plVar5 + 0x70))(plVar5,0);
  }
  uVar3 = (**(code **)(**(long **)(lVar23 + 0x7b8) + 0x78))();
  if ((uVar3 & 1) != 0) {
    plVar26 = *(long **)(lVar23 + 0x7b8);
    if (*(float *)((long)plVar26 + 0x234) <= 0.0) {
      if (0.0 <= *(float *)((long)plVar26 + 0x234)) {
        if ((*(char *)(lVar23 + 0xbc8) != '\0') || (*(int *)(lVar23 + 0xbb4) != 0xd)) {
          *(undefined1 *)(lVar23 + 0xbc8) = 0;
          FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
          FUN_710377a120(lVar23 + 0x348,"mel_training_help_end",param_3,param_4,param_5,param_6,
                         param_7,param_8);
          *(undefined4 *)(lVar23 + 0xbb4) = 0xd;
        }
LAB_7101bc18fc:
        *(undefined1 *)(lVar23 + 0xb6d) = 1;
        return;
      }
      (**(code **)(*plVar26 + 0x70))(plVar26,0);
      FUN_710376b960(*(long *)(lVar23 + 0x7b8));
      *(undefined1 *)(lVar23 + 0xb6d) = 0;
      (**(code **)(**(long **)(lVar23 + 0x7a8) + 0x70))(*(long **)(lVar23 + 0x7a8),1);
      iVar25 = 7;
    }
    else {
      (**(code **)(*plVar26 + 0x70))(plVar26,0);
      FUN_710376b960(*(long *)(lVar23 + 0x7b8));
      *(undefined1 *)(lVar23 + 0xb6d) = 0;
      (**(code **)(**(long **)(lVar23 + 0x7a8) + 0x70))(*(long **)(lVar23 + 0x7a8),1);
      iVar25 = 0xc;
    }
LAB_7101bc1910:
    FUN_7103771a80((long *)(lVar23 + 0x7a8),iVar25,0);
    return;
  }
  auVar32 = (**(code **)(*(long *)*plVar26 + 0x78))();
  uVar7 = auVar32._8_8_;
  if ((auVar32._0_8_ & 1) == 0) {
    return;
  }
  iVar25 = *(int *)(*plVar26 + 0x254);
  if (iVar25 == -1) {
    return;
  }
  if (iVar25 == 0xd) {
    *(undefined1 *)(lVar23 + 0xb6e) = 1;
    FUN_710376b960(*plVar26);
    if (*(char *)(lVar23 + 0x10) != '\0') {
      FUN_710377b140(lVar23 + 1000);
      FUN_710377b140(lVar23 + 0x528);
      FUN_710377b140(lVar23 + 0x668);
    }
    (**(code **)(**(long **)(lVar23 + 0x7a8) + 0x70))(*(long **)(lVar23 + 0x7a8),0);
    lVar28 = *(long *)(*(long *)**(undefined8 **)(lVar23 + 0x18) + 0x600);
    *(undefined1 *)(lVar28 + 0x410) = 1;
    *(undefined1 *)(lVar28 + 0x428) = 1;
    uVar7 = extraout_x1;
    iVar12 = 0xd;
  }
  else {
    *(undefined1 *)(lVar23 + 0xb6d) = 0;
    iVar12 = iVar25;
  }
  *(int *)(lVar23 + 0x7f4) = iVar12;
  FUN_7101bb0c00(lVar23 + 2000,uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar12 = 7;
  if (iVar25 != 0xd) {
    iVar12 = iVar25;
  }
  *(int *)(lVar23 + 0xbd0) = iVar12;
  if ((*(char *)(lVar23 + 0xbc8) == '\0') && (*(int *)(lVar23 + 0xbb4) == iVar12)) {
    if (iVar12 == 10) {
      if (*(int *)(lVar23 + 0xbc4) == *(int *)(lVar23 + 0xb5c)) {
        return;
      }
      *(int *)(lVar23 + 0xbc4) = *(int *)(lVar23 + 0xb5c);
      *(undefined1 *)(lVar23 + 0xbc8) = 0;
      FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
      goto LAB_7101bc21a8;
    }
    if (iVar12 != 7) {
      return;
    }
    if (*(int *)(lVar23 + 3000) == *(int *)(lVar23 + 0xb54)) {
      return;
    }
    *(int *)(lVar23 + 3000) = *(int *)(lVar23 + 0xb54);
    *(undefined1 *)(lVar23 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
LAB_7101bc1a04:
    switch(*(undefined4 *)(lVar23 + 3000)) {
    case 1:
      pcVar16 = "mel_training_help_time_normal";
      break;
    case 2:
      plVar26 = *(long **)(*(long *)(lVar23 + 0x350) + 0x10);
      if (plVar26 != (long *)0x0) {
        pbVar10 = (byte *)plVar26[0x1c];
        *(undefined4 *)((long)plVar26 + 0x25c) = *(undefined4 *)(lVar23 + 0x30);
        if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
          puVar9 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
          local_10c8._0_4_ = *(uint *)((long)plVar26 + 0x25c);
          memset(&local_1068,0,0x1000);
          uVar21 = FUN_71037ae170((long)&local_1068,puVar9,(int *)&local_10c8);
          FUN_71037a2270(plVar26,(ushort *)&local_1068,uVar21,0);
        }
      }
      FUN_710377a280(lVar23 + 0x348,(byte *)"mel_training_help_time_frame",1);
      goto switchD_7101bc1a24_default;
    case 3:
      pcVar16 = "mel_training_help_time_slow0";
      break;
    case 4:
      pcVar16 = "mel_training_help_time_slow1";
      break;
    case 5:
      pcVar16 = "mel_training_help_time_slow2";
      break;
    case 6:
      pcVar16 = "mel_training_help_time_quick";
      break;
    default:
      goto switchD_7101bc1a24_default;
    }
    goto LAB_7101bc2b3c;
  }
  *(undefined1 *)(lVar23 + 0xbc8) = 0;
  FUN_710377aee0(0x3f800000,lVar23 + 0x1a8);
  switch(iVar12) {
  case 7:
    goto LAB_7101bc1a04;
  case 8:
    cVar18 = *(char *)(lVar23 + 0xb6c);
    pcVar14 = "mel_training_help_hit";
    pcVar16 = "mel_training_help_hit_off";
    goto LAB_7101bc2004;
  case 9:
    cVar18 = *(char *)(lVar23 + 0xb58);
    pcVar14 = "mel_training_help_invincible";
    pcVar16 = "mel_training_help_invincible_off";
    goto LAB_7101bc2004;
  case 10:
LAB_7101bc21a8:
    iVar25 = *(int *)(lVar23 + 0xbc4);
    if (iVar25 == 3) {
      pcVar16 = "mel_training_help_shift2";
    }
    else if (iVar25 == 2) {
      pcVar16 = "mel_training_help_shift1";
    }
    else {
      if (iVar25 != 1) goto switchD_7101bc1a24_default;
      pcVar16 = "mel_training_help_shift0";
    }
    break;
  case 0xb:
    cVar18 = *(char *)(lVar23 + 0xb60);
    pcVar14 = "mel_training_help_same_offset";
    pcVar16 = "mel_training_help_same_offset_off";
LAB_7101bc2004:
    if (cVar18 != '\0') {
      pcVar16 = pcVar14;
    }
    break;
  case 0xc:
    pcVar16 = "mel_training_help_dmg_pl1";
    break;
  case 0xd:
    pcVar16 = "mel_training_help_end";
    break;
  default:
    plVar26 = *(long **)(*(long *)(lVar23 + 0x350) + 0x10);
    if (plVar26 != (long *)0x0) {
      local_1068 = (long ****)((ulong)local_1068._4_4_ << 0x20);
      FUN_71037a2270(plVar26,(ushort *)&local_1068,0,0);
    }
    goto switchD_7101bc1a24_default;
  }
LAB_7101bc2b3c:
  FUN_710377a120(lVar23 + 0x348,pcVar16,param_3,param_4,param_5,param_6,param_7,param_8);
switchD_7101bc1a24_default:
  *(int *)(lVar23 + 0xbb4) = iVar12;
  return;
}

