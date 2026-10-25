// addr:      7103655da0
// offset:    0x3655da0
// name:      FUN_7103655da0
// mangled:   
// signature: undefined __cdecl FUN_7103655da0(ulong * param_1, undefined8 * param_2, uint param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103655da0(ulong *param_1,undefined8 *param_2,uint param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  size_t __n;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  byte *__s2;
  long ****pppplVar10;
  long ****pppplVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  long ***local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long ***local_70;
  undefined4 local_64;
  
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = DAT_71053375a8;
  pbVar3 = (byte *)*param_2;
  pbVar4 = (byte *)param_2[1];
  do {
    if (pbVar3 == pbVar4) {
      return;
    }
    if ((param_3 & 1) == 0) {
      lVar25 = *(long *)(lVar7 + 0x38);
      lVar14 = *(long *)(lVar7 + 0x40);
      if (lVar25 != lVar14) {
        do {
          plVar29 = *(long **)(lVar25 + 0x10);
          if ((plVar29 != (long *)0x0) && (lVar30 = *(long *)(lVar25 + 0x18), *plVar29 == lVar30)) {
            lVar12 = *(long *)(lVar25 + 8);
            lVar24 = *(long *)(lVar12 + 0x78);
            lVar23 = *(long *)(lVar12 + 0x80);
            if (lVar24 != lVar23) {
              bVar6 = *pbVar3;
              __n = (ulong)(bVar6 >> 1);
              if ((bVar6 & 1) != 0) {
                __n = *(size_t *)(pbVar3 + 8);
              }
LAB_71036560b4:
              if ((*(long **)(lVar24 + 0x30) == (long *)0x0) ||
                 (**(long **)(lVar24 + 0x30) != *(long *)(lVar24 + 0x38))) {
                lVar26 = 0;
              }
              else {
                lVar26 = *(long *)(lVar24 + 0x28);
              }
              bVar5 = *(byte *)(lVar26 + 0x80);
              sVar2 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                sVar2 = *(size_t *)(lVar26 + 0x88);
              }
              if (sVar2 != __n) goto switchD_7103656188_default;
              pvVar22 = *(void **)(lVar26 + 0x90);
              if ((bVar5 & 1) == 0) {
                pvVar22 = (void *)(lVar26 + 0x81);
              }
              __s2 = pbVar3 + 1;
              if ((bVar6 & 1) != 0) {
                __s2 = *(byte **)(pbVar3 + 0x10);
              }
              if ((bVar5 & 1) == 0) {
                if (__n != 0) {
                  pbVar13 = (byte *)(lVar26 + 0x81);
                  lVar17 = -(ulong)(bVar5 >> 1);
                  do {
                    if (*pbVar13 != *__s2) goto switchD_7103656188_default;
                    pbVar13 = pbVar13 + 1;
                    __s2 = __s2 + 1;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 0);
                }
              }
              else if ((__n != 0) && (iVar8 = memcmp(pvVar22,__s2,__n), iVar8 != 0))
              goto switchD_7103656188_default;
              bVar5 = *(byte *)(lVar26 + 0x98);
              uVar9 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                uVar9 = *(ulong *)(lVar26 + 0xa0);
              }
              switch(uVar9) {
              case 7:
                pvVar22 = *(void **)(lVar26 + 0xa8);
                if ((bVar5 & 1) == 0) {
                  pvVar22 = (void *)(lVar26 + 0x99);
                }
                iVar8 = memcmp(pvVar22,"nu::Far",7);
                break;
              case 8:
                plVar21 = *(long **)(lVar26 + 0xa8);
                if ((bVar5 & 1) == 0) {
                  plVar21 = (long *)(lVar26 + 0x99);
                }
                if ((*plVar21 != 0x74726f533a3a756e) && (*plVar21 != 0x7261654e3a3a756e))
                goto switchD_7103656188_default;
                goto LAB_7103655e40;
              case 9:
                pvVar22 = *(void **)(lVar26 + 0xa8);
                if ((bVar5 & 1) == 0) {
                  pvVar22 = (void *)(lVar26 + 0x99);
                }
                iVar8 = memcmp(pvVar22,"nu::Final",9);
                break;
              case 10:
                pvVar22 = *(void **)(lVar26 + 0xa8);
                if ((bVar5 & 1) == 0) {
                  pvVar22 = (void *)(lVar26 + 0x99);
                }
                iVar8 = memcmp(pvVar22,"nu::Opaque",10);
                break;
              default:
                goto switchD_7103656188_default;
              }
              if (iVar8 != 0) goto switchD_7103656188_default;
LAB_7103655e40:
              puVar28 = (undefined8 *)param_1[1];
              if (puVar28 == (undefined8 *)param_1[2]) {
                puVar27 = (undefined8 *)*param_1;
                pppplVar10 = (long ****)((long)puVar28 - (long)puVar27 >> 5);
                uVar9 = (long)pppplVar10 + 1;
                if (uVar9 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar24 = (long)param_1[2] - (long)puVar27;
                if ((ulong)(lVar24 >> 5) < 0x3ffffffffffffff) {
                  uVar15 = lVar24 >> 4;
                  if (uVar9 <= uVar15) {
                    uVar9 = uVar15;
                  }
                  if (uVar9 != 0) {
                    if (uVar9 >> 0x3b == 0) goto LAB_7103655ecc;
                    goto LAB_71036564d0;
                  }
                  lVar24 = 0;
                }
                else {
                  uVar9 = 0x7ffffffffffffff;
LAB_7103655ecc:
                  ppplVar16 = (long ***)(uVar9 * 0x20);
                  if (ppplVar16 == (long ***)0x0) {
                    ppplVar16 = (long ***)0x1;
                  }
                  lVar24 = FUN_710392e290(0x10,ppplVar16,pppplVar10,param_4,param_5,param_6,param_7,
                                          param_8);
                  if (lVar24 == 0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
                      pppplVar11 = &local_90;
                      local_90 = ppplVar16;
                      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
                      if (((uVar15 & 1) != 0) &&
                         (lVar24 = FUN_710392e290(0x10,ppplVar16,pppplVar11,param_4,param_5,param_6,
                                                  param_7,param_8), lVar24 != 0))
                      goto LAB_7103655f2c;
                    }
                    lVar24 = 0;
                  }
                }
LAB_7103655f2c:
                puVar20 = (undefined8 *)(lVar24 + (long)pppplVar10 * 0x20);
                *puVar20 = &PTR_FUN_710522fe60;
                uVar9 = lVar24 + uVar9 * 0x20;
                puVar20[1] = lVar12;
                puVar20[2] = plVar29;
                puVar1 = puVar20 + 4;
                puVar20[3] = lVar30;
                if ((long)puVar28 - (long)puVar27 == 0) {
                  *param_1 = (ulong)puVar20;
                  param_1[1] = (ulong)puVar1;
                  param_1[2] = uVar9;
                }
                else {
                  uVar15 = ((long)puVar28 - (long)puVar27) - 0x20;
                  if (((uint)uVar15 >> 5 & 1) == 0) {
                    puVar19 = puVar20 + -4;
                    *puVar19 = &PTR_FUN_710522fe20;
                    puVar20[-3] = puVar28[-3];
                    puVar20[-2] = puVar28[-2];
                    uVar18 = puVar28[-1];
                    puVar28 = puVar28 + -4;
                    *puVar19 = &PTR_FUN_710522fe60;
                    puVar20[-1] = uVar18;
                    puVar20 = puVar19;
                  }
                  if (0x1f < uVar15) {
                    lVar30 = 0;
                    do {
                      puVar19 = (undefined8 *)((long)puVar28 + lVar30 + -0x38);
                      lVar23 = lVar30 + -0x40;
                      *(undefined ***)((long)puVar20 + lVar30 + -0x20) = &PTR_FUN_710522fe20;
                      *(undefined8 *)((long)puVar20 + lVar30 + -0x18) = puVar19[4];
                      *(undefined8 *)((long)puVar20 + lVar30 + -0x10) = puVar19[5];
                      uVar18 = puVar19[6];
                      *(undefined ***)((long)puVar20 + lVar30 + -0x20) = &PTR_FUN_710522fe60;
                      *(undefined ***)((long)puVar20 + lVar30 + -0x40) = &PTR_FUN_710522fe20;
                      *(undefined8 *)((long)puVar20 + lVar30 + -8) = uVar18;
                      *(undefined8 *)((long)puVar20 + lVar30 + -0x38) = *puVar19;
                      *(undefined8 *)((long)puVar20 + lVar30 + -0x30) = puVar19[1];
                      uVar18 = puVar19[2];
                      *(undefined ***)((long)puVar20 + lVar30 + -0x40) = &PTR_FUN_710522fe60;
                      *(undefined8 *)((long)puVar20 + lVar30 + -0x28) = uVar18;
                      lVar30 = lVar23;
                    } while ((long)puVar27 - (long)puVar28 != lVar23);
                  }
                  puVar27 = (undefined8 *)*param_1;
                  puVar28 = (undefined8 *)param_1[1];
                  *param_1 = lVar24 + ((long)pppplVar10 + (uVar15 >> 5 ^ 0xffffffffffffffff)) * 0x20
                  ;
                  param_1[1] = (ulong)puVar1;
                  param_1[2] = uVar9;
                  while (puVar28 != puVar27) {
                    puVar28 = puVar28 + -4;
                    (**(code **)*puVar28)(puVar28);
                  }
                }
                if (puVar27 != (undefined8 *)0x0) {
                  FUN_710392eb40((ulong)puVar27);
                }
                goto LAB_7103656248;
              }
              *puVar28 = &PTR_FUN_710522fe60;
              puVar28[1] = lVar12;
              puVar28[2] = plVar29;
              puVar28[3] = lVar30;
              param_1[1] = param_1[1] + 0x20;
            }
          }
LAB_7103656248:
          lVar25 = lVar25 + 0x20;
        } while (lVar25 != lVar14);
      }
    }
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    pppplVar10 = &local_90;
    local_90 = (long ***)&PTR_FUN_710522fe00;
    uVar9 = FUN_7103553740(lVar7,pbVar3,(long)pppplVar10);
    if ((uVar9 & 1) != 0) {
      puVar28 = (undefined8 *)param_1[4];
      if (puVar28 == (undefined8 *)param_1[5]) {
        puVar27 = (undefined8 *)param_1[3];
        lVar25 = (long)puVar28 - (long)puVar27 >> 5;
        uVar9 = lVar25 + 1;
        if (uVar9 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = (long)param_1[5] - (long)puVar27;
        if ((ulong)(lVar14 >> 5) < 0x3ffffffffffffff) {
          uVar15 = lVar14 >> 4;
          if (uVar9 <= uVar15) {
            uVar9 = uVar15;
          }
          if (uVar9 != 0) {
            if (uVar9 >> 0x3b != 0) {
LAB_71036564d0:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7103656328;
          }
LAB_7103656380:
          lVar14 = 0;
        }
        else {
          uVar9 = 0x7ffffffffffffff;
LAB_7103656328:
          ppplVar16 = (long ***)(uVar9 * 0x20);
          if (ppplVar16 == (long ***)0x0) {
            ppplVar16 = (long ***)0x1;
          }
          lVar14 = FUN_710392e290(0x10,ppplVar16,pppplVar10,param_4,param_5,param_6,param_7,param_8)
          ;
          if (lVar14 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              pppplVar10 = &local_70;
              local_70 = ppplVar16;
              uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar15 & 1) != 0) &&
                 (lVar14 = FUN_710392e290(0x10,ppplVar16,pppplVar10,param_4,param_5,param_6,param_7,
                                          param_8), lVar14 != 0)) goto LAB_7103656384;
            }
            goto LAB_7103656380;
          }
        }
LAB_7103656384:
        puVar1 = (undefined8 *)(lVar14 + lVar25 * 0x20);
        puVar1[1] = *(undefined8 *)(local_88 + 0x18);
        puVar1[2] = *(undefined8 *)(local_88 + 0x20);
        uVar18 = *(undefined8 *)(local_88 + 0x28);
        uVar9 = lVar14 + uVar9 * 0x20;
        *puVar1 = &PTR_FUN_710522fea0;
        puVar1[3] = uVar18;
        if ((long)puVar28 - (long)puVar27 == 0) {
          param_1[3] = (ulong)puVar1;
          param_1[4] = (ulong)(puVar1 + 4);
          param_1[5] = uVar9;
        }
        else {
          uVar15 = ((long)puVar28 - (long)puVar27) - 0x20;
          puVar20 = puVar1;
          if (((uint)uVar15 >> 5 & 1) == 0) {
            puVar20 = puVar1 + -4;
            *puVar20 = &PTR_FUN_7105230080;
            puVar1[-3] = puVar28[-3];
            puVar1[-2] = puVar28[-2];
            uVar18 = puVar28[-1];
            puVar28 = puVar28 + -4;
            *puVar20 = &PTR_FUN_710522fea0;
            puVar1[-1] = uVar18;
          }
          if (0x1f < uVar15) {
            lVar30 = 0;
            do {
              puVar19 = (undefined8 *)((long)puVar28 + lVar30 + -0x38);
              lVar24 = lVar30 + -0x40;
              *(undefined ***)((long)puVar20 + lVar30 + -0x20) = &PTR_FUN_7105230080;
              *(undefined8 *)((long)puVar20 + lVar30 + -0x18) = puVar19[4];
              *(undefined8 *)((long)puVar20 + lVar30 + -0x10) = puVar19[5];
              uVar18 = puVar19[6];
              *(undefined ***)((long)puVar20 + lVar30 + -0x20) = &PTR_FUN_710522fea0;
              *(undefined ***)((long)puVar20 + lVar30 + -0x40) = &PTR_FUN_7105230080;
              *(undefined8 *)((long)puVar20 + lVar30 + -8) = uVar18;
              *(undefined8 *)((long)puVar20 + lVar30 + -0x38) = *puVar19;
              *(undefined8 *)((long)puVar20 + lVar30 + -0x30) = puVar19[1];
              uVar18 = puVar19[2];
              *(undefined ***)((long)puVar20 + lVar30 + -0x40) = &PTR_FUN_710522fea0;
              *(undefined8 *)((long)puVar20 + lVar30 + -0x28) = uVar18;
              lVar30 = lVar24;
            } while ((long)puVar27 - (long)puVar28 != lVar24);
          }
          puVar27 = (undefined8 *)param_1[3];
          puVar28 = (undefined8 *)param_1[4];
          param_1[3] = lVar14 + (lVar25 + (uVar15 >> 5 ^ 0xffffffffffffffff)) * 0x20;
          param_1[4] = (ulong)(puVar1 + 4);
          param_1[5] = uVar9;
          while (puVar28 != puVar27) {
            puVar28 = puVar28 + -4;
            (**(code **)*puVar28)(puVar28);
          }
        }
        if (puVar27 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar27);
        }
      }
      else {
        *puVar28 = &PTR_FUN_7105230080;
        puVar28[1] = *(undefined8 *)(local_88 + 0x18);
        puVar28[2] = *(undefined8 *)(local_88 + 0x20);
        puVar28[3] = *(undefined8 *)(local_88 + 0x28);
        *puVar28 = &PTR_FUN_710522fea0;
        param_1[4] = param_1[4] + 0x20;
      }
    }
    pbVar3 = pbVar3 + 0x18;
  } while( true );
switchD_7103656188_default:
  lVar24 = lVar24 + 0x40;
  if (lVar24 == lVar23) goto LAB_7103656248;
  goto LAB_71036560b4;
}

