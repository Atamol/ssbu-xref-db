// addr:      71017461f0
// offset:    0x17461f0
// name:      FUN_71017461f0
// mangled:   
// signature: undefined __cdecl FUN_71017461f0(int param_1, undefined1 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017461f0(int param_1,undefined1 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  uint local_98 [2];
  Any64BitId local_90 [64];
  ulong *local_50;
  ulong local_48;
  
  FUN_710375aa90((long *)&local_50,"highscore_update",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar3 = local_50;
  local_90[0] = (Any64BitId)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_48 = (ulong)param_1;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)&DAT_7104292688);
  FUN_710062dc20(local_98,"fighter_%d");
  uVar4 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),param_2);
  uVar1 = 0xff;
  if (-1 < (int)(uint)uVar4) {
    uVar1 = (uint)uVar4 & 0xff;
  }
  local_48 = (ulong)uVar1;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),local_90);
  FUN_710062dc20(local_98,"fighter_color_%d");
  local_48 = (ulong)*(byte *)((long)param_3 + 4);
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),local_90);
  if (((ulong)param_3[1] >> 0x38 == 0xc1) && (((ulong)param_3[1] & 0xffffffffff) != 0)) {
    FUN_710062dc20(local_98,"fighter_%d");
    uVar4 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),param_2);
    uVar1 = 0xff;
    if (-1 < (int)(uint)uVar4) {
      uVar1 = (uint)uVar4 & 0xff;
    }
    local_48 = (ulong)uVar1;
    nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),local_90);
    FUN_710062dc20(local_98,"fighter_color_%d");
    local_48 = (ulong)*(byte *)(param_3 + 2);
    nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),local_90);
  }
  local_48 = (ulong)*(uint *)param_3;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"score");
  local_48 = (ulong)(*(char *)((long)param_3 + 6) != '\0');
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"cleared");
  local_48 = (ulong)*(byte *)((long)param_3 + 7);
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"param");
  iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_50 + 0x4020));
  local_50 = (ulong *)0x0;
  uVar4 = *puVar3;
  *puVar3 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_710392eb40((ulong)puVar3);
  return;
}

