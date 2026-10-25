// addr:      7101ed7db0
// offset:    0x1ed7db0
// name:      FUN_7101ed7db0
// mangled:   
// signature: undefined __cdecl FUN_7101ed7db0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ed7db0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint local_b0;
  undefined4 uStack_ac;
  char local_a8 [64];
  ulong local_68;
  uint *local_60;
  uint *puStack_58;
  
  uVar7 = 0x811c9dc5;
  builtin_strncpy(local_a8 + 0x12,"_00",4);
  local_60 = (uint *)0x0;
  puStack_58 = (uint *)0x0;
  builtin_strncpy(local_a8,"set_check_landform",0x12);
  uVar3 = 0x73;
  lVar2 = 9;
  local_68 = 0;
  uVar6 = uVar7;
  do {
    uVar6 = uVar6 * 0x89 ^ uVar3;
    uVar3 = (uint)*(byte *)((long)&local_b0 + lVar2);
    lVar2 = lVar2 + 1;
  } while (uVar3 != 0);
  _local_b0 = CONCAT44(0x15,uVar6);
  FUN_71019c1c50(&local_68,(long)&local_b0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = 0x73;
  lVar2 = 9;
  builtin_strncpy(local_a8,"set_check_landform_01",0x16);
  uVar6 = uVar7;
  do {
    uVar6 = uVar6 * 0x89 ^ uVar3;
    uVar3 = (uint)*(byte *)((long)&local_b0 + lVar2);
    lVar2 = lVar2 + 1;
  } while (uVar3 != 0);
  _local_b0 = CONCAT44(0x15,uVar6);
  if (local_60 < puStack_58) {
    *local_60 = 0;
    for (uVar4 = 0; local_a8[uVar4] != '\0'; uVar4 = uVar4 + 2) {
      *(char *)((long)local_60 + uVar4 + 8) = local_a8[uVar4];
      if (0x3e < (int)uVar4 + 1U) {
        uVar4 = (ulong)((int)uVar4 + 1);
        break;
      }
      if (local_a8[uVar4 + 1] == '\0') {
        uVar4 = uVar4 + 1;
        break;
      }
      *(char *)((long)local_60 + uVar4 + 9) = local_a8[uVar4 + 1];
    }
    *(undefined1 *)((long)local_60 + (uVar4 & 0xffffffff) + 8) = 0;
    local_60[1] = (uint)uVar4;
    uVar3 = (uint)(byte)local_60[2];
    uVar6 = uVar7;
    if ((byte)local_60[2] != 0) {
      pbVar5 = (byte *)((long)local_60 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar3;
        uVar3 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar3 != 0);
    }
    *local_60 = uVar6;
    local_60 = local_60 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_68,(long)&local_b0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar3 = 0x73;
  lVar2 = 9;
  builtin_strncpy(local_a8,"set_check_landform_02",0x16);
  uVar6 = uVar7;
  do {
    uVar6 = uVar6 * 0x89 ^ uVar3;
    uVar3 = (uint)*(byte *)((long)&local_b0 + lVar2);
    lVar2 = lVar2 + 1;
  } while (uVar3 != 0);
  _local_b0 = CONCAT44(0x15,uVar6);
  if (local_60 < puStack_58) {
    *local_60 = 0;
    for (uVar4 = 0; local_a8[uVar4] != '\0'; uVar4 = uVar4 + 2) {
      *(char *)((long)local_60 + uVar4 + 8) = local_a8[uVar4];
      if (0x3e < (int)uVar4 + 1U) {
        uVar4 = (ulong)((int)uVar4 + 1);
        break;
      }
      if (local_a8[uVar4 + 1] == '\0') {
        uVar4 = uVar4 + 1;
        break;
      }
      *(char *)((long)local_60 + uVar4 + 9) = local_a8[uVar4 + 1];
    }
    *(undefined1 *)((long)local_60 + (uVar4 & 0xffffffff) + 8) = 0;
    uVar6 = (uint)(byte)local_60[2];
    local_60[1] = (uint)uVar4;
    if ((byte)local_60[2] != 0) {
      pbVar5 = (byte *)((long)local_60 + 9);
      do {
        uVar7 = uVar7 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
    }
    *local_60 = uVar7;
    local_60 = local_60 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_68,(long)&local_b0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  puVar1 = &local_68;
  FUN_7101ec4640(param_1,(long ****)"selector_property_landform",(long *)puVar1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101ed3e20((long)param_1,0,puVar1,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ed3e20((long)param_1,1,puVar1,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ed3e20((long)param_1,2,puVar1,param_4,param_5,param_6,param_7,param_8);
  if (local_68 != 0) {
    local_60 = (uint *)local_68;
    FUN_710392eb40(local_68);
  }
  return;
}

