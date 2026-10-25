// addr:      710010b140
// offset:    0x10b140
// name:      FUN_710010b140
// mangled:   
// signature: undefined FUN_710010b140(void)


void FUN_710010b140(int *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  lVar8 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x90) = lVar8;
  if (lVar8 == 0) {
    aiStack_50[0] = 0x10c08;
    goto LAB_710010b2f4;
  }
  uVar2 = FUN_710013d220(param_3);
  switch(uVar2) {
  case 1:
    uVar3 = FUN_710010d4d0(param_3);
    uVar4 = (**(code **)(**(long **)(DAT_71052adb38 + 0x188) + 0x38))();
    if (uVar4 < uVar3) goto switchD_710010b1a8_default;
    lVar8 = *(long *)(param_2 + 0x90);
    puVar7 = (undefined4 *)FUN_710010d4c0(param_3);
    iVar5 = FUN_710010d4d0(param_3);
    FUN_71000e8180(lVar8,puVar7,iVar5);
    pcVar10 = FUN_710010b330;
    pcVar9 = "NexMatchCommunityManagementJob::FindCommunityByCommunityId";
    break;
  case 2:
    uVar6 = FUN_710010d4e0(param_3);
    *(undefined8 *)(param_2 + 0xa0) = uVar6;
    uVar2 = FUN_710013d230(param_3);
    *(undefined4 *)(param_2 + 0xa8) = uVar2;
    uVar2 = FUN_710013d240(param_3);
    *(undefined4 *)(param_2 + 0xac) = uVar2;
    pcVar10 = FUN_710010b460;
    pcVar9 = "NexMatchCommunityManagementJob::FindCommunityByParticipant";
    break;
  case 3:
    uVar6 = FUN_710010d4a0(param_3);
    *(undefined8 *)(param_2 + 0xa0) = uVar6;
    uVar2 = FUN_710013d230(param_3);
    *(undefined4 *)(param_2 + 0xa8) = uVar2;
    uVar2 = FUN_710013d240(param_3);
    *(undefined4 *)(param_2 + 0xac) = uVar2;
    pcVar10 = FUN_710010b3c0;
    pcVar9 = "NexMatchCommunityManagementJob::FindCommunityByOwner";
    break;
  case 4:
    bVar1 = FUN_710010d4b0(param_3);
    *(byte *)(param_2 + 0xb0) = bVar1 & 1;
    uVar2 = FUN_710013d230(param_3);
    *(undefined4 *)(param_2 + 0xa8) = uVar2;
    uVar2 = FUN_710013d240(param_3);
    *(undefined4 *)(param_2 + 0xac) = uVar2;
    pcVar10 = FUN_710010b500;
    pcVar9 = "NexMatchCommunityManagementJob::FindOfficialCommunity";
    break;
  default:
switchD_710010b1a8_default:
    aiStack_50[0] = 0x10c07;
    goto LAB_710010b2f4;
  }
  *(char **)(param_2 + 0x40) = pcVar9;
  *(code **)(param_2 + 0x30) = pcVar10;
  *(undefined8 *)(param_2 + 0x38) = 0;
  aiStack_50[0] = 0;
LAB_710010b2f4:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_50);
  return;
}

