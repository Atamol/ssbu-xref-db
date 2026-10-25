// addr:      7103918da0
// offset:    0x3918da0
// name:      FUN_7103918da0
// mangled:   
// signature: undefined8 __cdecl FUN_7103918da0(long param_1, undefined8 param_2, char * param_3, byte * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7103918da0(long param_1,undefined8 param_2,char *param_3,byte *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar15;
  undefined8 extraout_x1_01;
  byte *pbVar16;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar17;
  float *pfVar18;
  long lVar19;
  undefined8 *puVar20;
  float *pfVar21;
  ulong uVar22;
  undefined1 uVar23;
  float *pfVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long *plVar28;
  byte *__src;
  byte **ppbVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  byte **__n;
  undefined1 *local_22c8;
  byte *local_22c0;
  byte *local_22b8;
  long lStack_22b0;
  undefined1 auStack_22a8 [8192];
  byte *local_2a8;
  byte *local_2a0;
  byte *local_298;
  long local_290;
  long local_288;
  undefined4 local_280;
  int local_27c;
  byte *local_278;
  byte **local_270;
  undefined8 local_78;
  undefined8 uStack_70;
  
  pfVar24 = *(float **)(param_1 + 0x10);
  pfVar21 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar18 = pfVar21;
  if (pfVar24 <= pfVar21) {
    pfVar18 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar18[2] & 0xf) == 4) {
LAB_7103918e3c:
    lVar17 = *(long *)pfVar18;
    if (*(char *)(lVar17 + 8) == '\x04') {
      uVar31 = (ulong)*(byte *)(lVar17 + 0xb);
      __src = (byte *)(lVar17 + 0x18);
    }
    else {
      uVar31 = *(ulong *)(lVar17 + 0x10);
      __src = (byte *)(lVar17 + 0x18);
    }
  }
  else {
    if (((uint)pfVar18[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar24 = *(float **)(param_1 + 0x10);
        pfVar21 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar18 = pfVar21;
      if (pfVar24 <= pfVar21) {
        pfVar18 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar18);
      goto LAB_7103918e3c;
    }
    param_3 = "string";
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    uVar31 = 0;
    __src = (byte *)0x0;
  }
  pfVar24 = *(float **)(param_1 + 0x10);
  pfVar21 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  pfVar18 = pfVar21;
  if (pfVar24 <= pfVar21) {
    pfVar18 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar18[2] & 0xf) == 4) {
LAB_7103918eec:
    lVar17 = *(long *)pfVar18;
    if (*(char *)(lVar17 + 8) == '\x04') {
      uVar27 = (ulong)*(byte *)(lVar17 + 0xb);
      ppbVar29 = (byte **)(lVar17 + 0x18);
    }
    else {
      uVar27 = *(ulong *)(lVar17 + 0x10);
      ppbVar29 = (byte **)(lVar17 + 0x18);
    }
  }
  else {
    if (((uint)pfVar18[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar24 = *(float **)(param_1 + 0x10);
        pfVar21 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
      }
      pfVar18 = pfVar21;
      if (pfVar24 <= pfVar21) {
        pfVar18 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar18);
      goto LAB_7103918eec;
    }
    param_3 = "string";
    FUN_71038f74d0(param_1,2,"string",param_4,param_5,param_6,param_7,param_8);
    uVar27 = 0;
    ppbVar29 = (byte **)0x0;
  }
  lVar17 = **(long **)(param_1 + 0x20);
  uVar32 = 0xffffffff;
  if (((undefined8 *)(lVar17 + 0x30) < *(undefined8 **)(param_1 + 0x10)) &&
     ((undefined8 *)(lVar17 + 0x30) != &DAT_7104862960)) {
    uVar32 = *(uint *)(lVar17 + 0x38) & 0xf;
  }
  lVar11 = uVar31 + 1;
  if (((*(undefined8 **)(param_1 + 0x10) <= (undefined8 *)(lVar17 + 0x40)) ||
      ((undefined8 *)(lVar17 + 0x40) == &DAT_7104862960)) || ((*(byte *)(lVar17 + 0x48) & 0xf) == 0)
     ) goto LAB_7103918ff4;
  param_3 = (char *)&local_2a8;
  lVar11 = FUN_71038f45b0(param_1,4,(undefined4 *)param_3);
  if ((int)local_2a8 != 0) goto LAB_7103918ff4;
  pfVar21 = (float *)(**(long **)(param_1 + 0x20) + 0x40);
  if (*(float **)(param_1 + 0x10) <= pfVar21) {
    pfVar21 = (float *)&DAT_7104862960;
  }
  fVar3 = pfVar21[2];
  if ((fVar3 == 4.2039e-45) || (fVar3 == 2.66247e-44)) {
LAB_7103918fd4:
    param_3 = "number has no integer representation";
    FUN_71038f6d60(param_1,4,"number has no integer representation",param_4,param_5,param_6,param_7,
                   param_8);
  }
  else {
    if (((uint)fVar3 & 0xf) == 4) {
      pbVar12 = FUN_7103907f00((byte *)(*(long *)pfVar21 + 0x18),(float *)&local_22c8);
      lVar17 = *(long *)pfVar21;
      if (*(char *)(lVar17 + 8) == '\x04') {
        uVar22 = (ulong)*(byte *)(lVar17 + 0xb);
      }
      else {
        uVar22 = *(ulong *)(lVar17 + 0x10);
      }
      if (pbVar12 == (byte *)(uVar22 + 1)) goto LAB_7103918fd4;
    }
    param_3 = "number";
    FUN_71038f74d0(param_1,4,"number",param_4,param_5,param_6,param_7,param_8);
  }
LAB_7103918ff4:
  bVar5 = *(byte *)ppbVar29;
  if (3 < uVar32 - 3) {
    param_3 = "string/function/table expected";
    FUN_71038f6d60(param_1,3,"string/function/table expected",param_4,param_5,param_6,param_7,
                   param_8);
  }
  local_22b8 = (byte *)0x0;
  local_22c8 = auStack_22a8;
  local_22c0 = (byte *)0x2000;
  local_280 = 200;
  if (bVar5 == 0x5e) {
    ppbVar29 = (byte **)((long)ppbVar29 + 1);
  }
  local_288 = uVar31 * 4 + 100000;
  lVar17 = 0;
  local_2a0 = __src + uVar31;
  local_298 = (byte *)((long)ppbVar29 + (uVar27 - (bVar5 == 0x5e)));
  lStack_22b0 = param_1;
  local_2a8 = __src;
  local_290 = param_1;
  if (0x3fffffffffff9e56 < uVar31) {
    local_288 = -1;
  }
  do {
    if (lVar11 <= lVar17) break;
    local_27c = 0;
    param_3 = (char *)ppbVar29;
    pbVar12 = FUN_710391c4f0(&local_2a8,__src,(byte *)ppbVar29,param_4,param_5,param_6,param_7,
                             param_8);
    lVar8 = local_290;
    if (pbVar12 != (byte *)0x0) {
      lVar17 = lVar17 + 1;
      if (uVar32 == 5) {
        if (local_27c < 1) {
          pbVar16 = __src;
          param_3 = (char *)(pbVar12 + -(long)__src);
LAB_71039194dc:
          FUN_71038f4a00(local_290,pbVar16,(ulong)param_3);
        }
        else {
          if (local_270 == (byte **)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_71038f6c50(local_290,"unfinished capture",0xffffffffffffffff,param_4,param_5,param_6
                           ,param_7,param_8);
          }
          pbVar16 = local_278;
          param_3 = (char *)local_270;
          if (local_270 != (byte **)0xfffffffffffffffe) goto LAB_71039194dc;
          puVar26 = *(undefined8 **)(local_290 + 0x10);
          *puVar26 = local_278 + (1 - (long)local_2a8);
          *(undefined4 *)(puVar26 + 1) = 0x13;
          *(long *)(local_290 + 0x10) = *(long *)(local_290 + 0x10) + 0x10;
        }
        FUN_71038f4fc0(lVar8,3);
        uVar15 = extraout_x1_02;
      }
      else {
        if (uVar32 != 6) {
          pfVar24 = *(float **)(local_290 + 0x10);
          pfVar21 = (float *)(**(long **)(local_290 + 0x20) + 0x30);
          pfVar18 = pfVar21;
          if (pfVar24 <= pfVar21) {
            pfVar18 = (float *)&DAT_7104862960;
          }
          if (((uint)pfVar18[2] & 0xf) != 4) {
            if (((uint)pfVar18[2] & 0xf) != 3) goto joined_r0x0071039194b8;
            if (0 < *(long *)(*(long *)(local_290 + 0x18) + 0x18)) {
              FUN_71038fec40(local_290);
              pfVar24 = *(float **)(lVar8 + 0x10);
              pfVar21 = (float *)(**(long **)(lVar8 + 0x20) + 0x30);
            }
            pfVar18 = pfVar21;
            if (pfVar24 <= pfVar21) {
              pfVar18 = (float *)&DAT_7104862960;
            }
            FUN_71039080b0(lVar8,pfVar18);
          }
          lVar19 = *(long *)pfVar18;
          if (*(char *)(lVar19 + 8) == '\x04') {
            uVar31 = (ulong)*(byte *)(lVar19 + 0xb);
          }
          else {
            uVar31 = *(ulong *)(lVar19 + 0x10);
          }
          if (uVar31 != 0) {
            uVar27 = 0;
            lVar19 = lVar19 + 0x18;
            __n = (byte **)(pbVar12 + -(long)__src);
            do {
              cVar6 = *(char *)(lVar19 + uVar27);
              if (cVar6 == '%') {
                uVar27 = uVar27 + 1;
                bVar7 = *(byte *)(lVar19 + uVar27);
                if (bVar7 - 0x30 < 10) {
                  if (bVar7 == 0x30) {
                    if (__n != (byte **)0x0) {
                      pvVar14 = (void *)FUN_71038f7870(&local_22c8,(ulong)__n,param_3,param_4,
                                                       param_5,param_6,param_7,param_8);
                      param_3 = (char *)__n;
                      memcpy(pvVar14,__src,(size_t)__n);
                      local_22b8 = local_22b8 + (long)__n;
                    }
                  }
                  else {
                    param_4 = pbVar12;
                    FUN_710391ce60((long *)&local_2a8,bVar7 - 0x31,__src,(long)pbVar12,param_5,
                                   param_6,param_7,param_8);
                    param_3 = (char *)0x0;
                    FUN_71038f8c50(lVar8,-1,(ulong *)0x0);
                    puVar20 = (undefined8 *)(*(long *)(lVar8 + 0x10) + -0x20);
                    puVar26 = puVar20;
                    do {
                      local_78 = *puVar26;
                      uStack_70 = puVar26[1];
                      uVar15 = puVar20[3];
                      *puVar26 = puVar20[2];
                      puVar26[1] = uVar15;
                      puVar20[2] = local_78;
                      puVar20[3] = uStack_70;
                      bVar9 = puVar26 + 2 < puVar20;
                      puVar20 = puVar20 + -2;
                      puVar26 = puVar26 + 2;
                    } while (bVar9);
                    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -0x10;
                    FUN_71038f7bd0(&local_22c8,extraout_x1_01,param_3,param_4,param_5,param_6,
                                   param_7,param_8);
                  }
                }
                else {
                  if (bVar7 != 0x25) {
                    /* WARNING: Subroutine does not return */
                    FUN_71038f6c50(lVar8,"invalid use of \'%c\' in replacement string",0x25,param_4,
                                   param_5,param_6,param_7,param_8);
                  }
                  if (local_22b8 < local_22c0) {
                    uVar23 = 0x25;
                  }
                  else {
                    FUN_71038f7870(&local_22c8,1,param_3,param_4,param_5,param_6,param_7,param_8);
                    uVar23 = *(undefined1 *)(lVar19 + uVar27);
                  }
                  local_22c8[(long)local_22b8] = uVar23;
                  local_22b8 = local_22b8 + 1;
                }
              }
              else {
                if (local_22c0 <= local_22b8) {
                  FUN_71038f7870(&local_22c8,1,param_3,param_4,param_5,param_6,param_7,param_8);
                  cVar6 = *(char *)(lVar19 + uVar27);
                }
                local_22c8[(long)local_22b8] = cVar6;
                local_22b8 = local_22b8 + 1;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar31);
          }
          goto joined_r0x0071039194b8;
        }
        plVar28 = (long *)(local_290 + 0x10);
        pfVar18 = (float *)*plVar28;
        pfVar21 = (float *)(**(long **)(local_290 + 0x20) + 0x30);
        if (pfVar18 <= pfVar21) {
          pfVar21 = (float *)&DAT_7104862960;
        }
        uVar15 = *(undefined8 *)(pfVar21 + 2);
        *(undefined8 *)pfVar18 = *(undefined8 *)pfVar21;
        *(undefined8 *)(pfVar18 + 2) = uVar15;
        *plVar28 = *plVar28 + 0x10;
        iVar2 = local_27c;
        if (local_27c == 0 && __src != (byte *)0x0) {
          iVar2 = 1;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar2 + 0x14);
        lVar19 = *(long *)(local_290 + 0x10);
        lVar30 = *(long *)(local_290 + 0x20);
        lVar25 = (long)(iVar2 + 0x14);
        if (*(long *)(local_290 + 0x30) - lVar19 >> 4 <= lVar25) {
          if ((0xf422c - iVar2 < (int)((ulong)(lVar19 - *(long *)(local_290 + 0x38)) >> 4) + 5) ||
             (iVar10 = FUN_71038fb4b0(local_290,FUN_71038f3f70,&local_78), iVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_71038f6c50(lVar8,"stack overflow (%s)","too many captures",param_4,param_5,param_6,
                           param_7,param_8);
          }
          lVar19 = *(long *)(lVar8 + 0x10);
          lVar25 = (long)(int)local_78;
        }
        uVar31 = lVar19 + lVar25 * 0x10;
        if (*(ulong *)(lVar30 + 8) < uVar31) {
          *(ulong *)(lVar30 + 8) = uVar31;
        }
        if (0 < iVar2) {
          iVar10 = 0;
          do {
            param_4 = pbVar12;
            FUN_710391ce60((long *)&local_2a8,iVar10,__src,(long)pbVar12,param_5,param_6,param_7,
                           param_8);
            iVar10 = iVar10 + 1;
          } while (iVar2 != iVar10);
        }
        *(short *)(lVar8 + 0xc4) = *(short *)(lVar8 + 0xc4) + 1;
        uVar1 = *(short *)(lVar8 + 0xc6) + 1;
        *(ushort *)(lVar8 + 0xc6) = uVar1;
        if (199 < uVar1) {
          if (uVar1 == 200) {
                    /* WARNING: Subroutine does not return */
            FUN_71038fae60(lVar8,"C stack overflow");
          }
          if (0xe0 < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_71038fb3c0(lVar8,6);
          }
        }
        param_3 = (char *)0x1;
        uVar13 = FUN_71038fb8d0(lVar8,(long *)(*(long *)(lVar8 + 0x10) + (long)(iVar2 + 1) * -0x10),
                                1);
        uVar15 = extraout_x1;
        if ((int)uVar13 == 0) {
          FUN_7103924610(lVar8);
          uVar15 = extraout_x1_00;
        }
        *(short *)(lVar8 + 0xc6) = *(short *)(lVar8 + 0xc6) + -1;
        *(short *)(lVar8 + 0xc4) = *(short *)(lVar8 + 0xc4) + -1;
      }
      pfVar21 = (float *)(*(long *)(lVar8 + 0x10) + -0x10);
      uVar4 = *(uint *)(*(long *)(lVar8 + 0x10) + -8);
      if (uVar4 == 0) {
LAB_7103919560:
        param_3 = (char *)(pbVar12 + -(long)__src);
        *(float **)(lVar8 + 0x10) = pfVar21;
        FUN_71038f4a00(lVar8,__src,(ulong)param_3);
        uVar15 = extraout_x1_03;
      }
      else {
        if (uVar4 != 0x13) {
          if (uVar4 == 1) {
            if (*pfVar21 != 0.0) goto LAB_7103919728;
          }
          else if (((uVar4 & 0xf) != 3) || (*pfVar21 != 0.0)) goto LAB_710391954c;
          goto LAB_7103919560;
        }
        if ((*(long *)pfVar21 == 0) || ((float)*(long *)pfVar21 == 0.0)) goto LAB_7103919560;
LAB_710391954c:
        if (uVar4 == 3) {
          if (*pfVar21 == 0.0) goto LAB_7103919560;
        }
        else if (1 < (uVar4 & 0xf) - 3) {
LAB_7103919728:
          uVar31 = 0;
          if (pfVar21 != (float *)&DAT_7104862960) {
            uVar31 = (ulong)((uVar4 & 0xf) + 1);
          }
                    /* WARNING: Subroutine does not return */
          FUN_71038f6c50(lVar8,"invalid replacement value (a %s)",
                         (&PTR_s_no_value_71052943f8)[uVar31],param_4,param_5,param_6,param_7,
                         param_8);
        }
      }
      FUN_71038f7bd0(&local_22c8,uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
    }
joined_r0x0071039194b8:
    if (pbVar12 <= __src) {
      if (local_2a0 <= __src) break;
      if (local_22c0 <= local_22b8) {
        FUN_71038f7870(&local_22c8,1,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      local_22c8[(long)local_22b8] = *__src;
      pbVar12 = __src + 1;
      local_22b8 = local_22b8 + 1;
    }
    __src = pbVar12;
  } while (bVar5 != 0x5e);
  uVar31 = (long)local_2a0 - (long)__src;
  if (uVar31 != 0) {
    pvVar14 = (void *)FUN_71038f7870(&local_22c8,uVar31,param_3,param_4,param_5,param_6,param_7,
                                     param_8);
    memcpy(pvVar14,__src,uVar31);
    local_22b8 = local_22b8 + uVar31;
  }
  FUN_71038f7b00(&local_22c8);
  plVar28 = *(long **)(param_1 + 0x10);
  *plVar28 = lVar17;
  *(undefined4 *)(plVar28 + 1) = 0x13;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return 2;
}

