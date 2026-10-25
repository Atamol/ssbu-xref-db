// addr:      710391b170
// offset:    0x391b170
// name:      FUN_710391b170
// mangled:   
// signature: int __cdecl FUN_710391b170(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_710391b170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  float *pfVar16;
  float fVar17;
  float *pfVar18;
  long lVar19;
  undefined1 *puVar20;
  long *plVar21;
  int iVar22;
  float *pfVar23;
  char *pcVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  float fVar31;
  undefined8 local_a0;
  float local_98;
  undefined4 uStack_94;
  uint local_80;
  uint local_7c;
  char *local_78;
  long local_70;
  undefined1 *local_68;
  
  pfVar18 = *(float **)(param_1 + 0x10);
  pfVar16 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar23 = pfVar16;
  if (pfVar18 <= pfVar16) {
    pfVar23 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar23[2] & 0xf) == 4) {
LAB_710391b208:
    pcVar24 = (char *)(*(long *)pfVar23 + 0x18);
  }
  else {
    if (((uint)pfVar23[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar18 = *(float **)(param_1 + 0x10);
        pfVar16 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar23 = pfVar16;
      if (pfVar18 <= pfVar16) {
        pfVar23 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar23);
      goto LAB_710391b208;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    pcVar24 = (char *)0x0;
  }
  pfVar18 = *(float **)(param_1 + 0x10);
  pfVar16 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  pfVar23 = pfVar16;
  if (pfVar18 <= pfVar16) {
    pfVar23 = (float *)&DAT_7104862960;
  }
  local_78 = pcVar24;
  if (((uint)pfVar23[2] & 0xf) == 4) {
LAB_710391b29c:
    local_a0 = *(long *)pfVar23;
    if (*(char *)(local_a0 + 8) == '\x04') {
      uVar29 = (ulong)*(byte *)(local_a0 + 0xb);
    }
    else {
      uVar29 = *(ulong *)(local_a0 + 0x10);
    }
    local_a0 = local_a0 + 0x18;
  }
  else {
    if (((uint)pfVar23[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar18 = *(float **)(param_1 + 0x10);
        pfVar16 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
      }
      pfVar23 = pfVar16;
      if (pfVar18 <= pfVar16) {
        pfVar23 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar23);
      goto LAB_710391b29c;
    }
    FUN_71038f74d0(param_1,2,"string",param_4,param_5,param_6,param_7,param_8);
    uVar29 = 0;
    local_a0 = 0;
  }
  puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + 0x30);
  lVar26 = 1;
  if ((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_7104862960))
  goto LAB_710391b39c;
  if ((*(byte *)(**(long **)(param_1 + 0x20) + 0x38) & 0xf) == 0) {
    lVar26 = 1;
    goto LAB_710391b39c;
  }
  lVar7 = FUN_71038f45b0(param_1,3,(undefined4 *)&local_70);
  if ((int)local_70 == 0) {
    pfVar16 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
    if (*(float **)(param_1 + 0x10) <= pfVar16) {
      pfVar16 = (float *)&DAT_7104862960;
    }
    fVar31 = pfVar16[2];
    if ((fVar31 == 4.2039e-45) || (fVar31 == 2.66247e-44)) {
LAB_710391b36c:
      FUN_71038f6d60(param_1,3,"number has no integer representation",param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      if (((uint)fVar31 & 0xf) == 4) {
        pbVar9 = FUN_7103907f00((byte *)(*(long *)pfVar16 + 0x18),&local_98);
        lVar26 = *(long *)pfVar16;
        if (*(char *)(lVar26 + 8) == '\x04') {
          uVar28 = (ulong)*(byte *)(lVar26 + 0xb);
        }
        else {
          uVar28 = *(ulong *)(lVar26 + 0x10);
        }
        if (pbVar9 == (byte *)(uVar28 + 1)) goto LAB_710391b36c;
      }
      FUN_71038f74d0(param_1,3,"number",param_4,param_5,param_6,param_7,param_8);
    }
  }
  lVar26 = lVar7;
  if ((lVar7 < 0) && (lVar26 = 0, (ulong)-lVar7 <= uVar29)) {
    lVar26 = lVar7 + uVar29 + 1;
  }
LAB_710391b39c:
  uVar28 = lVar26 - 1;
  if (uVar29 < uVar28) {
    FUN_71038f6d60(param_1,3,"initial position out of string",param_4,param_5,param_6,param_7,
                   param_8);
  }
  local_68 = &DAT_100000001;
  if (*pcVar24 == '\0') {
    iVar22 = 0;
  }
  else {
    lVar26 = local_a0 + 1;
    iVar22 = 0;
    local_70 = param_1;
    do {
      puVar10 = &local_7c;
      puVar12 = &local_80;
      iVar5 = FUN_710391b840(&local_70,(uint)uVar28,(long *)&local_78,puVar10,puVar12,param_6,
                             param_7,param_8);
      uVar25 = local_7c;
      uVar27 = (ulong)(int)local_7c;
      lVar7 = uVar28 + (long)(int)local_80;
      if (~uVar28 < uVar27 + (long)(int)local_80 || uVar29 < lVar7 + uVar27) {
        FUN_71038f6d60(param_1,2,"data string too short",puVar10,puVar12,param_6,param_7,param_8);
      }
      local_98 = 3.08286e-44;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar30 = *(long *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x30) - lVar14 < 0x161) {
        if ((0xf4225 < (int)((ulong)(lVar14 - *(long *)(param_1 + 0x38)) >> 4)) ||
           (iVar6 = FUN_71038fb4b0(param_1,FUN_71038f3f70,&local_98), iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_71038f6c50(param_1,"stack overflow (%s)","too many results",puVar10,puVar12,param_6,
                         param_7,param_8);
        }
        lVar14 = *(long *)(param_1 + 0x10);
        lVar19 = (long)(int)local_98;
      }
      else {
        lVar19 = 0x16;
      }
      uVar28 = lVar14 + lVar19 * 0x10;
      if (*(ulong *)(lVar30 + 8) < uVar28) {
        *(ulong *)(lVar30 + 8) = uVar28;
      }
      iVar6 = iVar22 + 1;
      switch(iVar5) {
      case 0:
      case 1:
        uVar28 = FUN_710391b940(param_1,local_a0 + lVar7,(int)local_68,(ulong)uVar25,
                                (ulong)(iVar5 == 0),param_6,param_7,param_8);
        pfVar16 = *(float **)(param_1 + 0x10);
        *(ulong *)pfVar16 = uVar28;
        fVar17 = 2.66247e-44;
        goto LAB_710391b758;
      case 2:
        puVar15 = (undefined1 *)(local_a0 + lVar7);
        if ((int)local_68 == 1) {
          if (uVar25 != 0) {
            uVar4 = uVar25 - 1;
            uVar3 = uVar25 & 7;
            if (uVar3 == 0) {
              pfVar16 = &local_98;
              puVar20 = puVar15;
            }
            else {
              puVar20 = (undefined1 *)(lVar26 + lVar7 + (ulong)(uVar3 - 1));
              iVar22 = -uVar3;
              pfVar16 = &local_98;
              do {
                iVar22 = iVar22 + 1;
                *(undefined1 *)pfVar16 = *puVar15;
                puVar15 = puVar15 + 1;
                pfVar16 = (float *)((long)pfVar16 + 1);
              } while (iVar22 != 0);
              uVar25 = uVar25 - uVar3;
              pfVar16 = (float *)(((ulong)&local_98 | 1) + (ulong)(uVar3 - 1));
            }
            if (6 < uVar4) {
              do {
                *(undefined1 *)pfVar16 = *puVar20;
                *(undefined1 *)((long)pfVar16 + 1) = puVar20[1];
                *(undefined1 *)((long)pfVar16 + 2) = puVar20[2];
                *(undefined1 *)((long)pfVar16 + 3) = puVar20[3];
                *(undefined1 *)(pfVar16 + 1) = puVar20[4];
                *(undefined1 *)((long)pfVar16 + 5) = puVar20[5];
                *(undefined1 *)((long)pfVar16 + 6) = puVar20[6];
                puVar15 = puVar20 + 7;
                uVar25 = uVar25 - 8;
                puVar20 = puVar20 + 8;
                *(undefined1 *)((long)pfVar16 + 7) = *puVar15;
                pfVar16 = pfVar16 + 2;
              } while (uVar25 != 0);
            }
          }
        }
        else if (uVar25 != 0) {
          uVar4 = uVar25 - 1;
          puVar20 = (undefined1 *)((long)&local_98 + (long)(int)uVar4);
          uVar3 = uVar25 & 7;
          if (uVar3 != 0) {
            iVar22 = -uVar3;
            do {
              iVar22 = iVar22 + 1;
              *puVar20 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar20 = puVar20 + -1;
            } while (iVar22 != 0);
            uVar25 = uVar25 - uVar3;
            puVar15 = (undefined1 *)(lVar26 + lVar7 + (ulong)(uVar3 - 1));
            puVar20 = (undefined1 *)((long)&local_a0 + ((long)(int)uVar4 - (ulong)(uVar3 - 1)) + 7);
          }
          if (6 < uVar4) {
            do {
              *puVar20 = *puVar15;
              puVar20[-1] = puVar15[1];
              puVar20[-2] = puVar15[2];
              puVar20[-3] = puVar15[3];
              puVar20[-4] = puVar15[4];
              puVar20[-5] = puVar15[5];
              puVar20[-6] = puVar15[6];
              puVar1 = puVar15 + 7;
              uVar25 = uVar25 - 8;
              puVar15 = puVar15 + 8;
              puVar20[-7] = *puVar1;
              puVar20 = puVar20 + -8;
            } while (uVar25 != 0);
          }
        }
        uVar27 = (ulong)(int)local_7c;
        fVar31 = local_98;
        if (local_7c == 8) {
          fVar31 = (float)(double)CONCAT44(uStack_94,local_98);
        }
        pfVar16 = *(float **)(param_1 + 0x10);
        fVar17 = 4.2039e-45;
        *pfVar16 = fVar31;
LAB_710391b758:
        pfVar16[2] = fVar17;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
        break;
      case 3:
        FUN_71038f4a00(param_1,(void *)(local_a0 + lVar7),uVar27);
        break;
      case 4:
        uVar11 = (ulong)uVar25;
        lVar14 = local_a0 + lVar7;
        uVar13 = 0;
        uVar28 = FUN_710391b940(param_1,lVar14,(int)local_68,uVar11,0,param_6,param_7,param_8);
        lVar7 = uVar28 + lVar7;
        if (uVar29 < lVar7 + uVar27) {
          FUN_71038f6d60(param_1,2,"data string too short",uVar11,uVar13,param_6,param_7,param_8);
        }
        FUN_71038f4a00(param_1,(void *)(lVar14 + uVar27),uVar28);
        break;
      case 5:
        pcVar24 = (char *)(local_a0 + lVar7);
        sVar8 = strlen(pcVar24);
        FUN_71038f4a00(param_1,pcVar24,(long)(int)sVar8);
        lVar7 = lVar7 + (int)sVar8 + 1;
        break;
      case 6:
      case 7:
      case 8:
        iVar6 = iVar22;
      }
      iVar22 = iVar6;
      uVar28 = lVar7 + uVar27;
    } while (*local_78 != '\0');
  }
  plVar21 = *(long **)(param_1 + 0x10);
  *plVar21 = uVar28 + 1;
  *(undefined4 *)(plVar21 + 1) = 0x13;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return iVar22 + 1;
}

