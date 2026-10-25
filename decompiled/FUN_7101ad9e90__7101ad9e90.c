// addr:      7101ad9e90
// offset:    0x1ad9e90
// name:      FUN_7101ad9e90
// mangled:   
// signature: undefined __cdecl FUN_7101ad9e90(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101adc338) */

void FUN_7101ad9e90(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long ***ppplVar21;
  long *******ppppppplVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **__dest;
  undefined1 *puVar25;
  void *pvVar26;
  undefined8 extraout_x1;
  undefined8 uVar27;
  long ****pppplVar28;
  long *********ppppppppplVar29;
  byte ****ppppbVar30;
  long ****pppplVar31;
  ulong uVar32;
  char *pcVar33;
  ushort *puVar34;
  long ********pppppppplVar35;
  ulong uVar36;
  undefined8 *puVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined **ppuVar40;
  undefined **ppuVar41;
  long lVar42;
  byte *pbVar43;
  ulong *puVar44;
  ushort *puVar45;
  ulong *puVar46;
  ulong *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  long *********ppppppppplVar50;
  undefined8 uVar51;
  ulong uVar52;
  undefined **__src;
  undefined8 *puVar53;
  void *pvVar54;
  undefined8 *puVar55;
  long lVar56;
  long lVar57;
  long *plVar58;
  size_t __n;
  undefined **local_228;
  undefined **local_220;
  undefined **local_218;
  undefined **local_210;
  undefined **local_208;
  undefined **local_200;
  undefined **local_1f8;
  undefined **local_1f0;
  undefined **local_1e8;
  undefined **local_1e0;
  undefined **local_1d8;
  undefined **local_1d0;
  char local_1c4 [4];
  undefined8 local_1c0;
  long ********local_1b8 [33];
  long ********local_b0;
  undefined8 local_a8;
  
  if (*(int *)(param_1 + 0x114) != 0) {
    uVar19 = FUN_710259d3a0(*(long *)(*DAT_7105329f98 + 0x20),1,(long *********)param_3,param_4,
                            param_5,param_6,param_7,param_8);
    if ((uVar19 & 1) == 0) {
      return;
    }
    uVar19 = FUN_710323cb80(**(long **)(param_1 + 0x130),extraout_x1,(long *********)param_3,param_4
                            ,param_5,param_6,param_7,param_8);
    if ((uVar19 & 1) == 0) {
      return;
    }
    FUN_7101adc840(param_1);
    if (*(int *)(param_1 + 0x10c) < 1) {
      return;
    }
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  *(undefined4 *)(param_1 + 0x150) = 1;
  lVar56 = DAT_710532f8e0;
  lVar57 = DAT_710532f730;
  uVar19 = DAT_7105308318;
  if (5 < DAT_7105308300) {
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x138);
    pppplVar31 = param_5;
    goto LAB_7101ada3a0;
  }
  pppplVar31 = (long ****)(param_1 + 0x150);
  switch(DAT_7105308300) {
  case 0:
    param_3 = (undefined **)(ulong)*(byte *)(param_1 + 0x1bc);
    ppplVar21 = DAT_7105308308;
    goto LAB_7101ada120;
  case 1:
    ppplVar21 = (long ***)
                FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
    param_3 = (undefined **)0x0;
LAB_7101ada120:
    param_4 = (byte ****)(param_1 + 0x138);
    FUN_710333dea0(lVar56,ppplVar21,(long ****)param_3,param_4,pppplVar31,param_6,param_7,param_8);
    break;
  case 2:
    lVar57 = *(long *)(DAT_710532f8e0 + 8);
    iVar17 = *(int *)(param_1 + 0x238);
    pppplVar31 = param_5;
    if ((undefined8 *)(lVar57 + 0x1d0) != (undefined8 *)(param_1 + 0x138)) {
      param_3 = *(undefined ***)(lVar57 + 0x1d8);
      FUN_710333c860((undefined8 *)(param_1 + 0x138),*(void **)(lVar57 + 0x1d0),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      pppplVar31 = param_5;
    }
    if (iVar17 == 2) {
      puVar53 = *(undefined8 **)(param_1 + 0x138);
      puVar37 = *(undefined8 **)(param_1 + 0x140);
      if (puVar53 != puVar37) {
        iVar17 = *(int *)((long)puVar53 + 0x14);
        while (iVar17 == 2) {
          puVar55 = puVar37;
          if (puVar37 == puVar53 + 6) goto LAB_7101adc310;
          iVar17 = *(int *)((long)puVar53 + 0x44);
          puVar53 = puVar53 + 6;
        }
      }
      puVar55 = puVar53;
      if ((puVar53 != puVar37) && (puVar39 = puVar53 + 6, puVar39 != puVar37)) {
        do {
          if (*(int *)((long)puVar39 + 0x14) == 2) {
            uVar27 = puVar39[1];
            *puVar53 = *puVar39;
            puVar53[1] = uVar27;
            uVar51 = puVar39[4];
            uVar27 = puVar39[2];
            uVar3 = puVar39[3];
            *(undefined2 *)(puVar53 + 5) = *(undefined2 *)(puVar39 + 5);
            puVar53[3] = uVar3;
            puVar53[4] = uVar51;
            puVar53[2] = uVar27;
            puVar53 = puVar53 + 6;
          }
          puVar39 = puVar39 + 6;
        } while (puVar37 != puVar39);
        goto LAB_7101ada358;
      }
LAB_7101adc310:
      if (puVar37 == puVar55) break;
    }
    else {
      if (iVar17 != 1) break;
      puVar53 = *(undefined8 **)(param_1 + 0x138);
      puVar37 = *(undefined8 **)(param_1 + 0x140);
      if (puVar53 != puVar37) {
        iVar17 = *(int *)((long)puVar53 + 0x14);
        while (iVar17 == 1) {
          puVar55 = puVar37;
          if (puVar37 == puVar53 + 6) goto LAB_7101adc310;
          iVar17 = *(int *)((long)puVar53 + 0x44);
          puVar53 = puVar53 + 6;
        }
      }
      puVar55 = puVar53;
      if ((puVar53 == puVar37) || (puVar39 = puVar53 + 6, puVar39 == puVar37)) goto LAB_7101adc310;
      do {
        if (*(int *)((long)puVar39 + 0x14) == 1) {
          uVar27 = puVar39[1];
          *puVar53 = *puVar39;
          puVar53[1] = uVar27;
          uVar51 = puVar39[4];
          uVar27 = puVar39[2];
          uVar3 = puVar39[3];
          *(undefined2 *)(puVar53 + 5) = *(undefined2 *)(puVar39 + 5);
          puVar53[3] = uVar3;
          puVar53[4] = uVar51;
          puVar53[2] = uVar27;
          puVar53 = puVar53 + 6;
        }
        puVar39 = puVar39 + 6;
      } while (puVar37 != puVar39);
LAB_7101ada358:
      puVar55 = puVar53;
      if (*(undefined8 **)(param_1 + 0x140) == puVar53) break;
    }
    param_3 = (undefined **)0x0;
    *(undefined8 **)(param_1 + 0x140) = puVar55;
    break;
  case 3:
    *(uint *)(param_1 + 0x150) = (uint)(*(uint *)(param_1 + 0x238) < 2);
    puVar53 = *(undefined8 **)(lVar56 + 8);
    switch(*(uint *)(param_1 + 0x238)) {
    case 0:
      puVar53 = puVar53 + 0x37;
      break;
    case 1:
      puVar53 = puVar53 + 0x2b;
      break;
    case 2:
      puVar53 = puVar53 + 0x28;
      break;
    case 3:
      puVar53 = puVar53 + 0x25;
    default:
    }
    pppplVar31 = param_5;
    if (puVar53 != (undefined8 *)(param_1 + 0x138)) {
      pvVar54 = (void *)*puVar53;
      param_3 = (undefined **)puVar53[1];
LAB_7101ada398:
      FUN_710333c860((undefined8 *)(param_1 + 0x138),pvVar54,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
      pppplVar31 = param_5;
    }
    break;
  case 4:
    lVar42 = *(long *)(DAT_710532f730 + 8);
    *(undefined4 *)(param_1 + 0x150) = 0;
    lVar42 = *(long *)(*(long *)(lVar42 + 0x178) + 8);
    uVar52 = FUN_71032b23e0(lVar42,0x14bebd6a0c);
    bVar13 = (uVar19 & 0xffffffffff) == 0;
    uVar36 = uVar19 & 0xff00000000000000;
    if (uVar36 != 0x6900000000000000 || bVar13) {
      if ((uVar52 & 0xff00000000000000) != 0x6900000000000000 || (uVar52 & 0xffffffffff) == 0)
      goto LAB_7101ada21c;
      uVar52 = FUN_71032b23e0(lVar42,0xf1f1e484c);
      uVar32 = uVar52 & 0xffffffffff;
      uVar52 = uVar52 & 0xff00000000000000;
LAB_7101ada1dc:
      if ((uVar32 != 0 && uVar52 == 0x6900000000000000) ==
          (uVar36 == 0x6900000000000000 && (uVar19 & 0xffffffffff) != 0)) goto LAB_7101ada21c;
    }
    else {
      if (((uVar52 & 0xff00000000000000) != 0x6900000000000000 || (uVar52 & 0xffffffffff) == 0) ||
          ((uVar52 ^ uVar19) & 0xffffffffff) != 0) {
        uVar20 = FUN_71032b23e0(lVar42,0xf1f1e484c);
        uVar52 = uVar20 & 0xff00000000000000;
        uVar32 = uVar20 & 0xffffffffff;
        if ((uVar52 != 0x6900000000000000) || (uVar32 == 0)) goto LAB_7101ada1dc;
        if (((uVar20 ^ uVar19) & 0xffffffffff) != 0) goto LAB_7101ada224;
      }
LAB_7101ada21c:
      *(undefined4 *)pppplVar31 = 1;
    }
LAB_7101ada224:
    puVar53 = *(undefined8 **)(lVar56 + 8);
    uVar52 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(lVar57 + 8) + 0x178) + 8),0x14bebd6a0c);
    if (uVar36 != 0x6900000000000000 || bVar13) {
      if (((uVar52 & 0xff00000000000000) != 0x6900000000000000) || ((uVar52 & 0xffffffffff) == 0))
      goto LAB_7101ada2bc;
LAB_7101ada280:
      iVar17 = FUN_710332a6b0(puVar53 + 0x1f,uVar19);
      if (-1 < iVar17) {
        if ((ulong)(long)iVar17 < (ulong)((long)(puVar53[0x20] - puVar53[0x1f]) >> 5)) {
          puVar53 = (undefined8 *)(puVar53[0x1f] + (long)iVar17 * 0x20 + 8);
        }
      }
    }
    else {
      if (((uVar52 & 0xff00000000000000) != 0x6900000000000000) ||
         (((uVar52 & 0xffffffffff) == 0 || (((uVar52 ^ uVar19) & 0xffffffffff) != 0))))
      goto LAB_7101ada280;
LAB_7101ada2bc:
      puVar53 = puVar53 + 0x34;
    }
    pppplVar31 = param_5;
    if (puVar53 != (undefined8 *)(param_1 + 0x138)) {
      pvVar54 = (void *)*puVar53;
      param_3 = (undefined **)puVar53[1];
      goto LAB_7101ada398;
    }
    break;
  case 5:
    lVar57 = *(long *)(DAT_710532f8e0 + 8);
    pppplVar31 = param_5;
    if (lVar57 + 0x170 != param_1 + 0x138) {
      pvVar54 = *(void **)(lVar57 + 0x170);
      param_3 = *(undefined ***)(lVar57 + 0x178);
      goto LAB_7101ada398;
    }
  }
LAB_7101ada3a0:
  if (*(long *)(param_1 + 0x138) != *(long *)(param_1 + 0x140)) {
    lVar57 = *(long *)(DAT_710532f730 + 8);
    iVar18 = (int)((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138)) >> 4) *
             -0x55555555;
    iVar17 = iVar18;
    if (0x1d < iVar18) {
      iVar17 = 0x1e;
    }
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) goto LAB_7101adc838;
    FUN_7103776640(&local_b0,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                   (byte ****)"set_parts_scr_item_00",param_3,param_4,pppplVar31,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_1e0,(long)&local_b0,(long ****)"set_txt_title",param_3,param_4,pppplVar31,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_1f8,(long)&local_b0,(long ****)"set_txt_honbun",param_3,param_4,pppplVar31
                   ,param_6,param_7,param_8);
    if (0 < iVar18) {
      uVar16 = 0;
      do {
        lVar56 = *(long *)(lVar57 + 0x1b8);
        uVar19 = FUN_71032b70b0(lVar56,uVar16);
        uVar19 = FUN_71032b6c10(lVar56,uVar19);
        if ((int)uVar19 == -1) {
          local_1b8[0] = (long ********)((ulong)local_1b8[0] & 0xffffffffffffff00);
          local_1c0 = (undefined **)0x0;
        }
        else {
          FUN_71003a4ca0((uint *)&local_1c0,"tip_title_%04d",uVar19 & 0xffffffff,param_3,param_4,
                         pppplVar31,param_6,param_7,param_8);
        }
        uVar27 = 0;
        FUN_710377a750((long)&local_1e0,(byte *)local_1b8,0,param_4,pppplVar31,param_6,param_7,
                       param_8);
        lVar56 = *(long *)(lVar57 + 0x1b8);
        uVar19 = FUN_71032b70b0(lVar56,uVar16);
        uVar19 = FUN_71032b6c10(lVar56,uVar19);
        if ((int)uVar19 == -1) {
          local_1b8[0] = (long ********)((ulong)local_1b8[0] & 0xffffffffffffff00);
          local_1c0 = (undefined **)0x0;
        }
        else {
          FUN_71003a4ca0((uint *)&local_1c0,"tip_text_%04d",uVar19 & 0xffffffff,uVar27,param_4,
                         pppplVar31,param_6,param_7,param_8);
        }
        param_3 = (undefined **)0x0;
        FUN_710377a750((long)&local_1f8,(byte *)local_1b8,0,param_4,pppplVar31,param_6,param_7,
                       param_8);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar17);
    }
    ppuVar40 = local_1f0;
    local_1f8 = &PTR_FUN_710523d9a8;
    local_1f0 = (undefined **)0x0;
    if (ppuVar40 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar40);
    }
    ppuVar40 = local_1d8;
    local_1e0 = &PTR_FUN_710523d9a8;
    local_1d8 = (undefined **)0x0;
    if (ppuVar40 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar40);
    }
    pppppppplVar35 = local_a8;
    local_b0 = (long ********)&PTR_FUN_710523d988;
    local_a8 = (long ********)0x0;
    if (pppppppplVar35 != (long ********)0x0) {
      ppppppplVar22 = pppppppplVar35[3];
      pppppppplVar35[2] = (long *******)&PTR_FUN_710523d9a8;
      pppppppplVar35[3] = (long *******)0x0;
      if (ppppppplVar22 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar22);
      }
      FUN_710392eb40((ulong)pppppppplVar35);
    }
  }
  FUN_7101adc840(param_1);
  local_1d8 = (undefined **)0x0;
  local_1d0 = (undefined **)0x0;
  local_1e8 = (undefined **)0x0;
  local_1e0 = (undefined **)0x0;
  local_1f8 = (undefined **)0x0;
  local_1f0 = (undefined **)0x0;
  local_208 = (undefined **)0x0;
  local_200 = (undefined **)0x0;
  local_218 = (undefined **)0x0;
  local_210 = (undefined **)0x0;
  local_228 = (undefined **)0x0;
  local_220 = (undefined **)0x0;
  lVar57 = *(long *)(param_1 + 0x138);
  lVar56 = *(long *)(param_1 + 0x140);
  if (lVar57 == lVar56) {
LAB_7101adb2b0:
    lVar57 = *(long *)(DAT_710532f730 + 8);
  }
  else {
    do {
      ppuVar40 = local_228;
      ppuVar23 = local_210;
      switch(*(undefined4 *)(lVar57 + 0x18)) {
      case 1:
        puVar25 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                 *(ulong *)(lVar57 + 0x20));
        bVar15 = FUN_7101addc30((ulong)puVar25);
        __src = local_1e0;
        if ((bVar15 & 1) != 0) {
          ppuVar24 = local_1e0;
          if (local_1e0 != local_1d8) {
            bVar13 = ((ulong)puVar25 & 0xffffffffff) != 0;
            bVar14 = ((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000;
            if (bVar14 && ((ulong)puVar25 & 0xffffffffff) != 0) {
              ppuVar41 = local_1e0;
              ppuVar24 = local_1d8;
              if (bVar14 && bVar13) {
                do {
                  puVar49 = *ppuVar41;
                  ppuVar24 = ppuVar41;
                  if ((((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000 &&
                      ((ulong)puVar49 & 0xffffffffff) != 0) &&
                      (((ulong)puVar25 ^ (ulong)puVar49) & 0xffffffffff) == 0) break;
                  ppuVar41 = ppuVar41 + 1;
                  ppuVar24 = local_1d8;
                } while (local_1d8 != ppuVar41);
              }
            }
            else {
              puVar49 = *local_1e0;
              if ((((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000) &&
                 (((ulong)puVar49 & 0xffffffffff) != 0)) {
                while ((ppuVar41 = ppuVar24 + 1, !bVar14 || !bVar13 ||
                       ((((ulong)puVar25 ^ (ulong)puVar49) & 0xffffffffff) != 0))) {
                  ppuVar24 = local_1d8;
                  if (((local_1d8 == ppuVar41) ||
                      (puVar49 = *ppuVar41, ppuVar24 = ppuVar41,
                      ((ulong)puVar49 & 0xff00000000000000) != 0xc100000000000000)) ||
                     (((ulong)puVar49 & 0xffffffffff) == 0)) break;
                }
              }
            }
          }
          if (local_1d8 == ppuVar24) {
            if (local_1d0 == local_1d8) {
              ppppppppplVar29 = (long *********)((long)ppuVar24 - (long)local_1e0);
              uVar19 = ((long)ppppppppplVar29 >> 3) + 1;
              if (uVar19 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_1d0 - (long)local_1e0 >> 3) < 0xfffffffffffffff) {
                uVar52 = (long)local_1d0 - (long)local_1e0 >> 2;
                if (uVar19 <= uVar52) {
                  uVar19 = uVar52;
                }
                if (uVar19 != 0) {
                  if (uVar19 >> 0x3d == 0) goto LAB_7101adaba4;
                  goto LAB_7101adc7fc;
                }
                uVar19 = 0;
                __dest = (undefined **)0x0;
              }
              else {
                uVar19 = 0x1fffffffffffffff;
LAB_7101adaba4:
                pppppppplVar35 = (long ********)(uVar19 * 8);
                if (pppppppplVar35 == (long ********)0x0) {
                  pppppppplVar35 = (long ********)0x1;
                }
                __dest = (undefined **)
                         FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,pppplVar31,
                                        param_6,param_7,param_8);
                if (__dest == (undefined **)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                    param_3 = (undefined **)&local_1c0;
                    local_1c0 = (undefined **)pppppppplVar35;
                    uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                    if (((uVar52 & 1) != 0) &&
                       (__dest = (undefined **)
                                 FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                pppplVar31,param_6,param_7,param_8),
                       __dest != (undefined **)0x0)) goto LAB_7101adac10;
                  }
                  __dest = (undefined **)0x0;
                }
              }
LAB_7101adac10:
              ppuVar11 = __dest + ((long)ppppppppplVar29 >> 3);
              *ppuVar11 = puVar25;
              ppuVar24 = local_1f8;
              ppuVar41 = local_1f0;
              ppuVar10 = local_1e8;
              ppuVar11 = ppuVar11 + 1;
              ppuVar12 = __dest + uVar19;
              if (0 < (long)ppppppppplVar29) {
                memcpy(__dest,__src,(size_t)ppppppppplVar29);
                param_3 = (undefined **)ppppppppplVar29;
                ppuVar24 = local_1f8;
                ppuVar41 = local_1f0;
                ppuVar10 = local_1e8;
              }
              goto LAB_7101adac70;
            }
            *local_1d8 = puVar25;
            local_1d8 = local_1d8 + 1;
          }
        }
        break;
      case 2:
        puVar49 = (undefined *)
                  FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                                 *(ulong *)(lVar57 + 0x20));
        __src = local_1f8;
        if (((ulong)puVar49 & 0xff00000000000000) == 0x6900000000000000 &&
            ((ulong)puVar49 & 0xffffffffff) != 0) {
          ppuVar24 = local_1f8;
          if (local_1f8 == local_1f0) {
LAB_7101ada860:
            if (ppuVar24 != local_1f0) break;
          }
          else {
            do {
              puVar48 = *ppuVar24;
              if ((((ulong)puVar48 & 0xff00000000000000) == 0x6900000000000000 &&
                  ((ulong)puVar48 & 0xffffffffff) != 0) &&
                  (((ulong)puVar49 ^ (ulong)puVar48) & 0xffffffffff) == 0) goto LAB_7101ada860;
              ppuVar24 = ppuVar24 + 1;
            } while (local_1f0 != ppuVar24);
          }
          if (local_1e8 == local_1f0) {
            ppppppppplVar29 = (long *********)((long)local_1f0 - (long)local_1f8);
            uVar52 = (long)ppppppppplVar29 >> 3;
            uVar19 = uVar52 + 1;
            if (uVar19 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar52 < 0xfffffffffffffff) {
              if (uVar19 <= (ulong)((long)ppppppppplVar29 >> 2)) {
                uVar19 = (long)ppppppppplVar29 >> 2;
              }
              if (uVar19 != 0) {
                if (uVar19 >> 0x3d == 0) goto LAB_7101adab04;
                goto LAB_7101adc7fc;
              }
              uVar19 = 0;
              ppuVar24 = (undefined **)0x0;
            }
            else {
              uVar19 = 0x1fffffffffffffff;
LAB_7101adab04:
              pppppppplVar35 = (long ********)(uVar19 * 8);
              if (pppppppplVar35 == (long ********)0x0) {
                pppppppplVar35 = (long ********)0x1;
              }
              ppuVar24 = (undefined **)
                         FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,pppplVar31,
                                        param_6,param_7,param_8);
              if (ppuVar24 == (undefined **)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_1c0;
                  local_1c0 = (undefined **)pppppppplVar35;
                  uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                  if (((uVar36 & 1) != 0) &&
                     (ppuVar24 = (undefined **)
                                 FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                pppplVar31,param_6,param_7,param_8),
                     ppuVar24 != (undefined **)0x0)) goto LAB_7101adab70;
                }
                ppuVar24 = (undefined **)0x0;
              }
            }
LAB_7101adab70:
            ppuVar41 = ppuVar24 + uVar52;
            *ppuVar41 = puVar49;
            ppuVar41 = ppuVar41 + 1;
            ppuVar10 = ppuVar24 + uVar19;
            __dest = local_1e0;
            ppuVar11 = local_1d8;
            ppuVar12 = local_1d0;
            if (0 < (long)ppppppppplVar29) {
              memcpy(ppuVar24,__src,(size_t)ppppppppplVar29);
              param_3 = (undefined **)ppppppppplVar29;
              __dest = local_1e0;
              ppuVar11 = local_1d8;
              ppuVar12 = local_1d0;
            }
LAB_7101adac70:
            local_1d0 = ppuVar12;
            local_1d8 = ppuVar11;
            local_1e0 = __dest;
            local_1e8 = ppuVar10;
            local_1f0 = ppuVar41;
            local_1f8 = ppuVar24;
            local_210 = ppuVar23;
            local_228 = ppuVar40;
            if (__src != (undefined **)0x0) {
              FUN_710392eb40((ulong)__src);
            }
          }
          else {
            *local_1f0 = puVar49;
            local_1f0 = local_1f0 + 1;
          }
        }
        break;
      case 4:
        puVar49 = (undefined *)
                  FUN_710327fb30(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268) + 8),
                                 *(ulong *)(lVar57 + 0x20));
        if (((ulong)puVar49 & 0xff00000000000000) == 0x1e00000000000000 &&
            ((ulong)puVar49 & 0xffffffffff) != 0) {
          if (local_210 == local_208) {
LAB_7101ada838:
            if (ppuVar23 != local_208) break;
          }
          else {
            do {
              puVar48 = *ppuVar23;
              if ((((ulong)puVar48 & 0xff00000000000000) == 0x1e00000000000000 &&
                  ((ulong)puVar48 & 0xffffffffff) != 0) &&
                  (((ulong)puVar49 ^ (ulong)puVar48) & 0xffffffffff) == 0) goto LAB_7101ada838;
              ppuVar23 = ppuVar23 + 1;
            } while (local_208 != ppuVar23);
          }
          if (local_200 == local_208) {
            ppppppppplVar29 = (long *********)((long)local_208 - (long)local_210);
            uVar52 = (long)ppppppppplVar29 >> 3;
            uVar19 = uVar52 + 1;
            if (uVar19 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar52 < 0xfffffffffffffff) {
              if (uVar19 <= (ulong)((long)ppppppppplVar29 >> 2)) {
                uVar19 = (long)ppppppppplVar29 >> 2;
              }
              if (uVar19 != 0) {
                if (uVar19 >> 0x3d == 0) goto LAB_7101adaa64;
                goto LAB_7101adc7fc;
              }
              uVar19 = 0;
              ppuVar23 = (undefined **)0x0;
            }
            else {
              uVar19 = 0x1fffffffffffffff;
LAB_7101adaa64:
              pppppppplVar35 = (long ********)(uVar19 * 8);
              if (pppppppplVar35 == (long ********)0x0) {
                pppppppplVar35 = (long ********)0x1;
              }
              ppuVar23 = (undefined **)
                         FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,pppplVar31,
                                        param_6,param_7,param_8);
              if (ppuVar23 == (undefined **)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_1c0;
                  local_1c0 = (undefined **)pppppppplVar35;
                  uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                  if (((uVar36 & 1) != 0) &&
                     (ppuVar23 = (undefined **)
                                 FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                pppplVar31,param_6,param_7,param_8),
                     ppuVar23 != (undefined **)0x0)) goto LAB_7101adaad0;
                }
                ppuVar23 = (undefined **)0x0;
              }
            }
LAB_7101adaad0:
            local_208 = ppuVar23 + uVar52 + 1;
            ppuVar23[uVar52] = puVar49;
            local_200 = ppuVar23 + uVar19;
            __src = local_210;
            ppuVar24 = local_1f8;
            ppuVar41 = local_1f0;
            ppuVar10 = local_1e8;
            __dest = local_1e0;
            ppuVar11 = local_1d8;
            ppuVar12 = local_1d0;
            if (0 < (long)ppppppppplVar29) {
              memcpy(ppuVar23,local_210,(size_t)ppppppppplVar29);
              param_3 = (undefined **)ppppppppplVar29;
              ppuVar24 = local_1f8;
              ppuVar41 = local_1f0;
              ppuVar10 = local_1e8;
              __dest = local_1e0;
              ppuVar11 = local_1d8;
              ppuVar12 = local_1d0;
            }
            goto LAB_7101adac70;
          }
          *local_208 = puVar49;
          local_208 = local_208 + 1;
        }
        break;
      case 5:
        lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar16 = FUN_71032a7800(lVar42,*(ulong *)(lVar57 + 0x20));
        if ((uVar16 < (uint)((int)((ulong)(*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20)) >> 6
                                  ) * -0x33333333)) &&
           (uVar8 = *(ushort *)(*(long *)(lVar42 + 0x20) + (ulong)uVar16 * 0x140), uVar8 != 0xffff))
        {
          if (local_228 != local_220) {
            uVar7 = *(ushort *)local_228;
            while (uVar7 != uVar8) {
              ppuVar40 = (undefined **)((long)ppuVar40 + 2);
              if (local_220 == ppuVar40) goto LAB_7101ada818;
              uVar7 = *(ushort *)ppuVar40;
            }
            if (ppuVar40 != local_220) break;
          }
LAB_7101ada818:
          if (local_218 == local_220) {
            ppppppppplVar29 = (long *********)((long)local_220 - (long)local_228);
            if ((long)ppppppppplVar29 < -2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = ((long)ppppppppplVar29 >> 1) + 1;
            uVar52 = (long)local_218 - (long)local_228;
            if (uVar19 <= uVar52) {
              uVar19 = uVar52;
            }
            if (0x3ffffffffffffffe < (ulong)((long)uVar52 >> 1)) {
              uVar19 = 0x7fffffffffffffff;
            }
            if (uVar19 == 0) {
              ppuVar40 = (undefined **)0x0;
            }
            else {
              if ((long)uVar19 < 0) goto LAB_7101adc7fc;
              pppppppplVar35 = (long ********)(uVar19 * 2);
              if (pppppppplVar35 == (long ********)0x0) {
                pppppppplVar35 = (long ********)0x1;
              }
              ppuVar40 = (undefined **)
                         FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,pppplVar31,
                                        param_6,param_7,param_8);
              if (ppuVar40 == (undefined **)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_1c0;
                  local_1c0 = (undefined **)pppppppplVar35;
                  uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                  if (((uVar52 & 1) != 0) &&
                     (ppuVar40 = (undefined **)
                                 FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                pppplVar31,param_6,param_7,param_8),
                     ppuVar40 != (undefined **)0x0)) goto LAB_7101adac44;
                }
                ppuVar40 = (undefined **)0x0;
              }
            }
LAB_7101adac44:
            puVar45 = (ushort *)((long)ppuVar40 + ((long)ppppppppplVar29 >> 1) * 2);
            local_220 = (undefined **)(puVar45 + 1);
            *puVar45 = uVar8;
            local_218 = (undefined **)((long)ppuVar40 + uVar19 * 2);
            __src = local_228;
            ppuVar24 = local_1f8;
            ppuVar41 = local_1f0;
            ppuVar10 = local_1e8;
            __dest = local_1e0;
            ppuVar11 = local_1d8;
            ppuVar12 = local_1d0;
            if (0 < (long)ppppppppplVar29) {
              memcpy(ppuVar40,local_228,(size_t)ppppppppplVar29);
              param_3 = (undefined **)ppppppppplVar29;
              ppuVar24 = local_1f8;
              ppuVar41 = local_1f0;
              ppuVar10 = local_1e8;
              __dest = local_1e0;
              ppuVar11 = local_1d8;
              ppuVar12 = local_1d0;
            }
            goto LAB_7101adac70;
          }
          *(ushort *)local_220 = uVar8;
          local_220 = (undefined **)((long)local_220 + 2);
        }
      }
      ppuVar40 = local_1d8;
      lVar57 = lVar57 + 0x30;
    } while (lVar57 != lVar56);
    lVar57 = *(long *)(DAT_710532f730 + 8);
    if (local_1e0 != local_1d8) {
      ppuVar23 = local_1e0;
      do {
        puVar44 = *(ulong **)(param_1 + 0x158);
        puVar4 = *(ulong **)(param_1 + 0x160);
        if (puVar44 == puVar4) {
LAB_7101adad34:
          lVar56 = *(long *)(lVar57 + 0x168);
          puVar49 = *ppuVar23;
          puVar25 = FUN_71032631a0(lVar56,0xfd5f7fa78);
          bVar13 = ((ulong)puVar49 & 0xffffffffff) != 0;
          bVar14 = ((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000;
          if (((bVar14 && bVar13) && (((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000))
             && (((ulong)puVar25 & 0xffffffffff) != 0)) {
            if ((((ulong)puVar25 ^ (ulong)puVar49) & 0xffffffffff) != 0) {
LAB_7101adadcc:
              puVar25 = FUN_71032631a0(lVar56,0x14ca4126b0);
              if ((((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000 &&
                  ((ulong)puVar25 & 0xffffffffff) != 0) && (bVar14 && bVar13)) {
                if ((((ulong)puVar49 ^ (ulong)puVar25) & 0xffffffffff) != 0) {
LAB_7101adae38:
                  plVar58 = *(long **)(param_1 + 0x130);
                  ppppppppplVar29 = (long *********)0x1;
                  local_1c0 = (undefined **)FUN_7103238a70((ulong)puVar49,0,1);
                  if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                    lVar56 = *plVar58;
                    ppppppppplVar29 = (long *********)(long)*(int *)(lVar56 + 0x70);
                    param_4 = (byte ****)(ulong)*(uint *)(lVar56 + 0x68);
                    FUN_710323c4e0(lVar56,&local_1c0,ppppppppplVar29,param_4,pppplVar31,param_6,
                                   param_7,param_8);
                  }
                  puVar44 = *(ulong **)(param_1 + 0x160);
                  if (puVar44 == *(ulong **)(param_1 + 0x168)) {
                    pvVar54 = *(void **)(param_1 + 0x158);
                    __n = (long)puVar44 - (long)pvVar54;
                    uVar19 = ((long)__n >> 3) + 1;
                    if (uVar19 >> 0x3d != 0) goto LAB_7101adc808;
                    lVar56 = (long)*(ulong **)(param_1 + 0x168) - (long)pvVar54;
                    if ((ulong)(lVar56 >> 3) < 0xfffffffffffffff) {
                      uVar52 = lVar56 >> 2;
                      if (uVar19 <= uVar52) {
                        uVar19 = uVar52;
                      }
                      if (uVar19 != 0) {
                        if (uVar19 >> 0x3d == 0) goto LAB_7101adaeec;
                        goto LAB_7101adc7fc;
                      }
LAB_7101adaf50:
                      pvVar26 = (void *)0x0;
                    }
                    else {
                      uVar19 = 0x1fffffffffffffff;
LAB_7101adaeec:
                      pppppppplVar35 = (long ********)(uVar19 * 8);
                      if (pppppppplVar35 == (long ********)0x0) {
                        pppppppplVar35 = (long ********)0x1;
                      }
                      pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,
                                                       (long ****)ppppppppplVar29,param_4,pppplVar31
                                                       ,param_6,param_7,param_8);
                      if (pvVar26 == (void *)0x0) {
                        if (DAT_7105332f00 != (long *)0x0) {
                          local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                          pppplVar28 = (long ****)&local_1c0;
                          local_1c0 = (undefined **)pppppppplVar35;
                          uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                          if (((uVar52 & 1) != 0) &&
                             (pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,pppplVar28,
                                                               param_4,pppplVar31,param_6,param_7,
                                                               param_8), pvVar26 != (void *)0x0))
                          goto LAB_7101adaf54;
                        }
                        goto LAB_7101adaf50;
                      }
                    }
LAB_7101adaf54:
                    puVar44 = (ulong *)((long)pvVar26 + ((long)__n >> 3) * 8);
                    *puVar44 = (ulong)*ppuVar23;
                    if (0 < (long)__n) {
                      memcpy(pvVar26,pvVar54,__n);
                    }
                    *(void **)(param_1 + 0x158) = pvVar26;
                    *(ulong **)(param_1 + 0x160) = puVar44 + 1;
                    *(void **)(param_1 + 0x168) = (void *)((long)pvVar26 + uVar19 * 8);
                    if (pvVar54 != (void *)0x0) {
                      FUN_710392eb40((ulong)pvVar54);
                    }
                  }
                  else {
                    *puVar44 = (ulong)*ppuVar23;
                    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 8;
                  }
                  iVar17 = 0;
                  do {
                    puVar49 = *ppuVar23;
                    bVar13 = FUN_7103265e70(lVar57 + 0x160,(ulong)puVar49);
                    if (bVar13) {
                      puVar25 = FUN_71032631a0(*(long *)(lVar57 + 0x168),0xfd03198f0);
                      if (((((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000) &&
                          (((ulong)puVar49 & 0xffffffffff) != 0)) &&
                         ((((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000 &&
                          (((ulong)puVar25 & 0xffffffffff) != 0)))) {
                        if ((((ulong)puVar25 ^ (ulong)puVar49) & 0xffffffffff) == 0)
                        goto LAB_7101adb0b8;
                      }
                      else if ((((ulong)puVar25 & 0xffffffffff) != 0 &&
                               ((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000) ==
                               (((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000 &&
                               ((ulong)puVar49 & 0xffffffffff) != 0)) goto LAB_7101adb0b8;
                      plVar58 = *(long **)(param_1 + 0x130);
                      local_1c0 = (undefined **)FUN_710323a000((ulong)puVar49,iVar17,0x24);
                      if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                        lVar56 = *plVar58;
                        FUN_710323c4e0(lVar56,&local_1c0,
                                       (long *********)(long)*(int *)(lVar56 + 0x70),
                                       (byte ****)(ulong)*(uint *)(lVar56 + 0x68),pppplVar31,param_6
                                       ,param_7,param_8);
                      }
                      plVar58 = *(long **)(param_1 + 0x130);
                      local_1c0 = (undefined **)FUN_710323a000((ulong)*ppuVar23,iVar17,0x24);
                      if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                        lVar56 = *plVar58;
                        FUN_710323c4e0(lVar56,&local_1c0,
                                       (long *********)(long)*(int *)(lVar56 + 0x70),
                                       (byte ****)(ulong)*(uint *)(lVar56 + 0x68),pppplVar31,param_6
                                       ,param_7,param_8);
                      }
                      plVar58 = *(long **)(param_1 + 0x130);
                      puVar49 = *ppuVar23;
                    }
                    else {
LAB_7101adb0b8:
                      plVar58 = *(long **)(param_1 + 0x130);
                    }
                    local_1c0 = (undefined **)FUN_710323a000((ulong)puVar49,iVar17,0x24);
                    if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                      lVar56 = *plVar58;
                      FUN_710323c4e0(lVar56,&local_1c0,(long *********)(long)*(int *)(lVar56 + 0x70)
                                     ,(byte ****)(ulong)*(uint *)(lVar56 + 0x68),pppplVar31,param_6,
                                     param_7,param_8);
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar17 != 5);
                  puVar49 = *ppuVar23;
                  plVar58 = *(long **)(param_1 + 0x130);
                  uVar19 = FUN_710323a000((ulong)puVar49,6,0x24);
                  if ((uVar19 & 0xffffffffff) == 0) {
LAB_7101adb180:
                    local_b0 = (long ********)CONCAT44(local_b0._4_4_,0xffffff);
                  }
                  else {
                    FUN_710353da30((uint *)&local_b0,uVar19);
                    uVar16 = (uint)local_b0;
                    if ((uint)local_b0 != 0xffffff) {
                      ppppppppplVar29 = (long *********)&DAT_00000024;
                      ppppbVar30 = (byte ****)0x0;
                      local_1c0 = (undefined **)FUN_710323a000((ulong)puVar49,6,0x24);
                      if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                        lVar56 = *plVar58;
                        ppppppppplVar29 = (long *********)(long)*(int *)(lVar56 + 0x70);
                        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar56 + 0x68);
                        FUN_710323c4e0(lVar56,&local_1c0,ppppppppplVar29,ppppbVar30,pppplVar31,
                                       param_6,param_7,param_8);
                      }
                      FUN_7103540b10(DAT_7105332f20,uVar16,ppppppppplVar29,ppppbVar30,pppplVar31,
                                     param_6,param_7,param_8);
                      goto LAB_7101adb180;
                    }
                  }
                  puVar49 = *ppuVar23;
                  plVar58 = *(long **)(param_1 + 0x130);
                  uVar19 = FUN_710323a000((ulong)puVar49,6,0x24);
                  if ((uVar19 & 0xffffffffff) == 0) {
LAB_7101adb20c:
                    local_b0 = (long ********)CONCAT44(local_b0._4_4_,0xffffff);
                  }
                  else {
                    FUN_710353da30((uint *)&local_b0,uVar19);
                    uVar16 = (uint)local_b0;
                    if ((uint)local_b0 != 0xffffff) {
                      ppppbVar30 = (byte ****)0x1;
                      ppppppppplVar29 = (long *********)&DAT_00000024;
                      local_1c0 = (undefined **)FUN_710323a000((ulong)puVar49,6,0x24);
                      if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                        lVar56 = *plVar58;
                        ppppppppplVar29 = (long *********)(long)*(int *)(lVar56 + 0x70);
                        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar56 + 0x68);
                        FUN_710323c4e0(lVar56,&local_1c0,ppppppppplVar29,ppppbVar30,pppplVar31,
                                       param_6,param_7,param_8);
                      }
                      FUN_7103540b10(DAT_7105332f20,uVar16,ppppppppplVar29,ppppbVar30,pppplVar31,
                                     param_6,param_7,param_8);
                      goto LAB_7101adb20c;
                    }
                  }
                  puVar49 = *ppuVar23;
                  plVar58 = *(long **)(param_1 + 0x130);
                  param_4 = (byte ****)0x2;
                  param_3 = (undefined **)&DAT_00000024;
                  uVar19 = FUN_710323a000((ulong)puVar49,6,0x24);
                  if ((uVar19 & 0xffffffffff) != 0) {
                    FUN_710353da30((uint *)&local_b0,uVar19);
                    uVar16 = (uint)local_b0;
                    if ((uint)local_b0 == 0xffffff) goto LAB_7101adb2a4;
                    param_4 = (byte ****)0x2;
                    param_3 = (undefined **)&DAT_00000024;
                    local_1c0 = (undefined **)FUN_710323a000((ulong)puVar49,6,0x24);
                    if (((ulong)local_1c0 & 0xffffffffff) != 0) {
                      lVar56 = *plVar58;
                      param_3 = (undefined **)(long)*(int *)(lVar56 + 0x70);
                      param_4 = (byte ****)(ulong)*(uint *)(lVar56 + 0x68);
                      FUN_710323c4e0(lVar56,&local_1c0,(long *********)param_3,param_4,pppplVar31,
                                     param_6,param_7,param_8);
                    }
                    FUN_7103540b10(DAT_7105332f20,uVar16,(long *********)param_3,param_4,pppplVar31,
                                   param_6,param_7,param_8);
                  }
                  local_b0 = (long ********)CONCAT44(local_b0._4_4_,0xffffff);
                }
              }
              else if ((bVar14 && bVar13) !=
                       (((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000 &&
                       ((ulong)puVar25 & 0xffffffffff) != 0)) goto LAB_7101adae38;
            }
          }
          else if ((((ulong)puVar25 & 0xffffffffff) != 0 &&
                   ((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000) !=
                   (((ulong)puVar49 & 0xff00000000000000) == 0xc100000000000000 &&
                   ((ulong)puVar49 & 0xffffffffff) != 0)) goto LAB_7101adadcc;
        }
        else {
          puVar49 = *ppuVar23;
          bVar13 = ((ulong)puVar49 & 0xffffffffff) == 0;
          bVar14 = ((ulong)puVar49 & 0xff00000000000000) != 0xc100000000000000;
          do {
            uVar19 = *puVar44;
            puVar46 = puVar44;
            if ((uVar19 & 0xff00000000000000) == 0xc100000000000000 && (uVar19 & 0xffffffffff) != 0)
            {
              if ((!bVar14 && !bVar13) && ((((ulong)puVar49 ^ uVar19) & 0xffffffffff) == 0)) break;
            }
            else if (bVar14 || bVar13) break;
            puVar44 = puVar44 + 1;
            puVar46 = puVar4;
          } while (puVar4 != puVar44);
          if (puVar46 == puVar4) goto LAB_7101adad34;
        }
LAB_7101adb2a4:
        ppuVar23 = ppuVar23 + 1;
      } while (ppuVar23 != ppuVar40);
      goto LAB_7101adb2b0;
    }
  }
  local_b0 = (long ********)0x0;
  lVar56 = *(long *)(lVar57 + 0x1b8);
  pcVar33 = *(char **)(*(long *)(lVar56 + 8) + 0x20);
  if ((*pcVar33 == '\f') && (iVar17 = *(int *)(pcVar33 + 1) + -1, 0 < *(int *)(pcVar33 + 1))) {
    lVar42 = *(long *)(*(long *)(lVar56 + 8) + 0x18);
    iVar18 = 0;
    pbVar43 = &DAT_7104742dbb;
    do {
      iVar2 = iVar17 + iVar18;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar33 + 5) + (long)iVar2 * 8);
      uVar19 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar19 == 0xad024c827) {
        uVar16 = puVar1[1];
        if ((int)uVar16 < 0) goto LAB_7101adb364;
        pbVar43 = (byte *)(pcVar33 + (int)uVar16);
        break;
      }
      iVar9 = iVar2 + -1;
      if (uVar19 < 0xad024c828) {
        iVar18 = iVar2 + 1;
        iVar9 = iVar17;
      }
      iVar17 = iVar9;
    } while (iVar18 <= iVar17);
  }
  else {
LAB_7101adb364:
    pbVar43 = &DAT_7104742dbb;
  }
  if ((*pbVar43 - 0xb < 2) && (*(int *)(pbVar43 + 1) != 0)) {
    uVar16 = 0;
    do {
      param_3 = (undefined **)&local_b0;
      param_4 = (byte ****)local_1c4;
      FUN_71032b9960(lVar56,uVar16,param_3,(byte *)param_4);
      ppuVar40 = local_1e0;
      if (local_1e0 == local_1d8) {
LAB_7101adb438:
        if (local_1d8 != ppuVar40) {
          plVar58 = *(long **)(param_1 + 0x130);
          param_3 = (undefined **)0x1;
          local_1c0 = (undefined **)
                      FUN_7103238a70((ulong)local_b0 & 0xffffffffff | 0xc1ffff0000000000,
                                     (long)local_1c4[0],1);
          if (((ulong)local_1c0 & 0xffffffffff) != 0) {
            lVar56 = *plVar58;
            param_3 = (undefined **)(long)*(int *)(lVar56 + 0x70);
            param_4 = (byte ****)(ulong)*(uint *)(lVar56 + 0x68);
            FUN_710323c4e0(lVar56,&local_1c0,(long *********)param_3,param_4,pppplVar31,param_6,
                           param_7,param_8);
          }
        }
      }
      else {
        if (((ulong)local_b0 & 0xffffffffff) == 0) {
          if (((ulong)*local_1e0 & 0xff00000000000000) == 0xc100000000000000 &&
              ((ulong)*local_1e0 & 0xffffffffff) != 0) {
            do {
              ppuVar40 = ppuVar40 + 1;
              if (local_1d8 == ppuVar40) goto LAB_7101adb488;
            } while ((((ulong)*ppuVar40 & 0xff00000000000000) == 0xc100000000000000) &&
                    (((ulong)*ppuVar40 & 0xffffffffff) != 0));
          }
          goto LAB_7101adb438;
        }
        do {
          uVar19 = (ulong)*ppuVar40 & 0xffffffffff;
          if ((((ulong)*ppuVar40 & 0xff00000000000000) == 0xc100000000000000 && uVar19 != 0) &&
              ((ulong)local_b0 & 0xffffffffff) == uVar19) goto LAB_7101adb438;
          ppuVar40 = ppuVar40 + 1;
        } while (local_1d8 != ppuVar40);
      }
LAB_7101adb488:
      lVar56 = *(long *)(lVar57 + 0x1b8);
      pcVar33 = *(char **)(*(long *)(lVar56 + 8) + 0x20);
      pbVar43 = &DAT_7104742dbb;
      if ((*pcVar33 == '\f') && (iVar17 = *(int *)(pcVar33 + 1) + -1, 0 < *(int *)(pcVar33 + 1))) {
        lVar42 = *(long *)(*(long *)(lVar56 + 8) + 0x18);
        iVar18 = 0;
        do {
          iVar2 = iVar17 + iVar18;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar33 + 5) + (long)iVar2 * 8
                           );
          uVar19 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar19 == 0xad024c827) {
            uVar38 = puVar1[1];
            if (-1 < (int)uVar38) {
              pbVar43 = (byte *)(pcVar33 + (int)uVar38);
            }
            break;
          }
          iVar9 = iVar2 + -1;
          if (uVar19 < 0xad024c828) {
            iVar18 = iVar2 + 1;
            iVar9 = iVar17;
          }
          iVar17 = iVar9;
        } while (iVar18 <= iVar17);
      }
    } while ((*pbVar43 - 0xb < 2) && (uVar16 = uVar16 + 1, uVar16 < *(uint *)(pbVar43 + 1)));
  }
  ppuVar40 = local_1f0;
  if (local_1f8 != local_1f0) {
    ppuVar23 = local_1f8;
    do {
      puVar44 = *(ulong **)(param_1 + 0x170);
      puVar4 = *(ulong **)(param_1 + 0x178);
      if (puVar44 == puVar4) {
LAB_7101adb5c8:
        plVar58 = *(long **)(param_1 + 0x130);
        local_1c0 = (undefined **)FUN_7103238c50((ulong)*ppuVar23,0xe);
        if (((ulong)local_1c0 & 0xffffffffff) != 0) {
          lVar57 = *plVar58;
          param_3 = (undefined **)(long)*(int *)(lVar57 + 0x70);
          param_4 = (byte ****)(ulong)*(uint *)(lVar57 + 0x68);
          FUN_710323c4e0(lVar57,&local_1c0,(long *********)param_3,param_4,pppplVar31,param_6,
                         param_7,param_8);
        }
        puVar44 = *(ulong **)(param_1 + 0x178);
        if (puVar44 == *(ulong **)(param_1 + 0x180)) {
          pvVar54 = *(void **)(param_1 + 0x170);
          ppppppppplVar29 = (long *********)((long)puVar44 - (long)pvVar54);
          uVar19 = ((long)ppppppppplVar29 >> 3) + 1;
          if (uVar19 >> 0x3d != 0) goto LAB_7101adc800;
          lVar57 = (long)*(ulong **)(param_1 + 0x180) - (long)pvVar54;
          if ((ulong)(lVar57 >> 3) < 0xfffffffffffffff) {
            uVar52 = lVar57 >> 2;
            if (uVar19 <= uVar52) {
              uVar19 = uVar52;
            }
            if (uVar19 != 0) {
              if (uVar19 >> 0x3d == 0) goto LAB_7101adb668;
              goto LAB_7101adc7fc;
            }
LAB_7101adb6c8:
            pvVar26 = (void *)0x0;
          }
          else {
            uVar19 = 0x1fffffffffffffff;
LAB_7101adb668:
            pppppppplVar35 = (long ********)(uVar19 * 8);
            if (pppppppplVar35 == (long ********)0x0) {
              pppppppplVar35 = (long ********)0x1;
            }
            pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                             pppplVar31,param_6,param_7,param_8);
            if (pvVar26 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                param_3 = (undefined **)&local_1c0;
                local_1c0 = (undefined **)pppppppplVar35;
                uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                if (((uVar52 & 1) != 0) &&
                   (pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                     pppplVar31,param_6,param_7,param_8),
                   pvVar26 != (void *)0x0)) goto LAB_7101adb6cc;
              }
              goto LAB_7101adb6c8;
            }
          }
LAB_7101adb6cc:
          puVar44 = (ulong *)((long)pvVar26 + ((long)ppppppppplVar29 >> 3) * 8);
          *puVar44 = (ulong)*ppuVar23;
          if (0 < (long)ppppppppplVar29) {
            memcpy(pvVar26,pvVar54,(size_t)ppppppppplVar29);
            param_3 = (undefined **)ppppppppplVar29;
          }
          *(void **)(param_1 + 0x170) = pvVar26;
          *(ulong **)(param_1 + 0x178) = puVar44 + 1;
          *(void **)(param_1 + 0x180) = (void *)((long)pvVar26 + uVar19 * 8);
          if (pvVar54 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar54);
          }
        }
        else {
          *puVar44 = (ulong)*ppuVar23;
          *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 8;
        }
      }
      else {
        puVar49 = *ppuVar23;
        bVar13 = ((ulong)puVar49 & 0xffffffffff) == 0;
        bVar14 = ((ulong)puVar49 & 0xff00000000000000) != 0x6900000000000000;
        do {
          uVar19 = *puVar44;
          puVar46 = puVar44;
          if ((uVar19 & 0xff00000000000000) == 0x6900000000000000 && (uVar19 & 0xffffffffff) != 0) {
            if ((!bVar14 && !bVar13) && ((((ulong)puVar49 ^ uVar19) & 0xffffffffff) == 0)) break;
          }
          else if (bVar14 || bVar13) break;
          puVar44 = puVar44 + 1;
          puVar46 = puVar4;
        } while (puVar4 != puVar44);
        if (puVar46 == puVar4) goto LAB_7101adb5c8;
      }
      ppuVar23 = ppuVar23 + 1;
    } while (ppuVar23 != ppuVar40);
  }
  if (local_210 != local_208) {
    ppuVar40 = local_210;
    do {
      puVar44 = *(ulong **)(param_1 + 0x188);
      puVar4 = *(ulong **)(param_1 + 400);
      if (puVar44 == puVar4) {
LAB_7101adb7d8:
        param_3 = (undefined **)*ppuVar40;
        if ((((ulong)param_3 & 0xffffffffff) == 0) ||
           (((ulong)param_3 & 0xff00000000000000) != 0x1e00000000000000)) {
          local_1c0 = (undefined **)0x0;
        }
        else {
          plVar58 = *(long **)(param_1 + 0x130);
          FUN_710327fc30((uint *)&local_b0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),
                         (ulong)param_3);
          FUN_7103239920((uint *)&local_1c0,0x15,0);
          param_3 = (undefined **)&local_a8;
          FUN_7103239d20((uint *)&local_1c0,"%s.bntx");
          if (local_1c0._4_4_ == 0) {
            uVar19 = 0;
          }
          else {
            uVar16 = 0xffffffff;
            ppppppppplVar29 = local_1b8;
            do {
              ppppppppplVar50 = (long *********)((long)ppppppppplVar29 + 1);
              bVar15 = *(byte *)ppppppppplVar29;
              uVar38 = bVar15 + 0x20;
              if (0x19 < bVar15 - 0x41) {
                uVar38 = (uint)bVar15;
              }
              uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
              ppppppppplVar29 = ppppppppplVar50;
            } while (ppppppppplVar50 < (long *********)((long)local_1b8 + (ulong)local_1c0._4_4_));
            uVar19 = (ulong)~uVar16;
          }
          local_1c0 = (undefined **)(uVar19 | ((long)(int)local_1c0._4_4_ & 0xffU) << 0x20);
          if ((long ********)local_1c0 != (long ********)0x0) {
            lVar57 = *plVar58;
            param_3 = (undefined **)(long)*(int *)(lVar57 + 0x70);
            param_4 = (byte ****)(ulong)*(uint *)(lVar57 + 0x68);
            FUN_710323c4e0(lVar57,&local_1c0,(long *********)param_3,param_4,pppplVar31,param_6,
                           param_7,param_8);
          }
        }
        puVar44 = *(ulong **)(param_1 + 400);
        if (puVar44 == *(ulong **)(param_1 + 0x198)) {
          pvVar54 = *(void **)(param_1 + 0x188);
          ppppppppplVar29 = (long *********)((long)puVar44 - (long)pvVar54);
          uVar19 = ((long)ppppppppplVar29 >> 3) + 1;
          if (uVar19 >> 0x3d != 0) {
LAB_7101adc808:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar57 = (long)*(ulong **)(param_1 + 0x198) - (long)pvVar54;
          if ((ulong)(lVar57 >> 3) < 0xfffffffffffffff) {
            uVar52 = lVar57 >> 2;
            if (uVar19 <= uVar52) {
              uVar19 = uVar52;
            }
            if (uVar19 != 0) {
              if (uVar19 >> 0x3d == 0) goto LAB_7101adb920;
              goto LAB_7101adc7fc;
            }
            pvVar26 = (void *)0x0;
          }
          else {
            uVar19 = 0x1fffffffffffffff;
LAB_7101adb920:
            pppppppplVar35 = (long ********)(uVar19 * 8);
            if (pppppppplVar35 == (long ********)0x0) {
              pppppppplVar35 = (long ********)0x1;
            }
            pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                             pppplVar31,param_6,param_7,param_8);
            if (pvVar26 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                param_3 = (undefined **)&local_1c0;
                local_1c0 = (undefined **)pppppppplVar35;
                uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                if (((uVar52 & 1) != 0) &&
                   (pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                     pppplVar31,param_6,param_7,param_8),
                   pvVar26 != (void *)0x0)) goto LAB_7101adb988;
              }
              pvVar26 = (void *)0x0;
            }
          }
LAB_7101adb988:
          puVar44 = (ulong *)((long)pvVar26 + ((long)ppppppppplVar29 >> 3) * 8);
          *puVar44 = (ulong)*ppuVar40;
          if (0 < (long)ppppppppplVar29) {
            memcpy(pvVar26,pvVar54,(size_t)ppppppppplVar29);
            param_3 = (undefined **)ppppppppplVar29;
          }
          *(void **)(param_1 + 0x188) = pvVar26;
          *(ulong **)(param_1 + 400) = puVar44 + 1;
          *(void **)(param_1 + 0x198) = (void *)((long)pvVar26 + uVar19 * 8);
          if (pvVar54 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar54);
          }
        }
        else {
          *puVar44 = (ulong)*ppuVar40;
          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 8;
        }
      }
      else {
        puVar49 = *ppuVar40;
        bVar13 = ((ulong)puVar49 & 0xffffffffff) == 0;
        bVar14 = ((ulong)puVar49 & 0xff00000000000000) != 0x1e00000000000000;
        do {
          uVar19 = *puVar44;
          puVar46 = puVar44;
          if ((uVar19 & 0xff00000000000000) == 0x1e00000000000000 && (uVar19 & 0xffffffffff) != 0) {
            if ((!bVar14 && !bVar13) && ((((ulong)puVar49 ^ uVar19) & 0xffffffffff) == 0)) break;
          }
          else if (bVar14 || bVar13) break;
          puVar44 = puVar44 + 1;
          puVar46 = puVar4;
        } while (puVar4 != puVar44);
        if (puVar46 == puVar4) goto LAB_7101adb7d8;
      }
      ppuVar40 = ppuVar40 + 1;
    } while (ppuVar40 != local_208);
  }
  if (local_228 != local_220) {
    ppuVar40 = local_228;
    do {
      puVar45 = *(ushort **)(param_1 + 0x1a0);
      puVar34 = *(ushort **)(param_1 + 0x1a8);
      if (puVar45 != puVar34) {
        param_3 = (undefined **)(ulong)*(ushort *)ppuVar40;
        uVar8 = *puVar45;
        while (*(ushort *)ppuVar40 != uVar8) {
          puVar45 = puVar45 + 1;
          if (puVar34 == puVar45) goto LAB_7101adba30;
          uVar8 = *puVar45;
        }
      }
      if (puVar45 == puVar34) {
        param_3 = (undefined **)(ulong)*(ushort *)ppuVar40;
LAB_7101adba30:
        if ((int)param_3 != 0xffff) {
          param_4 = (byte ****)0x1;
          FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,(ushort)param_3,(byte ****)0x1,
                         pppplVar31,param_6,param_7,param_8);
          puVar34 = *(ushort **)(param_1 + 0x1a8);
        }
        if (puVar34 == *(ushort **)(param_1 + 0x1b0)) {
          pvVar54 = *(void **)(param_1 + 0x1a0);
          ppppppppplVar29 = (long *********)((long)*(ushort **)(param_1 + 0x1b0) - (long)pvVar54);
          if ((long)ppppppppplVar29 < -2) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar19 = (long)ppppppppplVar29 >> 1;
          ppppppppplVar50 = (long *********)(uVar19 + 1);
          if ((long *********)(uVar19 + 1) <= ppppppppplVar29) {
            ppppppppplVar50 = ppppppppplVar29;
          }
          if (0x3ffffffffffffffe < uVar19) {
            ppppppppplVar50 = (long *********)0x7fffffffffffffff;
          }
          if (ppppppppplVar50 == (long *********)0x0) {
LAB_7101adbb18:
            pvVar26 = (void *)0x0;
          }
          else {
            if ((long)ppppppppplVar50 < 0) goto LAB_7101adc7fc;
            pppppppplVar35 = (long ********)((long)ppppppppplVar50 * 2);
            if (pppppppplVar35 == (long ********)0x0) {
              pppppppplVar35 = (long ********)0x1;
            }
            pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                             pppplVar31,param_6,param_7,param_8);
            if (pvVar26 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                param_3 = (undefined **)&local_1c0;
                local_1c0 = (undefined **)pppppppplVar35;
                uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                if (((uVar52 & 1) != 0) &&
                   (pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                     pppplVar31,param_6,param_7,param_8),
                   pvVar26 != (void *)0x0)) goto LAB_7101adbb1c;
              }
              goto LAB_7101adbb18;
            }
          }
LAB_7101adbb1c:
          puVar45 = (ushort *)((long)pvVar26 + uVar19 * 2);
          *puVar45 = *(ushort *)ppuVar40;
          if (0 < (long)ppppppppplVar29) {
            memcpy(pvVar26,pvVar54,(size_t)ppppppppplVar29);
            param_3 = (undefined **)ppppppppplVar29;
          }
          *(void **)(param_1 + 0x1a0) = pvVar26;
          *(ushort **)(param_1 + 0x1a8) = puVar45 + 1;
          *(void **)(param_1 + 0x1b0) = (void *)((long)pvVar26 + (long)ppppppppplVar50 * 2);
          if (pvVar54 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar54);
          }
        }
        else {
          *puVar34 = *(ushort *)ppuVar40;
          *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 2;
        }
      }
      ppuVar40 = (undefined **)((long)ppuVar40 + 2);
    } while (ppuVar40 != local_220);
  }
  if (local_228 != (undefined **)0x0) {
    FUN_710392eb40((ulong)local_228);
  }
  if (local_210 != (undefined **)0x0) {
    FUN_710392eb40((ulong)local_210);
  }
  if (local_1f8 != (undefined **)0x0) {
    local_1f0 = local_1f8;
    FUN_710392eb40((ulong)local_1f8);
  }
  if (local_1e0 != (undefined **)0x0) {
    local_1d8 = local_1e0;
    FUN_710392eb40((ulong)local_1e0);
  }
  if (*(int *)(param_1 + 0x1b8) == 0) {
    puVar44 = *(ulong **)(param_1 + 0x1c0);
    puVar4 = *(ulong **)(param_1 + 0x1c8);
    if (puVar44 != puVar4) {
      do {
        puVar46 = *(ulong **)(param_1 + 0x1d8);
        puVar5 = *(ulong **)(param_1 + 0x1e0);
        if (puVar46 == puVar5) {
LAB_7101adbc40:
          plVar58 = *(long **)(param_1 + 0x130);
          param_3 = (undefined **)0x2;
          local_1c0 = (undefined **)FUN_7103238a70(*puVar44,0,2);
          if (((ulong)local_1c0 & 0xffffffffff) != 0) {
            lVar57 = *plVar58;
            param_3 = (undefined **)(long)*(int *)(lVar57 + 0x70);
            param_4 = (byte ****)(ulong)*(uint *)(lVar57 + 0x68);
            FUN_710323c4e0(lVar57,&local_1c0,(long *********)param_3,param_4,pppplVar31,param_6,
                           param_7,param_8);
          }
          puVar46 = *(ulong **)(param_1 + 0x1e0);
          if (puVar46 == *(ulong **)(param_1 + 0x1e8)) {
            pvVar54 = *(void **)(param_1 + 0x1d8);
            ppppppppplVar29 = (long *********)((long)puVar46 - (long)pvVar54);
            uVar19 = ((long)ppppppppplVar29 >> 3) + 1;
            if (uVar19 >> 0x3d != 0) {
LAB_7101adc800:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar57 = (long)*(ulong **)(param_1 + 0x1e8) - (long)pvVar54;
            if ((ulong)(lVar57 >> 3) < 0xfffffffffffffff) {
              uVar52 = lVar57 >> 2;
              if (uVar19 <= uVar52) {
                uVar19 = uVar52;
              }
              if (uVar19 != 0) {
                if (uVar19 >> 0x3d != 0) {
LAB_7101adc7fc:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                goto LAB_7101adbce4;
              }
LAB_7101adbd44:
              pvVar26 = (void *)0x0;
            }
            else {
              uVar19 = 0x1fffffffffffffff;
LAB_7101adbce4:
              pppppppplVar35 = (long ********)(uVar19 * 8);
              if (pppppppplVar35 == (long ********)0x0) {
                pppppppplVar35 = (long ********)0x1;
              }
              pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                               pppplVar31,param_6,param_7,param_8);
              if (pvVar26 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_1c0;
                  local_1c0 = (undefined **)pppppppplVar35;
                  uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                  if (((uVar52 & 1) != 0) &&
                     (pvVar26 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,
                                                       param_4,pppplVar31,param_6,param_7,param_8),
                     pvVar26 != (void *)0x0)) goto LAB_7101adbd48;
                }
                goto LAB_7101adbd44;
              }
            }
LAB_7101adbd48:
            puVar46 = (ulong *)((long)pvVar26 + ((long)ppppppppplVar29 >> 3) * 8);
            *puVar46 = *puVar44;
            if (0 < (long)ppppppppplVar29) {
              memcpy(pvVar26,pvVar54,(size_t)ppppppppplVar29);
              param_3 = (undefined **)ppppppppplVar29;
            }
            *(void **)(param_1 + 0x1d8) = pvVar26;
            *(ulong **)(param_1 + 0x1e0) = puVar46 + 1;
            *(void **)(param_1 + 0x1e8) = (void *)((long)pvVar26 + uVar19 * 8);
            if (pvVar54 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar54);
            }
          }
          else {
            *puVar46 = *puVar44;
            *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 8;
          }
        }
        else {
          uVar19 = *puVar44;
          bVar13 = (uVar19 & 0xffffffffff) == 0;
          bVar14 = (uVar19 & 0xff00000000000000) != 0xc100000000000000;
          do {
            uVar52 = *puVar46;
            puVar47 = puVar46;
            if ((uVar52 & 0xff00000000000000) == 0xc100000000000000 && (uVar52 & 0xffffffffff) != 0)
            {
              if ((!bVar14 && !bVar13) && (((uVar19 ^ uVar52) & 0xffffffffff) == 0)) break;
            }
            else if (bVar14 || bVar13) break;
            puVar46 = puVar46 + 1;
            puVar47 = puVar5;
          } while (puVar5 != puVar46);
          if (puVar47 == puVar5) goto LAB_7101adbc40;
        }
        puVar44 = puVar44 + 1;
      } while (puVar44 != puVar4);
    }
  }
  iVar17 = *(int *)(param_1 + 0x238);
  uVar19 = (ulong)iVar17;
  if (iVar17 < 0) {
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101adc838:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar57 = **(long **)**(undefined8 **)(param_1 + 0x10) + 8;
  FUN_7103776910(&local_1e0,lVar57,(long ****)"set_rep_fighter_icon",param_3,param_4,pppplVar31,
                 param_6,param_7,param_8);
  switch(DAT_7105308300) {
  case 0:
    if ((ulong)(*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 3) <= uVar19)
    goto switchD_7101adbe04_caseD_1;
    uVar52 = *(ulong *)(*(long *)(param_1 + 0x1c0) + uVar19 * 8);
    uVar16 = 0x811c9dc5;
    if (((uVar52 & 0xff00000000000000) == 0xc100000000000000) && ((uVar52 & 0xffffffffff) != 0)) {
      lVar56 = *(long *)(DAT_710532f730 + 8);
      uVar38 = FUN_7103263540(*(long *)(lVar56 + 0x168),uVar52,0,param_4,pppplVar31,param_6,param_7,
                              param_8);
      FUN_7103262310((uint *)&local_1c0,*(long *)(lVar56 + 0x168),uVar52);
      param_3 = (undefined **)local_1b8;
      FUN_71003a4ca0((uint *)&local_b0,"nam_chr1_%02d_%s",(ulong)uVar38,param_3,param_4,pppplVar31,
                     param_6,param_7,param_8);
      for (uVar52 = 0; *(char *)((long)&local_a8 + uVar52) != '\0'; uVar52 = uVar52 + 2) {
        *(char *)(param_1 + uVar52 + 0x1f8) = *(char *)((long)&local_a8 + uVar52);
        if (0x3e < (int)uVar52 + 1U) {
          uVar52 = (ulong)((int)uVar52 + 1);
          break;
        }
        cVar6 = *(char *)((long)&local_a8 + uVar52 + 1);
        if (cVar6 == '\0') {
          uVar52 = uVar52 + 1;
          break;
        }
        *(char *)(param_1 + uVar52 + 0x1f9) = cVar6;
      }
      *(undefined1 *)(param_1 + 0x1f8 + (uVar52 & 0xffffffff)) = 0;
      uVar38 = (uint)*(byte *)(param_1 + 0x1f8);
      *(int *)(param_1 + 500) = (int)uVar52;
      if (*(byte *)(param_1 + 0x1f8) != 0) {
        pbVar43 = (byte *)(param_1 + 0x1f9);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      *(undefined4 *)(param_1 + 500) = 0;
    }
    *(uint *)(param_1 + 0x1f0) = uVar16;
    break;
  default:
switchD_7101adbe04_caseD_1:
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0x811c9dc5;
    break;
  case 2:
    if (iVar17 < 3) {
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar16 = 0x811c9dc5;
        if (iVar17 == 0) {
          *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
          *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
          *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
          *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
          *(undefined1 *)(param_1 + 0x214) = 0;
          *(undefined2 *)(param_1 + 0x212) = 0x3030;
          *(undefined4 *)(param_1 + 500) = 0x1c;
          uVar38 = 0x6d;
          pbVar43 = (byte *)(param_1 + 0x1f9);
          do {
            uVar16 = uVar16 * 0x89 ^ uVar38;
            uVar38 = (uint)*pbVar43;
            pbVar43 = pbVar43 + 1;
          } while (uVar38 != 0);
        }
        else if (iVar17 == 1) {
          *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
          *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
          *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
          *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
          *(undefined4 *)(param_1 + 0x212) = 0x72697073;
          *(undefined1 *)(param_1 + 0x21c) = 0;
          *(undefined2 *)(param_1 + 0x216) = 0x7469;
          *(undefined4 *)(param_1 + 0x218) = 0x30305f73;
          *(undefined4 *)(param_1 + 500) = 0x24;
          uVar38 = 0x6d;
          pbVar43 = (byte *)(param_1 + 0x1f9);
          do {
            uVar16 = uVar16 * 0x89 ^ uVar38;
            uVar38 = (uint)*pbVar43;
            pbVar43 = pbVar43 + 1;
          } while (uVar38 != 0);
        }
        else {
          if (iVar17 != 2) goto switchD_7101adbf24_default;
          *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
          *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
          *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
          *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
          *(undefined4 *)(param_1 + 0x212) = 0x72697073;
          *(undefined1 *)(param_1 + 0x21c) = 0;
          *(undefined2 *)(param_1 + 0x216) = 0x7469;
          *(undefined4 *)(param_1 + 0x218) = 0x31305f73;
          *(undefined4 *)(param_1 + 500) = 0x24;
          uVar38 = 0x6d;
          pbVar43 = (byte *)(param_1 + 0x1f9);
          do {
            uVar16 = uVar16 * 0x89 ^ uVar38;
            uVar38 = (uint)*pbVar43;
            pbVar43 = pbVar43 + 1;
          } while (uVar38 != 0);
        }
LAB_7101adc6ac:
        *(uint *)(param_1 + 0x1f0) = uVar16;
      }
      break;
    }
    goto LAB_7101adc6b8;
  case 3:
    if (3 < iVar17) goto LAB_7101adc6b8;
    if (*(long *)(param_1 + 0x40) != 0) {
      switch(iVar17) {
      case 0:
        uVar16 = 0x811c9dc5;
        *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
        *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
        *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
        *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
        *(undefined1 *)(param_1 + 0x214) = 0;
        *(undefined2 *)(param_1 + 0x212) = 0x3030;
        *(undefined4 *)(param_1 + 500) = 0x1c;
        uVar38 = 0x6d;
        pbVar43 = (byte *)(param_1 + 0x1f9);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
        break;
      case 1:
        uVar16 = 0x811c9dc5;
        *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
        *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
        *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
        *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
        *(undefined8 *)(param_1 + 0x212) = 0x31305f6d657469;
        *(undefined4 *)(param_1 + 500) = 0x21;
        uVar38 = 0x6d;
        pbVar43 = (byte *)(param_1 + 0x1f9);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
        break;
      case 2:
        uVar16 = 0x811c9dc5;
        *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
        *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
        *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
        *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
        *(undefined8 *)(param_1 + 0x212) = 0x32305f6d657469;
        *(undefined4 *)(param_1 + 500) = 0x21;
        uVar38 = 0x6d;
        pbVar43 = (byte *)(param_1 + 0x1f9);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
        break;
      case 3:
        uVar16 = 0x811c9dc5;
        *(undefined8 *)(param_1 + 0x1f8) = 0x6b616d735f756e6d;
        *(undefined8 *)(param_1 + 0x200) = 0x656764656c776f6e;
        *(undefined2 *)(param_1 + 0x208) = 0x6c5f;
        *(undefined8 *)(param_1 + 0x20a) = 0x5f7461635f747369;
        *(undefined8 *)(param_1 + 0x212) = 0x33305f6d657469;
        *(undefined4 *)(param_1 + 500) = 0x21;
        uVar38 = 0x6d;
        pbVar43 = (byte *)(param_1 + 0x1f9);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
        break;
      default:
switchD_7101adbf24_default:
        uVar16 = 0x811c9dc5;
        *(undefined1 *)(param_1 + 0x1f8) = 0;
        *(undefined4 *)(param_1 + 500) = 0;
      }
      goto LAB_7101adc6ac;
    }
    break;
  case 4:
    lVar56 = *(long *)(*(long *)(DAT_710532f8e0 + 8) + 0x200);
    uVar16 = 0x811c9dc5;
    if (((uVar19 < (ulong)(*(long *)(*(long *)(DAT_710532f8e0 + 8) + 0x208) - lVar56 >> 3)) &&
        (param_3 = *(undefined ***)(lVar56 + uVar19 * 8),
        ((ulong)param_3 & 0xff00000000000000) == 0x6900000000000000)) &&
       (((ulong)param_3 & 0xffffffffff) != 0)) {
      FUN_71032b1a60((uint *)&local_1c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),
                     (ulong)param_3);
      FUN_71003a4ca0((uint *)&local_b0,"nam_stg1_%s",local_1b8,param_3,param_4,pppplVar31,param_6,
                     param_7,param_8);
      for (uVar52 = 0; *(char *)((long)&local_a8 + uVar52) != '\0'; uVar52 = uVar52 + 2) {
        *(char *)(param_1 + uVar52 + 0x1f8) = *(char *)((long)&local_a8 + uVar52);
        if (0x3e < (int)uVar52 + 1U) {
          uVar52 = (ulong)((int)uVar52 + 1);
          break;
        }
        cVar6 = *(char *)((long)&local_a8 + uVar52 + 1);
        if (cVar6 == '\0') {
          uVar52 = uVar52 + 1;
          break;
        }
        *(char *)(param_1 + uVar52 + 0x1f9) = cVar6;
      }
      *(undefined1 *)(param_1 + 0x1f8 + (uVar52 & 0xffffffff)) = 0;
      uVar38 = (uint)*(byte *)(param_1 + 0x1f8);
      *(int *)(param_1 + 500) = (int)uVar52;
      if (*(byte *)(param_1 + 0x1f8) != 0) {
        pbVar43 = (byte *)(param_1 + 0x1f9);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
      }
      *(uint *)(param_1 + 0x1f0) = uVar16;
    }
    else {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      *(undefined4 *)(param_1 + 500) = 0;
      *(undefined4 *)(param_1 + 0x1f0) = 0x811c9dc5;
    }
  }
  if ((DAT_7105308300 == 0) &&
     (uVar19 < (ulong)(*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 3))) {
    uVar52 = *(ulong *)(*(long *)(param_1 + 0x1c0) + uVar19 * 8);
    lVar56 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    puVar25 = FUN_71032631a0(lVar56,0x14ca4126b0);
    bVar13 = (uVar52 & 0xffffffffff) == 0;
    uVar19 = uVar52 & 0xff00000000000000;
    if ((uVar19 != 0xc100000000000000 || bVar13) ||
       (((ulong)puVar25 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar25 & 0xffffffffff) == 0)) {
      if ((((ulong)puVar25 & 0xffffffffff) != 0 &&
          ((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000) !=
          (uVar19 == 0xc100000000000000 && (uVar52 & 0xffffffffff) != 0)) {
        puVar25 = FUN_71032631a0(lVar56,0xfd03198f0);
        uVar36 = (ulong)puVar25 & 0xffffffffff;
        if (uVar19 == 0xc100000000000000 && !bVar13) goto LAB_7101adc230;
        if (((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000)
        goto joined_r0x007101adc268;
      }
    }
    else if ((((ulong)puVar25 ^ uVar52) & 0xffffffffff) != 0) {
      puVar25 = FUN_71032631a0(lVar56,0xfd03198f0);
      uVar36 = (ulong)puVar25 & 0xffffffffff;
LAB_7101adc230:
      if ((((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000) && (uVar36 != 0)) {
        uVar36 = ((ulong)puVar25 ^ uVar52) & 0xffffffffff;
joined_r0x007101adc268:
        if (uVar36 == 0) goto LAB_7101adc6b8;
      }
      ppppbVar30 = (byte ****)0x2;
      ppppppppplVar29 = (long *********)0x0;
      plVar58 = FUN_710323f330(*(long **)(param_1 + 0x130),uVar52,0,2,pppplVar31,param_6,param_7,
                               param_8);
      ppuVar40 = local_1d8;
      FUN_7103778b80((long)local_1d8,(long)plVar58,ppppppppplVar29,ppppbVar30,pppplVar31,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_1c0,lVar57,(long ****)"set_txt_subcat_l",ppppppppplVar29,ppppbVar30,
                     pppplVar31,param_6,param_7,param_8);
      FUN_710377a120((long)&local_1c0,(char *)(param_1 + 0x1f8),ppppppppplVar29,ppppbVar30,
                     pppplVar31,param_6,param_7,param_8);
      pppppppplVar35 = local_1b8[0];
      local_1c0 = &PTR_FUN_710523d9a8;
      local_1b8[0] = (long ********)0x0;
      if (pppppppplVar35 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar35);
      }
      FUN_7103776910(&local_1c0,lVar57,(long ****)"set_txt_subcat_c",ppppppppplVar29,ppppbVar30,
                     pppplVar31,param_6,param_7,param_8);
      pppppppplVar35 = local_1b8[0];
      if (local_1b8[0][2] != (long *******)0x0) {
        local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
        FUN_71037a2270((long *)local_1b8[0][2],(ushort *)&local_b0,0,0);
      }
      goto joined_r0x007101adc73c;
    }
  }
LAB_7101adc6b8:
  ppuVar40 = local_1d8;
  FUN_71037790a0((long)local_1d8,1,(long *********)param_3,param_4,pppplVar31,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_1c0,lVar57,(long ****)"set_txt_subcat_l",param_3,param_4,pppplVar31,param_6,
                 param_7,param_8);
  pppppppplVar35 = local_1b8[0];
  if (local_1b8[0][2] != (long *******)0x0) {
    param_3 = (undefined **)0x0;
    param_4 = (byte ****)0x0;
    local_b0 = (long ********)((ulong)local_b0 & 0xffffffff00000000);
    FUN_71037a2270((long *)local_1b8[0][2],(ushort *)&local_b0,0,0);
  }
  local_1c0 = &PTR_FUN_710523d9a8;
  local_1b8[0] = (long ********)0x0;
  if (pppppppplVar35 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar35);
  }
  FUN_7103776910(&local_1c0,lVar57,(long ****)"set_txt_subcat_c",param_3,param_4,pppplVar31,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_1c0,(char *)(param_1 + 0x1f8),param_3,param_4,pppplVar31,param_6,
                 param_7,param_8);
  pppppppplVar35 = local_1b8[0];
joined_r0x007101adc73c:
  local_1b8[0] = (long ********)0x0;
  local_1c0 = &PTR_FUN_710523d9a8;
  if (pppppppplVar35 != (long ********)0x0) {
    local_1b8[0] = (long ********)0x0;
    local_1c0 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)pppppppplVar35);
  }
  local_1e0 = &PTR_FUN_710523d9a8;
  local_1d8 = (undefined **)0x0;
  if (ppuVar40 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar40);
  }
  return;
}

