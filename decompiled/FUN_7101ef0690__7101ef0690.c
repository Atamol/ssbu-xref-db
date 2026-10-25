// addr:      7101ef0690
// offset:    0x1ef0690
// name:      FUN_7101ef0690
// mangled:   
// signature: undefined __cdecl FUN_7101ef0690(undefined8 * param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef0690(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined **local_d0;
  ulong local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined2 uStack_a4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5e;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar9 = *(long *)*param_1;
  cVar1 = *(char *)(param_2 + 2);
  iVar2 = (int)param_3;
  uVar5 = 0x811c9dc5;
  uVar8 = uVar5;
  if (cVar1 == '\x02') {
    if (iVar2 == 1) {
      local_78 = 0x2b00000000;
      local_70 = 0x6d6165745f6c656d;
      local_48 = 0x357376;
      local_68 = 0x697465706d6f635f;
      local_60 = 0x6974;
      local_5e = 0x686374616d5f6e6f;
      local_56 = 0x725f7075;
      local_52 = 0x6c75;
      local_50 = 0x355f736e69775f65;
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_70 + 1);
      do {
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
    }
    else if (iVar2 == 0) {
      local_78 = 0x2b00000000;
      local_70 = 0x6d6165745f6c656d;
      local_48 = 0x337376;
      local_68 = 0x697465706d6f635f;
      local_60 = 0x6974;
      local_5e = 0x686374616d5f6e6f;
      local_56 = 0x725f7075;
      local_52 = 0x6c75;
      local_50 = 0x335f736e69775f65;
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_70 + 1);
      do {
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
    }
    else {
      local_78 = 0x1700000000;
      local_70 = 0x656c75725f6c656d;
      local_68 = 0x6f665f6d6165745f;
      local_60 = 0x6d72;
      local_5e = CONCAT26(local_5e._6_2_,0x32305f7461);
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_70 + 1);
      do {
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
    }
LAB_7101ef09a0:
    local_78 = CONCAT44(local_78._4_4_,uVar8);
  }
  else {
    if (cVar1 == '\x01') {
      local_78 = 0x1700000000;
      local_70 = 0x656c75725f6c656d;
      local_68 = 0x6f665f6d6165745f;
      local_60 = 0x6d72;
      local_5e = CONCAT26(local_5e._6_2_,0x31305f7461);
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_70 + 1);
      do {
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      goto LAB_7101ef09a0;
    }
    if (cVar1 == '\0') {
      local_78 = 0x1700000000;
      local_70 = 0x656c75725f6c656d;
      local_68 = 0x6f665f6d6165745f;
      local_60 = 0x6d72;
      local_5e = CONCAT26(local_5e._6_2_,0x30305f7461);
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_70 + 1);
      do {
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      goto LAB_7101ef09a0;
    }
    local_70 = local_70 & 0xffffffffffffff00;
    local_78 = 0x811c9dc5;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\x02') {
    uStack_bc = 0x15;
    local_b8 = 0x656c75725f6c656d;
    local_b0 = 0x74735f656c75725f;
    local_a8 = 0x6d61;
    uVar8 = 0x6d;
    uStack_a6 = 0x69;
    uStack_a5 = 0x6e;
    uStack_a4 = 0x61;
    pbVar6 = (byte *)((long)&local_b8 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
  }
  else if (cVar1 == '\x01') {
    uStack_bc = 0x13;
    local_b8 = 0x656c75725f6c656d;
    local_b0 = 0x74735f656c75725f;
    local_a8 = 0x636f;
    uStack_a6 = 0x6b;
    uStack_a5 = 0;
    uVar8 = 0x6d;
    pbVar6 = (byte *)((long)&local_b8 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
  }
  else if (cVar1 == '\0') {
    uStack_a6 = 0;
    uStack_bc = 0x12;
    local_b8 = 0x656c75725f6c656d;
    local_b0 = 0x69745f656c75725f;
    local_a8 = 0x656d;
    uVar8 = 0x6d;
    pbVar6 = (byte *)((long)&local_b8 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
  }
  else {
    local_b8 = local_b8 & 0xffffffffffffff00;
    uStack_bc = 0;
  }
  _local_c0 = CONCAT44(uStack_bc,uVar5);
  FUN_7103776910(&local_d0,lVar9 + 8,(long ****)"set_txt_subtitle",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(short *)(param_2 + 4) == 0) {
    FUN_710377a310((long)&local_d0,5);
    if (*(char *)(param_2 + 2) == '\0') goto LAB_7101ef0c00;
LAB_7101ef0b90:
    lVar9 = *(long *)(lVar9 + 0x10);
    pcVar4 = "type_1";
  }
  else {
    FUN_710377a310((long)&local_d0,5);
    if (*(char *)(param_2 + 2) != '\0') goto LAB_7101ef0b90;
LAB_7101ef0c00:
    if (iVar2 == 1) {
      lVar9 = *(long *)(lVar9 + 0x10);
      pcVar4 = "type_3";
    }
    else {
      if (iVar2 != 0) goto LAB_7101ef0ba4;
      lVar9 = *(long *)(lVar9 + 0x10);
      pcVar4 = "type_2";
    }
  }
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar4);
LAB_7101ef0ba4:
  uVar3 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  return;
}

