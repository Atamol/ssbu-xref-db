// addr:      7102d1bec0
// offset:    0x2d1bec0
// name:      FUN_7102d1bec0
// mangled:   
// signature: undefined __cdecl FUN_7102d1bec0(long * param_1, long param_2, long * * * * param_3, char * param_4, long * * * * param_5, byte * * * * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102d1bec0(long *param_1,long param_2,long ****param_3,char *param_4,long ****param_5,
                   byte ****param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  char *__s;
  long ****pppplVar9;
  void *__dest;
  long ****pppplVar10;
  byte *pbVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long ***ppplVar21;
  uint uVar22;
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
  
  lVar2 = _DAT_7107521008;
  lVar20 = _ConstantZero;
  *param_1 = (long)&PTR_FUN_7105131e40;
  param_1[1] = (long)param_3;
  param_1[5] = lVar2;
  param_1[4] = lVar20;
  param_1[2] = (long)param_4;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  pppplVar13 = param_3;
  pppplVar14 = param_5;
  ppppbVar15 = param_6;
  if (param_3 == (long ****)0x0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_710532a9e0);
      puVar6 = &DAT_710532a9f0;
      if (iVar3 != 0) {
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
      puVar6 = &DAT_710532a9f0;
    }
  }
  else {
    puVar6 = (ulong *)(*(code *)(*param_3[0x12])[0x2b])();
  }
  local_d8 = puVar6[3];
  local_e8 = (long ****)puVar6[1];
  local_f0 = (long ***)*puVar6;
  local_e0 = (void *)puVar6[2];
  local_c8 = puVar6[5];
  local_d0 = puVar6[4];
  local_c0 = param_1[4];
  uStack_b8._4_4_ = (undefined4)(puVar6[7] >> 0x20);
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
        plVar7 = *(long **)(*(long *)(lVar20 + 8) + 0x48);
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_b0);
      }
      *(undefined1 *)(lVar20 + 0x20) = 1;
    }
    lVar20 = param_1[1];
    if (lVar20 != 0) {
      if (((*(long *)(lVar20 + 0xd8) == 0) && (lVar20 != 0)) && (*(long *)(lVar20 + 0xd8) == 0)) {
        plVar7 = FUN_71026533a0((undefined8 *)(lVar20 + 0x90),0,pppplVar13,(byte ****)param_4,
                                pppplVar14,ppppbVar15,param_7,param_8);
        plVar8 = *(long **)(lVar20 + 0xd8);
        *(long **)(lVar20 + 0xd8) = plVar7;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if (param_1[1] != 0) {
        plVar7 = *(long **)(param_1[1] + 0xd8);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        if (*(char *)(plVar7[1] + 0xa8) != '\0') {
          plVar8 = *(long **)(plVar7[1] + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
          if (*(char *)(plVar7[1] + 0xa8) != '\0') {
            plVar8 = *(long **)(plVar7[1] + 0x48);
            (**(code **)(*plVar8 + 0x10))(plVar8,1);
            (**(code **)(*plVar8 + 0x10))(plVar8,2);
          }
        }
        *(undefined1 *)(plVar7 + 4) = 0;
      }
    }
  }
  param_1[8] = (long)param_5;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = (long)&PTR_FUN_7105132420;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (((param_3 != (long ****)0x0) && (*(char *)(param_3 + 0x1c) != '\0')) &&
     (iVar3 = (*(code *)(*param_3[0x12])[0x44])(), 0 < iVar3)) {
    uVar22 = 0;
    do {
      if ((*(char *)(param_3 + 0x1c) == '\0') ||
         (uVar4 = (*(code *)(*param_3[0x12])[0x44])(), uVar4 <= uVar22)) {
        __s = (char *)0x0;
      }
      else {
        __s = (char *)(*(code *)(*param_3[0x12])[0x45])(param_3[0x12],uVar22);
      }
      local_a8 = (long ****)0x0;
      local_a0 = (void *)0x0;
      local_b0 = (long ***)0x0;
      pppplVar9 = (long ****)strlen(__s);
      if ((long ****)0xffffffffffffffef < pppplVar9) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pppplVar9 < (long ****)0x17) {
        local_b0 = (long ***)CONCAT71(local_b0._1_7_,(char)((int)pppplVar9 << 1));
        __dest = (void *)((ulong)&local_b0 | 1);
        if (pppplVar9 != (long ****)0x0) goto LAB_7102d1c274;
      }
      else {
        ppplVar21 = (long ***)((ulong)(pppplVar9 + 2) & 0xfffffffffffffff0);
        ppplVar12 = ppplVar21;
        if (((ulong)(pppplVar9 + 2) & 0xfffffffffffffff0) == 0) {
          ppplVar12 = (long ***)0x1;
        }
        __dest = (void *)FUN_710392e290(0x10,ppplVar12,pppplVar13,(byte ****)param_4,pppplVar14,
                                        ppppbVar15,param_7,param_8);
        if (__dest == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            pppplVar13 = &local_f0;
            local_f0 = ppplVar12;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar16 & 1) != 0) &&
               (__dest = (void *)FUN_710392e290(0x10,ppplVar12,pppplVar13,(byte ****)param_4,
                                                pppplVar14,ppppbVar15,param_7,param_8),
               __dest != (void *)0x0)) goto LAB_7102d1c25c;
          }
          __dest = (void *)0x0;
        }
LAB_7102d1c25c:
        local_b0 = (long ***)((ulong)ppplVar21 | 1);
        local_a8 = pppplVar9;
        local_a0 = __dest;
LAB_7102d1c274:
        pppplVar13 = pppplVar9;
        memcpy(__dest,__s,(size_t)pppplVar9);
      }
      *(undefined1 *)((long)__dest + (long)pppplVar9) = 0;
      pppplVar10 = (long ****)strlen((char *)param_6);
      pppplVar9 = (long ****)((ulong)local_b0 >> 1 & 0x7f);
      if (((ulong)local_b0 & 1) != 0) {
        pppplVar9 = local_a8;
      }
      if (pppplVar10 == pppplVar9) {
        pppplVar13 = (long ****)0xffffffffffffffff;
        param_4 = (char *)param_6;
        iVar5 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,(ulong)param_6);
        pppplVar14 = pppplVar10;
        if (iVar5 != 0) goto LAB_7102d1c2c8;
        *(uint *)(param_1 + 0xd) = uVar22;
        if ((*(char *)(param_3 + 0x1c) != '\0') &&
           (uVar4 = (*(code *)(*param_3[0x12])[0x44])(), uVar22 < uVar4)) {
          pbVar11 = (byte *)(*(code *)(*param_3[0x12])[0x45])(param_3[0x12],uVar22);
          uVar4 = (uint)*pbVar11;
          if (*pbVar11 == 0) {
            uVar18 = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            uVar19 = 0xffffffff;
            do {
              pbVar11 = pbVar11 + 1;
              uVar1 = uVar4 + 0x20;
              if (0x19 < uVar4 - 0x41) {
                uVar1 = uVar4;
              }
              uVar19 = (&DAT_7104754084)[(uVar1 ^ uVar19) & 0xff] ^ uVar19 >> 8;
              uVar4 = (uint)*pbVar11;
              uVar16 = uVar16 + 0x100000000;
            } while (uVar4 != 0);
            uVar18 = (ulong)~uVar19;
            uVar16 = uVar16 & 0xff00000000;
          }
          ppplVar12 = param_3[0x12];
          uVar16 = uVar16 | uVar18;
          pcVar17 = (code *)(*ppplVar12)[0x30];
          pppplVar13 = (long ****)0x1;
          goto LAB_7102d1c3f0;
        }
      }
      else {
LAB_7102d1c2c8:
        pppplVar10 = pppplVar14;
        if ((*(char *)(param_3 + 0x1c) != '\0') &&
           (uVar4 = (*(code *)(*param_3[0x12])[0x44])(), uVar22 < uVar4)) {
          pbVar11 = (byte *)(*(code *)(*param_3[0x12])[0x45])(param_3[0x12],uVar22);
          uVar4 = (uint)*pbVar11;
          if (*pbVar11 == 0) {
            uVar18 = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            uVar19 = 0xffffffff;
            do {
              pbVar11 = pbVar11 + 1;
              uVar1 = uVar4 + 0x20;
              if (0x19 < uVar4 - 0x41) {
                uVar1 = uVar4;
              }
              uVar19 = (&DAT_7104754084)[(uVar1 ^ uVar19) & 0xff] ^ uVar19 >> 8;
              uVar4 = (uint)*pbVar11;
              uVar16 = uVar16 + 0x100000000;
            } while (uVar4 != 0);
            uVar18 = (ulong)~uVar19;
            uVar16 = uVar16 & 0xff00000000;
          }
          ppplVar12 = param_3[0x12];
          uVar16 = uVar16 | uVar18;
          pcVar17 = (code *)(*ppplVar12)[0x30];
          pppplVar13 = (long ****)0x0;
LAB_7102d1c3f0:
          (*pcVar17)(ppplVar12,uVar16);
        }
      }
      pppplVar14 = (long ****)((ulong)local_b0 >> 1 & 0x7f);
      if (((ulong)local_b0 & 1) != 0) {
        pppplVar14 = local_a8;
      }
      if (pppplVar14 == (long ****)&DAT_00000015) {
        pppplVar13 = (long ****)0xffffffffffffffff;
        param_4 = "balloonScore_100_base";
        pppplVar10 = (long ****)&DAT_00000015;
        iVar5 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x710436a7e1);
        if (iVar5 == 0) {
          *(uint *)((long)param_1 + 0x6c) = uVar22;
        }
      }
      pppplVar9 = (long ****)((ulong)local_b0 >> 1 & 0x7f);
      if (((ulong)local_b0 & 1) != 0) {
        pppplVar9 = local_a8;
      }
      pppplVar14 = pppplVar10;
      if (pppplVar9 == (long ****)0x16) {
        pppplVar13 = (long ****)0xffffffffffffffff;
        param_4 = "balloonScore_7650_base";
        pppplVar14 = (long ****)0x16;
        iVar5 = std::string::compare((ulong)&local_b0,0,(char *)0xffffffffffffffff,0x710438af00);
        if (iVar5 == 0) {
          *(uint *)(param_1 + 0xe) = uVar22;
        }
      }
      if ((((ulong)local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
        FUN_710392eb40((ulong)local_a0);
      }
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < iVar3);
  }
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}

