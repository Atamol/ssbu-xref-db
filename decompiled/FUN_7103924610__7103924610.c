// addr:      7103924610
// offset:    0x3924610
// name:      FUN_7103924610
// mangled:   
// signature: undefined __cdecl FUN_7103924610(long param_1)


void FUN_7103924610(long param_1)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  float *pfVar10;
  bool bVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  ulong uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  int iVar31;
  ulong *puVar32;
  long lVar33;
  float *pfVar34;
  long *plVar35;
  ulong uVar36;
  long *plVar37;
  long *plVar38;
  ulong *puVar39;
  long *plVar40;
  float *pfVar41;
  uint uVar42;
  ulong uVar43;
  long *plVar44;
  undefined8 *puVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  ulong local_80;
  float local_78;
  
  plVar44 = *(long **)(param_1 + 0x20);
  plVar4 = (long *)(param_1 + 0x18);
  *(byte *)((long)plVar44 + 0x42) = *(byte *)((long)plVar44 + 0x42) | 8;
  puVar5 = (ulong *)(param_1 + 0x40);
LAB_710392466c:
  plVar35 = plVar44 + 5;
  lVar19 = *(long *)*plVar44;
  lVar20 = *(long *)(*(long *)(lVar19 + 0x18) + 0x30);
  puVar39 = (ulong *)(plVar44 + 4);
  uVar36 = *puVar39;
LAB_71039246a4:
  do {
    puVar21 = (uint *)*plVar35;
    *plVar35 = (long)(puVar21 + 1);
    bVar7 = *(byte *)(param_1 + 200);
    uVar18 = *puVar21;
    if ((bVar7 & 0xc) != 0) {
      iVar31 = *(int *)(param_1 + 0xc0) + -1;
      plVar37 = *(long **)(param_1 + 0x20);
      *(int *)(param_1 + 0xc0) = iVar31;
      bVar9 = iVar31 == 0 & bVar7 >> 3;
      if (bVar9 == 1) {
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
        bVar8 = *(byte *)((long)plVar37 + 0x42);
joined_r0x007103924704:
        if ((bVar8 >> 6 & 1) == 0) {
          if (bVar9 != 0) {
            FUN_71038fb7a0(param_1,3,0xffffffff);
          }
          if ((bVar7 >> 2 & 1) == 0) goto LAB_71039247a0;
          lVar22 = *(long *)(*(long *)(*(long *)*plVar37 + 0x18) + 0x38);
          lVar25 = *(long *)(*(long *)(*(long *)*plVar37 + 0x18) + 0x48);
          iVar31 = (int)((ulong)(plVar37[5] - lVar22) >> 2) + -1;
          if (lVar25 == 0) {
            iVar16 = -1;
            if (iVar31 != 0) goto LAB_7103924768;
LAB_7103924794:
            FUN_71038fb7a0(param_1,2,iVar16);
          }
          else {
            iVar16 = *(int *)(lVar25 + (long)iVar31 * 4);
            if (iVar31 == 0) goto LAB_7103924794;
LAB_7103924768:
            if ((ulong)plVar37[5] <= *(ulong *)(param_1 + 0x28)) goto LAB_7103924794;
            if (lVar25 == 0) {
              if (iVar16 != -1) goto LAB_7103924794;
            }
            else if (iVar16 != *(int *)(lVar25 + ((long)((*(ulong *)(param_1 + 0x28) - lVar22) *
                                                         0x40000000 + -0x100000000) >> 0x1e)))
            goto LAB_7103924794;
          }
LAB_71039247a0:
          *(long *)(param_1 + 0x28) = plVar37[5];
          if (*(char *)(param_1 + 0xc) == '\x01') {
            if (bVar9 != 0) {
              *(undefined4 *)(param_1 + 0xc0) = 1;
            }
            plVar37[5] = plVar37[5] + -4;
            *(byte *)((long)plVar37 + 0x42) = *(byte *)((long)plVar37 + 0x42) | 0x40;
            *plVar37 = *(long *)(param_1 + 0x10) + -0x10;
                    /* WARNING: Subroutine does not return */
            FUN_71038fb3c0(param_1,1);
          }
        }
        else {
          *(byte *)((long)plVar37 + 0x42) = bVar8 & 0xbf;
        }
      }
      else if ((bVar7 >> 2 & 1) != 0) {
        bVar8 = *(byte *)((long)plVar37 + 0x42);
        goto joined_r0x007103924704;
      }
      uVar36 = *puVar39;
    }
  } while (0x2d < (uVar18 & 0x3f));
  pfVar27 = (float *)(uVar36 + (ulong)(byte)(uVar18 >> 6) * 0x10);
  uVar43 = (ulong)(uVar18 >> 6) & 0xff;
  uVar42 = (uint)uVar43;
  switch(uVar18 & 0x3f) {
  case 0:
    puVar32 = (ulong *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    goto LAB_71039252ec;
  case 1:
    uVar43 = (ulong)(uVar18 >> 10) & 0x3ffff0;
    goto LAB_710392501c;
  case 2:
    puVar21 = (uint *)*plVar35;
    *plVar35 = (long)(puVar21 + 1);
    uVar43 = (ulong)(*puVar21 >> 2) & 0x3ffffff0;
LAB_710392501c:
    puVar32 = (ulong *)(lVar20 + uVar43);
    goto LAB_71039252ec;
  case 3:
    *pfVar27 = (float)(uVar18 >> 0x17);
    *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 1;
    if ((uVar18 & 0x7fc000) != 0) goto LAB_7103924f40;
    goto LAB_71039246a4;
  case 4:
    uVar18 = uVar18 >> 0x17;
    uVar17 = uVar18 + 1 & 7;
    uVar42 = uVar18;
    if (uVar17 != 0) {
      pfVar27 = (float *)(uVar36 + ((uVar17 - 1) + uVar43) * 0x10 + 0x10);
      iVar31 = -uVar17;
      puVar29 = (undefined4 *)(uVar36 + uVar43 * 0x10 + 8);
      do {
        iVar31 = iVar31 + 1;
        *puVar29 = 0;
        puVar29 = puVar29 + 4;
      } while (iVar31 != 0);
      uVar42 = uVar18 - uVar17;
    }
    if (6 < uVar18) {
      uVar18 = uVar42 - 7;
      if ((uVar18 >> 3 & 1) == 0) {
        pfVar27[2] = 0.0;
        pfVar27[6] = 0.0;
        uVar42 = uVar42 - 8;
        pfVar27[10] = 0.0;
        pfVar27[0xe] = 0.0;
        pfVar27[0x12] = 0.0;
        pfVar27[0x16] = 0.0;
        pfVar27[0x1a] = 0.0;
        pfVar27[0x1e] = 0.0;
        pfVar27 = pfVar27 + 0x20;
      }
      if (7 < uVar18) {
        uVar42 = ~uVar42;
        pfVar27 = pfVar27 + 0x22;
        do {
          pfVar27[-0x20] = 0.0;
          pfVar27[-0x1c] = 0.0;
          uVar42 = uVar42 + 0x10;
          pfVar27[-0x18] = 0.0;
          pfVar27[-0x14] = 0.0;
          pfVar27[-0x10] = 0.0;
          pfVar27[-0xc] = 0.0;
          pfVar27[-8] = 0.0;
          pfVar27[-4] = 0.0;
          *pfVar27 = 0.0;
          pfVar27[4] = 0.0;
          pfVar27[8] = 0.0;
          pfVar27[0xc] = 0.0;
          pfVar27[0x10] = 0.0;
          pfVar27[0x14] = 0.0;
          pfVar27[0x18] = 0.0;
          pfVar27[0x1c] = 0.0;
          pfVar27 = pfVar27 + 0x40;
        } while (uVar42 != 0);
      }
    }
    goto LAB_71039246a4;
  case 5:
    puVar32 = (ulong *)**(undefined8 **)(lVar19 + ((ulong)(uVar18 >> 0x14) & 0xff8) + 0x20);
LAB_71039252ec:
    uVar43 = puVar32[1];
    *(ulong *)pfVar27 = *puVar32;
    *(ulong *)(pfVar27 + 2) = uVar43;
    goto LAB_71039246a4;
  case 6:
    puVar32 = (ulong *)**(undefined8 **)(lVar19 + ((ulong)(uVar18 >> 0x14) & 0xff8) + 0x20);
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    if ((int)puVar32[1] != 0x45) goto LAB_71039253d8;
    puVar15 = FUN_710391dde0(*puVar32,pfVar34);
    if ((int)puVar15[1] != 0) goto LAB_71039253d0;
    lVar22 = *(long *)(*puVar32 + 0x28);
    if ((lVar22 == 0) || (bVar7 = *(byte *)(lVar22 + 10), (bVar7 & 1) != 0)) {
LAB_71039253c8:
      puVar15 = &DAT_7104862960;
      goto LAB_71039253d0;
    }
    plVar37 = (long *)(*(long *)(lVar22 + 0x18) +
                      (long)(int)(*(uint *)(*(long *)(*plVar4 + 0xe0) + 0xc) &
                                 (-1 << (ulong)(*(byte *)(lVar22 + 0xb) & 0x1f) ^ 0xffffffffU)) *
                      0x20);
    do {
      if (((int)plVar37[3] == 0x44) && (plVar37[2] == *(long *)(*plVar4 + 0xe0)))
      goto LAB_71039253b8;
      piVar1 = (int *)((long)plVar37 + 0x1c);
      plVar37 = plVar37 + (long)*piVar1 * 4;
    } while (*piVar1 != 0);
    plVar37 = &DAT_7104862960;
LAB_71039253b8:
    if ((int)plVar37[1] == 0) goto LAB_71039253c0;
LAB_710392500c:
    if (plVar37 == (long *)0x0) goto LAB_71039253c8;
    goto LAB_71039253dc;
  case 7:
    puVar32 = (ulong *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    if ((int)puVar32[1] != 0x45) goto LAB_71039253d8;
    puVar15 = FUN_710391dde0(*puVar32,pfVar34);
    if ((int)puVar15[1] == 0) {
      lVar22 = *(long *)(*puVar32 + 0x28);
      if ((lVar22 != 0) && (bVar7 = *(byte *)(lVar22 + 10), (bVar7 & 1) == 0)) {
        plVar37 = (long *)(*(long *)(lVar22 + 0x18) +
                          (long)(int)(*(uint *)(*(long *)(*plVar4 + 0xe0) + 0xc) &
                                     (-1 << (ulong)(*(byte *)(lVar22 + 0xb) & 0x1f) ^ 0xffffffffU))
                          * 0x20);
        do {
          if (((int)plVar37[3] == 0x44) && (plVar37[2] == *(long *)(*plVar4 + 0xe0)))
          goto LAB_7103925004;
          piVar1 = (int *)((long)plVar37 + 0x1c);
          plVar37 = plVar37 + (long)*piVar1 * 4;
        } while (*piVar1 != 0);
        plVar37 = &DAT_7104862960;
LAB_7103925004:
        if ((int)plVar37[1] != 0) goto LAB_710392500c;
LAB_71039253c0:
        *(byte *)(lVar22 + 10) = bVar7 | 1;
      }
      goto LAB_71039253c8;
    }
LAB_71039253d0:
    uVar43 = *puVar15;
    uVar30 = puVar15[1];
LAB_7103927764:
    *(ulong *)pfVar27 = uVar43;
    *(ulong *)(pfVar27 + 2) = uVar30;
    goto LAB_71039246a4;
  case 8:
    plVar37 = (long *)**(undefined8 **)(lVar19 + uVar43 * 8 + 0x20);
    pfVar27 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar27 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    plVar40 = (long *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      plVar40 = (long *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    if ((int)plVar37[1] == 0x45) {
      plVar38 = FUN_710391dde0(*plVar37,pfVar27);
      if ((int)plVar38[1] != 0) {
        if ((*(byte *)(plVar40 + 1) >> 6 & 1) != 0) {
          lVar22 = *plVar37;
          if (((*(byte *)(lVar22 + 9) >> 2 & 1) != 0) && ((*(byte *)(*plVar40 + 9) & 3) != 0)) {
            lVar25 = *plVar4;
            *(byte *)(lVar22 + 9) = *(byte *)(lVar22 + 9) & 0xfb;
            *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar25 + 0x78);
            *(long *)(lVar25 + 0x78) = lVar22;
          }
        }
        lVar22 = *plVar40;
        lVar25 = plVar40[1];
LAB_7103925600:
        *plVar38 = lVar22;
        plVar38[1] = lVar25;
        goto LAB_71039246a4;
      }
    }
    else {
      plVar38 = (long *)0x0;
    }
    FUN_7103923060(param_1,plVar37,pfVar27,plVar40,plVar38);
    break;
  case 9:
    uVar43 = *(ulong *)(pfVar27 + 2);
    puVar14 = *(undefined8 **)(lVar19 + ((ulong)(uVar18 >> 0x14) & 0xff8) + 0x20);
    puVar32 = (ulong *)*puVar14;
    *puVar32 = *(ulong *)pfVar27;
    puVar32[1] = uVar43;
    plVar37 = (long *)*puVar14;
    if (((((*(byte *)(plVar37 + 1) >> 6 & 1) != 0) && (plVar37 == puVar14 + 2)) &&
        (*(byte *)(*plVar4 + 0x55) < 2)) && ((*(byte *)(*plVar37 + 9) & 3) != 0)) {
      FUN_71038fe340(*plVar4,*plVar37);
    }
    goto LAB_71039246a4;
  case 10:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    plVar37 = (long *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      plVar37 = (long *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    if (*(int *)(uVar36 + uVar43 * 0x10 + 8) == 0x45) {
      plVar38 = FUN_710391dde0(*(ulong *)pfVar27,pfVar34);
      if ((int)plVar38[1] != 0) {
        if ((*(byte *)(plVar37 + 1) >> 6 & 1) != 0) {
          uVar43 = *(ulong *)pfVar27;
          if (((*(byte *)(uVar43 + 9) >> 2 & 1) != 0) && ((*(byte *)(*plVar37 + 9) & 3) != 0)) {
            lVar22 = *plVar4;
            *(byte *)(uVar43 + 9) = *(byte *)(uVar43 + 9) & 0xfb;
            *(undefined8 *)(uVar43 + 0x30) = *(undefined8 *)(lVar22 + 0x78);
            *(ulong *)(lVar22 + 0x78) = uVar43;
          }
        }
        lVar22 = *plVar37;
        lVar25 = plVar37[1];
        goto LAB_7103925600;
      }
    }
    else {
      plVar38 = (long *)0x0;
    }
    FUN_7103923060(param_1,(long *)pfVar27,pfVar34,plVar37,plVar38);
    break;
  case 0xb:
    puVar45 = (undefined8 *)*plVar4;
    puVar14 = (undefined8 *)(*(code *)*puVar45)(puVar45[1],0,5,0x38);
    if (puVar14 == (undefined8 *)0x0) {
      if (puVar45[0x1a] == 0) {
LAB_7103927c90:
                    /* WARNING: Subroutine does not return */
        FUN_71038fb3c0(param_1,4);
      }
      FUN_71039004f0(param_1,1);
      puVar14 = (undefined8 *)(*(code *)*puVar45)(puVar45[1],0,5,0x38);
      if (puVar14 == (undefined8 *)0x0) goto LAB_7103927c90;
    }
    puVar45[3] = puVar45[3] + 0x38;
    bVar7 = *(byte *)((long)puVar45 + 0x54);
    *(undefined1 *)(puVar14 + 1) = 5;
    *(byte *)((long)puVar14 + 9) = bVar7 & 3;
    *puVar14 = puVar45[0xb];
    puVar45[0xb] = puVar14;
    puVar14[4] = &DAT_7104862aa0;
    puVar14[5] = 0;
    uVar42 = uVar18 >> 0x17;
    puVar14[2] = 0;
    puVar14[3] = &DAT_7104862aa0;
    uVar17 = uVar18 >> 0xe & 0x1ff;
    *(undefined2 *)((long)puVar14 + 10) = 0xff;
    *(undefined4 *)((long)puVar14 + 0xc) = 0;
    *(undefined8 **)pfVar27 = puVar14;
    *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 0x45;
    if (uVar17 != 0 || uVar42 != 0) {
      if (uVar18 >> 0x1a != 0) {
        uVar42 = (uVar18 >> 0x17 & 7 | 8) << (ulong)((uVar18 >> 0x1a) - 1 & 0x1f);
      }
      if (7 < uVar17) {
        uVar17 = (uVar18 >> 0xe & 7 | 8) << (ulong)((uVar17 >> 3) - 1 & 0x1f);
      }
      FUN_710391d4c0(param_1,(long)puVar14,uVar42,uVar17);
    }
    goto LAB_71039268ac;
  case 0xc:
    puVar32 = (ulong *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    uVar43 = puVar32[1];
    uVar30 = *(ulong *)pfVar34;
    *(ulong *)(pfVar27 + 4) = *puVar32;
    *(ulong *)(pfVar27 + 6) = uVar43;
    if ((int)puVar32[1] == 0x45) {
      uVar43 = *puVar32;
      if (*(byte *)(uVar30 + 8) == 4) {
        puVar15 = (ulong *)(*(long *)(uVar43 + 0x18) +
                           (long)(int)(*(uint *)(uVar30 + 0xc) &
                                      (-1 << (ulong)(*(byte *)(uVar43 + 0xb) & 0x1f) ^ 0xffffffffU))
                           * 0x20);
        do {
          if (((int)puVar15[3] == 0x44) && (puVar15[2] == uVar30)) goto LAB_7103926774;
          piVar1 = (int *)((long)puVar15 + 0x1c);
          puVar15 = puVar15 + (long)*piVar1 * 4;
        } while (*piVar1 != 0);
      }
      else {
        local_78 = (float)(*(byte *)(uVar30 + 8) | 0x40);
        local_80 = uVar30;
        puVar15 = (ulong *)FUN_710391d330(uVar43,(float *)&local_80);
        do {
          bVar11 = FUN_71039239b0(0,(float *)(puVar15 + 2),(float *)&local_80);
          if (bVar11) goto LAB_7103926774;
          piVar1 = (int *)((long)puVar15 + 0x1c);
          puVar15 = puVar15 + (long)*piVar1 * 4;
        } while (*piVar1 != 0);
      }
      puVar15 = &DAT_7104862960;
LAB_7103926774:
      if ((int)puVar15[1] == 0) {
        lVar22 = *(long *)(*puVar32 + 0x28);
        if ((lVar22 != 0) && ((*(byte *)(lVar22 + 10) & 1) == 0)) {
          plVar37 = (long *)(*(long *)(lVar22 + 0x18) +
                            (long)(int)(*(uint *)(*(long *)(*plVar4 + 0xe0) + 0xc) &
                                       (-1 << (ulong)(*(byte *)(lVar22 + 0xb) & 0x1f) ^ 0xffffffffU)
                                       ) * 0x20);
          do {
            if (((int)plVar37[3] == 0x44) && (plVar37[2] == *(long *)(*plVar4 + 0xe0)))
            goto LAB_71039267e8;
            piVar1 = (int *)((long)plVar37 + 0x1c);
            plVar37 = plVar37 + (long)*piVar1 * 4;
          } while (*piVar1 != 0);
          plVar37 = &DAT_7104862960;
LAB_71039267e8:
          if ((int)plVar37[1] == 0) {
            *(byte *)(lVar22 + 10) = *(byte *)(lVar22 + 10) | 1;
          }
          else if (plVar37 != (long *)0x0) goto LAB_71039253dc;
        }
        puVar15 = &DAT_7104862960;
      }
      uVar43 = *puVar15;
      uVar30 = puVar15[1];
      goto LAB_7103927764;
    }
LAB_71039253d8:
    plVar37 = (long *)0x0;
LAB_71039253dc:
    FUN_7103922d30(param_1,(long *)puVar32,pfVar34,(long *)pfVar27,plVar37);
    break;
  case 0xd:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 == 4.2039e-45) {
      fVar46 = *pfVar34;
LAB_7103926f34:
      fVar48 = pfVar41[2];
      if (fVar48 == 4.2039e-45) {
        fVar48 = *pfVar41;
      }
      else {
        if (fVar48 != 2.66247e-44) {
          if (((uint)fVar48 & 0xf) == 4) {
            pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
            lVar22 = *(long *)pfVar41;
            if (*(char *)(lVar22 + 8) == '\x04') {
              uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
            }
            else {
              uVar30 = *(ulong *)(lVar22 + 0x10);
            }
            if (pbVar13 == (byte *)(uVar30 + 1)) {
              fVar48 = (float)(long)local_80;
              if (local_78 != 2.66247e-44) {
                fVar48 = (float)local_80;
              }
              goto LAB_7103926f5c;
            }
          }
LAB_71039276dc:
          uVar18 = 6;
          goto LAB_7103927734;
        }
        fVar48 = (float)*(long *)pfVar41;
      }
LAB_7103926f5c:
      fVar46 = fVar46 + fVar48;
      goto LAB_710392771c;
    }
    if (fVar46 != 2.66247e-44) {
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103926f34;
        }
      }
      goto LAB_71039276dc;
    }
    if (pfVar41[2] != 2.66247e-44) {
      fVar46 = (float)(long)*(ulong *)pfVar34;
      goto LAB_7103926f34;
    }
    uVar30 = *(long *)pfVar41 + *(ulong *)pfVar34;
LAB_7103925450:
    *(ulong *)pfVar27 = uVar30;
    *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 0x13;
    goto LAB_71039246a4;
  case 0xe:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 != 4.2039e-45) {
      if (fVar46 == 2.66247e-44) {
        if (pfVar41[2] == 2.66247e-44) {
          uVar30 = *(ulong *)pfVar34 - *(long *)pfVar41;
          goto LAB_7103925450;
        }
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103926dac;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103926dac;
        }
      }
      goto LAB_7103927668;
    }
    fVar46 = *pfVar34;
LAB_7103926dac:
    fVar48 = pfVar41[2];
    if (fVar48 == 4.2039e-45) {
      fVar48 = *pfVar41;
    }
    else {
      if (fVar48 != 2.66247e-44) {
        if (((uint)fVar48 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
          lVar22 = *(long *)pfVar41;
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
          }
          else {
            uVar30 = *(ulong *)(lVar22 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar30 + 1)) {
            fVar48 = (float)(long)local_80;
            if (local_78 != 2.66247e-44) {
              fVar48 = (float)local_80;
            }
            goto LAB_7103927658;
          }
        }
LAB_7103927668:
        uVar18 = 7;
        goto LAB_7103927734;
      }
      fVar48 = (float)*(long *)pfVar41;
    }
LAB_7103927658:
    fVar46 = fVar46 - fVar48;
    goto LAB_710392771c;
  case 0xf:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 != 4.2039e-45) {
      if (fVar46 == 2.66247e-44) {
        if (pfVar41[2] == 2.66247e-44) {
          uVar30 = *(long *)pfVar41 * *(ulong *)pfVar34;
          goto LAB_7103925450;
        }
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103926e84;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103926e84;
        }
      }
      goto LAB_71039276a8;
    }
    fVar46 = *pfVar34;
LAB_7103926e84:
    fVar48 = pfVar41[2];
    if (fVar48 == 4.2039e-45) {
      fVar48 = *pfVar41;
    }
    else {
      if (fVar48 != 2.66247e-44) {
        if (((uint)fVar48 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
          lVar22 = *(long *)pfVar41;
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
          }
          else {
            uVar30 = *(ulong *)(lVar22 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar30 + 1)) {
            fVar48 = (float)(long)local_80;
            if (local_78 != 2.66247e-44) {
              fVar48 = (float)local_80;
            }
            goto LAB_7103927698;
          }
        }
LAB_71039276a8:
        uVar18 = 8;
        goto LAB_7103927734;
      }
      fVar48 = (float)*(long *)pfVar41;
    }
LAB_7103927698:
    fVar46 = fVar46 * fVar48;
    goto LAB_710392771c;
  case 0x10:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 != 4.2039e-45) {
      if (fVar46 == 2.66247e-44) {
        if (pfVar41[2] == 2.66247e-44) {
          uVar30 = *(ulong *)pfVar41;
          if (uVar30 + 1 < 2) {
            if (uVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_71038fae60(param_1,"attempt to perform \'n%%0\'");
            }
            uVar30 = 0;
          }
          else {
            uVar23 = *(ulong *)pfVar34;
            lVar22 = 0;
            if (uVar30 != 0) {
              lVar22 = (long)uVar23 / (long)uVar30;
            }
            lVar22 = uVar23 - lVar22 * uVar30;
            if (lVar22 == 0 || -1 < (long)(uVar30 ^ uVar23)) {
              uVar30 = 0;
            }
            uVar30 = uVar30 + lVar22;
          }
          goto LAB_7103926ce8;
        }
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103926d24;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103926d24;
        }
      }
      goto LAB_7103927628;
    }
    fVar46 = *pfVar34;
LAB_7103926d24:
    fVar48 = pfVar41[2];
    if (fVar48 == 4.2039e-45) {
      fVar48 = *pfVar41;
    }
    else {
      if (fVar48 != 2.66247e-44) {
        if (((uint)fVar48 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
          lVar22 = *(long *)pfVar41;
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
          }
          else {
            uVar30 = *(ulong *)(lVar22 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar30 + 1)) {
            fVar48 = (float)(long)local_80;
            if (local_78 != 2.66247e-44) {
              fVar48 = (float)local_80;
            }
            goto LAB_7103927600;
          }
        }
LAB_7103927628:
        uVar18 = 9;
        goto LAB_7103927734;
      }
      fVar48 = (float)*(long *)pfVar41;
    }
LAB_7103927600:
    fVar47 = fmodf(fVar46,fVar48);
    fVar46 = fVar47 + fVar48;
    if (0.0 <= fVar47 * fVar48) {
      fVar46 = fVar47;
    }
    goto LAB_710392771c;
  case 0x11:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 != 4.2039e-45) {
      if (fVar46 == 2.66247e-44) {
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103925e50;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103925e50;
        }
      }
      goto LAB_7103927508;
    }
    fVar46 = *pfVar34;
LAB_7103925e50:
    fVar48 = pfVar41[2];
    if (fVar48 == 4.2039e-45) {
      fVar48 = *pfVar41;
    }
    else {
      if (fVar48 != 2.66247e-44) {
        if (((uint)fVar48 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
          lVar22 = *(long *)pfVar41;
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
          }
          else {
            uVar30 = *(ulong *)(lVar22 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar30 + 1)) {
            fVar48 = (float)(long)local_80;
            if (local_78 != 2.66247e-44) {
              fVar48 = (float)local_80;
            }
            goto LAB_71039274d4;
          }
        }
LAB_7103927508:
        uVar18 = 10;
        goto LAB_7103927734;
      }
      fVar48 = (float)*(long *)pfVar41;
    }
LAB_71039274d4:
    fVar46 = powf(fVar46,fVar48);
    goto LAB_71039274e4;
  case 0x12:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 != 4.2039e-45) {
      if (fVar46 == 2.66247e-44) {
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103925f90;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103925f90;
        }
      }
      goto LAB_7103927544;
    }
    fVar46 = *pfVar34;
LAB_7103925f90:
    fVar48 = pfVar41[2];
    if (fVar48 == 4.2039e-45) {
      fVar48 = *pfVar41;
    }
    else {
      if (fVar48 != 2.66247e-44) {
        if (((uint)fVar48 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
          lVar22 = *(long *)pfVar41;
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
          }
          else {
            uVar30 = *(ulong *)(lVar22 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar30 + 1)) {
            fVar48 = (float)(long)local_80;
            if (local_78 != 2.66247e-44) {
              fVar48 = (float)local_80;
            }
            goto LAB_710392612c;
          }
        }
LAB_7103927544:
        uVar18 = 0xb;
        goto LAB_7103927734;
      }
      fVar48 = (float)*(long *)pfVar41;
    }
LAB_710392612c:
    fVar46 = fVar46 / fVar48;
LAB_71039274e4:
    uVar24 = 3;
    *pfVar27 = fVar46;
    goto LAB_71039274f0;
  case 0x13:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    if (fVar46 != 4.2039e-45) {
      if (fVar46 != 2.66247e-44) {
        if (((uint)fVar46 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
          uVar30 = *(ulong *)pfVar34;
          if (*(char *)(uVar30 + 8) == '\x04') {
            uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
          }
          else {
            uVar30 = *(ulong *)(uVar30 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar30 + 1)) {
            fVar46 = (float)(long)local_80;
            if (local_78 != 2.66247e-44) {
              fVar46 = (float)local_80;
            }
            goto LAB_7103926fc8;
          }
        }
        goto LAB_7103927730;
      }
      if (pfVar41[2] != 2.66247e-44) {
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103926fc8;
      }
      uVar23 = *(ulong *)pfVar41;
      uVar30 = *(ulong *)pfVar34;
      if (uVar23 + 1 < 2) {
        if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_71038fae60(param_1,"attempt to divide by zero");
        }
        *(ulong *)pfVar27 = -uVar30;
      }
      else {
        uVar28 = 0;
        if (uVar23 != 0) {
          uVar28 = (long)uVar30 / (long)uVar23;
        }
        if ((long)(uVar23 ^ uVar30) < 0) {
          uVar28 = uVar28 - (uVar30 != uVar28 * uVar23);
        }
        *(ulong *)pfVar27 = uVar28;
      }
LAB_7103926cec:
      *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 0x13;
      goto LAB_71039246a4;
    }
    fVar46 = *pfVar34;
LAB_7103926fc8:
    fVar48 = pfVar41[2];
    if (fVar48 == 4.2039e-45) {
      fVar48 = *pfVar41;
LAB_710392770c:
      fVar46 = (float)(int)(fVar46 / fVar48);
      goto LAB_710392771c;
    }
    if (fVar48 == 2.66247e-44) {
      fVar48 = (float)*(long *)pfVar41;
      goto LAB_710392770c;
    }
    if (((uint)fVar48 & 0xf) == 4) {
      pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
      lVar22 = *(long *)pfVar41;
      if (*(char *)(lVar22 + 8) == '\x04') {
        uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
      }
      else {
        uVar30 = *(ulong *)(lVar22 + 0x10);
      }
      if (pbVar13 == (byte *)(uVar30 + 1)) {
        fVar48 = (float)(long)local_80;
        if (local_78 != 2.66247e-44) {
          fVar48 = (float)local_80;
        }
        goto LAB_710392770c;
      }
    }
LAB_7103927730:
    uVar18 = 0xc;
LAB_7103927734:
    uVar12 = FUN_71039200a0(param_1,(long *)pfVar34,(long *)pfVar41,(long)pfVar27,uVar18);
    if ((int)uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_71038fb1e0(param_1,(long *)pfVar34,(long *)pfVar41,"perform arithmetic on");
    }
    break;
  case 0x14:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    pfVar10 = pfVar34;
    if (fVar46 == 2.66247e-44) {
      uVar30 = *(ulong *)pfVar34;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_710392737c;
          uVar30 = (ulong)fVar46;
          goto LAB_71039252c0;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_710392737c;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar10;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar30 + 1)) goto LAB_710392737c;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar30 = *(ulong *)pfVar10;
    }
LAB_71039252c0:
    fVar46 = pfVar41[2];
    pfVar10 = pfVar41;
    if (fVar46 == 2.66247e-44) {
      uVar23 = *(ulong *)pfVar41;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_710392737c;
          uVar23 = (ulong)fVar46;
          goto LAB_710392736c;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_710392737c;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar23 = *(ulong *)pfVar10;
        if (*(char *)(uVar23 + 8) == '\x04') {
          uVar23 = (ulong)*(byte *)(uVar23 + 0xb);
        }
        else {
          uVar23 = *(ulong *)(uVar23 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar23 + 1)) goto LAB_710392737c;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar23 = *(ulong *)pfVar10;
    }
LAB_710392736c:
    uVar28 = uVar23 & uVar30;
    goto LAB_710392746c;
  case 0x15:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    pfVar10 = pfVar34;
    if (fVar46 == 2.66247e-44) {
      uVar30 = *(ulong *)pfVar34;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_71039273c4;
          uVar30 = (ulong)fVar46;
          goto LAB_71039254a8;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_71039273c4;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar10;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar30 + 1)) goto LAB_71039273c4;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar30 = *(ulong *)pfVar10;
    }
LAB_71039254a8:
    fVar46 = pfVar41[2];
    pfVar10 = pfVar41;
    if (fVar46 == 2.66247e-44) {
      uVar23 = *(ulong *)pfVar41;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_71039273c4;
          uVar23 = (ulong)fVar46;
          goto LAB_71039273b4;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_71039273c4;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar23 = *(ulong *)pfVar10;
        if (*(char *)(uVar23 + 8) == '\x04') {
          uVar23 = (ulong)*(byte *)(uVar23 + 0xb);
        }
        else {
          uVar23 = *(ulong *)(uVar23 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar23 + 1)) goto LAB_71039273c4;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar23 = *(ulong *)pfVar10;
    }
LAB_71039273b4:
    uVar28 = uVar23 | uVar30;
    goto LAB_710392746c;
  case 0x16:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    pfVar10 = pfVar34;
    if (fVar46 == 2.66247e-44) {
      uVar30 = *(ulong *)pfVar34;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_710392740c;
          uVar30 = (ulong)fVar46;
          goto LAB_71039258a0;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_710392740c;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar10;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar30 + 1)) goto LAB_710392740c;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar30 = *(ulong *)pfVar10;
    }
LAB_71039258a0:
    fVar46 = pfVar41[2];
    pfVar10 = pfVar41;
    if (fVar46 == 2.66247e-44) {
      uVar23 = *(ulong *)pfVar41;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_710392740c;
          uVar23 = (ulong)fVar46;
          goto LAB_71039273fc;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_710392740c;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar23 = *(ulong *)pfVar10;
        if (*(char *)(uVar23 + 8) == '\x04') {
          uVar23 = (ulong)*(byte *)(uVar23 + 0xb);
        }
        else {
          uVar23 = *(ulong *)(uVar23 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar23 + 1)) goto LAB_710392740c;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar23 = *(ulong *)pfVar10;
    }
LAB_71039273fc:
    uVar28 = uVar23 ^ uVar30;
    goto LAB_710392746c;
  case 0x17:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    pfVar10 = pfVar34;
    if (fVar46 == 2.66247e-44) {
      uVar30 = *(ulong *)pfVar34;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_7103927480;
          uVar30 = (ulong)fVar46;
          goto LAB_710392596c;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_7103927480;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar10;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar30 + 1)) goto LAB_7103927480;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar30 = *(ulong *)pfVar10;
    }
LAB_710392596c:
    fVar46 = pfVar41[2];
    pfVar10 = pfVar41;
    if (fVar46 == 2.66247e-44) {
      uVar23 = *(ulong *)pfVar41;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_7103927480;
          uVar23 = (ulong)fVar46;
          goto LAB_7103927444;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_7103927480;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar23 = *(ulong *)pfVar10;
        if (*(char *)(uVar23 + 8) == '\x04') {
          uVar23 = (ulong)*(byte *)(uVar23 + 0xb);
        }
        else {
          uVar23 = *(ulong *)(uVar23 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar23 + 1)) goto LAB_7103927480;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar23 = *(ulong *)pfVar10;
    }
LAB_7103927444:
    uVar28 = 0;
    if ((long)uVar23 < 0x40) {
      uVar28 = uVar30 << (uVar23 & 0x3f);
    }
    uVar6 = 0;
    if (-0x40 < (long)uVar23) {
      uVar6 = uVar30 >> (-uVar23 & 0x3f);
    }
    if ((uVar23 & 0x8000000000000000) != 0) {
      uVar28 = uVar6;
    }
    goto LAB_710392746c;
  case 0x18:
    pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar34 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar41 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar41 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    fVar46 = pfVar34[2];
    pfVar10 = pfVar34;
    if (fVar46 == 2.66247e-44) {
      uVar30 = *(ulong *)pfVar34;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_7103927334;
          uVar30 = (ulong)fVar46;
          goto LAB_7103924e68;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_7103927334;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar10;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar30 + 1)) goto LAB_7103927334;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar30 = *(ulong *)pfVar10;
    }
LAB_7103924e68:
    fVar46 = pfVar41[2];
    pfVar10 = pfVar41;
    if (fVar46 == 2.66247e-44) {
      uVar23 = *(ulong *)pfVar41;
    }
    else {
      while (fVar46 != 2.66247e-44) {
        if (fVar46 == 4.2039e-45) {
          fVar46 = (float)(int)*pfVar10;
          if ((fVar46 < -9.223372e+18) || (9.223372e+18 <= fVar46)) goto LAB_7103927334;
          uVar23 = (ulong)fVar46;
          goto LAB_7103927304;
        }
        if (((uint)fVar46 & 0xf) != 4) goto LAB_7103927334;
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar10 + 0x18),(float *)&local_80);
        uVar23 = *(ulong *)pfVar10;
        if (*(char *)(uVar23 + 8) == '\x04') {
          uVar23 = (ulong)*(byte *)(uVar23 + 0xb);
        }
        else {
          uVar23 = *(ulong *)(uVar23 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar23 + 1)) goto LAB_7103927334;
        fVar46 = local_78;
        pfVar10 = (float *)&local_80;
      }
      uVar23 = *(ulong *)pfVar10;
    }
LAB_7103927304:
    uVar28 = 0;
    if (-0x40 < (long)uVar23) {
      uVar28 = uVar30 << (-uVar23 & 0x3f);
    }
    uVar6 = 0;
    if ((long)uVar23 < 0x40) {
      uVar6 = uVar30 >> (uVar23 & 0x3f);
    }
    if (0 < (long)uVar23) {
      uVar28 = uVar6;
    }
LAB_710392746c:
    *(ulong *)pfVar27 = uVar28;
    uVar24 = 0x13;
LAB_71039274f0:
    *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = uVar24;
    goto LAB_71039246a4;
  case 0x19:
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    fVar46 = pfVar34[2];
    if (fVar46 == 4.2039e-45) {
      fVar46 = *pfVar34;
LAB_710392639c:
      fVar46 = -fVar46;
LAB_710392771c:
      *pfVar27 = fVar46;
      *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 3;
    }
    else {
      if (fVar46 == 2.66247e-44) {
        uVar30 = -*(long *)pfVar34;
LAB_7103926ce8:
        *(ulong *)pfVar27 = uVar30;
        goto LAB_7103926cec;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar34 + 0x18),(float *)&local_80);
        lVar22 = *(long *)pfVar34;
        if (*(char *)(lVar22 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(lVar22 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_710392639c;
        }
      }
      uVar12 = FUN_71039200a0(param_1,(long *)pfVar34,(long *)pfVar34,(long)pfVar27,0x12);
      if ((int)uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_71038fb1e0(param_1,(long *)pfVar34,(long *)pfVar34,"perform arithmetic on");
      }
      uVar36 = *puVar39;
    }
    goto LAB_71039246a4;
  case 0x1a:
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    pfVar41 = pfVar34;
    if (pfVar34[2] == 2.66247e-44) {
      uVar30 = ~*(ulong *)pfVar34;
      goto LAB_7103926ce8;
    }
    do {
      fVar46 = pfVar41[2];
      if (fVar46 == 2.66247e-44) {
        uVar30 = *(ulong *)pfVar41;
LAB_7103926cb8:
        uVar30 = ~uVar30;
        goto LAB_7103926ce8;
      }
      if (fVar46 == 4.2039e-45) {
        fVar46 = (float)(int)*pfVar41;
        if ((-9.223372e+18 <= fVar46) && (fVar46 < 9.223372e+18)) {
          uVar30 = (ulong)fVar46;
          goto LAB_7103926cb8;
        }
        break;
      }
      if (((uint)fVar46 & 0xf) != 4) break;
      pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar41 + 0x18),(float *)&local_80);
      lVar22 = *(long *)pfVar41;
      if (*(char *)(lVar22 + 8) == '\x04') {
        uVar30 = (ulong)*(byte *)(lVar22 + 0xb);
      }
      else {
        uVar30 = *(ulong *)(lVar22 + 0x10);
      }
      pfVar41 = (float *)&local_80;
    } while (pbVar13 == (byte *)(uVar30 + 1));
    FUN_71039203a0(param_1,pfVar34,pfVar34,(long)pfVar27,0x13);
    break;
  case 0x1b:
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    fVar46 = pfVar34[2];
    if (fVar46 == 0.0) {
LAB_71039266fc:
      fVar46 = 1.4013e-45;
    }
    else {
      if (fVar46 == 2.66247e-44) {
        if (*(long *)pfVar34 != 0) {
          fVar48 = (float)*(long *)pfVar34;
joined_r0x0071039266cc:
          if (fVar48 != 0.0) goto LAB_7103926860;
        }
        goto LAB_71039266fc;
      }
      if (fVar46 == 1.4013e-45) {
        bVar11 = *pfVar34 == 0.0;
LAB_7103926870:
        fVar46 = (float)(uint)bVar11;
      }
      else {
        if (((uint)fVar46 & 0xf) == 3) {
          fVar48 = *pfVar34;
          goto joined_r0x0071039266cc;
        }
LAB_7103926860:
        if (fVar46 == 4.2039e-45) {
          bVar11 = false;
          if (!NAN(*pfVar34)) {
            bVar11 = *pfVar34 == 0.0;
          }
          goto LAB_7103926870;
        }
        fVar46 = 0.0;
      }
    }
    *pfVar27 = fVar46;
    *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 1;
    goto LAB_71039246a4;
  case 0x1c:
    FUN_7103924310(param_1,(ulong *)pfVar27,(long *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0)));
    uVar36 = *puVar39;
    goto LAB_71039246a4;
  case 0x1d:
    uVar30 = (ulong)(uVar18 >> 0xe) & 0x1ff;
    uVar18 = uVar18 >> 0x17;
    *(ulong *)(param_1 + 0x10) = uVar36 + uVar30 * 0x10 + 0x10;
    FUN_7103923f70(param_1,(1 - uVar18) + (int)uVar30);
    uVar36 = *puVar39;
    puVar14 = (undefined8 *)(uVar36 + (ulong)uVar18 * 0x10);
    puVar45 = (undefined8 *)(uVar36 + uVar43 * 0x10);
    uVar12 = puVar14[1];
    *puVar45 = *puVar14;
    puVar45[1] = uVar12;
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      if (uVar18 <= uVar42) {
        puVar14 = puVar45 + 2;
      }
      *(undefined8 **)(param_1 + 0x10) = puVar14;
      FUN_71038fec40(param_1);
      *(long *)(param_1 + 0x10) = plVar44[1];
      uVar36 = plVar44[4];
    }
    *(long *)(param_1 + 0x10) = plVar44[1];
    goto LAB_71039246a4;
  case 0x1e:
    if ((uVar42 != 0) && (puVar32 = (ulong *)*puVar5, puVar32 != (ulong *)0x0)) {
      uVar30 = *puVar39;
      do {
        while( true ) {
          if (*puVar32 < (uVar30 + uVar43 * 0x10) - 0x10) goto LAB_71039279ac;
          puVar15 = puVar32 + 2;
          *puVar5 = *puVar15;
          if (puVar32[1] == 0) break;
          uVar23 = ((ulong *)*puVar32)[1];
          *puVar15 = *(ulong *)*puVar32;
          puVar32[3] = uVar23;
          *puVar32 = (ulong)puVar15;
          if (((((byte)puVar32[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
             ((*(byte *)(*puVar15 + 9) & 3) != 0)) {
            FUN_71038fe340(*plVar4,*puVar15);
          }
          puVar32 = (ulong *)*puVar5;
          if (puVar32 == (ulong *)0x0) goto LAB_71039279ac;
        }
        puVar14 = (undefined8 *)*plVar4;
        (*(code *)*puVar14)(puVar14[1],puVar32,0x20,0);
        lVar22 = 0;
        if (puVar32 != (ulong *)0x0) {
          lVar22 = -0x20;
        }
        puVar14[3] = lVar22 + puVar14[3];
        puVar32 = (ulong *)*puVar5;
      } while (puVar32 != (ulong *)0x0);
    }
    goto LAB_71039279ac;
  case 0x1f:
    pfVar27 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar27 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    bVar11 = FUN_71039239b0(param_1,pfVar27,pfVar34);
    puVar21 = (uint *)*plVar35;
    if (bVar11 == uVar42) {
      uVar18 = *puVar21;
      uVar36 = (ulong)(uVar18 >> 6) & 0xff;
      if (((int)uVar36 != 0) && (puVar32 = (ulong *)*puVar5, puVar32 != (ulong *)0x0)) {
        uVar43 = *puVar39;
        do {
          while( true ) {
            if (*puVar32 < (uVar43 + uVar36 * 0x10) - 0x10) goto LAB_7103925838;
            puVar15 = puVar32 + 2;
            *puVar5 = *puVar15;
            if (puVar32[1] == 0) break;
            uVar30 = ((ulong *)*puVar32)[1];
            *puVar15 = *(ulong *)*puVar32;
            puVar32[3] = uVar30;
            *puVar32 = (ulong)puVar15;
            if (((((byte)puVar32[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
               ((*(byte *)(*puVar15 + 9) & 3) != 0)) {
              FUN_71038fe340(*plVar4,*puVar15);
            }
            puVar32 = (ulong *)*puVar5;
            if (puVar32 == (ulong *)0x0) goto LAB_7103925838;
          }
          puVar14 = (undefined8 *)*plVar4;
          (*(code *)*puVar14)(puVar14[1],puVar32,0x20,0);
          lVar22 = 0;
          if (puVar32 != (ulong *)0x0) {
            lVar22 = -0x20;
          }
          puVar14[3] = lVar22 + puVar14[3];
          puVar32 = (ulong *)*puVar5;
        } while (puVar32 != (ulong *)0x0);
LAB_7103925838:
        puVar21 = (uint *)*plVar35;
      }
      goto LAB_710392583c;
    }
LAB_7103925850:
    puVar21 = puVar21 + 1;
    goto LAB_7103925854;
  case 0x20:
    pfVar27 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar27 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    uVar36 = FUN_7103923400(param_1,pfVar27,pfVar34);
    puVar21 = (uint *)*plVar35;
    if ((uint)uVar36 != uVar42) goto LAB_7103925850;
    uVar18 = *puVar21;
    uVar36 = (ulong)(uVar18 >> 6) & 0xff;
    if (((int)uVar36 != 0) && (puVar32 = (ulong *)*puVar5, puVar32 != (ulong *)0x0)) {
      uVar43 = *puVar39;
      do {
        while( true ) {
          if (*puVar32 < (uVar43 + uVar36 * 0x10) - 0x10) goto LAB_7103925838;
          puVar15 = puVar32 + 2;
          *puVar5 = *puVar15;
          if (puVar32[1] == 0) break;
          uVar30 = ((ulong *)*puVar32)[1];
          *puVar15 = *(ulong *)*puVar32;
          puVar32[3] = uVar30;
          *puVar32 = (ulong)puVar15;
          if (((((byte)puVar32[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
             ((*(byte *)(*puVar15 + 9) & 3) != 0)) {
            FUN_71038fe340(*plVar4,*puVar15);
          }
          puVar32 = (ulong *)*puVar5;
          if (puVar32 == (ulong *)0x0) goto LAB_7103925838;
        }
        puVar14 = (undefined8 *)*plVar4;
        (*(code *)*puVar14)(puVar14[1],puVar32,0x20,0);
        lVar22 = 0;
        if (puVar32 != (ulong *)0x0) {
          lVar22 = -0x20;
        }
        puVar14[3] = lVar22 + puVar14[3];
        puVar32 = (ulong *)*puVar5;
      } while (puVar32 != (ulong *)0x0);
      goto LAB_7103925838;
    }
    goto LAB_710392583c;
  case 0x21:
    pfVar27 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0x17) * 0x10);
    if (-1 < (int)uVar18) {
      pfVar27 = (float *)(uVar36 + (ulong)(uVar18 >> 0x17) * 0x10);
    }
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar18 & 0x400000) != 0) {
      pfVar34 = (float *)(lVar20 + (ulong)(byte)(uVar18 >> 0xe) * 0x10);
    }
    bVar11 = FUN_7103923690(param_1,pfVar27,pfVar34);
    puVar21 = (uint *)*plVar35;
    if (bVar11 != uVar42) goto LAB_7103925850;
    uVar18 = *puVar21;
    uVar36 = (ulong)(uVar18 >> 6) & 0xff;
    if (((int)uVar36 != 0) && (puVar32 = (ulong *)*puVar5, puVar32 != (ulong *)0x0)) {
      uVar43 = *puVar39;
      do {
        if (*puVar32 < (uVar43 + uVar36 * 0x10) - 0x10) break;
        puVar15 = puVar32 + 2;
        *puVar5 = *puVar15;
        if (puVar32[1] == 0) {
          puVar14 = (undefined8 *)*plVar4;
          (*(code *)*puVar14)(puVar14[1],puVar32,0x20,0);
          lVar22 = 0;
          if (puVar32 != (ulong *)0x0) {
            lVar22 = -0x20;
          }
          puVar14[3] = lVar22 + puVar14[3];
        }
        else {
          uVar30 = ((ulong *)*puVar32)[1];
          *puVar15 = *(ulong *)*puVar32;
          puVar32[3] = uVar30;
          *puVar32 = (ulong)puVar15;
          if (((((byte)puVar32[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
             ((*(byte *)(*puVar15 + 9) & 3) != 0)) {
            FUN_71038fe340(*plVar4,*puVar15);
          }
        }
        puVar32 = (ulong *)*puVar5;
      } while (puVar32 != (ulong *)0x0);
      goto LAB_7103925838;
    }
LAB_710392583c:
    puVar21 = puVar21 + (int)((uVar18 >> 0xe) - 0x1fffe);
LAB_7103925854:
    *plVar35 = (long)puVar21;
    uVar36 = *puVar39;
    goto LAB_71039246a4;
  case 0x22:
    uVar42 = *(uint *)(uVar36 + uVar43 * 0x10 + 8);
    if ((uVar18 & 0x7fc000) != 0) {
      if (uVar42 != 0) {
        if (uVar42 == 0x13) {
          if (*(ulong *)pfVar27 != 0) {
            fVar46 = (float)(long)*(ulong *)pfVar27;
joined_r0x007103926b28:
            if (fVar46 != 0.0) goto LAB_7103926b48;
          }
        }
        else if (uVar42 == 1) {
          if (*pfVar27 != 0.0) goto LAB_7103927188;
        }
        else {
          if ((uVar42 & 0xf) == 3) {
            fVar46 = *pfVar27;
            goto joined_r0x007103926b28;
          }
LAB_7103926b48:
          if ((uVar42 != 3) || (*pfVar27 != 0.0)) goto LAB_7103927188;
        }
      }
      goto LAB_7103924f40;
    }
    if (uVar42 != 0) {
      if (uVar42 == 0x13) {
        if (*(ulong *)pfVar27 != 0) {
          fVar46 = (float)(long)*(ulong *)pfVar27;
joined_r0x007103927154:
          if (fVar46 != 0.0) goto LAB_7103927174;
        }
      }
      else if (uVar42 == 1) {
        if (*pfVar27 != 0.0) goto LAB_7103924f40;
      }
      else {
        if ((uVar42 & 0xf) == 3) {
          fVar46 = *pfVar27;
          goto joined_r0x007103927154;
        }
LAB_7103927174:
        if ((uVar42 != 3) || (*pfVar27 != 0.0)) goto LAB_7103924f40;
      }
    }
LAB_7103927188:
    puVar21 = (uint *)*plVar35;
    uVar18 = *puVar21;
    uVar43 = (ulong)(uVar18 >> 6) & 0xff;
    if (((int)uVar43 != 0) && (puVar32 = (ulong *)*puVar5, puVar32 != (ulong *)0x0)) {
      uVar30 = *puVar39;
      do {
        while( true ) {
          if (*puVar32 < (uVar30 + uVar43 * 0x10) - 0x10) goto LAB_710392725c;
          puVar15 = puVar32 + 2;
          *puVar5 = *puVar15;
          if (puVar32[1] == 0) break;
          uVar23 = ((ulong *)*puVar32)[1];
          *puVar15 = *(ulong *)*puVar32;
          puVar32[3] = uVar23;
          *puVar32 = (ulong)puVar15;
          if (((((byte)puVar32[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
             ((*(byte *)(*puVar15 + 9) & 3) != 0)) {
            FUN_71038fe340(*plVar4,*puVar15);
          }
          puVar32 = (ulong *)*puVar5;
          if (puVar32 == (ulong *)0x0) goto LAB_710392725c;
        }
        puVar14 = (undefined8 *)*plVar4;
        (*(code *)*puVar14)(puVar14[1],puVar32,0x20,0);
        lVar22 = 0;
        if (puVar32 != (ulong *)0x0) {
          lVar22 = -0x20;
        }
        puVar14[3] = lVar22 + puVar14[3];
        puVar32 = (ulong *)*puVar5;
      } while (puVar32 != (ulong *)0x0);
LAB_710392725c:
      puVar21 = (uint *)*plVar35;
    }
LAB_7103927264:
    *plVar35 = (long)(puVar21 + (int)((uVar18 >> 0xe) - 0x1fffe));
    goto LAB_71039246a4;
  case 0x23:
    pfVar34 = (float *)(uVar36 + ((ulong)(uVar18 >> 0x13) & 0x1ff0));
    fVar46 = pfVar34[2];
    if ((uVar18 & 0x7fc000) == 0) {
      if (fVar46 != 0.0) {
        if (fVar46 == 2.66247e-44) {
          if (*(ulong *)pfVar34 != 0) {
            fVar48 = (float)(long)*(ulong *)pfVar34;
joined_r0x007103927038:
            if (fVar48 != 0.0) goto LAB_7103927058;
          }
        }
        else if (fVar46 == 1.4013e-45) {
          if (*pfVar34 != 0.0) goto LAB_7103924f40;
        }
        else {
          if (((uint)fVar46 & 0xf) == 3) {
            fVar48 = *pfVar34;
            goto joined_r0x007103927038;
          }
LAB_7103927058:
          if ((fVar46 != 4.2039e-45) || (*pfVar34 != 0.0)) goto LAB_7103924f40;
        }
      }
LAB_710392706c:
      uVar43 = *(ulong *)(pfVar34 + 2);
      *(ulong *)pfVar27 = *(ulong *)pfVar34;
      *(ulong *)(pfVar27 + 2) = uVar43;
      puVar21 = (uint *)*plVar35;
      uVar18 = *puVar21;
      uVar43 = (ulong)(uVar18 >> 6) & 0xff;
      if (((int)uVar43 != 0) && (puVar32 = (ulong *)*puVar5, puVar32 != (ulong *)0x0)) {
        uVar30 = *puVar39;
        do {
          if (*puVar32 < (uVar30 + uVar43 * 0x10) - 0x10) break;
          puVar15 = puVar32 + 2;
          *puVar5 = *puVar15;
          if (puVar32[1] == 0) {
            puVar14 = (undefined8 *)*plVar4;
            (*(code *)*puVar14)(puVar14[1],puVar32,0x20,0);
            lVar22 = 0;
            if (puVar32 != (ulong *)0x0) {
              lVar22 = -0x20;
            }
            puVar14[3] = lVar22 + puVar14[3];
          }
          else {
            uVar23 = ((ulong *)*puVar32)[1];
            *puVar15 = *(ulong *)*puVar32;
            puVar32[3] = uVar23;
            *puVar32 = (ulong)puVar15;
            if (((((byte)puVar32[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
               ((*(byte *)(*puVar15 + 9) & 3) != 0)) {
              FUN_71038fe340(*plVar4,*puVar15);
            }
          }
          puVar32 = (ulong *)*puVar5;
        } while (puVar32 != (ulong *)0x0);
        goto LAB_710392725c;
      }
      goto LAB_7103927264;
    }
    if (fVar46 != 0.0) {
      if (fVar46 == 2.66247e-44) {
        if (*(ulong *)pfVar34 != 0) {
          fVar48 = (float)(long)*(ulong *)pfVar34;
joined_r0x007103926ae0:
          if (fVar48 != 0.0) goto LAB_7103926b00;
        }
      }
      else if (fVar46 == 1.4013e-45) {
        if (*pfVar34 != 0.0) goto LAB_710392706c;
      }
      else {
        if (((uint)fVar46 & 0xf) == 3) {
          fVar48 = *pfVar34;
          goto joined_r0x007103926ae0;
        }
LAB_7103926b00:
        if ((fVar46 != 4.2039e-45) || (*pfVar34 != 0.0)) goto LAB_710392706c;
      }
    }
LAB_7103924f40:
    *plVar35 = *plVar35 + 4;
    goto LAB_71039246a4;
  case 0x24:
    uVar42 = uVar18 >> 0xe & 0x1ff;
    if (uVar18 >> 0x17 != 0) {
      *(float **)(param_1 + 0x10) = pfVar27 + (ulong)(uVar18 >> 0x17) * 4;
    }
    uVar12 = FUN_71038fb8d0(param_1,(long *)pfVar27,(short)uVar42 + -1);
    if ((int)uVar12 == 0) {
      plVar44 = *(long **)(param_1 + 0x20);
      goto LAB_710392466c;
    }
    if (uVar42 != 0) {
      *(long *)(param_1 + 0x10) = plVar44[1];
    }
    uVar36 = *puVar39;
    goto LAB_71039246a4;
  case 0x25:
    if (uVar18 >> 0x17 != 0) {
      *(float **)(param_1 + 0x10) = pfVar27 + (ulong)(uVar18 >> 0x17) * 4;
    }
    uVar12 = FUN_71038fb8d0(param_1,(long *)pfVar27,0xffff);
    if ((int)uVar12 == 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x20);
      plVar38 = (long *)*puVar14;
      lVar20 = puVar14[4];
      plVar44 = (long *)puVar14[2];
      plVar40 = (long *)*plVar44;
      bVar7 = *(byte *)(*(long *)(*plVar38 + 0x18) + 10);
      plVar35 = plVar38;
      plVar37 = plVar40;
      if ((*(int *)(*(long *)(lVar19 + 0x18) + 0x20) < 1) ||
         (puVar39 = (ulong *)*puVar5, puVar39 == (ulong *)0x0)) goto joined_r0x007103927bcc;
      uVar36 = plVar44[4];
      goto LAB_7103927b10;
    }
    uVar36 = *puVar39;
    goto LAB_71039246a4;
  case 0x26:
    goto switchD_71039247dc_caseD_26;
  case 0x27:
    if (*(int *)(uVar36 + uVar43 * 0x10 + 8) == 0x13) {
      uVar43 = *(ulong *)pfVar27 + *(ulong *)(pfVar27 + 8);
      if ((long)*(ulong *)(pfVar27 + 8) < 1) {
        if ((long)uVar43 < (long)*(ulong *)(pfVar27 + 4)) goto LAB_71039246a4;
      }
      else if ((long)*(ulong *)(pfVar27 + 4) < (long)uVar43) goto LAB_71039246a4;
      *plVar35 = *plVar35 + (long)(int)((uVar18 >> 0xe) - 0x1ffff) * 4;
      *(ulong *)pfVar27 = uVar43;
      *(ulong *)(pfVar27 + 0xc) = uVar43;
      pfVar27[0xe] = 2.66247e-44;
      goto LAB_71039246a4;
    }
    fVar46 = pfVar27[8] + *pfVar27;
    if (pfVar27[8] <= 0.0) {
      if (fVar46 < pfVar27[4]) goto LAB_71039246a4;
    }
    else if (pfVar27[4] < fVar46) goto LAB_71039246a4;
    *plVar35 = *plVar35 + (long)(int)((uVar18 >> 0xe) - 0x1ffff) * 4;
    *pfVar27 = fVar46;
    pfVar27[0xc] = fVar46;
    pfVar27[0xe] = 4.2039e-45;
    goto LAB_71039246a4;
  case 0x28:
    puVar21 = (uint *)(uVar36 + uVar43 * 0x10 + 8);
    pfVar34 = pfVar27 + 4;
    if ((*puVar21 != 0x13) || (pfVar27[10] != 2.66247e-44)) goto LAB_71039277b8;
    uVar43 = *(ulong *)(pfVar27 + 8);
    pfVar41 = pfVar34;
    do {
      fVar46 = pfVar41[2];
      if (fVar46 == 2.66247e-44) {
        uVar30 = *(ulong *)pfVar41;
        goto LAB_71039277b0;
      }
      if (fVar46 == 4.2039e-45) {
        fVar48 = (float)(int)*pfVar41;
        fVar46 = fVar48 + 1.0;
        if (*pfVar41 == fVar48 || -1 < (long)uVar43) {
          fVar46 = fVar48;
        }
        if ((-9.223372e+18 <= fVar46) && (fVar46 < 9.223372e+18)) {
          uVar30 = (ulong)fVar46;
          goto LAB_71039277b0;
        }
        break;
      }
      if (((uint)fVar46 & 0xf) != 4) break;
      pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar41 + 0x18),(float *)&local_80);
      uVar30 = *(ulong *)pfVar41;
      if (*(char *)(uVar30 + 8) == '\x04') {
        uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
      }
      else {
        uVar30 = *(ulong *)(uVar30 + 0x10);
      }
      pfVar41 = (float *)&local_80;
    } while (pbVar13 == (byte *)(uVar30 + 1));
    fVar46 = pfVar27[6];
    if (fVar46 == 4.2039e-45) {
      fVar46 = *pfVar34;
LAB_7103927798:
      if (fVar46 <= 0.0) {
        uVar30 = 0x8000000000000000;
        if (-1 < (long)uVar43) goto LAB_710392798c;
LAB_71039277b0:
        uVar43 = *(ulong *)pfVar27;
      }
      else {
        uVar30 = 0x7fffffffffffffff;
        if (-1 < (long)uVar43) goto LAB_71039277b0;
LAB_710392798c:
        uVar43 = 0;
      }
      *(ulong *)(pfVar27 + 4) = uVar30;
      uVar42 = 0x13;
      pfVar27[6] = 2.66247e-44;
      *(ulong *)pfVar27 = uVar43 - *(ulong *)(pfVar27 + 8);
    }
    else {
      if (fVar46 == 2.66247e-44) {
        fVar46 = (float)(long)*(ulong *)pfVar34;
        goto LAB_7103927798;
      }
      if (((uint)fVar46 & 0xf) == 4) {
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar30 = *(ulong *)pfVar34;
        if (*(char *)(uVar30 + 8) == '\x04') {
          uVar30 = (ulong)*(byte *)(uVar30 + 0xb);
        }
        else {
          uVar30 = *(ulong *)(uVar30 + 0x10);
        }
        if (pbVar13 == (byte *)(uVar30 + 1)) {
          fVar46 = (float)(long)local_80;
          if (local_78 != 2.66247e-44) {
            fVar46 = (float)local_80;
          }
          goto LAB_7103927798;
        }
      }
LAB_71039277b8:
      fVar46 = pfVar27[6];
      if (fVar46 == 4.2039e-45) {
        fVar46 = *pfVar34;
      }
      else if (fVar46 == 2.66247e-44) {
        fVar46 = (float)(long)*(ulong *)pfVar34;
      }
      else {
        if (((uint)fVar46 & 0xf) != 4) {
LAB_7103927d2c:
                    /* WARNING: Subroutine does not return */
          FUN_71038fae60(param_1,"\'for\' limit must be a number");
        }
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar34 + 0x18),(float *)&local_80);
        uVar43 = *(ulong *)pfVar34;
        if (*(char *)(uVar43 + 8) == '\x04') {
          uVar43 = (ulong)*(byte *)(uVar43 + 0xb);
        }
        else {
          uVar43 = *(ulong *)(uVar43 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar43 + 1)) goto LAB_7103927d2c;
        fVar46 = (float)(long)local_80;
        if (local_78 != 2.66247e-44) {
          fVar46 = (float)local_80;
        }
      }
      pfVar27[4] = fVar46;
      pfVar27[6] = 4.2039e-45;
      fVar46 = pfVar27[10];
      if (fVar46 == 4.2039e-45) {
        fVar46 = pfVar27[8];
      }
      else if (fVar46 == 2.66247e-44) {
        fVar46 = (float)(long)*(ulong *)(pfVar27 + 8);
      }
      else {
        if (((uint)fVar46 & 0xf) != 4) {
LAB_7103927d3c:
                    /* WARNING: Subroutine does not return */
          FUN_71038fae60(param_1,"\'for\' step must be a number");
        }
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)(pfVar27 + 8) + 0x18),(float *)&local_80);
        uVar43 = *(ulong *)(pfVar27 + 8);
        if (*(char *)(uVar43 + 8) == '\x04') {
          uVar43 = (ulong)*(byte *)(uVar43 + 0xb);
        }
        else {
          uVar43 = *(ulong *)(uVar43 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar43 + 1)) goto LAB_7103927d3c;
        fVar46 = (float)(long)local_80;
        if (local_78 != 2.66247e-44) {
          fVar46 = (float)local_80;
        }
      }
      pfVar27[8] = fVar46;
      pfVar27[10] = 4.2039e-45;
      uVar42 = *puVar21;
      if (uVar42 == 3) {
        fVar48 = *pfVar27;
      }
      else if (uVar42 == 0x13) {
        fVar48 = (float)(long)*(ulong *)pfVar27;
      }
      else {
        if ((uVar42 & 0xf) != 4) {
LAB_7103927d4c:
                    /* WARNING: Subroutine does not return */
          FUN_71038fae60(param_1,"\'for\' initial value must be a number");
        }
        pbVar13 = FUN_7103907f00((byte *)(*(ulong *)pfVar27 + 0x18),(float *)&local_80);
        uVar43 = *(ulong *)pfVar27;
        if (*(char *)(uVar43 + 8) == '\x04') {
          uVar43 = (ulong)*(byte *)(uVar43 + 0xb);
        }
        else {
          uVar43 = *(ulong *)(uVar43 + 0x10);
        }
        if (pbVar13 != (byte *)(uVar43 + 1)) goto LAB_7103927d4c;
        fVar48 = (float)(long)local_80;
        if (local_78 != 2.66247e-44) {
          fVar48 = (float)local_80;
        }
      }
      uVar42 = 3;
      *pfVar27 = fVar48 - fVar46;
    }
    *puVar21 = uVar42;
    goto LAB_71039279ac;
  case 0x29:
    *(ulong *)(pfVar27 + 0x14) = *(ulong *)(pfVar27 + 8);
    *(ulong *)(pfVar27 + 0x16) = *(ulong *)(pfVar27 + 10);
    *(ulong *)(pfVar27 + 0x10) = *(ulong *)(pfVar27 + 4);
    *(ulong *)(pfVar27 + 0x12) = *(ulong *)(pfVar27 + 6);
    *(ulong *)(pfVar27 + 0xc) = *(ulong *)pfVar27;
    *(ulong *)(pfVar27 + 0xe) = *(ulong *)(pfVar27 + 2);
    *(float **)(param_1 + 0x10) = pfVar27 + 0x18;
    uVar2 = *(short *)(param_1 + 0xc6) + 1;
    *(ushort *)(param_1 + 0xc6) = uVar2;
    if (199 < uVar2) {
      if (uVar2 == 200) {
                    /* WARNING: Subroutine does not return */
        FUN_71038fae60(param_1,"C stack overflow");
      }
      if (0xe0 < uVar2) {
LAB_7103927ccc:
                    /* WARNING: Subroutine does not return */
        FUN_71038fb3c0(param_1,6);
      }
    }
    uVar12 = FUN_71038fb8d0(param_1,(long *)(pfVar27 + 0xc),(ushort)(uVar18 >> 0xe) & 0x1ff);
    if ((int)uVar12 == 0) {
      FUN_7103924610(param_1);
    }
    *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
    uVar36 = plVar44[4];
    *(long *)(param_1 + 0x10) = plVar44[1];
    puVar21 = (uint *)plVar44[5];
    plVar44[5] = (long)(puVar21 + 1);
    uVar18 = *puVar21;
    pfVar27 = (float *)(uVar36 + (ulong)(byte)(uVar18 >> 6) * 0x10);
  case 0x2a:
    if (pfVar27[6] != 0.0) {
      *(ulong *)pfVar27 = *(ulong *)(pfVar27 + 4);
      *(ulong *)(pfVar27 + 2) = *(ulong *)(pfVar27 + 6);
LAB_71039279ac:
      *plVar35 = *plVar35 + (long)(int)((uVar18 >> 0xe) - 0x1ffff) * 4;
    }
    goto LAB_71039246a4;
  case 0x2b:
    uVar42 = uVar18 >> 0x17;
    uVar18 = uVar18 >> 0xe & 0x1ff;
    if (uVar42 == 0) {
      uVar42 = (int)((ulong)(*(long *)(param_1 + 0x10) - (long)pfVar27) >> 4) - 1;
    }
    if (uVar18 == 0) {
      puVar21 = (uint *)*plVar35;
      *plVar35 = (long)(puVar21 + 1);
      uVar18 = *puVar21 >> 6;
    }
    uVar43 = *(ulong *)pfVar27;
    uVar18 = (uVar42 + uVar18 * 0x32) - 0x32;
    if (*(uint *)(uVar43 + 0xc) < uVar18) {
      if (*(undefined **)(uVar43 + 0x18) == &DAT_7104862aa0) {
        iVar31 = 0;
      }
      else {
        iVar31 = 1 << (ulong)(*(byte *)(uVar43 + 0xb) & 0x1f);
      }
      FUN_710391d4c0(param_1,uVar43,uVar18,iVar31);
    }
    if (0 < (int)uVar42) {
      lVar22 = (long)(int)uVar42;
      do {
        uVar30 = (ulong)uVar18;
        pfVar34 = pfVar27 + lVar22 * 4;
        if (uVar30 - 1 < (ulong)*(uint *)(uVar43 + 0xc)) {
          puVar14 = (undefined8 *)(*(long *)(uVar43 + 0x10) + (uVar30 - 1) * 0x10);
LAB_7103926a00:
          if (puVar14 == &DAT_7104862960) goto LAB_7103926a10;
        }
        else {
          puVar14 = (undefined8 *)
                    (*(long *)(uVar43 + 0x18) +
                    (long)(int)(uVar18 & (-1 << (ulong)(*(byte *)(uVar43 + 0xb) & 0x1f) ^
                                         0xffffffffU)) * 0x20);
          do {
            if ((*(int *)(puVar14 + 3) == 0x13) && (puVar14[2] == uVar30)) goto LAB_7103926a00;
            piVar1 = (int *)((long)puVar14 + 0x1c);
            puVar14 = puVar14 + (long)*piVar1 * 4;
          } while (*piVar1 != 0);
LAB_7103926a10:
          local_78 = 2.66247e-44;
          local_80 = uVar30;
          puVar14 = FUN_710391d940(param_1,uVar43,(float *)&local_80);
        }
        uVar12 = *(undefined8 *)(pfVar34 + 2);
        uVar18 = uVar18 - 1;
        *puVar14 = *(undefined8 *)pfVar34;
        puVar14[1] = uVar12;
        if ((((*(byte *)(pfVar34 + 2) >> 6 & 1) != 0) && ((*(byte *)(uVar43 + 9) >> 2 & 1) != 0)) &&
           ((*(byte *)(*(long *)pfVar34 + 9) & 3) != 0)) {
          lVar25 = *plVar4;
          *(byte *)(uVar43 + 9) = *(byte *)(uVar43 + 9) & 0xfb;
          *(undefined8 *)(uVar43 + 0x30) = *(undefined8 *)(lVar25 + 0x78);
          *(ulong *)(lVar25 + 0x78) = uVar43;
        }
        lVar25 = lVar22 + -1;
        bVar11 = 0 < lVar22;
        lVar22 = lVar25;
      } while (lVar25 != 0 && bVar11);
    }
    *(long *)(param_1 + 0x10) = plVar44[1];
    goto LAB_71039246a4;
  case 0x2c:
    lVar25 = *(long *)(*(long *)(*(long *)(lVar19 + 0x18) + 0x40) +
                      ((ulong)(uVar18 >> 0xb) & 0x1ffff8));
    lVar22 = *(long *)(lVar25 + 0x58);
    uVar30 = *(ulong *)(lVar25 + 0x60);
    uVar18 = *(uint *)(lVar25 + 0x10);
    if (uVar30 == 0) {
LAB_7103925b84:
      iVar31 = uVar18 * 8 + 0x20;
      puVar45 = (undefined8 *)*plVar4;
      lVar26 = (long)iVar31;
      puVar14 = (undefined8 *)(*(code *)*puVar45)(puVar45[1],0,6,lVar26);
      if ((iVar31 != 0) && (puVar14 == (undefined8 *)0x0)) {
        if (puVar45[0x1a] == 0) goto LAB_7103927c90;
        FUN_71039004f0(param_1,1);
        puVar14 = (undefined8 *)(*(code *)*puVar45)(puVar45[1],0,6,lVar26);
        if (puVar14 == (undefined8 *)0x0) goto LAB_7103927c90;
      }
      puVar45[3] = puVar45[3] + lVar26;
      *(byte *)((long)puVar14 + 9) = *(byte *)((long)puVar45 + 0x54) & 3;
      *(undefined1 *)(puVar14 + 1) = 6;
      *puVar14 = puVar45[0xb];
      puVar45[0xb] = puVar14;
      puVar14[3] = 0;
      *(char *)((long)puVar14 + 10) = (char)uVar18;
      if (uVar18 == 0) {
        puVar14[3] = lVar25;
        *(undefined8 **)pfVar27 = puVar14;
        *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 0x46;
      }
      else {
        memset(puVar14 + 3 + ((long)(int)uVar18 - (ulong)(uVar18 - 1)),0,(ulong)uVar18 << 3);
        puVar14[3] = lVar25;
        *(undefined8 **)pfVar27 = puVar14;
        *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 0x46;
        if (0 < (int)uVar18) {
          uVar43 = 0;
          do {
            lVar26 = lVar22 + uVar43 * 0x10;
            uVar30 = (ulong)*(byte *)(lVar26 + 9);
            if (*(char *)(lVar26 + 8) == '\0') {
              puVar32 = *(ulong **)(lVar19 + uVar30 * 8 + 0x20);
              puVar14[uVar43 + 4] = puVar32;
            }
            else {
              puVar32 = (ulong *)*puVar5;
              uVar30 = uVar36 + uVar30 * 0x10;
              puVar15 = puVar5;
              if (puVar32 != (ulong *)0x0) {
                uVar23 = *puVar32;
                while (uVar30 <= uVar23) {
                  if (uVar23 == uVar30) goto LAB_7103925d64;
                  puVar15 = puVar32 + 2;
                  puVar32 = (ulong *)*puVar15;
                  if (puVar32 == (ulong *)0x0) break;
                  uVar23 = *puVar32;
                }
              }
              puVar45 = (undefined8 *)*plVar4;
              puVar32 = (ulong *)(*(code *)*puVar45)(puVar45[1],0,0,0x20);
              if (puVar32 == (ulong *)0x0) {
                if (puVar45[0x1a] == 0) goto LAB_7103927c90;
                FUN_71039004f0(param_1,1);
                puVar32 = (ulong *)(*(code *)*puVar45)(puVar45[1],0,0,0x20);
                if (puVar32 == (ulong *)0x0) goto LAB_7103927c90;
              }
              puVar45[3] = puVar45[3] + 0x20;
              puVar32[1] = 0;
              puVar32[2] = *puVar15;
              *(undefined4 *)(puVar32 + 3) = 1;
              *puVar15 = (ulong)puVar32;
              *puVar32 = uVar30;
              if (*(long *)(param_1 + 0x50) == param_1) {
                *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
                *(long *)(*(long *)(param_1 + 0x18) + 0xa8) = param_1;
              }
LAB_7103925d64:
              puVar14[uVar43 + 4] = puVar32;
            }
            uVar43 = uVar43 + 1;
            puVar32[1] = puVar32[1] + 1;
          } while (uVar43 != uVar18);
        }
      }
      if ((*(byte *)(lVar25 + 9) >> 2 & 1) == 0) {
        *(undefined8 **)(lVar25 + 0x60) = puVar14;
      }
    }
    else {
      if (0 < (int)uVar18) {
        lVar26 = 0;
        pbVar13 = (byte *)(lVar22 + 9);
        do {
          if (pbVar13[-1] == 0) {
            lVar33 = **(long **)(lVar19 + (ulong)*pbVar13 * 8 + 0x20);
          }
          else {
            lVar33 = uVar36 + (ulong)*pbVar13 * 0x10;
          }
          if (**(long **)(uVar30 + 0x20 + lVar26 * 8) != lVar33) goto LAB_7103925b84;
          lVar26 = lVar26 + 1;
          pbVar13 = pbVar13 + 0x10;
        } while (lVar26 < (int)uVar18);
      }
      *(ulong *)pfVar27 = uVar30;
      *(undefined4 *)(uVar36 + uVar43 * 0x10 + 8) = 0x46;
    }
LAB_71039268ac:
    if (0 < *(long *)(*plVar4 + 0x18)) {
      *(float **)(param_1 + 0x10) = pfVar27 + 4;
      FUN_71038fec40(param_1);
      *(long *)(param_1 + 0x10) = plVar44[1];
      uVar36 = plVar44[4];
    }
    goto LAB_71039246a4;
  case 0x2d:
    uVar42 = ~(uint)*(byte *)(*(long *)(lVar19 + 0x18) + 10) + (int)(uVar36 - *plVar44 >> 4);
    uVar17 = uVar42 & ((int)uVar42 >> 0x1f ^ 0xffffffffU);
    if (uVar18 >> 0x17 == 0) {
      if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x10) >> 4 <= (long)(ulong)uVar17) {
        if (1000000 < *(int *)(param_1 + 0xb8)) goto LAB_7103927ccc;
        uVar18 = *(int *)(param_1 + 0xb8) * 2;
        if (999999 < (int)uVar18) {
          uVar18 = 1000000;
        }
        uVar3 = uVar17 + (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38)) >> 4)
                + 5;
        if ((int)uVar3 <= (int)uVar18) {
          uVar3 = uVar18;
        }
        if (1000000 < (int)uVar3) {
          FUN_71038fb530(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
          FUN_71038fae60(param_1,"stack overflow");
        }
        FUN_71038fb530(param_1,uVar3);
      }
      uVar36 = *puVar39;
      pfVar27 = (float *)(uVar36 + uVar43 * 0x10);
      *(float **)(param_1 + 0x10) = pfVar27 + (ulong)uVar17 * 4;
      uVar18 = uVar17;
    }
    else {
      uVar18 = (uVar18 >> 0x17) - 1;
    }
    uVar43 = 0;
    if ((int)uVar18 < 1) {
      if ((int)uVar18 < 1) goto LAB_71039246a4;
    }
    else {
      if (0 < (int)uVar42) {
        puVar32 = (ulong *)(uVar36 + (ulong)uVar17 * -0x10);
        uVar43 = 0;
        pfVar34 = pfVar27;
        do {
          uVar30 = puVar32[1];
          uVar43 = uVar43 + 1;
          *(ulong *)pfVar34 = *puVar32;
          *(ulong *)(pfVar34 + 2) = uVar30;
          if ((long)(int)uVar18 <= (long)uVar43) break;
          puVar32 = puVar32 + 2;
          pfVar34 = pfVar34 + 4;
        } while (uVar43 < uVar17);
      }
      if ((int)uVar18 <= (int)uVar43) goto LAB_71039246a4;
    }
    uVar30 = uVar43 & 0xffffffff;
    uVar42 = uVar18 - (int)uVar43;
    uVar23 = ~uVar30;
    uVar43 = (ulong)uVar42 & 7;
    if ((uVar42 & 7) != 0) {
      lVar22 = -uVar43;
      pfVar34 = pfVar27 + uVar30 * 4 + 2;
      do {
        lVar22 = lVar22 + 1;
        *pfVar34 = 0.0;
        pfVar34 = pfVar34 + 4;
      } while (lVar22 != 0);
      uVar30 = uVar43 + uVar30;
    }
    if (6 < uVar23 + uVar18) {
      lVar22 = uVar18 - uVar30;
      pfVar27 = pfVar27 + uVar30 * 4 + 0x12;
      do {
        pfVar27[-0x10] = 0.0;
        pfVar27[-0xc] = 0.0;
        lVar22 = lVar22 + -8;
        pfVar27[-8] = 0.0;
        pfVar27[-4] = 0.0;
        *pfVar27 = 0.0;
        pfVar27[4] = 0.0;
        pfVar27[8] = 0.0;
        pfVar27[0xc] = 0.0;
        pfVar27 = pfVar27 + 0x20;
      } while (lVar22 != 0);
    }
    goto LAB_71039246a4;
  }
  uVar36 = *puVar39;
  goto LAB_71039246a4;
switchD_71039247dc_caseD_26:
  if (0 < *(int *)(*(long *)(lVar19 + 0x18) + 0x20)) {
    while ((puVar39 = (ulong *)*puVar5, puVar39 != (ulong *)0x0 && (uVar36 <= *puVar39))) {
      puVar32 = puVar39 + 2;
      *puVar5 = *puVar32;
      if (puVar39[1] == 0) {
        puVar14 = (undefined8 *)*plVar4;
        (*(code *)*puVar14)(puVar14[1],puVar39,0x20,0);
        lVar19 = 0;
        if (puVar39 != (ulong *)0x0) {
          lVar19 = -0x20;
        }
        puVar14[3] = lVar19 + puVar14[3];
      }
      else {
        uVar43 = ((ulong *)*puVar39)[1];
        *puVar32 = *(ulong *)*puVar39;
        puVar39[3] = uVar43;
        *puVar39 = (ulong)puVar32;
        if (((((byte)puVar39[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
           ((*(byte *)(*puVar32 + 9) & 3) != 0)) {
          FUN_71038fe340(*plVar4,*puVar32);
        }
      }
    }
  }
  if (uVar18 >> 0x17 == 0) {
    uVar18 = (uint)((ulong)(*(long *)(param_1 + 0x10) - (long)pfVar27) >> 4);
  }
  else {
    uVar18 = (uVar18 >> 0x17) - 1;
  }
  uVar12 = FUN_71038fbfd0(param_1,plVar44,(undefined8 *)pfVar27,uVar18);
  if ((*(byte *)((long)plVar44 + 0x42) >> 3 & 1) != 0) {
    return;
  }
  plVar44 = *(long **)(param_1 + 0x20);
  if ((int)uVar12 != 0) {
    *(long *)(param_1 + 0x10) = plVar44[1];
  }
  goto LAB_710392466c;
  while( true ) {
    puVar32 = puVar39 + 2;
    *puVar5 = *puVar32;
    if (puVar39[1] == 0) {
      puVar45 = (undefined8 *)*plVar4;
      (*(code *)*puVar45)(puVar45[1],puVar39,0x20,0);
      lVar19 = 0;
      if (puVar39 != (ulong *)0x0) {
        lVar19 = -0x20;
      }
      puVar45[3] = lVar19 + puVar45[3];
      puVar39 = (ulong *)*puVar5;
    }
    else {
      uVar43 = ((ulong *)*puVar39)[1];
      *puVar32 = *(ulong *)*puVar39;
      puVar39[3] = uVar43;
      *puVar39 = (ulong)puVar32;
      if (((((byte)puVar39[3] >> 6 & 1) != 0) && (*(byte *)(*plVar4 + 0x55) < 2)) &&
         ((*(byte *)(*puVar32 + 9) & 3) != 0)) {
        FUN_71038fe340(*plVar4,*puVar32);
      }
      puVar39 = (ulong *)*puVar5;
    }
    if (puVar39 == (ulong *)0x0) break;
LAB_7103927b10:
    if (*puVar39 < uVar36) break;
  }
joined_r0x007103927bcc:
  for (; plVar35 < (long *)(lVar20 + (ulong)bVar7 * 0x10); plVar35 = plVar35 + 2) {
    lVar19 = plVar35[1];
    *plVar37 = *plVar35;
    plVar37[1] = lVar19;
    plVar37 = plVar37 + 2;
  }
  plVar44[4] = (long)plVar40 + (puVar14[4] - (long)plVar38);
  lVar19 = (long)plVar40 + (*(long *)(param_1 + 0x10) - (long)plVar38);
  *(long *)(param_1 + 0x10) = lVar19;
  plVar44[1] = lVar19;
  plVar44[5] = puVar14[5];
  *(byte *)((long)plVar44 + 0x42) = *(byte *)((long)plVar44 + 0x42) | 0x20;
  *(long **)(param_1 + 0x20) = plVar44;
  goto LAB_710392466c;
LAB_7103927334:
  uVar18 = 0x11;
  goto LAB_7103927484;
LAB_7103927480:
  uVar18 = 0x10;
  goto LAB_7103927484;
LAB_710392740c:
  uVar18 = 0xf;
  goto LAB_7103927484;
LAB_71039273c4:
  uVar18 = 0xe;
  goto LAB_7103927484;
LAB_710392737c:
  uVar18 = 0xd;
LAB_7103927484:
  FUN_71039203a0(param_1,pfVar34,pfVar41,(long)pfVar27,uVar18);
  uVar36 = *puVar39;
  goto LAB_71039246a4;
}

