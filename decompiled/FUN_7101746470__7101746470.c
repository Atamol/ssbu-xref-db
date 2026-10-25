// addr:      7101746470
// offset:    0x1746470
// name:      FUN_7101746470
// mangled:   
// signature: undefined __cdecl FUN_7101746470(undefined8 param_1, undefined1 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101746470(undefined8 param_1,undefined1 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  uint local_90 [2];
  Any64BitId local_88 [64];
  ulong *local_48;
  
  FUN_710375aa90((long *)&local_48,"highscore_update",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar2 = local_48;
  local_88[0] = (Any64BitId)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)&DAT_7104292688);
  FUN_710062dc20(local_90,"fighter_%d");
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),param_2);
  nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),local_88);
  FUN_710062dc20(local_90,"fighter_color_%d");
  nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),local_88);
  nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"score");
  nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"cleared");
  nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"param");
  iVar1 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar1 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar1)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_48 + 0x4020));
  local_48 = (ulong *)0x0;
  if (puVar2 != (ulong *)0x0) {
    uVar3 = *puVar2;
    *puVar2 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  return;
}

