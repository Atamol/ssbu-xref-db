// addr:      7101d89940
// offset:    0x1d89940
// name:      FUN_7101d89940
// mangled:   
// signature: undefined __cdecl FUN_7101d89940(long param_1, int param_2)


void FUN_7101d89940(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  iVar1 = *(int *)(param_1 + 0x158);
  if (iVar1 == param_2) {
    return;
  }
  *(int *)(param_1 + 0x158) = param_2;
  switch(param_2) {
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x7104291fae);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710427029a);
    lVar6 = *(long *)(param_1 + 0x138);
    pcVar5 = "view_spirits_list_preview";
    break;
  case 2:
  case 3:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x710435bba5);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710435bba5);
    lVar6 = *(long *)(param_1 + 0x138);
    pcVar5 = "view_spirits_select";
    break;
  case 4:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x71042c521c);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x71042c521c);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x138),0x710433a4f1);
    lVar6 = *DAT_7105329f98;
    uVar2 = *(undefined4 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
    *(undefined4 *)(param_1 + 0x288) = uVar2;
    *(undefined4 *)(param_1 + 0x290) = uVar2;
    uVar3 = *(ushort *)(param_1 + 0x15e);
    if (uVar3 >> 4 < 0x177) {
      puVar7 = (undefined2 *)(*(long *)(lVar6 + 0x30) + (ulong)uVar3 * 0x50 + 72000);
    }
    else {
      puVar7 = &DAT_710532a878;
      if (((ushort)(uVar3 + 0xe890) < 100) &&
         (lVar6 = *(long *)(lVar6 + 0x30) + (ulong)(ushort)(uVar3 + 0xe890) * 0x50,
         *(short *)(lVar6 + 0x88cc8) != -1)) {
        puVar7 = (undefined2 *)(lVar6 + 0x88cc0);
      }
    }
    uVar2 = *(undefined4 *)(puVar7 + 6);
    *(undefined4 *)(param_1 + 0x268) = uVar2;
    *(undefined4 *)(param_1 + 0x270) = uVar2;
    local_58 = 1;
    local_50 = 0;
    local_4c = 0;
    local_38 = 0;
    local_40 = 0x52ffff0000000000;
    FUN_71025ca840((int *)&local_58,*(ushort *)(param_1 + 0x15c),(uint)(ushort)puVar7[8]);
    iVar4 = FUN_71025cb8d0((long)&local_58);
    *(int *)(param_1 + 0x27c) = iVar4;
    *(int *)(param_1 + 0x280) = iVar4;
    goto joined_r0x007101d89bf4;
  case 5:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x7104291fae);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x7104291fae);
    lVar6 = *(long *)(param_1 + 0x138);
    pcVar5 = "view_prize_detail";
    break;
  case 6:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x7104291fae);
    lVar6 = *(long *)(param_1 + 0x128);
    if (iVar1 == 7) {
      pcVar5 = "anim_spirits_summon_edit_back";
    }
    else {
      pcVar5 = "position_spirits_summon";
    }
    goto LAB_7101d89c74;
  case 7:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x7104291fae);
    lVar6 = *(long *)(param_1 + 0x128);
    pcVar5 = "anim_spirits_summon_edit";
LAB_7101d89c74:
    FUN_7103778300(0x3f800000,lVar6,(long)pcVar5);
    if (*(char *)(param_1 + 0x2fc) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x138),0x71043cf7fa);
      *(undefined1 *)(param_1 + 0x2fc) = 1;
    }
switchD_7101d89988_default:
    goto joined_r0x007101d89bf4;
  case 8:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x71044018f4);
    FUN_7103778630(0,*(long *)(param_1 + 0x128),0x710435bbbd);
    goto LAB_7101d89bd0;
  case 9:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x710425f85e);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710425f85e);
LAB_7101d89bd0:
    lVar6 = *(long *)(*(long *)(param_1 + 0x138) + 8);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
      goto joined_r0x007101d89bf4;
    }
  default:
    goto switchD_7101d89988_default;
  }
  FUN_7103778300(0x3f800000,lVar6,(long)pcVar5);
joined_r0x007101d89bf4:
  if (iVar1 == 8) {
    FUN_7103778630(0,*(long *)(param_1 + 0x128),0x710438cebb);
  }
  (**(code **)(**(long **)(param_1 + 0x148) + 0x60))
            (*(long **)(param_1 + 0x148),*(int *)(param_1 + 0x158) == 1);
  return;
}

