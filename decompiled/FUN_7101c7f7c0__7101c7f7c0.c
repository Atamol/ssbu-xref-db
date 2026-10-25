// addr:      7101c7f7c0
// offset:    0x1c7f7c0
// name:      FUN_7101c7f7c0
// mangled:   
// signature: undefined __cdecl FUN_7101c7f7c0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c7f7c0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong *__dest;
  long *plVar9;
  byte ****ppppbVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar11;
  undefined8 uVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  undefined8 uVar15;
  char cVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulong uVar19;
  byte **ppbVar20;
  code *pcVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  ushort *puVar28;
  char cVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long ********pppppppplVar35;
  long *plVar36;
  ulong *__src;
  ulong *puVar37;
  long lVar38;
  long *********__n;
  void *__src_00;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  ulong *puVar42;
  void *__dest_00;
  byte ***local_350;
  long *local_348;
  undefined4 local_340;
  undefined2 local_33c;
  undefined1 local_33a;
  undefined1 uStack_339;
  undefined2 uStack_338;
  undefined2 uStack_336;
  undefined4 uStack_334;
  byte ****local_330;
  long alStack_320 [4];
  long *local_300;
  long alStack_2f0 [4];
  long *local_2d0;
  long alStack_2c0 [4];
  long *local_2a0;
  long alStack_290 [4];
  long *local_270;
  long alStack_260 [4];
  long *local_240;
  undefined4 local_230;
  ulong *local_218;
  ulong *local_210;
  ulong *local_208;
  undefined **local_200;
  long *local_1f8;
  undefined ***local_1e0;
  undefined2 local_1c8;
  undefined1 local_1c6;
  undefined2 local_1c4;
  undefined8 local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  uint6 local_1a0;
  undefined2 uStack_19a;
  undefined2 local_198;
  undefined1 uStack_196;
  undefined1 uStack_195;
  undefined2 uStack_194;
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  
  local_218 = (ulong *)0x0;
  local_210 = (ulong *)0x0;
  local_208 = (ulong *)0x0;
  lVar38 = *(long *)(DAT_710532f730 + 8);
  lVar25 = *(long *)(*(long *)(lVar38 + 0x2e8) + 8);
  pcVar17 = *(char **)(lVar25 + 0x20);
  if ((*pcVar17 == '\f') && (iVar8 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar30 = 0;
    uVar32 = *(ulong *)(lVar25 + 0x48) & 0xffffffffff;
    pbVar26 = &DAT_7104742dbb;
    do {
      iVar2 = iVar8 + iVar30;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar25 + 0x18) + 0x28) + (long)*(int *)(pcVar17 + 5) +
                       (long)iVar2 * 8);
      uVar34 = *(ulong *)(*(long *)(*(long *)(lVar25 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar34 == uVar32) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_7101c7f894;
        pbVar26 = (byte *)(pcVar17 + (int)uVar7);
        break;
      }
      iVar5 = iVar2 + -1;
      if (uVar34 <= uVar32) {
        iVar30 = iVar2 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
    } while (iVar30 <= iVar8);
  }
  else {
LAB_7101c7f894:
    pbVar26 = &DAT_7104742dbb;
  }
  if (*pbVar26 - 0xb < 2) {
    iVar8 = *(int *)(pbVar26 + 1);
    if (iVar8 != 0) {
      if (iVar8 < 0) goto LAB_7101c83c2c;
      pppppppplVar35 = (long ********)((long)iVar8 << 3);
      __dest = (ulong *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (__dest == (ulong *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_350 = (byte ***)((ulong)local_350 & 0xffffffff00000000);
          param_3 = (undefined **)&local_1b0;
          local_1b0 = pppppppplVar35;
          uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
          if (((uVar32 & 1) != 0) &&
             (__dest = (ulong *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             __dest != (ulong *)0x0)) goto LAB_7101c7f914;
        }
        __dest = (ulong *)0x0;
      }
LAB_7101c7f914:
      local_208 = __dest + iVar8;
      uVar7 = 0;
      __src = __dest;
      puVar42 = __dest;
      local_218 = __dest;
      local_210 = __dest;
      do {
        puVar37 = local_208;
        uVar32 = FUN_7103293b70(*(long *)(*(long *)(lVar38 + 0x2e8) + 8),uVar7);
        if (puVar42 < puVar37) {
          *puVar42 = uVar32;
          puVar42 = local_210 + 1;
          puVar37 = __src;
          local_210 = puVar42;
        }
        else {
          __n = (long *********)((long)puVar42 - (long)__src);
          uVar34 = ((long)__n >> 3) + 1;
          if (uVar34 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar25 = (long)puVar37 - (long)__src;
          if ((ulong)(lVar25 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar25 >> 2;
            if (uVar34 <= uVar19) {
              uVar34 = uVar19;
            }
            if (uVar34 != 0) {
              if (uVar34 >> 0x3d == 0) goto LAB_7101c7f9b8;
              goto LAB_7101c83c2c;
            }
LAB_7101c7fa18:
            __dest = (ulong *)0x0;
          }
          else {
            uVar34 = 0x1fffffffffffffff;
LAB_7101c7f9b8:
            pppppppplVar35 = (long ********)(uVar34 * 8);
            if (pppppppplVar35 == (long ********)0x0) {
              pppppppplVar35 = (long ********)0x1;
            }
            __dest = (ulong *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,param_5,
                                             param_6,param_7,param_8);
            if (__dest == (ulong *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_350 = (byte ***)((ulong)local_350 & 0xffffffff00000000);
                param_3 = (undefined **)&local_1b0;
                local_1b0 = pppppppplVar35;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
                if (((uVar19 & 1) != 0) &&
                   (__dest = (ulong *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,
                                                     param_5,param_6,param_7,param_8),
                   __dest != (ulong *)0x0)) goto LAB_7101c7fa1c;
              }
              goto LAB_7101c7fa18;
            }
          }
LAB_7101c7fa1c:
          puVar42 = __dest + ((long)__n >> 3) + 1;
          __dest[(long)__n >> 3] = uVar32;
          if (0 < (long)__n) {
            memcpy(__dest,__src,(size_t)__n);
            param_3 = (undefined **)__n;
          }
          puVar37 = __dest;
          local_218 = __dest;
          local_210 = puVar42;
          local_208 = __dest + uVar34;
          if (__src != (ulong *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
        uVar7 = uVar7 + 1;
        __src = puVar37;
      } while ((int)uVar7 < iVar8);
      if (__dest != puVar42) {
        plVar36 = (long *)param_1[0x43];
        do {
          local_1b0 = (long ********)FUN_7103239360(*__dest);
          if (((ulong)local_1b0 & 0xffffffffff) != 0) {
            lVar25 = *plVar36;
            param_3 = (undefined **)(long)*(int *)(lVar25 + 0x70);
            param_4 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
            FUN_710323c4e0(lVar25,&local_1b0,(long *********)param_3,param_4,param_5,param_6,param_7
                           ,param_8);
          }
          __dest = __dest + 1;
        } while (puVar42 != __dest);
      }
    }
  }
  lVar25 = param_1[2];
  lVar38 = param_1[3];
  uVar32 = lVar38 - lVar25;
  if (0 < (int)(uVar32 >> 3)) {
    for (uVar34 = 0; uVar34 < (ulong)(lVar38 - lVar25 >> 3); uVar34 = uVar34 + 1) {
      lVar25 = *(long *)(*(long *)(*(long *)**(undefined8 **)(lVar25 + uVar34 * 8) + 0x10) + 8);
      if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x18), lVar25 != 0)) {
        *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe;
      }
      if ((uVar32 >> 3 & 0xffffffff) - 1 == uVar34) goto LAB_7101c7fb44;
      lVar25 = param_1[2];
      lVar38 = param_1[3];
    }
    goto LAB_7101c83c14;
  }
LAB_7101c7fb44:
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar18 = (undefined1 *)param_1[0x88];
  __src_00 = (void *)param_1[0x87];
  uVar32 = (long)puVar18 - (long)__src_00;
  if (uVar32 < 5) {
    uVar34 = -uVar32 + 5;
    if ((ulong)(param_1[0x89] - (long)puVar18) < uVar34) {
      uVar19 = param_1[0x89] - (long)__src_00;
      if (uVar19 < 0x3fffffffffffffff) {
        pppppppplVar35 = (long ********)(uVar19 * 2);
        if (pppppppplVar35 < (long ********)0x6) {
          pppppppplVar35 = (long ********)0x5;
        }
        if (pppppppplVar35 != (long ********)0x0) goto LAB_7101c7fc18;
LAB_7101c7fc6c:
        __dest_00 = (void *)0x0;
      }
      else {
        pppppppplVar35 = (long ********)0x7fffffffffffffff;
LAB_7101c7fc18:
        __dest_00 = (void *)FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,param_4,param_5,
                                           param_6,param_7,param_8);
        if (__dest_00 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_350 = (byte ***)((ulong)local_350 & 0xffffffff00000000);
            pppplVar11 = (long ****)&local_1b0;
            local_1b0 = pppppppplVar35;
            uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
            if (((uVar19 & 1) != 0) &&
               (__dest_00 = (void *)FUN_710392e290(0x10,pppppppplVar35,pppplVar11,param_4,param_5,
                                                   param_6,param_7,param_8),
               __dest_00 != (void *)0x0)) goto LAB_7101c7fc70;
          }
          goto LAB_7101c7fc6c;
        }
      }
LAB_7101c7fc70:
      memset((void *)((long)__dest_00 + uVar32),0,uVar34);
      if (0 < (long)uVar32) {
        memcpy(__dest_00,__src_00,uVar32);
      }
      param_1[0x87] = (long)__dest_00;
      param_1[0x88] = (long)__dest_00 + 5;
      param_1[0x89] = (long)((long)__dest_00 + (long)pppppppplVar35);
      if (__src_00 != (void *)0x0) {
        FUN_710392eb40((ulong)__src_00);
      }
    }
    else {
      puVar27 = puVar18;
      if ((uVar34 & 1) != 0) {
        *puVar18 = 0;
        puVar27 = (undefined1 *)(param_1[0x88] + 1);
        uVar34 = -uVar32 + 4;
        param_1[0x88] = (long)puVar27;
      }
      if ((undefined1 *)((long)__src_00 + 4) != puVar18) {
        do {
          *puVar27 = 0;
          lVar25 = param_1[0x88];
          param_1[0x88] = lVar25 + 1;
          *(undefined1 *)(lVar25 + 1) = 0;
          puVar27 = (undefined1 *)(param_1[0x88] + 1);
          uVar34 = uVar34 - 2;
          param_1[0x88] = (long)puVar27;
        } while (uVar34 != 0);
      }
    }
  }
  else if (uVar32 != 5) {
    param_1[0x88] = (long)__src_00 + 5;
  }
  bVar6 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
  if (bVar6) {
    if ((byte)DAT_71053069b0 - 1 < 7) {
      cVar16 = (char)(&PTR_DAT_71050add90)[(char)((byte)DAT_71053069b0 - 1)];
      cVar29 = -0x7e;
      goto LAB_7101c7fda4;
    }
LAB_7101c7fd84:
    cVar16 = '\0';
  }
  else {
    uVar32 = FUN_7101797350(0);
    uVar7 = (uint)(byte)DAT_71053069b0;
    if ((uVar32 & 1) == 0) {
      if (uVar7 != 1) {
        uVar7 = uVar7 - 2;
        if ((5 < uVar7) || ((0x3dU >> (ulong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_7101c7fd84;
        cVar16 = (char)(&PTR_DAT_71050ade10)[(char)uVar7];
      }
      else {
        cVar16 = -0x70;
      }
      cVar29 = -0x70;
    }
    else {
      if (uVar7 != 1) {
        uVar7 = (byte)DAT_71053069b0 - 2;
        if ((6 < uVar7) || ((0x7dU >> (ulong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_7101c7fd84;
        cVar16 = (char)(&PTR_DAT_71050addd0)[(char)uVar7];
      }
      else {
        cVar16 = -0x77;
      }
      cVar29 = -0x77;
    }
LAB_7101c7fda4:
    cVar16 = cVar16 - cVar29;
  }
  if ((char *)param_1[0x88] == (char *)param_1[0x87]) goto LAB_7101c7ff20;
  *(char *)param_1[0x87] = cVar16;
  if (DAT_71053069b0._1_1_ == '\0') {
    cVar16 = 'h';
LAB_7101c7fde4:
    cVar16 = cVar16 + -0x68;
  }
  else {
    if (DAT_71053069b0._1_1_ == '\x02') {
      cVar16 = 'i';
      goto LAB_7101c7fde4;
    }
    cVar16 = '\0';
  }
  if ((ulong)(param_1[0x88] - param_1[0x87]) < 2) goto LAB_7101c7ff20;
  *(char *)(param_1[0x87] + 1) = cVar16;
  if (DAT_71053069b2 - 1 < 4) {
    cVar16 = (char)(&PTR_switchdataD_7104545296_71050ade40)[(char)(DAT_71053069b2 - 1)] + 'j';
  }
  else {
    cVar16 = '\0';
  }
  if ((ulong)(param_1[0x88] - param_1[0x87]) < 3) goto LAB_7101c7ff20;
  *(char *)(param_1[0x87] + 2) = cVar16;
  lVar25 = param_1[0x87];
  if ((ulong)(param_1[0x88] - lVar25) < 3) goto LAB_7101c7ff20;
  if (3 < (ulong)(long)*(char *)(lVar25 + 2)) goto LAB_7101c83c2c;
  if ((&switchD_7101c8b57c::switchdataD_7104545296)[*(char *)(lVar25 + 2)] == 4) {
    if ((byte)DAT_7105306e8c == 6) {
      cVar16 = -100;
    }
    else {
      if ((byte)DAT_7105306e8c != 3) {
LAB_7101c7ff14:
        cVar16 = '\x01';
        goto joined_r0x007101c7ff1c;
      }
      cVar16 = -99;
    }
    cVar29 = -100;
LAB_7101c7ff68:
    cVar16 = cVar16 - cVar29;
  }
  else {
    if ((&switchD_7101c8b57c::switchdataD_7104545296)[*(char *)(lVar25 + 2)] == 3) {
      if ((byte)DAT_7105306e8c == 5) {
        cVar16 = -0x66;
      }
      else {
        if ((byte)DAT_7105306e8c != 2) goto LAB_7101c7ff14;
        cVar16 = -0x65;
      }
      cVar29 = -0x66;
      goto LAB_7101c7ff68;
    }
    uVar7 = (byte)DAT_7105306e8c - 1;
    if ((uVar7 < 5) && ((0x1bU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
      cVar16 = (char)(&PTR_DAT_71050ade60)[(char)uVar7];
      cVar29 = -0x62;
      goto LAB_7101c7ff68;
    }
    cVar16 = '\x02';
  }
joined_r0x007101c7ff1c:
  if ((ulong)(param_1[0x88] - lVar25) < 5) {
LAB_7101c7ff20:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(char *)(lVar25 + 4) = cVar16;
  lVar25 = _DAT_71053069b4;
  uVar7 = 0x811c9dc5;
  *(undefined4 *)(param_1 + 0xa1) = DAT_71053069b8._4_4_;
  param_1[0xa0] = lVar25;
  uVar12 = DAT_7105306e10;
  if (param_1 + 0xa0 == (long *)&DAT_71053069b4) {
    *(undefined4 *)((long)param_1 + 0x964) = DAT_7105306e18;
    *(undefined8 *)((long)param_1 + 0x95c) = uVar12;
  }
  else {
    for (uVar32 = 0; (&DAT_71053069c8)[uVar32] != '\0'; uVar32 = uVar32 + 2) {
      *(undefined1 *)((long)param_1 + uVar32 + 0x514) = (&DAT_71053069c8)[uVar32];
      if (0x3e < (int)uVar32 + 1U) {
        uVar32 = (ulong)((int)uVar32 + 1);
        break;
      }
      if ((&DAT_71053069c9)[uVar32] == '\0') {
        uVar32 = uVar32 + 1;
        break;
      }
      *(undefined1 *)((long)param_1 + uVar32 + 0x515) = (&DAT_71053069c9)[uVar32];
    }
    *(undefined1 *)((long)param_1 + (uVar32 & 0xffffffff) + 0x514) = 0;
    *(int *)(param_1 + 0xa2) = (int)uVar32;
    uVar23 = (uint)*(byte *)((long)param_1 + 0x514);
    uVar24 = uVar7;
    if (*(byte *)((long)param_1 + 0x514) != 0) {
      pbVar26 = (byte *)((long)param_1 + 0x515);
      do {
        uVar24 = uVar24 * 0x89 ^ uVar23;
        uVar23 = (uint)*pbVar26;
        pbVar26 = pbVar26 + 1;
      } while (uVar23 != 0);
    }
    *(uint *)((long)param_1 + 0x50c) = uVar24;
    for (uVar32 = 0; (&DAT_7105306a10)[uVar32] != 0; uVar32 = uVar32 + 2) {
      *(undefined2 *)((long)param_1 + uVar32 * 2 + 0x55c) = (&DAT_7105306a10)[uVar32];
      if (0x1fe < (int)uVar32 + 1U) {
        uVar32 = (ulong)((int)uVar32 + 1);
        break;
      }
      if ((&DAT_7105306a12)[uVar32] == 0) {
        uVar32 = uVar32 + 1;
        break;
      }
      *(undefined2 *)((long)param_1 + uVar32 * 2 + 0x55e) = (&DAT_7105306a12)[uVar32];
    }
    *(undefined2 *)((long)param_1 + (uVar32 & 0xffffffff) * 2 + 0x55c) = 0;
    *(int *)(param_1 + 0xab) = (int)uVar32;
    uVar23 = (uint)*(ushort *)((long)param_1 + 0x55c);
    uVar24 = uVar7;
    if (*(ushort *)((long)param_1 + 0x55c) != 0) {
      puVar28 = (ushort *)((long)param_1 + 0x55e);
      do {
        uVar24 = uVar24 * 0x89 ^ uVar23;
        uVar23 = (uint)*puVar28;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
    }
    *(uint *)((long)param_1 + 0x554) = uVar24;
    uVar12 = DAT_7105306e10;
    *(undefined4 *)((long)param_1 + 0x964) = DAT_7105306e18;
    *(undefined8 *)((long)param_1 + 0x95c) = uVar12;
    FUN_7101696040((uint *)(param_1 + 0x12d),(ushort *)&DAT_7105306e24);
  }
  lVar38 = DAT_7105306e54;
  lVar25 = CONCAT44(DAT_7105306e5c._4_4_,(undefined4)DAT_7105306e5c);
  param_1[0x136] = DAT_7105306e64;
  param_1[0x135] = lVar25;
  param_1[0x134] = lVar38;
  *(undefined1 *)(param_1 + 0x137) = DAT_7105306e6c;
  uVar12 = DAT_7105306e70;
  *(undefined4 *)((long)param_1 + 0x9c4) = DAT_7105306e78;
  *(undefined8 *)((long)param_1 + 0x9bc) = uVar12;
  lVar25 = DAT_7105306e7c;
  param_1[0x13a] = DAT_7105306e84;
  param_1[0x139] = lVar25;
  FUN_71017ab440((long)(param_1 + 0xa0));
  *(undefined1 *)(param_1 + 0x95) = DAT_7105306ef8;
  if (param_1 + 0x97 != (long *)&DAT_7105306f40) {
    uVar24 = (uint)DAT_7105306f48;
    if (DAT_7105306f48 != 0) {
      *(ushort *)(param_1 + 0x98) = DAT_7105306f48;
      if (DAT_7105306f4a == 0) {
        uVar24 = 1;
      }
      else {
        *(short *)((long)param_1 + 0x4c2) = DAT_7105306f4a;
        if (DAT_7105306f4c == 0) {
          uVar24 = 2;
        }
        else {
          *(short *)((long)param_1 + 0x4c4) = DAT_7105306f4c;
          if (DAT_7105306f4e == 0) {
            uVar24 = 3;
          }
          else {
            *(short *)((long)param_1 + 0x4c6) = DAT_7105306f4e;
            if (DAT_7105306f50 == 0) {
              uVar24 = 4;
            }
            else {
              *(short *)(param_1 + 0x99) = DAT_7105306f50;
              uVar24 = 5;
            }
          }
        }
      }
    }
    *(undefined2 *)((long)param_1 + (ulong)uVar24 * 2 + 0x4c0) = 0;
    uVar23 = (uint)*(ushort *)(param_1 + 0x98);
    *(uint *)((long)param_1 + 0x4bc) = uVar24;
    if (*(ushort *)(param_1 + 0x98) != 0) {
      puVar28 = (ushort *)((long)param_1 + 0x4c2);
      do {
        uVar7 = uVar7 * 0x89 ^ uVar23;
        uVar23 = (uint)*puVar28;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
    }
    *(uint *)(param_1 + 0x97) = uVar7;
  }
  if ((undefined8 *)param_1[3] == (undefined8 *)param_1[2]) goto LAB_7101c83c14;
  plVar36 = *(long **)**(undefined8 **)param_1[2];
  plVar40 = plVar36 + 1;
  lVar25 = *plVar36;
  *(undefined1 *)(*(long *)(lVar25 + 0x600) + 0x4aa) = 0;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x14) = 0x40;
  local_1b0 = (long ********)0x0;
  local_1a8 = (undefined1 *)0x101;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_350 = (byte ***)&DAT_7105186040;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c802e8:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c802e8;
  }
  local_350 = (byte ***)&DAT_7105186088;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c80334:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c80334;
  }
  local_350 = (byte ***)&DAT_71051860d0;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c80380:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c80380;
  }
  plVar36 = param_1 + 0x44;
  ppppbVar14 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_00",ppppbVar14,param_5,param_6,param_7,param_8
                );
  plVar39 = (long *)param_1[0x44];
  uVar32 = plVar39[0x31] - plVar39[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar39,0,*(long *****)plVar39[0x30],ppppbVar14,param_5,param_6,param_7,param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar39,(int)uVar34,*(long *****)(plVar39[0x30] + uVar34 * 8),ppppbVar14,
                       param_5,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  uVar12 = 1;
  FUN_7103771a80(plVar36,0,1);
  (**(code **)(*(long *)*plVar36 + 0x70))((long *)*plVar36,0);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  FUN_7103776640(&local_350,(long)plVar40,(byte ****)"set_parts_btn_00",uVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  plVar36 = local_348;
  FUN_7103778300(0x3f800000,(long)local_348,0x710444387c);
  local_350 = (byte ***)&PTR_FUN_710523d988;
  local_348 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = plVar36[3];
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    plVar36[3] = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  FUN_7103776640(&local_350,(long)plVar40,(byte ****)"set_parts_btn_01",uVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  plVar36 = local_348;
  FUN_7103778300(0x3f800000,(long)local_348,0x710428106d);
  local_350 = (byte ***)&PTR_FUN_710523d988;
  local_348 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = *(ulong *)((long)plVar36 + 0x18);
    *(undefined ***)((long)plVar36 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar36 + 0x18) = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c80514:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c80514;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c80544:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c80544;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c80574:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c80574;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c805a4:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c805a4;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c805d4:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c805d4;
  }
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 2) {
LAB_7101c83c14:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar36 = *(long **)**(undefined8 **)(param_1[2] + 8);
  plVar40 = plVar36 + 1;
  lVar25 = *plVar36;
  *(undefined1 *)(*(long *)(lVar25 + 0x600) + 0x4aa) = 0;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x1c) = 0x200002;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x18) = 0x800008;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x20) = 0x100001;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x24) = 0x400004;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x2c) = 0x10;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x30) = 0x80;
  local_1b0 = (long ********)0x0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = (undefined1 *)0x1000000000101;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_350 = (byte ***)&DAT_7105186040;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c8070c:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c8070c;
  }
  local_350 = (byte ***)&DAT_7105186088;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c80758:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c80758;
  }
  local_350 = (byte ***)&DAT_71051860d0;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c807a4:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c807a4;
  }
  local_350 = (byte ***)&PTR_FUN_71050adae0;
  local_348 = param_1;
  local_330 = &local_350;
  FUN_7101a7ed70((long *)&local_350,alStack_180);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c807f0:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c807f0;
  }
  plVar36 = param_1 + 0x83;
  ppppbVar14 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_00",ppppbVar14,param_5,param_6,param_7,param_8
                );
  plVar39 = (long *)param_1[0x83];
  uVar32 = plVar39[0x31] - plVar39[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar39,0,*(long *****)plVar39[0x30],ppppbVar14,param_5,param_6,param_7,param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar39,(int)uVar34,*(long *****)(plVar39[0x30] + uVar34 * 8),ppppbVar14,
                       param_5,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  lVar25 = *(long *)(*plVar36 + 0x1b8);
  if (lVar25 != 0) {
    lVar38 = *plVar36 + 0x1b8;
    lVar33 = lVar38;
    lVar31 = lVar25;
    do {
      bVar6 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar6) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar6 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar38) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar39 = *(long **)(lVar33 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x208))(plVar39,0);
      (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
      lVar38 = *plVar36 + 0x1b8;
      lVar25 = *(long *)(*plVar36 + 0x1b8);
    }
    lVar33 = lVar38;
    lVar31 = lVar25;
    if (lVar25 != 0) {
      do {
        if (0 < *(int *)(lVar31 + 0x20)) {
          lVar33 = lVar31;
        }
        lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
      } while (lVar31 != 0);
      if (((lVar33 != lVar38) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar39 = *(long **)(lVar33 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,0);
        (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
        lVar38 = *plVar36 + 0x1b8;
        lVar25 = *(long *)(*plVar36 + 0x1b8);
      }
      lVar33 = lVar38;
      lVar31 = lVar25;
      if (lVar25 != 0) {
        do {
          if (1 < *(int *)(lVar31 + 0x20)) {
            lVar33 = lVar31;
          }
          lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
        } while (lVar31 != 0);
        if (((lVar33 != lVar38) && (*(int *)(lVar33 + 0x20) < 3)) &&
           (plVar39 = *(long **)(lVar33 + 0x28), plVar39 != (long *)0x0)) {
          (**(code **)(*plVar39 + 0x208))(plVar39,0);
          (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
          lVar38 = *plVar36 + 0x1b8;
          lVar25 = *(long *)(*plVar36 + 0x1b8);
        }
        lVar33 = lVar38;
        lVar31 = lVar25;
        if (lVar25 != 0) {
          do {
            if (2 < *(int *)(lVar31 + 0x20)) {
              lVar33 = lVar31;
            }
            lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 3) * 8);
          } while (lVar31 != 0);
          if (((lVar33 != lVar38) && (*(int *)(lVar33 + 0x20) < 4)) &&
             (plVar39 = *(long **)(lVar33 + 0x28), plVar39 != (long *)0x0)) {
            (**(code **)(*plVar39 + 0x208))(plVar39,1);
            (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
            lVar38 = *plVar36 + 0x1b8;
            lVar25 = *(long *)(*plVar36 + 0x1b8);
          }
          lVar33 = lVar38;
          if (lVar25 != 0) {
            do {
              if (3 < *(int *)(lVar25 + 0x20)) {
                lVar33 = lVar25;
              }
              lVar25 = *(long *)(lVar25 + (ulong)(*(int *)(lVar25 + 0x20) < 4) * 8);
            } while (lVar25 != 0);
            if (((lVar33 != lVar38) && (*(int *)(lVar33 + 0x20) < 5)) &&
               (plVar39 = *(long **)(lVar33 + 0x28), plVar39 != (long *)0x0)) {
              (**(code **)(*plVar39 + 0x208))(plVar39,0);
              (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
            }
          }
        }
      }
    }
  }
  FUN_7103771a80(plVar36,0,1);
  (**(code **)(*(long *)param_1[0x83] + 0x70))((long *)param_1[0x83],0);
  (**(code **)(*(long *)param_1[0x83] + 0x60))((long *)param_1[0x83],0);
  plVar39 = param_1 + 0x84;
  ppppbVar14 = &local_350;
  local_350 = (byte ***)0x0;
  local_340 = 1;
  local_33c = 1;
  local_33a = 1;
  uStack_338 = 0;
  uStack_336 = 0;
  uStack_334 = 0x41f00000;
  local_330 = (byte ****)((ulong)local_330 & 0xffffffff00000000);
  local_300 = (long *)0x0;
  local_2d0 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_270 = (long *)0x0;
  local_240 = (long *)0x0;
  local_230 = 0;
  local_348 = (long *)0x10000010101;
  FUN_7103770b30(plVar39,plVar40,(long ****)"selector_04",ppppbVar14,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar39,0,"set_parts_csr_l",ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar39,1,"set_parts_csr_r",ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_7103771930(param_1[0x84],0,(long ****)0x6,(byte ****)0x1,param_5,param_6,param_7,param_8);
  ppppbVar14 = (byte ****)0x1;
  FUN_7103771930(param_1[0x84],1,(long ****)&DAT_00000007,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_200,param_1[0x84],(long ****)0x0,ppppbVar14,param_5,param_6,param_7,param_8)
  ;
  plVar41 = local_1f8;
  local_1f8 = (long *)*local_1f8;
  if (local_1f8 != (long *)0x0) {
    (**(code **)(*local_1f8 + 0x268))(local_1f8,1,1);
  }
  local_200 = &PTR_FUN_710523d9c8;
  local_1f8 = (long *)0x0;
  if (plVar41 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar41);
  }
  uVar12 = 1;
  FUN_7103771d60(&local_200,*plVar39,(long ****)0x1,ppppbVar14,param_5,param_6,param_7,param_8);
  plVar41 = local_1f8;
  plVar9 = (long *)*local_1f8;
  if (plVar9 != (long *)0x0) {
    uVar12 = 1;
    (**(code **)(*plVar9 + 0x268))(plVar9,1);
  }
  local_200 = &PTR_FUN_710523d9c8;
  local_1f8 = (long *)0x0;
  if (plVar41 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar41);
  }
  FUN_7101c83c40(plVar39,0,uVar12,ppppbVar14,param_5,param_6,param_7,param_8);
  if (alStack_260 == local_240) {
    pcVar21 = *(code **)(*local_240 + 0x20);
LAB_7101c80c78:
    (*pcVar21)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar21 = *(code **)(*local_240 + 0x28);
    goto LAB_7101c80c78;
  }
  if (alStack_290 == local_270) {
    pcVar21 = *(code **)(*local_270 + 0x20);
LAB_7101c80ca8:
    (*pcVar21)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar21 = *(code **)(*local_270 + 0x28);
    goto LAB_7101c80ca8;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar21 = *(code **)(*local_2a0 + 0x20);
LAB_7101c80cd8:
    (*pcVar21)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101c80cd8;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar21 = *(code **)(*local_2d0 + 0x20);
LAB_7101c80d08:
    (*pcVar21)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101c80d08;
  }
  if (alStack_320 == local_300) {
    pcVar21 = *(code **)(*local_300 + 0x20);
LAB_7101c80d38:
    (*pcVar21)();
  }
  else if (local_300 != (long *)0x0) {
    pcVar21 = *(code **)(*local_300 + 0x28);
    goto LAB_7101c80d38;
  }
  local_340 = 1;
  local_33c = 1;
  local_33a = 1;
  uStack_338 = 0;
  uStack_336 = 0;
  uStack_334 = 0x41f00000;
  local_350 = (byte ***)0x0;
  local_348 = (long *)0x101;
  local_330 = (byte ****)((ulong)local_330 & 0xffffffff00000000);
  local_300 = (long *)0x0;
  local_2d0 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_270 = (long *)0x0;
  local_240 = (long *)0x0;
  local_230 = 0;
  local_200 = &PTR_FUN_71050adb28;
  local_1f8 = param_1;
  local_1e0 = &local_200;
  FUN_7101a7ed70((long *)&local_200,alStack_320);
  if (&local_200 == local_1e0) {
    pcVar21 = (code *)(*local_1e0)[4];
LAB_7101c80dc8:
    (*pcVar21)();
  }
  else if (local_1e0 != (undefined ***)0x0) {
    pcVar21 = (code *)(*local_1e0)[5];
    goto LAB_7101c80dc8;
  }
  plVar39 = param_1 + 0x85;
  ppppbVar14 = &local_350;
  FUN_7103770b30(plVar39,plVar40,(long ****)"selector_01",ppppbVar14,param_5,param_6,param_7,param_8
                );
  plVar41 = (long *)param_1[0x85];
  uVar32 = plVar41[0x31] - plVar41[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar41,0,*(long *****)plVar41[0x30],ppppbVar14,param_5,param_6,param_7,param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar41,(int)uVar34,*(long *****)(plVar41[0x30] + uVar34 * 8),ppppbVar14,
                       param_5,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  FUN_7103771d60(&local_200,*plVar39,(long ****)0x0,ppppbVar14,param_5,param_6,param_7,param_8);
  plVar41 = local_1f8;
  plVar9 = (long *)*local_1f8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x2f0))(plVar9,(char)param_1[0x95],0);
  }
  local_200 = &PTR_FUN_710523d9c8;
  local_1f8 = (long *)0x0;
  if (plVar41 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar41);
  }
  (**(code **)(*(long *)*plVar39 + 0x70))((long *)*plVar39,0);
  (**(code **)(*(long *)*plVar39 + 0x60))((long *)*plVar39,0);
  if (alStack_260 == local_240) {
    pcVar21 = *(code **)(*local_240 + 0x20);
LAB_7101c80edc:
    (*pcVar21)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar21 = *(code **)(*local_240 + 0x28);
    goto LAB_7101c80edc;
  }
  if (alStack_290 == local_270) {
    pcVar21 = *(code **)(*local_270 + 0x20);
LAB_7101c80f0c:
    (*pcVar21)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar21 = *(code **)(*local_270 + 0x28);
    goto LAB_7101c80f0c;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar21 = *(code **)(*local_2a0 + 0x20);
LAB_7101c80f3c:
    (*pcVar21)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101c80f3c;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar21 = *(code **)(*local_2d0 + 0x20);
LAB_7101c80f6c:
    (*pcVar21)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101c80f6c;
  }
  if (alStack_320 == local_300) {
    pcVar21 = *(code **)(*local_300 + 0x20);
LAB_7101c80f9c:
    (*pcVar21)();
  }
  else if (local_300 != (long *)0x0) {
    pcVar21 = *(code **)(*local_300 + 0x28);
    goto LAB_7101c80f9c;
  }
  plVar39 = param_1 + 0x86;
  ppppbVar14 = &local_350;
  local_350 = (byte ***)0x0;
  local_340 = 1;
  local_33c = 1;
  local_33a = 1;
  uStack_338 = 0;
  uStack_336 = 0;
  uStack_334 = 0x41f00000;
  local_330 = (byte ****)((ulong)local_330 & 0xffffffff00000000);
  local_300 = (long *)0x0;
  local_2d0 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_270 = (long *)0x0;
  local_240 = (long *)0x0;
  local_230 = 0;
  local_348 = (long *)&DAT_00010101;
  FUN_7103770b30(plVar39,plVar40,(long ****)"selector_02",ppppbVar14,param_5,param_6,param_7,param_8
                );
  plVar41 = (long *)param_1[0x86];
  uVar32 = plVar41[0x31] - plVar41[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar41,0,*(long *****)plVar41[0x30],ppppbVar14,param_5,param_6,param_7,param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar41,(int)uVar34,*(long *****)(plVar41[0x30] + uVar34 * 8),ppppbVar14,
                       param_5,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  uVar12 = 0xc;
  uVar15 = 0;
  FUN_7103771930(*plVar39,0,(long ****)&DAT_0000000c,(byte ****)0x0,param_5,param_6,param_7,param_8)
  ;
  (**(code **)(*(long *)*plVar39 + 0x70))((long *)*plVar39,0);
  (**(code **)(*(long *)*plVar39 + 0x60))((long *)*plVar39,0);
  if (alStack_260 == local_240) {
    pcVar21 = *(code **)(*local_240 + 0x20);
LAB_7101c810c4:
    (*pcVar21)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar21 = *(code **)(*local_240 + 0x28);
    goto LAB_7101c810c4;
  }
  if (alStack_290 == local_270) {
    pcVar21 = *(code **)(*local_270 + 0x20);
LAB_7101c810f4:
    (*pcVar21)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar21 = *(code **)(*local_270 + 0x28);
    goto LAB_7101c810f4;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar21 = *(code **)(*local_2a0 + 0x20);
LAB_7101c81124:
    (*pcVar21)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101c81124;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar21 = *(code **)(*local_2d0 + 0x20);
LAB_7101c81154:
    (*pcVar21)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101c81154;
  }
  if (alStack_320 == local_300) {
    pcVar21 = *(code **)(*local_300 + 0x20);
LAB_7101c81188:
    (*pcVar21)();
  }
  else if (local_300 != (long *)0x0) {
    pcVar21 = *(code **)(*local_300 + 0x28);
    goto LAB_7101c81188;
  }
  lVar25 = *(long *)(*plVar36 + 0x180);
  lVar38 = *(long *)(*plVar36 + 0x188);
  uVar32 = lVar38 - lVar25;
  if (0 < (int)(uVar32 >> 3)) {
    uVar34 = 0;
    while( true ) {
      if ((long)uVar34 < (long)(int)((ulong)(lVar38 - lVar25) >> 3)) {
        if ((ulong)(lVar38 - lVar25 >> 3) <= uVar34) goto LAB_7101c83c1c;
        ppppbVar14 = *(byte *****)(*(long *)(lVar25 + uVar34 * 8) + 0x88);
      }
      else {
        ppppbVar14 = (byte ****)0x0;
      }
      FUN_7103776640(&local_350,(long)plVar40,ppppbVar14,uVar12,uVar15,param_5,param_6,param_7,
                     param_8);
      plVar39 = local_348;
      pcVar17 = "size_l";
      if (uVar34 != 0) {
        pcVar17 = "size_s";
      }
      FUN_7103778300(0x3f800000,(long)local_348,(long)pcVar17);
      pcVar17 = "rule_on";
      if (uVar34 != 3) {
        pcVar17 = "rule_off";
      }
      FUN_7103778300(0x3f800000,(long)plVar39,(long)pcVar17);
      local_350 = (byte ***)&PTR_FUN_710523d988;
      local_348 = (long *)0x0;
      if (plVar39 != (long *)0x0) {
        uVar19 = plVar39[3];
        plVar39[2] = (long)&PTR_FUN_710523d9a8;
        plVar39[3] = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40((ulong)plVar39);
      }
      if ((uVar32 >> 3 & 0xffffffff) - 1 == uVar34) break;
      lVar25 = *(long *)(*plVar36 + 0x180);
      lVar38 = *(long *)(*plVar36 + 0x188);
      uVar34 = uVar34 + 1;
    }
  }
  if (alStack_c0 == local_a0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  else if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x28))();
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c812e8:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c812e8;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c81318:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c81318;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c81348:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c81348;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c81378:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c81378;
  }
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 3) goto LAB_7101c83c24;
  puVar22 = *(undefined8 **)(param_1[2] + 0x10);
  lVar38 = **(long **)*puVar22;
  uVar4 = *(undefined4 *)((long)param_1 + 0x254);
  *(undefined4 *)(*(long *)(lVar38 + 0x600) + 0x494) = uVar4;
  lVar25 = *(long *)(lVar38 + 0x608);
  lVar38 = *(long *)(lVar38 + 0x610);
  if (lVar25 != lVar38) {
    uVar32 = (lVar38 + -0x10) - lVar25;
    uVar7 = ((uint)(uVar32 >> 4) & 0xfffffff) + 1;
    if ((uVar7 & 3) != 0) {
      lVar33 = -((ulong)uVar7 & 3);
      do {
        plVar36 = (long *)(lVar25 + 8);
        lVar25 = lVar25 + 0x10;
        lVar33 = lVar33 + 1;
        *(undefined4 *)(*plVar36 + 0x494) = uVar4;
      } while (lVar33 != 0);
    }
    if (0x2f < uVar32) {
      do {
        *(undefined4 *)(*(long *)(lVar25 + 8) + 0x494) = uVar4;
        *(undefined4 *)(*(long *)(lVar25 + 0x18) + 0x494) = uVar4;
        *(undefined4 *)(*(long *)(lVar25 + 0x28) + 0x494) = uVar4;
        plVar36 = (long *)(lVar25 + 0x38);
        lVar25 = lVar25 + 0x40;
        *(undefined4 *)(*plVar36 + 0x494) = uVar4;
      } while (lVar38 != lVar25);
    }
  }
  *(undefined2 *)(param_1 + 0x49) = 0x101;
  *(undefined4 *)((long)param_1 + 0x24c) = 0x4001;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined2 *)((long)param_1 + 0x24a) = local_1c4;
  *(undefined1 *)((long)param_1 + 0x253) = local_1c6;
  *(undefined2 *)((long)param_1 + 0x251) = local_1c8;
  *(undefined4 *)((long)param_1 + 0x254) = 1;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 0x11000;
  lVar25 = *(long *)*puVar22;
  lVar38 = param_1[0x4c];
  local_1b0 = (long ********)0x0;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  local_1a8 = (undefined1 *)0x101;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_350 = (byte ***)&DAT_7105186040;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c814fc:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c814fc;
  }
  puVar22 = (undefined8 *)(lVar25 + 8);
  local_350 = (byte ***)&DAT_7105186088;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c8154c:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c8154c;
  }
  local_350 = (byte ***)&DAT_71051860d0;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c81598:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c81598;
  }
  plVar36 = (long *)(lVar38 + 0x108);
  ppppbVar14 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar36,puVar22,(long ****)"selector_00",ppppbVar14,param_5,param_6,param_7,param_8
                );
  plVar40 = *(long **)(lVar38 + 0x108);
  uVar32 = plVar40[0x31] - plVar40[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar40,0,*(long *****)plVar40[0x30],ppppbVar14,param_5,param_6,param_7,param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar40,(int)uVar34,*(long *****)(plVar40[0x30] + uVar34 * 8),ppppbVar14,
                       param_5,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  uVar12 = 1;
  FUN_7103771a80(plVar36,0,1);
  (**(code **)(*(long *)*plVar36 + 0x70))((long *)*plVar36,0);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  FUN_7103776640(&local_1c0,(long)puVar22,(byte ****)"set_parts_header_btn",uVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_200,(long)&local_1c0,(byte ****)"set_rep_icn_fighter_00",uVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_350,(long)&local_200,(long ****)"set_icn_profile_bg",uVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  plVar36 = local_1f8;
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = plVar36[3];
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    plVar36[3] = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  uVar32 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar32 != 0) {
    uVar34 = *(ulong *)(uVar32 + 0x18);
    *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar32 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40(uVar32);
  }
  plVar36 = local_348;
  uVar7 = FUN_7103779cc0((long)local_348);
  *(uint *)(lVar38 + 0x110) = uVar7;
  local_350 = (byte ***)&PTR_FUN_710523d9a8;
  local_348 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar36);
  }
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c81740:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c81740;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c81770:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c81770;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c817a0:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c817a0;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c817d0:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c817d0;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c81800:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c81800;
  }
  *(code **)(lVar38 + 0x40) = FUN_7101c7d8d0;
  *(undefined8 *)(lVar38 + 0x48) = 0;
  *(code **)(lVar38 + 0x60) = FUN_7101c7d8d0;
  *(undefined8 *)(lVar38 + 0x68) = 0;
  *(code **)(lVar38 + 0x50) = FUN_7101c7d8e0;
  *(undefined8 *)(lVar38 + 0x58) = 0;
  *(code **)(lVar38 + 0x80) = FUN_7101c7e960;
  *(undefined8 *)(lVar38 + 0x88) = 0;
  *(code **)(lVar38 + 0x70) = FUN_7101c7e7f0;
  *(undefined8 *)(lVar38 + 0x78) = 0;
  *(code **)(lVar38 + 0x90) = FUN_7101c7ea20;
  *(undefined8 *)(lVar38 + 0x98) = 0;
  if (0x12 < *(uint *)(lVar38 + 0xec)) goto LAB_7101c83c2c;
  *(undefined4 *)(lVar38 + (long)(int)*(uint *)(lVar38 + 0xec) * 4 + 0xa0) = 0;
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 4) goto LAB_7101c83c24;
  plVar36 = *(long **)**(undefined8 **)(param_1[2] + 0x18);
  lVar25 = *plVar36;
  *(undefined1 *)(*(long *)(lVar25 + 0x600) + 0x4aa) = 0;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x14) = 0x40;
  local_1b0 = (long ********)0x0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_1a8 = (undefined1 *)0x101;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_350 = (byte ***)&PTR_FUN_71050adb70;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c8192c:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c8192c;
  }
  local_350 = (byte ***)&DAT_7105186088;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c81978:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c81978;
  }
  local_350 = (byte ***)&DAT_71051860d0;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c819c4:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c819c4;
  }
  plVar40 = param_1 + 0x96;
  ppppbVar14 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar40,plVar36 + 1,(long ****)"selector_00",ppppbVar14,param_5,param_6,param_7,
                 param_8);
  plVar36 = (long *)param_1[0x96];
  uVar32 = plVar36[0x31] - plVar36[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar36,0,*(long *****)plVar36[0x30],ppppbVar14,param_5,param_6,param_7,param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar36,(int)uVar34,*(long *****)(plVar36[0x30] + uVar34 * 8),ppppbVar14,
                       param_5,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  FUN_7103771a80(plVar40,0,1);
  (**(code **)(*(long *)*plVar40 + 0x70))((long *)*plVar40,0);
  (**(code **)(*(long *)*plVar40 + 0x60))((long *)*plVar40,0);
  local_350 = (byte ***)0xf57a523f5;
  FUN_7103772070(*plVar40,0,(long ****)&local_350,ppppbVar14,param_5,param_6,param_7,param_8);
  local_350 = (byte ***)0x0;
  FUN_7103772070(*plVar40,1,(long ****)&local_350,ppppbVar14,param_5,param_6,param_7,param_8);
  local_350 = (byte ***)0xf57a523f5;
  FUN_7103772070(*plVar40,2,(long ****)&local_350,ppppbVar14,param_5,param_6,param_7,param_8);
  if (alStack_c0 == local_a0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  else if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x28))();
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c81b24:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c81b24;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c81b54:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c81b54;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c81b84:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c81b84;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c81bb4:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c81bb4;
  }
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 5) goto LAB_7101c83c24;
  puVar22 = *(undefined8 **)(param_1[2] + 0x20);
  lVar38 = **(long **)*puVar22;
  uVar4 = *(undefined4 *)((long)param_1 + 0x27c);
  *(undefined4 *)(*(long *)(lVar38 + 0x600) + 0x494) = uVar4;
  lVar25 = *(long *)(lVar38 + 0x608);
  lVar38 = *(long *)(lVar38 + 0x610);
  if (lVar25 != lVar38) {
    uVar32 = (lVar38 + -0x10) - lVar25;
    uVar7 = ((uint)(uVar32 >> 4) & 0xfffffff) + 1;
    if ((uVar7 & 3) != 0) {
      lVar33 = -((ulong)uVar7 & 3);
      do {
        plVar36 = (long *)(lVar25 + 8);
        lVar25 = lVar25 + 0x10;
        lVar33 = lVar33 + 1;
        *(undefined4 *)(*plVar36 + 0x494) = uVar4;
      } while (lVar33 != 0);
    }
    if (0x2f < uVar32) {
      do {
        *(undefined4 *)(*(long *)(lVar25 + 8) + 0x494) = uVar4;
        *(undefined4 *)(*(long *)(lVar25 + 0x18) + 0x494) = uVar4;
        *(undefined4 *)(*(long *)(lVar25 + 0x28) + 0x494) = uVar4;
        plVar36 = (long *)(lVar25 + 0x38);
        lVar25 = lVar25 + 0x40;
        *(undefined4 *)(*plVar36 + 0x494) = uVar4;
      } while (lVar38 != lVar25);
    }
  }
  *(undefined2 *)(param_1 + 0x4e) = 0x101;
  *(undefined2 *)((long)param_1 + 0x272) = local_1c8;
  *(undefined4 *)((long)param_1 + 0x274) = 0x4001;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((long)param_1 + 0x279) = (undefined2)local_1c0;
  *(undefined1 *)((long)param_1 + 0x27b) = local_1c0._2_1_;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0x11000;
  *(undefined4 *)((long)param_1 + 0x27c) = 1;
  plVar36 = *(long **)*puVar22;
  plVar40 = plVar36 + 1;
  lVar25 = *plVar36;
  *(undefined1 *)(*(long *)(lVar25 + 0x600) + 0x4aa) = 0;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x18) = 0x800008;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x1c) = 0x200002;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x28) = 0x40000;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x38) = 0x10;
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar6 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
  if (bVar6) {
    if ((ulong)(long)(char)(byte)DAT_7105306f18 < 8) {
      cVar16 = (char)(&PTR_DAT_71050adc80)[(char)(byte)DAT_7105306f18];
      cVar29 = '`';
      goto LAB_7101c81de8;
    }
LAB_7101c81da8:
    cVar16 = '\0';
  }
  else {
    uVar32 = FUN_7101797350(0);
    if ((uVar32 & 1) == 0) {
      if ((byte)DAT_7105306f18 == 0) {
        cVar16 = 'p';
      }
      else {
        uVar7 = (byte)DAT_7105306f18 - 1;
        if ((6 < uVar7) || ((0x7bU >> (ulong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_7101c81da8;
        cVar16 = (char)(&PTR_DAT_71050add00)[(char)uVar7];
      }
      cVar29 = 'p';
    }
    else {
      if ((byte)DAT_7105306f18 == 0) {
        cVar16 = 'h';
      }
      else {
        uVar7 = (byte)DAT_7105306f18 - 1;
        if ((7 < uVar7) || ((0xfbU >> (ulong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_7101c81da8;
        cVar16 = (char)(&PTR_DAT_71050adcc0)[(char)uVar7];
      }
      cVar29 = 'h';
    }
LAB_7101c81de8:
    cVar16 = cVar16 - cVar29;
  }
  *(char *)(param_1 + 0x74) = cVar16;
  if ((ulong)(long)DAT_7105306f18._1_1_ < 5) {
    cVar16 = (char)(&PTR_DAT_71050add40)[DAT_7105306f18._1_1_] + -0x77;
  }
  else {
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x3a1) = cVar16;
  if ((ulong)(long)DAT_7105306f18._2_1_ < 4) {
    cVar16 = (char)(&PTR_DAT_71050add70)[DAT_7105306f18._2_1_] + -0x7c;
  }
  else {
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x3a2) = cVar16;
  if (DAT_7105306f18._3_1_ == '\x01') {
    cVar16 = -0x80;
LAB_7101c81e84:
    cVar16 = cVar16 + -0x80;
  }
  else {
    if (DAT_7105306f18._3_1_ == '\x02') {
      cVar16 = -0x7f;
      goto LAB_7101c81e84;
    }
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x3a3) = cVar16;
  *(char *)((long)param_1 + 0x3e1) = cVar16;
  if (DAT_7105306f1c == '\x01') {
    cVar16 = -0x80;
LAB_7101c81ecc:
    cVar16 = cVar16 + -0x80;
  }
  else {
    if (DAT_7105306f1c == '\x02') {
      cVar16 = -0x7f;
      goto LAB_7101c81ecc;
    }
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x3a4) = cVar16;
  cVar16 = -0x80;
  if (DAT_7105306f3e != '\0') {
    cVar16 = -0x7f;
  }
  *(char *)((long)param_1 + 0x3a5) = cVar16 + -0x80;
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar3 = DAT_7105306e8c._1_1_;
  if (6 < DAT_7105306e8c._1_1_ - 2) {
    bVar3 = 6;
  }
  *(byte *)(param_1 + 0x6f) = bVar3;
  if (((ulong)(long)DAT_7105306e5c._4_1_ < 8) &&
     ((0xf1U >> (ulong)((int)DAT_7105306e5c._4_1_ & 0x1f) & 1) != 0)) {
    cVar16 = (char)(&PTR_DAT_71050adc40)[DAT_7105306e5c._4_1_] + '^';
  }
  else {
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x379) = cVar16;
  if (DAT_7105306e8c._2_1_ == '\x01') {
    cVar16 = -0x80;
LAB_7101c81f94:
    cVar16 = cVar16 + -0x80;
  }
  else {
    if (DAT_7105306e8c._2_1_ == '\x02') {
      cVar16 = -0x7f;
      goto LAB_7101c81f94;
    }
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x37a) = cVar16;
  if (DAT_7105306e8c._3_1_ == '\x01') {
    cVar16 = -0x80;
LAB_7101c81fd8:
    cVar16 = cVar16 + -0x80;
  }
  else {
    if (DAT_7105306e8c._3_1_ == '\x02') {
      cVar16 = -0x7f;
      goto LAB_7101c81fd8;
    }
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x37b) = cVar16;
  *(char *)(param_1 + 0x7c) = cVar16;
  if (DAT_7105306e8c._4_1_ == '\x01') {
    cVar16 = -0x80;
LAB_7101c82020:
    cVar16 = cVar16 + -0x80;
  }
  else {
    if (DAT_7105306e8c._4_1_ == '\x02') {
      cVar16 = -0x7f;
      goto LAB_7101c82020;
    }
    cVar16 = '\0';
  }
  *(char *)((long)param_1 + 0x37c) = cVar16;
  if (DAT_7105306e8c._5_1_ == '\x01') {
    cVar16 = -0x80;
LAB_7101c82064:
    cVar16 = cVar16 + -0x80;
  }
  else {
    if (DAT_7105306e8c._5_1_ == '\x02') {
      cVar16 = -0x7f;
      goto LAB_7101c82064;
    }
    cVar16 = '\x01';
  }
  plVar36 = param_1 + 0x71;
  *(char *)((long)param_1 + 0x37d) = cVar16;
  ppppbVar14 = (byte ****)&local_1b0;
  local_1b0 = (long ********)0x0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = (undefined1 *)0x10000010101;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_02",ppppbVar14,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar36,0,"set_parts_csr_l",ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar36,1,"set_parts_csr_r",ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_7103771930(param_1[0x71],0,(long ****)0x6,(byte ****)0x1,param_5,param_6,param_7,param_8);
  ppppbVar14 = (byte ****)0x1;
  FUN_7103771930(param_1[0x71],1,(long ****)&DAT_00000007,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_350,param_1[0x71],(long ****)0x0,ppppbVar14,param_5,param_6,param_7,param_8)
  ;
  plVar39 = local_348;
  plVar41 = (long *)*local_348;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x268))(plVar41,1,1);
  }
  local_350 = (byte ***)&PTR_FUN_710523d9c8;
  local_348 = (long *)0x0;
  if (plVar39 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar39);
  }
  uVar12 = 1;
  FUN_7103771d60(&local_350,*plVar36,(long ****)0x1,ppppbVar14,param_5,param_6,param_7,param_8);
  plVar39 = local_348;
  plVar41 = (long *)*local_348;
  if (plVar41 != (long *)0x0) {
    uVar12 = 1;
    (**(code **)(*plVar41 + 0x268))(plVar41,1);
  }
  local_350 = (byte ***)&PTR_FUN_710523d9c8;
  local_348 = (long *)0x0;
  if (plVar39 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar39);
  }
  FUN_7101c83c40(plVar36,0,uVar12,ppppbVar14,param_5,param_6,param_7,param_8);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c82200:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c82200;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c82230:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c82230;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c82260:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c82260;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c82290:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c82290;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c822c0:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c822c0;
  }
  local_1b0 = (long ********)0x0;
  local_1a8 = (undefined1 *)0x4248000041800000;
  uStack_196 = 1;
  _local_1a0 = 0x101013f800000;
  local_198 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  uStack_18f = 0;
  uStack_191 = 0;
  uStack_190 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0;
  local_350 = (byte ***)&DAT_7105186160;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_180);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82354:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82354;
  }
  local_350 = (byte ***)&DAT_71051861a8;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c823a0:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c823a0;
  }
  local_350 = (byte ***)&DAT_71051861f0;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c823ec:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c823ec;
  }
  local_350 = (byte ***)&DAT_7105186238;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82438:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82438;
  }
  pppplVar11 = (long ****)(param_1 + 0x78);
  local_1a0 = (uint6)(uint5)local_1a0;
  uStack_194 = 0x101;
  local_1b0 = (long ********)CONCAT44(6,(undefined4)local_1b0);
  FUN_7103781a20(param_1 + 0x70,plVar40,(byte ****)"scroll_00",(byte ****)&local_1b0,pppplVar11,
                 param_6,param_7,param_8);
  FUN_7103783c10(param_1 + 0x70,0,0,1,pppplVar11,param_6,param_7,param_8);
  (**(code **)(*(long *)param_1[0x70] + 0x70))((long *)param_1[0x70],0);
  (**(code **)(*(long *)param_1[0x70] + 0x60))((long *)param_1[0x70],0);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c824d4:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c824d4;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c82504:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c82504;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c82534:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c82534;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c82564:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c82564;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c82594:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c82594;
  }
  local_1b0 = (long ********)0x0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  local_1a8 = (undefined1 *)0x101;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_350 = (byte ***)&DAT_7105186040;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82624:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82624;
  }
  local_350 = (byte ***)&DAT_7105186088;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82674:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82674;
  }
  local_350 = (byte ***)&DAT_71051860d0;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c826c0:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c826c0;
  }
  local_350 = (byte ***)&PTR_FUN_71050adc00;
  local_348 = param_1 + 0x4d;
  local_330 = &local_350;
  FUN_7101a7ed70((long *)&local_350,alStack_180);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c8270c:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c8270c;
  }
  plVar36 = param_1 + 0x72;
  ppppbVar14 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_01",ppppbVar14,pppplVar11,param_6,param_7,
                 param_8);
  plVar39 = (long *)param_1[0x72];
  uVar32 = plVar39[0x31] - plVar39[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar39,0,*(long *****)plVar39[0x30],ppppbVar14,pppplVar11,param_6,param_7,
                   param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar39,(int)uVar34,*(long *****)(plVar39[0x30] + uVar34 * 8),ppppbVar14,
                       pppplVar11,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  ppppbVar14 = (byte ****)0x0;
  FUN_7103771930(*plVar36,0,(long ****)0xa,(byte ****)0x0,pppplVar11,param_6,param_7,param_8);
  FUN_7103771d60(&local_350,*plVar36,(long ****)0x0,ppppbVar14,pppplVar11,param_6,param_7,param_8);
  plVar39 = local_348;
  plVar41 = (long *)*local_348;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x268))(plVar41,1,1);
  }
  local_350 = (byte ***)&PTR_FUN_710523d9c8;
  local_348 = (long *)0x0;
  if (plVar39 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar39);
  }
  pppplVar13 = (long ****)0x1;
  FUN_7103771a80(plVar36,0,1);
  (**(code **)(*(long *)*plVar36 + 0x70))((long *)*plVar36,0);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  plVar39 = *(long **)(*plVar36 + 0x180);
  uVar32 = *(long *)(*plVar36 + 0x188) - (long)plVar39;
  if ((int)(uVar32 >> 3) < 1) {
    ppppbVar10 = (byte ****)0x0;
  }
  else {
    if (uVar32 == 0) goto LAB_7101c83c1c;
    ppppbVar10 = *(byte *****)(*plVar39 + 0x88);
  }
  FUN_7103776640(&local_350,(long)plVar40,ppppbVar10,pppplVar13,ppppbVar14,pppplVar11,param_6,
                 param_7,param_8);
  FUN_7103776390(&local_200,&local_350,pppplVar13,ppppbVar14,pppplVar11,param_6,param_7,param_8);
  FUN_710337d360(&local_200,extraout_x1,(undefined **)pppplVar13,ppppbVar14,pppplVar11,param_6,
                 param_7,param_8);
  plVar36 = local_1f8;
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = plVar36[3];
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    plVar36[3] = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  plVar36 = local_348;
  local_350 = (byte ***)&PTR_FUN_710523d988;
  local_348 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = plVar36[3];
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    plVar36[3] = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c828fc:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c828fc;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c8292c:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c8292c;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c8295c:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c8295c;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c8298c:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c8298c;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c829bc:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c829bc;
  }
  local_1b0 = (long ********)0x0;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  ppppbVar14 = (byte ****)&local_1b0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = &DAT_00010101;
  FUN_7103770b30(param_1 + 0x73,plVar40,(long ****)"selector_06",ppppbVar14,pppplVar11,param_6,
                 param_7,param_8);
  FUN_71037717d0(param_1 + 0x73,0,"set_parts_reset",ppppbVar14,pppplVar11,param_6,param_7,param_8);
  FUN_7103771930(param_1[0x73],0,(long ****)&DAT_0000000e,(byte ****)0x1,pppplVar11,param_6,param_7,
                 param_8);
  (**(code **)(*(long *)param_1[0x73] + 0x70))((long *)param_1[0x73],0);
  (**(code **)(*(long *)param_1[0x73] + 0x60))((long *)param_1[0x73],0);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c82aa0:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c82aa0;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c82ad0:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c82ad0;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c82b00:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c82b00;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c82b30:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c82b30;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c82b60:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c82b60;
  }
  plVar36 = param_1 + 0x6d;
  local_1b0 = (long ********)0x0;
  ppppbVar14 = (byte ****)&local_1b0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = (undefined1 *)0x10000010101;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_05",ppppbVar14,pppplVar11,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar36,0,"set_parts_csr_l_00",ppppbVar14,pppplVar11,param_6,param_7,param_8);
  FUN_71037717d0(plVar36,1,"set_parts_csr_r_00",ppppbVar14,pppplVar11,param_6,param_7,param_8);
  FUN_7103771930(param_1[0x6d],0,(long ****)0x6,(byte ****)0x1,pppplVar11,param_6,param_7,param_8);
  ppppbVar14 = (byte ****)0x1;
  FUN_7103771930(param_1[0x6d],1,(long ****)&DAT_00000007,(byte ****)0x1,pppplVar11,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_350,param_1[0x6d],(long ****)0x0,ppppbVar14,pppplVar11,param_6,param_7,
                 param_8);
  plVar39 = local_348;
  plVar41 = (long *)*local_348;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x268))(plVar41,1,1);
  }
  local_350 = (byte ***)&PTR_FUN_710523d9c8;
  local_348 = (long *)0x0;
  if (plVar39 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar39);
  }
  uVar12 = 1;
  FUN_7103771d60(&local_350,*plVar36,(long ****)0x1,ppppbVar14,pppplVar11,param_6,param_7,param_8);
  plVar39 = local_348;
  plVar41 = (long *)*local_348;
  if (plVar41 != (long *)0x0) {
    uVar12 = 1;
    (**(code **)(*plVar41 + 0x268))(plVar41,1);
  }
  local_350 = (byte ***)&PTR_FUN_710523d9c8;
  local_348 = (long *)0x0;
  if (plVar39 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar39);
  }
  FUN_7101c83c40(plVar36,0,uVar12,ppppbVar14,pppplVar11,param_6,param_7,param_8);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c82ce8:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c82ce8;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c82d18:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c82d18;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c82d48:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c82d48;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c82d78:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c82d78;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c82da8:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c82da8;
  }
  local_1b0 = (long ********)0x0;
  local_1a8 = (undefined1 *)0x4248000041800000;
  uStack_196 = 1;
  _local_1a0 = 0x101013f800000;
  local_198 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  uStack_18f = 0;
  uStack_191 = 0;
  uStack_190 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0;
  local_350 = (byte ***)&DAT_7105186160;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_180);
  if (&local_350 == local_330) {
    (*(code *)(*local_330)[4])();
  }
  else if (local_330 != (byte ****)0x0) {
    (*(code *)(*local_330)[5])();
  }
  local_350 = (byte ***)&DAT_71051861a8;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82e80:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82e80;
  }
  local_350 = (byte ***)&DAT_71051861f0;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82ecc:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82ecc;
  }
  local_350 = (byte ***)&DAT_7105186238;
  local_330 = &local_350;
  FUN_71003cb050((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c82f18:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c82f18;
  }
  pppplVar11 = (long ****)(param_1 + 0x75);
  local_1a0 = (uint6)(uint5)local_1a0;
  uStack_194 = 0x101;
  local_1b0 = (long ********)CONCAT44(7,(undefined4)local_1b0);
  FUN_7103781a20(param_1 + 0x6c,plVar40,(byte ****)"scroll",(byte ****)&local_1b0,pppplVar11,param_6
                 ,param_7,param_8);
  FUN_7103783c10(param_1 + 0x6c,0,0,1,pppplVar11,param_6,param_7,param_8);
  (**(code **)(*(long *)param_1[0x6c] + 0x70))((long *)param_1[0x6c],0);
  (**(code **)(*(long *)param_1[0x6c] + 0x60))((long *)param_1[0x6c],0);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c82fb4:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c82fb4;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c82fe4:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c82fe4;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c83014:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c83014;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c83044:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c83044;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c83074:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c83074;
  }
  local_1b0 = (long ********)0x0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  local_1a8 = (undefined1 *)0x101;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_350 = (byte ***)&DAT_7105186040;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_150);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c83104:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c83104;
  }
  local_350 = (byte ***)&DAT_7105186088;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_120);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c83150:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c83150;
  }
  local_350 = (byte ***)&DAT_71051860d0;
  local_330 = &local_350;
  FUN_7101989a30((long *)&local_350,alStack_f0);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c8319c:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c8319c;
  }
  local_350 = (byte ***)&PTR_FUN_71050adbb8;
  local_348 = param_1 + 0x4d;
  local_330 = &local_350;
  FUN_7101a7ed70((long *)&local_350,alStack_180);
  if (&local_350 == local_330) {
    ppbVar20 = (*local_330)[4];
LAB_7101c831e8:
    (*(code *)ppbVar20)();
  }
  else if (local_330 != (byte ****)0x0) {
    ppbVar20 = (*local_330)[5];
    goto LAB_7101c831e8;
  }
  plVar36 = param_1 + 0x6e;
  ppppbVar14 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_04",ppppbVar14,pppplVar11,param_6,param_7,
                 param_8);
  plVar39 = (long *)param_1[0x6e];
  uVar32 = plVar39[0x31] - plVar39[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar39,0,*(long *****)plVar39[0x30],ppppbVar14,pppplVar11,param_6,param_7,
                   param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar39,(int)uVar34,*(long *****)(plVar39[0x30] + uVar34 * 8),ppppbVar14,
                       pppplVar11,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  ppppbVar14 = (byte ****)0x0;
  FUN_7103771930(*plVar36,0,(long ****)0xa,(byte ****)0x0,pppplVar11,param_6,param_7,param_8);
  FUN_7103771d60(&local_350,*plVar36,(long ****)0x0,ppppbVar14,pppplVar11,param_6,param_7,param_8);
  plVar39 = local_348;
  plVar41 = (long *)*local_348;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 0x268))(plVar41,1,1);
  }
  local_350 = (byte ***)&PTR_FUN_710523d9c8;
  local_348 = (long *)0x0;
  if (plVar39 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar39);
  }
  pppplVar13 = (long ****)0x1;
  FUN_7103771a80(plVar36,0,1);
  (**(code **)(*(long *)*plVar36 + 0x70))((long *)*plVar36,0);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  plVar39 = *(long **)(*plVar36 + 0x180);
  uVar32 = *(long *)(*plVar36 + 0x188) - (long)plVar39;
  if ((int)(uVar32 >> 3) < 1) {
    ppppbVar10 = (byte ****)0x0;
  }
  else {
    if (uVar32 == 0) {
LAB_7101c83c1c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar10 = *(byte *****)(*plVar39 + 0x88);
  }
  FUN_7103776640(&local_350,(long)plVar40,ppppbVar10,pppplVar13,ppppbVar14,pppplVar11,param_6,
                 param_7,param_8);
  FUN_7103776390(&local_200,&local_350,pppplVar13,ppppbVar14,pppplVar11,param_6,param_7,param_8);
  FUN_710337d360(&local_200,extraout_x1_00,(undefined **)pppplVar13,ppppbVar14,pppplVar11,param_6,
                 param_7,param_8);
  plVar36 = local_1f8;
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = plVar36[3];
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    plVar36[3] = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  plVar36 = local_348;
  local_350 = (byte ***)&PTR_FUN_710523d988;
  local_348 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    uVar32 = plVar36[3];
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    plVar36[3] = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40((ulong)plVar36);
  }
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c833d8:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c833d8;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c83408:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c83408;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c83438:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c83438;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c83468:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c83468;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c83498:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c83498;
  }
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  param_1[0x56] = (long)FUN_7101c8df00;
  param_1[0x58] = (long)FUN_7101c8df10;
  param_1[0x5a] = (long)FUN_7101c8e580;
  param_1[0x5c] = (long)FUN_7101c8e7d0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x33c)) goto LAB_7101c83c2c;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x33c) * 4 + 0x2f0) = 0;
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 5) goto LAB_7101c83c24;
  uVar12 = *(undefined8 *)(param_1[2] + 0x20);
  FUN_7101c83d40(param_1 + 0x51);
  if (param_1[0x51] != 0) {
    pcVar21 = (code *)param_1[0x52];
    uVar32 = param_1[0x53] & 1;
    if (uVar32 != 0 || pcVar21 != (code *)0x0) {
      plVar36 = (long *)(param_1[0x51] + (param_1[0x53] >> 1));
      if (uVar32 != 0) {
        pcVar21 = *(code **)(pcVar21 + *plVar36);
      }
      (*pcVar21)(plVar36,uVar12);
    }
  }
  *(int *)((long)param_1 + 0x344) = *(int *)((long)param_1 + 0x344) + 1;
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 6) goto LAB_7101c83c24;
  plVar36 = *(long **)**(undefined8 **)(param_1[2] + 0x28);
  plVar40 = plVar36 + 1;
  lVar25 = *plVar36;
  *(undefined1 *)(*(long *)(lVar25 + 0x600) + 0x4aa) = 0;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x14) = 0x40;
  local_350 = (byte ***)0x0;
  local_348 = (long *)0x4248000041800000;
  uStack_336 = 0x101;
  local_300 = (long *)0x0;
  local_2d0 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_270 = (long *)0x0;
  local_240 = (long *)0x0;
  local_330 = (byte ****)((ulong)local_330 & 0xffffffffffff0000);
  uStack_334 = 0;
  local_1b0 = (long ********)&DAT_71051861a8;
  local_340 = 0x3f800000;
  local_33a = 1;
  uStack_339 = 0;
  uStack_338 = 0;
  local_33c = 1;
  uStack_190 = SUB81(&local_1b0,0);
  uStack_18f = (undefined1)((ulong)&local_1b0 >> 8);
  uStack_18e = (undefined2)((ulong)&local_1b0 >> 0x10);
  uStack_18c = (undefined4)((ulong)&local_1b0 >> 0x20);
  FUN_71003cb050(&local_1b0,alStack_2f0);
  plVar36 = (long *)CONCAT44(uStack_18c,CONCAT22(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
  if (&local_1b0 == plVar36) {
    pcVar21 = *(code **)(*plVar36 + 0x20);
LAB_7101c8361c:
    (*pcVar21)();
  }
  else if (plVar36 != (long *)0x0) {
    pcVar21 = *(code **)(*plVar36 + 0x28);
    goto LAB_7101c8361c;
  }
  uStack_190 = SUB81(&local_1b0,0);
  uStack_18f = (undefined1)((ulong)&local_1b0 >> 8);
  uStack_18e = (undefined2)((ulong)&local_1b0 >> 0x10);
  uStack_18c = (undefined4)((ulong)&local_1b0 >> 0x20);
  local_1b0 = (long ********)&DAT_71051861f0;
  FUN_71003cb050(&local_1b0,alStack_2c0);
  plVar36 = (long *)CONCAT44(uStack_18c,CONCAT22(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
  if (&local_1b0 == plVar36) {
    pcVar21 = *(code **)(*plVar36 + 0x20);
LAB_7101c83668:
    (*pcVar21)();
  }
  else if (plVar36 != (long *)0x0) {
    pcVar21 = *(code **)(*plVar36 + 0x28);
    goto LAB_7101c83668;
  }
  uStack_190 = SUB81(&local_1b0,0);
  uStack_18f = (undefined1)((ulong)&local_1b0 >> 8);
  uStack_18e = (undefined2)((ulong)&local_1b0 >> 0x10);
  uStack_18c = (undefined4)((ulong)&local_1b0 >> 0x20);
  local_1b0 = (long ********)&DAT_7105186238;
  FUN_71003cb050(&local_1b0,alStack_290);
  plVar36 = (long *)CONCAT44(uStack_18c,CONCAT22(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
  if (&local_1b0 == plVar36) {
    pcVar21 = *(code **)(*plVar36 + 0x20);
LAB_7101c836b4:
    (*pcVar21)();
  }
  else if (plVar36 != (long *)0x0) {
    pcVar21 = *(code **)(*plVar36 + 0x28);
    goto LAB_7101c836b4;
  }
  pppplVar11 = (long ****)(param_1 + 0x46);
  FUN_7103781a20(param_1 + 0x9d,plVar40,(byte ****)"scroll",&local_350,pppplVar11,param_6,param_7,
                 param_8);
  FUN_7103783c10(param_1 + 0x9d,0,0,1,pppplVar11,param_6,param_7,param_8);
  (**(code **)(*(long *)param_1[0x9d] + 0x70))((long *)param_1[0x9d],0);
  (**(code **)(*(long *)param_1[0x9d] + 0x60))((long *)param_1[0x9d],0);
  if ((ulong)(param_1[3] - param_1[2] >> 3) < 6) {
LAB_7101c83c24:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(**(long **)**(undefined8 **)(param_1[2] + 0x28) + 0x600) + 0x34) = 0x10;
  local_1b0 = (long ********)0x0;
  _local_1a0 = CONCAT17(uStack_19a._1_1_,0x1000100000001);
  plVar36 = param_1 + 0x9e;
  ppppbVar14 = (byte ****)&local_1b0;
  local_1a8 = &DAT_00010101;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18e = 0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_192 = 0xf0;
  uStack_191 = 0x41;
  local_160 = (long *)0x0;
  FUN_7103770b30(plVar36,plVar40,(long ****)"selector_00",ppppbVar14,pppplVar11,param_6,param_7,
                 param_8);
  plVar40 = (long *)param_1[0x9e];
  uVar32 = plVar40[0x31] - plVar40[0x30];
  if (0 < (int)(uVar32 >> 3)) {
    uVar32 = uVar32 >> 3 & 0xffffffff;
    FUN_710376e070(plVar40,0,*(long *****)plVar40[0x30],ppppbVar14,pppplVar11,param_6,param_7,
                   param_8);
    if (uVar32 != 1) {
      uVar34 = 1;
      do {
        FUN_710376e070(plVar40,(int)uVar34,*(long *****)(plVar40[0x30] + uVar34 * 8),ppppbVar14,
                       pppplVar11,param_6,param_7,param_8);
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
  }
  FUN_7103771930(*plVar36,0,(long ****)&DAT_0000000d,(byte ****)0x0,pppplVar11,param_6,param_7,
                 param_8);
  (**(code **)(*(long *)*plVar36 + 0x70))((long *)*plVar36,0);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101c83868:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101c83868;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101c83898:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c83898;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101c838c8:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c838c8;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101c838f8:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c838f8;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101c83928:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c83928;
  }
  if (alStack_260 == local_240) {
    pcVar21 = *(code **)(*local_240 + 0x20);
LAB_7101c83958:
    (*pcVar21)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar21 = *(code **)(*local_240 + 0x28);
    goto LAB_7101c83958;
  }
  if (alStack_290 == local_270) {
    pcVar21 = *(code **)(*local_270 + 0x20);
LAB_7101c83988:
    (*pcVar21)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar21 = *(code **)(*local_270 + 0x28);
    goto LAB_7101c83988;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar21 = *(code **)(*local_2a0 + 0x20);
LAB_7101c839b8:
    (*pcVar21)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101c839b8;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar21 = *(code **)(*local_2d0 + 0x20);
LAB_7101c839e8:
    (*pcVar21)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101c839e8;
  }
  if (alStack_320 == local_300) {
    pcVar21 = *(code **)(*local_300 + 0x20);
LAB_7101c83a18:
    (*pcVar21)();
  }
  else if (local_300 != (long *)0x0) {
    pcVar21 = *(code **)(*local_300 + 0x28);
    goto LAB_7101c83a18;
  }
  param_1[0x10] = (long)FUN_7101c83e20;
  param_1[0x11] = 0;
  param_1[0x14] = (long)FUN_7101c841f0;
  param_1[0x15] = 0;
  param_1[0x16] = (long)FUN_7101c843c0;
  param_1[0x17] = 0;
  param_1[0x1a] = (long)FUN_7101c84b00;
  param_1[0x1b] = 0;
  param_1[0xe] = (long)FUN_7101c83e10;
  param_1[0xf] = 0;
  param_1[0x1c] = (long)FUN_7101c86660;
  param_1[0x1d] = 0;
  param_1[0x30] = (long)FUN_7101c83e10;
  param_1[0x31] = 0;
  param_1[0x20] = (long)FUN_7101c87510;
  param_1[0x21] = 0;
  param_1[0x32] = (long)FUN_7101c89c60;
  param_1[0x33] = 0;
  param_1[0x22] = (long)FUN_7101c87860;
  param_1[0x23] = 0;
  param_1[0x18] = (long)FUN_7101c84440;
  param_1[0x19] = 0;
  param_1[0x26] = (long)FUN_7101c885e0;
  param_1[0x27] = 0;
  param_1[0x1e] = (long)FUN_7101c86bc0;
  param_1[0x1f] = 0;
  param_1[0x28] = (long)FUN_7101c88b30;
  param_1[0x29] = 0;
  param_1[0x24] = (long)FUN_7101c881c0;
  param_1[0x25] = 0;
  param_1[0x2c] = (long)FUN_7101c899d0;
  param_1[0x2d] = 0;
  param_1[0x12] = (long)FUN_7101c84020;
  param_1[0x13] = 0;
  param_1[0x2a] = (long)FUN_7101c89440;
  param_1[0x2b] = 0;
  param_1[0x2e] = (long)FUN_7101c89ba0;
  param_1[0x2f] = 0;
  param_1[0x34] = (long)FUN_7101c84020;
  param_1[0x35] = 0;
  if (*(uint *)((long)param_1 + 0x1fc) < 0x13) {
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1fc) * 4 + 0x1b0) = 0;
    param_1[0xc] = (long)FUN_7101c89eb0;
    param_1[0xd] = 0;
    if (local_218 != (ulong *)0x0) {
      local_210 = local_218;
      FUN_710392eb40((ulong)local_218);
    }
    return;
  }
LAB_7101c83c2c:
                    /* WARNING: Subroutine does not return */
  abort();
}

