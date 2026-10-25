// addr:      71033470f0
// offset:    0x33470f0
// name:      FUN_71033470f0
// mangled:   
// signature: undefined __cdecl FUN_71033470f0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71033470f0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long ***__src;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long ***__dest;
  char *pcVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  long lVar9;
  long ****pppplVar10;
  long lVar11;
  ulong uVar12;
  long ***ppplVar13;
  ulong uVar14;
  ulong uVar15;
  long **pplVar16;
  long lVar17;
  size_t __n;
  long ***local_180;
  long ***local_178;
  long ***local_170;
  long ***local_168;
  long ***local_160;
  long ***local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long ***local_68;
  undefined4 local_54;
  
  iVar3 = nn::err::ErrorResultVariant::GetState();
  if ((iVar3 == 0) && (*(int *)(param_1 + 0xc4) == 0)) {
    return;
  }
  lVar17 = *(long *)(DAT_710532f828 + 8);
  uVar5 = FUN_7101eefe30(*(long *)(*(long *)(lVar17 + 0x110) + 0x80));
  lVar1 = DAT_710532f828;
  if ((*(int *)(lVar17 + 0xf8) != 0 || (((uint)uVar5 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar17 + 0x142) != '\0') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xd8)) {
  case 1:
    iVar3 = nn::err::ErrorResultVariant::GetState();
    if (iVar3 == 1) {
      iVar3 = nn::err::ErrorResultVariant::GetState();
      if (iVar3 == 1) {
        uVar4 = nn::err::ErrorResultVariant::operator_cast_to_Result
                          ((ErrorResultVariant *)(param_1 + 0xcc));
        nn::err::ShowError(uVar4);
      }
      else {
        nn::err::ShowError(0);
      }
    }
    else {
      nn::err::ShowError(*(undefined8 *)(param_1 + 0xc0));
    }
    goto LAB_7103347410;
  default:
    uVar15 = 0x5ef09280;
    goto LAB_7103347390;
  case 6:
    uVar15 = 0xa5e5fbda;
    goto LAB_71033473cc;
  case 7:
    uVar15 = 0xff1cb05d3dad;
    break;
  case 8:
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    pplVar16 = (long **)(long)DAT_7105308760._4_4_;
    local_168 = (long ***)
                FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (local_168 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_180 = (long ***)((ulong)local_180 & 0xffffffff00000000);
        local_168 = (long ***)&DAT_00000010;
        pppplVar8 = &local_168;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_180);
        if (((uVar15 & 1) != 0) &&
           (local_168 = (long ***)
                        FUN_710392e290(0x10,0x10,pppplVar8,param_4,param_5,param_6,param_7,param_8),
           local_168 != (long ***)0x0)) goto LAB_710334725c;
      }
      local_168 = (long ***)0x0;
    }
LAB_710334725c:
    local_160 = local_168 + 2;
    *local_168 = pplVar16;
    local_168[1] = pplVar16;
    local_158 = local_160;
    FUN_71032f29a0(lVar1,0x58ffff1709d2d97b,&local_168,param_4,param_5,param_6,param_7,param_8);
    if (local_168 != (long ***)0x0) {
      local_160 = local_168;
      FUN_710392eb40((ulong)local_168);
    }
    goto LAB_7103347410;
  case 9:
    uVar15 = 0x3d0764a0;
    goto LAB_7103347380;
  case 10:
    uVar15 = 0xff21f51558dc;
    break;
  case 0xb:
    uVar15 = 0xe9803a8c;
    goto LAB_7103347380;
  case 0xe:
    uVar15 = 0x89c07e31;
LAB_7103347390:
    uVar15 = uVar15 | 0xff1400000000;
    break;
  case 0xf:
    uVar15 = 0x78638591;
    goto LAB_7103347380;
  case 0x10:
    uVar15 = 0x3e5b72d4;
    goto LAB_71033472e0;
  case 0x11:
    uVar15 = 0xef4df9a2;
LAB_71033472e0:
    uVar15 = uVar15 | 0xff1f00000000;
    break;
  case 0x12:
    uVar15 = 0xd95c96f0;
    goto LAB_71033472b4;
  case 0x13:
    uVar15 = 0xdc0322c0;
LAB_71033472b4:
    uVar15 = uVar15 | 0xff2000000000;
    break;
  case 0x14:
    uVar15 = 0x6ec9355f;
    goto LAB_7103347360;
  case 0x16:
    uVar15 = 0xff2be819618d;
    break;
  case 0x17:
    uVar15 = 0xff27333788f9;
    break;
  case 0x18:
    iVar3 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_168);
    if (iVar3 == 0) {
      lVar17 = FUN_7101705d60(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
      uVar12 = (lVar17 - (long)local_168) * 1000000000;
      uVar15 = ((long)uVar12 >> 0x20) * 0x48f948e3 + ((uVar12 & 0xfffffe00) * 0x48f948e3 >> 0x20);
      pppplVar8 = (long ****)
                  ((((long)uVar12 >> 0x20) * 0x683fff6f + ((long)uVar15 >> 0x20) +
                    ((long)((uVar12 & 0xfffffe00) * 0x683fff6f + (uVar15 & 0xffffffff)) >> 0x20) >>
                   0x2d) - ((long)uVar12 >> 0x3f));
      uVar12 = uVar12 + (long)pppplVar8 * -86400000000000;
      uVar15 = ((long)uVar12 >> 0x20) * 0xed75ed55 + ((uVar12 & 0xfffffe00) * 0xed75ed55 >> 0x20);
      pppplVar10 = (long ****)
                   (((long)(uVar12 + ((long)uVar12 >> 0x20) * -0x63a000da + ((long)uVar15 >> 0x20) +
                           ((long)((uVar12 & 0xfffffe00) * -0x63a000da + (uVar15 & 0xffffffff)) >>
                           0x20)) >> 0x29) - ((long)uVar12 >> 0x3f));
      uVar12 = uVar12 + (long)pppplVar10 * -3600000000000;
      uVar14 = uVar12 & 0xfffffe00;
      lVar17 = (long)uVar12 >> 0x20;
      lVar11 = -((long)uVar12 >> 0x3f);
      uVar15 = lVar17 * 0x68fd3d1d + (uVar14 * 0x68fd3d1d >> 0x20);
      lVar9 = lVar11 + ((long)(lVar17 * 0x12533fe + ((long)uVar15 >> 0x20) +
                              (uVar14 * 0x12533fe + (uVar15 & 0xffffffff) >> 0x20)) >> 0x1c);
      uVar15 = lVar17 * 0x26d694b3 + (uVar14 * 0x26d694b3 >> 0x20);
      lVar17 = (long)(lVar17 * 0x112e0be8 + ((long)uVar15 >> 0x20) +
                     (uVar14 * 0x112e0be8 + (uVar15 & 0xffffffff) >> 0x20)) >> 0x1a;
      if (lVar17 != (long)uVar12 >> 0x3f && -1 < lVar11 + lVar17) {
        lVar9 = lVar9 + 1;
      }
      if (lVar9 == 0x3c) {
        pppplVar10 = (long ****)((long)pppplVar10 + 1);
        lVar9 = 0;
      }
      if (pppplVar10 == (long ****)0x0 && lVar9 == 0) {
        lVar9 = 1;
      }
    }
    else {
      lVar9 = 0;
      pppplVar10 = (long ****)0x0;
      pppplVar8 = (long ****)0x0;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_180 = (long ***)0x0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = (long ***)0x0;
    uStack_150 = 0;
    local_168 = (long ***)0x0;
    local_160 = (long ***)0x0;
    local_178 = (long ***)0x0;
    local_170 = (long ***)0x0;
    if ((long)pppplVar8 < 1) {
      pcVar6 = "pop_online_penalty_time_hour";
      ppppbVar7 = (byte ****)0x2;
      FUN_71037ab600(&local_168,0x80,(byte *)"pop_online_penalty_time_hour",2);
    }
    else {
      pcVar6 = "pop_online_penalty_time_day";
      ppppbVar7 = (byte ****)0x1;
      FUN_71037ab600(&local_168,0x80,(byte *)"pop_online_penalty_time_day",1);
      pppplVar10 = pppplVar8;
    }
    __src = local_180;
    if (local_178 < local_170) {
      *local_178 = (long **)&local_168;
      local_178 = local_178 + 1;
    }
    else {
      __n = (long)local_178 - (long)local_180;
      uVar15 = ((long)__n >> 3) + 1;
      if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_170 - (long)local_180 >> 3) < 0xfffffffffffffff) {
        uVar12 = (long)local_170 - (long)local_180 >> 2;
        if (uVar15 <= uVar12) {
          uVar15 = uVar12;
        }
        if (uVar15 != 0) {
          if (uVar15 >> 0x3d != 0) goto LAB_71033476a0;
          goto LAB_71033476b4;
        }
LAB_7103347714:
        __dest = (long ***)0x0;
      }
      else {
        uVar15 = 0x1fffffffffffffff;
LAB_71033476b4:
        ppplVar13 = (long ***)(uVar15 * 8);
        if (ppplVar13 == (long ***)0x0) {
          ppplVar13 = (long ***)0x1;
        }
        __dest = (long ***)
                 FUN_710392e290(0x10,ppplVar13,(long ****)pcVar6,ppppbVar7,pppplVar10,lVar9,param_7,
                                param_8);
        if (__dest == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_54 = 0;
            pppplVar8 = &local_68;
            local_68 = ppplVar13;
            uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
            if (((uVar12 & 1) != 0) &&
               (__dest = (long ***)
                         FUN_710392e290(0x10,ppplVar13,pppplVar8,ppppbVar7,pppplVar10,lVar9,param_7,
                                        param_8), __dest != (long ***)0x0)) goto LAB_7103347718;
          }
          goto LAB_7103347714;
        }
      }
LAB_7103347718:
      ppplVar13 = __dest + ((long)__n >> 3);
      *ppplVar13 = (long **)&local_168;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      local_180 = __dest;
      local_178 = ppplVar13 + 1;
      local_170 = __dest + uVar15;
      if (__src != (long ***)0x0) {
        FUN_710392eb40((ulong)__src);
      }
    }
    FUN_71032f29a0(lVar1,0x58ffff1ed5975816,&local_180,ppppbVar7,pppplVar10,lVar9,param_7,param_8);
    if (local_180 != (long ***)0x0) {
      local_178 = local_180;
      FUN_710392eb40((ulong)local_180);
    }
    goto LAB_7103347410;
  case 0x1a:
    uVar15 = 0x143eb187;
LAB_7103347360:
    uVar15 = uVar15 | 0xff1b00000000;
    break;
  case 0x1b:
    uVar15 = 0x6a44c6bd;
    goto LAB_71033472c4;
  case 0x1c:
    uVar15 = 0xdc1805e3;
LAB_71033473cc:
    uVar15 = uVar15 | 0xff1e00000000;
    break;
  case 0x1d:
    uVar15 = 0x56e7e4bc;
LAB_71033472c4:
    uVar15 = uVar15 | 0xff2300000000;
    break;
  case 0x1e:
    uVar15 = 0xff2c23b7c8d7;
    break;
  case 0x1f:
    uVar15 = 0xff243fccb47b;
    break;
  case 0x20:
    uVar15 = 0xff284a4a63b1;
    break;
  case 0x21:
    uVar15 = 0xf6d1bb2e;
LAB_7103347380:
    uVar15 = uVar15 | 0xff2200000000;
  }
  bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),
                         uVar15 | 0x58ff000000000000);
  if (bVar2) {
    FUN_71032edf70(*(uint **)(lVar1 + 0x10),uVar15 | 0x58ff000000000000);
    FUN_71032f1bb0(*(long *)(lVar1 + 8),*(uint **)(lVar1 + 0x10),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else {
    *(undefined4 *)(*(long *)(lVar1 + 8) + 0x118) = 0;
  }
LAB_7103347410:
  if (*(uint *)(param_1 + 0xac) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xac) * 4 + 0x60) = 2;
    return;
  }
LAB_71033476a0:
                    /* WARNING: Subroutine does not return */
  abort();
}

