// addr:      71035de780
// offset:    0x35de780
// name:      FUN_71035de780
// mangled:   
// signature: undefined __cdecl FUN_71035de780(long param_1, long * param_2, long * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71035de780(long param_1,long *param_2,long **********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  char *__s;
  undefined8 *puVar5;
  ulong *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long ************pppppppppppplVar11;
  long ************pppppppppppplVar12;
  byte *__s1;
  long lVar13;
  long ************pppppppppppplVar14;
  long *plVar15;
  long lVar16;
  long ************pppppppppppplVar17;
  long ************pppppppppppplVar18;
  long ************pppppppppppplVar19;
  ulong uVar20;
  long ***********ppppppppppplVar21;
  long lVar22;
  long ***********ppppppppppplVar23;
  ulong uVar24;
  uint uVar25;
  long ***********ppppppppppplVar26;
  uint uVar27;
  long *plVar28;
  long *plVar29;
  long ***********ppppppppppplVar30;
  long ************pppppppppppplVar31;
  ulong uVar32;
  byte *pbVar33;
  long ************unaff_x23;
  undefined **ppuVar34;
  long ***********ppppppppppplVar35;
  void *__src;
  long ************pppppppppppplVar36;
  float fVar37;
  long ***********local_d8;
  long ************local_d0;
  long ************local_c8;
  long ***********local_c0;
  long ************local_b8;
  long ************local_b0;
  long ***********local_a8;
  long ************local_a0;
  long ************local_98;
  long ***********local_90;
  long ************local_88;
  long ************local_80;
  long ************local_78;
  long ************local_70 [2];
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  lVar13 = *param_2;
  lVar22 = *(long *)(param_1 + 0x488);
  if (param_2[1] == lVar13) {
    return;
  }
  puVar1 = (ulong *)(lVar22 + 0x10);
  pppppppppppplVar18 = (long ************)((ulong)&local_c0 | 1);
  uVar32 = 0;
  puVar2 = (ulong *)(lVar22 + 0x68);
  plVar3 = (long *)(lVar22 + 0x78);
  pppppppppppplVar31 = (long ************)((ulong)&local_a8 | 1);
  pppppppppppplVar19 = (long ************)((ulong)&local_90 | 1);
  plVar4 = (long *)(lVar22 + 0x20);
LAB_71035de820:
  lVar13 = *(long *)(lVar13 + uVar32 * 0x20 + 8);
  local_c0 = (long ***********)0x0;
  local_b8 = (long ************)0x0;
  local_b0 = (long ************)0x0;
  __s = (char *)(lVar13 + 0x11);
  if ((*(byte *)(lVar13 + 0x10) & 1) != 0) {
    __s = *(char **)(lVar13 + 0x20);
  }
  pppppppppppplVar11 = (long ************)strlen(__s);
  if ((long ************)0xffffffffffffffef < pppppppppppplVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (pppppppppppplVar11 < (long ************)0x17) {
    local_c0 = (long ***********)CONCAT71(local_c0._1_7_,(char)((int)pppppppppppplVar11 << 1));
    pppppppppppplVar17 = pppppppppppplVar18;
    if (pppppppppppplVar11 != (long ************)0x0) goto LAB_71035de8f4;
  }
  else {
    unaff_x23 = (long ************)((ulong)(pppppppppppplVar11 + 2) & 0xfffffffffffffff0);
    iVar10 = FUN_710392e1f0(&local_a8,0x10,(long ****)unaff_x23,param_4,param_5,param_6,param_7,
                            param_8);
    if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_90 = (long ***********)unaff_x23,
       uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90), (uVar20 & 1) != 0))
    {
      FUN_710392e1f0(&local_a8,0x10,(long ****)unaff_x23,param_4,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)unaff_x23,0x10,local_a8);
    local_c0 = (long ***********)((ulong)unaff_x23 | 1);
    local_b0 = (long ************)local_a8;
    pppppppppppplVar17 = (long ************)local_a8;
    local_b8 = pppppppppppplVar11;
LAB_71035de8f4:
    param_3 = (long **********)pppppppppppplVar11;
    memcpy(pppppppppppplVar17,__s,(size_t)pppppppppppplVar11);
  }
  pppppppppppplVar12 = local_b0;
  pppppppppppplVar36 = local_b8;
  *(byte *)((long)pppppppppppplVar17 + (long)pppppppppppplVar11) = 0;
  local_d0 = (long ************)0x0;
  local_c8 = (long ************)0x0;
  local_d8 = (long ***********)0x0;
  if (((ulong)local_c0 & 1) == 0) {
    local_d0 = local_b8;
    local_c8 = local_b0;
    local_d8 = local_c0;
    pppppppppppplVar12 = unaff_x23;
  }
  else {
    if ((long ************)0xffffffffffffffef < local_b8) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_b8 < (long ************)0x17) {
      local_d8 = (long ***********)(ulong)(byte)((int)local_b8 << 1);
      pppppppppppplVar11 = (long ************)((ulong)&local_d8 | 1);
      if (local_b8 != (long ************)0x0) goto LAB_71035de9d8;
    }
    else {
      pppppppppppplVar11 = (long ************)((ulong)(local_b8 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_a8,0x10,(long ****)pppppppppppplVar11,param_4,param_5,param_6,
                              param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_90 = (long ***********)pppppppppppplVar11,
         uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90), (uVar20 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a8,0x10,(long ****)pppppppppppplVar11,param_4,param_5,param_6,param_7,
                       param_8);
      }
      nu::VirtualAllocHook((ulong)pppppppppppplVar11,0x10,local_a8);
      local_d8 = (long ***********)((ulong)pppppppppppplVar11 | 1);
      local_d0 = pppppppppppplVar36;
      local_c8 = (long ************)local_a8;
      pppppppppppplVar11 = (long ************)local_a8;
LAB_71035de9d8:
      param_3 = (long **********)pppppppppppplVar36;
      memcpy(pppppppppppplVar11,pppppppppppplVar12,(size_t)pppppppppppplVar36);
    }
    *(byte *)((long)pppppppppppplVar11 + (long)pppppppppppplVar36) = 0;
  }
  pppppppppppplVar11 = local_c8;
  pppppppppppplVar17 = local_d0;
  local_a0 = (long ************)0x0;
  local_98 = (long ************)0x0;
  local_a8 = (long ***********)0x0;
  if (((ulong)local_d8 & 1) == 0) {
    local_a0 = local_d0;
    local_98 = local_c8;
    local_a8 = local_d8;
    pppppppppppplVar11 = pppppppppppplVar12;
  }
  else {
    if ((long ************)0xffffffffffffffef < local_d0) goto LAB_71035dfae0;
    if (local_d0 < (long ************)0x17) {
      local_a8 = (long ***********)(ulong)(byte)((int)local_d0 << 1);
      pppppppppppplVar36 = pppppppppppplVar31;
      if (local_d0 != (long ************)0x0) goto LAB_71035deac0;
    }
    else {
      pppppppppppplVar36 = (long ************)((ulong)(local_d0 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(local_70,0x10,(long ****)pppppppppppplVar36,param_4,param_5,param_6,
                              param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_90 = (long ***********)pppppppppppplVar36,
         uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90), (uVar20 & 1) != 0
         )) {
        FUN_710392e1f0(local_70,0x10,(long ****)pppppppppppplVar36,param_4,param_5,param_6,param_7,
                       param_8);
      }
      nu::VirtualAllocHook((ulong)pppppppppppplVar36,0x10,local_70[0]);
      local_a8 = (long ***********)((ulong)pppppppppppplVar36 | 1);
      local_a0 = pppppppppppplVar17;
      local_98 = local_70[0];
      pppppppppppplVar36 = local_70[0];
LAB_71035deac0:
      param_3 = (long **********)pppppppppppplVar17;
      memcpy(pppppppppppplVar36,pppppppppppplVar11,(size_t)pppppppppppplVar17);
    }
    *(byte *)((long)pppppppppppplVar36 + (long)pppppppppppplVar17) = 0;
  }
  pppppppppppplVar17 = (long ************)((ulong)local_a8 >> 1 & 0x7f);
  pppppppppppplVar36 = pppppppppppplVar31;
  if (((ulong)local_a8 & 1) != 0) {
    pppppppppppplVar17 = local_a0;
    pppppppppppplVar36 = local_98;
  }
  if (4 < (long)pppppppppppplVar17) {
    pppppppppppplVar11 = (long ************)((long)pppppppppppplVar36 + (long)pppppppppppplVar17);
    pppppppppppplVar12 = pppppppppppplVar36;
    pppppppppppplVar14 = pppppppppppplVar17;
    do {
      param_3 = (long **********)((long)pppppppppppplVar14 + -4);
      if (((long ************)param_3 == (long ************)0x0) ||
         (pppppppppppplVar12 = memchr(pppppppppppplVar12,0x53,(size_t)param_3),
         pppppppppppplVar12 == (long ************)0x0)) break;
      param_3 = (long **********)0x5;
      iVar10 = memcmp(pppppppppppplVar12,"Shape",5);
      if (iVar10 == 0) {
        pppppppppppplVar14 =
             (long ************)((long)pppppppppppplVar12 - (long)pppppppppppplVar36);
        if (((pppppppppppplVar14 != (long ************)0xffffffffffffffff) &&
            (pppppppppppplVar12 != pppppppppppplVar11)) &&
           (pppppppppppplVar14 == (long ************)((long)pppppppppppplVar17 + -5))) {
          if (pppppppppppplVar14 <= pppppppppppplVar17) {
            pppppppppppplVar17 = pppppppppppplVar14;
          }
          local_90 = (long ***********)0x0;
          local_88 = (long ************)0x0;
          local_80 = (long ************)0x0;
          if ((long ************)0xffffffffffffffef < pppppppppppplVar17) goto LAB_71035dfad8;
          if (pppppppppppplVar17 < (long ************)0x17) {
            local_90 = (long ***********)(ulong)(byte)((int)pppppppppppplVar17 << 1);
            pppppppppppplVar12 = pppppppppppplVar19;
            if (pppppppppppplVar17 != (long ************)0x0) goto LAB_71035dec14;
          }
          else {
            pppppppppppplVar11 =
                 (long ************)((ulong)(pppppppppppplVar17 + 2) & 0xfffffffffffffff0);
            iVar10 = FUN_710392e1f0(&local_78,0x10,(long ****)pppppppppppplVar11,param_4,param_5,
                                    param_6,param_7,param_8);
            if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_70[0] = pppppppppppplVar11,
               uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
               (uVar20 & 1) != 0)) {
              FUN_710392e1f0(&local_78,0x10,(long ****)pppppppppppplVar11,param_4,param_5,param_6,
                             param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppppppppppplVar11,0x10,local_78);
            local_90 = (long ***********)((ulong)pppppppppppplVar11 | 1);
            local_80 = local_78;
            pppppppppppplVar12 = local_78;
            local_88 = pppppppppppplVar17;
LAB_71035dec14:
            param_3 = (long **********)pppppppppppplVar17;
            memcpy(pppppppppppplVar12,pppppppppppplVar36,(size_t)pppppppppppplVar17);
          }
          pppppppppppplVar36 = local_98;
          *(byte *)((long)pppppppppppplVar12 + (long)pppppppppppplVar17) = 0;
          if (((ulong)local_a8 & 1) != 0) {
            *(byte *)local_98 = 0;
            local_a0 = (long ************)0x0;
            if (((ulong)local_a8 & 1) != 0) {
              nu::VirtualFreeHook(local_98);
              FUN_710392eb40((ulong)pppppppppppplVar36);
            }
          }
          local_a0 = local_88;
          local_98 = local_80;
          local_a8 = local_90;
        }
        break;
      }
      pppppppppppplVar12 = (long ************)((long)pppppppppppplVar12 + 1);
      pppppppppppplVar14 = (long ************)((long)pppppppppppplVar11 - (long)pppppppppppplVar12);
    } while (4 < (long)pppppppppppplVar14);
  }
  pppppppppppplVar17 = local_c8;
  if (((ulong)local_d8 & 1) != 0) {
    *(byte *)local_c8 = 0;
    local_d0 = (long ************)0x0;
    if (((ulong)local_d8 & 1) != 0) {
      nu::VirtualFreeHook(local_c8);
      FUN_710392eb40((ulong)pppppppppppplVar17);
    }
  }
  pppppppppppplVar36 = local_98;
  pppppppppppplVar17 = local_a0;
  local_d8 = local_a8;
  local_c8 = local_98;
  local_a0 = (long ************)0x0;
  local_98 = (long ************)0x0;
  local_d0 = pppppppppppplVar17;
  local_a8 = (long ***********)0x0;
  ppppppppppplVar35 = local_d8;
  if (((ulong)local_d8 & 1) != 0) {
    if ((long ************)0xffffffffffffffef < pppppppppppplVar17) {
LAB_71035dfae0:
      local_98 = (long ************)0x0;
      local_a0 = (long ************)0x0;
      local_a8 = (long ***********)0x0;
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (pppppppppppplVar17 < (long ************)0x17) {
      local_a8 = (long ***********)(ulong)(byte)((int)pppppppppppplVar17 << 1);
      pppppppppppplVar11 = pppppppppppplVar31;
      if (pppppppppppplVar17 != (long ************)0x0) goto LAB_71035dedb0;
    }
    else {
      pppppppppppplVar11 = (long ************)((ulong)(pppppppppppplVar17 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(local_70,0x10,(long ****)pppppppppppplVar11,param_4,param_5,param_6,
                              param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_90 = (long ***********)pppppppppppplVar11,
         uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90), (uVar20 & 1) != 0
         )) {
        FUN_710392e1f0(local_70,0x10,(long ****)pppppppppppplVar11,param_4,param_5,param_6,param_7,
                       param_8);
      }
      nu::VirtualAllocHook((ulong)pppppppppppplVar11,0x10,local_70[0]);
      local_a8 = (long ***********)((ulong)pppppppppppplVar11 | 1);
      local_98 = local_70[0];
      pppppppppppplVar11 = local_70[0];
      local_a0 = pppppppppppplVar17;
LAB_71035dedb0:
      param_3 = (long **********)pppppppppppplVar17;
      memcpy(pppppppppppplVar11,pppppppppppplVar36,(size_t)pppppppppppplVar17);
    }
    *(byte *)((long)pppppppppppplVar11 + (long)pppppppppppplVar17) = 0;
    pppppppppppplVar11 = pppppppppppplVar36;
    ppppppppppplVar35 = local_a8;
    pppppppppppplVar17 = local_a0;
    pppppppppppplVar36 = local_98;
  }
  local_98 = pppppppppppplVar36;
  local_a0 = pppppppppppplVar17;
  local_a8 = ppppppppppplVar35;
  bVar9 = false;
  ppuVar34 = &PTR_DAT_71052324c8;
  do {
    ppppppppppplVar35 = local_a8;
    pbVar33 = *ppuVar34;
    bVar7 = (byte)local_a8;
    pppppppppppplVar17 = pppppppppppplVar31;
    if (((ulong)local_a8 & 1) != 0) {
      pppppppppppplVar17 = local_98;
    }
    unaff_x23 = (long ************)strlen((char *)pbVar33);
    if (unaff_x23 == (long ************)0x0) {
      pppppppppppplVar12 = (long ************)0x0;
      pppppppppppplVar36 = (long ************)(ulong)(bVar7 >> 1);
      unaff_x23 = pppppppppppplVar11;
      if (((ulong)ppppppppppplVar35 & 1) != 0) {
        pppppppppppplVar36 = local_a0;
      }
LAB_71035dee70:
      if (pppppppppppplVar12 <= pppppppppppplVar36) {
        pppppppppppplVar36 = pppppppppppplVar12;
      }
      local_90 = (long ***********)0x0;
      local_88 = (long ************)0x0;
      local_80 = (long ************)0x0;
      if ((long ************)0xffffffffffffffef < pppppppppppplVar36) goto LAB_71035dfad8;
      if (pppppppppppplVar36 < (long ************)0x17) {
        local_90 = (long ***********)(ulong)(byte)((int)pppppppppppplVar36 << 1);
        pppppppppppplVar11 = pppppppppppplVar19;
        if (pppppppppppplVar36 != (long ************)0x0) goto LAB_71035def24;
      }
      else {
        unaff_x23 = (long ************)((ulong)(pppppppppppplVar36 + 2) & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_78,0x10,(long ****)unaff_x23,param_4,param_5,param_6,param_7,
                                param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_70[0] = unaff_x23,
           uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
           (uVar20 & 1) != 0)) {
          FUN_710392e1f0(&local_78,0x10,(long ****)unaff_x23,param_4,param_5,param_6,param_7,param_8
                        );
        }
        nu::VirtualAllocHook((ulong)unaff_x23,0x10,local_78);
        local_90 = (long ***********)((ulong)unaff_x23 | 1);
        local_80 = local_78;
        pppppppppppplVar11 = local_78;
        local_88 = pppppppppppplVar36;
LAB_71035def24:
        param_3 = (long **********)pppppppppppplVar36;
        memcpy(pppppppppppplVar11,pppppppppppplVar17,(size_t)pppppppppppplVar36);
      }
      pppppppppppplVar17 = local_98;
      *(byte *)((long)pppppppppppplVar11 + (long)pppppppppppplVar36) = 0;
      if (((ulong)local_a8 & 1) != 0) {
        *(byte *)local_98 = 0;
        local_a0 = (long ************)0x0;
        if (((ulong)local_a8 & 1) != 0) {
          nu::VirtualFreeHook(local_98);
          FUN_710392eb40((ulong)pppppppppppplVar17);
        }
      }
      bVar9 = true;
      local_a0 = local_88;
      local_98 = local_80;
      local_a8 = local_90;
    }
    else {
      pppppppppppplVar36 = (long ************)(ulong)(bVar7 >> 1);
      if (((ulong)ppppppppppplVar35 & 1) != 0) {
        pppppppppppplVar36 = local_a0;
      }
      if ((long)unaff_x23 <= (long)pppppppppppplVar36) {
        bVar7 = *pbVar33;
        pppppppppppplVar11 = pppppppppppplVar17;
        pppppppppppplVar12 = pppppppppppplVar36;
        do {
          param_3 = (long **********)((long)pppppppppppplVar12 + (1 - (long)unaff_x23));
          if (((long ************)param_3 == (long ************)0x0) ||
             (__s1 = memchr(pppppppppppplVar11,(uint)bVar7,(size_t)param_3), __s1 == (byte *)0x0))
          break;
          param_3 = (long **********)unaff_x23;
          iVar10 = memcmp(__s1,pbVar33,(size_t)unaff_x23);
          if (iVar10 == 0) {
            if ((__s1 != (byte *)((long)pppppppppppplVar17 + (long)pppppppppppplVar36)) &&
               (pppppppppppplVar12 = (long ************)(__s1 + -(long)pppppppppppplVar17),
               pppppppppppplVar12 != (long ************)0xffffffffffffffff)) goto LAB_71035dee70;
            break;
          }
          pppppppppppplVar11 = (long ************)(__s1 + 1);
          pppppppppppplVar12 =
               (long ************)
               ((byte *)((long)pppppppppppplVar17 + (long)pppppppppppplVar36) +
               -(long)pppppppppppplVar11);
        } while ((long)unaff_x23 <= (long)pppppppppppplVar12);
      }
    }
    ppuVar34 = ppuVar34 + 1;
    pppppppppppplVar11 = unaff_x23;
  } while (ppuVar34 != (undefined **)0x71052324e8);
  if (bVar9) {
    uVar20 = (ulong)local_a8 & 0xff;
    bVar9 = ((ulong)local_a8 & 1) == 0;
    pppppppppppplVar11 = (long ************)((ulong)local_a8 >> 1 & 0x7f);
    pppppppppppplVar17 = pppppppppppplVar31;
    if (!bVar9) {
      pppppppppppplVar11 = local_a0;
      pppppppppppplVar17 = local_98;
    }
    pppppppppppplVar36 = pppppppppppplVar11;
    if (pppppppppppplVar11 == (long ************)0x0) {
      pppppppppppplVar12 = (long ************)0xffffffffffffffff;
    }
    else {
      do {
        if (pppppppppppplVar36 == (long ************)0x0) {
          pppppppppppplVar12 = (long ************)0xffffffffffffffff;
          break;
        }
        pbVar33 = (byte *)((long)pppppppppppplVar17 + (long)pppppppppppplVar36);
        pppppppppppplVar12 = (long ************)((long)pppppppppppplVar36 + -1);
        pppppppppppplVar36 = (long ************)((long)pppppppppppplVar36 + -1);
      } while (pbVar33[-1] != 0x5f);
    }
LAB_71035df034:
    if (pppppppppppplVar12 == (long ************)((long)pppppppppppplVar11 + -1)) {
      pppppppppppplVar11 = (long ************)(uVar20 >> 1);
      pppppppppppplVar17 = pppppppppppplVar31;
      if (!bVar9) {
        pppppppppppplVar11 = local_a0;
        pppppppppppplVar17 = local_98;
      }
      local_90 = (long ***********)0x0;
      local_88 = (long ************)0x0;
      local_80 = (long ************)0x0;
      if (pppppppppppplVar12 <= pppppppppppplVar11) {
        pppppppppppplVar11 = pppppppppppplVar12;
      }
      if ((long ************)0xffffffffffffffef < pppppppppppplVar11) {
LAB_71035dfad8:
        local_80 = (long ************)0x0;
        local_88 = (long ************)0x0;
        local_90 = (long ***********)0x0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pppppppppppplVar11 < (long ************)0x17) {
        local_90 = (long ***********)(ulong)(byte)((int)pppppppppppplVar11 << 1);
        pppppppppppplVar36 = pppppppppppplVar19;
        if (pppppppppppplVar11 != (long ************)0x0) goto LAB_71035df104;
      }
      else {
        unaff_x23 = (long ************)((ulong)(pppppppppppplVar11 + 2) & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_78,0x10,(long ****)unaff_x23,param_4,param_5,param_6,param_7,
                                param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_70[0] = unaff_x23,
           uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
           (uVar20 & 1) != 0)) {
          FUN_710392e1f0(&local_78,0x10,(long ****)unaff_x23,param_4,param_5,param_6,param_7,param_8
                        );
        }
        nu::VirtualAllocHook((ulong)unaff_x23,0x10,local_78);
        local_90 = (long ***********)((ulong)unaff_x23 | 1);
        local_80 = local_78;
        pppppppppppplVar36 = local_78;
        local_88 = pppppppppppplVar11;
LAB_71035df104:
        param_3 = (long **********)pppppppppppplVar11;
        memcpy(pppppppppppplVar36,pppppppppppplVar17,(size_t)pppppppppppplVar11);
      }
      pppppppppppplVar17 = local_98;
      *(byte *)((long)pppppppppppplVar36 + (long)pppppppppppplVar11) = 0;
      if (((ulong)local_a8 & 1) != 0) {
        *(byte *)local_98 = 0;
        local_a0 = (long ************)0x0;
        if (((ulong)local_a8 & 1) != 0) {
          nu::VirtualFreeHook(local_98);
          FUN_710392eb40((ulong)pppppppppppplVar17);
        }
      }
      local_a8 = local_90;
      local_a0 = local_88;
      uVar20 = (ulong)local_90 & 0xff;
      local_98 = local_80;
      bVar9 = ((ulong)local_90 & 1) == 0;
      pppppppppppplVar11 = (long ************)((ulong)local_90 >> 1 & 0x7f);
      pppppppppppplVar17 = pppppppppppplVar31;
      if (!bVar9) {
        pppppppppppplVar11 = local_88;
        pppppppppppplVar17 = local_80;
      }
      pppppppppppplVar36 = pppppppppppplVar11;
      if (pppppppppppplVar11 == (long ************)0x0) {
        pppppppppppplVar12 = (long ************)0xffffffffffffffff;
      }
      else {
        do {
          pppppppppppplVar12 = (long ************)0xffffffffffffffff;
          if (pppppppppppplVar36 == (long ************)0x0) break;
          pbVar33 = (byte *)((long)pppppppppppplVar17 + (long)pppppppppppplVar36);
          pppppppppppplVar12 = (long ************)((long)pppppppppppplVar36 + -1);
          pppppppppppplVar36 = pppppppppppplVar12;
        } while (pbVar33[-1] != 0x5f);
      }
      goto LAB_71035df034;
    }
  }
  pppppppppppplVar11 = local_c8;
  if (((ulong)local_d8 & 1) != 0) {
    *(byte *)local_c8 = 0;
    local_d0 = (long ************)0x0;
    if (((ulong)local_d8 & 1) != 0) {
      nu::VirtualFreeHook(local_c8);
      FUN_710392eb40((ulong)pppppppppppplVar11);
    }
  }
  pppppppppppplVar11 = local_b0;
  local_d0 = local_a0;
  local_c8 = local_98;
  local_d8 = local_a8;
  if (((ulong)local_c0 & 1) != 0) {
    *(byte *)local_b0 = 0;
    local_b8 = (long ************)0x0;
    if (((ulong)local_c0 & 1) != 0) {
      nu::VirtualFreeHook(local_b0);
      FUN_710392eb40((ulong)pppppppppppplVar11);
    }
  }
  local_c0 = local_d8;
  local_b8 = local_d0;
  local_b0 = local_c8;
  pppppppppppplVar11 = (long ************)((ulong)local_d8 >> 1 & 0x7f);
  pppppppppppplVar17 = pppppppppppplVar18;
  if (((ulong)local_d8 & 1) != 0) {
    pppppppppppplVar11 = local_d0;
    pppppppppppplVar17 = local_c8;
  }
  if ((int)pppppppppppplVar11 == 0) {
    uVar20 = 0;
  }
  else {
    uVar25 = 0xffffffff;
    pppppppppppplVar36 = pppppppppppplVar17;
    do {
      pppppppppppplVar12 = (long ************)((long)pppppppppppplVar36 + 1);
      bVar7 = *(byte *)pppppppppppplVar36;
      uVar27 = bVar7 + 0x20;
      if (0x19 < bVar7 - 0x41) {
        uVar27 = (uint)bVar7;
      }
      uVar25 = (&DAT_7104754084)[(uVar27 ^ uVar25) & 0xff] ^ uVar25 >> 8;
      pppppppppppplVar36 = pppppppppppplVar12;
    } while (pppppppppppplVar12 <
             (long ************)
             ((long)pppppppppppplVar17 + ((ulong)pppppppppppplVar11 & 0xffffffff)));
    uVar20 = (ulong)~uVar25;
  }
  ppppppppppplVar23 = *(long ************)(lVar22 + 0x18);
  ppppppppppplVar35 = (long ***********)(uVar20 | ((ulong)pppppppppppplVar11 & 0xff) << 0x20);
  if (ppppppppppplVar23 != (long ***********)0x0) {
    pbVar33 = (byte *)((long)ppppppppppplVar23 + -1);
    if (((ulong)pbVar33 & (ulong)ppppppppppplVar23) == 0) {
      ppppppppppplVar21 = (long ***********)((ulong)pbVar33 & (ulong)ppppppppppplVar35);
    }
    else {
      ppppppppppplVar21 = ppppppppppplVar35;
      if (ppppppppppplVar23 <= ppppppppppplVar35) {
        uVar20 = 0;
        if (ppppppppppplVar23 != (long ***********)0x0) {
          uVar20 = (ulong)ppppppppppplVar35 / (ulong)ppppppppppplVar23;
        }
        ppppppppppplVar21 =
             (long ***********)((long)ppppppppppplVar35 - uVar20 * (long)ppppppppppplVar23);
      }
    }
    plVar15 = *(long **)(*puVar1 + (long)ppppppppppplVar21 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (((ulong)pbVar33 & (ulong)ppppppppppplVar23) == 0) {
        do {
          ppppppppppplVar23 = (long ***********)plVar15[1];
          if (ppppppppppplVar35 != ppppppppppplVar23 &&
              (long ***********)((ulong)ppppppppppplVar23 & (ulong)pbVar33) != ppppppppppplVar21)
          break;
          if ((ppppppppppplVar35 == ppppppppppplVar23) &&
             ((long ***********)plVar15[2] == ppppppppppplVar35)) goto LAB_71035df388;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          ppppppppppplVar26 = (long ***********)plVar15[1];
          if (ppppppppppplVar35 == ppppppppppplVar26) {
            if ((long ***********)plVar15[2] == ppppppppppplVar35) goto LAB_71035df388;
          }
          else {
            if (ppppppppppplVar23 <= ppppppppppplVar26) {
              uVar20 = 0;
              if (ppppppppppplVar23 != (long ***********)0x0) {
                uVar20 = (ulong)ppppppppppplVar26 / (ulong)ppppppppppplVar23;
              }
              ppppppppppplVar26 =
                   (long ***********)((long)ppppppppppplVar26 - uVar20 * (long)ppppppppppplVar23);
            }
            if (ppppppppppplVar26 != ppppppppppplVar21) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_71035df3ac;
LAB_71035df388:
  lVar13 = -1;
  do {
    lVar16 = lVar13;
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) break;
    lVar13 = lVar16 + -1;
  } while ((long ***********)plVar15[2] == ppppppppppplVar35);
  if (lVar16 == 0) {
LAB_71035df3ac:
    puVar5 = *(undefined8 **)(lVar22 + 0x40);
    if (puVar5 == *(undefined8 **)(lVar22 + 0x48)) {
      __src = *(void **)(lVar22 + 0x38);
      pppppppppppplVar11 = (long ************)((long)puVar5 - (long)__src);
      lVar13 = (long)pppppppppppplVar11 >> 3;
      uVar20 = lVar13 + 1;
      if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar16 = (long)*(undefined8 **)(lVar22 + 0x48) - (long)__src;
      if ((ulong)(lVar16 >> 3) < 0xfffffffffffffff) {
        uVar24 = lVar16 >> 2;
        if (uVar20 <= uVar24) {
          uVar20 = uVar24;
        }
        if (uVar20 != 0) {
          if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_71035df41c;
        }
LAB_71035df47c:
        unaff_x23 = (long ************)0x0;
      }
      else {
        uVar20 = 0x1fffffffffffffff;
LAB_71035df41c:
        pppppppppppplVar17 = (long ************)(uVar20 * 8);
        if (pppppppppppplVar17 == (long ************)0x0) {
          pppppppppppplVar17 = (long ************)0x1;
        }
        unaff_x23 = (long ************)
                    FUN_710392e290(0x10,pppppppppppplVar17,(long ****)param_3,param_4,param_5,
                                   param_6,param_7,param_8);
        if (unaff_x23 == (long ************)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_a8 = (long ***********)((ulong)local_a8 & 0xffffffff00000000);
            param_3 = (long **********)&local_90;
            local_90 = (long ***********)pppppppppppplVar17;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
            if (((uVar24 & 1) != 0) &&
               (unaff_x23 = (long ************)
                            FUN_710392e290(0x10,pppppppppppplVar17,(long ****)param_3,param_4,
                                           param_5,param_6,param_7,param_8),
               unaff_x23 != (long ************)0x0)) goto LAB_71035df480;
          }
          goto LAB_71035df47c;
        }
      }
LAB_71035df480:
      unaff_x23[lVar13] = ppppppppppplVar35;
      if (0 < (long)pppppppppppplVar11) {
        memcpy(unaff_x23,__src,(size_t)pppppppppppplVar11);
        param_3 = (long **********)pppppppppppplVar11;
      }
      *(long *************)(lVar22 + 0x38) = unaff_x23;
      *(long *************)(lVar22 + 0x40) = unaff_x23 + lVar13 + 1;
      *(long *************)(lVar22 + 0x48) = unaff_x23 + uVar20;
      if (__src != (void *)0x0) {
        FUN_710392eb40((ulong)__src);
      }
    }
    else {
      *puVar5 = ppppppppppplVar35;
      *(long *)(lVar22 + 0x40) = *(long *)(lVar22 + 0x40) + 8;
    }
    pppppppppppplVar17 = local_b0;
    pppppppppppplVar11 = local_b8;
    puVar6 = *(ulong **)(lVar22 + 0x58);
    if (puVar6 == *(ulong **)(lVar22 + 0x60)) {
      FUN_71035de1f0((undefined8 *)(lVar22 + 0x50),(ulong *)&local_c0,(long ****)param_3,param_4,
                     param_5,param_6,param_7,param_8);
    }
    else {
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      if (((ulong)local_c0 & 1) == 0) {
        puVar6[1] = (ulong)local_b8;
        puVar6[2] = (ulong)local_b0;
        *puVar6 = (ulong)local_c0;
        pppppppppppplVar17 = unaff_x23;
      }
      else {
        if ((long ************)0xffffffffffffffef < local_b8) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (local_b8 < (long ************)0x17) {
          pppppppppppplVar36 = (long ************)((long)puVar6 + 1);
          *(char *)puVar6 = (char)((int)local_b8 << 1);
          if (local_b8 != (long ************)0x0) goto LAB_71035df5b4;
        }
        else {
          pppppppppppplVar36 = (long ************)((ulong)(local_b8 + 2) & 0xfffffffffffffff0);
          iVar10 = FUN_710392e1f0(&local_a8,0x10,(long ****)pppppppppppplVar36,param_4,param_5,
                                  param_6,param_7,param_8);
          if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_90 = (long ***********)pppppppppppplVar36,
             uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90),
             (uVar20 & 1) != 0)) {
            FUN_710392e1f0(&local_a8,0x10,(long ****)pppppppppppplVar36,param_4,param_5,param_6,
                           param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppppppppppplVar36,0x10,local_a8);
          *puVar6 = (ulong)pppppppppppplVar36 | 1;
          puVar6[1] = (ulong)pppppppppppplVar11;
          puVar6[2] = (ulong)local_a8;
          pppppppppppplVar36 = (long ************)local_a8;
LAB_71035df5b4:
          param_3 = (long **********)pppppppppppplVar11;
          memcpy(pppppppppppplVar36,pppppppppppplVar17,(size_t)pppppppppppplVar11);
        }
        *(byte *)((long)pppppppppppplVar36 + (long)pppppppppppplVar11) = 0;
      }
      *(long *)(lVar22 + 0x58) = *(long *)(lVar22 + 0x58) + 0x18;
      unaff_x23 = pppppppppppplVar17;
    }
    iVar10 = *(int *)(param_1 + 0x98);
    ppppppppppplVar23 = *(long ************)(lVar22 + 0x70);
    if (ppppppppppplVar23 == (long ***********)0x0) {
LAB_71035df680:
      plVar15 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8);
      if (plVar15 == (long *)0x0) {
        local_a8 = (long ***********)((ulong)local_a8 & 0xffffffff00000000);
        local_90 = (long ***********)&SUB_00000020;
        param_3 = (long **********)&local_90;
        (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
        plVar15 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8);
      }
      plVar15[1] = (long)ppppppppppplVar35;
      plVar15[2] = (long)ppppppppppplVar35;
      *(int *)(plVar15 + 3) = iVar10;
      *plVar15 = 0;
      fVar37 = (float)(*(long *)(lVar22 + 0x80) + 1);
      if ((ppppppppppplVar23 == (long ***********)0x0) ||
         (*(float *)(lVar22 + 0x88) * (float)ppppppppppplVar23 < fVar37)) {
        if (ppppppppppplVar23 < (long ***********)0x3) {
          uVar20 = 1;
        }
        else {
          uVar20 = (ulong)(((ulong)((long)ppppppppppplVar23 + -1) & (ulong)ppppppppppplVar23) != 0);
        }
        uVar24 = (ulong)(fVar37 / *(float *)(lVar22 + 0x88));
        uVar20 = uVar20 | (long)ppppppppppplVar23 << 1;
        if (uVar24 <= uVar20) {
          uVar24 = uVar20;
        }
        FUN_71032a9680(puVar2,uVar24,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        ppppppppppplVar23 = *(long ************)(lVar22 + 0x70);
        if (((ulong)((long)ppppppppppplVar23 + -1) & (ulong)ppppppppppplVar23) == 0) {
          unaff_x23 = (long ************)
                      ((ulong)((long)ppppppppppplVar23 + -1) & (ulong)ppppppppppplVar35);
        }
        else {
          unaff_x23 = (long ************)ppppppppppplVar35;
          if (ppppppppppplVar23 <= ppppppppppplVar35) {
            uVar20 = 0;
            if (ppppppppppplVar23 != (long ***********)0x0) {
              uVar20 = (ulong)ppppppppppplVar35 / (ulong)ppppppppppplVar23;
            }
            unaff_x23 = (long ************)
                        ((long)ppppppppppplVar35 - uVar20 * (long)ppppppppppplVar23);
          }
        }
      }
      uVar20 = *puVar2;
      plVar28 = *(long **)(uVar20 + (long)unaff_x23 * 8);
      if (plVar28 == (long *)0x0) {
        *plVar15 = *plVar3;
        *plVar3 = (long)plVar15;
        *(long **)(uVar20 + (long)unaff_x23 * 8) = plVar3;
        if (*plVar15 != 0) {
          ppppppppppplVar21 = *(long ************)(*plVar15 + 8);
          if (((ulong)((long)ppppppppppplVar23 + -1) & (ulong)ppppppppppplVar23) == 0) {
            ppppppppppplVar21 =
                 (long ***********)
                 ((ulong)ppppppppppplVar21 & (ulong)((long)ppppppppppplVar23 + -1));
          }
          else if (ppppppppppplVar23 <= ppppppppppplVar21) {
            uVar20 = 0;
            if (ppppppppppplVar23 != (long ***********)0x0) {
              uVar20 = (ulong)ppppppppppplVar21 / (ulong)ppppppppppplVar23;
            }
            ppppppppppplVar21 =
                 (long ***********)((long)ppppppppppplVar21 - uVar20 * (long)ppppppppppplVar23);
          }
          plVar28 = (long *)(*puVar2 + (long)ppppppppppplVar21 * 8);
          goto LAB_71035df7d4;
        }
      }
      else {
        *plVar15 = *plVar28;
LAB_71035df7d4:
        *plVar28 = (long)plVar15;
      }
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
      iVar10 = *(int *)(param_1 + 0x98);
    }
    else {
      pbVar33 = (byte *)((long)ppppppppppplVar23 + -1);
      if (((ulong)pbVar33 & (ulong)ppppppppppplVar23) == 0) {
        unaff_x23 = (long ************)((ulong)pbVar33 & (ulong)ppppppppppplVar35);
      }
      else {
        unaff_x23 = (long ************)ppppppppppplVar35;
        if (ppppppppppplVar23 <= ppppppppppplVar35) {
          uVar20 = 0;
          if (ppppppppppplVar23 != (long ***********)0x0) {
            uVar20 = (ulong)ppppppppppplVar35 / (ulong)ppppppppppplVar23;
          }
          unaff_x23 = (long ************)
                      ((long)ppppppppppplVar35 - uVar20 * (long)ppppppppppplVar23);
        }
      }
      plVar15 = *(long **)(*puVar2 + (long)unaff_x23 * 8);
      if (plVar15 == (long *)0x0) goto LAB_71035df680;
      if (((ulong)pbVar33 & (ulong)ppppppppppplVar23) == 0) {
        do {
          plVar15 = (long *)*plVar15;
          if ((plVar15 == (long *)0x0) ||
             ((long ***********)plVar15[1] != ppppppppppplVar35 &&
              (long ***********)((ulong)plVar15[1] & (ulong)pbVar33) != (long ***********)unaff_x23)
             ) goto LAB_71035df680;
        } while ((long ***********)plVar15[2] != ppppppppppplVar35);
      }
      else {
        do {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_71035df680;
          ppppppppppplVar21 = (long ***********)plVar15[1];
          if (ppppppppppplVar21 != ppppppppppplVar35) {
            if (ppppppppppplVar23 <= ppppppppppplVar21) {
              uVar20 = 0;
              if (ppppppppppplVar23 != (long ***********)0x0) {
                uVar20 = (ulong)ppppppppppplVar21 / (ulong)ppppppppppplVar23;
              }
              ppppppppppplVar21 =
                   (long ***********)((long)ppppppppppplVar21 - uVar20 * (long)ppppppppppplVar23);
            }
            if (ppppppppppplVar21 != (long ***********)unaff_x23) goto LAB_71035df680;
          }
        } while ((long ***********)plVar15[2] != ppppppppppplVar35);
      }
    }
    *(int *)(param_1 + 0x98) = iVar10 + 1;
  }
  plVar15 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar15 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ***********)((ulong)local_a8 & 0xffffffff00000000);
      local_90 = (long ***********)&SUB_00000020;
      param_3 = (long **********)&local_90;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar20 & 1) != 0) &&
         (plVar15 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar15 != (long *)0x0))
      goto LAB_71035df850;
    }
    plVar15 = (long *)0x0;
  }
LAB_71035df850:
  plVar15[1] = (long)ppppppppppplVar35;
  plVar15[2] = (long)ppppppppppplVar35;
  *(int *)(plVar15 + 3) = (int)uVar32;
  *plVar15 = 0;
  fVar37 = (float)(*(long *)(lVar22 + 0x28) + 1);
  ppppppppppplVar23 = *(long ************)(lVar22 + 0x18);
  if ((ppppppppppplVar23 == (long ***********)0x0) ||
     (*(float *)(lVar22 + 0x30) * (float)ppppppppppplVar23 < fVar37)) {
    if (ppppppppppplVar23 < (long ***********)0x3) {
      uVar20 = 1;
    }
    else {
      uVar20 = (ulong)(((ulong)((long)ppppppppppplVar23 + -1) & (ulong)ppppppppppplVar23) != 0);
    }
    uVar24 = (ulong)(fVar37 / *(float *)(lVar22 + 0x30));
    uVar20 = uVar20 | (long)ppppppppppplVar23 << 1;
    if (uVar24 <= uVar20) {
      uVar24 = uVar20;
    }
    FUN_71032a9680(puVar1,uVar24,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    ppppppppppplVar23 = *(long ************)(lVar22 + 0x18);
    ppppppppppplVar35 = (long ***********)plVar15[1];
  }
  pppppppppppplVar11 = local_b0;
  pbVar33 = (byte *)((long)ppppppppppplVar23 + -1);
  uVar20 = (ulong)pbVar33 & (ulong)ppppppppppplVar23;
  if (uVar20 == 0) {
    ppppppppppplVar21 = (long ***********)((ulong)pbVar33 & (ulong)ppppppppppplVar35);
  }
  else {
    ppppppppppplVar21 = ppppppppppplVar35;
    if (ppppppppppplVar23 <= ppppppppppplVar35) {
      uVar24 = 0;
      if (ppppppppppplVar23 != (long ***********)0x0) {
        uVar24 = (ulong)ppppppppppplVar35 / (ulong)ppppppppppplVar23;
      }
      ppppppppppplVar21 =
           (long ***********)((long)ppppppppppplVar35 - uVar24 * (long)ppppppppppplVar23);
    }
  }
  plVar28 = *(long **)(*puVar1 + (long)ppppppppppplVar21 * 8);
  if (plVar28 == (long *)0x0) {
    *plVar15 = *plVar4;
    *plVar4 = (long)plVar15;
    *(long **)(*puVar1 + (long)ppppppppppplVar21 * 8) = plVar4;
    if (*plVar15 != 0) {
      ppppppppppplVar35 = *(long ************)(*plVar15 + 8);
      if (uVar20 == 0) {
        ppppppppppplVar35 = (long ***********)((ulong)ppppppppppplVar35 & (ulong)pbVar33);
      }
      else if (ppppppppppplVar23 <= ppppppppppplVar35) {
        uVar20 = 0;
        if (ppppppppppplVar23 != (long ***********)0x0) {
          uVar20 = (ulong)ppppppppppplVar35 / (ulong)ppppppppppplVar23;
        }
        ppppppppppplVar35 =
             (long ***********)((long)ppppppppppplVar35 - uVar20 * (long)ppppppppppplVar23);
      }
      *(long **)(*puVar1 + (long)ppppppppppplVar35 * 8) = plVar15;
    }
  }
  else {
    bVar9 = false;
    if (uVar20 == 0) {
      do {
        bVar8 = bVar9;
        plVar29 = plVar28;
        plVar28 = (long *)*plVar29;
        if ((plVar28 == (long *)0x0) ||
           ((long ***********)((ulong)plVar28[1] & (ulong)pbVar33) != ppppppppppplVar21)) break;
        bVar9 = bVar8;
      } while ((((long ***********)plVar28[1] == ppppppppppplVar35) &&
               (bVar9 = (bool)(bVar8 | plVar28[2] == plVar15[2]), plVar28[2] == plVar15[2])) ||
              (!bVar8));
    }
    else {
      while (bVar8 = bVar9, plVar29 = plVar28, plVar28 = (long *)*plVar29, plVar28 != (long *)0x0) {
        ppppppppppplVar30 = (long ***********)plVar28[1];
        ppppppppppplVar26 = ppppppppppplVar30;
        if (ppppppppppplVar23 <= ppppppppppplVar30) {
          uVar24 = 0;
          if (ppppppppppplVar23 != (long ***********)0x0) {
            uVar24 = (ulong)ppppppppppplVar30 / (ulong)ppppppppppplVar23;
          }
          ppppppppppplVar26 =
               (long ***********)((long)ppppppppppplVar30 - uVar24 * (long)ppppppppppplVar23);
        }
        if ((ppppppppppplVar26 != ppppppppppplVar21) ||
           (((bVar9 = bVar8, ppppppppppplVar30 != ppppppppppplVar35 ||
             (bVar9 = (bool)(bVar8 | plVar28[2] == plVar15[2]), plVar28[2] != plVar15[2])) &&
            (bVar8)))) break;
      }
    }
    *plVar15 = *plVar29;
    *plVar29 = (long)plVar15;
    if (*plVar15 != 0) {
      ppppppppppplVar35 = *(long ************)(*plVar15 + 8);
      if (uVar20 == 0) {
        ppppppppppplVar35 = (long ***********)((ulong)ppppppppppplVar35 & (ulong)pbVar33);
      }
      else if (ppppppppppplVar23 <= ppppppppppplVar35) {
        uVar20 = 0;
        if (ppppppppppplVar23 != (long ***********)0x0) {
          uVar20 = (ulong)ppppppppppplVar35 / (ulong)ppppppppppplVar23;
        }
        ppppppppppplVar35 =
             (long ***********)((long)ppppppppppplVar35 - uVar20 * (long)ppppppppppplVar23);
      }
      if (ppppppppppplVar35 != ppppppppppplVar21) {
        *(long **)(*puVar1 + (long)ppppppppppplVar35 * 8) = plVar15;
      }
    }
  }
  *(long *)(lVar22 + 0x28) = *(long *)(lVar22 + 0x28) + 1;
  if (((ulong)local_c0 & 1) != 0) {
    nu::VirtualFreeHook(local_b0);
    FUN_710392eb40((ulong)pppppppppppplVar11);
  }
  lVar13 = *param_2;
  uVar32 = (ulong)((int)uVar32 + 1);
  if ((ulong)(param_2[1] - lVar13 >> 5) <= uVar32) {
    return;
  }
  goto LAB_71035de820;
}

