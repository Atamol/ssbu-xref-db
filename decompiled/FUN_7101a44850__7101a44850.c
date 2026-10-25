// addr:      7101a44850
// offset:    0x1a44850
// name:      FUN_7101a44850
// mangled:   
// signature: undefined __cdecl FUN_7101a44850(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a44850(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ushort *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_34;
  
  *(int *)(param_1 + 0xd8) = param_2;
  if (param_2 == 1) {
    local_80 = 0x635f726579616c70;
    uVar9 = 0x811c9dc5;
    local_78 = 0x70635f726f6c6f;
    uVar6 = 0x70;
    pbVar4 = (byte *)((long)&local_80 + 1);
    uVar7 = uVar9;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    local_88 = (undefined **)CONCAT44(0xf,uVar7);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa0),(long)&local_80);
    uVar7 = 99;
    local_80 = CONCAT17(local_80._7_1_,0x70635f6e6d63);
    pbVar4 = (byte *)((long)&local_80 + 1);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar7 != 0);
    local_88 = (undefined **)CONCAT44(6,uVar9);
    FUN_710377a120(param_1 + 0x48,(char *)&local_80,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    plVar1 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
    if (plVar1 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      FUN_71037a2270(plVar1,(ushort *)&local_88,0,0);
    }
    if (*(int *)(param_1 + 0xd8) == 1) {
      uVar3 = (ulong)*(uint *)(param_1 + 0xfc);
      FUN_710377a280(param_1 + 0x78,(byte *)"mel_chara_select_lv_n",1);
      FUN_7103778430(param_1 + 0x58,"cp_level_%d",(ulong)*(uint *)(param_1 + 0xfc),uVar3,param_5,
                     param_6,param_7,param_8);
    }
    goto LAB_7101a44cbc;
  }
  if (param_2 == 2) {
    local_80 = 0x635f726579616c70;
    uVar9 = 0x811c9dc5;
    local_78 = 0x70665f726f6c6f;
    uVar6 = 0x70;
    pbVar4 = (byte *)((long)&local_80 + 1);
    uVar7 = uVar9;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    local_88 = (undefined **)CONCAT44(0xf,uVar7);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x60),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa0),(long)&local_80);
    uVar7 = 99;
    local_80 = CONCAT17(local_80._7_1_,0x70665f6e6d63);
    pbVar4 = (byte *)((long)&local_80 + 1);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar7 != 0);
    local_88 = (undefined **)CONCAT44(6,uVar9);
    FUN_710377a120(param_1 + 0x48,(char *)&local_80,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    plVar1 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
    if (plVar1 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      FUN_71037a2270(plVar1,(ushort *)&local_88,0,0);
    }
    if ((0 < *(int *)(param_1 + 0x100)) && (*(int *)(param_1 + 0xd8) == 2)) {
      FUN_710377a280(param_1 + 0x88,(byte *)"mel_chara_select_fp_lv_n",1);
      goto LAB_7101a44cbc;
    }
    plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x10);
  }
  else {
    if (param_2 != 3) {
      FUN_71003a4ca0((uint *)&local_88,"player_color_%dp",(ulong)(*(int *)(param_1 + 0xc) + 1),
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x60),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa0),(long)&local_80);
      FUN_71003a4ca0((uint *)&local_88,"cmn_%dp",(ulong)(*(int *)(param_1 + 0xc) + 1),param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120(param_1 + 0x48,(char *)&local_80,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      if (*(int *)(param_1 + 0xd8) != 0) goto LAB_7101a44cbc;
      FUN_7103778ab0(&local_88,(undefined8 *)(param_1 + 0x68),param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar7 = *(uint *)(param_1 + 0xf8);
      if (uVar7 + 1 < 2) {
        FUN_710377a280((long)&local_88,(byte *)"mel_player_n",1);
        uVar3 = local_80;
      }
      else {
        pcVar8 = &DAT_7105314518;
        if ((uVar7 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
          pcVar8 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                           (ulong)uVar7 * 0xf7d8);
        }
        plVar1 = *(long **)(local_80 + 0x10);
        uVar3 = local_80;
        if (*pcVar8 == '\0') {
          if (plVar1 != (long *)0x0) {
            puVar2 = (ushort *)&local_34;
            uVar7 = 0;
            uVar3 = 0;
            local_34 = 0;
            goto LAB_7101a44c9c;
          }
        }
        else if (plVar1 != (long *)0x0) {
          puVar2 = (ushort *)(pcVar8 + 0xc);
          uVar7 = 0xffffffff;
          uVar3 = 1;
LAB_7101a44c9c:
          FUN_71037a2270(plVar1,puVar2,uVar7,uVar3);
          uVar3 = local_80;
        }
      }
      local_88 = &PTR_FUN_710523d9a8;
      local_80 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      goto LAB_7101a44cbc;
    }
    FUN_71003a4ca0((uint *)&local_88,"player_color_%dp",(ulong)(*(int *)(param_1 + 0xc) + 1),param_3
                   ,param_4,param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    FUN_710377a120(param_1 + 0x48,"mel_chara_select_without",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar1 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
  }
  if (plVar1 != (long *)0x0) {
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    FUN_71037a2270(plVar1,(ushort *)&local_88,0,0);
  }
LAB_7101a44cbc:
  lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
  if (lVar5 != 0) {
    *(undefined2 *)(lVar5 + 0x27e) = 0x101;
    *(undefined1 *)(lVar5 + 0x280) = 1;
  }
  FUN_7101a42860(param_1);
  return;
}

