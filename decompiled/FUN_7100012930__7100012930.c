// addr:      7100012930
// offset:    0x12930
// name:      FUN_7100012930
// mangled:   
// signature: undefined8 __cdecl FUN_7100012930(long * param_1, byte * param_2, byte * param_3, byte * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7100012930(long *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 auStack_68 [8];
  
  lVar11 = *param_1;
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  pbVar9 = param_3;
  pbVar10 = param_4;
  if (((*(char *)(lVar11 + 0x6f0) == '\0') || (*(char *)(lVar11 + 0x229) != '\0')) ||
     (pbVar9 = param_2, pbVar10 = param_3,
     iVar4 = FUN_71000167d0(param_1,1,(char *)param_2,(size_t)param_3,param_5,param_6,param_7,
                            param_8), iVar4 == 0)) {
    if (param_3 != (byte *)0x0) {
      do {
        switch((int)param_1[7]) {
        case 0:
          bVar1 = *param_2;
          if ((bVar1 - 0x30 < 10) ||
             ((uVar3 = bVar1 - 0x41, uVar3 < 0x26 &&
              ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
            if (0xf < *(int *)((long)param_1 + 0x34)) {
              return 1;
            }
            *(byte *)((long)param_1 + (long)*(int *)((long)param_1 + 0x34) + 0x20) = bVar1;
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
            *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
          }
          else {
            if (*(int *)((long)param_1 + 0x34) == 0) {
              return 2;
            }
            pbVar9 = &DAT_00000010;
            *(undefined1 *)((long)param_1 + (long)*(int *)((long)param_1 + 0x34) + 0x20) = 0;
            lVar6 = FUN_71039c00b0(param_1 + 4,auStack_68);
            param_1[8] = lVar6;
            if ((lVar6 == 0x7fffffffffffffff) && (piVar7 = __errno_location(), *piVar7 == 0x22)) {
              return 2;
            }
            *(undefined4 *)(param_1 + 7) = 1;
          }
          break;
        case 1:
          if (*param_2 == 10) {
            if (param_1[8] == 0) {
              *(undefined4 *)(param_1 + 7) = 5;
              *(undefined4 *)((long)param_1 + 0xa6c) = 0;
              param_2 = param_2 + 1;
              param_3 = param_3 + -1;
              break;
            }
            *(undefined4 *)(param_1 + 7) = 2;
          }
joined_r0x007100012a28:
          param_3 = param_3 + -1;
          param_2 = param_2 + 1;
          break;
        case 2:
          pbVar5 = (byte *)FUN_7100027100();
          if (*(char *)(*param_1 + 0x6f1) == '\0') {
            iVar4 = *(int *)(lVar11 + 400);
            if (iVar4 == 2) {
              *(byte **)(lVar11 + 0x140) = param_2;
              pbVar9 = pbVar5;
              iVar4 = FUN_71000130b0(param_1,lVar11 + 0xc0,(char *)pbVar5,(ulong)pbVar10,param_5,
                                     param_6,param_7,param_8);
            }
            else {
              if (iVar4 != 1) {
                if (iVar4 != 0) {
                  FUN_7100016040(*param_1,(byte *)
                                          "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                                 ,pbVar9,pbVar10,param_5,param_6,param_7,param_8);
                  return 5;
                }
                goto LAB_7100012a50;
              }
              *(byte **)(lVar11 + 0x140) = param_2;
              pbVar9 = pbVar5;
              iVar4 = FUN_7100012df0(param_1,lVar11 + 0xc0,pbVar5,(ulong)pbVar10,param_5,param_6,
                                     param_7,param_8);
            }
joined_r0x007100012c38:
            if (iVar4 != 0) goto LAB_7100012d3c;
          }
          else {
LAB_7100012a50:
            if ((*(char *)(lVar11 + 0x229) == '\0') && (*(char *)(lVar11 + 0x6f0) == '\0')) {
              pbVar9 = param_2;
              pbVar10 = pbVar5;
              iVar4 = FUN_71000167d0(param_1,1,(char *)param_2,(size_t)pbVar5,param_5,param_6,
                                     param_7,param_8);
              goto joined_r0x007100012c38;
            }
          }
          *(byte **)param_4 = pbVar5 + *(long *)param_4;
          lVar6 = param_1[8];
          param_2 = param_2 + (long)pbVar5;
          param_3 = param_3 + -(long)pbVar5;
          param_1[8] = lVar6 - (long)pbVar5;
          if (lVar6 - (long)pbVar5 != 0) goto switchD_71000129a4_default;
          *(undefined4 *)(param_1 + 7) = 3;
          break;
        case 3:
          if (*param_2 == 0xd) goto joined_r0x007100012a28;
          if (*param_2 != 10) {
            return 3;
          }
          *(undefined8 *)((long)param_1 + 0x34) = 0;
          param_1[9] = 0;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
          break;
        case 4:
          if (*param_2 != 10) {
            return 3;
          }
          lVar11 = FUN_7100027100();
          param_1[9] = lVar11;
          return 0xffffffff;
        case 5:
          bVar1 = *param_2;
          if ((bVar1 == 0xd) || (bVar1 == 10)) {
            iVar4 = *(int *)((long)param_1 + 0xa6c);
            if (iVar4 != 0) {
              *(int *)((long)param_1 + 0xa6c) = iVar4 + 1;
              *(undefined1 *)(param_1[0x14c] + (long)iVar4) = 0xd;
              iVar4 = *(int *)((long)param_1 + 0xa6c);
              *(int *)((long)param_1 + 0xa6c) = iVar4 + 1;
              *(undefined1 *)(param_1[0x14c] + (long)iVar4) = 10;
              *(undefined1 *)(param_1[0x14c] + (long)*(int *)((long)param_1 + 0xa6c)) = 0;
              if (*(char *)(lVar11 + 0x6f0) == '\0') {
                pbVar9 = (byte *)param_1[0x14c];
                pbVar10 = (byte *)(long)*(int *)((long)param_1 + 0xa6c);
                iVar4 = FUN_71000167d0(param_1,2,(char *)pbVar9,(size_t)pbVar10,param_5,param_6,
                                       param_7,param_8);
                if (iVar4 != 0) goto LAB_7100012d3c;
              }
              *(undefined4 *)((long)param_1 + 0xa6c) = 0;
              *(undefined4 *)(param_1 + 7) = 6;
              if (*param_2 != 10) goto joined_r0x007100012a28;
              goto switchD_71000129a4_default;
            }
            *(undefined4 *)(param_1 + 7) = 7;
          }
          else {
            iVar4 = *(int *)((long)param_1 + 0xa6c);
            iVar2 = (int)param_1[0x14d];
            if (iVar4 < iVar2) {
              lVar6 = param_1[0x14c];
            }
            else {
              if (iVar2 == 0) {
                *(undefined4 *)(param_1 + 0x14d) = 0x80;
                lVar6 = FUN_7100027290();
              }
              else {
                *(int *)(param_1 + 0x14d) = iVar2 << 1;
                lVar6 = FUN_71000272b0();
              }
              if (lVar6 == 0) {
                return 6;
              }
              param_1[0x14c] = lVar6;
              bVar1 = *param_2;
              iVar4 = *(int *)((long)param_1 + 0xa6c);
            }
            *(int *)((long)param_1 + 0xa6c) = iVar4 + 1;
            *(byte *)(lVar6 + iVar4) = bVar1;
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
          }
          break;
        case 6:
          if (*param_2 != 10) {
            return 3;
          }
          *(undefined4 *)(param_1 + 7) = 7;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
          break;
        case 7:
          bVar1 = *param_2;
          if ((bVar1 == 10) || (bVar1 == 0xd)) {
            param_3 = param_3 + -(ulong)(bVar1 == 0xd);
            if (bVar1 == 0xd) {
              param_2 = param_2 + 1;
            }
            *(undefined4 *)(param_1 + 7) = 4;
          }
          else {
            *(undefined4 *)(param_1 + 7) = 5;
          }
          break;
        default:
switchD_71000129a4_default:
        }
      } while (param_3 != (byte *)0x0);
    }
    uVar8 = 0;
  }
  else {
LAB_7100012d3c:
    uVar8 = 4;
  }
  return uVar8;
}

