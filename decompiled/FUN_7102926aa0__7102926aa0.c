// addr:      7102926aa0
// offset:    0x2926aa0
// name:      FUN_7102926aa0
// mangled:   
// signature: undefined __cdecl FUN_7102926aa0(undefined8 * param_1, long param_2, undefined1[16] * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x007102927a94) */
/* WARNING: Removing unreachable block (ram,0x0071029279ec) */
/* WARNING: Removing unreachable block (ram,0x007102927a40) */
/* WARNING: Removing unreachable block (ram,0x007102927ae8) */

void FUN_7102926aa0(undefined8 *param_1,long param_2,undefined1 (*param_3) [16],byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  float *pfVar2;
  long ***ppplVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  int *piVar7;
  long *plVar8;
  char cVar9;
  long **pplVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 *__src;
  byte bVar15;
  void *__src_00;
  int iVar16;
  void *__dest;
  long ***__dest_00;
  undefined4 *__dest_01;
  long ****pppplVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar18;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  char *pcVar19;
  long ****pppplVar20;
  long *********ppppppppplVar21;
  uint uVar22;
  ulong *puVar23;
  long *plVar24;
  ulong uVar25;
  long ********pppppppplVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  byte *pbVar30;
  long *****ppppplVar31;
  uint *puVar32;
  long *plVar33;
  uint uVar34;
  ulong uVar35;
  int *piVar36;
  uint uVar37;
  undefined8 *puVar38;
  long ***ppplVar39;
  long lVar40;
  long ******pppppplVar41;
  long *********ppppppppplVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined4 *local_238;
  undefined4 *local_230;
  undefined4 *local_228;
  long ***local_220;
  long ***local_218;
  long ***local_210;
  long ********local_208;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1b8;
  long ********local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  long ********local_160;
  long ********local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  long ********local_100;
  long ********pppppppplStack_f8;
  char local_e8 [64];
  undefined8 local_a8;
  void *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_71050f48a0;
  param_1[1] = param_2;
  lVar40 = *(long *)(param_2 + 0x300);
  pcVar19 = (char *)param_3;
  FUN_710262bb40(lVar40,1);
  FUN_710262beb0(lVar40,0xfffffffe);
  lVar40 = *(long *)(param_2 + 0x300);
  lVar27 = **(long **)(lVar40 + 0x48);
  puVar23 = *(ulong **)(lVar40 + 0x60);
  if (puVar23 != (ulong *)(lVar27 + 8)) {
    pcVar19 = *(char **)(lVar27 + 0x10);
    FUN_7102616cf0(puVar23,*(undefined1 (**) [16])(lVar27 + 8),(undefined1 (*) [16])pcVar19,param_4,
                   param_5,param_6,param_7,param_8);
    lVar40 = *(long *)(param_2 + 0x300);
    lVar27 = **(long **)(lVar40 + 0x48);
    puVar23 = *(ulong **)(lVar40 + 0x60);
  }
  if (puVar23 + 3 != (ulong *)(lVar27 + 0x20)) {
    pcVar19 = *(char **)(lVar27 + 0x28);
    FUN_7102616cf0(puVar23 + 3,*(undefined1 (**) [16])(lVar27 + 0x20),(undefined1 (*) [16])pcVar19,
                   param_4,param_5,param_6,param_7,param_8);
    lVar40 = *(long *)(param_2 + 0x300);
  }
  FUN_710262c200(lVar40,0);
  lVar40 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
  lVar27 = **(long **)(*(long *)(param_2 + 0x300) + 0x48);
  uVar18 = *(undefined8 *)(lVar27 + 0x40);
  *(ulong *)(lVar40 + 0x38) = *(ulong *)(lVar27 + 0x48) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0x30) = uVar18;
  uVar18 = *(undefined8 *)(lVar27 + 0x50);
  *(ulong *)(lVar40 + 0x48) = *(ulong *)(lVar27 + 0x58) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0x40) = uVar18;
  uVar18 = *(undefined8 *)(lVar27 + 0x60);
  *(ulong *)(lVar40 + 0x58) = *(ulong *)(lVar27 + 0x68) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0x50) = uVar18;
  uVar18 = *(undefined8 *)(lVar27 + 0x70);
  *(ulong *)(lVar40 + 0x68) = *(ulong *)(lVar27 + 0x78) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0x60) = uVar18;
  uVar18 = *(undefined8 *)(lVar27 + 0x80);
  *(ulong *)(lVar40 + 0x78) = *(ulong *)(lVar27 + 0x88) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0x70) = uVar18;
  *(undefined1 *)(lVar40 + 0x80) = *(undefined1 *)(lVar27 + 0x90);
  uVar18 = *(undefined8 *)(lVar27 + 0xa0);
  *(ulong *)(lVar40 + 0x98) = *(ulong *)(lVar27 + 0xa8) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0x90) = uVar18;
  uVar18 = *(undefined8 *)(lVar27 + 0xb0);
  *(ulong *)(lVar40 + 0xa8) = *(ulong *)(lVar27 + 0xb8) & 0xffffffff;
  *(undefined8 *)(lVar40 + 0xa0) = uVar18;
  FUN_7102624870(*(long *)(param_2 + 0x308),0);
  FUN_7102624740(*(long *)(param_2 + 0x308),0);
  plVar28 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
  plVar24 = (long *)*plVar28;
  do {
    uVar18 = extraout_x1;
    if (plVar24 == (long *)plVar28[1]) goto LAB_7102926c98;
    lVar40 = *plVar24;
    plVar24 = plVar24 + 1;
  } while ((*(ulong *)(lVar40 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  if ((lVar40 != 0) && (puVar38 = *(undefined8 **)(lVar40 + 0x130), puVar38 != (undefined8 *)0x0)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    pcVar19 = "IPP0002";
    if (DAT_71052c51ba == '\0') {
      FUN_71025f55b0((undefined8 *)*puVar38,(undefined8 *)puVar38[1],"IPP0002");
      uVar18 = extraout_x1_01;
    }
    else {
      FUN_71025f5420((undefined8 *)*puVar38,(undefined8 *)puVar38[1],"IPP0002");
      uVar18 = extraout_x1_00;
    }
  }
LAB_7102926c98:
  lVar40 = *(long *)(param_2 + 0x310);
  plVar24 = *(long **)(lVar40 + 0xd0);
  plVar28 = *(long **)(lVar40 + 0xd8);
  if (plVar24 != plVar28) {
    iVar16 = (int)plVar24[1];
    while (iVar16 - 2U < 3) {
      if (plVar28 == plVar24 + 2) goto LAB_7102926d78;
      iVar16 = (int)plVar24[3];
      plVar24 = plVar24 + 2;
    }
  }
  if (plVar24 != plVar28) {
    do {
      lVar40 = *plVar24;
      plVar33 = plVar24;
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar40 + 0x108),uVar18,(long ****)pcVar19,param_4,param_5,param_6,
                       param_7,param_8);
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
        }
        *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
        uVar18 = extraout_x1_02;
      }
      do {
        plVar8 = plVar33 + 2;
        plVar24 = plVar28;
        if (plVar8 == plVar28) break;
        plVar1 = plVar33 + 3;
        plVar24 = plVar8;
        plVar33 = plVar8;
      } while ((int)*plVar1 - 2U < 3);
    } while (plVar24 != plVar28);
    lVar40 = *(long *)(param_2 + 0x310);
    plVar28 = *(long **)(lVar40 + 0xd8);
  }
LAB_7102926d78:
  for (plVar24 = *(long **)(lVar40 + 0xd0); plVar24 != plVar28; plVar24 = plVar24 + 2) {
    if ((*(uint *)(plVar24 + 1) < 2) &&
       (lVar40 = *plVar24, *(long *)(lVar40 + 0x68) == 0x1875145cc1)) {
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar40 + 0x108),uVar18,(long ****)pcVar19,param_4,param_5,param_6,
                       param_7,param_8);
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 1;
        }
        uVar18 = extraout_x1_05;
        if (lVar40 != 0) {
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) & 0xfe;
        }
      }
      break;
    }
  }
  for (plVar24 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar24 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar24 = plVar24 + 2) {
    if ((*(uint *)(plVar24 + 1) < 2) && (lVar40 = *plVar24, *(long *)(lVar40 + 0x68) == 0xd966d58df)
       ) {
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar40 + 0x108),uVar18,(long ****)pcVar19,param_4,param_5,param_6,
                       param_7,param_8);
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 1;
        }
        uVar18 = extraout_x1_06;
        if (lVar40 != 0) {
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) & 0xfe;
        }
      }
      break;
    }
  }
  for (plVar24 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar24 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar24 = plVar24 + 2) {
    if ((*(uint *)(plVar24 + 1) < 2) &&
       (lVar40 = *plVar24, *(long *)(lVar40 + 0x68) == 0x16023e36c4)) {
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar40 + 0x108),uVar18,(long ****)pcVar19,param_4,param_5,param_6,
                       param_7,param_8);
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 1;
        }
        uVar18 = extraout_x1_07;
        if (lVar40 != 0) {
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) & 0xfe;
        }
      }
      break;
    }
  }
  for (plVar24 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar24 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar24 = plVar24 + 2) {
    if ((*(uint *)(plVar24 + 1) < 2) &&
       (lVar40 = *plVar24, *(long *)(lVar40 + 0x68) == 0x1b96697194)) {
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar40 + 0x108),uVar18,(long ****)pcVar19,param_4,param_5,param_6,
                       param_7,param_8);
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 1;
        }
        if (lVar40 != 0) {
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) & 0xfe;
        }
      }
      break;
    }
  }
  FUN_7102926160((long)param_1,0);
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_98 = (void *)0x0;
  FUN_710262c340((long *)&local_150,*(long **)(*(long *)(param_2 + 0x300) + 0x20),"S66_FIRE_STEP");
  pppppppplVar26 = local_150;
  local_1b0 = local_150;
  for (uVar29 = 0; *(char *)((long)&local_140 + uVar29) != '\0'; uVar29 = uVar29 + 2) {
    *(char *)((long)&local_1a0 + uVar29) = *(char *)((long)&local_140 + uVar29);
    if (0x3e < (int)uVar29 + 1U) {
      uVar29 = (ulong)((int)uVar29 + 1);
      break;
    }
    cVar9 = *(char *)((long)&local_140 + uVar29 + 1);
    if (cVar9 == '\0') {
      uVar29 = uVar29 + 1;
      break;
    }
    *(char *)((long)&local_1a0 + uVar29 + 1) = cVar9;
  }
  *(undefined1 *)((long)&local_1a0 + (uVar29 & 0xffffffff)) = 0;
  bVar15 = (byte)local_1a0;
  local_200 = 0x811c9dc5;
  local_1a8 = uVar29 << 0x20;
  uVar37 = (uint)(byte)local_1a0;
  uVar34 = local_200;
  if (uVar37 != 0) {
    pbVar30 = (byte *)((long)&local_1a0 + 1);
    do {
      uVar34 = uVar34 * 0x89 ^ uVar37;
      uVar37 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar37 != 0);
  }
  local_1a8 = CONCAT44((int)uVar29,uVar34);
  local_208 = pppppppplStack_f8;
  local_160 = local_100;
  for (uVar29 = 0; local_e8[uVar29] != '\0'; uVar29 = uVar29 + 2) {
    *(char *)((long)&local_1f8 + uVar29) = local_e8[uVar29];
    if (0x3e < (int)uVar29 + 1U) {
      uVar29 = (ulong)((int)uVar29 + 1);
      break;
    }
    if (local_e8[uVar29 + 1] == '\0') {
      uVar29 = uVar29 + 1;
      break;
    }
    *(char *)((long)&local_1f8 + uVar29 + 1) = local_e8[uVar29 + 1];
  }
  *(undefined1 *)((long)&local_1f8 + (uVar29 & 0xffffffff)) = 0;
  uVar34 = local_1f8 & 0xff;
  local_1fc = (undefined4)uVar29;
  if ((char)local_1f8 != '\0') {
    pbVar30 = (byte *)((long)&local_1f8 + 1);
    do {
      local_200 = local_200 * 0x89 ^ uVar34;
      uVar34 = (uint)*pbVar30;
      pbVar30 = pbVar30 + 1;
    } while (uVar34 != 0);
  }
  local_1b8 = local_a8;
  if (pppppppplVar26 != pppppppplStack_f8) {
    do {
      __src_00 = local_98;
      pppppplVar41 = (*pppppppplVar26)[0x22];
      if ((pppppplVar41 != (long ******)0x0) && (*pppppplVar41 != pppppplVar41[1])) {
        if (local_90 == local_88) {
          pppplVar17 = (long ****)((long)local_90 - (long)local_98);
          uVar29 = ((long)pppplVar17 >> 3) + 1;
          if (uVar29 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_88 - (long)local_98 >> 3) < 0xfffffffffffffff) {
            uVar35 = (long)local_88 - (long)local_98 >> 2;
            if (uVar29 <= uVar35) {
              uVar29 = uVar35;
            }
            if (uVar29 != 0) {
              if (uVar29 >> 0x3d == 0) goto LAB_71029270d0;
              goto LAB_7102927b88;
            }
            uVar29 = 0;
            __dest = (void *)0x0;
          }
          else {
            uVar29 = 0x1fffffffffffffff;
LAB_71029270d0:
            ppplVar39 = (long ***)(uVar29 * 8);
            if (ppplVar39 == (long ***)0x0) {
              ppplVar39 = (long ***)0x1;
            }
            __dest = (void *)FUN_710392e290(0x10,ppplVar39,pppplVar17,param_4,param_5,param_6,
                                            param_7,param_8);
            if (__dest == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_238 = (undefined4 *)((ulong)local_238 & 0xffffffff00000000);
                pppplVar20 = &local_220;
                local_220 = ppplVar39;
                uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_238);
                if (((uVar35 & 1) != 0) &&
                   (__dest = (void *)FUN_710392e290(0x10,ppplVar39,pppplVar20,param_4,param_5,
                                                    param_6,param_7,param_8), __dest != (void *)0x0)
                   ) goto LAB_7102927144;
              }
              __dest = (void *)0x0;
            }
          }
LAB_7102927144:
          puVar38 = (undefined8 *)((long)__dest + ((long)pppplVar17 >> 3) * 8);
          *puVar38 = pppppplVar41;
          if (0 < (long)pppplVar17) {
            memcpy(__dest,__src_00,(size_t)pppplVar17);
          }
          local_98 = __dest;
          local_90 = puVar38 + 1;
          local_88 = (undefined8 *)((long)__dest + uVar29 * 8);
          if (__src_00 != (void *)0x0) {
            FUN_710392eb40((ulong)__src_00);
          }
        }
        else {
          *local_90 = pppppplVar41;
          local_90 = local_90 + 1;
        }
      }
      do {
        local_1b0 = pppppppplVar26 + 1;
        pppppppplVar26 = local_100;
        if (local_1b0 == local_100) break;
        uVar34 = (uint)bVar15;
        if (uVar34 == 0) {
          uVar35 = 0;
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          uVar37 = 0xffffffff;
          pbVar30 = (byte *)((long)&local_1a0 + 1);
          do {
            uVar22 = uVar34 + 0x20;
            if (0x19 < uVar34 - 0x41) {
              uVar22 = uVar34;
            }
            uVar37 = (&DAT_7104754084)[(uVar22 ^ uVar37) & 0xff] ^ uVar37 >> 8;
            uVar34 = (uint)*pbVar30;
            uVar29 = uVar29 + 0x100000000;
            pbVar30 = pbVar30 + 1;
          } while (uVar34 != 0);
          uVar35 = (ulong)~uVar37;
          uVar29 = uVar29 & 0xff00000000;
        }
        pppppppplVar26 = local_1b0;
      } while (((ulong)(*local_1b0)[0x14] & 0xffffffffff) != (uVar29 | uVar35));
    } while (pppppppplVar26 != pppppppplStack_f8);
  }
  local_218 = (long ***)0x0;
  local_210 = (long ***)0x0;
  local_220 = (long ***)0x0;
  lVar40 = *(long *)(param_2 + 0x300);
  uVar34 = FUN_7103151710((byte *)"FSP0000");
  ppppppppplVar21 = (long *********)(ulong)uVar34;
  FUN_710262cbe0((long *)&local_208,*(long *)(lVar40 + 8),uVar34);
  ppplVar39 = local_220;
  while (local_220 = ppplVar39, local_208 != (long ********)0x0) {
    if ((ulong)((long)local_208[0x36] - (long)local_208[0x35] >> 3) <= (ulong)local_200) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppplVar31 = local_208[0x35][local_200][2];
    if (local_1f8 < *(uint *)(ppppplVar31 + 0x1f)) {
      pppplVar17 = ppppplVar31[0x20] + (ulong)local_1f8 * 0x28;
    }
    else {
      pppplVar17 = (long ****)0x0;
    }
    if (*(int *)(pppplVar17 + 0x21) == 1) {
      pplVar10 = *(long ***)((long)pppplVar17 + 0x10c);
      if (local_218 < local_210) {
        local_218[1] = (long **)0x0;
        *local_218 = pplVar10;
        local_218 = local_218 + 2;
      }
      else {
        ppppppppplVar42 = (long *********)((long)local_218 - (long)ppplVar39);
        uVar29 = ((long)ppppppppplVar42 >> 4) + 1;
        if (uVar29 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_210 - (long)ppplVar39 >> 4) < 0x7ffffffffffffff) {
          uVar35 = (long)local_210 - (long)ppplVar39 >> 3;
          if (uVar29 <= uVar35) {
            uVar29 = uVar35;
          }
          if (uVar29 != 0) {
            if (uVar29 >> 0x3c == 0) goto LAB_710292733c;
            goto LAB_7102927b88;
          }
          __dest_00 = (long ***)0x0;
        }
        else {
          uVar29 = 0xfffffffffffffff;
LAB_710292733c:
          pppppppplVar26 = (long ********)(uVar29 * 0x10);
          if (pppppppplVar26 == (long ********)0x0) {
            pppppppplVar26 = (long ********)0x1;
          }
          __dest_00 = (long ***)
                      FUN_710392e290(0x10,pppppppplVar26,(long ****)ppppppppplVar21,param_4,param_5,
                                     param_6,param_7,param_8);
          if (__dest_00 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1b0 = (long ********)((ulong)local_1b0 & 0xffffffff00000000);
              ppppppppplVar21 = &local_150;
              local_150 = pppppppplVar26;
              uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
              if (((uVar35 & 1) != 0) &&
                 (__dest_00 = (long ***)
                              FUN_710392e290(0x10,pppppppplVar26,(long ****)ppppppppplVar21,param_4,
                                             param_5,param_6,param_7,param_8),
                 __dest_00 != (long ***)0x0)) goto LAB_71029273a0;
            }
            __dest_00 = (long ***)0x0;
          }
        }
LAB_71029273a0:
        ppplVar3 = __dest_00 + ((long)ppppppppplVar42 >> 4) * 2;
        ppplVar3[1] = (long **)0x0;
        *ppplVar3 = pplVar10;
        if (0 < (long)ppppppppplVar42) {
          memcpy(__dest_00,ppplVar39,(size_t)ppppppppplVar42);
          ppppppppplVar21 = ppppppppplVar42;
        }
        local_220 = __dest_00;
        local_218 = ppplVar3 + 2;
        local_210 = __dest_00 + uVar29 * 2;
        if (ppplVar39 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar39);
        }
      }
    }
    FUN_7102927ba0((long *)&local_208);
    ppplVar39 = local_220;
  }
  local_230 = (undefined4 *)0x0;
  local_228 = (undefined4 *)0x0;
  local_238 = (undefined4 *)0x0;
  lVar40 = *(long *)(param_3[0x11] + 8);
  pppppppplVar26 = (long ********)0x0;
  if (*(long *)param_3[0x12] != lVar40) {
    uVar29 = 0;
    do {
      __src = local_238;
      plVar24 = (long *)(lVar40 + uVar29 * 0x18);
      piVar6 = (int *)*plVar24;
      piVar7 = (int *)plVar24[1];
      if (piVar6 == piVar7) {
LAB_7102927454:
        if (local_230 < local_228) {
          *local_230 = (int)uVar29;
          local_230 = local_230 + 1;
        }
        else {
          ppppppppplVar42 = (long *********)((long)local_230 - (long)local_238);
          uVar35 = ((long)ppppppppplVar42 >> 2) + 1;
          if (uVar35 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_228 - (long)local_238 >> 2) < 0x1fffffffffffffff) {
            uVar25 = (long)local_228 - (long)local_238 >> 1;
            if (uVar35 <= uVar25) {
              uVar35 = uVar25;
            }
            if (uVar35 != 0) {
              if (uVar35 >> 0x3e != 0) {
LAB_7102927b88:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_71029274bc;
            }
LAB_710292751c:
            __dest_01 = (undefined4 *)0x0;
          }
          else {
            uVar35 = 0x3fffffffffffffff;
LAB_71029274bc:
            pppppppplVar26 = (long ********)(uVar35 * 4);
            if (pppppppplVar26 == (long ********)0x0) {
              pppppppplVar26 = (long ********)0x1;
            }
            __dest_01 = (undefined4 *)
                        FUN_710392e290(0x10,pppppppplVar26,(long ****)ppppppppplVar21,param_4,
                                       param_5,param_6,param_7,param_8);
            if (__dest_01 == (undefined4 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1b0 = (long ********)((ulong)local_1b0 & 0xffffffff00000000);
                ppppppppplVar21 = &local_150;
                local_150 = pppppppplVar26;
                uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
                if (((uVar25 & 1) != 0) &&
                   (__dest_01 = (undefined4 *)
                                FUN_710392e290(0x10,pppppppplVar26,(long ****)ppppppppplVar21,
                                               param_4,param_5,param_6,param_7,param_8),
                   __dest_01 != (undefined4 *)0x0)) goto LAB_7102927520;
              }
              goto LAB_710292751c;
            }
          }
LAB_7102927520:
          puVar4 = __dest_01 + ((long)ppppppppplVar42 >> 2);
          *puVar4 = (int)uVar29;
          if (0 < (long)ppppppppplVar42) {
            memcpy(__dest_01,__src,(size_t)ppppppppplVar42);
            ppppppppplVar21 = ppppppppplVar42;
          }
          local_238 = __dest_01;
          local_230 = puVar4 + 1;
          local_228 = __dest_01 + uVar35;
          if (__src != (undefined4 *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
      }
      else {
        bVar14 = false;
        do {
          piVar36 = piVar6 + 1;
          iVar16 = *piVar6;
          bVar14 = (bool)(bVar14 | iVar16 == 10);
          piVar6 = piVar36;
        } while (iVar16 != 10 && piVar7 != piVar36);
        if (!bVar14) goto LAB_7102927454;
      }
      lVar40 = *(long *)(param_3[0x11] + 8);
      uVar35 = (*(long *)param_3[0x12] - lVar40 >> 3) * -0x5555555555555555;
      uVar29 = uVar29 + 1;
      pppppppplVar26 = local_208;
    } while (uVar29 <= uVar35 && uVar35 - uVar29 != 0);
  }
  local_208 = pppppppplVar26;
  if ((long)local_230 - (long)local_238 != 0) {
    puVar32 = *(uint **)(param_2 + 0x340);
    uVar34 = *puVar32;
    *puVar32 = puVar32[1];
    uVar37 = puVar32[3];
    uVar34 = uVar34 ^ uVar34 << 0xb;
    uVar34 = uVar34 ^ uVar34 >> 8 ^ uVar37 ^ uVar37 >> 0x13;
    puVar32[1] = puVar32[2];
    puVar32[2] = uVar37;
    puVar32[3] = uVar34;
    uVar37 = 0;
    uVar22 = (uint)((ulong)((long)local_230 - (long)local_238) >> 2);
    if (uVar22 != 0) {
      uVar37 = uVar34 / uVar22;
    }
    plVar24 = (long *)(*(long *)(param_3[0x11] + 8) +
                      (ulong)(uint)local_238[uVar34 - uVar37 * uVar22] * 0x18);
    lVar40 = plVar24[1];
    lVar27 = *plVar24;
    if (lVar40 != lVar27) {
      uVar29 = 0;
      uVar34 = 0;
      do {
        if ((ulong)((long)local_90 - (long)local_98 >> 3) <= (ulong)uVar34) break;
        if (*(int *)(lVar27 + uVar29 * 4) == 1) {
          pauVar5 = (undefined1 (*) [16])(local_220 + uVar29 * 2);
          lVar40 = *(long *)(param_2 + 0x310);
          for (plVar28 = *(long **)(lVar40 + 0xd0); plVar28 != *(long **)(lVar40 + 0xd8);
              plVar28 = plVar28 + 2) {
            if ((*(uint *)(plVar28 + 1) < 2) && (*(long *)(*plVar28 + 0x68) == 0x12dee00886)) {
              pppplVar17 = FUN_710262fb80(lVar40,plVar28,ppppppppplVar21,param_4,param_5,param_6,
                                          param_7,param_8);
              if (pppplVar17 != (long ****)0x0) {
                plVar28 = (long *)(*(code *)(*pppplVar17[0x12])[0x2b])();
                local_198 = plVar28[3];
                local_1a8 = plVar28[1];
                local_1b0 = (long ********)*plVar28;
                local_1a0 = plVar28[2];
                local_188 = plVar28[5];
                local_190 = plVar28[4];
                uStack_174 = (undefined4)((ulong)plVar28[7] >> 0x20);
                auVar44._12_4_ = uStack_174;
                auVar44._0_12_ = *(undefined1 (*) [12])(plVar28 + 6);
                auVar44 = NEON_ext(auVar44,*pauVar5,8,1);
                auVar44 = NEON_ext(auVar44,auVar44,8,1);
                uStack_178 = auVar44._8_4_;
                uStack_174 = auVar44._12_4_;
                local_180 = auVar44._0_8_;
                (*(code *)(*pppplVar17[0x12])[0x29])(pppplVar17[0x12],&local_1b0);
                ppplVar39 = pppplVar17[0x1b];
                uVar18 = extraout_x1_03;
                if (ppplVar39 != (long ***)0x0) {
                  local_138 = local_198;
                  local_140 = local_1a0;
                  local_148 = local_1a8;
                  local_150 = local_1b0;
                  local_118 = CONCAT44(uStack_174,uStack_178);
                  local_120 = local_180;
                  local_128 = local_188;
                  local_130 = local_190;
                  if (*(char *)(ppplVar39[1] + 0x15) != '\0') {
                    plVar28 = ppplVar39[1][9];
                    (**(code **)(*plVar28 + 0x20))(plVar28,&local_150);
                    uVar18 = extraout_x1_04;
                  }
                  *(undefined1 *)(ppplVar39 + 4) = 1;
                }
                *(undefined1 *)(pppplVar17 + 0x22) = 1;
                FUN_71025e9d50((long *)(pppplVar17 + 0x21),uVar18,(long ****)ppppppppplVar21,param_4
                               ,param_5,param_6,param_7,param_8);
              }
              break;
            }
          }
          plVar28 = *(long **)((long)local_98 + (ulong)uVar34 * 8);
          uVar34 = uVar34 + 1;
          if (plVar28 != (long *)0x0) {
            plVar33 = (long *)*plVar28;
            plVar8 = (long *)plVar28[1];
            if (plVar33 != plVar8) {
              do {
                lVar40 = *plVar33;
                pfVar2 = (float *)(lVar40 + 0x10);
                if (*(char *)(lVar40 + 0x128) == '\0' ||
                    (*(char *)(*(long *)(lVar40 + 8) + 0xe8) != '\0' ||
                    *(char *)(*(long *)(lVar40 + 8) + 0xe7) != '\0')) {
                  *(undefined8 *)(lVar40 + 0x18) = *(undefined8 *)((long)*pauVar5 + 8);
                  *(undefined8 *)pfVar2 = *(undefined8 *)*pauVar5;
                  *(undefined1 *)(lVar40 + 0x129) = 1;
                }
                else if ((1e-05 < ABS(*pfVar2 - (float)*(undefined8 *)*pauVar5)) ||
                        (1e-05 < ABS(*(float *)(lVar40 + 0x14) -
                                     (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20)))) {
                  *(undefined8 *)(lVar40 + 0x18) = *(undefined8 *)((long)*pauVar5 + 8);
                  *(undefined8 *)pfVar2 = *(undefined8 *)*pauVar5;
                  *(undefined1 *)(lVar40 + 0x12a) = 1;
                }
                if (1e-05 <= ABS(*(float *)(lVar40 + 0x30))) {
                  *(undefined4 *)(lVar40 + 0x30) = 0;
                  *(undefined1 *)(lVar40 + 0x129) = 1;
                }
                fVar43 = *(float *)(lVar40 + 0x50);
                fVar11 = *(float *)(lVar40 + 0x54);
                uVar12 = *(undefined4 *)(lVar40 + 0x58);
                uVar13 = *(undefined4 *)(lVar40 + 0x5c);
                if (1e-05 <= ABS(fVar43 + -1.0)) {
                  fVar43 = 1.0;
                  *(undefined1 *)(lVar40 + 0x129) = 1;
                  *(undefined4 *)(lVar40 + 0x58) = uVar12;
                  *(undefined4 *)(lVar40 + 0x5c) = uVar13;
                  *(undefined4 *)(lVar40 + 0x50) = 0x3f800000;
                  *(float *)(lVar40 + 0x54) = fVar11;
                }
                if (1e-05 <= ABS(fVar11 + -1.0)) {
                  *(undefined1 *)(lVar40 + 0x129) = 1;
                  *(undefined4 *)(lVar40 + 0x58) = uVar12;
                  *(undefined4 *)(lVar40 + 0x5c) = uVar13;
                  *(float *)(lVar40 + 0x50) = fVar43;
                  *(undefined4 *)(lVar40 + 0x54) = 0x3f800000;
                }
                plVar33 = plVar33 + 1;
              } while (plVar8 != plVar33);
              plVar33 = (long *)plVar28[1];
              for (plVar28 = (long *)*plVar28; plVar28 != plVar33; plVar28 = plVar28 + 1) {
                lVar40 = *plVar28;
                *(undefined1 *)(lVar40 + 0x128) = 1;
                if (*(long *)(lVar40 + 8) != 0) {
                  *(undefined8 *)(*(long *)(lVar40 + 8) + 0xd8) = 0xffffffffffffffff;
                  FUN_7100532bc0(*(long *)(lVar40 + 8),0);
                }
              }
            }
          }
          lVar40 = plVar24[1];
          lVar27 = *plVar24;
        }
        uVar29 = (ulong)((int)uVar29 + 1);
      } while (uVar29 < (ulong)(lVar40 - lVar27 >> 2));
    }
  }
  if (local_238 != (undefined4 *)0x0) {
    local_230 = local_238;
    FUN_710392eb40((ulong)local_238);
  }
  if (local_220 != (long ***)0x0) {
    local_218 = local_220;
    FUN_710392eb40((ulong)local_220);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    FUN_710392eb40((ulong)local_98);
  }
  return;
}

