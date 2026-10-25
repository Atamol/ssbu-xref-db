// addr:      71035e0e50
// offset:    0x35e0e50
// name:      FUN_71035e0e50
// mangled:   
// signature: undefined __cdecl FUN_71035e0e50(long * param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_71035e0e50(long *param_1,uint *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  long ********pppppppplVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  long *******ppppppplVar23;
  size_t sVar24;
  long ********pppppppplVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long *******ppppppplVar30;
  long ********pppppppplVar31;
  ulong uVar32;
  long ********pppppppplVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  char *pcVar40;
  uint uVar41;
  ulong *puVar42;
  int iVar43;
  ulong *puVar44;
  uint uVar45;
  ulong *puVar46;
  ulong *puVar47;
  byte *pbVar48;
  long ********pppppppplVar50;
  ulong *puVar51;
  char *pcVar52;
  long *********ppppppppplVar53;
  char *pcVar54;
  long ********pppppppplVar55;
  double dVar56;
  int local_140;
  int local_138;
  int local_124;
  char *local_100;
  int local_f8;
  ulong local_e0;
  ulong local_d8;
  long ********local_c0;
  undefined8 local_b8;
  long ********local_b0;
  undefined1 local_a8;
  long ********local_a0;
  long ********pppppppplStack_98;
  long ********local_90;
  float local_88;
  long ********local_78;
  undefined4 local_6c [3];
  byte *pbVar49;
  
  iVar43 = (int)param_3;
  uVar10 = SUB84(param_4,0);
  FUN_71035c32d0(param_1,iVar43,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar43 == 5) {
    return;
  }
  std::recursive_mutex::lock();
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_a0 = (long ********)&SUB_00000018;
      param_3 = &local_a0;
      uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar21 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar20 != (undefined8 *)0x0)) goto LAB_71035e0ef0;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_71035e0ef0:
  *puVar20 = 0;
  *(undefined4 *)(puVar20 + 1) = 0;
  *(undefined4 *)((long)puVar20 + 0xc) = uVar10;
  *(int *)(puVar20 + 2) = iVar43;
  uVar21 = *(ulong *)param_1[0x91];
  *(ulong *)param_1[0x91] = (ulong)puVar20;
  if (uVar21 != 0) {
    FUN_710392eb40(uVar21);
  }
  uVar45 = *param_2;
  uVar21 = FUN_71035c25f0(uVar45,(byte *)"model.xmb");
  uVar27 = (uint)uVar21;
  if (uVar27 == 0xffffff) {
    bVar12 = false;
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar27);
    if ((uVar27 < *(uint *)(DAT_7105332f20 + 0x18)) &&
       (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar21 & 0xffffffff) * 8 + 4) != '\0')) {
      uVar45 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar21 & 0xffffffff) * 8);
      if ((uVar45 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar45)) goto LAB_71035e0fc4;
      puVar20 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar45 * 0x18);
      pcVar40 = (char *)0x0;
      if ((*(char *)((long)puVar20 + 0xc) != '\0') && (puVar20 != (undefined8 *)0x0)) {
        pcVar40 = (char *)*puVar20;
      }
    }
    else {
LAB_71035e0fc4:
      pcVar40 = (char *)0x0;
    }
    FUN_71035e2f00((undefined1 *)param_1[0x88],pcVar40,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(int *)(*(long *)param_1[0x91] + 0x10) = iVar43;
    FUN_7103540b10(DAT_7105332f20,uVar27,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar45 = *param_2;
    bVar12 = true;
  }
  uVar21 = FUN_71035c25f0(uVar45,(byte *)"lod.xmb");
  uVar27 = (uint)uVar21;
  if (uVar27 != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,uVar27);
    if ((uVar27 < *(uint *)(DAT_7105332f20 + 0x18)) &&
       (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar21 & 0xffffffff) * 8 + 4) != '\0')) {
      uVar45 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar21 & 0xffffffff) * 8);
      if ((uVar45 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar45)) goto LAB_71035e108c;
      puVar20 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar45 * 0x18);
      pcVar40 = (char *)0x0;
      if ((*(char *)((long)puVar20 + 0xc) != '\0') && (puVar20 != (undefined8 *)0x0)) {
        pcVar40 = (char *)*puVar20;
      }
    }
    else {
LAB_71035e108c:
      pcVar40 = (char *)0x0;
    }
    puVar22 = (ulong *)FUN_710392e290(0x10,0x38,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8);
    if (puVar22 == (ulong *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
        local_a0 = (long ********)&DAT_00000038;
        param_3 = &local_a0;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
        if (((uVar21 & 1) != 0) &&
           (puVar22 = (ulong *)FUN_710392e290(0x10,0x38,(long ****)param_3,param_4,param_5,param_6,
                                              param_7,param_8), puVar22 != (ulong *)0x0))
        goto LAB_71035e10ec;
      }
      puVar22 = (ulong *)0x0;
    }
LAB_71035e10ec:
    puVar22[4] = 0;
    puVar22[5] = 0;
    *(undefined1 *)(puVar22 + 6) = 1;
    puVar22[2] = 0;
    puVar22[3] = 0;
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar20 = (undefined8 *)
              FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar20 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
        local_a0 = (long ********)&DAT_00000040;
        param_3 = &local_a0;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
        if (((uVar21 & 1) != 0) &&
           (puVar20 = (undefined8 *)
                      FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar20 != (undefined8 *)0x0)) goto LAB_71035e1154;
      }
      puVar20 = (undefined8 *)0x0;
    }
LAB_71035e1154:
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *puVar20 = pcVar40;
    puVar20[1] = pcVar40;
    if ((((*pcVar40 == 'X') && (pcVar40[1] == 'M')) && (pcVar40[2] == 'B')) && (pcVar40[3] == ' '))
    {
      pcVar52 = pcVar40 + *(uint *)(pcVar40 + 0x14);
      puVar20[2] = pcVar52;
      local_100 = pcVar40 + *(uint *)(pcVar40 + 0x18);
      puVar20[3] = local_100;
      puVar20[4] = pcVar40 + *(uint *)(pcVar40 + 0x1c);
      puVar20[5] = pcVar40 + *(uint *)(pcVar40 + 0x20);
      pcVar54 = pcVar40 + *(uint *)(pcVar40 + 0x24);
      puVar20[6] = pcVar54;
      puVar20[7] = pcVar40 + *(uint *)(pcVar40 + 0x28);
    }
    else {
      local_100 = (char *)0x0;
      pcVar52 = (char *)0x0;
      pcVar54 = (char *)0x0;
    }
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar43 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar15 = strcmp(pcVar54 + iVar43,"MeshArray");
    if (iVar15 != 0) {
      uVar41 = 0;
      local_f8 = -1;
      do {
        iVar43 = local_f8;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar15 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar43 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar15 = strcmp(pcVar54 + iVar43,"MeshArray");
      } while (iVar15 != 0);
    }
    local_f8 = iVar43;
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar43 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar15 = strcmp(pcVar54 + iVar43,"Mesh");
    if (iVar15 != 0) {
      uVar41 = 0;
      do {
        iVar43 = -1;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar15 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar43 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar15 = strcmp(pcVar54 + iVar43,"Mesh");
      } while (iVar15 != 0);
    }
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar15 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar16 = strcmp(pcVar54 + iVar15,"LodArray");
    if (iVar16 != 0) {
      uVar41 = 0;
      local_138 = -1;
      do {
        iVar15 = local_138;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar16 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar15 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar16 = strcmp(pcVar54 + iVar15,"LodArray");
      } while (iVar16 != 0);
    }
    local_138 = iVar15;
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar15 = strcmp(pcVar54 + *(int *)(pcVar52 + (ulong)uVar45 * 4),"Lod");
    if (iVar15 != 0) {
      uVar41 = 0;
      do {
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar15 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar15 = strcmp(pcVar54 + *(int *)(pcVar52 + (ulong)uVar45 * 4),"Lod");
      } while (iVar15 != 0);
    }
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar15 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar16 = strcmp(pcVar54 + iVar15,"Ratio");
    if (iVar16 != 0) {
      uVar41 = 0;
      do {
        iVar15 = -1;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar16 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar15 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar16 = strcmp(pcVar54 + iVar15,"Ratio");
      } while (iVar16 != 0);
    }
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar16 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar17 = strcmp(pcVar54 + iVar16,"Visibility");
    if (iVar17 != 0) {
      uVar41 = 0;
      do {
        if (uVar41 == uVar35) {
          iVar16 = -1;
          break;
        }
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar17 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar16 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar17 = strcmp(pcVar54 + iVar16,"Visibility");
      } while (iVar17 != 0);
    }
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar17 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar18 = strcmp(pcVar54 + iVar17,"value");
    if (iVar18 != 0) {
      uVar41 = 0;
      do {
        iVar17 = -1;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar18 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar17 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar18 = strcmp(pcVar54 + iVar17,"value");
      } while (iVar18 != 0);
    }
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar18 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar19 = strcmp(pcVar54 + iVar18,"parent");
    if (iVar19 != 0) {
      uVar41 = 0;
      local_140 = -1;
      do {
        iVar18 = local_140;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar19 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar18 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar19 = strcmp(pcVar54 + iVar18,"parent");
      } while (iVar19 != 0);
    }
    local_140 = iVar18;
    uVar35 = *(int *)(pcVar40 + 0xc) - 1;
    uVar45 = uVar35 >> 1;
    iVar18 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
    iVar19 = strcmp(pcVar54 + iVar18,"Motion");
    if (iVar19 != 0) {
      uVar41 = 0;
      do {
        iVar18 = -1;
        if (uVar41 == uVar35) break;
        uVar2 = uVar41;
        uVar11 = uVar45;
        if (iVar19 < 1) {
          uVar2 = uVar45;
          uVar11 = uVar35;
        }
        bVar14 = uVar45 != uVar41;
        uVar41 = uVar35;
        if (bVar14) {
          uVar41 = uVar2;
          uVar35 = uVar11;
        }
        uVar45 = uVar41 + uVar35 >> 1;
        iVar18 = *(int *)(pcVar52 + (ulong)uVar45 * 4);
        iVar19 = strcmp(pcVar54 + iVar18,"Motion");
      } while (iVar19 != 0);
    }
    if (*(int *)(pcVar40 + 4) < 1) {
      local_d8 = 0;
    }
    else {
      local_d8 = (ulong)*(ushort *)(local_100 + 6);
    }
    if (*(int *)(pcVar40 + 4) < 1) {
      local_e0 = 0xffffffffffffffff;
      if ((int)local_d8 != 0) goto LAB_71035e1714;
LAB_71035e2620:
      FUN_710392eb40((ulong)puVar20);
    }
    else {
      if (*(short *)(local_100 + 6) == 0) {
        local_e0 = 0xffffffffffffffff;
      }
      else {
        local_e0 = (ulong)*(ushort *)(local_100 + 10);
      }
      if ((int)local_d8 == 0) goto LAB_71035e2620;
LAB_71035e1714:
      uVar21 = 0;
      do {
        lVar29 = uVar21 + local_e0;
        if (lVar29 < 0) {
          iVar19 = -1;
          if (iVar18 == -1) goto LAB_71035e1768;
LAB_71035e17f0:
          if (local_f8 == iVar19) {
            pppppppplStack_98 = (long ********)0x0;
            local_90 = (long ********)0x0;
            local_a0 = (long ********)0x0;
            if ((-1 < lVar29) && (lVar29 < *(int *)(puVar20[1] + 4))) {
              lVar29 = puVar20[3] + lVar29 * 0x10;
              uVar4 = *(ushort *)(lVar29 + 6);
              if ((uVar4 != 0) && (uVar5 = *(ushort *)(lVar29 + 10), uVar4 != 0)) {
                uVar36 = 0;
                do {
                  lVar29 = uVar36 + uVar5;
                  if (-1 < lVar29) {
                    iVar19 = -1;
                    if (lVar29 < *(int *)(puVar20[1] + 4)) {
                      iVar19 = *(int *)(puVar20[3] + lVar29 * 0x10);
                    }
                    if ((iVar43 == iVar19) && (-1 < lVar29)) {
                      lVar34 = puVar20[1];
                      if (lVar29 < *(int *)(lVar34 + 4)) {
                        lVar28 = puVar20[3] + lVar29 * 0x10;
                        uVar8 = *(ushort *)(lVar28 + 4);
                        if (uVar8 == 0) {
                          pcVar40 = (char *)0x0;
LAB_71035e231c:
                          lVar29 = puVar20[3] + lVar29 * 0x10;
                          uVar8 = *(ushort *)(lVar29 + 4);
                          if (uVar8 != 0) {
                            uVar9 = *(ushort *)(lVar29 + 8);
                            uVar39 = 0;
                            lVar29 = (ulong)uVar9 << 3;
                            do {
                              lVar28 = uVar9 + uVar39;
                              if ((lVar28 < 0) || (*(int *)(lVar34 + 8) <= lVar28)) {
                                if (local_140 == -1) goto LAB_71035e2384;
                              }
                              else if (*(int *)(puVar20[4] + lVar29) == local_140) {
LAB_71035e2384:
                                if ((lVar28 < 0) ||
                                   (*(int *)(lVar34 + 8) <= (int)((uint)uVar9 + (int)uVar39))) {
                                  pcVar52 = "error";
                                }
                                else {
                                  pcVar52 = (char *)(puVar20[7] +
                                                    (long)*(int *)(puVar20[4] + lVar29 + 4));
                                }
                                goto joined_r0x0071035e23bc;
                              }
                              uVar39 = uVar39 + 1;
                              lVar29 = lVar29 + 8;
                            } while (uVar39 < uVar8);
                          }
                        }
                        else {
                          uVar9 = *(ushort *)(lVar28 + 8);
                          uVar39 = 0;
                          lVar28 = (ulong)uVar9 << 3;
                          do {
                            lVar38 = uVar9 + uVar39;
                            if ((lVar38 < 0) || (*(int *)(lVar34 + 8) <= lVar38)) {
                              if (iVar17 == -1) goto LAB_71035e22e4;
                            }
                            else if (*(int *)(puVar20[4] + lVar28) == iVar17) {
LAB_71035e22e4:
                              if (lVar38 < 0) {
                                pcVar40 = "error";
                              }
                              else {
                                pcVar40 = "error";
                                if ((int)((uint)uVar9 + (int)uVar39) < *(int *)(lVar34 + 8)) {
                                  pcVar40 = (char *)(puVar20[7] +
                                                    (long)*(int *)(puVar20[4] + lVar28 + 4));
                                }
                              }
                              goto joined_r0x0071035e2318;
                            }
                            uVar39 = uVar39 + 1;
                            lVar28 = lVar28 + 8;
                          } while (uVar39 < uVar8);
                          pcVar40 = (char *)0x0;
joined_r0x0071035e2318:
                          if (lVar29 < *(int *)(lVar34 + 4)) goto LAB_71035e231c;
                        }
                        pcVar52 = (char *)0x0;
joined_r0x0071035e23bc:
                        if ((byte *)pcVar40 != (byte *)0x0) {
                          sVar24 = strlen(pcVar40);
                          if ((int)sVar24 == 0) {
                            uVar39 = 0;
                          }
                          else {
                            uVar45 = 0xffffffff;
                            pbVar49 = (byte *)pcVar40;
                            do {
                              pbVar48 = pbVar49 + 1;
                              bVar3 = *pbVar49;
                              uVar35 = bVar3 + 0x20;
                              if (0x19 < bVar3 - 0x41) {
                                uVar35 = (uint)bVar3;
                              }
                              uVar45 = (&DAT_7104754084)[(uVar35 ^ uVar45) & 0xff] ^ uVar45 >> 8;
                              pbVar49 = pbVar48;
                            } while (pbVar48 < pcVar40 + (sVar24 & 0xffffffff));
                            uVar39 = (ulong)~uVar45;
                          }
                          ppppppplVar30 = (long *******)(uVar39 | (sVar24 & 0xff) << 0x20);
                          ppppppplVar23 = ppppppplVar30;
                          if ((byte *)pcVar52 != (byte *)0x0) {
                            sVar24 = strlen(pcVar52);
                            if ((int)sVar24 == 0) {
                              uVar39 = 0;
                            }
                            else {
                              uVar45 = 0xffffffff;
                              pbVar49 = (byte *)pcVar52;
                              do {
                                pbVar48 = pbVar49 + 1;
                                bVar3 = *pbVar49;
                                uVar35 = bVar3 + 0x20;
                                if (0x19 < bVar3 - 0x41) {
                                  uVar35 = (uint)bVar3;
                                }
                                uVar45 = (&DAT_7104754084)[(uVar35 ^ uVar45) & 0xff] ^ uVar45 >> 8;
                                pbVar49 = pbVar48;
                              } while (pbVar48 < pcVar52 + (sVar24 & 0xffffffff));
                              uVar39 = (ulong)~uVar45;
                            }
                            ppppppplVar23 = (long *******)(uVar39 | (sVar24 & 0xff) << 0x20);
                          }
                          pppppppplVar31 = local_a0;
                          if (pppppppplStack_98 < local_90) {
                            *pppppppplStack_98 = ppppppplVar30;
                            pppppppplStack_98[1] = ppppppplVar23;
                            pppppppplStack_98 = pppppppplStack_98 + 2;
                          }
                          else {
                            ppppppppplVar53 =
                                 (long *********)((long)pppppppplStack_98 - (long)local_a0);
                            uVar39 = ((long)ppppppppplVar53 >> 4) + 1;
                            if (uVar39 >> 0x3c != 0) {
LAB_71035e293c:
                    /* WARNING: Subroutine does not return */
                              std::__vector_base_common<true>::__throw_length_error();
                            }
                            if ((ulong)((long)local_90 - (long)local_a0 >> 4) < 0x7ffffffffffffff) {
                              uVar32 = (long)local_90 - (long)local_a0 >> 3;
                              if (uVar39 <= uVar32) {
                                uVar39 = uVar32;
                              }
                              if (uVar39 != 0) {
                                if (uVar39 >> 0x3c == 0) goto LAB_71035e2508;
                                goto LAB_71035e2954;
                              }
                              pppppppplVar25 = (long ********)0x0;
                            }
                            else {
                              uVar39 = 0xfffffffffffffff;
LAB_71035e2508:
                              pppppppplVar33 = (long ********)(uVar39 * 0x10);
                              if (pppppppplVar33 == (long ********)0x0) {
                                pppppppplVar33 = (long ********)0x1;
                              }
                              pppppppplVar25 =
                                   (long ********)
                                   FUN_710392e290(0x10,pppppppplVar33,(long ****)param_3,param_4,
                                                  param_5,param_6,param_7,param_8);
                              if (pppppppplVar25 == (long ********)0x0) {
                                if (DAT_7105332f00 != (long *)0x0) {
                                  local_78 = (long ********)((ulong)local_78 & 0xffffffff00000000);
                                  param_3 = &local_c0;
                                  local_c0 = pppppppplVar33;
                                  uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                     (DAT_7105332f00,&local_78);
                                  if (((uVar32 & 1) != 0) &&
                                     (pppppppplVar25 =
                                           (long ********)
                                           FUN_710392e290(0x10,pppppppplVar33,(long ****)param_3,
                                                          param_4,param_5,param_6,param_7,param_8),
                                     pppppppplVar25 != (long ********)0x0)) goto LAB_71035e2574;
                                }
                                pppppppplVar25 = (long ********)0x0;
                              }
                            }
LAB_71035e2574:
                            pppppppplVar33 = pppppppplVar25 + ((long)ppppppppplVar53 >> 4) * 2;
                            *pppppppplVar33 = ppppppplVar30;
                            pppppppplVar33[1] = ppppppplVar23;
                            if (0 < (long)ppppppppplVar53) {
                              memcpy(pppppppplVar25,pppppppplVar31,(size_t)ppppppppplVar53);
                              param_3 = ppppppppplVar53;
                            }
                            local_a0 = pppppppplVar25;
                            pppppppplStack_98 = pppppppplVar33 + 2;
                            local_90 = pppppppplVar25 + uVar39 * 2;
                            if (pppppppplVar31 != (long ********)0x0) {
                              FUN_710392eb40((ulong)pppppppplVar31);
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar36 = uVar36 + 1;
                } while (uVar36 < uVar4);
              }
            }
            uVar36 = *puVar22;
            if (uVar36 != 0) {
              puVar22[1] = uVar36;
              FUN_710392eb40(uVar36);
              puVar22[1] = 0;
              puVar22[2] = 0;
              *puVar22 = 0;
            }
            *puVar22 = (ulong)local_a0;
            puVar22[1] = (ulong)pppppppplStack_98;
            puVar22[2] = (ulong)local_90;
          }
          else if (local_138 == iVar19) {
            if (lVar29 < 0) {
              local_a8 = 0;
              local_b8 = (long ********)0x0;
              local_b0 = (long ********)0x0;
              local_c0 = (long ********)0x0;
            }
            else {
              local_a8 = 0;
              local_c0 = (long ********)0x0;
              local_b8 = (long ********)0x0;
              local_b0 = (long ********)0x0;
              if (lVar29 < *(int *)(puVar20[1] + 4)) {
                lVar29 = puVar20[3] + lVar29 * 0x10;
                uVar4 = *(ushort *)(lVar29 + 6);
                if (uVar4 != 0) {
                  uVar5 = *(ushort *)(lVar29 + 10);
                  uVar36 = 0;
                  do {
                    lVar29 = uVar36 + uVar5;
                    pppppppplStack_98 = (long ********)0x0;
                    local_90 = (long ********)0x0;
                    local_a0 = (long ********)0x0;
                    local_88 = 1.0;
                    if ((-1 < lVar29) && (lVar29 < *(int *)(puVar20[1] + 4))) {
                      lVar29 = puVar20[3] + lVar29 * 0x10;
                      uVar8 = *(ushort *)(lVar29 + 6);
                      if ((uVar8 != 0) && (uVar9 = *(ushort *)(lVar29 + 10), uVar8 != 0)) {
                        uVar39 = 0;
                        do {
                          lVar29 = uVar39 + uVar9;
                          iVar19 = -1;
                          if (lVar29 < 0) {
                            if (iVar15 == -1) goto LAB_71035e1990;
LAB_71035e1a18:
                            if (((iVar16 == iVar19) && (-1 < lVar29)) &&
                               (lVar34 = puVar20[1], lVar29 < *(int *)(lVar34 + 4))) {
                              lVar29 = puVar20[3] + lVar29 * 0x10;
                              uVar6 = *(ushort *)(lVar29 + 4);
                              if (uVar6 != 0) {
                                uVar7 = *(ushort *)(lVar29 + 8);
                                uVar32 = 0;
                                lVar29 = (ulong)uVar7 << 3;
                                do {
                                  lVar28 = uVar7 + uVar32;
                                  if ((lVar28 < 0) || (*(int *)(lVar34 + 8) <= lVar28)) {
                                    if (iVar17 == -1) goto LAB_71035e1ad0;
                                  }
                                  else if (*(int *)(puVar20[4] + lVar29) == iVar17) {
LAB_71035e1ad0:
                                    if (lVar28 < 0) {
                                      pcVar40 = "error";
                                    }
                                    else {
                                      pcVar40 = "error";
                                      if ((int)((uint)uVar7 + (int)uVar32) < *(int *)(lVar34 + 8)) {
                                        pcVar40 = (char *)(puVar20[7] +
                                                          (long)*(int *)(puVar20[4] + lVar29 + 4));
                                      }
                                    }
                                    iVar19 = strcmp(pcVar40,"true");
                                    if (pppppppplStack_98 == (long ********)((long)local_90 * 0x40))
                                    {
                                      if ((long)((long)pppppppplStack_98 + 1) < 0)
                                      goto LAB_71035e293c;
                                      if (pppppppplStack_98 < (long ********)0x3fffffffffffffff) {
                                        uVar32 = (ulong)(pppppppplStack_98 + 8) & 0xffffffffffffffc0
                                        ;
                                        if (((ulong)(pppppppplStack_98 + 8) & 0xffffffffffffffc0) <=
                                            (ulong)((long)local_90 << 7)) {
                                          uVar32 = (long)local_90 << 7;
                                        }
                                      }
                                      else {
                                        uVar32 = 0x7fffffffffffffff;
                                      }
                                      FUN_7100492060((ulong *)&local_a0,uVar32,(long ****)param_3,
                                                     param_4,param_5,param_6,param_7,param_8);
                                    }
                                    uVar37 = (ulong)pppppppplStack_98 >> 6;
                                    uVar32 = 1L << ((ulong)pppppppplStack_98 & 0x3f);
                                    if (iVar19 == 0) {
                                      ppppppplVar30 =
                                           (long *******)((ulong)local_a0[uVar37] | uVar32);
                                    }
                                    else {
                                      ppppppplVar30 =
                                           (long *******)
                                           ((ulong)local_a0[uVar37] & (uVar32 ^ 0xffffffffffffffff))
                                      ;
                                    }
                                    local_a0[uVar37] = ppppppplVar30;
                                    pppppppplStack_98 = (long ********)((long)pppppppplStack_98 + 1)
                                    ;
                                    break;
                                  }
                                  uVar32 = uVar32 + 1;
                                  lVar29 = lVar29 + 8;
                                } while (uVar32 < uVar6);
                              }
                            }
                          }
                          else {
                            iVar19 = -1;
                            if (lVar29 < *(int *)(puVar20[1] + 4)) {
                              iVar19 = *(int *)(puVar20[3] + lVar29 * 0x10);
                            }
                            if (iVar15 != iVar19) goto LAB_71035e1a18;
LAB_71035e1990:
                            if ((-1 < lVar29) &&
                               (lVar34 = puVar20[1], lVar29 < *(int *)(lVar34 + 4))) {
                              lVar29 = puVar20[3] + lVar29 * 0x10;
                              uVar6 = *(ushort *)(lVar29 + 4);
                              if (uVar6 != 0) {
                                uVar7 = *(ushort *)(lVar29 + 8);
                                uVar32 = 0;
                                lVar29 = (ulong)uVar7 << 3;
                                do {
                                  lVar28 = uVar7 + uVar32;
                                  if ((lVar28 < 0) || (*(int *)(lVar34 + 8) <= lVar28)) {
                                    if (iVar17 == -1) goto LAB_71035e1a9c;
                                  }
                                  else if (*(int *)(puVar20[4] + lVar29) == iVar17) {
LAB_71035e1a9c:
                                    if (lVar28 < 0) {
                                      pcVar40 = "error";
                                    }
                                    else {
                                      pcVar40 = "error";
                                      if ((int)((uint)uVar7 + (int)uVar32) < *(int *)(lVar34 + 8)) {
                                        pcVar40 = (char *)(puVar20[7] +
                                                          (long)*(int *)(puVar20[4] + lVar29 + 4));
                                      }
                                    }
                                    dVar56 = atof(pcVar40);
                                    local_88 = (float)dVar56;
                                    break;
                                  }
                                  uVar32 = uVar32 + 1;
                                  lVar29 = lVar29 + 8;
                                } while (uVar32 < uVar6);
                              }
                            }
                          }
                          uVar39 = uVar39 + 1;
                        } while (uVar39 < uVar8);
                      }
                    }
                    pppppppplVar31 = local_b8;
                    pppppppplVar33 = local_c0;
                    if (local_b8 < local_b0) {
                      local_b8[1] = (long *******)0x0;
                      local_b8[2] = (long *******)0x0;
                      *local_b8 = (long *******)0x0;
                      if (pppppppplStack_98 != (long ********)0x0) {
                        if ((long)pppppppplStack_98 < 0) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        ppppppplVar30 =
                             (long *******)(((ulong)((long)pppppppplStack_98 + -1) >> 6) + 1);
                        pppppppplVar33 = (long ********)((long)ppppppplVar30 * 8);
                        ppppppplVar23 =
                             (long *******)
                             FUN_710392e290(0x10,pppppppplVar33,(long ****)param_3,param_4,param_5,
                                            param_6,param_7,param_8);
                        if (ppppppplVar23 == (long *******)0x0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_6c[0] = 0;
                            ppppppppplVar53 = &local_78;
                            local_78 = pppppppplVar33;
                            uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                            if (((uVar39 & 1) != 0) &&
                               (ppppppplVar23 =
                                     (long *******)
                                     FUN_710392e290(0x10,pppppppplVar33,(long ****)ppppppppplVar53,
                                                    param_4,param_5,param_6,param_7,param_8),
                               ppppppplVar23 != (long *******)0x0)) goto LAB_71035e1c48;
                          }
                          ppppppplVar23 = (long *******)0x0;
                        }
LAB_71035e1c48:
                        *pppppppplVar31 = ppppppplVar23;
                        pppppppplVar31[1] = (long *******)0x0;
                        pppppppplVar31[2] = ppppppplVar30;
                        param_4 = (byte ****)
                                  ((long)local_a0 +
                                  ((ulong)pppppppplStack_98 >> 3 & 0x1ffffffffffffff8));
                        param_5 = (long ****)((ulong)pppppppplStack_98 & 0x3f);
                        param_3 = (long *********)0x0;
                        FUN_71035e5bd0((long *)pppppppplVar31,(ulong *)local_a0,0,(long)param_4,
                                       (ulong)param_5);
                      }
                      *(float *)(pppppppplVar31 + 3) = local_88;
                      local_b8 = local_b8 + 4;
                    }
                    else {
                      lVar29 = (long)local_b8 - (long)local_c0 >> 5;
                      uVar39 = lVar29 + 1;
                      if (uVar39 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      if ((ulong)((long)local_b0 - (long)local_c0 >> 5) < 0x3ffffffffffffff) {
                        uVar32 = (long)local_b0 - (long)local_c0 >> 4;
                        if (uVar39 <= uVar32) {
                          uVar39 = uVar32;
                        }
                        if (uVar39 != 0) {
                          if (uVar39 >> 0x3b == 0) goto LAB_71035e1cdc;
                          goto LAB_71035e2954;
                        }
LAB_71035e1d3c:
                        lVar34 = 0;
                      }
                      else {
                        uVar39 = 0x7ffffffffffffff;
LAB_71035e1cdc:
                        pppppppplVar25 = (long ********)(uVar39 * 0x20);
                        if (pppppppplVar25 == (long ********)0x0) {
                          pppppppplVar25 = (long ********)0x1;
                        }
                        lVar34 = FUN_710392e290(0x10,pppppppplVar25,(long ****)param_3,param_4,
                                                param_5,param_6,param_7,param_8);
                        if (lVar34 == 0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_6c[0] = 0;
                            param_3 = &local_78;
                            local_78 = pppppppplVar25;
                            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                            if (((uVar32 & 1) != 0) &&
                               (lVar34 = FUN_710392e290(0x10,pppppppplVar25,(long ****)param_3,
                                                        param_4,param_5,param_6,param_7,param_8),
                               lVar34 != 0)) goto LAB_71035e1d40;
                          }
                          goto LAB_71035e1d3c;
                        }
                      }
LAB_71035e1d40:
                      pppppppplVar13 = pppppppplStack_98;
                      pppppppplVar25 = (long ********)(lVar34 + lVar29 * 0x20);
                      *pppppppplVar25 = (long *******)0x0;
                      pppppppplVar25[1] = (long *******)0x0;
                      pppppppplVar25[2] = (long *******)0x0;
                      if (pppppppplStack_98 != (long ********)0x0) {
                        if ((long)pppppppplStack_98 < 0) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        ppppppplVar30 =
                             (long *******)(((ulong)((long)pppppppplStack_98 + -1) >> 6) + 1);
                        pppppppplVar31 = (long ********)((long)ppppppplVar30 * 8);
                        ppppppplVar23 =
                             (long *******)
                             FUN_710392e290(0x10,pppppppplVar31,(long ****)param_3,param_4,param_5,
                                            param_6,param_7,param_8);
                        if (ppppppplVar23 == (long *******)0x0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_6c[0] = 0;
                            ppppppppplVar53 = &local_78;
                            local_78 = pppppppplVar31;
                            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                            if (((uVar32 & 1) != 0) &&
                               (ppppppplVar23 =
                                     (long *******)
                                     FUN_710392e290(0x10,pppppppplVar31,(long ****)ppppppppplVar53,
                                                    param_4,param_5,param_6,param_7,param_8),
                               ppppppplVar23 != (long *******)0x0)) goto LAB_71035e1dc8;
                          }
                          ppppppplVar23 = (long *******)0x0;
                        }
LAB_71035e1dc8:
                        *pppppppplVar25 = ppppppplVar23;
                        pppppppplVar25[1] = (long *******)0x0;
                        pppppppplVar25[2] = ppppppplVar30;
                        param_4 = (byte ****)
                                  ((long)local_a0 +
                                  ((ulong)pppppppplVar13 >> 3 & 0x1ffffffffffffff8));
                        param_5 = (long ****)((ulong)pppppppplVar13 & 0x3f);
                        param_3 = (long *********)0x0;
                        FUN_71035e5bd0((long *)pppppppplVar25,(ulong *)local_a0,0,(long)param_4,
                                       (ulong)param_5);
                        pppppppplVar31 = local_b8;
                        pppppppplVar33 = local_c0;
                      }
                      local_b0 = (long ********)(lVar34 + uVar39 * 0x20);
                      *(float *)(pppppppplVar25 + 3) = local_88;
                      pppppppplVar13 = pppppppplVar25 + 4;
                      if (pppppppplVar31 != pppppppplVar33) {
                        uVar39 = (long)pppppppplVar31 + (-0x20 - (long)pppppppplVar33);
                        pppppppplVar50 = pppppppplVar25;
                        pppppppplVar55 = pppppppplVar31;
                        if (((uint)uVar39 >> 5 & 1) == 0) {
                          pppppppplVar55 = pppppppplVar31 + -4;
                          pppppppplVar50 = pppppppplVar25 + -4;
                          *pppppppplVar50 = *pppppppplVar55;
                          pppppppplVar25[-3] = pppppppplVar31[-3];
                          pppppppplVar25[-2] = pppppppplVar31[-2];
                          *pppppppplVar55 = (long *******)0x0;
                          pppppppplVar31[-3] = (long *******)0x0;
                          pppppppplVar31[-2] = (long *******)0x0;
                          *(undefined4 *)(pppppppplVar25 + -1) =
                               *(undefined4 *)(pppppppplVar31 + -1);
                        }
                        if (0x1f < uVar39) {
                          lVar28 = 0;
                          do {
                            lVar38 = lVar28 + -0x40;
                            *(undefined8 *)((long)pppppppplVar50 + lVar28 + -0x20) =
                                 *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x20);
                            *(undefined8 *)((long)pppppppplVar50 + lVar28 + -0x18) =
                                 *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x18);
                            *(undefined8 *)((long)pppppppplVar50 + lVar28 + -0x10) =
                                 *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x10);
                            *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x20) = 0;
                            *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x18) = 0;
                            *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x10) = 0;
                            *(undefined4 *)((long)pppppppplVar50 + lVar28 + -8) =
                                 *(undefined4 *)((long)pppppppplVar55 + lVar28 + -8);
                            *(undefined8 *)((long)pppppppplVar50 + lVar28 + -0x40) =
                                 *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x40);
                            *(undefined8 *)((long)pppppppplVar50 + lVar28 + -0x38) =
                                 *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x38);
                            *(undefined8 *)((long)pppppppplVar50 + lVar28 + -0x30) =
                                 *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x30);
                            *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x38) = 0;
                            *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x30) = 0;
                            *(undefined8 *)((long)pppppppplVar55 + lVar28 + -0x40) = 0;
                            *(undefined4 *)((long)pppppppplVar50 + lVar28 + -0x28) =
                                 *(undefined4 *)((long)pppppppplVar55 + lVar28 + -0x28);
                            lVar28 = lVar38;
                          } while ((long)pppppppplVar33 - (long)pppppppplVar55 != lVar38);
                        }
                        pppppppplVar25 =
                             (long ********)
                             (lVar34 + (lVar29 + (uVar39 >> 5 ^ 0xffffffffffffffff)) * 0x20);
                        pppppppplVar31 = local_b8;
                        pppppppplVar33 = local_c0;
                      }
                      while (local_c0 = pppppppplVar25, local_b8 = pppppppplVar13,
                            pppppppplVar31 != pppppppplVar33) {
                        pppppppplVar31 = pppppppplVar31 + -4;
                        pppppppplVar13 = local_b8;
                        pppppppplVar25 = local_c0;
                        if (*pppppppplVar31 != (long *******)0x0) {
                          FUN_710392eb40((ulong)*pppppppplVar31);
                          pppppppplVar13 = local_b8;
                          pppppppplVar25 = local_c0;
                        }
                      }
                      if (pppppppplVar33 != (long ********)0x0) {
                        FUN_710392eb40((ulong)pppppppplVar33);
                      }
                    }
                    if (local_a0 != (long ********)0x0) {
                      FUN_710392eb40((ulong)local_a0);
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < uVar4);
                }
              }
            }
            puVar46 = (ulong *)puVar22[4];
            if (puVar46 < (ulong *)puVar22[5]) {
              puVar46[1] = 0;
              puVar46[2] = 0;
              *puVar46 = 0;
              *puVar46 = (ulong)local_c0;
              puVar46[1] = (ulong)local_b8;
              puVar46[2] = (ulong)local_b0;
              local_c0 = (long ********)0x0;
              local_b8 = (long ********)0x0;
              local_b0 = (long ********)0x0;
              *(undefined1 *)(puVar46 + 3) = local_a8;
              puVar22[4] = puVar22[4] + 0x20;
            }
            else {
              puVar47 = (ulong *)puVar22[3];
              lVar29 = (long)puVar46 - (long)puVar47 >> 5;
              uVar36 = lVar29 + 1;
              if (uVar36 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar34 = (long)puVar22[5] - (long)puVar47;
              if ((ulong)(lVar34 >> 5) < 0x3ffffffffffffff) {
                uVar39 = lVar34 >> 4;
                if (uVar36 <= uVar39) {
                  uVar36 = uVar39;
                }
                if (uVar36 != 0) {
                  if (uVar36 >> 0x3b != 0) {
LAB_71035e2954:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  goto LAB_71035e1fd8;
                }
                lVar34 = 0;
              }
              else {
                uVar36 = 0x7ffffffffffffff;
LAB_71035e1fd8:
                pppppppplVar31 = (long ********)(uVar36 * 0x20);
                if (pppppppplVar31 == (long ********)0x0) {
                  pppppppplVar31 = (long ********)0x1;
                }
                lVar34 = FUN_710392e290(0x10,pppppppplVar31,(long ****)param_3,param_4,param_5,
                                        param_6,param_7,param_8);
                if (lVar34 == 0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_78 = (long ********)((ulong)local_78 & 0xffffffff00000000);
                    param_3 = &local_a0;
                    local_a0 = pppppppplVar31;
                    uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
                    if (((uVar39 & 1) != 0) &&
                       (lVar34 = FUN_710392e290(0x10,pppppppplVar31,(long ****)param_3,param_4,
                                                param_5,param_6,param_7,param_8), lVar34 != 0))
                    goto LAB_71035e2034;
                  }
                  lVar34 = 0;
                }
LAB_71035e2034:
                puVar47 = (ulong *)puVar22[3];
                puVar46 = (ulong *)puVar22[4];
              }
              puVar44 = (ulong *)(lVar34 + lVar29 * 0x20);
              *puVar44 = (ulong)local_c0;
              puVar44[1] = (ulong)local_b8;
              puVar44[2] = 0;
              puVar44[2] = (ulong)local_b0;
              local_b8 = (long ********)0x0;
              local_b0 = (long ********)0x0;
              local_c0 = (long ********)0x0;
              *(undefined1 *)(puVar44 + 3) = local_a8;
              puVar1 = puVar44 + 4;
              if (puVar46 != puVar47) {
                uVar39 = (long)puVar46 + (-0x20 - (long)puVar47);
                puVar51 = puVar44;
                puVar42 = puVar46;
                if (((uint)uVar39 >> 5 & 1) == 0) {
                  puVar51 = puVar44 + -4;
                  *puVar51 = 0;
                  puVar44[-3] = 0;
                  puVar44[-2] = 0;
                  puVar42 = puVar46 + -4;
                  *puVar51 = *puVar42;
                  puVar44[-3] = puVar46[-3];
                  puVar44[-2] = puVar46[-2];
                  *puVar42 = 0;
                  puVar46[-3] = 0;
                  puVar46[-2] = 0;
                  *(char *)(puVar44 + -1) = (char)puVar46[-1];
                }
                if (0x1f < uVar39) {
                  lVar28 = 0;
                  do {
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x18) = 0;
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x10) = 0;
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x20) = 0;
                    lVar38 = lVar28 + -0x40;
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x20) =
                         *(undefined8 *)((long)puVar42 + lVar28 + -0x20);
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x18) =
                         *(undefined8 *)((long)puVar42 + lVar28 + -0x18);
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x10) =
                         *(undefined8 *)((long)puVar42 + lVar28 + -0x10);
                    *(undefined8 *)((long)puVar42 + lVar28 + -0x18) = 0;
                    *(undefined8 *)((long)puVar42 + lVar28 + -0x10) = 0;
                    *(undefined8 *)((long)puVar42 + lVar28 + -0x20) = 0;
                    *(undefined1 *)((long)puVar51 + lVar28 + -8) =
                         *(undefined1 *)((long)puVar42 + lVar28 + -8);
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x40) = 0;
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x38) = 0;
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x30) = 0;
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x40) =
                         *(undefined8 *)((long)puVar42 + lVar28 + -0x40);
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x38) =
                         *(undefined8 *)((long)puVar42 + lVar28 + -0x38);
                    *(undefined8 *)((long)puVar51 + lVar28 + -0x30) =
                         *(undefined8 *)((long)puVar42 + lVar28 + -0x30);
                    *(undefined8 *)((long)puVar42 + lVar28 + -0x40) = 0;
                    *(undefined8 *)((long)puVar42 + lVar28 + -0x38) = 0;
                    *(undefined8 *)((long)puVar42 + lVar28 + -0x30) = 0;
                    *(undefined1 *)((long)puVar51 + lVar28 + -0x28) =
                         *(undefined1 *)((long)puVar42 + lVar28 + -0x28);
                    lVar28 = lVar38;
                  } while ((long)puVar47 - (long)puVar42 != lVar38);
                }
                puVar47 = (ulong *)puVar22[3];
                puVar46 = (ulong *)puVar22[4];
                puVar44 = (ulong *)(lVar34 + (lVar29 + (uVar39 >> 5 ^ 0xffffffffffffffff)) * 0x20);
              }
              puVar22[3] = (ulong)puVar44;
              puVar22[4] = (ulong)puVar1;
              puVar22[5] = lVar34 + uVar36 * 0x20;
              while (puVar1 = puVar46, puVar1 != puVar47) {
                puVar46 = puVar1 + -4;
                puVar44 = (ulong *)*puVar46;
                if (puVar44 != (ulong *)0x0) {
                  puVar51 = (ulong *)puVar1[-3];
                  if (puVar51 == puVar44) {
                    puVar1[-3] = (ulong)puVar44;
                    puVar51 = puVar44;
                  }
                  else {
                    do {
                      puVar51 = puVar51 + -4;
                      if (*puVar51 != 0) {
                        FUN_710392eb40(*puVar51);
                      }
                    } while (puVar44 != puVar51);
                    puVar51 = (ulong *)*puVar46;
                    puVar1[-3] = (ulong)puVar44;
                  }
                  if (puVar51 != (ulong *)0x0) {
                    FUN_710392eb40((ulong)puVar51);
                  }
                }
              }
              if (puVar47 != (ulong *)0x0) {
                FUN_710392eb40((ulong)puVar47);
              }
              pppppppplVar33 = local_c0;
              pppppppplVar31 = local_b8;
              if (local_c0 != (long ********)0x0) {
                while (pppppppplVar31 != pppppppplVar33) {
                  pppppppplVar31 = pppppppplVar31 + -4;
                  if (*pppppppplVar31 != (long *******)0x0) {
                    FUN_710392eb40((ulong)*pppppppplVar31);
                  }
                }
                local_b8 = pppppppplVar33;
                if (local_c0 != (long ********)0x0) {
                  FUN_710392eb40((ulong)local_c0);
                }
              }
            }
          }
        }
        else {
          iVar19 = -1;
          if (lVar29 < *(int *)(puVar20[1] + 4)) {
            iVar19 = *(int *)(puVar20[3] + lVar29 * 0x10);
          }
          if (iVar18 != iVar19) goto LAB_71035e17f0;
LAB_71035e1768:
          if ((-1 < lVar29) && (lVar34 = puVar20[1], lVar29 < *(int *)(lVar34 + 4))) {
            lVar29 = puVar20[3] + lVar29 * 0x10;
            uVar4 = *(ushort *)(lVar29 + 4);
            if (uVar4 != 0) {
              uVar5 = *(ushort *)(lVar29 + 8);
              uVar36 = 0;
              lVar29 = (ulong)uVar5 << 3;
              do {
                lVar28 = uVar5 + uVar36;
                if ((lVar28 < 0) || (*(int *)(lVar34 + 8) <= lVar28)) {
                  if (iVar17 == -1) goto LAB_71035e187c;
                }
                else if (*(int *)(puVar20[4] + lVar29) == iVar17) {
LAB_71035e187c:
                  if (lVar28 < 0) {
                    pcVar40 = "error";
                  }
                  else {
                    pcVar40 = "error";
                    if ((int)((uint)uVar5 + (int)uVar36) < *(int *)(lVar34 + 8)) {
                      pcVar40 = (char *)(puVar20[7] + (long)*(int *)(puVar20[4] + lVar29 + 4));
                    }
                  }
                  local_124 = atoi(pcVar40);
                  break;
                }
                uVar36 = uVar36 + 1;
                lVar29 = lVar29 + 8;
              } while (uVar36 < uVar4);
            }
          }
          *(bool *)(puVar22 + 6) = local_124 != 0;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_d8);
      if (puVar20 != (undefined8 *)0x0) goto LAB_71035e2620;
    }
    puVar46 = *(ulong **)(param_1[0x91] + 8);
    *(ulong **)(param_1[0x91] + 8) = puVar22;
    if (puVar46 != (ulong *)0x0) {
      FUN_71035e5ed0(puVar46);
      FUN_710392eb40((ulong)puVar46);
    }
    FUN_7103540b10(DAT_7105332f20,uVar27,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar45 = *param_2;
  }
  uVar21 = FUN_71035c25f0(uVar45,(byte *)"model.numdlb");
  if ((int)uVar21 == 0xffffff) goto LAB_71035e28d4;
  (**(code **)(*param_1 + 0x48))(param_1,*(undefined8 *)param_1[0x91],param_2);
  if (((*(uint *)(*(long *)param_1[0x91] + 0x10) < 8) &&
      ((1 << (ulong)(*(uint *)(*(long *)param_1[0x91] + 0x10) & 0x1f) & 0xd7U) != 0)) ||
     (pcVar40 = (char *)param_1[0x88], *pcVar40 == '\0')) {
    param_1[0x10] = *(long *)(*(long *)(DAT_7105337ce8 + 8) + 0x30);
    pcVar40 = (char *)param_1[0x88];
  }
  if ((pcVar40[8] != '\0') && (uVar21 = (**(code **)(*param_1 + 200))(param_1), (uVar21 & 1) != 0))
  {
    local_a0 = *(long *********)(param_1[0x88] + 0x20);
    pppppppplStack_98 = (long ********)(ulong)*(uint *)(param_1[0x88] + 0x28);
    (**(code **)(*param_1 + 0xe0))(param_1,&local_a0);
    plVar26 = (long *)(**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*plVar26 + 8))(plVar26,1);
    local_c0 = *(long *********)(param_1[0x88] + 0x10);
    local_b8 = (long ********)CONCAT44(0x3f800000,*(undefined4 *)(param_1[0x88] + 0x18));
    (**(code **)(*plVar26 + 0x78))(plVar26,&local_c0);
    (**(code **)(*plVar26 + 0x80))(*(undefined4 *)(param_1[0x88] + 0xc),plVar26);
    (**(code **)(*plVar26 + 0x90))(*(undefined4 *)(param_1[0x88] + 0x1c),plVar26);
  }
  if (bVar12) {
    if (*(char *)param_1[0x88] == '\0') {
LAB_71035e282c:
      lVar34 = **(long **)(*(long *)(DAT_7105335e90 + 8) + 0x1120);
      lVar29 = *(long *)(lVar34 + 0x80);
      lVar34 = *(long *)(lVar34 + 0x90);
      lVar28 = 0xffffffff;
    }
    else {
      lVar34 = **(long **)(*(long *)(DAT_7105335e90 + 8) + 0x1120);
      lVar28 = (long)*(int *)((char *)param_1[0x88] + 4);
      lVar29 = *(long *)(lVar34 + 0x80) + (lVar28 + 1) * 0x100;
      lVar34 = *(long *)(lVar34 + 0x90) + (lVar28 + 1) * 0xd0;
    }
  }
  else {
    if ((*(uint *)(*(long *)param_1[0x91] + 0x10) < 8) &&
       ((1 << (ulong)(*(uint *)(*(long *)param_1[0x91] + 0x10) & 0x1f) & 0xd7U) != 0))
    goto LAB_71035e282c;
    lVar34 = **(long **)(*(long *)(DAT_7105335e90 + 8) + 0x1120);
    lVar28 = 0;
    lVar29 = *(long *)(lVar34 + 0x80) + 0x100;
    lVar34 = *(long *)(lVar34 + 0x90) + 0xd0;
  }
  (**(code **)(*param_1 + 0xc0))(param_1,lVar29,lVar28);
  param_1[0xe] = lVar34;
  if (*(char *)param_1[0x88] == '\0') {
    lVar34 = **(long **)(*(long *)(DAT_7105335e90 + 8) + 0x1120);
    lVar29 = *(long *)(lVar34 + 0x80);
    lVar28 = *(long *)(lVar34 + 0x90);
    lVar34 = 0xffffffff;
  }
  else {
    lVar34 = (long)*(int *)((char *)param_1[0x88] + 4);
    lVar28 = **(long **)(*(long *)(DAT_7105335e90 + 8) + 0x1120);
    lVar29 = *(long *)(lVar28 + 0x80) + (lVar34 + 1) * 0x100;
    lVar28 = *(long *)(lVar28 + 0x90) + (lVar34 + 1) * 0xd0;
  }
  (**(code **)(*param_1 + 0xc0))(param_1,lVar29,lVar34);
  param_1[0xe] = lVar28;
  (**(code **)(*param_1 + 0x58))(param_1);
LAB_71035e28d4:
  std::recursive_mutex::unlock();
  return;
}

