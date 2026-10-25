// addr:      7100107890
// offset:    0x107890
// name:      FUN_7100107890
// mangled:   
// signature: undefined FUN_7100107890(void)


void FUN_7100107890(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int aiStack_70 [4];
  undefined4 auStack_58 [2];
  
  lVar11 = DAT_71052adb38;
  uVar8 = FUN_7100148da0(DAT_71052adb38);
  if ((uVar8 & 0xff) == 0) {
LAB_71001079a0:
    aiStack_70[0] = 0x10c08;
  }
  else {
    uVar4 = (**(code **)(*param_3 + 0x50))(param_3);
    if (uVar4 < 3) {
      lVar10 = *(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 8 + 0x168);
      *(long *)(param_2 + 0x148) = lVar10;
      if (lVar10 == 0) goto LAB_71001079a0;
      lVar10 = (**(code **)(*param_3 + 0x40))(param_3);
      sVar2 = FUN_710013dc70(lVar10);
      if (sVar2 != 0) {
        sVar2 = FUN_710013dc70(lVar10);
        sVar3 = FUN_71000c1a50(lVar10);
        if ((ushort)(sVar3 + sVar2) <= *(ushort *)(DAT_71052add68 + 0x70)) {
          lVar12 = *(long *)(param_2 + 0x148);
          uVar9 = FUN_7100146ed0(lVar11);
          FUN_71000e4430(aiStack_70,lVar12,param_3,(uint)uVar9 & 1);
          if (aiStack_70[0] == 0) {
            bVar1 = FUN_71000c1580(lVar10);
            *(byte *)(param_2 + 0x185) = bVar1 & 1;
            FUN_71001492c0(DAT_71052adb38,sVar3 + sVar2);
            *(undefined1 *)(param_2 + 0x184) = 0;
            lVar11 = *(long *)(lVar11 + 8);
            *(undefined4 *)(param_2 + 0x180) = 0;
            iVar5 = FUN_71000ee2c0(lVar11);
            if (iVar5 != 0) {
              uVar4 = 0;
              do {
                iVar5 = FUN_71000ee290(lVar11,uVar4);
                if (iVar5 != 0) {
                  uVar6 = FUN_71000ee290(lVar11,uVar4);
                  *(undefined4 *)(param_2 + (ulong)*(uint *)(param_2 + 0x180) * 4 + 0x170) = uVar6;
                  *(int *)(param_2 + 0x180) = *(int *)(param_2 + 0x180) + 1;
                }
                uVar4 = uVar4 + 1;
                uVar7 = FUN_71000ee2c0(lVar11);
              } while (uVar4 < uVar7);
            }
            *(undefined8 *)(param_2 + 0x38) = 0;
            *(char **)(param_2 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveJoinedMatchmakeSession";
            *(code **)(param_2 + 0x30) = FUN_7100107aa0;
            aiStack_70[0] = 0;
          }
          else {
            aiStack_70[0] = 0x10c07;
          }
          goto LAB_71001079b8;
        }
      }
    }
    aiStack_70[0] = 0x10c07;
  }
LAB_71001079b8:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_58);
  FUN_71000bce50(param_1,aiStack_70);
  return;
}

