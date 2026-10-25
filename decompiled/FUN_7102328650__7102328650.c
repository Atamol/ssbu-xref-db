// addr:      7102328650
// offset:    0x2328650
// name:      FUN_7102328650
// mangled:   
// signature: undefined __cdecl FUN_7102328650(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102328650(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_88;
  byte local_80 [64];
  
  plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = local_d0 & 0xffffffff00000000;
      local_88 = (long ***)&DAT_00000010;
      param_3 = (long ****)&local_88;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar3 != (long *)0x0)) goto LAB_71023286d0;
    }
    plVar3 = (long *)0x0;
  }
LAB_71023286d0:
  *plVar3 = param_1 + 0x50;
  *(undefined4 *)(plVar3 + 1) = 0;
  FUN_7103723a90(param_1 + 0x50,&DAT_71053288c8,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar5 = (undefined8 *)(**(code **)*puVar9)(puVar9); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      if ((undefined8 **)puVar5 == &DAT_7105328158) {
        if ((*(int *)(puVar9 + 1) == 0x6d874d01) &&
           (iVar2 = strcmp((char *)(puVar9 + 2),"HomeRunContestScene"), iVar2 == 0)) {
          *(undefined4 *)(plVar3 + 1) = 2;
          goto LAB_71023288e8;
        }
        break;
      }
    }
  }
  lVar13 = *(long *)(DAT_710532f7d8 + 8);
  uVar12 = 0x811c9dc5;
  std::mutex::lock();
  *(uint *)(lVar13 + 0xe8) = *(uint *)(lVar13 + 0xe8) | 1;
  *(undefined1 *)(lVar13 + 0xf1) = 1;
  *(undefined1 *)(lVar13 + 0xf3) = 1;
  *(undefined1 *)(lVar13 + 0xf5) = 0;
  *(undefined1 *)(*(long *)(*(long *)(lVar13 + 0xa0) + 0x80) + 0x1cc) =
       *(undefined1 *)(lVar13 + 0xf4);
  *(undefined4 *)(lVar13 + 0xec) = 0xffffffff;
  *(undefined8 *)(lVar13 + 0xf8) = 0x8ffff0000000000;
  *(undefined4 *)(lVar13 + 0x100) = 7;
  std::mutex::unlock();
  lVar10 = *plVar3;
  uStack_c8 = 0x436e7552656d6f48;
  local_c0 = 0x6353747365746e6f;
  uVar7 = 0x48;
  lVar13 = 9;
  local_b8 = 0x656e65;
  uVar8 = uVar12;
  do {
    uVar8 = uVar8 * 0x89 ^ uVar7;
    uVar7 = (uint)*(byte *)((long)&local_d0 + lVar13);
    lVar13 = lVar13 + 1;
  } while (uVar7 != 0);
  local_d0 = CONCAT44(0x13,uVar8);
  lVar13 = *(long *)(lVar10 + 0x38);
  if (lVar13 == 0) {
    local_80[0] = 0;
    local_88 = (long ***)0x0;
  }
  else {
    uVar4 = 0;
    while( true ) {
      pbVar6 = (byte *)(lVar13 + 0x10 + uVar4);
      bVar1 = *pbVar6;
      if (bVar1 == 0) break;
      local_80[uVar4] = bVar1;
      if (0x3e < (int)uVar4 + 1U) {
        uVar4 = (ulong)((int)uVar4 + 1);
        break;
      }
      bVar1 = pbVar6[1];
      if (bVar1 == 0) {
        uVar4 = uVar4 + 1;
        break;
      }
      local_80[uVar4 + 1] = bVar1;
      uVar4 = uVar4 + 2;
    }
    local_80[uVar4 & 0xffffffff] = 0;
    uVar8 = (uint)local_80[0];
    local_88 = (long ***)(uVar4 << 0x20);
    if (local_80[0] != 0) {
      pbVar6 = local_80;
      do {
        pbVar6 = pbVar6 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar6;
      } while (uVar8 != 0);
    }
    local_88 = (long ***)CONCAT44((int)uVar4,uVar12);
  }
  param_3 = (long ****)&local_88;
  param_4 = (byte ****)0x0;
  FUN_71037266d0(*(long *)(lVar10 + 0x20),&local_d0,param_3,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  *(undefined4 *)(lVar10 + 0x30) = 1;
LAB_71023288e8:
  plVar11 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  if (plVar11 != (long *)0x0) {
    FUN_7103723e70(*plVar11,&DAT_71053288c8,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40((ulong)plVar11);
    return;
  }
  return;
}

