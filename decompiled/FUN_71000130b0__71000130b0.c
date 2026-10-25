// addr:      71000130b0
// offset:    0x130b0
// name:      FUN_71000130b0
// mangled:   
// signature: int __cdecl FUN_71000130b0(long * param_1, long param_2, char * param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_71000130b0(long *param_1,long param_2,char *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  void *__dest;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  
  iVar7 = (int)param_3;
  pcVar8 = param_3;
  if (*(uint *)(param_2 + 0xd4) < 5) {
    puVar1 = (undefined8 *)(param_2 + 0xd8);
    switch(*(uint *)(param_2 + 0xd4)) {
    case 0:
      *(undefined8 *)(param_2 + 0x138) = 0;
      *(undefined8 *)(param_2 + 0x140) = 0;
      *(undefined8 *)(param_2 + 0x128) = 0;
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined8 *)(param_2 + 0x118) = 0;
      *(undefined8 *)(param_2 + 0x120) = 0;
      *(undefined8 *)(param_2 + 0x108) = 0;
      *(undefined8 *)(param_2 + 0x110) = 0;
      *(undefined8 *)(param_2 + 0xf8) = 0;
      *(undefined8 *)(param_2 + 0x100) = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(code **)(param_2 + 0x118) = FUN_7100012ed0;
      *(code **)(param_2 + 0x120) = FUN_7100012ee0;
      pcVar8 = FUN_710002b7f0();
      iVar6 = strcmp(pcVar8,"1.2.0.4");
      pcVar8 = "1.2.11.f-NINTENDO-SDK-v1";
      if (iVar6 < 0) {
        param_4 = 0x70;
        uVar9 = FUN_71000281d0((long)puVar1,0xfffffff1,"1.2.11.f-NINTENDO-SDK-v1",0x70);
        if ((int)uVar9 != 0) goto LAB_7100013290;
        *(undefined4 *)(param_2 + 0xd4) = 1;
        goto switchD_71000130ec_caseD_1;
      }
      param_4 = 0x70;
      uVar9 = FUN_71000281d0((long)puVar1,0x2f,"1.2.11.f-NINTENDO-SDK-v1",0x70);
      if ((int)uVar9 != 0) {
LAB_7100013290:
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_7100016040(*param_1,(byte *)
                                  "Error while processing content unencoding: Unknown failure within decompression software."
                         ,0,param_4,param_5,param_6,param_7,param_8);
          return 0x3d;
        }
        FUN_7100016040(*param_1,(byte *)"Error while processing content unencoding: %s",
                       *(long *)(param_2 + 0x108),param_4,param_5,param_6,param_7,param_8);
        return 0x3d;
      }
      *(undefined4 *)(param_2 + 0xd4) = 4;
    case 4:
      *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
      *(int *)(param_2 + 0xe0) = iVar7;
      break;
    case 1:
switchD_71000130ec_caseD_1:
      pcVar13 = param_3 + -10;
      if ((long)param_3 < 10) goto LAB_71000132dc;
      pcVar11 = *(char **)(param_2 + 0x80);
      if (((*pcVar11 != '\x1f') || (pcVar11[1] != -0x75)) ||
         ((pcVar11[2] != '\b' || (bVar5 = pcVar11[3], (bVar5 & 0xe0) != 0)))) {
LAB_710001339c:
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_7100016040(*param_1,(byte *)
                                  "Error while processing content unencoding: Unknown failure within decompression software."
                         ,0,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          FUN_7100016040(*param_1,(byte *)"Error while processing content unencoding: %s",
                         *(long *)(param_2 + 0x108),param_4,param_5,param_6,param_7,param_8);
        }
        FUN_710002a1f0((long)puVar1);
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return 0x3d;
      }
      if ((bVar5 >> 2 & 1) == 0) {
        bVar4 = bVar5 >> 3 & 1;
        pbVar15 = (byte *)(pcVar11 + 10);
joined_r0x0071000133fc:
        while (bVar4 != 0) {
          if (pcVar13 == (char *)0x0) goto LAB_71000132dc;
          pcVar13 = pcVar13 + -1;
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        }
        if ((bVar5 >> 4 & 1) == 0) {
LAB_7100013408:
          pcVar14 = pcVar13;
          if (((bVar5 >> 1 & 1) == 0) || (pcVar14 = pcVar13 + -2, 1 < (long)pcVar13)) {
            pcVar11 = pcVar11 + ((long)param_3 - (long)pcVar14);
            goto LAB_7100013450;
          }
        }
        else if (pcVar13 != (char *)0x0) {
          lVar10 = 1 - (long)pcVar13;
          do {
            if (*pbVar15 == 0) {
              pcVar13 = (char *)-lVar10;
              goto LAB_7100013408;
            }
            lVar10 = lVar10 + 1;
            pbVar15 = pbVar15 + 1;
          } while (lVar10 != 1);
        }
      }
      else if (0xb < (long)param_3) {
        lVar10 = (ulong)*(ushort *)(pcVar11 + 10) + 2;
        if (lVar10 <= (long)pcVar13) {
          bVar4 = bVar5 >> 3 & 1;
          pcVar13 = pcVar13 + -lVar10;
          pbVar15 = (byte *)(pcVar11 + 10 + lVar10);
          goto joined_r0x0071000133fc;
        }
      }
LAB_71000132dc:
      *(int *)(param_2 + 0xe0) = iVar7;
      __dest = (void *)FUN_7100027290();
      *(void **)(param_2 + 0xd8) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(param_2 + 0x80),(ulong)*(uint *)(param_2 + 0xe0));
        *(undefined4 *)(param_2 + 0xd4) = 2;
        return 0;
      }
LAB_710001330c:
      FUN_710002a1f0((long)puVar1);
      *(undefined4 *)(param_2 + 0xd4) = 0;
      return 0x1b;
    case 2:
      uVar3 = *(int *)(param_2 + 0xe0) + iVar7;
      *(uint *)(param_2 + 0xe0) = uVar3;
      lVar10 = FUN_7100017580(*(undefined8 *)(param_2 + 0xd8),(ulong)uVar3);
      *(long *)(param_2 + 0xd8) = lVar10;
      if (lVar10 == 0) goto LAB_710001330c;
      memcpy((void *)((lVar10 + (ulong)*(uint *)(param_2 + 0xe0)) - (long)param_3),
             *(void **)(param_2 + 0x80),(size_t)param_3);
      uVar3 = *(uint *)(param_2 + 0xe0);
      if (uVar3 < 10) {
        return 0;
      }
      pcVar11 = *(char **)(param_2 + 0xd8);
      if ((((*pcVar11 != '\x1f') || (pcVar11[1] != -0x75)) || (pcVar11[2] != '\b')) ||
         (bVar5 = pcVar11[3], (bVar5 & 0xe0) != 0)) {
        FUN_71000272a0();
        goto LAB_710001339c;
      }
      lVar12 = (ulong)uVar3 - 10;
      pbVar15 = (byte *)(pcVar11 + 10);
      lVar10 = lVar12;
      if ((bVar5 >> 2 & 1) != 0) {
        if (uVar3 < 0xc) {
          return 0;
        }
        lVar2 = (ulong)*(ushort *)(pcVar11 + 10) + 2;
        lVar10 = lVar12 - lVar2;
        if (lVar12 < lVar2) {
          return 0;
        }
        pbVar15 = pbVar15 + lVar2;
      }
      bVar4 = bVar5 >> 3 & 1;
      while (bVar4 != 0) {
        if (lVar10 == 0) {
          return 0;
        }
        lVar10 = lVar10 + -1;
        bVar4 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      }
      if ((bVar5 >> 4 & 1) != 0) {
        if (lVar10 == 0) {
          return 0;
        }
        lVar10 = 1 - lVar10;
        while (*pbVar15 != 0) {
          lVar10 = lVar10 + 1;
          pbVar15 = pbVar15 + 1;
          if (lVar10 == 1) {
            return 0;
          }
        }
        lVar10 = -lVar10;
      }
      lVar12 = lVar10;
      if (((bVar5 >> 1 & 1) != 0) && (lVar12 = lVar10 + -2, lVar10 < 2)) {
        return 0;
      }
      lVar12 = (ulong)uVar3 - lVar12;
      FUN_71000272a0();
      pcVar14 = (char *)(ulong)(*(uint *)(param_2 + 0xe0) - (int)lVar12);
      pcVar11 = param_3 + ((*(long *)(param_2 + 0x80) + lVar12) - (ulong)*(uint *)(param_2 + 0xe0));
LAB_7100013450:
      *(char **)(param_2 + 0xd8) = pcVar11;
      iVar7 = (int)pcVar14;
      *(int *)(param_2 + 0xe0) = iVar7;
      *(undefined4 *)(param_2 + 0xd4) = 3;
      goto joined_r0x007100013260;
    case 3:
      goto switchD_71000130ec_caseD_3;
    }
  }
  else {
switchD_71000130ec_caseD_3:
    *(int *)(param_2 + 0xe0) = iVar7;
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
joined_r0x007100013260:
    if (iVar7 == 0) {
      return 0;
    }
  }
  iVar7 = FUN_7100012ef0(param_1,param_2,pcVar8,param_4,param_5,param_6,param_7,param_8);
  return iVar7;
}

