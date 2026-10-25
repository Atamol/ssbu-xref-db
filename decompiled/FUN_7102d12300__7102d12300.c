// addr:      7102d12300
// offset:    0x2d12300
// name:      FUN_7102d12300
// mangled:   
// signature: undefined __cdecl FUN_7102d12300(long * param_1, long param_2, long * * * * param_3, char * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102d12300(long *param_1,long param_2,long ****param_3,char *param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long ***ppplVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  char *__s;
  long ****pppplVar11;
  void *__dest;
  byte *pbVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long ****pppplVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long ****pppplVar22;
  long ***ppplVar23;
  long ***local_f0;
  long ****local_e8;
  void *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  undefined8 uStack_b8;
  long ***local_b0;
  long ****local_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  undefined8 local_78;
  undefined4 local_6c [3];
  
  lVar4 = _DAT_7107521008;
  lVar20 = _ConstantZero;
  *param_1 = (long)&PTR_FUN_7105131e40;
  param_1[1] = (long)param_3;
  param_1[2] = (long)param_4;
  param_1[5] = lVar4;
  param_1[4] = lVar20;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  pppplVar13 = param_3;
  pppplVar14 = param_5;
  if (param_3 == (long ****)0x0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_710532a9e0);
      puVar8 = &DAT_710532a9f0;
      if (iVar5 != 0) {
        DAT_710532a9f8 = 0;
        DAT_710532a9f0 = 0x3f800000;
        DAT_710532aa08 = 0;
        DAT_710532aa00 = 0x3f80000000000000;
        DAT_710532aa18 = 0x3f800000;
        DAT_710532aa10 = 0;
        DAT_710532aa28 = 0x3f80000000000000;
        DAT_710532aa20 = 0;
        __cxa_guard_release(&DAT_710532a9e0);
      }
    }
    else {
      puVar8 = &DAT_710532a9f0;
    }
  }
  else {
    puVar8 = (ulong *)(*(code *)(*param_3[0x12])[0x2b])();
  }
  local_d8 = puVar8[3];
  local_e8 = (long ****)puVar8[1];
  local_f0 = (long ***)*puVar8;
  local_e0 = (void *)puVar8[2];
  local_c8 = puVar8[5];
  local_d0 = puVar8[4];
  local_c0 = param_1[4];
  uStack_b8._4_4_ = (undefined4)(puVar8[7] >> 0x20);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)param_1[5]);
  lVar20 = param_1[1];
  if (lVar20 != 0) {
    (**(code **)(**(long **)(lVar20 + 0x90) + 0x148))(*(long **)(lVar20 + 0x90),&local_f0);
    lVar20 = *(long *)(lVar20 + 0xd8);
    if (lVar20 != 0) {
      local_98 = local_d8;
      local_a0 = local_e0;
      local_a8 = local_e8;
      local_b0 = local_f0;
      local_78 = uStack_b8;
      local_80 = local_c0;
      local_88 = local_c8;
      local_90 = local_d0;
      if (*(char *)(*(long *)(lVar20 + 8) + 0xa8) != '\0') {
        plVar9 = *(long **)(*(long *)(lVar20 + 8) + 0x48);
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_b0);
      }
      *(undefined1 *)(lVar20 + 0x20) = 1;
    }
    lVar20 = param_1[1];
    if (lVar20 != 0) {
      if (((*(long *)(lVar20 + 0xd8) == 0) && (lVar20 != 0)) && (*(long *)(lVar20 + 0xd8) == 0)) {
        plVar9 = FUN_71026533a0((undefined8 *)(lVar20 + 0x90),0,pppplVar13,(byte ****)param_4,
                                pppplVar14,param_6,param_7,param_8);
        plVar10 = *(long **)(lVar20 + 0xd8);
        *(long **)(lVar20 + 0xd8) = plVar9;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if (param_1[1] != 0) {
        plVar9 = *(long **)(param_1[1] + 0xd8);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        if (*(char *)(plVar9[1] + 0xa8) != '\0') {
          plVar10 = *(long **)(plVar9[1] + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
          if (*(char *)(plVar9[1] + 0xa8) != '\0') {
            plVar10 = *(long **)(plVar9[1] + 0x48);
            (**(code **)(*plVar10 + 0x10))(plVar10,1);
            (**(code **)(*plVar10 + 0x10))(plVar10,2);
          }
        }
        *(undefined1 *)(plVar9 + 4) = 0;
      }
    }
  }
  param_1[8] = (long)param_5;
  *param_1 = (long)&PTR_FUN_7105132120;
  puVar17 = (uint *)(param_1 + 9);
  puVar17[0] = 0xffffffff;
  puVar17[1] = 0xffffffff;
  param_1[10] = -1;
  param_1[0xb] = -1;
  if (((param_3 != (long ****)0x0) && (*(char *)(param_3 + 0x1c) != '\0')) &&
     (iVar5 = (*(code *)(*param_3[0x12])[0x44])(), 0 < iVar5)) {
    uVar19 = 0;
    pppplVar22 = (long ****)0xffffffffffffffff;
    do {
      if ((*(char *)(param_3 + 0x1c) == '\0') ||
         (uVar6 = (*(code *)(*param_3[0x12])[0x44])(), uVar6 <= uVar19)) {
        __s = (char *)0x0;
      }
      else {
        __s = (char *)(*(code *)(*param_3[0x12])[0x45])(param_3[0x12],uVar19);
      }
      local_a8 = (long ****)0x0;
      local_a0 = (void *)0x0;
      local_b0 = (long ***)0x0;
      pppplVar11 = (long ****)strlen(__s);
      if ((long ****)0xffffffffffffffef < pppplVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pppplVar11 < (long ****)0x17) {
        local_b0 = (long ***)CONCAT71(local_b0._1_7_,(char)((int)pppplVar11 << 1));
        __dest = (void *)((ulong)&local_b0 | 1);
        if (pppplVar11 != (long ****)0x0) goto LAB_7102d126d8;
      }
      else {
        ppplVar23 = (long ***)((ulong)(pppplVar11 + 2) & 0xfffffffffffffff0);
        ppplVar2 = ppplVar23;
        if (((ulong)(pppplVar11 + 2) & 0xfffffffffffffff0) == 0) {
          ppplVar2 = (long ***)0x1;
        }
        __dest = (void *)FUN_710392e290(0x10,ppplVar2,pppplVar13,(byte ****)param_4,pppplVar14,
                                        param_6,param_7,param_8);
        if (__dest == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            pppplVar13 = &local_f0;
            local_f0 = ppplVar2;
            uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar21 & 1) != 0) &&
               (__dest = (void *)FUN_710392e290(0x10,ppplVar2,pppplVar13,(byte ****)param_4,
                                                pppplVar14,param_6,param_7,param_8),
               __dest != (void *)0x0)) goto LAB_7102d126bc;
          }
          __dest = (void *)0x0;
        }
LAB_7102d126bc:
        local_b0 = (long ***)((ulong)ppplVar23 | 1);
        local_a8 = pppplVar11;
        local_a0 = __dest;
LAB_7102d126d8:
        pppplVar13 = pppplVar11;
        memcpy(__dest,__s,(size_t)pppplVar11);
      }
      *(undefined1 *)((long)__dest + (long)pppplVar11) = 0;
      pppplVar18 = (long ****)(ulong)((byte)local_b0 >> 1);
      pppplVar11 = pppplVar18;
      if (((ulong)local_b0 & 1) != 0) {
        pppplVar11 = local_a8;
      }
      if (pppplVar11 == (long ****)&DAT_00000011) {
        param_4 = "jumpScore_10_base";
        pppplVar14 = (long ****)&DAT_00000011;
        pppplVar13 = pppplVar22;
        iVar7 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x71043abc82);
        if (iVar7 != 0) {
          pppplVar18 = (long ****)(ulong)((byte)local_b0 >> 1);
          goto LAB_7102d12740;
        }
        *puVar17 = uVar19;
      }
      else {
LAB_7102d12740:
        pppplVar11 = pppplVar18;
        if (((byte)local_b0 & 1) != 0) {
          pppplVar11 = local_a8;
        }
        bVar3 = (byte)local_b0;
        if (pppplVar11 == (long ****)&DAT_00000012) {
          param_4 = "jumpScore_100_base";
          pppplVar13 = pppplVar22;
          pppplVar14 = (long ****)&DAT_00000012;
          iVar7 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x710427ed99);
          if (iVar7 == 0) {
            *(uint *)((long)param_1 + 0x4c) = uVar19;
            goto joined_r0x007102d125b8;
          }
          pppplVar18 = (long ****)(ulong)((byte)local_b0 >> 1);
          bVar3 = (byte)local_b0;
        }
        pppplVar11 = pppplVar18;
        if ((bVar3 & 1) != 0) {
          pppplVar11 = local_a8;
        }
        if (pppplVar11 == (long ****)&DAT_00000012) {
          param_4 = "jumpScore_300_base";
          pppplVar13 = pppplVar22;
          pppplVar14 = (long ****)&DAT_00000012;
          iVar7 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x710425d69c);
          if (iVar7 == 0) {
            *(uint *)(param_1 + 10) = uVar19;
            goto joined_r0x007102d125b8;
          }
          pppplVar18 = (long ****)(ulong)((byte)local_b0 >> 1);
          bVar3 = (byte)local_b0;
        }
        pppplVar11 = pppplVar18;
        if ((bVar3 & 1) != 0) {
          pppplVar11 = local_a8;
        }
        if (pppplVar11 == (long ****)&DAT_00000012) {
          param_4 = "jumpScore_500_base";
          pppplVar13 = pppplVar22;
          pppplVar14 = (long ****)&DAT_00000012;
          iVar7 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x710438aeed);
          if (iVar7 == 0) {
            *(uint *)((long)param_1 + 0x54) = uVar19;
            goto joined_r0x007102d125b8;
          }
          pppplVar18 = (long ****)(ulong)((byte)local_b0 >> 1);
          bVar3 = (byte)local_b0;
        }
        pppplVar11 = pppplVar18;
        if ((bVar3 & 1) != 0) {
          pppplVar11 = local_a8;
        }
        if (pppplVar11 == (long ****)&DAT_00000013) {
          param_4 = "jumpScore_1000_base";
          pppplVar14 = (long ****)&DAT_00000013;
          pppplVar13 = pppplVar22;
          iVar7 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x710426e196);
          if (iVar7 == 0) {
            *(uint *)(param_1 + 0xb) = uVar19;
            goto joined_r0x007102d125b8;
          }
          pppplVar18 = (long ****)(ulong)((byte)local_b0 >> 1);
          bVar3 = (byte)local_b0;
        }
        if ((bVar3 & 1) != 0) {
          pppplVar18 = local_a8;
        }
        if (pppplVar18 == (long ****)&DAT_00000013) {
          param_4 = "jumpScore_7650_base";
          pppplVar14 = (long ****)&DAT_00000013;
          pppplVar13 = pppplVar22;
          iVar7 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x71042b24ca);
          if (iVar7 == 0) {
            *(uint *)((long)param_1 + 0x5c) = uVar19;
          }
        }
      }
joined_r0x007102d125b8:
      if ((((ulong)local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
        FUN_710392eb40((ulong)local_a0);
      }
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < iVar5);
    uVar21 = 0;
    do {
      if (5 < uVar21) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(char *)(param_3 + 0x1c) != '\0') {
        uVar19 = *(uint *)((long)param_1 + uVar21 * 4 + 0x48);
        uVar6 = (*(code *)(*param_3[0x12])[0x44])();
        if (uVar19 < uVar6) {
          pbVar12 = (byte *)(*(code *)(*param_3[0x12])[0x45])(param_3[0x12],uVar19);
          uVar19 = (uint)*pbVar12;
          if (*pbVar12 == 0) {
            uVar16 = 0;
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            uVar6 = 0xffffffff;
            do {
              pbVar12 = pbVar12 + 1;
              uVar1 = uVar19 + 0x20;
              if (0x19 < uVar19 - 0x41) {
                uVar1 = uVar19;
              }
              uVar6 = (&DAT_7104754084)[(uVar1 ^ uVar6) & 0xff] ^ uVar6 >> 8;
              uVar19 = (uint)*pbVar12;
              uVar15 = uVar15 + 0x100000000;
            } while (uVar19 != 0);
            uVar16 = (ulong)~uVar6;
            uVar15 = uVar15 & 0xff00000000;
          }
          (*(code *)(*param_3[0x12])[0x30])(param_3[0x12],uVar15 | uVar16,0);
        }
      }
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)iVar5);
  }
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}

