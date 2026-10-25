// addr:      7100227bf0
// offset:    0x227bf0
// name:      FUN_7100227bf0
// mangled:   
// signature: long __cdecl FUN_7100227bf0(byte * param_1, byte * param_2)


long FUN_7100227bf0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  size_t __n;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  ulong __n_00;
  ulong uVar11;
  
  lVar3 = -300;
  switch(*(undefined4 *)(param_1 + 0x1030)) {
  case 3:
    pbVar7 = *(byte **)(param_1 + 0x1008);
    pbVar9 = *(byte **)(param_1 + 0x1000);
    __n_00 = (long)pbVar7 - (long)pbVar9;
    uVar11 = *(ulong *)(param_1 + 0x1038);
    if (__n_00 < uVar11) {
      if (param_1 != pbVar9) {
        memmove(param_1,pbVar9,__n_00);
        pbVar7 = param_1 + __n_00;
        *(byte **)(param_1 + 0x1008) = pbVar7;
        *(byte **)(param_1 + 0x1000) = param_1;
      }
      lVar3 = (**(code **)(param_1 + 0x1088))
                        (pbVar7,param_1 + (0x1000 - (long)pbVar7),0,
                         *(undefined8 *)(param_1 + 0x1098));
      if (0 < lVar3) {
        pbVar7 = (byte *)(*(long *)(param_1 + 0x1008) + lVar3);
        pbVar9 = *(byte **)(param_1 + 0x1000);
        uVar11 = *(ulong *)(param_1 + 0x1038);
        *(byte **)(param_1 + 0x1008) = pbVar7;
        goto LAB_7100227ca0;
      }
    }
    else {
LAB_7100227ca0:
      if (uVar11 <= (ulong)((long)pbVar7 - (long)pbVar9)) {
        bVar1 = *pbVar9;
        param_1[0x1011] = bVar1 & 0xf;
        param_1[0x1010] = -((char)bVar1 >> 7);
        param_1[0x1012] = bVar1 >> 4 & 7;
        *(byte **)(param_1 + 0x1000) = pbVar9 + 1;
        bVar2 = pbVar9[1];
        param_1[0x1028] = -((char)bVar2 >> 7);
        bVar10 = pbVar9[1];
        *(byte **)(param_1 + 0x1000) = pbVar9 + 2;
        uVar11 = (ulong)bVar10 & 0x7f;
        if ((bVar1 >> 3 & 1) != 0) {
          if ((byte)-((char)bVar1 >> 7) == 0) {
            return -200;
          }
          if (0x7d < (uint)uVar11) {
            return -200;
          }
        }
        bVar10 = bVar10 & 0x7f;
        if (bVar10 == 0x7e) {
          uVar5 = 2;
        }
        else {
          if (bVar10 != 0x7f) {
            *(ulong *)(param_1 + 0x1018) = uVar11;
            param_1[0x1020] = 0;
            param_1[0x1021] = 0;
            param_1[0x1022] = 0;
            param_1[0x1023] = 0;
            param_1[0x1024] = 0;
            param_1[0x1025] = 0;
            param_1[0x1026] = 0;
            param_1[0x1027] = 0;
            if ((byte)-((char)bVar2 >> 7) == 0) {
              param_1[0x1030] = 7;
              param_1[0x1031] = 0;
              param_1[0x1032] = 0;
              param_1[0x1033] = 0;
              goto switchD_7100227c30_caseD_7;
            }
            param_1[0x1030] = 6;
            param_1[0x1031] = 0;
            param_1[0x1032] = 0;
            param_1[0x1033] = 0;
            param_1[0x1038] = 4;
            param_1[0x1039] = 0;
            param_1[0x103a] = 0;
            param_1[0x103b] = 0;
            param_1[0x103c] = 0;
            param_1[0x103d] = 0;
            param_1[0x103e] = 0;
            param_1[0x103f] = 0;
            goto switchD_7100227c30_caseD_6;
          }
          uVar5 = 8;
        }
        param_1[0x1030] = 5;
        param_1[0x1031] = 0;
        param_1[0x1032] = 0;
        param_1[0x1033] = 0;
        *(undefined8 *)(param_1 + 0x1038) = uVar5;
        goto switchD_7100227c30_caseD_5;
      }
    }
    break;
  default:
    goto switchD_7100227c30_caseD_4;
  case 5:
switchD_7100227c30_caseD_5:
    pbVar7 = *(byte **)(param_1 + 0x1008);
    pbVar4 = *(byte **)(param_1 + 0x1000);
    __n = *(size_t *)(param_1 + 0x1038);
    pbVar9 = param_1 + 0x1008;
    uVar11 = (long)pbVar7 - (long)pbVar4;
    if (__n <= uVar11) {
LAB_7100227dc4:
      param_1[0x1018] = 0;
      param_1[0x1019] = 0;
      param_1[0x101a] = 0;
      param_1[0x101b] = 0;
      param_1[0x101c] = 0;
      param_1[0x101d] = 0;
      param_1[0x101e] = 0;
      param_1[0x101f] = 0;
      param_1[0x1020] = 0;
      param_1[0x1021] = 0;
      param_1[0x1022] = 0;
      param_1[0x1023] = 0;
      param_1[0x1024] = 0;
      param_1[0x1025] = 0;
      param_1[0x1026] = 0;
      param_1[0x1027] = 0;
      memcpy(param_1 + (0x1020 - __n),pbVar4,__n);
      uVar11 = FUN_71002280d0(*(undefined8 *)(param_1 + 0x1018));
      pbVar7 = (byte *)(*(long *)(param_1 + 0x1000) + *(long *)(param_1 + 0x1038));
      *(ulong *)(param_1 + 0x1018) = uVar11;
      *(byte **)(param_1 + 0x1000) = pbVar7;
      if (*(long *)(param_1 + 0x1038) == 8) {
        if (uVar11 < 0x10000) {
          return -200;
        }
        if ((long)uVar11 < 0) {
          return -200;
        }
      }
      else if (uVar11 < 0x7e) {
        return -200;
      }
      if (param_1[0x1028] != 0) {
        param_1[0x1030] = 6;
        param_1[0x1031] = 0;
        param_1[0x1032] = 0;
        param_1[0x1033] = 0;
        param_1[0x1038] = 4;
        param_1[0x1039] = 0;
        param_1[0x103a] = 0;
        param_1[0x103b] = 0;
        param_1[0x103c] = 0;
        param_1[0x103d] = 0;
        param_1[0x103e] = 0;
        param_1[0x103f] = 0;
        pbVar9 = *(byte **)pbVar9;
        if ((ulong)((long)pbVar9 - (long)pbVar7) < 4) goto LAB_7100227eb8;
        goto LAB_7100227f1c;
      }
      param_1[0x1030] = 7;
      param_1[0x1031] = 0;
      param_1[0x1032] = 0;
      param_1[0x1033] = 0;
      goto LAB_7100227f60;
    }
    if (param_1 != pbVar4) {
      memmove(param_1,pbVar4,uVar11);
      pbVar7 = param_1 + uVar11;
      *(byte **)(param_1 + 0x1008) = pbVar7;
      *(byte **)(param_1 + 0x1000) = param_1;
    }
    lVar3 = (**(code **)(param_1 + 0x1088))
                      (pbVar7,(long)(param_1 + 0x1000) - (long)pbVar7,0,
                       *(undefined8 *)(param_1 + 0x1098));
    if (0 < lVar3) {
      lVar6 = *(long *)pbVar9;
      *(long *)pbVar9 = lVar6 + lVar3;
      pbVar4 = *(byte **)(param_1 + 0x1000);
      __n = *(size_t *)(param_1 + 0x1038);
      if (__n <= (ulong)((lVar6 + lVar3) - (long)pbVar4)) goto LAB_7100227dc4;
    }
    break;
  case 6:
switchD_7100227c30_caseD_6:
    pbVar7 = *(byte **)(param_1 + 0x1000);
    pbVar9 = *(byte **)(param_1 + 0x1008);
    if (*(ulong *)(param_1 + 0x1038) <= (ulong)((long)pbVar9 - (long)pbVar7)) {
LAB_7100227f1c:
      memcpy(param_1 + 0x1029,pbVar7,4);
      pbVar7 = (byte *)(*(long *)(param_1 + 0x1000) + 4);
      param_1[0x1030] = 7;
      param_1[0x1031] = 0;
      param_1[0x1032] = 0;
      param_1[0x1033] = 0;
      *(byte **)(param_1 + 0x1000) = pbVar7;
      goto LAB_7100227f60;
    }
LAB_7100227eb8:
    if (pbVar7 != param_1) {
      memmove(param_1,pbVar7,(long)pbVar9 - (long)pbVar7);
      pbVar9 = param_1 + ((long)pbVar9 - (long)pbVar7);
      *(byte **)(param_1 + 0x1008) = pbVar9;
      *(byte **)(param_1 + 0x1000) = param_1;
    }
    lVar3 = (**(code **)(param_1 + 0x1088))
                      (pbVar9,param_1 + (0x1000 - (long)pbVar9),0,*(undefined8 *)(param_1 + 0x1098))
    ;
    if (0 < lVar3) {
      lVar3 = *(long *)(param_1 + 0x1008) + lVar3;
      *(long *)(param_1 + 0x1008) = lVar3;
      pbVar7 = *(byte **)(param_1 + 0x1000);
      if (*(ulong *)(param_1 + 0x1038) <= (ulong)(lVar3 - (long)pbVar7)) goto LAB_7100227f1c;
    }
    break;
  case 7:
switchD_7100227c30_caseD_7:
    pbVar7 = *(byte **)(param_1 + 0x1000);
LAB_7100227f60:
    uVar11 = *(long *)(param_1 + 0x1018) - *(long *)(param_1 + 0x1020);
    pbVar9 = param_1 + 0x1008;
    pbVar4 = *(byte **)pbVar9;
    if ((uVar11 != 0) && (pbVar4 == pbVar7)) {
      if (pbVar7 != param_1) {
        memmove(param_1,pbVar7,0);
        *(byte **)(param_1 + 0x1008) = param_1;
        *(byte **)(param_1 + 0x1000) = param_1;
        pbVar4 = param_1;
      }
      lVar3 = (**(code **)(param_1 + 0x1088))
                        (pbVar4,param_1 + (0x1000 - (long)pbVar4),0,
                         *(undefined8 *)(param_1 + 0x1098));
      if (lVar3 < 1) break;
      pbVar4 = (byte *)(*(long *)pbVar9 + lVar3);
      *(byte **)pbVar9 = pbVar4;
      pbVar7 = *(byte **)(param_1 + 0x1000);
    }
    bVar10 = param_1[0x1028];
    if (uVar11 <= (ulong)((long)pbVar4 - (long)pbVar7)) {
      pbVar4 = pbVar7 + uVar11;
    }
    if (bVar10 == 0) {
      pbVar8 = pbVar4 + (*(long *)(param_1 + 0x1020) - (long)pbVar7);
      *(byte **)(param_1 + 0x1000) = pbVar4;
      *(byte **)(param_1 + 0x1020) = pbVar8;
      pbVar9 = pbVar4;
    }
    else {
      pbVar8 = *(byte **)(param_1 + 0x1020);
      pbVar9 = pbVar7;
      if (pbVar7 != pbVar4) {
        do {
          *pbVar9 = *pbVar9 ^ param_1[((ulong)pbVar8 & 3) + 0x1029];
          pbVar9 = (byte *)(*(long *)(param_1 + 0x1000) + 1);
          pbVar8 = (byte *)(*(long *)(param_1 + 0x1020) + 1);
          *(byte **)(param_1 + 0x1000) = pbVar9;
          *(byte **)(param_1 + 0x1020) = pbVar8;
        } while (pbVar9 != pbVar4);
        bVar10 = param_1[0x1028];
      }
    }
    *param_2 = param_1[0x1010];
    lVar3 = (long)pbVar9 - (long)pbVar7;
    param_2[1] = param_1[0x1012];
    param_2[2] = param_1[0x1011];
    pbVar9 = *(byte **)(param_1 + 0x1018);
    *(byte **)(param_2 + 8) = pbVar9;
    param_2[0x10] = bVar10;
    *(byte **)(param_2 + 0x18) = pbVar7;
    *(long *)(param_2 + 0x20) = lVar3;
    if (pbVar9 == pbVar8) {
      param_1[0x1030] = 3;
      param_1[0x1031] = 0;
      param_1[0x1032] = 0;
      param_1[0x1033] = 0;
      param_1[0x1038] = 2;
      param_1[0x1039] = 0;
      param_1[0x103a] = 0;
      param_1[0x103b] = 0;
      param_1[0x103c] = 0;
      param_1[0x103d] = 0;
      param_1[0x103e] = 0;
      param_1[0x103f] = 0;
    }
    goto switchD_7100227c30_caseD_4;
  }
  lVar3 = -100;
switchD_7100227c30_caseD_4:
  return lVar3;
}

