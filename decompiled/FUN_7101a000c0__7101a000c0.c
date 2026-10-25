// addr:      7101a000c0
// offset:    0x1a000c0
// name:      FUN_7101a000c0
// mangled:   
// signature: undefined __cdecl FUN_7101a000c0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a000c0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  iVar2 = *(int *)(param_1 + 0x21c);
  *(int *)(param_1 + 0x21c) = param_2;
  if (((ulong)param_4 & 1) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = SUB84(param_3,0);
    if (*(char *)(param_1 + 0x266) != '\0') {
      uVar5 = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = uVar5;
  if ((**(long **)(param_1 + 0x178) == 0) || ((*(long **)(param_1 + 0x178))[1] == 0)) {
    if (param_2 == 3) {
      pcVar4 = "controller_entry_cut_off";
    }
    else {
      pcVar4 = "controller_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)pcVar4);
  }
  if ((*(int *)(param_1 + 0x21c) == 3) || (*(int *)(param_1 + 0x220) == -1)) {
    lVar7 = **(long **)(*(long *)(param_1 + 0x60) + 0x18);
    if (lVar7 == 0) goto LAB_7101a00214;
    bVar10 = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    FUN_71003a4ca0((uint *)&local_88,"team_color_%d",(ulong)(*(int *)(param_1 + 0x220) + 1),param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xb0),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x60),(long)&local_80);
    lVar7 = **(long **)(*(long *)(param_1 + 0x60) + 0x18);
    if (lVar7 == 0) goto LAB_7101a00214;
    bVar10 = *(byte *)(lVar7 + 0x58) | 1;
  }
  *(byte *)(lVar7 + 0x58) = bVar10;
LAB_7101a00214:
  if (iVar2 != param_2) {
    param_3 = (long ****)(ulong)*(uint *)(param_1 + 0x244);
    param_4 = (byte ****)0x0;
    FUN_71019fce50(param_1,*(uint *)(param_1 + 0x240),param_3,0,param_5,param_6,param_7,param_8);
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 0x27e) = 0x101;
      *(undefined1 *)(lVar7 + 0x280) = 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x21c);
  if (iVar2 == 1) {
    uVar12 = 0x811c9dc5;
    if (*(int *)(param_1 + 0x220) == -1) {
      local_80 = 0x635f726579616c70;
      local_78 = 0x70635f726f6c6f;
      uVar11 = 0x70;
      pbVar8 = (byte *)((long)&local_80 + 1);
      uVar13 = uVar12;
      do {
        uVar13 = uVar13 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar11 != 0);
      local_88 = CONCAT44(0xf,uVar13);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xb0),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),(long)&local_80);
    }
    local_80 = 0x635f726579616c70;
    local_78 = 0x70635f726f6c6f;
    uVar11 = 0x70;
    pbVar8 = (byte *)((long)&local_80 + 1);
    uVar13 = uVar12;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar11 != 0);
    local_88 = CONCAT44(0xf,uVar13);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    uVar13 = 99;
    local_80 = CONCAT17(local_80._7_1_,0x70635f6e6d63);
    pbVar8 = (byte *)((long)&local_80 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar13 != 0);
    local_88 = CONCAT44(6,uVar12);
    FUN_710377a120(param_1 + 0x48,(char *)&local_80,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_88 = local_88 & 0xffffffff00000000;
      FUN_71037a2270(plVar3,(ushort *)&local_88,0,0);
    }
    if (*(int *)(param_1 + 0x21c) == 1) {
      uVar6 = (ulong)*(uint *)(param_1 + 0x250);
      FUN_710377a280(param_1 + 0x88,(byte *)"mel_chara_select_lv_n",1);
      FUN_7103778430(param_1 + 0x68,"cp_level_%d",(ulong)*(uint *)(param_1 + 0x250),uVar6,param_5,
                     param_6,param_7,param_8);
    }
  }
  else if (iVar2 == 2) {
    uVar12 = 0x811c9dc5;
    if (*(int *)(param_1 + 0x220) == -1) {
      local_80 = 0x635f726579616c70;
      local_78 = 0x70665f726f6c6f;
      uVar11 = 0x70;
      pbVar8 = (byte *)((long)&local_80 + 1);
      uVar13 = uVar12;
      do {
        uVar13 = uVar13 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar11 != 0);
      local_88 = CONCAT44(0xf,uVar13);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xb0),(long)&local_80);
    }
    local_80 = 0x635f726579616c70;
    local_78 = 0x70665f726f6c6f;
    uVar11 = 0x70;
    pbVar8 = (byte *)((long)&local_80 + 1);
    uVar13 = uVar12;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar11 != 0);
    local_88 = CONCAT44(0xf,uVar13);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    uVar13 = 99;
    local_80 = CONCAT17(local_80._7_1_,0x70665f6e6d63);
    pbVar8 = (byte *)((long)&local_80 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar13 != 0);
    local_88 = CONCAT44(6,uVar12);
    FUN_710377a120(param_1 + 0x48,(char *)&local_80,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_88 = local_88 & 0xffffffff00000000;
      FUN_71037a2270(plVar3,(ushort *)&local_88,0,0);
    }
    if ((*(int *)(param_1 + 0x254) < 1) || (*(int *)(param_1 + 0x21c) != 2)) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),0x7104349d11);
      plVar3 = *(long **)(*(long *)(param_1 + 0xa0) + 0x10);
      if (plVar3 != (long *)0x0) {
        local_88 = local_88 & 0xffffffff00000000;
        FUN_71037a2270(plVar3,(ushort *)&local_88,0,0);
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),0x7104307f02);
      FUN_710377a280(param_1 + 0x98,(byte *)"mel_chara_select_fp_lv_n",1);
    }
    if ((*(int *)(param_1 + 0x21c) == 2) && (*(char *)(param_1 + 0x266) != '\0')) {
      lVar7 = *(long *)(param_1 + 0x10);
      pcVar4 = "amiibo_on";
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      pcVar4 = "amiibo_off";
    }
    FUN_7103778300(0x3f800000,lVar7,(long)pcVar4);
  }
  else if (iVar2 == 3) {
    if ((*(char *)(param_1 + 0x261) != '\0') && (*(int *)(param_1 + 0x214) != 0)) {
      **(undefined8 **)(param_1 + 0x178) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x178) + 8) = 0;
      if (*(char *)(param_1 + 0x259) == '\0') {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x710435af76);
        lVar7 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x1b8);
        if (lVar7 != 0) {
          lVar1 = *(long *)(param_1 + 0x1c0) + 0x1b8;
          lVar9 = lVar1;
          do {
            if (1 < *(int *)(lVar7 + 0x20)) {
              lVar9 = lVar7;
            }
            lVar7 = *(long *)(lVar7 + (ulong)(*(int *)(lVar7 + 0x20) < 2) * 8);
          } while (lVar7 != 0);
          if (((lVar9 != lVar1) && (*(int *)(lVar9 + 0x20) < 3)) &&
             (plVar3 = *(long **)(lVar9 + 0x28), plVar3 != (long *)0x0)) {
            (**(code **)(*plVar3 + 0x1f8))(plVar3,1);
            param_3 = (long ****)0x0;
            (**(code **)(*plVar3 + 0x388))(plVar3,0);
          }
        }
      }
      else {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x710439cdb9);
      }
    }
    uVar13 = 0x811c9dc5;
    local_70 = 0;
    local_80 = 0x635f726579616c70;
    local_78 = 0x66666f5f726f6c6f;
    uVar11 = 0x70;
    pbVar8 = (byte *)((long)&local_80 + 1);
    uVar12 = uVar13;
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar11 != 0);
    local_88 = CONCAT44(0x10,uVar12);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)&local_80);
    local_78 = 0x66666f5f726f6c6f;
    local_80 = 0x635f726579616c70;
    uVar12 = 0x70;
    local_70 = 0;
    pbVar8 = (byte *)((long)&local_80 + 1);
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar12 != 0);
    local_88 = CONCAT44(0x10,uVar13);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    FUN_710377a120(param_1 + 0x48,"mel_chara_select_without",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_88 = local_88 & 0xffffffff00000000;
      FUN_71037a2270(plVar3,(ushort *)&local_88,0,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x220) == -1) {
      FUN_71003a4ca0((uint *)&local_88,"player_color_%dp",(ulong)(*(int *)(param_1 + 0x1cc) + 1),
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x70),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xb0),(long)&local_80);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),(long)&local_80);
    }
    if (*(char *)(param_1 + 0x25b) == '\0') {
      FUN_71003a4ca0((uint *)&local_88,"cmn_%dp",(ulong)(*(int *)(param_1 + 0x1cc) + 1),param_3,
                     param_4,param_5,param_6,param_7,param_8);
    }
    else {
      local_80 = 0x79616c705f6e6d63;
      uVar12 = 0x811c9dc5;
      local_78 = CONCAT53(local_78._3_5_,0x7265);
      uVar13 = 99;
      pbVar8 = (byte *)((long)&local_80 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar13 != 0);
      local_88 = CONCAT44(10,uVar12);
    }
    FUN_710377a120(param_1 + 0x48,(char *)&local_80,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_71019fd0b0(param_1,(uint *)(param_1 + 0x248),param_3,param_4,param_5,param_6,param_7,param_8
                  );
  }
  FUN_71019fc7a0(param_1);
  return;
}

