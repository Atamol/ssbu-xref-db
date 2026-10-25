// addr:      71018852c0
// offset:    0x18852c0
// name:      FUN_71018852c0
// mangled:   
// signature: undefined __cdecl FUN_71018852c0(long param_1, undefined8 param_2, char * param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018852c0(long param_1,undefined8 param_2,char *param_3,char *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long *plVar8;
  long ***ppplVar9;
  long *plVar10;
  long *plVar11;
  long ****pppplVar12;
  long lVar13;
  undefined8 *puVar14;
  byte ****ppppbVar15;
  long lVar16;
  long **pplVar17;
  long **pplVar18;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  byte ***apppbStack_f8 [8];
  long ***local_b8;
  long ***appplStack_b0 [8];
  undefined4 local_6c [3];
  
  if (*(int *)(param_1 + 0xbc) != 0) goto LAB_7101885da8;
  *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0x70) = 0;
  pplVar18 = *(long ***)(*(long *)(param_1 + 0xd8) + 0x80);
  bVar2 = *(byte *)(param_1 + 0xe4);
  if (pplVar18[3] == pplVar18[2]) goto LAB_7101885f40;
  lVar13 = *(long *)**(undefined8 **)*pplVar18[2];
  *(undefined4 *)(*(long *)(lVar13 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar13 + 0x600) + 0x14) = 0x40;
  pplVar17 = pplVar18 + 8;
  if (*pplVar17 != (long *)0x0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    puVar5 = DAT_7105306980;
    lVar13 = *(long *)(DAT_710532f730 + 8);
    lVar16 = *(long *)(lVar13 + 0x168);
    uVar3 = FUN_71032632a0(lVar16,(ulong)DAT_7105306980);
    if ((uVar3 & 1) != 0) {
      puVar5 = FUN_71032631a0(lVar16,0x11b1ccb807);
    }
    puVar6 = DAT_7105306998;
    uVar3 = FUN_71032632a0(lVar16,(ulong)DAT_7105306998);
    if ((uVar3 & 1) != 0) {
      puVar6 = FUN_71032631a0(lVar16,0x11b1ccb807);
    }
    pppplVar12 = (long ****)0x0;
    *(undefined1 *)(pplVar18 + 0x2f) = DAT_7105306978._2_1_;
    uVar7 = FUN_7101797560(puVar5,3,0);
    ppppbVar15 = (byte ****)(ulong)(byte)DAT_7105306970;
    if ((long *)*pplVar18[8] != (long *)0x0) {
      param_4 = (char *)(ulong)*(byte *)(pplVar18 + 0x2f);
      pppplVar12 = (long ****)&DAT_71042b2a84;
      FUN_7103375650((long *)*pplVar18[8],"g_melee_type",&DAT_71042b2a84);
      if ((long *)*pplVar18[8] != (long *)0x0) {
        pppplVar12 = (long ****)&DAT_71042b2a84;
        param_4 = (char *)0x0;
        FUN_7103375650((long *)*pplVar18[8],"TYPE_NONE",&DAT_71042b2a84);
        if ((long *)**pplVar17 != (long *)0x0) {
          pppplVar12 = (long ****)&DAT_71042b2a84;
          param_4 = (char *)0x1;
          FUN_7103375650((long *)**pplVar17,"ANYONE_SINGLE",&DAT_71042b2a84);
          if ((long *)**pplVar17 != (long *)0x0) {
            pppplVar12 = (long ****)&DAT_71042b2a84;
            param_4 = (char *)0x2;
            FUN_7103375650((long *)**pplVar17,"ANYONE_DOUBLE",&DAT_71042b2a84);
            if ((long *)**pplVar17 != (long *)0x0) {
              pppplVar12 = (long ****)&DAT_71042b2a84;
              param_4 = (char *)0x3;
              FUN_7103375650((long *)**pplVar17,"ANYONE_VIP",&DAT_71042b2a84);
              if ((long *)**pplVar17 != (long *)0x0) {
                pppplVar12 = (long ****)&DAT_71042b2a84;
                param_4 = &DAT_00000004;
                FUN_7103375650((long *)**pplVar17,"TOURNAMENT",&DAT_71042b2a84);
              }
            }
          }
        }
      }
    }
    if ((((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar5 & 0xffffffffff) != 0)) {
      uVar3 = FUN_7103263540(*(long *)(lVar13 + 0x168),(ulong)puVar5,(ulong)(byte)DAT_7105306988,
                             param_4,param_5,param_6,param_7,param_8);
      FUN_7103262310((uint *)&local_b8,*(long *)(lVar13 + 0x168),(ulong)puVar5);
      pppplVar12 = appplStack_b0;
      FUN_71003a4ca0((uint *)&local_100,"nam_chr1_%02d_%s",(ulong)uVar3,pppplVar12,param_4,param_5,
                     param_6,param_7,param_8);
      if ((long *)**pplVar17 != (long *)0x0) {
        param_4 = (char *)apppbStack_f8;
        pppplVar12 = (long ****)&DAT_71042d5020;
        FUN_7103375650((long *)**pplVar17,"g_fighter_name_1p",&DAT_71042d5020);
      }
    }
    else if ((long *)**pplVar17 != (long *)0x0) {
      pppplVar12 = (long ****)&DAT_71042d5020;
      param_4 = "mnu_while_wait_fighter_not_set";
      FUN_7103375650((long *)**pplVar17,"g_fighter_name_1p",&DAT_71042d5020);
    }
    if ((((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar6 & 0xffffffffff) != 0)) {
      uVar3 = FUN_7103263540(*(long *)(lVar13 + 0x168),(ulong)puVar6,(ulong)(byte)DAT_71053069a0,
                             param_4,param_5,param_6,param_7,param_8);
      FUN_7103262310((uint *)&local_b8,*(long *)(lVar13 + 0x168),(ulong)puVar6);
      pppplVar12 = appplStack_b0;
      FUN_71003a4ca0((uint *)&local_100,"nam_chr1_%02d_%s",(ulong)uVar3,pppplVar12,param_4,param_5,
                     param_6,param_7,param_8);
      plVar8 = (long *)**pplVar17;
      if (plVar8 != (long *)0x0) {
        param_4 = (char *)apppbStack_f8;
LAB_710188563c:
        pppplVar12 = (long ****)&DAT_71042d5020;
        FUN_7103375650(plVar8,"g_fighter_name_2p",&DAT_71042d5020);
      }
    }
    else {
      plVar8 = (long *)**pplVar17;
      if (plVar8 != (long *)0x0) {
        param_4 = "mnu_while_wait_fighter_not_set";
        goto LAB_710188563c;
      }
    }
    plVar8 = *pplVar17;
    if ((long *)*plVar8 != (long *)0x0) {
      param_4 = (char *)(ulong)((uint)uVar7 & 1);
      pppplVar12 = (long ****)&DAT_71043cdb7b;
      FUN_7103375650((long *)*plVar8,"g_is_vip_fighter",&DAT_71043cdb7b);
      plVar8 = *pplVar17;
      if ((long *)*plVar8 != (long *)0x0) {
        pppplVar12 = (long ****)&DAT_71043cdb7b;
        FUN_7103375650((long *)*plVar8,"g_is_rule_priority",&DAT_71043cdb7b);
        plVar8 = *pplVar17;
        param_4 = (char *)ppppbVar15;
        if ((long *)*plVar8 != (long *)0x0) {
          pppplVar12 = (long ****)&DAT_71042b2a84;
          param_4 = (char *)0x3;
          FUN_7103375650((long *)*plVar8,"SCENE_EXIT_CODE_SELECT",&DAT_71042b2a84);
          plVar8 = *pplVar17;
          if ((long *)*plVar8 != (long *)0x0) {
            param_4 = (char *)(ulong)bVar2;
            pppplVar12 = (long ****)&DAT_71043cdb7b;
            FUN_7103375650((long *)*plVar8,"g_is_chara_select_back",&DAT_71043cdb7b);
            plVar8 = *pplVar17;
            if ((long *)*plVar8 != (long *)0x0) {
              param_4 = (char *)(ulong)*(byte *)((long)pplVar18 + 0x1f6);
              pppplVar12 = (long ****)&DAT_71043cdb7b;
              FUN_7103375650((long *)*plVar8,"g_is_no_double_controller",&DAT_71043cdb7b);
              plVar8 = pplVar18[8];
            }
          }
        }
      }
    }
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_100 = (long ***)((ulong)local_100._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_710188574c;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_710188574c:
    ppplVar9[4] = (long **)0x0;
    ppplVar9[5] = (long **)FUN_7101c47b70;
    ppplVar9[2] = pplVar18;
    ppplVar9[3] = (long **)0x0;
    *ppplVar9 = (long **)&PTR_FUN_71050ad650;
    ppplVar9[6] = (long **)0x0;
    pppplVar12 = (long ****)&local_100;
    *(undefined4 *)(ppplVar9 + 1) = 1;
    local_100 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"is_guide_decided",pppplVar12,(byte ****)param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar9 = local_100;
    local_100 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (long ***)((ulong)local_108._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_71018857fc;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_71018857fc:
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    *ppplVar9 = (long **)&PTR_FUN_71050ad678;
    ppplVar9[2] = pplVar18;
    ppplVar9[3] = (long **)FUN_7101c47b80;
    ppplVar9[4] = (long **)0x0;
    pppplVar12 = (long ****)&local_108;
    *(undefined4 *)(ppplVar9 + 1) = 0;
    local_108 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"open_sub_window",pppplVar12,(byte ****)param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar9 = local_108;
    local_108 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_110 = (long ***)((ulong)local_110._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_71018858a8;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_71018858a8:
    *ppplVar9 = (long **)&PTR_FUN_71050ad650;
    ppplVar9[3] = (long **)FUN_7101c47bb0;
    ppplVar9[4] = (long **)0x0;
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    pppplVar12 = (long ****)&local_110;
    ppplVar9[2] = pplVar18;
    *(undefined4 *)(ppplVar9 + 1) = 1;
    local_110 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"decided_sub_window",pppplVar12,(byte ****)param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar9 = local_110;
    local_110 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_118 = (long ***)((ulong)local_118._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_7101885950;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_7101885950:
    *ppplVar9 = (long **)&PTR_FUN_71050ad678;
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    ppplVar9[2] = pplVar18;
    pppplVar12 = (long ****)&local_118;
    ppplVar9[3] = (long **)FUN_7101c47fb0;
    ppplVar9[4] = (long **)0x0;
    *(undefined4 *)(ppplVar9 + 1) = 0;
    local_118 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"close_sub_window",pppplVar12,(byte ****)param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar9 = local_118;
    local_118 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_120 = (long ***)((ulong)local_120._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_71018859f4;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_71018859f4:
    *ppplVar9 = (long **)&PTR_FUN_71050ad678;
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    ppplVar9[2] = pplVar18;
    pppplVar12 = (long ****)&local_120;
    ppplVar9[3] = (long **)FUN_7101c47fc0;
    ppplVar9[4] = (long **)0x0;
    *(undefined4 *)(ppplVar9 + 1) = 0;
    local_120 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"open_priority_window",pppplVar12,(byte ****)param_4,param_5
                   ,param_6,param_7,param_8);
    ppplVar9 = local_120;
    local_120 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = (long ***)((ulong)local_128._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_7101885a98;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_7101885a98:
    *ppplVar9 = (long **)&PTR_FUN_71050ad650;
    ppplVar9[3] = (long **)FUN_7101c47ff0;
    ppplVar9[4] = (long **)0x0;
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    pppplVar12 = (long ****)&local_128;
    ppplVar9[2] = pplVar18;
    *(undefined4 *)(ppplVar9 + 1) = 1;
    local_128 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"decided_priority_window",pppplVar12,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    ppplVar9 = local_128;
    local_128 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_130 = (long ***)((ulong)local_130._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_7101885b40;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_7101885b40:
    *ppplVar9 = (long **)&PTR_FUN_71050ad678;
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    ppplVar9[2] = pplVar18;
    pppplVar12 = (long ****)&local_130;
    ppplVar9[3] = (long **)FUN_7101c480c0;
    ppplVar9[4] = (long **)0x0;
    *(undefined4 *)(ppplVar9 + 1) = 0;
    local_130 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"close_priority_window",pppplVar12,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    ppplVar9 = local_130;
    local_130 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_138 = (long ***)((ulong)local_138._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_7101885be4;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_7101885be4:
    *ppplVar9 = (long **)&PTR_FUN_71050ad678;
    ppplVar9[5] = (long **)0x0;
    ppplVar9[6] = (long **)0x0;
    ppplVar9[2] = pplVar18;
    pppplVar12 = (long ****)&local_138;
    ppplVar9[3] = (long **)FUN_7101c480d0;
    ppplVar9[4] = (long **)0x0;
    *(undefined4 *)(ppplVar9 + 1) = 0;
    local_138 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"open_popup_window",pppplVar12,(byte ****)param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar9 = local_138;
    local_138 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    ppplVar9 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (ppplVar9 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_140 = (long ***)((ulong)local_140._4_4_ << 0x20);
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_140);
        if (((uVar7 & 1) != 0) &&
           (ppplVar9 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), ppplVar9 != (long ***)0x0))
        goto LAB_7101885c88;
      }
      ppplVar9 = (long ***)0x0;
    }
LAB_7101885c88:
    *ppplVar9 = (long **)&PTR_FUN_71050ad650;
    ppplVar9[4] = (long **)0x0;
    ppplVar9[5] = (long **)FUN_7101c48110;
    ppplVar9[2] = pplVar18;
    ppplVar9[3] = (long **)0x0;
    pppplVar12 = (long ****)&local_140;
    ppplVar9[6] = (long **)0x0;
    *(undefined4 *)(ppplVar9 + 1) = 1;
    local_140 = ppplVar9;
    FUN_7103376af0((long)plVar8,(byte *)"can_input",pppplVar12,(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    ppplVar9 = local_140;
    local_140 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
    plVar8 = *pplVar17;
    local_b8 = (long ***)
               FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
    if (local_b8 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_b8 = (long ***)&DAT_00000038;
        pppplVar12 = &local_b8;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar7 & 1) != 0) &&
           (local_b8 = (long ***)
                       FUN_710392e290(0x10,0x38,pppplVar12,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), local_b8 != (long ***)0x0))
        goto LAB_7101885d30;
      }
      local_b8 = (long ***)0x0;
    }
LAB_7101885d30:
    *local_b8 = (long **)&PTR_FUN_71050ad650;
    local_b8[4] = (long **)0x0;
    local_b8[5] = (long **)FUN_7101c48120;
    local_b8[2] = pplVar18;
    local_b8[3] = (long **)0x0;
    param_3 = (char *)&local_b8;
    local_b8[6] = (long **)0x0;
    *(undefined4 *)(local_b8 + 1) = 1;
    FUN_7103376af0((long)plVar8,(byte *)"is_popup_result_yes",(long ****)param_3,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    ppplVar9 = local_b8;
    local_b8 = (long ***)0x0;
    if (ppplVar9 != (long ***)0x0) {
      (*(code *)(*ppplVar9)[1])();
    }
  }
  if (pplVar18[3] == pplVar18[2]) {
LAB_7101885f40:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar14 = (undefined8 *)*pplVar18[2];
  if (puVar14 != (undefined8 *)0x0) {
    param_3 = &DAT_00001000;
    FUN_7103775dc0(*(long **)*puVar14,0,(long ****)&DAT_00001000,(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
  }
LAB_7101885da8:
  lVar13 = *(long *)(*(long *)(param_1 + 0xd8) + 0x80);
  if ((*(int *)(lVar13 + 0x140) == 7) && (plVar8 = *(long **)(lVar13 + 0x40), *plVar8 != 0)) {
    local_b8 = (long ***)0x0;
    FUN_71037aea50((ulong *)&local_b8,"i",(long ****)param_3,(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    plVar8 = (long *)*plVar8;
    lVar16 = *plVar8;
    lVar13 = 0;
    if (lVar16 != 0) {
      lVar13 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
      if (*(uint *)(lVar13 + 0xc) < 2) {
        plVar10 = (long *)(*(long *)(lVar13 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar13 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar10[3] == 0x13) && (plVar11 = plVar10, plVar10[2] == 2)) break;
          piVar1 = (int *)((long)plVar10 + 0x1c);
          plVar10 = plVar10 + (long)*piVar1 * 4;
          plVar11 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar11 = (long *)(*(long *)(lVar13 + 0x10) + 0x10);
      }
      param_3 = "g_exit_code";
      FUN_71038f4d40(lVar16,plVar11,"g_exit_code");
      lVar13 = *plVar8;
    }
    FUN_710372d940(lVar13,(long *)&local_b8,param_3,(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
    ppplVar9 = local_b8;
    if (local_b8 != (long ***)0x0) {
      pplVar18 = local_b8[2];
      iVar4 = *(int *)local_b8[1];
      lVar13 = 0;
      do {
        if (*(char *)((long)pplVar18 + lVar13) == 's') {
          pplVar17 = ppplVar9[1];
          plVar8 = pplVar17[lVar13];
          if (plVar8 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar8);
          }
          pplVar17[lVar13] = (long *)0x0;
        }
        else if (*(char *)((long)pplVar18 + lVar13) == '\0') {
          FUN_710392eb40((ulong)ppplVar9);
          local_b8 = (long ***)0x0;
          if (iVar4 == 0) {
            return;
          }
          *(int *)(param_1 + 0xe0) = iVar4;
          if (*(uint *)(param_1 + 0xb4) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 3;
            return;
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar13 = lVar13 + 1;
      } while( true );
    }
  }
  return;
}

