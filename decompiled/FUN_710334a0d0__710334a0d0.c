// addr:      710334a0d0
// offset:    0x334a0d0
// name:      FUN_710334a0d0
// mangled:   
// signature: undefined __cdecl FUN_710334a0d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710334a0d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long ***__dest;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long ***ppplVar10;
  long lVar11;
  ulong uVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  size_t __n;
  long ***ppplVar15;
  long ***local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  undefined4 local_54;
  
  lVar6 = DAT_710532f828;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return;
  }
  lVar11 = *(long *)(DAT_710532f828 + 8);
  uVar4 = FUN_7101eefe30(*(long *)(*(long *)(lVar11 + 0x110) + 0x80));
  if ((*(int *)(lVar11 + 0xf8) != 0 || (((uint)uVar4 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar11 + 0x142) != '\0') {
    return;
  }
  lVar11 = *(long *)(DAT_710532f7c8 + 8);
  if (*(char *)(lVar11 + 0x6a) == '\0') {
    return;
  }
  if (*(char *)(lVar11 + 0x6b) != '\0') {
    return;
  }
  if (*(char *)(lVar11 + 0x69) != '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  lVar11 = *(long *)(lVar8 + 0x9ff8);
  if ((lVar11 == 0) || (uVar3 = FUN_71016f6340(lVar8 + 0xa010,lVar11), (~uVar3 & 0xff) == 0)) {
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    lVar6 = nn::os::GetSystemTick();
    uVar7 = nn::os::ConvertToTimeSpan(lVar6 - DAT_71074470e8);
    uVar12 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
    *(long *)(param_1 + 0xd8) =
         (((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar12 >> 0x20) +
                 ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar12 & 0xffffffff) >> 0x20)) >> 7) -
         ((long)uVar7 >> 0x3f)) * 1000;
    *(undefined1 *)(param_1 + 0xe8) = 0;
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xd0)) {
  case 1:
    uVar12 = 0xff1c6e03d731;
    break;
  case 2:
    uVar12 = 0xff1d1c5f740a;
    break;
  case 3:
    uVar12 = 0xff1f71fe59d4;
    break;
  default:
    goto switchD_710334a1c4_caseD_4;
  case 6:
    uVar12 = 0xff22a4ed999a;
    break;
  case 7:
    uVar12 = 0xff23ae74362b;
    break;
  case 8:
    local_78 = (long ***)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_78 == (long ***)0x0) {
      local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
      local_78 = (long ***)&DAT_00000008;
      pppplVar14 = &local_78;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      local_78 = (long ***)FUN_710392e290(0x10,8,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
    }
    pcVar9 = "mel_chara_select_kumite_hundred";
    goto LAB_710334a3b8;
  case 9:
    local_78 = (long ***)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_78 == (long ***)0x0) {
      local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
      local_78 = (long ***)&DAT_00000008;
      pppplVar14 = &local_78;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      local_78 = (long ***)FUN_710392e290(0x10,8,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
    }
    pcVar9 = "mel_chara_select_kumite_allstar";
    goto LAB_710334a3b8;
  case 10:
    local_78 = (long ***)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_78 == (long ***)0x0) {
      local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
      local_78 = (long ***)&DAT_00000008;
      pppplVar14 = &local_78;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      local_78 = (long ***)FUN_710392e290(0x10,8,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
    }
    pcVar9 = "mel_chara_select_kumite_cruel_brawl";
LAB_710334a3b8:
    local_70 = local_78 + 1;
    *local_78 = (long **)pcVar9;
    uVar12 = 0xff2865606c12;
    local_68 = local_70;
LAB_710334abe0:
    FUN_71032f29a0(lVar6,uVar12 | 0x58ff000000000000,&local_78,param_4,param_5,param_6,param_7,
                   param_8);
    if (local_78 != (long ***)0x0) {
      local_70 = local_78;
      FUN_710392eb40((ulong)local_78);
    }
    goto switchD_710334a1c4_caseD_4;
  case 0xb:
    local_70 = (long ***)0x0;
    local_68 = (long ***)0x0;
    local_78 = (long ***)0x0;
    if ((*(byte *)(param_1 + 0xd6) & 1) == 0) {
      ppplVar13 = (long ***)0x0;
      ppplVar15 = (long ***)0x0;
      if ((*(byte *)(param_1 + 0xd6) >> 1 & 1) == 0) goto LAB_710334a760;
LAB_710334a560:
      pppplVar14 = (long ****)((long)ppplVar15 - (long)ppplVar13);
      uVar7 = (long)pppplVar14 >> 3;
      uVar12 = uVar7 + 1;
      if (uVar12 >> 0x3d != 0) goto LAB_710334ac88;
      if (uVar7 < 0xfffffffffffffff) {
        if (uVar12 <= (ulong)((long)pppplVar14 >> 2)) {
          uVar12 = (long)pppplVar14 >> 2;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3d != 0) goto LAB_710334ac84;
          goto LAB_710334a5a0;
        }
LAB_710334a600:
        __dest = (long ***)0x0;
      }
      else {
        uVar12 = 0x1fffffffffffffff;
LAB_710334a5a0:
        ppplVar10 = (long ***)(uVar12 * 8);
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        __dest = (long ***)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (__dest == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_54 = 0;
            param_3 = &local_60;
            local_60 = ppplVar10;
            uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
            if (((uVar5 & 1) != 0) &&
               (__dest = (long ***)
                         FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                        param_8), __dest != (long ***)0x0)) goto LAB_710334a604;
          }
          goto LAB_710334a600;
        }
      }
LAB_710334a604:
      ppplVar10 = __dest + uVar12;
      ppplVar15 = __dest + uVar7 + 1;
      __dest[uVar7] = (long **)"pop_super_suddendeath_rule_size";
      if (0 < (long)pppplVar14) {
        memcpy(__dest,ppplVar13,(size_t)pppplVar14);
        param_3 = pppplVar14;
      }
      local_78 = __dest;
      local_70 = ppplVar15;
      local_68 = ppplVar10;
      if (ppplVar13 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar13);
      }
      if (ppplVar10 <= ppplVar15) {
        pppplVar14 = (long ****)((long)ppplVar15 - (long)__dest);
        uVar12 = ((long)pppplVar14 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) goto LAB_710334ac88;
        if ((ulong)((long)ppplVar10 - (long)__dest >> 3) < 0xfffffffffffffff) {
          uVar7 = (long)ppplVar10 - (long)__dest >> 2;
          if (uVar12 <= uVar7) {
            uVar12 = uVar7;
          }
          if (uVar12 != 0) {
            if (uVar12 >> 0x3d != 0) goto LAB_710334ac84;
            goto LAB_710334a6bc;
          }
LAB_710334a71c:
          ppplVar13 = (long ***)0x0;
        }
        else {
          uVar12 = 0x1fffffffffffffff;
LAB_710334a6bc:
          ppplVar10 = (long ***)(uVar12 * 8);
          if (ppplVar10 == (long ***)0x0) {
            ppplVar10 = (long ***)0x1;
          }
          ppplVar13 = (long ***)
                      FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8)
          ;
          if (ppplVar13 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_54 = 0;
              param_3 = &local_60;
              local_60 = ppplVar10;
              uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
              if (((uVar7 & 1) != 0) &&
                 (ppplVar13 = (long ***)
                              FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                             param_8), ppplVar13 != (long ***)0x0))
              goto LAB_710334a720;
            }
            goto LAB_710334a71c;
          }
        }
LAB_710334a720:
        ppplVar15 = ppplVar13 + ((long)pppplVar14 >> 3) + 1;
        ppplVar13[(long)pppplVar14 >> 3] = (long **)"pop_super_suddendeath_rule_off";
        if (0 < (long)pppplVar14) {
          memcpy(ppplVar13,__dest,(size_t)pppplVar14);
          param_3 = pppplVar14;
        }
        local_78 = ppplVar13;
        local_70 = ppplVar15;
        local_68 = ppplVar13 + uVar12;
        if (__dest != (long ***)0x0) {
          FUN_710392eb40((ulong)__dest);
        }
        goto LAB_710334a760;
      }
      *ppplVar15 = (long **)"pop_super_suddendeath_rule_off";
      ppplVar15 = local_70 + 1;
      local_70 = ppplVar15;
      if ((*(byte *)(param_1 + 0xd6) >> 2 & 1) != 0) goto LAB_710334a768;
LAB_710334a9a0:
      bVar1 = *(byte *)(param_1 + 0xd6);
      ppplVar10 = local_68;
    }
    else {
      ppplVar10 = (long ***)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (ppplVar10 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_60 = (long ***)&DAT_00000008;
          param_3 = &local_60;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar12 & 1) != 0) &&
             (ppplVar10 = (long ***)
                          FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
             ppplVar10 != (long ***)0x0)) goto LAB_710334a4c8;
        }
        ppplVar10 = (long ***)0x0;
      }
LAB_710334a4c8:
      local_70 = ppplVar10 + 1;
      *ppplVar10 = (long **)"pop_super_suddendeath_rule_size";
      local_78 = ppplVar10;
      local_68 = local_70;
      ppplVar13 = (long ***)
                  FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
      if (ppplVar13 == (long ***)0x0) {
        local_54 = 0;
        local_60 = (long ***)&DAT_00000010;
        param_3 = &local_60;
        (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        ppplVar13 = (long ***)
                    FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      ppplVar13[1] = (long **)"pop_super_suddendeath_rule_on";
      ppplVar15 = ppplVar13 + 2;
      *ppplVar13 = *ppplVar10;
      local_78 = ppplVar13;
      local_70 = ppplVar15;
      local_68 = ppplVar15;
      if (ppplVar10 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar10);
      }
      if ((*(byte *)(param_1 + 0xd6) >> 1 & 1) != 0) goto LAB_710334a560;
LAB_710334a760:
      __dest = ppplVar13;
      if ((*(byte *)(param_1 + 0xd6) >> 2 & 1) == 0) goto LAB_710334a9a0;
LAB_710334a768:
      if (ppplVar15 < local_68) {
        *ppplVar15 = (long **)"pop_super_suddendeath_rule_bomb";
        ppplVar10 = local_70 + 1;
        ppplVar13 = __dest;
        ppplVar15 = local_68;
        local_70 = ppplVar10;
        if (local_68 <= ppplVar10) {
LAB_710334a8b0:
          pppplVar14 = (long ****)((long)ppplVar10 - (long)ppplVar13);
          uVar12 = ((long)pppplVar14 >> 3) + 1;
          if (uVar12 >> 0x3d != 0) goto LAB_710334ac88;
          if ((ulong)((long)ppplVar15 - (long)ppplVar13 >> 3) < 0xfffffffffffffff) {
            uVar7 = (long)ppplVar15 - (long)ppplVar13 >> 2;
            if (uVar12 <= uVar7) {
              uVar12 = uVar7;
            }
            if (uVar12 != 0) {
              if (uVar12 >> 0x3d != 0) goto LAB_710334ac84;
              goto LAB_710334a8f8;
            }
LAB_710334a958:
            __dest = (long ***)0x0;
          }
          else {
            uVar12 = 0x1fffffffffffffff;
LAB_710334a8f8:
            ppplVar10 = (long ***)(uVar12 * 8);
            if (ppplVar10 == (long ***)0x0) {
              ppplVar10 = (long ***)0x1;
            }
            __dest = (long ***)
                     FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
            if (__dest == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_54 = 0;
                param_3 = &local_60;
                local_60 = ppplVar10;
                uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
                if (((uVar7 & 1) != 0) &&
                   (__dest = (long ***)
                             FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                            param_8), __dest != (long ***)0x0)) goto LAB_710334a95c;
              }
              goto LAB_710334a958;
            }
          }
LAB_710334a95c:
          ppplVar15 = __dest + ((long)pppplVar14 >> 3) + 1;
          __dest[(long)pppplVar14 >> 3] = (long **)"pop_super_suddendeath_rule_on";
          if (0 < (long)pppplVar14) {
            memcpy(__dest,ppplVar13,(size_t)pppplVar14);
            param_3 = pppplVar14;
          }
          local_78 = __dest;
          local_70 = ppplVar15;
          local_68 = __dest + uVar12;
          if (ppplVar13 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar13);
          }
          goto LAB_710334a9a0;
        }
      }
      else {
        pppplVar14 = (long ****)((long)ppplVar15 - (long)__dest);
        uVar12 = ((long)pppplVar14 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) goto LAB_710334ac88;
        if ((ulong)((long)local_68 - (long)__dest >> 3) < 0xfffffffffffffff) {
          uVar7 = (long)local_68 - (long)__dest >> 2;
          if (uVar12 <= uVar7) {
            uVar12 = uVar7;
          }
          if (uVar12 != 0) {
            if (uVar12 >> 0x3d != 0) goto LAB_710334ac84;
            goto LAB_710334a800;
          }
LAB_710334a860:
          ppplVar13 = (long ***)0x0;
        }
        else {
          uVar12 = 0x1fffffffffffffff;
LAB_710334a800:
          ppplVar10 = (long ***)(uVar12 * 8);
          if (ppplVar10 == (long ***)0x0) {
            ppplVar10 = (long ***)0x1;
          }
          ppplVar13 = (long ***)
                      FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8)
          ;
          if (ppplVar13 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_54 = 0;
              param_3 = &local_60;
              local_60 = ppplVar10;
              uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
              if (((uVar7 & 1) != 0) &&
                 (ppplVar13 = (long ***)
                              FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                             param_8), ppplVar13 != (long ***)0x0))
              goto LAB_710334a864;
            }
            goto LAB_710334a860;
          }
        }
LAB_710334a864:
        ppplVar15 = ppplVar13 + uVar12;
        ppplVar10 = ppplVar13 + ((long)pppplVar14 >> 3) + 1;
        ppplVar13[(long)pppplVar14 >> 3] = (long **)"pop_super_suddendeath_rule_bomb";
        if (0 < (long)pppplVar14) {
          memcpy(ppplVar13,__dest,(size_t)pppplVar14);
          param_3 = pppplVar14;
        }
        local_78 = ppplVar13;
        local_70 = ppplVar10;
        local_68 = ppplVar15;
        if (__dest != (long ***)0x0) {
          FUN_710392eb40((ulong)__dest);
        }
        if (ppplVar15 <= ppplVar10) goto LAB_710334a8b0;
      }
      *ppplVar10 = (long **)"pop_super_suddendeath_rule_on";
      ppplVar15 = local_70 + 1;
      bVar1 = *(byte *)(param_1 + 0xd6);
      local_70 = ppplVar15;
      __dest = ppplVar13;
      ppplVar10 = local_68;
    }
    local_68 = ppplVar10;
    if ((bVar1 >> 3 & 1) != 0) {
      if (ppplVar15 < ppplVar10) {
        *ppplVar15 = (long **)"pop_super_suddendeath_rule_bomb";
        ppplVar15 = local_70 + 1;
        ppplVar13 = __dest;
        local_70 = ppplVar15;
        if (ppplVar10 <= ppplVar15) {
LAB_710334aae8:
          __n = (long)ppplVar15 - (long)ppplVar13;
          uVar12 = ((long)__n >> 3) + 1;
          if (uVar12 >> 0x3d != 0) {
LAB_710334ac88:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)ppplVar10 - (long)ppplVar13 >> 3) < 0xfffffffffffffff) {
            uVar7 = (long)ppplVar10 - (long)ppplVar13 >> 2;
            if (uVar12 <= uVar7) {
              uVar12 = uVar7;
            }
            if (uVar12 != 0) {
              if (uVar12 >> 0x3d != 0) goto LAB_710334ac84;
              goto LAB_710334ab30;
            }
LAB_710334ab90:
            ppplVar15 = (long ***)0x0;
          }
          else {
            uVar12 = 0x1fffffffffffffff;
LAB_710334ab30:
            ppplVar10 = (long ***)(uVar12 * 8);
            if (ppplVar10 == (long ***)0x0) {
              ppplVar10 = (long ***)0x1;
            }
            ppplVar15 = (long ***)
                        FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                       param_8);
            if (ppplVar15 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_54 = 0;
                pppplVar14 = &local_60;
                local_60 = ppplVar10;
                uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
                if (((uVar7 & 1) != 0) &&
                   (ppplVar15 = (long ***)
                                FUN_710392e290(0x10,ppplVar10,pppplVar14,param_4,param_5,param_6,
                                               param_7,param_8), ppplVar15 != (long ***)0x0))
                goto LAB_710334ab94;
              }
              goto LAB_710334ab90;
            }
          }
LAB_710334ab94:
          ppplVar10 = ppplVar15 + ((long)__n >> 3);
          *ppplVar10 = (long **)"pop_super_suddendeath_rule_off";
          if (0 < (long)__n) {
            memcpy(ppplVar15,ppplVar13,__n);
          }
          local_78 = ppplVar15;
          local_70 = ppplVar10 + 1;
          local_68 = ppplVar15 + uVar12;
          if (ppplVar13 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar13);
          }
          goto LAB_710334abd4;
        }
      }
      else {
        pppplVar14 = (long ****)((long)ppplVar15 - (long)__dest);
        uVar12 = ((long)pppplVar14 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) goto LAB_710334ac88;
        if ((ulong)((long)ppplVar10 - (long)__dest >> 3) < 0xfffffffffffffff) {
          uVar7 = (long)ppplVar10 - (long)__dest >> 2;
          if (uVar12 <= uVar7) {
            uVar12 = uVar7;
          }
          if (uVar12 != 0) {
            if (uVar12 >> 0x3d != 0) goto LAB_710334ac84;
            goto LAB_710334aa38;
          }
LAB_710334aa98:
          ppplVar13 = (long ***)0x0;
        }
        else {
          uVar12 = 0x1fffffffffffffff;
LAB_710334aa38:
          ppplVar10 = (long ***)(uVar12 * 8);
          if (ppplVar10 == (long ***)0x0) {
            ppplVar10 = (long ***)0x1;
          }
          ppplVar13 = (long ***)
                      FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8)
          ;
          if (ppplVar13 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_54 = 0;
              param_3 = &local_60;
              local_60 = ppplVar10;
              uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
              if (((uVar7 & 1) != 0) &&
                 (ppplVar13 = (long ***)
                              FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                             param_8), ppplVar13 != (long ***)0x0))
              goto LAB_710334aa9c;
            }
            goto LAB_710334aa98;
          }
        }
LAB_710334aa9c:
        ppplVar10 = ppplVar13 + uVar12;
        ppplVar15 = ppplVar13 + ((long)pppplVar14 >> 3) + 1;
        ppplVar13[(long)pppplVar14 >> 3] = (long **)"pop_super_suddendeath_rule_bomb";
        if (0 < (long)pppplVar14) {
          memcpy(ppplVar13,__dest,(size_t)pppplVar14);
          param_3 = pppplVar14;
        }
        local_78 = ppplVar13;
        local_70 = ppplVar15;
        local_68 = ppplVar10;
        if (__dest != (long ***)0x0) {
          FUN_710392eb40((ulong)__dest);
        }
        if (ppplVar10 <= ppplVar15) goto LAB_710334aae8;
      }
      *ppplVar15 = (long **)"pop_super_suddendeath_rule_off";
      local_70 = local_70 + 1;
    }
LAB_710334abd4:
    uVar12 = 0xff26f98e3577;
    goto LAB_710334abe0;
  case 0xc:
    uVar12 = 0xff19968dd263;
    break;
  case 0xd:
    bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff2ae942f6f5);
    if (bVar2) {
      FUN_71032edf70(*(uint **)(lVar6 + 0x10),0x58ffff2ae942f6f5);
      FUN_71032f1bb0(*(long *)(lVar6 + 8),*(uint **)(lVar6 + 0x10),param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      *(undefined4 *)(*(long *)(lVar6 + 8) + 0x118) = 0;
    }
    FUN_71032fffb0(*(long *)(DAT_710532f840 + 8),0xb4);
    goto switchD_710334a1c4_caseD_4;
  }
  bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),
                         uVar12 | 0x58ff000000000000);
  if (bVar2) {
    FUN_71032edf70(*(uint **)(lVar6 + 0x10),uVar12 | 0x58ff000000000000);
    FUN_71032f1bb0(*(long *)(lVar6 + 8),*(uint **)(lVar6 + 0x10),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else {
    *(undefined4 *)(*(long *)(lVar6 + 8) + 0x118) = 0;
  }
switchD_710334a1c4_caseD_4:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  lVar6 = nn::os::GetSystemTick();
  uVar7 = nn::os::ConvertToTimeSpan(lVar6 - DAT_71074470e8);
  uVar12 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
  *(long *)(param_1 + 0xd8) =
       (((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar12 >> 0x20) +
               ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar12 & 0xffffffff) >> 0x20)) >> 7) -
       ((long)uVar7 >> 0x3f)) * 1000;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(uint *)(param_1 + 0xbc) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xbc) * 4 + 0x70) = 2;
    return;
  }
LAB_710334ac84:
                    /* WARNING: Subroutine does not return */
  abort();
}

