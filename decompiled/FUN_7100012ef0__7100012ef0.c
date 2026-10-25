// addr:      7100012ef0
// offset:    0x12ef0
// name:      FUN_7100012ef0
// mangled:   
// signature: int __cdecl FUN_7100012ef0(long * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_7100012ef0(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = (long *)(param_2 + 0xd8);
  lVar10 = *plVar9;
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  pcVar6 = (char *)FUN_7100027290();
  if (pcVar6 == (char *)0x0) {
    FUN_710002a1f0((long)plVar9);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    iVar5 = 0x1b;
  }
  else {
    bVar3 = true;
LAB_7100012f50:
    do {
      *(char **)(param_2 + 0xf0) = pcVar6;
      *(undefined4 *)(param_2 + 0xf8) = 0x4000;
      uVar4 = FUN_7100028420(plVar9,2);
      if (1 < uVar4) {
        if ((bVar3) && (uVar4 == 0xfffffffd)) {
          FUN_710002a1f0((long)plVar9);
          param_4 = 0x70;
          uVar7 = FUN_71000281d0((long)plVar9,0xfffffff1,"1.2.11.f-NINTENDO-SDK-v1",0x70);
          if ((int)uVar7 == 0) {
            bVar3 = false;
            *(long *)(param_2 + 0xd8) = lVar10;
            *(undefined4 *)(param_2 + 0xe0) = uVar1;
            goto LAB_7100012f50;
          }
        }
        FUN_71000272a0();
        lVar10 = *param_1;
        lVar8 = *(long *)(param_2 + 0x108);
        if (lVar8 != 0) goto LAB_7100013038;
LAB_7100012ff4:
        FUN_7100016040(lVar10,(byte *)
                              "Error while processing content unencoding: Unknown failure within decompression software."
                       ,0,param_4,param_5,param_6,param_7,param_8);
LAB_7100013044:
        FUN_710002a1f0((long)plVar9);
        iVar5 = 0x3d;
LAB_7100013050:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return iVar5;
      }
      uVar2 = 0x4000 - *(int *)(param_2 + 0xf8);
      if ((uVar2 != 0) && (*(char *)(param_2 + 0x169) == '\0')) {
        param_4 = (ulong)uVar2;
        iVar5 = FUN_71000167d0(param_1,1,pcVar6,param_4,param_5,param_6,param_7,param_8);
        if (iVar5 != 0) {
          FUN_71000272a0();
          FUN_710002a1f0((long)plVar9);
          goto LAB_7100013050;
        }
      }
      if (uVar4 == 1) {
        FUN_71000272a0();
        uVar7 = FUN_710002a1f0((long)plVar9);
        if ((int)uVar7 == 0) {
          FUN_710002a1f0((long)plVar9);
          iVar5 = 0;
          goto LAB_7100013050;
        }
        lVar10 = *param_1;
        lVar8 = *(long *)(param_2 + 0x108);
        if (lVar8 == 0) goto LAB_7100012ff4;
LAB_7100013038:
        FUN_7100016040(lVar10,(byte *)"Error while processing content unencoding: %s",lVar8,param_4,
                       param_5,param_6,param_7,param_8);
        goto LAB_7100013044;
      }
      bVar3 = false;
    } while (*(int *)(param_2 + 0xe0) != 0);
    FUN_71000272a0();
    iVar5 = 0;
  }
  return iVar5;
}

