// addr:      71032b81b0
// offset:    0x32b81b0
// name:      FUN_71032b81b0
// mangled:   
// signature: undefined __cdecl FUN_71032b81b0(long param_1, ulong param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032b81b0(long param_1,ulong param_2,undefined8 *param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  void *__dest;
  long ****pppplVar7;
  undefined4 uVar8;
  byte *pbVar9;
  long ***ppplVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  char *pcVar19;
  long ****pppplVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  char cVar24;
  void *__src;
  size_t __n;
  long ***local_110;
  char *local_108;
  uint local_100 [2];
  byte local_f8 [64];
  uint local_b8 [2];
  byte local_b0 [68];
  undefined4 local_6c [3];
  
  param_3[1] = *param_3;
  if (((param_2 & 0xff00000000000000) == 0x800000000000000) && ((param_2 & 0xffffffffff) != 0)) {
    lVar22 = *(long *)(param_1 + 8);
    pcVar19 = *(char **)(lVar22 + 0x20);
    cVar24 = *pcVar19;
    if ((cVar24 == '\f') && (iVar11 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
      uVar15 = *(ulong *)(lVar22 + 0x48) & 0xffffffffff;
      iVar13 = 0;
      pbVar9 = &DAT_7104742dbb;
      do {
        iVar2 = iVar11 + iVar13;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x28) + (long)*(int *)(pcVar19 + 5) +
                         (long)iVar2 * 8);
        uVar18 = *(ulong *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar18 == uVar15) {
          uVar6 = puVar1[1];
          if ((int)uVar6 < 0) goto LAB_71032b82a4;
          pbVar9 = (byte *)(pcVar19 + (int)uVar6);
          break;
        }
        iVar5 = iVar2 + -1;
        if (uVar18 <= uVar15) {
          iVar13 = iVar2 + 1;
          iVar5 = iVar11;
        }
        iVar11 = iVar5;
      } while (iVar13 <= iVar11);
    }
    else {
LAB_71032b82a4:
      pbVar9 = &DAT_7104742dbb;
    }
    if (*pbVar9 - 0xb < 2) {
      pppplVar20 = (long ****)(param_2 >> 0x28 & 0xffff);
      if (((uint)pppplVar20 < *(uint *)(pbVar9 + 1)) &&
         (uVar15 = FUN_7103269eb0(lVar22,(uint)pppplVar20), ((uVar15 ^ param_2) & 0xffffffffff) == 0
         )) goto LAB_71032b82f4;
    }
    uVar6 = FUN_710326a580(lVar22,param_2 & 0xffffffffff);
    pppplVar20 = (long ****)(ulong)uVar6;
  }
  else {
    lVar22 = *(long *)(param_1 + 8);
    pcVar19 = *(char **)(lVar22 + 0x20);
    cVar24 = *pcVar19;
    pppplVar20 = (long ****)&DAT_ffffffff;
  }
LAB_71032b82f4:
  if ((cVar24 == '\f') && (iVar11 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
    uVar15 = *(ulong *)(lVar22 + 0x48) & 0xffffffffff;
    iVar13 = 0;
    pbVar9 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar13;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x28) + (long)*(int *)(pcVar19 + 5) +
                       (long)iVar2 * 8);
      uVar18 = *(ulong *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar18 == uVar15) {
        uVar6 = puVar1[1];
        if ((int)uVar6 < 0) goto LAB_71032b8380;
        pbVar9 = (byte *)(pcVar19 + (int)uVar6);
        break;
      }
      iVar5 = iVar2 + -1;
      if (uVar18 <= uVar15) {
        iVar13 = iVar2 + 1;
        iVar5 = iVar11;
      }
      iVar11 = iVar5;
    } while (iVar13 <= iVar11);
  }
  else {
LAB_71032b8380:
    pbVar9 = &DAT_7104742dbb;
  }
  if ((*pbVar9 - 0xb < 2) && (uVar6 = (uint)pppplVar20, uVar6 < *(uint *)(pbVar9 + 1))) {
    uVar21 = 0;
    do {
      pcVar19 = "";
      local_b0[0] = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_f8[0] = 0;
      local_100[0] = 0;
      local_100[1] = 0;
      FUN_710062dc20(local_b8,"type_%d");
      FUN_710062dc20(local_100,"key_%d");
      FUN_710326a3e0((long *)&local_110,*(long *)(param_1 + 8),uVar6);
      if (local_b8[1] == 0) {
        uVar15 = 0;
      }
      else {
        uVar14 = 0xffffffff;
        pbVar9 = local_b0;
        do {
          pbVar16 = pbVar9 + 1;
          bVar4 = *pbVar9;
          uVar17 = bVar4 + 0x20;
          if (0x19 < bVar4 - 0x41) {
            uVar17 = (uint)bVar4;
          }
          uVar14 = (&DAT_7104754084)[(uVar17 ^ uVar14) & 0xff] ^ uVar14 >> 8;
          pbVar9 = pbVar16;
        } while (pbVar16 < local_b0 + local_b8[1]);
        uVar15 = (ulong)~uVar14;
      }
      if ((*local_108 == '\f') &&
         (iVar11 = *(int *)(local_108 + 1) + -1, 0 < *(int *)(local_108 + 1))) {
        plVar23 = (long *)(uVar15 | ((long)(int)local_b8[1] & 0xffU) << 0x20);
        iVar13 = 0;
        do {
          iVar2 = iVar11 + iVar13;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)local_110[5] + (long)iVar2 * 8 + (long)*(int *)(local_108 + 5));
          if (local_110[4][*puVar1] == plVar23) {
            uVar14 = puVar1[1];
            if (-1 < (int)uVar14) {
              pcVar12 = local_108 + (int)uVar14;
              ppplVar10 = local_110;
              goto LAB_71032b8508;
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (local_110[4][*puVar1] <= plVar23) {
            iVar13 = iVar2 + 1;
            iVar5 = iVar11;
          }
          iVar11 = iVar5;
        } while (iVar13 <= iVar11);
      }
      ppplVar10 = (long ***)0x0;
      pcVar12 = pcVar19;
LAB_71032b8508:
      if (*pcVar12 == '\t') {
        uVar15 = (ulong)ppplVar10[4][*(int *)(pcVar12 + 1)] & 0xffffffffff;
        if (uVar15 < 0xe51c246f7) {
          if (uVar15 == 0xd20e04426) {
            uVar8 = 6;
          }
          else if (uVar15 == 0xda8312693) {
            uVar8 = 4;
          }
          else {
            if (uVar15 != 0xe1b351b5f) goto LAB_71032b8840;
            uVar8 = 1;
          }
        }
        else if (uVar15 == 0xf2d3401bb) {
          uVar8 = 3;
        }
        else if (uVar15 == 0xf208e5fe9) {
          uVar8 = 5;
        }
        else {
          if (uVar15 != 0xe51c246f7) goto LAB_71032b8840;
          uVar8 = 2;
        }
        pppplVar7 = pppplVar20;
        FUN_710326a3e0((long *)&local_110,*(long *)(param_1 + 8),uVar6);
        if (local_100[1] == 0) {
          uVar15 = 0;
        }
        else {
          uVar14 = 0xffffffff;
          pbVar9 = local_f8;
          do {
            pbVar16 = pbVar9 + 1;
            bVar4 = *pbVar9;
            uVar17 = bVar4 + 0x20;
            if (0x19 < bVar4 - 0x41) {
              uVar17 = (uint)bVar4;
            }
            uVar14 = (&DAT_7104754084)[(uVar17 ^ uVar14) & 0xff] ^ uVar14 >> 8;
            pbVar9 = pbVar16;
          } while (pbVar16 < local_f8 + local_100[1]);
          uVar15 = (ulong)~uVar14;
        }
        if ((*local_108 == '\f') &&
           (iVar11 = *(int *)(local_108 + 1) + -1, 0 < *(int *)(local_108 + 1))) {
          plVar23 = (long *)(uVar15 | ((long)(int)local_100[1] & 0xffU) << 0x20);
          iVar13 = 0;
          do {
            iVar2 = iVar11 + iVar13;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar2 >> 1;
            puVar1 = (uint *)((long)local_110[5] + (long)iVar2 * 8 + (long)*(int *)(local_108 + 5));
            if (local_110[4][*puVar1] == plVar23) {
              uVar14 = puVar1[1];
              if (-1 < (int)uVar14) {
                pcVar19 = local_108 + (int)uVar14;
                ppplVar10 = local_110;
                goto LAB_71032b86d0;
              }
              break;
            }
            iVar5 = iVar2 + -1;
            if (local_110[4][*puVar1] <= plVar23) {
              iVar13 = iVar2 + 1;
              iVar5 = iVar11;
            }
            iVar11 = iVar5;
          } while (iVar13 <= iVar11);
        }
        ppplVar10 = (long ***)0x0;
LAB_71032b86d0:
        if (*pcVar19 == '\t') {
          plVar23 = ppplVar10[4][*(int *)(pcVar19 + 1)];
        }
        else {
          plVar23 = (long *)0x0;
        }
        puVar3 = (undefined4 *)param_3[1];
        if (puVar3 == (undefined4 *)param_3[2]) {
          __src = (void *)*param_3;
          __n = (long)puVar3 - (long)__src;
          uVar15 = ((long)__n >> 4) + 1;
          if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar22 = (long)param_3[2] - (long)__src;
          if ((ulong)(lVar22 >> 4) < 0x7ffffffffffffff) {
            uVar18 = lVar22 >> 3;
            if (uVar15 <= uVar18) {
              uVar15 = uVar18;
            }
            if (uVar15 != 0) {
              if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_71032b8774;
            }
            __dest = (void *)0x0;
          }
          else {
            uVar15 = 0xfffffffffffffff;
LAB_71032b8774:
            ppplVar10 = (long ***)(uVar15 * 0x10);
            if (ppplVar10 == (long ***)0x0) {
              ppplVar10 = (long ***)0x1;
            }
            __dest = (void *)FUN_710392e290(0x10,ppplVar10,pppplVar7,param_4,param_5,param_6,param_7
                                            ,param_8);
            if (__dest == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c[0] = 0;
                pppplVar7 = &local_110;
                local_110 = ppplVar10;
                uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                if (((uVar18 & 1) != 0) &&
                   (__dest = (void *)FUN_710392e290(0x10,ppplVar10,pppplVar7,param_4,param_5,param_6
                                                    ,param_7,param_8), __dest != (void *)0x0))
                goto LAB_71032b87dc;
              }
              __dest = (void *)0x0;
            }
          }
LAB_71032b87dc:
          puVar3 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
          *puVar3 = uVar8;
          *(long **)(puVar3 + 2) = plVar23;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *param_3 = __dest;
          param_3[1] = puVar3 + 4;
          param_3[2] = (void *)((long)__dest + uVar15 * 0x10);
          if (__src != (void *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
        else {
          *puVar3 = uVar8;
          *(long **)(puVar3 + 2) = plVar23;
          param_3[1] = param_3[1] + 0x10;
        }
      }
LAB_71032b8840:
      uVar21 = uVar21 + 1;
    } while (uVar21 < 9);
  }
  return;
}

