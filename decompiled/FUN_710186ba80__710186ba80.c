// addr:      710186ba80
// offset:    0x186ba80
// name:      FUN_710186ba80
// mangled:   
// signature: undefined __cdecl FUN_710186ba80(long param_1)


void FUN_710186ba80(long param_1)

{
  long lVar1;
  char *pcVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  void *__src;
  int iVar7;
  undefined8 uVar8;
  char *__dest;
  ulong uVar9;
  long ****__dest_00;
  ulong uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar17;
  long ***ppplVar18;
  long lVar19;
  long ****pppplVar20;
  size_t __n;
  ulong uVar21;
  long ****local_b0;
  long ****local_a8;
  long ****local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  void *local_78;
  void *local_70;
  long ***local_60;
  undefined4 local_54;
  
  ppppplVar13 = &local_b0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    lVar19 = *(long *)(DAT_710532f820 + 8);
    uVar8 = FUN_7101eefe30(*(long *)(*(long *)(lVar19 + 0x110) + 0x80));
    if ((*(int *)(lVar19 + 0xf8) != 0 || (((uint)uVar8 ^ 0xffffffff) & 1) != 0) ||
        *(char *)(lVar19 + 0x142) != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x174) < 1) {
      return;
    }
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + -1;
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar5 = DAT_71053050f4 == '\0' && (DAT_71053050f0 & 0x7f000000) != 0x7000000;
  pppplVar12 = (long ****)(ulong)bVar5;
  ppppbVar14 = (byte ****)&DAT_710530559c;
  pppplVar15 = (long ****)&DAT_71053055c4;
  ppppbVar16 = (byte ****)&DAT_71053055d4;
  FUN_7101c04250((undefined4 *)&local_98,1,bVar5,(undefined1 *)&DAT_710530559c,&DAT_71053055c4,
                 0x71053055d4);
  FUN_7101c046c0((long *)&local_78,(int *)&local_98,(undefined **)pppplVar12,ppppbVar14,pppplVar15,
                 ppppbVar16,in_x6,in_x7);
  __src = local_78;
  local_98 = (char *)0x0;
  local_90 = (char *)0x0;
  local_88 = (char *)0x0;
  pppplVar11 = (long ****)((long)local_70 - (long)local_78);
  if (pppplVar11 == (long ****)0x0) {
    local_a0 = (long ****)0x0;
    local_b0 = (long ****)0x0;
    pppplVar11 = pppplVar12;
LAB_710186bd5c:
    local_a8 = local_a0;
    if ((char)DAT_71053055d4 == '\0' || DAT_71053055d4._1_1_ == '\0') goto LAB_710186bfa0;
  }
  else {
    if ((long)pppplVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (char *)FUN_710392e290(0x10,pppplVar11,pppplVar12,ppppbVar14,pppplVar15,ppppbVar16,
                                    in_x6,in_x7);
    if (__dest == (char *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
        local_b0 = pppplVar11;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
        if (((uVar9 & 1) != 0) &&
           (__dest = (char *)FUN_710392e290(0x10,pppplVar11,(long ****)ppppplVar13,ppppbVar14,
                                            pppplVar15,ppppbVar16,in_x6,in_x7),
           __dest != (char *)0x0)) goto LAB_710186bbd0;
      }
      __dest = (char *)0x0;
    }
LAB_710186bbd0:
    pcVar2 = __dest + (long)pppplVar11;
    local_98 = __dest;
    local_90 = __dest;
    local_88 = pcVar2;
    memcpy(__dest,__src,(size_t)pppplVar11);
    local_a8 = (long ****)0x0;
    local_a0 = (long ****)0x0;
    local_b0 = (long ****)0x0;
    pcVar17 = __dest;
    local_90 = pcVar2;
    if (*__dest != '\v') {
      lVar19 = 0;
      do {
        if (((long)local_70 + -1) - (long)__src == lVar19) goto LAB_710186bc74;
        lVar1 = lVar19 + 1;
        lVar6 = lVar19 + 1;
        lVar19 = lVar1;
      } while (__dest[lVar6] != '\v');
      pcVar17 = __dest + lVar1;
    }
    if ((pcVar17 != pcVar2) && (DAT_710530a96c._3_1_ != 'd')) {
      if (DAT_710530a980 == DAT_71053055a4._4_1_) {
LAB_710186bc74:
        if (__dest != pcVar2) goto LAB_710186bd2c;
      }
      else {
        pppplVar12 = (long ****)
                     FUN_710392e290(0x10,8,pppplVar11,ppppbVar14,pppplVar15,ppppbVar16,in_x6,in_x7);
        if (pppplVar12 == (long ****)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_54 = 0;
            local_60 = (long ***)&DAT_00000008;
            pppplVar11 = &local_60;
            uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
            if (((uVar9 & 1) != 0) &&
               (pppplVar12 = (long ****)
                             FUN_710392e290(0x10,8,pppplVar11,ppppbVar14,pppplVar15,ppppbVar16,in_x6
                                            ,in_x7), pppplVar12 != (long ****)0x0))
            goto LAB_710186bd08;
          }
          pppplVar12 = (long ****)0x0;
        }
LAB_710186bd08:
        local_a0 = pppplVar12 + 1;
        *pppplVar12 = (long ***)"pop_local_mel_rule_stg_select";
        __dest = local_98;
        local_b0 = pppplVar12;
        if (local_98 != local_90) goto LAB_710186bd2c;
      }
      goto LAB_710186bd5c;
    }
    if (__dest == pcVar2) goto LAB_710186bd5c;
LAB_710186bd2c:
    cVar4 = *__dest;
    while (cVar4 != '\x14') {
      __dest = __dest + 1;
      if (local_90 == __dest) goto LAB_710186bd5c;
      cVar4 = *__dest;
    }
    if (__dest == local_90) goto LAB_710186bd5c;
  }
  pppplVar12 = local_b0;
  local_a8 = local_a0;
  if (DAT_710530a987 == DAT_71053055ac._3_1_) goto LAB_710186bfa0;
  local_a8 = local_a0;
  if (local_b0 != local_a0) {
    pppplVar20 = (long ****)((long)local_a0 - (long)local_b0);
    uVar21 = (long)pppplVar20 >> 3;
    uVar9 = uVar21 + 1;
    local_a8 = local_a0;
    if (uVar9 >> 0x3d != 0) goto LAB_710186c0c0;
    if (uVar21 < 0xfffffffffffffff) {
      if (uVar9 <= (ulong)((long)pppplVar20 >> 2)) {
        uVar9 = (long)pppplVar20 >> 2;
      }
      if (uVar9 != 0) {
        if (uVar9 >> 0x3d != 0) goto LAB_710186bef0;
        goto LAB_710186bddc;
      }
LAB_710186be3c:
      __dest_00 = (long ****)0x0;
    }
    else {
      uVar9 = 0x1fffffffffffffff;
LAB_710186bddc:
      ppplVar18 = (long ***)(uVar9 * 8);
      if (ppplVar18 == (long ***)0x0) {
        ppplVar18 = (long ***)0x1;
      }
      __dest_00 = (long ****)
                  FUN_710392e290(0x10,ppplVar18,pppplVar11,ppppbVar14,pppplVar15,ppppbVar16,in_x6,
                                 in_x7);
      if (__dest_00 == (long ****)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          pppplVar11 = &local_60;
          local_60 = ppplVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar10 & 1) != 0) &&
             (__dest_00 = (long ****)
                          FUN_710392e290(0x10,ppplVar18,pppplVar11,ppppbVar14,pppplVar15,ppppbVar16,
                                         in_x6,in_x7), __dest_00 != (long ****)0x0))
          goto LAB_710186be40;
        }
        goto LAB_710186be3c;
      }
    }
LAB_710186be40:
    pppplVar3 = __dest_00 + uVar21;
    *pppplVar3 = (long ***)"pop_local_mel_rule_stg_punctuation";
    if (0 < (long)pppplVar20) {
      memcpy(__dest_00,pppplVar12,(size_t)pppplVar20);
      pppplVar11 = pppplVar20;
    }
    local_b0 = __dest_00;
    local_a8 = pppplVar3 + 1;
    local_a0 = __dest_00 + uVar9;
    if (pppplVar12 != (long ****)0x0) {
      FUN_710392eb40((ulong)pppplVar12);
    }
  }
  pppplVar12 = local_b0;
  if (local_a8 < local_a0) {
    *local_a8 = (long ***)"pop_local_mel_rule_stg_change";
    local_a8 = local_a8 + 1;
    goto LAB_710186bfa0;
  }
  __n = (long)local_a8 - (long)local_b0;
  uVar9 = ((long)__n >> 3) + 1;
  if (uVar9 >> 0x3d != 0) {
LAB_710186c0c0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)local_a0 - (long)local_b0 >> 3) < 0xfffffffffffffff) {
    uVar21 = (long)local_a0 - (long)local_b0 >> 2;
    if (uVar9 <= uVar21) {
      uVar9 = uVar21;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3d != 0) {
LAB_710186bef0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_710186bef8;
    }
LAB_710186bf58:
    pppplVar11 = (long ****)0x0;
  }
  else {
    uVar9 = 0x1fffffffffffffff;
LAB_710186bef8:
    ppplVar18 = (long ***)(uVar9 * 8);
    if (ppplVar18 == (long ***)0x0) {
      ppplVar18 = (long ***)0x1;
    }
    pppplVar11 = (long ****)
                 FUN_710392e290(0x10,ppplVar18,pppplVar11,ppppbVar14,pppplVar15,ppppbVar16,in_x6,
                                in_x7);
    if (pppplVar11 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        pppplVar11 = &local_60;
        local_60 = ppplVar18;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar21 & 1) != 0) &&
           (pppplVar11 = (long ****)
                         FUN_710392e290(0x10,ppplVar18,pppplVar11,ppppbVar14,pppplVar15,ppppbVar16,
                                        in_x6,in_x7), pppplVar11 != (long ****)0x0))
        goto LAB_710186bf5c;
      }
      goto LAB_710186bf58;
    }
  }
LAB_710186bf5c:
  pppplVar20 = pppplVar11 + ((long)__n >> 3);
  *pppplVar20 = (long ***)"pop_local_mel_rule_stg_change";
  if (0 < (long)__n) {
    memcpy(pppplVar11,pppplVar12,__n);
  }
  local_b0 = pppplVar11;
  local_a8 = pppplVar20 + 1;
  local_a0 = pppplVar11 + uVar9;
  if (pppplVar12 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar12);
  }
LAB_710186bfa0:
  if (local_b0 == local_a8) {
    pppplVar11 = local_a8;
    pppplVar15 = local_a8;
    if (0 < *(int *)(param_1 + 0x174)) {
      *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + -1;
    }
  }
  else {
    FUN_71032f29a0(DAT_710532f820,0x58ffff1b7d4d3553,(long ****)&local_b0,ppppbVar14,pppplVar15,
                   ppppbVar16,in_x6,in_x7);
    pppplVar11 = local_b0;
    pppplVar15 = local_a8;
  }
  local_a8 = pppplVar11;
  if (local_a8 != (long ****)0x0) {
    FUN_710392eb40((ulong)local_a8);
    pppplVar15 = local_a8;
  }
  local_a8 = pppplVar15;
  if (local_98 != (char *)0x0) {
    local_90 = local_98;
    FUN_710392eb40((ulong)local_98);
  }
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    FUN_710392eb40((ulong)local_78);
  }
  return;
}

