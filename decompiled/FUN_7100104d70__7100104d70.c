// addr:      7100104d70
// offset:    0x104d70
// name:      FUN_7100104d70
// mangled:   
// signature: undefined FUN_7100104d70(void)


void FUN_7100104d70(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int aiStack_68 [4];
  undefined4 auStack_58 [2];
  
  lVar10 = DAT_71052adb38;
  uVar7 = FUN_7100148da0(DAT_71052adb38);
  if (((uVar7 & 0xff) == 0) ||
     (lVar9 = *(long *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x162) * 8 + 0x168),
     *(long *)(param_2 + 0xa0) = lVar9, lVar9 == 0)) {
    aiStack_68[0] = 0x10c08;
  }
  else {
    sVar2 = FUN_710013dc70((long)param_3);
    if (sVar2 != 0) {
      sVar2 = FUN_710013dc70((long)param_3);
      sVar3 = FUN_71000c1a50((long)param_3);
      if ((ushort)(sVar3 + sVar2) <= *(ushort *)(DAT_71052add68 + 0x70)) {
        lVar9 = *(long *)(param_2 + 0xa0);
        uVar8 = FUN_7100146ed0(lVar10);
        FUN_71000e4360(aiStack_68,lVar9,param_3,(uint)uVar8 & 1);
        bVar1 = FUN_71000c1580((long)param_3);
        *(byte *)(param_2 + 200) = bVar1 & 1;
        FUN_71001492c0(DAT_71052adb38,sVar3 + sVar2);
        lVar10 = *(long *)(lVar10 + 8);
        *(undefined4 *)(param_2 + 0xb8) = 0;
        iVar4 = FUN_71000ee2c0(lVar10);
        if (iVar4 != 0) {
          uVar11 = 0;
          do {
            iVar4 = FUN_71000ee290(lVar10,uVar11);
            if (iVar4 != 0) {
              uVar5 = FUN_71000ee290(lVar10,uVar11);
              *(undefined4 *)(param_2 + (ulong)*(uint *)(param_2 + 0xb8) * 4 + 0xa8) = uVar5;
              *(int *)(param_2 + 0xb8) = *(int *)(param_2 + 0xb8) + 1;
            }
            uVar11 = uVar11 + 1;
            uVar6 = FUN_71000ee2c0(lVar10);
          } while (uVar11 < uVar6);
        }
        *(char **)(param_2 + 0x40) = "NexMatchCreateSessionJob::LeaveJoinedMatchmakeSession";
        *(code **)(param_2 + 0x30) = FUN_7100104f30;
        *(undefined8 *)(param_2 + 0x38) = 0;
        aiStack_68[0] = 0;
        goto LAB_7100104e2c;
      }
    }
    aiStack_68[0] = 0x10c07;
  }
LAB_7100104e2c:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_68 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
  FUN_71000bce50(param_1,aiStack_68);
  return;
}

