// addr:      7103918310
// offset:    0x3918310
// name:      FUN_7103918310
// mangled:   
// signature: undefined8 __cdecl FUN_7103918310(long param_1, undefined8 param_2, char * param_3, char * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7103918310(long param_1,undefined8 param_2,char *param_3,char *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  char *__s;
  size_t sVar7;
  char *pcVar8;
  ulong *__n;
  void *__dest;
  size_t sVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  char *pcVar11;
  float *pfVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  float *pfVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  float fVar23;
  undefined1 local_20d0 [8];
  undefined8 local_20c8;
  undefined1 *local_20a8;
  char *local_20a0;
  char *local_2098;
  long lStack_2090;
  undefined1 auStack_2088 [8192];
  undefined8 local_88;
  ulong local_68;
  
  pfVar19 = *(float **)(param_1 + 0x10);
  pfVar2 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar12 = pfVar2;
  if (pfVar19 <= pfVar2) {
    pfVar12 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar12[2] & 0xf) != 4) {
    if (((uint)pfVar12[2] & 0xf) != 3) {
      param_3 = "string";
      FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
      uVar13 = 0;
      pbVar14 = (byte *)0x0;
      goto LAB_71039183fc;
    }
    pfVar12 = pfVar2;
    pfVar16 = pfVar19;
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar12 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      pfVar16 = *(float **)(param_1 + 0x10);
    }
    if (pfVar16 <= pfVar12) {
      pfVar12 = (float *)&DAT_7104862960;
    }
    FUN_71039080b0(param_1,pfVar12);
  }
  lVar17 = *(long *)pfVar12;
  if (*(char *)(lVar17 + 8) == '\x04') {
    uVar13 = (ulong)*(byte *)(lVar17 + 0xb);
  }
  else {
    uVar13 = *(ulong *)(lVar17 + 0x10);
  }
  pbVar14 = (byte *)(lVar17 + 0x18);
LAB_71039183fc:
  local_20a8 = auStack_2088;
  local_2098 = (char *)0x0;
  local_20a0 = (char *)0x2000;
  lStack_2090 = param_1;
  if (0 < (long)uVar13) {
    pbVar3 = pbVar14 + uVar13;
    local_20d0 = (undefined1  [8])((ulong)((long)pfVar19 - (long)pfVar2) >> 4);
    uVar18 = 1;
    do {
      bVar15 = *pbVar14;
      uVar22 = uVar18;
      if (bVar15 == 0x25) {
        pbVar21 = pbVar14 + 1;
        if (*pbVar21 == 0x25) {
          if (local_2098 < local_20a0) {
            bVar15 = 0x25;
          }
          else {
            FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
            bVar15 = *pbVar21;
          }
          pbVar14 = pbVar14 + 2;
          local_20a8[(long)local_2098] = bVar15;
          local_2098 = local_2098 + 1;
        }
        else {
          __s = (char *)FUN_71038f7870(&local_20a8,0x9e,param_3,param_4,param_5,param_6,param_7,
                                       param_8);
          uVar22 = uVar18 + 1;
          pcVar11 = param_4;
          if (local_20d0._0_4_ <= (int)uVar18) {
            param_3 = "no value";
            FUN_71038f6d60(param_1,uVar22,"no value",param_4,param_5,param_6,param_7,param_8);
            pcVar11 = param_4;
          }
          bVar15 = *pbVar21;
          pbVar14 = pbVar21;
          if (bVar15 == 0) {
            uVar18 = 0;
          }
          else {
            do {
              uVar18 = (uint)bVar15;
              if ((0x3f < uVar18) || ((1L << ((ulong)bVar15 & 0x3f) & 0x1280900000001U) == 0))
              goto LAB_71039185ac;
              pbVar14 = pbVar14 + 1;
              bVar15 = *pbVar14;
            } while (bVar15 != 0);
            uVar18 = 0;
          }
LAB_71039185ac:
          if (5 < (ulong)((long)pbVar14 - (long)pbVar21)) {
                    /* WARNING: Subroutine does not return */
            FUN_71038f6c50(param_1,"invalid format (repeated flags)",param_3,pcVar11,param_5,param_6
                           ,param_7,param_8);
          }
          if (uVar18 - 0x30 < 10) {
            pbVar14 = pbVar14 + 1;
          }
          pbVar20 = pbVar14 + 1;
          if (9 < *pbVar14 - 0x30) {
            pbVar20 = pbVar14;
          }
          bVar15 = *pbVar20;
          if (bVar15 == 0x2e) {
            pbVar14 = pbVar20 + 1;
            bVar5 = *pbVar14 - 0x30 < 10;
            lVar17 = 1;
            if (bVar5) {
              lVar17 = 2;
            }
            pbVar1 = pbVar20 + lVar17;
            pbVar20 = pbVar20 + 2;
            if (!bVar5) {
              pbVar20 = pbVar14;
            }
            if (*pbVar1 - 0x30 < 10) {
              pbVar20 = pbVar20 + 1;
            }
            bVar15 = *pbVar20;
          }
          if (bVar15 - 0x30 < 10) {
                    /* WARNING: Subroutine does not return */
            FUN_71038f6c50(param_1,"invalid format (width or precision too long)",param_3,pcVar11,
                           param_5,param_6,param_7,param_8);
          }
          local_20c8._0_1_ = '%';
          memcpy((void *)((ulong)&local_20c8 | 1),pbVar21,(size_t)(pbVar20 + (1 - (long)pbVar21)));
          *(byte *)((long)((ulong)&local_20c8 | 1) + (long)(pbVar20 + (1 - (long)pbVar21))) = 0;
          pbVar14 = pbVar20 + 1;
          switch(*pbVar20) {
          case 0x41:
          case 0x45:
          case 0x47:
          case 0x61:
          case 0x65:
          case 0x66:
          case 0x67:
            sVar9 = strlen((char *)&local_20c8);
            *(undefined1 *)((long)&local_20c8 + sVar9) = 0;
            fVar23 = FUN_71038f4440(param_1,uVar22,(undefined4 *)&local_88);
            param_4 = pcVar11;
            if ((int)local_88 == 0) {
              FUN_71038f74d0(param_1,uVar22,"number",pcVar11,param_5,param_6,param_7,param_8);
              param_4 = pcVar11;
            }
            param_3 = (char *)&local_20c8;
            iVar6 = snprintf(__s,0x9e,param_3,(double)fVar23);
            break;
          default:
                    /* WARNING: Subroutine does not return */
            FUN_71038f6c50(param_1,"invalid option \'%%%c\' to \'format\'",(ulong)*pbVar20,pcVar11,
                           param_5,param_6,param_7,param_8);
          case 0x58:
          case 100:
          case 0x69:
          case 0x6f:
          case 0x75:
          case 0x78:
            param_4 = (char *)FUN_71038f45b0(param_1,uVar22,(undefined4 *)&local_88);
            if ((int)local_88 == 0) {
              bVar5 = FUN_71038f41a0(param_1,uVar22);
              if (bVar5) {
                FUN_71038f6d60(param_1,uVar22,"number has no integer representation",pcVar11,param_5
                               ,param_6,param_7,param_8);
              }
              else {
                FUN_71038f74d0(param_1,uVar22,"number",pcVar11,param_5,param_6,param_7,param_8);
              }
            }
            sVar9 = strlen((char *)&local_20c8);
            uVar4 = local_20d0[sVar9 + 7];
            param_3 = (char *)&local_20c8;
            *(undefined2 *)((long)&local_20c8 + sVar9 + 1) = 0;
            *(undefined2 *)(local_20d0 + sVar9 + 7) = 0x6c6c;
            *(undefined1 *)((long)&local_20c8 + sVar9 + 1) = uVar4;
            iVar6 = snprintf(__s,0x9e,param_3);
            break;
          case 99:
            uVar13 = FUN_71038f45b0(param_1,uVar22,(undefined4 *)&local_88);
            if ((int)local_88 == 0) {
              bVar5 = FUN_71038f41a0(param_1,uVar22);
              if (bVar5) {
                FUN_71038f6d60(param_1,uVar22,"number has no integer representation",pcVar11,param_5
                               ,param_6,param_7,param_8);
              }
              else {
                FUN_71038f74d0(param_1,uVar22,"number",pcVar11,param_5,param_6,param_7,param_8);
              }
            }
            param_3 = (char *)&local_20c8;
            param_4 = (char *)(uVar13 & 0xffffffff);
            iVar6 = snprintf(__s,0x9e,param_3);
            break;
          case 0x71:
            param_3 = (char *)&local_68;
            pbVar21 = (byte *)FUN_71038f4730(param_1,uVar22,(ulong *)param_3);
            param_4 = pcVar11;
            if (pbVar21 == (byte *)0x0) {
              param_3 = "string";
              FUN_71038f74d0(param_1,uVar22,"string",pcVar11,param_5,param_6,param_7,param_8);
              param_4 = pcVar11;
            }
            if (local_20a0 <= local_2098) {
              FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
            }
            local_20a8[(long)local_2098] = 0x22;
            local_2098 = local_2098 + 1;
            while (uVar13 = local_68 - 1, local_68 != 0) {
              bVar15 = *pbVar21;
              if (bVar15 < 0x22) {
                local_68 = uVar13;
                if (bVar15 != 0) {
                  if (bVar15 == 10) goto LAB_7103918884;
                  goto LAB_71039188d4;
                }
LAB_71039188e0:
                param_3 = &DAT_71042a1ca5;
                if (pbVar21[1] - 0x30 < 10) {
                  param_3 = "\\%03d";
                }
                param_4 = (char *)(ulong)(uint)bVar15;
                snprintf((char *)&local_88,10,param_3);
                __n = (ulong *)strlen((char *)&local_88);
                if (__n != (ulong *)0x0) {
                  __dest = (void *)FUN_71038f7870(&local_20a8,(ulong)__n,param_3,param_4,param_5,
                                                  param_6,param_7,param_8);
                  param_3 = (char *)__n;
                  memcpy(__dest,&local_88,(size_t)__n);
                  local_2098 = local_2098 + (long)__n;
                }
                pbVar21 = pbVar21 + 1;
              }
              else if ((bVar15 == 0x5c) || (bVar15 == 0x22)) {
LAB_7103918884:
                pcVar11 = local_2098;
                local_68 = uVar13;
                if (local_20a0 <= local_2098) {
                  FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
                  pcVar11 = local_2098;
                }
                local_2098 = pcVar11 + 1;
                local_20a8[(long)pcVar11] = 0x5c;
                if (local_20a0 <= local_2098) {
                  FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
                }
                local_20a8[(long)local_2098] = *pbVar21;
                pbVar21 = pbVar21 + 1;
                local_2098 = local_2098 + 1;
              }
              else {
LAB_71039188d4:
                local_68 = uVar13;
                iVar6 = iscntrl((uint)bVar15);
                if (iVar6 != 0) goto LAB_71039188e0;
                if (local_20a0 <= local_2098) {
                  FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
                  bVar15 = *pbVar21;
                }
                local_20a8[(long)local_2098] = bVar15;
                pbVar21 = pbVar21 + 1;
                local_2098 = local_2098 + 1;
              }
            }
            local_68 = uVar13;
            if (local_20a0 <= local_2098) {
              FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
            }
            iVar6 = 0;
            local_20a8[(long)local_2098] = 0x22;
            local_2098 = local_2098 + 1;
            break;
          case 0x73:
            param_3 = (char *)&local_88;
            param_4 = (char *)FUN_71038f8c50(param_1,uVar22,(ulong *)param_3);
            uVar10 = extraout_x1;
            if (local_20c8._2_1_ != '\0') {
              sVar9 = CONCAT44(local_88._4_4_,(int)local_88);
              sVar7 = strlen(param_4);
              if (sVar9 != sVar7) {
                param_3 = "string contains zeros";
                FUN_71038f6d60(param_1,uVar22,"string contains zeros",pcVar11,param_5,param_6,
                               param_7,param_8);
                sVar9 = CONCAT44(local_88._4_4_,(int)local_88);
              }
              pcVar8 = strchr((char *)&local_20c8,0x2e);
              if ((pcVar8 != (char *)0x0) || (uVar10 = extraout_x1_00, sVar9 < 100)) {
                param_3 = (char *)&local_20c8;
                iVar6 = snprintf(__s,0x9e,param_3);
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
                break;
              }
            }
            param_4 = pcVar11;
            FUN_71038f7bd0(&local_20a8,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
            iVar6 = 0;
          }
          local_2098 = local_2098 + iVar6;
        }
      }
      else {
        if (local_20a0 <= local_2098) {
          FUN_71038f7870(&local_20a8,1,param_3,param_4,param_5,param_6,param_7,param_8);
          bVar15 = *pbVar14;
        }
        pbVar14 = pbVar14 + 1;
        local_20a8[(long)local_2098] = bVar15;
        local_2098 = local_2098 + 1;
      }
      uVar18 = uVar22;
    } while (pbVar14 < pbVar3);
  }
  FUN_71038f7b00(&local_20a8);
  return 1;
}

