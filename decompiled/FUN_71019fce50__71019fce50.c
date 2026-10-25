// addr:      71019fce50
// offset:    0x19fce50
// name:      FUN_71019fce50
// mangled:   
// signature: undefined __cdecl FUN_71019fce50(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019fce50(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = (uint)param_4;
  uVar9 = (ulong)param_2;
  if (*(uint *)(param_1 + 0x240) == param_2) {
    uVar8 = 0;
    if (*(char *)(param_1 + 0x262) != '\0') goto LAB_71019fce80;
LAB_71019fce98:
    bVar2 = *(int *)(param_1 + 0x21c) == 2;
  }
  else {
    *(uint *)(param_1 + 0x240) = param_2;
    if (*(char *)(param_1 + 0x262) == '\0') goto LAB_71019fce98;
LAB_71019fce80:
    bVar2 = true;
  }
  iVar7 = (int)param_3;
  *(int *)(param_1 + 0x244) = iVar7;
  if (iVar7 == 2) {
    FUN_7103778430(param_1 + 8,"set_%d_btn_option",uVar9,param_4,param_5,param_6,param_7,param_8);
LAB_71019fcee0:
    uVar1 = *(uint *)(param_1 + 0x240);
    lVar4 = param_1 + 0x68;
    pcVar5 = "set_%d";
  }
  else {
    if (iVar7 == 1) {
      FUN_7103778430(param_1 + 8,"set_tips",param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_71019fcee0;
    }
    if (*(char *)(param_1 + 0x24d) == '\0') {
      bVar3 = *(char *)(param_1 + 0x24c) == '\x02';
    }
    else {
      bVar3 = true;
    }
    if (((bool)(bVar2 ^ 1U)) || ((bool)(bVar3 ^ 1U))) {
      if ((bool)(bVar2 | bVar3 ^ 1U)) {
        if (!(bool)(bVar3 | bVar2 ^ 1U)) {
          pcVar5 = "set_%d_btn_s";
          FUN_7103778430(param_1 + 8,"set_%d_btn_s",uVar9,param_4,param_5,param_6,param_7,param_8);
          lVar4 = param_1 + 0x68;
          goto LAB_71019fcf4c;
        }
        if ((bool)(bVar2 | bVar3)) goto LAB_71019fcfd0;
        pcVar5 = "set_%d";
        FUN_7103778430(param_1 + 8,"set_%d",uVar9,param_4,param_5,param_6,param_7,param_8);
        lVar4 = param_1 + 0x68;
      }
      else {
        pcVar5 = "set_%d_btn_h";
        FUN_7103778430(param_1 + 8,"set_%d_btn_h",uVar9,param_4,param_5,param_6,param_7,param_8);
        FUN_7103778430(param_1 + 0x68,"set_%d_btn_h",(ulong)*(uint *)(param_1 + 0x240),param_4,
                       param_5,param_6,param_7,param_8);
        lVar4 = param_1 + 0xa8;
      }
    }
    else {
      pcVar5 = "set_%d_btn_s_h";
      FUN_7103778430(param_1 + 8,"set_%d_btn_s_h",uVar9,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778430(param_1 + 0x68,"set_%d_btn_s_h",(ulong)*(uint *)(param_1 + 0x240),param_4,
                     param_5,param_6,param_7,param_8);
      lVar4 = param_1 + 0xa8;
LAB_71019fcf4c:
      FUN_7103778430(lVar4,pcVar5,(ulong)*(uint *)(param_1 + 0x240),param_4,param_5,param_6,param_7,
                     param_8);
      lVar4 = param_1 + 0xd8;
    }
    uVar1 = *(uint *)(param_1 + 0x240);
  }
  FUN_7103778430(lVar4,pcVar5,(ulong)uVar1,param_4,param_5,param_6,param_7,param_8);
LAB_71019fcfd0:
  if (*(char *)(param_1 + 0x24c) == '\x02') {
    puVar6 = &DAT_710427e6d1;
  }
  else {
    puVar6 = &DAT_7104329fc1;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xb0),(long)puVar6);
  if (*(int *)(param_1 + 0x244) == 3) {
    pcVar5 = "set_all_player_fp";
    if (*(int *)(param_1 + 0x21c) != 2) {
      pcVar5 = "set_all_player";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)pcVar5);
  }
  else {
    FUN_7103778430(param_1 + 0x38,"set_%d",(ulong)*(uint *)(param_1 + 0x240),param_4,param_5,param_6
                   ,param_7,param_8);
  }
  FUN_7103778430(param_1 + 0x108,"set_%d",(ulong)*(uint *)(param_1 + 0x240),param_4,param_5,param_6,
                 param_7,param_8);
  if ((uVar8 & 1) != 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71043ad15a);
    return;
  }
  return;
}

