// addr:      7102cd6aa0
// offset:    0x2cd6aa0
// name:      FUN_7102cd6aa0
// mangled:   
// signature: undefined __cdecl FUN_7102cd6aa0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7102cd6aa0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  char local_98 [64];
  ulong local_58 [3];
  
  puVar7 = *(uint **)(*param_1 + 0x340);
  uVar10 = *puVar7;
  *puVar7 = puVar7[1];
  uVar2 = puVar7[3];
  uVar10 = uVar10 ^ uVar10 << 0xb;
  uVar6 = uVar10 ^ uVar10 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  uVar10 = uVar6 & 3;
  puVar7[1] = puVar7[2];
  puVar7[2] = uVar2;
  puVar7[3] = uVar6;
  uVar6 = 0;
  while( true ) {
    *(uint *)(param_1[1] + 0xc) = uVar10;
    uVar2 = uVar10 + 4;
    if (-1 < (int)(uVar10 + 1)) {
      uVar2 = uVar10 + 1;
    }
    lVar8 = param_1[1];
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0xc) + *(int *)(lVar8 + 8) * 4;
    puVar7 = (uint *)param_1[1];
    if ((puVar7[1] & 1 << (ulong)(puVar7[5] & 0x1f)) != 0) break;
    uVar1 = uVar6 + 1;
    uVar10 = (uVar10 + 1) - (uVar2 & 0xfffffffc);
    bVar3 = 0x62 < uVar6;
    uVar6 = uVar1;
    if (bVar3) {
      local_58[1] = 0;
      local_58[2] = 0;
      local_98[0x38] = '\0';
      local_98[0x39] = '\0';
      local_98[0x3a] = '\0';
      local_98[0x3b] = '\0';
      local_98[0x3c] = '\0';
      local_98[0x3d] = '\0';
      local_98[0x3e] = '\0';
      local_98[0x3f] = '\0';
      local_58[0] = 0;
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[0x28] = '\0';
      local_98[0x29] = '\0';
      local_98[0x2a] = '\0';
      local_98[0x2b] = '\0';
      local_98[0x2c] = '\0';
      local_98[0x2d] = '\0';
      local_98[0x2e] = '\0';
      local_98[0x2f] = '\0';
      local_98[0x30] = '\0';
      local_98[0x31] = '\0';
      local_98[0x32] = '\0';
      local_98[0x33] = '\0';
      local_98[0x34] = '\0';
      local_98[0x35] = '\0';
      local_98[0x36] = '\0';
      local_98[0x37] = '\0';
      local_98[0x18] = '\0';
      local_98[0x19] = '\0';
      local_98[0x1a] = '\0';
      local_98[0x1b] = '\0';
      local_98[0x1c] = '\0';
      local_98[0x1d] = '\0';
      local_98[0x1e] = '\0';
      local_98[0x1f] = '\0';
      local_98[0x20] = '\0';
      local_98[0x21] = '\0';
      local_98[0x22] = '\0';
      local_98[0x23] = '\0';
      local_98[0x24] = '\0';
      local_98[0x25] = '\0';
      local_98[0x26] = '\0';
      local_98[0x27] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      local_98[0x10] = '\0';
      local_98[0x11] = '\0';
      local_98[0x12] = '\0';
      local_98[0x13] = '\0';
      local_98[0x14] = '\0';
      local_98[0x15] = '\0';
      local_98[0x16] = '\0';
      local_98[0x17] = '\0';
      param_6 = (ulong)puVar7[2];
      param_4 = (byte ****)(ulong)*puVar7;
      param_5 = (long ****)(ulong)puVar7[1];
      param_3 = (long ****)"TYPE:[%d]  ROUTE:[%d]  CURRENT_GROUP[%d]\n";
      snprintf(local_98,0x40,"TYPE:[%d]  ROUTE:[%d]  CURRENT_GROUP[%d]\n",*puVar7,puVar7[1],
               puVar7[2]);
      std::string::assign((char *)local_58);
      if (((local_58[0] & 1) != 0) && (local_58[2] != 0)) {
        FUN_710392eb40(local_58[2]);
      }
    }
  }
  puVar4 = FUN_7102cd7870((ulong *)(param_1 + 3),puVar7[5],param_3,param_4,param_5,param_6,param_7,
                          param_8);
  if (param_1[0xb] != 0) {
    FUN_71025eaba0(param_1[0xb] + 0x60,(long ****)*puVar4,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if (param_1[0xb] != 0) {
      plVar9 = *(long **)(param_1[0xb] + 0xd8);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if (*(char *)(plVar9[1] + 0xa8) != '\0') {
        plVar5 = *(long **)(plVar9[1] + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
        if (*(char *)(plVar9[1] + 0xa8) != '\0') {
          plVar5 = *(long **)(plVar9[1] + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5,1);
          (**(code **)(*plVar5 + 0x10))(plVar5,2);
        }
      }
      *(undefined1 *)(plVar9 + 4) = 0;
    }
  }
  return;
}

