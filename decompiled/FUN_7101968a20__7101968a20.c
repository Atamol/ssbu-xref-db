// addr:      7101968a20
// offset:    0x1968a20
// name:      FUN_7101968a20
// mangled:   
// signature: undefined __cdecl FUN_7101968a20(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101968a20(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  void *__src;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  ulong *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *__src_00;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar18;
  undefined8 extraout_x1_01;
  long ****pppplVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  ushort uVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  ushort *puVar28;
  ushort uVar29;
  short *psVar30;
  void *pvVar31;
  ushort *puVar32;
  long *plVar33;
  long lVar34;
  undefined8 uVar35;
  uint uVar36;
  long *plVar37;
  long lVar38;
  ulong *puVar39;
  ulong *puVar40;
  long *plVar41;
  int *__dest;
  ulong *puVar42;
  long *plVar43;
  ulong uVar44;
  void *pvVar45;
  ulong *puVar46;
  float fVar47;
  long local_308;
  ulong *local_2c8;
  ulong local_2c0;
  undefined2 local_2b8;
  undefined8 local_2b4;
  ushort local_2ac [18];
  long ***local_288;
  ulong local_280;
  undefined **local_88;
  ulong local_80;
  
  lVar24 = DAT_7105329d78;
  if (*(int *)(param_1 + 300) != 0) {
    lVar38 = *(long *)(param_1 + 0x140);
    lVar24 = *(long *)(lVar38 + 0x80);
    if (*(int *)(lVar24 + 0xe8) != 0) {
      return;
    }
    iVar10 = *(int *)(param_1 + 0x124);
    if (0 < iVar10) {
      *(int *)(param_1 + 0x124) = iVar10 + -1;
      lVar24 = *(long *)(lVar38 + 0x80);
      iVar10 = iVar10 + -1;
    }
    lVar11 = DAT_7105329d78;
    if (*(char *)(lVar24 + 0x19c) != '\0') {
      if (iVar10 < 0x12) {
        uVar23 = (uint)((long)iVar10 + 1);
        *(uint *)(param_1 + 0x124) = uVar23;
        if (0x12 < uVar23) goto LAB_7101969fe0;
        *(undefined4 *)(param_1 + ((long)iVar10 + 1) * 4 + 0xd8) = 6;
        lVar38 = *(long *)(param_1 + 0x140);
        lVar24 = *(long *)(lVar38 + 0x80);
      }
      if ((char)((long *)**(undefined8 **)(lVar24 + 0xf8))[3] != '\0') {
        FUN_7103775fa0((long *)**(undefined8 **)(lVar24 + 0xf8),param_2,(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      *(undefined1 *)(lVar38 + 0x70) = 1;
      return;
    }
    lVar38 = *(long *)(DAT_7105329d78 + 8);
    if (*(char *)(lVar24 + 0x19d) != '\0') {
      *(undefined4 *)(lVar38 + 0xd44) = 1;
      *(undefined4 *)(param_1 + 0x148) = 4;
      if (*(uint *)(param_1 + 0x124) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x124) * 4 + 0xd8) = 3;
        return;
      }
      goto LAB_7101969fe0;
    }
    __src_00 = (uint *)FUN_710392e290(0x10,0x32198,(long ****)param_3,param_4,param_5,param_6,
                                      param_7,param_8);
    if (__src_00 == (uint *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_2c8 = (ulong *)((ulong)local_2c8 & 0xffffffff00000000);
        local_288 = (long ***)0x32198;
        pppplVar19 = &local_288;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2c8);
        if (((uVar13 & 1) != 0) &&
           (__src_00 = (uint *)FUN_710392e290(0x10,0x32198,pppplVar19,param_4,param_5,param_6,
                                              param_7,param_8), __src_00 != (uint *)0x0))
        goto LAB_7101968f88;
      }
      __src_00 = (uint *)0x0;
    }
LAB_7101968f88:
    __src_00[0] = 0;
    __src_00[1] = 2;
    puVar3 = __src_00 + 0x42;
    puVar1 = __src_00 + 0x44;
    puVar2 = __src_00 + 0x4d;
    memset(__src_00 + 2,0,0x10a);
    puVar2[0] = 1;
    puVar2[1] = 0;
    __src_00[0x50] = 0;
    __src_00[0x51] = 0xd9ffff00;
    *(undefined8 *)((long)__src_00 + 0x14f) = 0;
    __src_00[0x52] = 0;
    __src_00[0x53] = 0;
    memset(__src_00 + 0x56,0,0x32040);
    plVar41 = *(long **)((char *)*DAT_7105314510 + 0x298);
    uVar23 = *(uint *)(lVar38 + 0x700);
    if (uVar23 == 0) {
      FUN_71023d0640(*(long *)(lVar11 + 8),(long)__src_00);
      lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
      if (__src_00[0x43] == 0) {
        *(undefined1 *)(__src_00 + 0x22) = 0;
      }
      else {
        uVar22 = *(ushort *)(lVar24 + 0x160);
        uVar23 = 0x811c9dc5;
        uVar36 = (uint)uVar22;
        if (uVar36 != 0) {
          puVar28 = (ushort *)(lVar24 + 0x162);
          do {
            uVar23 = uVar23 * 0x89 ^ uVar36;
            uVar36 = (uint)*puVar28;
            puVar28 = puVar28 + 1;
          } while (uVar36 != 0);
        }
        if (*puVar3 == uVar23) {
          uVar29 = (ushort)*puVar1;
          uVar7 = uVar22;
          if (uVar29 != 0) {
            puVar28 = (ushort *)(lVar24 + 0x162);
            puVar32 = (ushort *)((long)__src_00 + 0x112);
            do {
              uVar7 = uVar29;
              if (uVar22 == 0) break;
              if (uVar29 != uVar22) goto LAB_710196912c;
              uVar29 = *puVar32;
              uVar22 = *puVar28;
              puVar28 = puVar28 + 1;
              puVar32 = puVar32 + 1;
              uVar7 = uVar22;
            } while (uVar29 != 0);
          }
          if (uVar7 == 0) goto LAB_7101969554;
        }
LAB_710196912c:
        *(undefined1 *)(__src_00 + 0x22) = 0;
      }
LAB_7101969554:
      *(undefined2 *)(__src_00 + 0x44) = 0;
      __src_00[0x42] = 0;
      __src_00[0x43] = 0;
      FUN_7101748070(puVar3,(ushort *)(lVar24 + 0x160));
      pppplVar19 = (long ****)0x25800;
      memset(__src_00 + 0x3266,0,0x25800);
      __src_00[0x58] = 0;
      uVar18 = extraout_x1;
      if (*(long *)(lVar24 + 0x188) != 0) {
        pppplVar19 = (long ****)(ulong)*(uint *)(lVar24 + 400);
        __src_00[0x58] = *(uint *)(lVar24 + 400);
        memcpy(__src_00 + 0x3266,*(void **)(lVar24 + 0x188),(size_t)pppplVar19);
        uVar18 = extraout_x1_00;
      }
      *(undefined1 *)(__src_00 + 0x22) = 0;
      uVar23 = 0;
      if (*(char *)(*DAT_7105314510 + 1) == '\0') {
        puVar25 = *(undefined8 **)(*DAT_7105314510 + 0x1f8);
        while( true ) {
          uVar23 = **(uint **)*puVar25 + 1;
          **(uint **)*puVar25 = uVar23;
          if (uVar23 != 0) break;
          puVar25 = *(undefined8 **)(*DAT_7105314510 + 0x1f8);
        }
        *__src_00 = uVar23;
        uVar23 = **(uint **)**(undefined8 **)(*DAT_7105314510 + 0x1f8) + 1;
        **(uint **)**(undefined8 **)(*DAT_7105314510 + 0x1f8) = uVar23;
        __src_00[0x52] = uVar23;
        __src_00[0x53] = uVar23;
        FUN_71017bcd80(__src_00 + 2,uVar18,pppplVar19,param_4,param_5,param_6,param_7,param_8);
        if (((DAT_71052b92e0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_71052b92e0), iVar10 != 0)) {
          __cxa_guard_release(&DAT_71052b92e0);
        }
        *(undefined2 *)(__src_00 + 7) = 0x4000;
        if (((__src_00[1] == 2) && (*puVar2 < 3)) && (__src_00[0x4e] < 0xc)) {
          uVar23 = 0;
          if (((*(ulong *)(__src_00 + 0x50) & 0xff00000000000000) == 0xd900000000000000) &&
             (uVar23 = 0, (*(ulong *)(__src_00 + 0x50) & 0xffffffffff) != 0)) {
            if ((0xc800 < __src_00[0x57]) || (0x25800 < __src_00[0x58])) goto LAB_7101969660;
            puVar42 = (ulong *)*plVar41;
            pvVar31 = (void *)puVar42[2];
            uVar44 = *puVar42;
            *(int *)(puVar42 + 0x1f) = (int)puVar42[0x1f] + 1;
            uVar13 = (long)((long)pvVar31 - uVar44) / 0x32198;
            if (((int)uVar13 - 0x31U < 0x32) && (uVar13 < 99)) {
              uVar13 = puVar42[1];
              lVar24 = (long)(uVar13 - uVar44) / 0x32198;
              local_308 = FUN_710392e290(0x10,0x135fdc8,pppplVar19,param_4,param_5,param_6,param_7,
                                         param_8);
              if (local_308 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_2c8 = (ulong *)((ulong)local_2c8 & 0xffffffff00000000);
                  local_288 = (long ***)0x135fdc8;
                  pppplVar19 = &local_288;
                  uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2c8);
                  if (((uVar16 & 1) != 0) &&
                     (local_308 = FUN_710392e290(0x10,0x135fdc8,pppplVar19,param_4,param_5,param_6,
                                                 param_7,param_8), local_308 != 0))
                  goto LAB_7101969bc4;
                }
                local_308 = 0;
              }
LAB_7101969bc4:
              uVar26 = local_308 + lVar24 * 0x32198;
              pvVar31 = (void *)(local_308 + 0x135fdc8);
              uVar16 = uVar26;
              if (uVar13 != uVar44) {
                lVar27 = local_308 + lVar24 * 0x32198;
                lVar34 = 0;
                do {
                  pvVar45 = (void *)(lVar27 + -0x32198 + lVar34);
                  __src = (void *)((uVar13 - 0x32198) + lVar34);
                  memcpy(pvVar45,__src,0x108);
                  puVar3 = (uint *)(lVar27 + -0x32090 + lVar34);
                  *puVar3 = 0;
                  FUN_7101748070(puVar3,(ushort *)((uVar13 - 0x32088) + lVar34));
                  puVar25 = (undefined8 *)((uVar13 - 0x32064) + lVar34);
                  puVar12 = (undefined8 *)(lVar27 + -0x32064 + lVar34);
                  *puVar12 = *puVar25;
                  uVar18 = puVar25[1];
                  uVar4 = puVar25[2];
                  uVar35 = puVar25[4];
                  puVar12[3] = puVar25[3];
                  puVar12[4] = uVar35;
                  pppplVar19 = (long ****)0x32000;
                  puVar12[1] = uVar18;
                  puVar12[2] = uVar4;
                  uVar18 = puVar25[5];
                  uVar4 = puVar25[6];
                  uVar35 = puVar25[8];
                  puVar12[7] = puVar25[7];
                  puVar12[8] = uVar35;
                  puVar12[5] = uVar18;
                  puVar12[6] = uVar4;
                  uVar35 = puVar25[0xb];
                  uVar18 = puVar25[9];
                  uVar4 = puVar25[10];
                  *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar25 + 0xc);
                  puVar12[10] = uVar4;
                  puVar12[0xb] = uVar35;
                  puVar12[9] = uVar18;
                  memcpy((void *)((long)pvVar45 + 0x198),(void *)((long)__src + 0x198),0x32000);
                  lVar34 = lVar34 + -0x32198;
                } while (uVar44 - uVar13 != lVar34);
                uVar13 = *puVar42;
                uVar16 = local_308 + lVar24 * 0x32198 + lVar34;
              }
              *puVar42 = uVar16;
              puVar42[1] = uVar26;
              puVar42[2] = (ulong)pvVar31;
              if (uVar13 != 0) {
                FUN_710392eb40(uVar13);
                pvVar31 = (void *)puVar42[2];
              }
            }
            pvVar45 = (void *)puVar42[1];
            if (pvVar45 == pvVar31) {
              FUN_71017ce600(puVar42,__src_00,pppplVar19,param_4,param_5,param_6,param_7,param_8);
              uVar13 = puVar42[1];
            }
            else {
              memcpy(pvVar45,__src_00,0x108);
              *(undefined4 *)((long)pvVar45 + 0x108) = 0;
              FUN_7101748070((uint *)((long)pvVar45 + 0x108),(ushort *)puVar1);
              *(undefined8 *)((long)pvVar45 + 0x134) = *(undefined8 *)puVar2;
              uVar18 = *(undefined8 *)(__src_00 + 0x53);
              uVar4 = *(undefined8 *)(__src_00 + 0x4f);
              uVar35 = *(undefined8 *)(__src_00 + 0x51);
              *(undefined8 *)((long)pvVar45 + 0x154) = *(undefined8 *)(__src_00 + 0x55);
              *(undefined8 *)((long)pvVar45 + 0x14c) = uVar18;
              *(undefined8 *)((long)pvVar45 + 0x144) = uVar35;
              *(undefined8 *)((long)pvVar45 + 0x13c) = uVar4;
              uVar18 = *(undefined8 *)(__src_00 + 0x5b);
              uVar4 = *(undefined8 *)(__src_00 + 0x57);
              uVar35 = *(undefined8 *)(__src_00 + 0x59);
              *(undefined8 *)((long)pvVar45 + 0x174) = *(undefined8 *)(__src_00 + 0x5d);
              *(undefined8 *)((long)pvVar45 + 0x16c) = uVar18;
              *(undefined8 *)((long)pvVar45 + 0x164) = uVar35;
              *(undefined8 *)((long)pvVar45 + 0x15c) = uVar4;
              uVar18 = *(undefined8 *)(__src_00 + 0x5f);
              uVar4 = *(undefined8 *)(__src_00 + 0x61);
              uVar35 = *(undefined8 *)(__src_00 + 99);
              *(uint *)((long)pvVar45 + 0x194) = __src_00[0x65];
              pppplVar19 = (long ****)0x32000;
              *(undefined8 *)((long)pvVar45 + 0x18c) = uVar35;
              *(undefined8 *)((long)pvVar45 + 0x184) = uVar4;
              *(undefined8 *)((long)pvVar45 + 0x17c) = uVar18;
              memcpy((void *)((long)pvVar45 + 0x198),__src_00 + 0x66,0x32000);
              uVar13 = puVar42[1] + 0x32198;
              puVar42[1] = uVar13;
            }
            uVar44 = *puVar42;
            uVar23 = *__src_00;
            puVar40 = puVar42 + 10;
            if ((ulong *)*puVar40 == (ulong *)0x0) {
              uVar16 = *puVar40;
              puVar46 = puVar40;
            }
            else {
              puVar39 = puVar42 + 10;
              puVar8 = (ulong *)*puVar40;
              do {
                while (puVar46 = puVar8, uVar23 < *(uint *)((long)puVar46 + 0x1c)) {
                  puVar40 = puVar46;
                  puVar39 = puVar46;
                  puVar8 = (ulong *)*puVar46;
                  if ((ulong *)*puVar46 == (ulong *)0x0) goto LAB_7101969ea4;
                }
                puVar40 = puVar39;
                if (uVar23 <= *(uint *)((long)puVar46 + 0x1c)) break;
                puVar40 = puVar46 + 1;
                puVar39 = puVar40;
                puVar8 = (ulong *)*puVar40;
              } while ((ulong *)*puVar40 != (ulong *)0x0);
LAB_7101969ea4:
              uVar16 = *puVar40;
            }
            if (uVar16 == 0) {
              plVar14 = (long *)FUN_710392e290(0x10,0x28,pppplVar19,param_4,param_5,param_6,param_7,
                                               param_8);
              if (plVar14 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_2c8 = (ulong *)((ulong)local_2c8 & 0xffffffff00000000);
                  local_288 = (long ***)&DAT_00000028;
                  pppplVar19 = &local_288;
                  uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2c8);
                  if (((uVar16 & 1) != 0) &&
                     (plVar14 = (long *)FUN_710392e290(0x10,0x28,pppplVar19,param_4,param_5,param_6,
                                                       param_7,param_8), plVar14 != (long *)0x0))
                  goto LAB_7101969f1c;
                }
                plVar14 = (long *)0x0;
              }
LAB_7101969f1c:
              *(uint *)((long)plVar14 + 0x1c) = uVar23;
              *(int *)(plVar14 + 4) = (int)((long)(uVar13 - uVar44) / 0x32198) + -1;
              *plVar14 = 0;
              plVar14[1] = 0;
              plVar14[2] = (long)puVar46;
              *puVar40 = (ulong)plVar14;
              if (*(ulong *)puVar42[9] != 0) {
                puVar42[9] = *(ulong *)puVar42[9];
                plVar14 = (long *)*puVar40;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)puVar42[10],plVar14);
              puVar42[0xb] = puVar42[0xb] + 1;
              uVar23 = *__src_00;
            }
            FUN_71017ce970((long)puVar42,uVar23,pppplVar19,param_4,param_5,param_6,param_7,param_8);
            *(undefined1 *)((long)puVar42 + 0xfc) = 1;
            uVar23 = *__src_00;
          }
        }
        else {
LAB_7101969660:
          uVar23 = 0;
        }
      }
      *(uint *)(lVar38 + 0x700) = uVar23;
      lVar24 = *(long *)**(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 0x20);
      iVar5 = *(int *)(lVar24 + 0x18);
      iVar10 = 999999999;
      if (iVar5 + 1U < 999999999) {
        iVar10 = iVar5 + 1;
      }
      *(int *)(lVar24 + 0x18) = iVar10;
      plVar14 = (long *)(*DAT_7105314508 + 0x5b4dd8);
      plVar43 = (long *)(*DAT_7105314508 + 0x5b4de8);
      if (*plVar43 == 0) {
        plVar15 = (long *)FUN_710392e290(0x10,0x18,pppplVar19,param_4,param_5,param_6,param_7,
                                         param_8);
        if (plVar15 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_2c8 = (ulong *)((ulong)local_2c8 & 0xffffffff00000000);
            local_288 = (long ***)&SUB_00000018;
            pppplVar19 = &local_288;
            uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2c8);
            if (((uVar13 & 1) != 0) &&
               (plVar15 = (long *)FUN_710392e290(0x10,0x18,pppplVar19,param_4,param_5,param_6,
                                                 param_7,param_8), plVar15 != (long *)0x0))
            goto LAB_7101969734;
          }
          plVar15 = (long *)0x0;
        }
LAB_7101969734:
        *(undefined1 *)(plVar15 + 2) = 0;
        plVar15[1] = (long)plVar14;
        lVar24 = *plVar14;
        *plVar15 = lVar24;
        *(long **)(lVar24 + 8) = plVar15;
        *plVar14 = (long)plVar15;
        *plVar43 = *plVar43 + 1;
      }
      else {
        *(byte *)(*plVar14 + 0x10) = *(byte *)(*plVar14 + 0x10) & 1;
      }
    }
    else {
      if (*(char *)*DAT_7105314510 == '\0') {
        plVar14 = (long *)*plVar41;
        lVar24 = *plVar14;
        if ((lVar24 != plVar14[1]) && (plVar14[0xb] != 0)) {
          plVar15 = plVar14 + 10;
          plVar37 = (long *)*plVar15;
          plVar43 = plVar15;
          if (plVar37 != (long *)0x0) {
            do {
              bVar9 = *(uint *)((long)plVar37 + 0x1c) < uVar23;
              if (!bVar9) {
                plVar43 = plVar37;
              }
              plVar37 = (long *)plVar37[bVar9];
            } while (plVar37 != (long *)0x0);
            if (((plVar43 != plVar15) && (*(uint *)((long)plVar43 + 0x1c) <= uVar23)) &&
               (uVar13 = (ulong)(int)plVar43[4], (int)plVar43[4] != -1)) {
              if ((ulong)((plVar14[1] - lVar24) / 0x32198) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              if (*(short *)(lVar24 + uVar13 * 0x32198 + 4) == 2) {
                memcpy(__src_00,(void *)(lVar24 + uVar13 * 0x32198),0x32198);
              }
            }
          }
        }
      }
      FUN_71023d0640(*(long *)(lVar11 + 8),(long)__src_00);
      lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
      if (__src_00[0x43] == 0) {
        *(undefined1 *)(__src_00 + 0x22) = 0;
      }
      else {
        uVar22 = *(ushort *)(lVar24 + 0x160);
        uVar23 = 0x811c9dc5;
        uVar36 = (uint)uVar22;
        if (uVar36 != 0) {
          puVar28 = (ushort *)(lVar24 + 0x162);
          do {
            uVar23 = uVar23 * 0x89 ^ uVar36;
            uVar36 = (uint)*puVar28;
            puVar28 = puVar28 + 1;
          } while (uVar36 != 0);
        }
        if (*puVar3 == uVar23) {
          uVar29 = (ushort)*puVar1;
          uVar7 = uVar22;
          if (uVar29 != 0) {
            puVar28 = (ushort *)(lVar24 + 0x162);
            puVar32 = (ushort *)((long)__src_00 + 0x112);
            do {
              uVar7 = uVar29;
              if (uVar22 == 0) break;
              if (uVar29 != uVar22) goto LAB_710196931c;
              uVar29 = *puVar32;
              uVar22 = *puVar28;
              puVar28 = puVar28 + 1;
              puVar32 = puVar32 + 1;
              uVar7 = uVar22;
            } while (uVar29 != 0);
          }
          if (uVar7 == 0) goto LAB_7101969320;
        }
LAB_710196931c:
        *(undefined1 *)(__src_00 + 0x22) = 0;
      }
LAB_7101969320:
      *(undefined2 *)(__src_00 + 0x44) = 0;
      __src_00[0x42] = 0;
      __src_00[0x43] = 0;
      FUN_7101748070(puVar3,(ushort *)(lVar24 + 0x160));
      pppplVar19 = (long ****)0x25800;
      memset(__src_00 + 0x3266,0,0x25800);
      __src_00[0x58] = 0;
      if (*(long *)(lVar24 + 0x188) == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(uint *)(lVar24 + 400);
        pppplVar19 = (long ****)(ulong)uVar23;
        __src_00[0x58] = uVar23;
        memcpy(__src_00 + 0x3266,*(void **)(lVar24 + 0x188),(size_t)pppplVar19);
      }
      plVar14 = DAT_7105314510;
      if (((((*(char *)(*DAT_7105314510 + 1) == '\0') && (__src_00[1] == 2)) &&
           ((*puVar2 < 3 &&
            ((__src_00[0x4e] < 0xc &&
             ((*(ulong *)(__src_00 + 0x50) & 0xff00000000000000) == 0xd900000000000000)))))) &&
          ((*(ulong *)(__src_00 + 0x50) & 0xffffffffff) != 0)) &&
         (((__src_00[0x57] < 0xc801 && (uVar23 < 0x25801)) &&
          (plVar43 = (long *)*plVar41, plVar43[0xb] != 0)))) {
        uVar23 = *(uint *)(lVar38 + 0x700);
        plVar37 = plVar43 + 10;
        plVar33 = (long *)*plVar37;
        plVar15 = plVar37;
        if (plVar33 != (long *)0x0) {
          do {
            bVar9 = *(uint *)((long)plVar33 + 0x1c) < uVar23;
            if (!bVar9) {
              plVar15 = plVar33;
            }
            plVar33 = (long *)plVar33[bVar9];
          } while (plVar33 != (long *)0x0);
          if (((plVar15 != plVar37) && (*(uint *)((long)plVar15 + 0x1c) <= uVar23)) &&
             (uVar13 = (ulong)(int)plVar15[4], (int)plVar15[4] != -1)) {
            lVar24 = *plVar43;
            if ((ulong)((plVar43[1] - lVar24) / 0x32198) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            pppplVar19 = (long ****)0x32198;
            __dest = (int *)(lVar24 + uVar13 * 0x32198);
            memcpy(__dest,__src_00,0x32198);
            iVar10 = **(int **)**(undefined8 **)(*plVar14 + 0x1f8) + 1;
            **(int **)**(undefined8 **)(*plVar14 + 0x1f8) = iVar10;
            __dest[0x53] = iVar10;
            local_2c8 = (ulong *)0x0;
            iVar10 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_288);
            if (iVar10 != 0) {
              nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_288);
            }
            FUN_7103741810(local_288,(ulong *)&local_2c8);
            lVar34 = lVar24 + uVar13 * 0x32198;
            *(ushort *)(lVar34 + 0x1e) = (ushort)local_2c8 & 0xfff;
            *(byte *)(lVar34 + 0x20) = (byte)((uint)local_2c8 >> 0xc) & 0xf;
            *(byte *)(lVar34 + 0x21) = (byte)((ulong)local_2c8 >> 0x10) & 0x1f;
            *(byte *)(lVar34 + 0x24) = (byte)((ulong)local_2c8 >> 0x20) & 0x3f;
            *(byte *)(lVar34 + 0x22) = (byte)((uint)local_2c8 >> 0x15) & 0x1f;
            *(byte *)(lVar34 + 0x23) = (byte)((ulong)local_2c8 >> 0x18) >> 2;
            if (((DAT_71052b92e0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_71052b92e0), iVar10 != 0)) {
              __cxa_guard_release(&DAT_71052b92e0);
            }
            *(undefined2 *)(lVar24 + uVar13 * 0x32198 + 0x1c) = 0x4000;
            FUN_71017ce970((long)plVar43,*__dest,pppplVar19,param_4,param_5,param_6,param_7,param_8)
            ;
            *(undefined1 *)((long)plVar43 + 0xfc) = 1;
          }
        }
      }
    }
    *(undefined4 *)(*(long *)(lVar11 + 8) + 0xac0) = *(undefined4 *)(lVar38 + 0x700);
    lVar24 = *(long *)(lVar11 + 8);
    FUN_710375aa90((long *)&local_2c8,"stage_edit",pppplVar19,param_4,param_5,param_6,param_7,
                   param_8);
    puVar42 = local_2c8;
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xac0);
    nn::prepo::PlayReport::Add((char *)(*local_2c8 + 0x4020),(Any64BitId *)&DAT_71042f4a4b);
    local_288 = (long ***)(ulong)*(byte *)(lVar24 + 0xab8);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"is_created");
    local_288 = (long ***)(ulong)*(byte *)(lVar24 + 0xab9);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"use_grid");
    local_288 = (long ***)(ulong)*(byte *)(lVar24 + 0xaba);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"use_testplay");
    local_288 = (long ***)(ulong)*(byte *)(lVar24 + 0xabb);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"use_layer");
    local_288 = (long ***)(ulong)*(byte *)(lVar24 + 0xabc);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"member_is_four");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xac4);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_rail");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xac8);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_gear");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xacc);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_cannon");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xad0);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_spring");
    puVar42 = local_2c8;
    local_288 = (long ***)(ulong)(*(uint *)(lVar24 + 0xad4) >> 1);
    nn::prepo::PlayReport::Add((char *)(*local_2c8 + 0x4020),(Any64BitId *)"num_warp_zone");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xad8);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_bumper");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xadc);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_ladder");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xae0);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_bomb_block");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xae4);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_explosion_block_");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xae8);
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_wind_area");
    local_288 = (long ***)(ulong)*(uint *)(lVar24 + 0xaec);
    pppplVar19 = &local_288;
    nn::prepo::PlayReport::Add((char *)(*puVar42 + 0x4020),(Any64BitId *)"num_switch");
    iVar10 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar10 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar10)) {
LAB_7101969fe0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*puVar42 + 0x4020));
    local_2c8 = (ulong *)0x0;
    if (puVar42 != (ulong *)0x0) {
      uVar13 = *puVar42;
      *puVar42 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40((ulong)puVar42);
    }
    *(undefined2 *)(lVar38 + 0x728) = 0;
    *(undefined8 *)(lVar38 + 0x720) = 0;
    FUN_7101748070((uint *)(lVar38 + 0x720),(ushort *)puVar1);
    FUN_71017ce460(*plVar41);
    if (*(int *)(param_1 + 0x124) < 0x12) {
      uVar23 = *(int *)(param_1 + 0x124) + 1;
      *(uint *)(param_1 + 0x124) = uVar23;
      if (0x12 < uVar23) goto LAB_7101969fe0;
      *(undefined4 *)(param_1 + (long)(int)uVar23 * 4 + 0xd8) = 9;
      if (*(int *)(param_1 + 0x124) < 0x12) {
        uVar23 = *(int *)(param_1 + 0x124) + 1;
        *(uint *)(param_1 + 0x124) = uVar23;
        if (0x12 < uVar23) goto LAB_7101969fe0;
        *(undefined4 *)(param_1 + (long)(int)uVar23 * 4 + 0xd8) = 8;
      }
    }
    lVar24 = *(long *)(param_1 + 0x140);
    plVar41 = (long *)**(undefined8 **)(*(long *)(lVar24 + 0x80) + 0xf8);
    if ((char)plVar41[3] != '\0') {
      FUN_7103775fa0(plVar41,extraout_x1_01,pppplVar19,param_4,param_5,param_6,param_7,param_8);
    }
    *(undefined1 *)(lVar24 + 0x70) = 1;
    if (__src_00 == (uint *)0x0) {
      return;
    }
    FUN_710392eb40((ulong)__src_00);
    return;
  }
  lVar38 = *(long *)(DAT_7105329d78 + 8);
  local_2c8._0_4_ = 1;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2ac[0] = 0;
  local_2c0 = 0xd9ffff0000000000;
  if ((uint *)&local_2b4 != (uint *)(lVar38 + 0x720)) {
    FUN_7101748070((uint *)&local_2b4,(ushort *)(lVar38 + 0x728));
  }
  local_2c8 = (ulong *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(lVar38 + 0x704));
  local_2c0 = *(ulong *)(lVar38 + 0x710);
  lVar24 = *(long *)(lVar24 + 8);
  plVar41 = *(long **)(lVar24 + 0x580);
  if (plVar41 == (long *)0x0) goto LAB_7101968b60;
  lVar38 = *plVar41;
  if (lVar38 == 0) {
LAB_7101968bb4:
    uVar20 = 1;
  }
  else {
    fVar47 = FUN_7103198780(lVar38);
    plVar41 = (long *)**(long **)(lVar24 + 0x580);
    if (plVar41 == (long *)0x0) {
      if (0.0 <= fVar47) goto LAB_7101968bb4;
    }
    else if (*(float *)(*(long *)(*plVar41 + 0x30) + 8) <= fVar47) goto LAB_7101968bb4;
LAB_7101968b60:
    uVar20 = 0;
  }
  local_2b8 = CONCAT11(local_2b8._1_1_,uVar20);
  uVar21 = local_2b8._1_1_;
  if (*(int *)(param_1 + 0x14c) == 1) {
    local_2b8 = CONCAT11(1,uVar20);
    uVar21 = 1;
  }
  lVar38 = *(long *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x14c) = 2;
  plVar41 = *(long **)(lVar38 + 0x80);
  *(undefined1 *)((long)plVar41 + 0x19e) = uVar21;
  lVar24 = *(long *)plVar41[0x1f];
  if ((uint)local_2c8 == 2) {
    FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0x10),0x71042b4b0c);
    lVar11 = *(long *)(lVar24 + 0x10);
    pcVar17 = "preview_l";
  }
  else if ((uint)local_2c8 == 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0x10),0x7104433804);
    lVar11 = *(long *)(lVar24 + 0x10);
    pcVar17 = "preview_m";
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0x10),0x71042a3733);
    lVar11 = *(long *)(lVar24 + 0x10);
    pcVar17 = "preview_s";
  }
  FUN_7103778300(0x3f800000,lVar11,(long)pcVar17);
  if ((char)local_2b8 == '\0') {
    pcVar17 = "limit_off";
  }
  else {
    pcVar17 = "limit_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0x10),(long)pcVar17);
  if (local_2b4._4_4_ == 0) {
    memset(&local_288,0,0x200);
    iVar10 = *(int *)(*(long *)**(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 0x20) + 0x18
                     );
    uVar23 = 999;
    if (iVar10 + 1 < 999) {
      uVar23 = iVar10 + 1;
    }
    param_5 = (long ****)(ulong)uVar23;
    param_3 = "mnu_stgcreate_save_sample_name";
    param_4 = (byte ****)0x1;
    FUN_71037ab600(&local_288,0x100,(byte *)"mnu_stgcreate_save_sample_name",1);
    if ((short)local_288 == 0) {
      uVar13 = 0;
    }
    else {
      uVar23 = 0xffffffff;
      psVar30 = (short *)((ulong)&local_288 | 2);
      do {
        sVar6 = *psVar30;
        uVar23 = uVar23 + 1;
        psVar30 = psVar30 + 1;
      } while (sVar6 != 0);
      uVar13 = 0;
      do {
        lVar24 = uVar13 * 2;
        uVar36 = (uint)uVar13;
        uVar13 = uVar13 + 1;
        *(short *)((long)plVar41 + lVar24 + 0x160) = (short)local_288;
        if ((uVar23 <= uVar36) || (0xf < uVar13)) break;
        local_288._0_2_ = *(short *)(((ulong)&local_288 | 2) + lVar24);
      } while ((short)local_288 != 0);
    }
    *(undefined2 *)((long)plVar41 + uVar13 * 2 + 0x160) = 0;
    *(undefined2 *)(plVar41 + 0x30) = 0;
    FUN_7101eb95d0((uint *)(plVar41 + 0x2b));
  }
  else {
    *(undefined2 *)(plVar41 + 0x2c) = 0;
    plVar41[0x2b] = 0;
    FUN_7101748070((uint *)(plVar41 + 0x2b),local_2ac);
  }
  FUN_7103776640(&local_88,*(long *)plVar41[0x1f] + 8,(byte ****)"set_btn_00",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_288,(long)&local_88,(long ****)"set_txt_name",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar13 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar13 != 0) {
    uVar44 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar44 != 0) {
      FUN_710392eb40(uVar44);
    }
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_280;
  if (*(long **)(local_280 + 0x10) != (long *)0x0) {
    param_3 = &DAT_ffffffff;
    param_4 = (byte ****)0x1;
    FUN_71037a2270(*(long **)(local_280 + 0x10),(ushort *)(plVar41 + 0x2c),0xffffffff,1);
  }
  local_288 = (long ***)&PTR_FUN_710523d9a8;
  local_280 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7101ebadf0(0.5,(long)(plVar41 + 0x23),local_2c0,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  if (*(char *)((long)plVar41 + 0x19e) == '\0') {
    FUN_7103771a80(plVar41 + 0x20,0,1);
    if ((*(char *)((long)plVar41 + 0x14c) != '\0') && (*(char *)((long)plVar41 + 0x14d) != '\0')) {
      *(undefined1 *)((long)plVar41 + 0x14d) = 0;
      FUN_7103778300(0x3f800000,plVar41[0x24],0x7104281227);
      *(undefined4 *)(plVar41 + 0x29) = 0xffffffff;
      if (*(long *)(plVar41[0x26] + 8) != 0) {
        puVar25 = *(undefined8 **)(*(long *)(plVar41[0x26] + 8) + 0x78);
        if (((DAT_710593ba40 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), iVar10 != 0)) {
          if (((DAT_710593ba48 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
            DAT_710593ba50 = 0;
            __cxa_guard_release(&DAT_710593ba48);
          }
          DAT_710593ba58 = &DAT_710593ba50;
          __cxa_guard_release(&DAT_710593ba40);
        }
        if (puVar25 != (undefined8 *)0x0) {
          for (puVar12 = (undefined8 *)(**(code **)*puVar25)(puVar25); puVar12 != (undefined8 *)0x0;
              puVar12 = (undefined8 *)*puVar12) {
            if ((undefined8 **)puVar12 == &DAT_710593ba58) {
              lVar24 = puVar25[3];
              *(undefined4 *)(puVar25 + 0xb) = *(undefined4 *)((long)puVar25 + 0x54);
              if (lVar24 != 0) {
                *(undefined4 *)(lVar24 + 0x30) = *(undefined4 *)((long)puVar25 + 0x54);
                *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
              }
              lVar24 = puVar25[4];
              if (lVar24 != 0) {
                *(undefined4 *)(lVar24 + 0x30) = *(undefined4 *)(puVar25 + 0xb);
                *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
              }
              if ((long *)puVar25[5] != (long *)0x0) {
                (**(code **)(*(long *)puVar25[5] + 0x180))(0);
              }
              plVar14 = (long *)puVar25[6];
              if (plVar14 != (long *)0x0) {
                if (*(char *)((long)puVar25 + 99) == '\0') {
                  (**(code **)(*plVar14 + 0x180))(0);
                }
                else {
                  (**(code **)(*plVar14 + 400))();
                }
              }
              *(undefined2 *)((long)puVar25 + 100) = 0;
              break;
            }
          }
        }
      }
      FUN_7103778950(*(long *)(plVar41[0x26] + 8));
    }
  }
  else {
    FUN_7103771a80(plVar41 + 0x20,1,1);
    if ((*(char *)((long)plVar41 + 0x14c) != '\0') && (*(char *)((long)plVar41 + 0x14d) != '\x01'))
    {
      *(undefined1 *)((long)plVar41 + 0x14d) = 1;
      FUN_7103778300(0x3f800000,plVar41[0x24],0x710436caeb);
      *(undefined4 *)(plVar41 + 0x29) = 0x5a;
    }
  }
  FUN_7103775dc0(*(long **)plVar41[0x1f],0,(long ****)&DAT_00001000,param_4,param_5,param_6,param_7,
                 param_8);
  plVar41[0x1d] = 0xffffffff;
  *(undefined4 *)(plVar41 + 0x1e) = 0xffffffff;
  *(undefined4 *)((long)plVar41 + 0xe4) = 0;
  plVar41[1] = 0;
  plVar41[2] = 0;
  *(undefined8 *)((long)plVar41 + 0xdc) = 0;
  *(undefined8 *)((long)plVar41 + 0xd4) = 0;
  *(undefined8 *)((long)plVar41 + 0xcc) = 0;
  *(undefined8 *)((long)plVar41 + 0xc4) = 0;
  *(undefined8 *)((long)plVar41 + 0xbc) = 0;
  *(undefined8 *)((long)plVar41 + 0xb4) = 0;
  *(undefined8 *)((long)plVar41 + 0xac) = 0;
  *(undefined8 *)((long)plVar41 + 0xa4) = 0;
  *(undefined8 *)((long)plVar41 + 0x9c) = 0;
  *(undefined1 *)((long)plVar41 + 0xf4) = 0;
  *(undefined4 *)(plVar41 + 0x13) = 1;
  FUN_7101eb8a60(plVar41);
  *(undefined1 *)(lVar38 + 0x70) = 0;
  return;
}

