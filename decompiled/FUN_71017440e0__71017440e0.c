// addr:      71017440e0
// offset:    0x17440e0
// name:      FUN_71017440e0
// mangled:   
// signature: undefined __cdecl FUN_71017440e0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017440e0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint local_a8 [2];
  Any64BitId local_a0 [64];
  ulong *local_60;
  ulong local_58;
  
  FUN_710375aa90((long *)&local_60,"sum_playcount",param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2 = local_60;
  puVar6 = *(undefined8 **)(*DAT_7105314510 + 600);
  lVar5 = 0;
  lVar4 = 0;
  do {
    lVar7 = *(long *)*puVar6;
    local_a0[0] = (Any64BitId)0x0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_710062dc20(local_a8,"mode_%02d");
    local_58 = (ulong)*(uint *)(lVar7 + lVar5);
    nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),local_a0);
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 8;
  } while (lVar4 != 0x44);
  iVar1 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar1 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar1)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_60 + 0x4020));
  local_60 = (ulong *)0x0;
  uVar3 = *puVar2;
  *puVar2 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_710392eb40((ulong)puVar2);
  return;
}

