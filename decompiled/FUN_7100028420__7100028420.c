// addr:      7100028420
// offset:    0x28420
// name:      FUN_7100028420
// mangled:   
// signature: int __cdecl FUN_7100028420(long * param_1, int param_2)


int FUN_7100028420(long *param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  void *__dest;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined1 *puVar19;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined2 uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  ulong uVar40;
  undefined8 *puVar41;
  uint local_84;
  undefined1 *local_70;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 *puVar20;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 != (long *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
     ((puVar41 = (undefined8 *)param_1[7], puVar41 != (undefined8 *)0x0 &&
      ((long *)*puVar41 == param_1)))) {
    puVar32 = (uint *)(puVar41 + 1);
    uVar13 = *puVar32;
    if (((uVar13 - 0x3f34 < 0x20) &&
        (local_70 = (undefined1 *)param_1[3], local_70 != (undefined1 *)0x0)) &&
       ((pbVar39 = (byte *)*param_1, pbVar39 != (byte *)0x0 || ((int)param_1[1] == 0)))) {
      if (uVar13 == 0x3f3f) {
        uVar13 = 0x3f40;
        *puVar32 = 0x3f40;
        local_70 = (undefined1 *)param_1[3];
        pbVar39 = (byte *)*param_1;
      }
      puVar2 = puVar41 + 4;
      uVar30 = *(uint *)(param_1 + 4);
      uVar6 = *(uint *)(param_1 + 1);
      uVar37 = puVar41[10];
      puVar3 = puVar41 + 0xab;
      uVar31 = (ulong)*(uint *)(puVar41 + 0xb);
      plVar4 = puVar41 + 0x12;
      iVar11 = 0;
      puVar5 = puVar41 + 99;
      uVar40 = (ulong)uVar6;
      local_84 = uVar30;
LAB_7100028530:
      uVar12 = (uint)uVar40;
      uVar36 = (uint)uVar31;
      pbVar16 = pbVar39;
      iVar35 = 1;
      pbVar17 = pbVar39;
      switch(uVar13) {
      case 0x3f34:
        uVar13 = *(uint *)(puVar41 + 2);
        if (uVar13 != 0) {
          if (uVar36 < 0x10) {
            uVar22 = uVar31 & 0xffffffff;
            uVar40 = uVar22;
            if (uVar12 != 0) {
              pbVar16 = pbVar39 + 1;
              uVar40 = uVar31 & 0x3f;
              uVar31 = uVar22 + 8;
              uVar36 = uVar12 - 1;
              uVar37 = ((ulong)*pbVar39 << uVar40) + uVar37;
              if (uVar31 < 0x10) {
                uVar40 = uVar31;
                if (uVar36 == 0) goto LAB_7100029f58;
                uVar36 = uVar12 - 2;
                pbVar16 = pbVar39 + 2;
                uVar37 = ((ulong)pbVar39[1] << (uVar31 & 0x3f)) + uVar37;
                uVar31 = uVar22 + 0x10;
              }
              uVar40 = (ulong)uVar36;
              goto LAB_71000285a8;
            }
            goto LAB_7100029f58;
          }
LAB_71000285a8:
          if (((uVar13 >> 1 & 1) == 0) || (uVar37 != 0x8b1f)) {
            *(undefined4 *)(puVar41 + 3) = 0;
            if (puVar41[6] != 0) {
              *(undefined4 *)(puVar41[6] + 0x48) = 0xffffffff;
              uVar13 = *(uint *)(puVar41 + 2);
            }
            if (((uVar13 & 1) == 0) ||
               (uVar22 = (uVar37 & 0xff) * 0x100 + (uVar37 >> 8),
               uVar22 + (uVar22 / 0x1f + (uVar22 - uVar22 / 0x1f >> 1) >> 4) * -0x1f != 0)) {
              pcVar18 = "incorrect header check";
              goto LAB_7100029eb8;
            }
            if ((uVar37 & 0xf) != 8) goto LAB_7100029eb0;
            uVar12 = (uint)(uVar37 >> 4) & 0xf;
            uVar13 = uVar12 + 8;
            uVar36 = *(uint *)(puVar41 + 7);
            if (*(uint *)(puVar41 + 7) == 0) {
              *(uint *)(puVar41 + 7) = uVar13;
              uVar36 = uVar13;
            }
            if ((uVar13 < 0x10) && (uVar13 <= uVar36)) {
              *(int *)((long)puVar41 + 0x1c) = 0x100 << (ulong)uVar12;
              lVar33 = FUN_710002a6c0(0,(byte *)0x0,0);
              uVar15 = 0x3f3f;
              if ((uVar37 & 0x2000) != 0) {
                uVar15 = 0x3f3d;
              }
              uVar31 = 0;
              puVar41[4] = lVar33;
              param_1[0xc] = lVar33;
              *(undefined4 *)(puVar41 + 1) = uVar15;
              uVar37 = 0;
              goto LAB_7100029714;
            }
            uVar37 = uVar37 >> 4;
            uVar31 = (ulong)((int)uVar31 - 4);
            param_1[6] = (long)"invalid window size";
            uVar13 = 0x3f51;
            goto LAB_710002970c;
          }
          if (*(int *)(puVar41 + 7) == 0) {
            *(undefined4 *)(puVar41 + 7) = 0xf;
          }
          uVar13 = FUN_710002a9c0(0,0,0);
          *puVar2 = (ulong)uVar13;
          local_64 = 0x8b1f;
          uVar13 = FUN_710002a9c0(uVar13,(long)&local_64,2);
          uVar37 = 0;
          uVar31 = 0;
          *puVar2 = (ulong)uVar13;
          *puVar32 = 0x3f35;
          goto LAB_7100029714;
        }
        uVar13 = 0x3f40;
        goto LAB_7100029ec0;
      case 0x3f35:
        if (uVar36 < 0x10) {
          uVar22 = uVar31 & 0xffffffff;
          uVar40 = uVar22;
          if (uVar12 != 0) {
            pbVar16 = pbVar39 + 1;
            uVar40 = uVar31 & 0x3f;
            uVar31 = uVar22 + 8;
            uVar13 = uVar12 - 1;
            uVar37 = ((ulong)*pbVar39 << uVar40) + uVar37;
            if (uVar31 < 0x10) {
              pbVar17 = pbVar16;
              uVar40 = uVar31;
              if (uVar13 == 0) goto LAB_7100029f44;
              uVar13 = uVar12 - 2;
              pbVar16 = pbVar39 + 2;
              uVar37 = ((ulong)pbVar39[1] << (uVar31 & 0x3f)) + uVar37;
              uVar31 = uVar22 + 0x10;
            }
            uVar40 = (ulong)uVar13;
            goto LAB_7100028670;
          }
          goto LAB_7100029f44;
        }
LAB_7100028670:
        uVar12 = (uint)uVar40;
        uVar13 = (uint)uVar37;
        *(uint *)(puVar41 + 3) = uVar13;
        if ((uVar13 & 0xff) == 8) {
          if ((uVar37 & 0xe000) == 0) {
            if ((uint *)puVar41[6] != (uint *)0x0) {
              *(uint *)puVar41[6] = uVar13 >> 8 & 1;
              uVar13 = *(uint *)(puVar41 + 3);
            }
            if (((uVar13 >> 9 & 1) != 0) && ((*(byte *)(puVar41 + 2) >> 2 & 1) != 0)) {
              local_64 = (undefined2)uVar37;
              uVar13 = FUN_710002a9c0((uint)*puVar2,(long)&local_64,2);
              *puVar2 = (ulong)uVar13;
            }
            uVar31 = 0;
            uVar37 = 0;
            *puVar32 = 0x3f36;
            pbVar17 = pbVar16;
            goto LAB_710002912c;
          }
          pcVar18 = "unknown header flags set";
        }
        else {
LAB_7100029eb0:
          pcVar18 = "unknown compression method";
        }
        goto LAB_7100029eb8;
      case 0x3f36:
        uVar13 = uVar12;
        if (uVar36 < 0x20) {
LAB_710002912c:
          uVar40 = uVar31 & 0xffffffff;
          uVar22 = uVar40;
          pbVar16 = pbVar17;
          if (uVar12 != 0) {
            pbVar16 = pbVar17 + 1;
            uVar37 = ((ulong)*pbVar17 << (uVar31 & 0x3f)) + uVar37;
            uVar22 = uVar40 + 8;
            uVar13 = uVar12 - 1;
            if (0x1f < uVar22) goto LAB_71000291c8;
            if (uVar13 == 0) goto LAB_7100029fa8;
            uVar37 = ((ulong)pbVar17[1] << (uVar22 & 0x3f)) + uVar37;
            uVar22 = uVar40 + 0x10;
            uVar13 = uVar12 - 2;
            pbVar16 = pbVar17 + 2;
            if (0x1f < uVar22) goto LAB_71000291c8;
            if (uVar13 == 0) goto LAB_7100029fa8;
            uVar40 = uVar40 + 0x18;
            uVar13 = uVar12 - 3;
            pbVar16 = pbVar17 + 3;
            uVar37 = ((ulong)pbVar17[2] << (uVar22 & 0x3f)) + uVar37;
            if (0x1f < uVar40) goto LAB_71000291c8;
            uVar22 = uVar40;
            if (uVar13 == 0) goto LAB_7100029fa8;
            pbVar39 = pbVar17 + 4;
            uVar12 = uVar12 - 4;
            uVar37 = ((ulong)pbVar17[3] << (uVar40 & 0x3f)) + uVar37;
            lVar33 = puVar41[6];
            goto joined_r0x0071000291cc;
          }
        }
        else {
LAB_71000291c8:
          lVar33 = puVar41[6];
          pbVar39 = pbVar16;
          uVar12 = uVar13;
joined_r0x0071000291cc:
          if (lVar33 != 0) {
            *(ulong *)(lVar33 + 8) = uVar37;
          }
          if (((*(byte *)((long)puVar41 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(puVar41 + 2) >> 2 & 1) != 0)) {
            local_62 = (undefined1)(uVar37 >> 0x10);
            local_64 = (undefined2)uVar37;
            local_61 = (undefined1)(uVar37 >> 0x18);
            uVar13 = FUN_710002a9c0((uint)*puVar2,(long)&local_64,4);
            *puVar2 = (ulong)uVar13;
          }
          uVar31 = 0;
          uVar37 = 0;
          *puVar32 = 0x3f37;
LAB_710002923c:
          uVar22 = uVar31 & 0xffffffff;
          pbVar16 = pbVar39;
          if (uVar12 != 0) {
            pbVar16 = pbVar39 + 1;
            uVar22 = (uVar31 & 0xffffffff) + 8;
            uVar37 = ((ulong)*pbVar39 << (uVar31 & 0x3f)) + uVar37;
            if (0xf < uVar22) {
              uVar40 = (ulong)(uVar12 - 1);
              pbVar39 = pbVar16;
              goto LAB_7100029290;
            }
            if (uVar12 - 1 != 0) {
              pbVar16 = pbVar39 + 1;
              pbVar39 = pbVar39 + 2;
              uVar40 = (ulong)(uVar12 - 2);
              uVar37 = ((ulong)*pbVar16 << (uVar22 & 0x3f)) + uVar37;
              lVar33 = puVar41[6];
              goto joined_r0x007100029294;
            }
          }
        }
        goto LAB_7100029fa8;
      case 0x3f37:
        if (uVar36 < 0x10) goto LAB_710002923c;
LAB_7100029290:
        lVar33 = puVar41[6];
joined_r0x007100029294:
        if (lVar33 != 0) {
          *(uint *)(lVar33 + 0x10) = (uint)uVar37 & 0xff;
          *(int *)(puVar41[6] + 0x14) = (int)(uVar37 >> 8);
        }
        if (((*(byte *)((long)puVar41 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(puVar41 + 2) >> 2 & 1) != 0)) {
          local_64 = (undefined2)uVar37;
          uVar13 = FUN_710002a9c0((uint)*puVar2,(long)&local_64,2);
          *puVar2 = (ulong)uVar13;
        }
        uVar37 = 0;
        uVar31 = 0;
        *puVar32 = 0x3f38;
      case 0x3f38:
        uVar13 = *(uint *)(puVar41 + 3);
        if ((uVar13 >> 10 & 1) == 0) {
          if (puVar41[6] != 0) {
            *(undefined8 *)(puVar41[6] + 0x18) = 0;
          }
        }
        else {
          pbVar16 = pbVar39;
          if ((uint)uVar31 < 0x10) {
            iVar35 = (int)uVar40;
            uVar22 = uVar31 & 0xffffffff;
            if (iVar35 == 0) {
LAB_7100029fa8:
              uVar31 = uVar22;
              uVar12 = 0;
              break;
            }
            pbVar16 = pbVar39 + 1;
            uVar22 = (uVar31 & 0xffffffff) + 8;
            uVar37 = ((ulong)*pbVar39 << (uVar31 & 0x3f)) + uVar37;
            if (0xf < uVar22) {
              uVar40 = (ulong)(iVar35 - 1U);
              goto LAB_710002937c;
            }
            if (iVar35 - 1U == 0) goto LAB_7100029fa8;
            pbVar16 = pbVar39 + 1;
            pbVar39 = pbVar39 + 2;
            uVar40 = (ulong)(iVar35 - 2);
            iVar35 = ((uint)*pbVar16 << (uVar22 & 0x3f)) + (int)uVar37;
            lVar33 = puVar41[6];
            *(int *)((long)puVar41 + 0x5c) = iVar35;
          }
          else {
LAB_710002937c:
            lVar33 = puVar41[6];
            iVar35 = (int)uVar37;
            *(int *)((long)puVar41 + 0x5c) = iVar35;
            pbVar39 = pbVar16;
          }
          if (lVar33 != 0) {
            *(int *)(lVar33 + 0x20) = iVar35;
            uVar13 = *(uint *)(puVar41 + 3);
          }
          if (((uVar13 >> 9 & 1) == 0) || ((*(byte *)(puVar41 + 2) >> 2 & 1) == 0)) {
            uVar37 = 0;
            uVar31 = 0;
          }
          else {
            local_64 = (undefined2)iVar35;
            uVar13 = FUN_710002a9c0((uint)*puVar2,(long)&local_64,2);
            *puVar2 = (ulong)uVar13;
            uVar37 = 0;
            uVar31 = 0;
          }
        }
        *puVar32 = 0x3f39;
        pbVar16 = pbVar39;
switchD_7100028548_caseD_3f39:
        uVar13 = *(uint *)(puVar41 + 3);
        if ((uVar13 >> 10 & 1) != 0) {
          uVar36 = *(uint *)((long)puVar41 + 0x5c);
          uVar21 = (uint)uVar40;
          uVar12 = uVar21;
          if (uVar36 <= uVar21) {
            uVar12 = uVar36;
          }
          if (uVar12 != 0) {
            lVar33 = puVar41[6];
            if ((lVar33 != 0) && (*(long *)(lVar33 + 0x18) != 0)) {
              uVar36 = *(int *)(lVar33 + 0x20) - uVar36;
              uVar13 = *(uint *)(lVar33 + 0x24) - uVar36;
              if (uVar36 + uVar12 <= *(uint *)(lVar33 + 0x24)) {
                uVar13 = uVar12;
              }
              memcpy((void *)(*(long *)(lVar33 + 0x18) + (ulong)uVar36),pbVar16,(ulong)uVar13);
              uVar13 = *(uint *)(puVar41 + 3);
            }
            if (((uVar13 >> 9 & 1) != 0) && ((*(byte *)(puVar41 + 2) >> 2 & 1) != 0)) {
              uVar13 = FUN_710002a9c0((uint)*puVar2,(long)pbVar16,(ulong)uVar12);
              *puVar2 = (ulong)uVar13;
            }
            pbVar16 = pbVar16 + uVar12;
            uVar40 = (ulong)(uVar21 - uVar12);
            uVar36 = *(int *)((long)puVar41 + 0x5c) - uVar12;
            *(uint *)((long)puVar41 + 0x5c) = uVar36;
          }
          uVar12 = (uint)uVar40;
          if (uVar36 != 0) break;
        }
        *(undefined4 *)((long)puVar41 + 0x5c) = 0;
        *(undefined4 *)(puVar41 + 1) = 0x3f3a;
switchD_7100028548_caseD_3f3a:
        uVar13 = (uint)uVar40;
        if ((*(byte *)((long)puVar41 + 0x19) >> 3 & 1) == 0) {
          if (puVar41[6] != 0) {
            *(undefined8 *)(puVar41[6] + 0x28) = 0;
          }
LAB_7100029584:
          *(undefined4 *)((long)puVar41 + 0x5c) = 0;
          *(undefined4 *)(puVar41 + 1) = 0x3f3b;
switchD_7100028548_caseD_3f3b:
          uVar13 = (uint)uVar40;
          if ((*(byte *)((long)puVar41 + 0x19) >> 4 & 1) == 0) {
            if (puVar41[6] != 0) {
              *(undefined8 *)(puVar41[6] + 0x38) = 0;
            }
          }
          else {
            uVar12 = 0;
            if (uVar13 == 0) break;
            uVar22 = 0;
            do {
              bVar7 = pbVar16[uVar22];
              lVar33 = puVar41[6];
              uVar22 = uVar22 + 1;
              if ((lVar33 != 0) && (lVar38 = *(long *)(lVar33 + 0x38), lVar38 != 0)) {
                uVar12 = *(uint *)((long)puVar41 + 0x5c);
                if (uVar12 < *(uint *)(lVar33 + 0x40)) {
                  *(uint *)((long)puVar41 + 0x5c) = uVar12 + 1;
                  *(byte *)(lVar38 + (ulong)uVar12) = bVar7;
                }
              }
            } while ((bVar7 != 0) && ((uint)uVar22 < uVar13));
            if (((*(byte *)((long)puVar41 + 0x19) >> 1 & 1) != 0) &&
               ((*(byte *)(puVar41 + 2) >> 2 & 1) != 0)) {
              uVar12 = FUN_710002a9c0((uint)*puVar2,(long)pbVar16,uVar22 & 0xffffffff);
              *puVar2 = (ulong)uVar12;
            }
            pbVar16 = pbVar16 + uVar22;
            if (bVar7 != 0) goto LAB_7100029f30;
            uVar40 = (uVar40 & 0xffffffff) - uVar22;
          }
          *puVar32 = 0x3f3c;
          pbVar39 = pbVar16;
switchD_7100028548_caseD_3f3c:
          pbVar16 = pbVar39;
          if ((*(uint *)(puVar41 + 3) >> 9 & 1) != 0) {
            if ((uint)uVar31 < 0x10) {
              uVar22 = uVar31 & 0xffffffff;
              iVar35 = (int)uVar40;
              uVar40 = uVar22;
              if (iVar35 == 0) {
LAB_7100029f58:
                uVar31 = uVar40;
                uVar12 = 0;
                break;
              }
              pbVar16 = pbVar39 + 1;
              uVar40 = uVar31 & 0x3f;
              uVar31 = uVar22 + 8;
              uVar13 = iVar35 - 1;
              uVar37 = ((ulong)*pbVar39 << uVar40) + uVar37;
              if (uVar31 < 0x10) {
                uVar40 = uVar31;
                if (uVar13 == 0) goto LAB_7100029f58;
                uVar13 = iVar35 - 2;
                pbVar16 = pbVar39 + 2;
                uVar37 = ((ulong)pbVar39[1] << (uVar31 & 0x3f)) + uVar37;
                uVar31 = uVar22 + 0x10;
              }
              uVar40 = (ulong)uVar13;
            }
            if (((*(byte *)(puVar41 + 2) >> 2 & 1) != 0) && (uVar37 != (ushort)*puVar2)) {
              pcVar18 = "header crc mismatch";
LAB_7100029eb8:
              param_1[6] = (long)pcVar18;
              uVar13 = 0x3f51;
              pbVar39 = pbVar16;
LAB_7100029ec0:
              *puVar32 = uVar13;
              pbVar16 = pbVar39;
LAB_710002852c:
              uVar13 = *puVar32;
              pbVar39 = pbVar16;
              goto LAB_7100028530;
            }
            uVar37 = 0;
            uVar31 = 0;
          }
          if (puVar41[6] != 0) {
            *(uint *)(puVar41[6] + 0x44) = *(uint *)(puVar41 + 3) >> 9 & 1;
            *(undefined4 *)(puVar41[6] + 0x48) = 1;
          }
          uVar13 = FUN_710002a9c0(0,0,0);
          *puVar2 = (ulong)uVar13;
          param_1[0xc] = (ulong)uVar13;
          uVar13 = 0x3f3f;
LAB_710002970c:
          *puVar32 = uVar13;
LAB_7100029714:
          uVar13 = *puVar32;
          pbVar39 = pbVar16;
          goto LAB_7100028530;
        }
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar22 = 0;
          do {
            bVar7 = pbVar16[uVar22];
            lVar33 = puVar41[6];
            uVar22 = uVar22 + 1;
            if ((lVar33 != 0) && (lVar38 = *(long *)(lVar33 + 0x28), lVar38 != 0)) {
              uVar12 = *(uint *)((long)puVar41 + 0x5c);
              if (uVar12 < *(uint *)(lVar33 + 0x30)) {
                *(uint *)((long)puVar41 + 0x5c) = uVar12 + 1;
                *(byte *)(lVar38 + (ulong)uVar12) = bVar7;
              }
            }
          } while ((bVar7 != 0) && ((uint)uVar22 < uVar13));
          if (((*(byte *)((long)puVar41 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(puVar41 + 2) >> 2 & 1) != 0)) {
            uVar12 = FUN_710002a9c0((uint)*puVar2,(long)pbVar16,uVar22 & 0xffffffff);
            *puVar2 = (ulong)uVar12;
          }
          pbVar16 = pbVar16 + uVar22;
          if (bVar7 == 0) {
            uVar40 = (uVar40 & 0xffffffff) - uVar22;
            goto LAB_7100029584;
          }
LAB_7100029f30:
          uVar12 = uVar13 - (int)uVar22;
        }
        break;
      case 0x3f39:
        goto switchD_7100028548_caseD_3f39;
      case 0x3f3a:
        goto switchD_7100028548_caseD_3f3a;
      case 0x3f3b:
        goto switchD_7100028548_caseD_3f3b;
      case 0x3f3c:
        goto switchD_7100028548_caseD_3f3c;
      case 0x3f3d:
        if (uVar36 < 0x20) {
          uVar23 = uVar31 & 0xffffffff;
          uVar22 = uVar23;
          if (uVar12 != 0) {
            pbVar16 = pbVar39 + 1;
            uVar37 = ((ulong)*pbVar39 << (uVar31 & 0x3f)) + uVar37;
            uVar22 = uVar23 + 8;
            uVar13 = uVar12 - 1;
            if (0x1f < uVar22) {
LAB_7100028b8c:
              uVar40 = (ulong)uVar13;
              goto LAB_7100028b94;
            }
            if (uVar13 != 0) {
              uVar37 = ((ulong)pbVar39[1] << (uVar22 & 0x3f)) + uVar37;
              uVar22 = uVar23 + 0x10;
              uVar13 = uVar12 - 2;
              pbVar16 = pbVar39 + 2;
              if (0x1f < uVar22) goto LAB_7100028b8c;
              if (uVar13 != 0) {
                uVar23 = uVar23 + 0x18;
                uVar13 = uVar12 - 3;
                pbVar16 = pbVar39 + 3;
                uVar37 = ((ulong)pbVar39[2] << (uVar22 & 0x3f)) + uVar37;
                if (0x1f < uVar23) goto LAB_7100028b8c;
                uVar22 = uVar23;
                if (uVar13 != 0) {
                  pbVar16 = pbVar39 + 4;
                  uVar40 = (ulong)(uVar12 - 4);
                  uVar37 = ((ulong)pbVar39[3] << (uVar23 & 0x3f)) + uVar37;
                  goto LAB_7100028b94;
                }
              }
            }
          }
          goto LAB_7100029fa8;
        }
LAB_7100028b94:
        uVar22 = uVar37 >> 8 & 0xff00 | uVar37 >> 0x18 & 0xff | (uVar37 >> 8 & 0xff) << 0x10 |
                 (uVar37 & 0xff) << 0x18;
        uVar31 = 0;
        *puVar2 = uVar22;
        uVar37 = 0;
        param_1[0xc] = uVar22;
        *puVar32 = 0x3f3e;
      case 0x3f3e:
        if (*(int *)((long)puVar41 + 0x14) == 0) {
          param_1[3] = (long)local_70;
          *(uint *)(param_1 + 4) = uVar30;
          *param_1 = (long)pbVar16;
          *(int *)(param_1 + 1) = (int)uVar40;
          puVar41[10] = uVar37;
          *(int *)(puVar41 + 0xb) = (int)uVar31;
          return 2;
        }
        uVar22 = FUN_710002a6c0(0,(byte *)0x0,0);
        *puVar2 = uVar22;
        param_1[0xc] = uVar22;
        *puVar32 = 0x3f3f;
switchD_7100028548_caseD_3f3f:
        uVar12 = (uint)uVar40;
        if (param_2 - 5U < 2) break;
switchD_7100028548_caseD_3f40:
        uVar36 = (uint)uVar31;
        if (*(int *)((long)puVar41 + 0xc) != 0) {
          uVar37 = uVar37 >> (uVar36 & 7);
          uVar31 = (ulong)(uVar36 - (uVar36 & 7));
          uVar13 = 0x3f4e;
          pbVar39 = pbVar16;
          goto LAB_7100029ec0;
        }
        if (uVar36 < 3) {
          uVar12 = 0;
          if ((int)uVar40 == 0) break;
          uVar36 = uVar36 + 8;
          uVar40 = (ulong)((int)uVar40 - 1);
          uVar37 = ((ulong)*pbVar16 << (uVar31 & 0x3f)) + uVar37;
          pbVar16 = pbVar16 + 1;
        }
        uVar12 = (uint)uVar40;
        *(uint *)((long)puVar41 + 0xc) = (uint)uVar37 & 1;
        uVar13 = (uint)uVar37 >> 1 & 3;
        if (uVar13 == 3) {
          param_1[6] = (long)"invalid block type";
          uVar13 = 0x3f51;
LAB_7100028cd0:
          *puVar32 = uVar13;
        }
        else {
          if (uVar13 == 2) {
            uVar13 = 0x3f44;
            goto LAB_7100028cd0;
          }
          if (uVar13 != 1) {
            uVar13 = 0x3f41;
            goto LAB_7100028cd0;
          }
          puVar41[0xd] = &DAT_710446cc4e;
          *(undefined4 *)(puVar41 + 1) = 0x3f47;
          puVar41[0xe] = &DAT_710446d44e;
          puVar41[0xf] = 0x500000009;
          if (param_2 == 6) {
            uVar37 = uVar37 >> 3;
            uVar31 = (ulong)(uVar36 - 3);
            break;
          }
        }
        uVar13 = *puVar32;
        uVar37 = uVar37 >> 3;
        uVar31 = (ulong)(uVar36 - 3);
        pbVar39 = pbVar16;
        goto LAB_7100028530;
      case 0x3f3f:
        goto switchD_7100028548_caseD_3f3f;
      case 0x3f40:
        goto switchD_7100028548_caseD_3f40;
      case 0x3f41:
        uVar13 = uVar36 - (uVar36 & 7);
        uVar22 = (ulong)uVar13;
        uVar37 = uVar37 >> (uVar36 & 7);
        uVar31 = uVar22;
        if (uVar13 < 0x20) {
          uVar40 = uVar22;
          if (uVar12 == 0) goto LAB_7100029f44;
          pbVar16 = pbVar39 + 1;
          uVar31 = uVar22 + 8;
          uVar13 = uVar12 - 1;
          uVar37 = ((ulong)*pbVar39 << (uVar22 & 0x3f)) + uVar37;
          if (uVar31 < 0x20) {
            pbVar17 = pbVar16;
            uVar40 = uVar31;
            if (uVar13 == 0) goto LAB_7100029f44;
            uVar40 = uVar31 & 0x3f;
            uVar31 = uVar22 + 0x10;
            uVar13 = uVar12 - 2;
            pbVar16 = pbVar39 + 2;
            uVar37 = ((ulong)pbVar39[1] << uVar40) + uVar37;
            if (uVar31 < 0x20) {
              pbVar17 = pbVar16;
              uVar40 = uVar31;
              if (uVar13 == 0) goto LAB_7100029f44;
              uVar40 = uVar31 & 0x3f;
              uVar31 = uVar22 + 0x18;
              uVar13 = uVar12 - 3;
              pbVar16 = pbVar39 + 3;
              uVar37 = ((ulong)pbVar39[2] << uVar40) + uVar37;
              if (uVar31 < 0x20) {
                pbVar17 = pbVar16;
                uVar40 = uVar31;
                if (uVar13 == 0) goto LAB_7100029f44;
                uVar13 = uVar12 - 4;
                pbVar16 = pbVar39 + 4;
                uVar37 = ((ulong)pbVar39[3] << (uVar31 & 0x3f)) + uVar37;
                uVar31 = uVar22 + 0x20;
              }
            }
          }
          uVar40 = (ulong)uVar13;
        }
        uVar12 = (uint)uVar40;
        if ((uVar37 & 0xffff) != (uVar37 >> 0x10 ^ 0xffff)) {
          pcVar18 = "invalid stored block lengths";
          goto LAB_7100029eb8;
        }
        uVar31 = 0;
        uVar13 = (uint)uVar37;
        uVar37 = 0;
        *(uint *)((long)puVar41 + 0x5c) = uVar13 & 0xffff;
        *(undefined4 *)(puVar41 + 1) = 0x3f42;
        if (param_2 != 6) goto switchD_7100028548_caseD_3f42;
        break;
      case 0x3f42:
switchD_7100028548_caseD_3f42:
        *puVar32 = 0x3f43;
      case 0x3f43:
        uVar12 = (uint)uVar40;
        uVar13 = *(uint *)((long)puVar41 + 0x5c);
        if (uVar13 == 0) {
          uVar13 = 0x3f3f;
          pbVar39 = pbVar16;
          goto LAB_7100029ec0;
        }
        uVar36 = uVar12;
        if (uVar13 <= uVar12) {
          uVar36 = uVar13;
        }
        uVar13 = uVar30;
        if (uVar36 <= uVar30) {
          uVar13 = uVar36;
        }
        if (uVar13 == 0) break;
        uVar22 = (ulong)uVar13;
        memcpy(local_70,pbVar16,uVar22);
        uVar40 = (ulong)(uVar12 - uVar13);
        uVar30 = uVar30 - uVar13;
        local_70 = local_70 + uVar22;
        *(uint *)((long)puVar41 + 0x5c) = *(int *)((long)puVar41 + 0x5c) - uVar13;
        uVar13 = *puVar32;
        pbVar39 = pbVar16 + uVar22;
        goto LAB_7100028530;
      case 0x3f44:
        if (uVar36 < 0xe) {
          uVar22 = uVar31 & 0xffffffff;
          uVar40 = uVar22;
          if (uVar12 == 0) goto LAB_7100029f44;
          pbVar16 = pbVar39 + 1;
          uVar40 = uVar22 + 8;
          uVar13 = uVar12 - 1;
          uVar37 = ((ulong)*pbVar39 << (uVar31 & 0x3f)) + uVar37;
          if (uVar40 < 0xe) {
            pbVar17 = pbVar16;
            if (uVar13 == 0) goto LAB_7100029f44;
            uVar13 = uVar12 - 2;
            pbVar16 = pbVar39 + 2;
            uVar37 = ((ulong)pbVar39[1] << (uVar40 & 0x3f)) + uVar37;
            uVar40 = uVar22 + 0x10;
          }
          uVar36 = (uint)uVar40;
          uVar40 = (ulong)uVar13;
        }
        uVar21 = (uint)uVar37;
        uVar12 = (uVar21 & 0x1f) + 0x101;
        uVar13 = (uVar21 >> 10 & 0xf) + 4;
        uVar21 = uVar21 >> 5 & 0x1f;
        *(uint *)(puVar41 + 0x10) = uVar13;
        *(uint *)((long)puVar41 + 0x84) = uVar12;
        uVar37 = uVar37 >> 0xe;
        *(uint *)(puVar41 + 0x11) = uVar21 + 1;
        uVar31 = (ulong)(uVar36 - 0xe);
        if ((0x11e < uVar12) || (0x1d < uVar21)) {
          pcVar18 = "too many length or distance symbols";
          goto LAB_7100029eb8;
        }
        uVar36 = 0;
        *(undefined4 *)((long)puVar41 + 0x8c) = 0;
        *(undefined4 *)(puVar41 + 1) = 0x3f45;
LAB_710002895c:
        do {
          uVar21 = (uint)uVar31;
          pbVar39 = pbVar16;
          if (uVar21 < 3) {
            uVar12 = 0;
            if ((int)uVar40 == 0) goto LAB_7100029fac;
            pbVar39 = pbVar16 + 1;
            uVar21 = uVar21 + 8;
            uVar40 = (ulong)((int)uVar40 - 1);
            uVar37 = ((ulong)*pbVar16 << (uVar31 & 0x3f)) + uVar37;
          }
          uVar12 = uVar36 + 1;
          uVar8 = *(ushort *)(&DAT_710446cc28 + (ulong)uVar36 * 2);
          *(uint *)((long)puVar41 + 0x8c) = uVar12;
          uVar10 = (ushort)uVar37;
          uVar37 = uVar37 >> 3;
          *(ushort *)((long)puVar41 + (ulong)uVar8 * 2 + 0x98) = uVar10 & 7;
          uVar31 = (ulong)(uVar21 - 3);
          pbVar16 = pbVar39;
          uVar36 = uVar12;
        } while (uVar12 < uVar13);
        goto LAB_71000289b4;
      case 0x3f45:
        uVar36 = *(uint *)((long)puVar41 + 0x8c);
        uVar13 = *(uint *)(puVar41 + 0x10);
        uVar12 = uVar36;
        if (uVar36 < uVar13) goto LAB_710002895c;
LAB_71000289b4:
        if (uVar12 < 0x13) {
          uVar36 = 0x12 - uVar12;
          uVar13 = 3 - uVar12 & 3;
          if (uVar13 != 0) {
            iVar11 = -uVar13;
            uVar13 = uVar12;
            do {
              uVar12 = uVar13 + 1;
              *(uint *)((long)puVar41 + 0x8c) = uVar12;
              *(undefined2 *)
               ((long)puVar41 + (ulong)*(ushort *)(&DAT_710446cc28 + (ulong)uVar13 * 2) * 2 + 0x98)
                   = 0;
              iVar11 = iVar11 + 1;
              uVar13 = uVar12;
            } while (iVar11 != 0);
          }
          if (2 < uVar36) {
            do {
              *(uint *)((long)puVar41 + 0x8c) = uVar12 + 1;
              *(undefined2 *)
               ((long)puVar41 + (ulong)*(ushort *)(&DAT_710446cc28 + (ulong)uVar12 * 2) * 2 + 0x98)
                   = 0;
              uVar8 = *(ushort *)(&DAT_710446cc28 + (ulong)(uVar12 + 1) * 2);
              *(uint *)((long)puVar41 + 0x8c) = uVar12 + 2;
              *(undefined2 *)((long)puVar41 + (ulong)uVar8 * 2 + 0x98) = 0;
              uVar8 = *(ushort *)(&DAT_710446cc28 + (ulong)(uVar12 + 2) * 2);
              uVar13 = uVar12 + 3;
              uVar12 = uVar12 + 4;
              *(uint *)((long)puVar41 + 0x8c) = uVar13;
              *(undefined2 *)((long)puVar41 + (ulong)uVar8 * 2 + 0x98) = 0;
              *(uint *)((long)puVar41 + 0x8c) = uVar12;
              *(undefined2 *)
               ((long)puVar41 + (ulong)*(ushort *)(&DAT_710446cc28 + (ulong)uVar13 * 2) * 2 + 0x98)
                   = 0;
            } while (uVar12 < 0x13);
          }
        }
        puVar41[0xd] = puVar3;
        puVar41[0x12] = puVar3;
        *(undefined4 *)(puVar41 + 0xf) = 7;
        uVar14 = FUN_710002b180(0,(long)(puVar41 + 0x13),0x13,plVar4,(uint *)(puVar41 + 0xf),
                                (undefined *)puVar5);
        iVar11 = (int)uVar14;
        pbVar16 = pbVar39;
        if (iVar11 != 0) {
          param_1[6] = (long)"invalid code lengths set";
          uVar13 = 0x3f51;
          goto LAB_710002970c;
        }
        uVar13 = 0;
        *(undefined4 *)((long)puVar41 + 0x8c) = 0;
        *(undefined4 *)(puVar41 + 1) = 0x3f46;
        uVar21 = *(uint *)((long)puVar41 + 0x84);
        uVar36 = *(int *)(puVar41 + 0x11) + uVar21;
        if (uVar36 != 0) {
LAB_7100028e14:
          lVar33 = puVar41[0xd];
          uVar9 = ~(-1 << (ulong)(*(uint *)(puVar41 + 0xf) & 0x1f));
          do {
            while( true ) {
              uVar23 = (ulong)(uVar9 & (uint)uVar37);
              bVar7 = *(byte *)(lVar33 + uVar23 * 4 + 1);
              uVar22 = (ulong)bVar7;
              if ((uint)uVar31 < (uint)bVar7) {
                uVar31 = uVar31 & 0xffffffff;
                pbVar16 = pbVar39;
                do {
                  uVar12 = 0;
                  if ((int)uVar40 == 0) goto LAB_7100029fac;
                  pbVar39 = pbVar16 + 1;
                  uVar22 = uVar31 & 0x3f;
                  uVar31 = uVar31 + 8;
                  uVar37 = ((ulong)*pbVar16 << uVar22) + uVar37;
                  uVar12 = uVar9 & (uint)uVar37;
                  uVar22 = (ulong)*(byte *)(lVar33 + (ulong)uVar12 * 4 + 1);
                  uVar40 = (ulong)((int)uVar40 - 1);
                  pbVar16 = pbVar39;
                } while (uVar31 < uVar22);
                uVar23 = (ulong)uVar12;
              }
              uVar8 = *(ushort *)(lVar33 + uVar23 * 4 + 2);
              iVar35 = (int)uVar22;
              uVar12 = (uint)uVar31;
              pbVar16 = pbVar39;
              if (0xf < uVar8) break;
              uVar37 = uVar37 >> (uVar22 & 0x3f);
              uVar31 = (ulong)(uVar12 - iVar35);
              uVar22 = (ulong)uVar13;
              uVar13 = uVar13 + 1;
              *(uint *)((long)puVar41 + 0x8c) = uVar13;
              *(ushort *)((long)puVar41 + uVar22 * 2 + 0x98) = uVar8;
              if (uVar36 <= uVar13) goto LAB_7100029044;
            }
            if (uVar8 == 0x10) {
              if (uVar12 < iVar35 + 2U) {
                uVar31 = uVar31 & 0xffffffff;
                do {
                  uVar12 = 0;
                  if ((int)uVar40 == 0) goto LAB_7100029fac;
                  pbVar39 = pbVar16 + 1;
                  uVar23 = uVar31 & 0x3f;
                  uVar31 = uVar31 + 8;
                  uVar40 = (ulong)((int)uVar40 - 1);
                  uVar37 = ((ulong)*pbVar16 << uVar23) + uVar37;
                  pbVar16 = pbVar39;
                } while (uVar31 < iVar35 + 2U);
              }
              uVar37 = uVar37 >> (uVar22 & 0x3f);
              uVar12 = (int)uVar31 - iVar35;
              uVar31 = (ulong)uVar12;
              if (uVar13 != 0) {
                uVar28 = *(undefined2 *)((long)puVar41 + (ulong)(uVar13 - 1) * 2 + 0x98);
                uVar34 = (uint)uVar37;
                uVar37 = uVar37 >> 2;
                uVar34 = (uVar34 & 3) + 3;
                uVar31 = (ulong)(uVar12 - 2);
                if (uVar34 + uVar13 <= uVar36) goto LAB_7100028fc4;
              }
LAB_7100029ec8:
              pcVar18 = "invalid bit length repeat";
              pbVar16 = pbVar39;
              goto LAB_7100029eb8;
            }
            if (uVar8 == 0x11) {
              if (uVar12 < iVar35 + 3U) {
                uVar31 = uVar31 & 0xffffffff;
                do {
                  uVar12 = 0;
                  if ((int)uVar40 == 0) goto LAB_7100029fac;
                  pbVar39 = pbVar16 + 1;
                  uVar23 = uVar31 & 0x3f;
                  uVar31 = uVar31 + 8;
                  uVar40 = (ulong)((int)uVar40 - 1);
                  uVar37 = ((ulong)*pbVar16 << uVar23) + uVar37;
                  pbVar16 = pbVar39;
                } while (uVar31 < iVar35 + 3U);
              }
              iVar24 = (int)uVar31;
              uVar31 = uVar37 >> (uVar22 & 0x3f);
              uVar37 = uVar31 >> 3;
              uVar34 = ((uint)uVar31 & 7) + 3;
              iVar29 = -3;
            }
            else {
              if (uVar12 < iVar35 + 7U) {
                uVar31 = uVar31 & 0xffffffff;
                do {
                  uVar12 = 0;
                  if ((int)uVar40 == 0) goto LAB_7100029fac;
                  pbVar39 = pbVar16 + 1;
                  uVar23 = uVar31 & 0x3f;
                  uVar31 = uVar31 + 8;
                  uVar40 = (ulong)((int)uVar40 - 1);
                  uVar37 = ((ulong)*pbVar16 << uVar23) + uVar37;
                  pbVar16 = pbVar39;
                } while (uVar31 < iVar35 + 7U);
              }
              iVar24 = (int)uVar31;
              uVar31 = uVar37 >> (uVar22 & 0x3f);
              uVar37 = uVar31 >> 7;
              uVar34 = ((uint)uVar31 & 0x7f) + 0xb;
              iVar29 = -7;
            }
            uVar28 = 0;
            uVar31 = (ulong)(uint)((iVar29 - iVar35) + iVar24);
            if (uVar36 < uVar34 + uVar13) goto LAB_7100029ec8;
LAB_7100028fc4:
            uVar12 = uVar34 - 1;
            if ((uVar34 & 3) != 0) {
              iVar35 = -(uVar34 & 3);
              do {
                uVar22 = (ulong)uVar13;
                uVar13 = uVar13 + 1;
                uVar34 = uVar34 - 1;
                *(uint *)((long)puVar41 + 0x8c) = uVar13;
                *(undefined2 *)((long)puVar41 + uVar22 * 2 + 0x98) = uVar28;
                iVar35 = iVar35 + 1;
              } while (iVar35 != 0);
            }
            if (2 < uVar12) {
              do {
                uVar12 = uVar13 + 2;
                *(uint *)((long)puVar41 + 0x8c) = uVar13 + 1;
                *(undefined2 *)((long)puVar41 + (ulong)uVar13 * 2 + 0x98) = uVar28;
                *(uint *)((long)puVar41 + 0x8c) = uVar12;
                *(undefined2 *)((long)puVar41 + (ulong)(uVar13 + 1) * 2 + 0x98) = uVar28;
                uVar1 = uVar13 + 3;
                uVar34 = uVar34 - 4;
                uVar13 = uVar13 + 4;
                *(uint *)((long)puVar41 + 0x8c) = uVar1;
                *(undefined2 *)((long)puVar41 + (ulong)uVar12 * 2 + 0x98) = uVar28;
                *(uint *)((long)puVar41 + 0x8c) = uVar13;
                *(undefined2 *)((long)puVar41 + (ulong)uVar1 * 2 + 0x98) = uVar28;
              } while (uVar34 != 0);
            }
            pbVar16 = pbVar39;
          } while (uVar13 < uVar36);
        }
LAB_7100029044:
        uVar12 = (uint)uVar40;
        if (*(short *)(puVar41 + 0x53) == 0) {
          pcVar18 = "invalid code -- missing end-of-block";
          goto LAB_7100029eb8;
        }
        puVar41[0x12] = puVar3;
        puVar41[0xd] = puVar3;
        *(undefined4 *)(puVar41 + 0xf) = 9;
        uVar14 = FUN_710002b180(1,(long)(puVar41 + 0x13),uVar21,plVar4,(uint *)(puVar41 + 0xf),
                                (undefined *)puVar5);
        iVar11 = (int)uVar14;
        if (iVar11 == 0) {
          puVar41[0xe] = puVar41[0x12];
          *(undefined4 *)((long)puVar41 + 0x7c) = 6;
          uVar14 = FUN_710002b180(2,(long)puVar41 +
                                    (ulong)*(uint *)((long)puVar41 + 0x84) * 2 + 0x98,
                                  *(uint *)(puVar41 + 0x11),plVar4,(uint *)((long)puVar41 + 0x7c),
                                  (undefined *)puVar5);
          iVar11 = (int)uVar14;
          if (iVar11 != 0) {
            param_1[6] = (long)"invalid distances set";
            *puVar32 = 0x3f51;
            goto LAB_7100029714;
          }
          *puVar32 = 0x3f47;
          if (param_2 == 6) break;
switchD_7100028548_caseD_3f47:
          *puVar32 = 0x3f48;
          pbVar39 = pbVar16;
switchD_7100028548_caseD_3f48:
          if ((0x101 < uVar30) && (5 < (uint)uVar40)) {
            *(uint *)(param_1 + 4) = uVar30;
            *param_1 = (long)pbVar39;
            *(uint *)(param_1 + 1) = (uint)uVar40;
            param_1[3] = (long)local_70;
            puVar41[10] = uVar37;
            *(uint *)(puVar41 + 0xb) = (uint)uVar31;
            FUN_710002a9d0(param_1,local_84);
            local_70 = (undefined1 *)param_1[3];
            uVar30 = *(uint *)(param_1 + 4);
            pbVar16 = (byte *)*param_1;
            uVar40 = (ulong)*(uint *)(param_1 + 1);
            uVar37 = puVar41[10];
            uVar31 = (ulong)*(uint *)(puVar41 + 0xb);
            if (*(int *)(puVar41 + 1) == 0x3f3f) {
              *(undefined4 *)((long)puVar41 + 0x1bec) = 0xffffffff;
            }
            goto LAB_7100029714;
          }
          lVar33 = puVar41[0xd];
          uVar13 = -1 << (ulong)(*(uint *)(puVar41 + 0xf) & 0x1f);
          uVar23 = (ulong)((uint)uVar37 & (uVar13 ^ 0xffffffff));
          *(undefined4 *)((long)puVar41 + 0x1bec) = 0;
          bVar7 = *(byte *)(lVar33 + uVar23 * 4 + 1);
          uVar22 = (ulong)bVar7;
          if ((uint)uVar31 < (uint)bVar7) {
            uVar31 = uVar31 & 0xffffffff;
            pbVar16 = pbVar39;
            do {
              uVar12 = 0;
              if ((int)uVar40 == 0) goto LAB_7100029fac;
              pbVar39 = pbVar16 + 1;
              uVar22 = uVar31 & 0x3f;
              uVar31 = uVar31 + 8;
              uVar37 = ((ulong)*pbVar16 << uVar22) + uVar37;
              uVar12 = ~uVar13 & (uint)uVar37;
              uVar22 = (ulong)*(byte *)(lVar33 + (ulong)uVar12 * 4 + 1);
              uVar40 = (ulong)((int)uVar40 - 1);
              pbVar16 = pbVar39;
            } while (uVar31 < uVar22);
            uVar23 = (ulong)uVar12;
          }
          uVar36 = (uint)uVar22;
          uVar13 = (uint)uVar31;
          pbVar16 = (byte *)(lVar33 + uVar23 * 4);
          uVar8 = *(ushort *)(pbVar16 + 2);
          bVar7 = *pbVar16;
          if (bVar7 == 0 || (bVar7 & 0xf0) != 0) {
            uVar36 = 0;
            uVar23 = uVar22;
          }
          else {
            uVar21 = -1 << (ulong)(uVar36 + bVar7 & 0x1f);
            uVar27 = (ulong)((((uint)uVar37 & (uVar21 ^ 0xffffffff)) >> (ulong)(uVar36 & 0x1f)) +
                            (uint)uVar8);
            bVar7 = *(byte *)(lVar33 + uVar27 * 4 + 1);
            uVar23 = (ulong)bVar7;
            if (uVar13 < uVar36 + bVar7) {
              uVar31 = uVar31 & 0xffffffff;
              pbVar16 = pbVar39;
              do {
                uVar12 = 0;
                if ((int)uVar40 == 0) goto LAB_7100029fac;
                pbVar39 = pbVar16 + 1;
                uVar23 = uVar31 & 0x3f;
                uVar31 = uVar31 + 8;
                uVar37 = ((ulong)*pbVar16 << uVar23) + uVar37;
                uVar13 = (((uint)uVar37 & ~uVar21) >> (ulong)(uVar36 & 0x1f)) + (uint)uVar8;
                uVar23 = (ulong)*(byte *)(lVar33 + (ulong)uVar13 * 4 + 1);
                uVar40 = (ulong)((int)uVar40 - 1);
                pbVar16 = pbVar39;
              } while (uVar31 < uVar22 + uVar23);
              uVar27 = (ulong)uVar13;
            }
            pbVar16 = (byte *)(lVar33 + uVar27 * 4);
            uVar8 = *(ushort *)(pbVar16 + 2);
            bVar7 = *pbVar16;
            uVar37 = uVar37 >> (uVar22 & 0x3f);
            uVar13 = (int)uVar31 - uVar36;
            *(uint *)((long)puVar41 + 0x1bec) = uVar36;
          }
          uVar37 = uVar37 >> (uVar23 & 0x3f);
          uVar31 = (ulong)(uVar13 - (int)uVar23);
          *(uint *)((long)puVar41 + 0x1bec) = uVar36 + (int)uVar23;
          *(uint *)((long)puVar41 + 0x5c) = (uint)uVar8;
          if (bVar7 == 0) {
            uVar13 = 0x3f4d;
            goto LAB_7100029ec0;
          }
          if ((bVar7 >> 5 & 1) == 0) {
            pbVar16 = pbVar39;
            if ((bVar7 >> 6 & 1) != 0) {
              pcVar18 = "invalid literal/length code";
              goto LAB_7100029eb8;
            }
            uVar13 = bVar7 & 0xf;
            *(uint *)((long)puVar41 + 100) = uVar13;
            *(undefined4 *)(puVar41 + 1) = 0x3f49;
            if ((bVar7 & 0xf) == 0) {
LAB_7100028a30:
              iVar35 = *(int *)((long)puVar41 + 0x5c);
              pbVar16 = pbVar39;
            }
            else {
LAB_7100029acc:
              while( true ) {
                uVar12 = (uint)uVar31;
                if (uVar13 <= uVar12) break;
                if ((int)uVar40 == 0) {
                  uVar12 = 0;
                  goto LAB_7100029fac;
                }
                uVar40 = (ulong)((int)uVar40 - 1);
                uVar37 = ((ulong)*pbVar16 << (uVar31 & 0x3f)) + uVar37;
                uVar31 = (ulong)(uVar12 + 8);
                pbVar16 = pbVar16 + 1;
              }
              uVar36 = (uint)uVar37;
              uVar37 = uVar37 >> ((ulong)uVar13 & 0x3f);
              uVar31 = (ulong)(uVar12 - uVar13);
              iVar35 = *(int *)((long)puVar41 + 0x5c) +
                       (uVar36 & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU));
              *(int *)((long)puVar41 + 0x5c) = iVar35;
              *(uint *)((long)puVar41 + 0x1bec) = *(int *)((long)puVar41 + 0x1bec) + uVar13;
            }
            *(int *)(puVar41 + 0x37e) = iVar35;
            *(undefined4 *)(puVar41 + 1) = 0x3f4a;
            pbVar39 = pbVar16;
switchD_7100028548_caseD_3f4a:
            lVar33 = puVar41[0xe];
            uVar13 = -1 << (ulong)(*(uint *)((long)puVar41 + 0x7c) & 0x1f);
            uVar23 = (ulong)((uint)uVar37 & (uVar13 ^ 0xffffffff));
            bVar7 = *(byte *)(lVar33 + uVar23 * 4 + 1);
            uVar22 = (ulong)bVar7;
            if ((uint)uVar31 < (uint)bVar7) {
              uVar31 = uVar31 & 0xffffffff;
              pbVar16 = pbVar39;
              do {
                uVar12 = 0;
                if ((int)uVar40 == 0) goto LAB_7100029fac;
                pbVar39 = pbVar16 + 1;
                uVar22 = uVar31 & 0x3f;
                uVar31 = uVar31 + 8;
                uVar37 = ((ulong)*pbVar16 << uVar22) + uVar37;
                uVar12 = ~uVar13 & (uint)uVar37;
                uVar22 = (ulong)*(byte *)(lVar33 + (ulong)uVar12 * 4 + 1);
                uVar40 = (ulong)((int)uVar40 - 1);
                pbVar16 = pbVar39;
              } while (uVar31 < uVar22);
              uVar23 = (ulong)uVar12;
            }
            uVar13 = (uint)uVar31;
            pbVar16 = (byte *)(lVar33 + uVar23 * 4);
            uVar8 = *(ushort *)(pbVar16 + 2);
            bVar7 = *pbVar16;
            if ((bVar7 & 0xf0) == 0) {
              uVar21 = (uint)uVar22;
              uVar36 = -1 << (ulong)(uVar21 + bVar7 & 0x1f);
              uVar27 = (ulong)((((uint)uVar37 & (uVar36 ^ 0xffffffff)) >> (ulong)(uVar21 & 0x1f)) +
                              (uint)uVar8);
              bVar7 = *(byte *)(lVar33 + uVar27 * 4 + 1);
              uVar23 = (ulong)bVar7;
              if (uVar13 < uVar21 + bVar7) {
                uVar31 = uVar31 & 0xffffffff;
                pbVar16 = pbVar39;
                do {
                  uVar12 = 0;
                  if ((int)uVar40 == 0) goto LAB_7100029fac;
                  pbVar39 = pbVar16 + 1;
                  uVar23 = uVar31 & 0x3f;
                  uVar31 = uVar31 + 8;
                  uVar37 = ((ulong)*pbVar16 << uVar23) + uVar37;
                  uVar13 = (((uint)uVar37 & ~uVar36) >> (ulong)(uVar21 & 0x1f)) + (uint)uVar8;
                  uVar23 = (ulong)*(byte *)(lVar33 + (ulong)uVar13 * 4 + 1);
                  uVar40 = (ulong)((int)uVar40 - 1);
                  pbVar16 = pbVar39;
                } while (uVar31 < uVar22 + uVar23);
                uVar27 = (ulong)uVar13;
              }
              pbVar16 = (byte *)(lVar33 + uVar27 * 4);
              uVar8 = *(ushort *)(pbVar16 + 2);
              bVar7 = *pbVar16;
              uVar37 = uVar37 >> (uVar22 & 0x3f);
              uVar13 = (int)uVar31 - uVar21;
              iVar35 = *(int *)((long)puVar41 + 0x1bec) + uVar21;
              *(int *)((long)puVar41 + 0x1bec) = iVar35;
            }
            else {
              iVar35 = *(int *)((long)puVar41 + 0x1bec);
              uVar23 = uVar22;
            }
            uVar37 = uVar37 >> (uVar23 & 0x3f);
            uVar31 = (ulong)(uVar13 - (int)uVar23);
            *(int *)((long)puVar41 + 0x1bec) = iVar35 + (int)uVar23;
            pbVar16 = pbVar39;
            if ((bVar7 >> 6 & 1) != 0) {
              pcVar18 = "invalid distance code";
              goto LAB_7100029eb8;
            }
            uVar13 = bVar7 & 0xf;
            *(uint *)(puVar41 + 0xc) = (uint)uVar8;
            *(uint *)((long)puVar41 + 100) = uVar13;
            *(undefined4 *)(puVar41 + 1) = 0x3f4b;
            if ((bVar7 & 0xf) != 0) {
LAB_7100029c64:
              while( true ) {
                uVar12 = (uint)uVar31;
                if (uVar13 <= uVar12) break;
                if ((int)uVar40 == 0) {
                  uVar12 = 0;
                  goto LAB_7100029fac;
                }
                uVar40 = (ulong)((int)uVar40 - 1);
                uVar37 = ((ulong)*pbVar16 << (uVar31 & 0x3f)) + uVar37;
                uVar31 = (ulong)(uVar12 + 8);
                pbVar16 = pbVar16 + 1;
              }
              *(uint *)(puVar41 + 0xc) =
                   *(int *)(puVar41 + 0xc) +
                   ((uint)uVar37 & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU));
              uVar31 = (ulong)(uVar12 - uVar13);
              uVar37 = uVar37 >> ((ulong)uVar13 & 0x3f);
              *(uint *)((long)puVar41 + 0x1bec) = *(int *)((long)puVar41 + 0x1bec) + uVar13;
              pbVar39 = pbVar16;
            }
LAB_7100029ca4:
            *puVar32 = 0x3f4c;
            pbVar16 = pbVar39;
switchD_7100028548_caseD_3f4c:
            uVar12 = (uint)uVar40;
            if (uVar30 == 0) break;
            uVar13 = *(uint *)(puVar41 + 0xc);
            if (local_84 - uVar30 < uVar13) {
              uVar13 = uVar13 - (local_84 - uVar30);
              if ((*(uint *)(puVar41 + 8) < uVar13) && (*(int *)(puVar41 + 0x37d) != 0)) {
                pcVar18 = "invalid distance too far back";
                goto LAB_7100029eb8;
              }
              uVar12 = *(uint *)((long)puVar41 + 0x44);
              uVar36 = uVar13 - uVar12;
              if (uVar13 < uVar12 || uVar36 == 0) {
                uVar12 = uVar12 - uVar13;
              }
              else {
                uVar12 = *(int *)((long)puVar41 + 0x3c) - uVar36;
                uVar13 = uVar36;
              }
              puVar19 = (undefined1 *)(puVar41[9] + (ulong)uVar12);
              uVar12 = *(uint *)((long)puVar41 + 0x5c);
              uVar36 = uVar12;
              if (uVar13 <= uVar12) {
                uVar36 = uVar13;
              }
            }
            else {
              uVar12 = *(uint *)((long)puVar41 + 0x5c);
              puVar19 = local_70 + -(ulong)uVar13;
              uVar36 = uVar12;
            }
            uVar13 = uVar30;
            if (uVar36 <= uVar30) {
              uVar13 = uVar36;
            }
            *(uint *)((long)puVar41 + 0x5c) = uVar12 - uVar13;
            uVar12 = uVar30;
            if (uVar36 <= uVar30) {
              uVar12 = uVar36;
            }
            puVar26 = local_70;
            uVar36 = uVar13;
            if ((uVar13 & 7) != 0) {
              iVar35 = -(uVar13 & 7);
              puVar20 = puVar19;
              puVar25 = local_70;
              do {
                puVar19 = puVar20 + 1;
                uVar36 = uVar36 - 1;
                iVar35 = iVar35 + 1;
                puVar26 = puVar25 + 1;
                *puVar25 = *puVar20;
                puVar20 = puVar19;
                puVar25 = puVar26;
              } while (iVar35 != 0);
            }
            if (6 < uVar12 - 1) {
              do {
                *puVar26 = *puVar19;
                puVar26[1] = puVar19[1];
                puVar26[2] = puVar19[2];
                puVar26[3] = puVar19[3];
                puVar26[4] = puVar19[4];
                puVar26[5] = puVar19[5];
                puVar26[6] = puVar19[6];
                puVar26[7] = puVar19[7];
                uVar36 = uVar36 - 8;
                puVar19 = puVar19 + 8;
                puVar26 = puVar26 + 8;
              } while (uVar36 != 0);
            }
            local_70 = local_70 + (ulong)(uVar12 - 1) + 1;
            uVar30 = uVar30 - uVar13;
            if (*(int *)((long)puVar41 + 0x5c) == 0) {
              uVar13 = 0x3f48;
              pbVar39 = pbVar16;
              goto LAB_7100029ec0;
            }
            goto LAB_710002852c;
          }
          *(undefined4 *)((long)puVar41 + 0x1bec) = 0xffffffff;
          *(undefined4 *)(puVar41 + 1) = 0x3f3f;
          uVar13 = *puVar32;
        }
        else {
          param_1[6] = (long)"invalid literal/lengths set";
          *puVar32 = 0x3f51;
          uVar13 = 0x3f51;
          pbVar39 = pbVar16;
        }
        goto LAB_7100028530;
      case 0x3f46:
        uVar13 = *(uint *)((long)puVar41 + 0x8c);
        uVar21 = *(uint *)((long)puVar41 + 0x84);
        uVar36 = *(int *)(puVar41 + 0x11) + uVar21;
        if (uVar13 < uVar36) goto LAB_7100028e14;
        goto LAB_7100029044;
      case 0x3f47:
        goto switchD_7100028548_caseD_3f47;
      case 0x3f48:
        goto switchD_7100028548_caseD_3f48;
      case 0x3f49:
        uVar13 = *(uint *)((long)puVar41 + 100);
        if (uVar13 != 0) goto LAB_7100029acc;
        goto LAB_7100028a30;
      case 0x3f4a:
        goto switchD_7100028548_caseD_3f4a;
      case 0x3f4b:
        uVar13 = *(uint *)((long)puVar41 + 100);
        if (uVar13 != 0) goto LAB_7100029c64;
        goto LAB_7100029ca4;
      case 0x3f4c:
        goto switchD_7100028548_caseD_3f4c;
      case 0x3f4d:
        if (uVar30 != 0) {
          uVar30 = uVar30 - 1;
          *local_70 = (char)*(undefined4 *)((long)puVar41 + 0x5c);
          *(undefined4 *)(puVar41 + 1) = 0x3f48;
          uVar13 = *puVar32;
          local_70 = local_70 + 1;
          goto LAB_7100028530;
        }
        break;
      case 0x3f4e:
        uVar13 = 0;
        if (*(int *)(puVar41 + 2) == 0) {
LAB_71000297ec:
          uVar36 = (uint)uVar31;
          uVar12 = (uint)uVar40;
          *puVar32 = 0x3f4f;
          goto joined_r0x007100028b64;
        }
        if (uVar36 < 0x20) {
          uVar22 = uVar31 & 0xffffffff;
          uVar40 = uVar22;
          if (uVar12 == 0) goto LAB_7100029f44;
          pbVar16 = pbVar39 + 1;
          uVar40 = uVar31 & 0x3f;
          uVar31 = uVar22 + 8;
          uVar13 = uVar12 - 1;
          uVar37 = ((ulong)*pbVar39 << uVar40) + uVar37;
          if (uVar31 < 0x20) {
            pbVar17 = pbVar16;
            uVar40 = uVar31;
            if (uVar13 == 0) goto LAB_7100029f44;
            uVar40 = uVar31 & 0x3f;
            uVar31 = uVar22 + 0x10;
            uVar13 = uVar12 - 2;
            pbVar16 = pbVar39 + 2;
            uVar37 = ((ulong)pbVar39[1] << uVar40) + uVar37;
            if (uVar31 < 0x20) {
              pbVar17 = pbVar16;
              uVar40 = uVar31;
              if (uVar13 == 0) goto LAB_7100029f44;
              uVar40 = uVar31 & 0x3f;
              uVar31 = uVar22 + 0x18;
              uVar13 = uVar12 - 3;
              pbVar16 = pbVar39 + 3;
              uVar37 = ((ulong)pbVar39[2] << uVar40) + uVar37;
              if (uVar31 < 0x20) {
                pbVar17 = pbVar16;
                uVar40 = uVar31;
                if (uVar13 == 0) goto LAB_7100029f44;
                uVar13 = uVar12 - 4;
                pbVar16 = pbVar39 + 4;
                uVar37 = ((ulong)pbVar39[3] << (uVar31 & 0x3f)) + uVar37;
                uVar31 = uVar22 + 0x20;
              }
            }
          }
          uVar40 = (ulong)uVar13;
        }
        uVar22 = (ulong)(local_84 - uVar30);
        param_1[5] = param_1[5] + uVar22;
        puVar41[5] = puVar41[5] + uVar22;
        uVar13 = *(uint *)(puVar41 + 2);
        uVar12 = uVar13 & 4;
        if ((local_84 - uVar30 != 0) && (uVar12 != 0)) {
          if (*(int *)(puVar41 + 3) == 0) {
            uVar22 = FUN_710002a6c0(puVar41[4],local_70 + -uVar22,uVar22);
          }
          else {
            uVar13 = FUN_710002a9c0((uint)puVar41[4],(long)(local_70 + -uVar22),uVar22);
            uVar22 = (ulong)uVar13;
          }
          puVar41[4] = uVar22;
          param_1[0xc] = uVar22;
          uVar13 = *(uint *)(puVar41 + 2);
          uVar12 = uVar13 & 4;
        }
        local_84 = uVar30;
        if (uVar12 == 0) {
LAB_71000297e0:
          uVar37 = 0;
          uVar31 = 0;
          goto LAB_71000297ec;
        }
        uVar22 = uVar37;
        if (*(int *)(puVar41 + 3) == 0) {
          uVar22 = uVar37 >> 8 & 0xff00 | uVar37 >> 0x18 & 0xff | (uVar37 >> 8 & 0xff) << 0x10 |
                   (uVar37 & 0xff) << 0x18;
        }
        if (uVar22 == *puVar2) goto LAB_71000297e0;
        param_1[6] = (long)"incorrect data check";
        uVar13 = 0x3f51;
        *puVar32 = 0x3f51;
        pbVar39 = pbVar16;
        goto LAB_7100028530;
      case 0x3f4f:
        uVar13 = *(uint *)(puVar41 + 2);
joined_r0x007100028b64:
        if (uVar13 != 0) {
          uVar36 = (uint)uVar31;
          uVar12 = (uint)uVar40;
          if (*(int *)(puVar41 + 3) != 0) {
            pbVar17 = pbVar16;
            if (uVar36 < 0x20) {
              uVar22 = uVar31 & 0xffffffff;
              uVar40 = uVar22;
              if (uVar12 == 0) {
LAB_7100029f44:
                uVar31 = uVar40;
                uVar12 = 0;
                pbVar16 = pbVar17;
                break;
              }
              pbVar17 = pbVar16 + 1;
              uVar40 = uVar31 & 0x3f;
              uVar31 = uVar22 + 8;
              uVar13 = uVar12 - 1;
              uVar37 = ((ulong)*pbVar16 << uVar40) + uVar37;
              if (uVar31 < 0x20) {
                uVar40 = uVar31;
                if (uVar13 == 0) goto LAB_7100029f44;
                uVar40 = uVar31 & 0x3f;
                uVar31 = uVar22 + 0x10;
                uVar13 = uVar12 - 2;
                pbVar17 = pbVar16 + 2;
                uVar37 = ((ulong)pbVar16[1] << uVar40) + uVar37;
                if (uVar31 < 0x20) {
                  uVar40 = uVar31;
                  if (uVar13 == 0) goto LAB_7100029f44;
                  uVar40 = uVar31 & 0x3f;
                  uVar31 = uVar22 + 0x18;
                  uVar13 = uVar12 - 3;
                  pbVar17 = pbVar16 + 3;
                  uVar37 = ((ulong)pbVar16[2] << uVar40) + uVar37;
                  if (uVar31 < 0x20) {
                    uVar40 = uVar31;
                    if (uVar13 == 0) goto LAB_7100029f44;
                    uVar13 = uVar12 - 4;
                    pbVar17 = pbVar16 + 4;
                    uVar37 = ((ulong)pbVar16[3] << (uVar31 & 0x3f)) + uVar37;
                    uVar31 = uVar22 + 0x20;
                  }
                }
              }
              uVar40 = (ulong)uVar13;
            }
            uVar12 = (uint)uVar40;
            pbVar16 = pbVar17;
            if (uVar37 != *(uint *)(puVar41 + 5)) {
              pcVar18 = "incorrect length check";
              goto LAB_7100029eb8;
            }
            uVar37 = 0;
            uVar36 = 0;
          }
        }
        *puVar32 = 0x3f50;
        iVar35 = 1;
      case 0x3f50:
        goto switchD_7100028548_caseD_3f50;
      case 0x3f51:
        iVar35 = -3;
        goto switchD_7100028548_caseD_3f50;
      case 0x3f52:
        return -4;
      default:
        goto LAB_7100029f00;
      }
LAB_7100029fac:
      uVar36 = (uint)uVar31;
      iVar35 = iVar11;
      goto switchD_7100028548_caseD_3f50;
    }
  }
LAB_7100029f00:
  return -2;
switchD_7100028548_caseD_3f50:
  param_1[3] = (long)local_70;
  *(uint *)(param_1 + 4) = uVar30;
  *param_1 = (long)pbVar16;
  *(uint *)(param_1 + 1) = uVar12;
  puVar41[10] = uVar37;
  *(uint *)(puVar41 + 0xb) = uVar36;
  uVar13 = *(uint *)(param_1 + 4);
  if ((*(int *)((long)puVar41 + 0x3c) != 0) ||
     (((local_84 != uVar13 && (*puVar32 < 0x3f51)) && ((param_2 != 4 || (*puVar32 < 0x3f4e)))))) {
    lVar33 = param_1[7];
    lVar38 = param_1[3];
    __dest = *(void **)(lVar33 + 0x48);
    if (__dest == (void *)0x0) {
      __dest = (void *)(*(code *)param_1[8])
                                 (param_1[10],1 << (ulong)(*(uint *)(lVar33 + 0x38) & 0x1f),1);
      *(void **)(lVar33 + 0x48) = __dest;
      if (__dest == (void *)0x0) {
        *puVar32 = 0x3f52;
        return -4;
      }
    }
    uVar30 = *(uint *)(lVar33 + 0x3c);
    uVar13 = local_84 - uVar13;
    if (uVar30 == 0) {
      uVar30 = 1 << (ulong)(*(uint *)(lVar33 + 0x38) & 0x1f);
      *(uint *)(lVar33 + 0x3c) = uVar30;
      *(undefined8 *)(lVar33 + 0x40) = 0;
    }
    if (uVar13 < uVar30) {
      uVar30 = uVar30 - *(uint *)(lVar33 + 0x44);
      uVar12 = uVar13;
      if (uVar30 <= uVar13) {
        uVar12 = uVar30;
      }
      memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar33 + 0x44)),
             (void *)(lVar38 - (ulong)uVar13),(ulong)uVar12);
      uVar13 = uVar13 - uVar12;
      if (uVar13 == 0) {
        uVar13 = *(int *)(lVar33 + 0x44) + uVar12;
        uVar30 = 0;
        if (uVar13 != *(uint *)(lVar33 + 0x3c)) {
          uVar30 = uVar13;
        }
        *(uint *)(lVar33 + 0x44) = uVar30;
        if (*(uint *)(lVar33 + 0x40) < *(uint *)(lVar33 + 0x3c)) {
          *(uint *)(lVar33 + 0x40) = *(uint *)(lVar33 + 0x40) + uVar12;
        }
      }
      else {
        memcpy(*(void **)(lVar33 + 0x48),(void *)(lVar38 - (ulong)uVar13),(ulong)uVar13);
        *(undefined4 *)(lVar33 + 0x40) = *(undefined4 *)(lVar33 + 0x3c);
        *(uint *)(lVar33 + 0x44) = uVar13;
      }
    }
    else {
      memcpy(__dest,(void *)(lVar38 - (ulong)uVar30),(ulong)uVar30);
      *(undefined4 *)(lVar33 + 0x40) = *(undefined4 *)(lVar33 + 0x3c);
      *(undefined4 *)(lVar33 + 0x44) = 0;
    }
  }
  uVar6 = uVar6 - (int)param_1[1];
  local_84 = local_84 - (int)param_1[4];
  uVar31 = (ulong)local_84;
  param_1[2] = param_1[2] + (ulong)uVar6;
  param_1[5] = param_1[5] + uVar31;
  puVar41[5] = puVar41[5] + uVar31;
  if ((local_84 != 0) && ((*(uint *)(puVar41 + 2) >> 2 & 1) != 0)) {
    if (*(int *)(puVar41 + 3) == 0) {
      uVar31 = FUN_710002a6c0(puVar41[4],(byte *)(param_1[3] - uVar31),uVar31);
    }
    else {
      uVar13 = FUN_710002a9c0((uint)puVar41[4],(long)(param_1[3] - uVar31),uVar31);
      uVar31 = (ulong)uVar13;
    }
    *puVar2 = uVar31;
    param_1[0xc] = uVar31;
  }
  iVar29 = *(int *)(puVar41 + 1);
  iVar11 = 0;
  if (*(int *)((long)puVar41 + 0xc) != 0) {
    iVar11 = 0x40;
  }
  iVar24 = 0x100;
  if (iVar29 != 0x3f42 && iVar29 != 0x3f47) {
    iVar24 = 0;
  }
  *(uint *)(param_1 + 0xb) =
       iVar11 + *(int *)(puVar41 + 0xb) + (uint)(iVar29 == 0x3f3f) * 0x80 + iVar24;
  if ((local_84 == 0 && uVar6 == 0 || param_2 == 4) && iVar35 == 0) {
    return -5;
  }
  return iVar35;
}

