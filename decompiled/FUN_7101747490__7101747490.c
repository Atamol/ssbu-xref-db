// addr:      7101747490
// offset:    0x1747490
// name:      FUN_7101747490
// mangled:   
// signature: undefined __cdecl FUN_7101747490(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101747490(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *local_48;
  
  if (DAT_710509e4a8 != 0) {
    FUN_710375aa90((long *)&local_48,"competition_entry",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar1 = local_48;
    lVar4 = DAT_710533a0a0;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71052b92e0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"app_version");
    if (((*(long **)(lVar4 + 0x30) != (long *)0x0) &&
        (lVar4 = **(long **)(lVar4 + 0x30), lVar4 != 0)) && (*(long *)(lVar4 + 0x40) != 0)) {
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gathering_id");
    }
    puVar1 = local_48;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gamemode");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"event_id");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"min_players");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"max_players");
    NEON_ucvtf(*(undefined4 *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xa8) + 0x2984));
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"rating");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"country");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"match_result");
    lVar4 = nn::os::GetSystemTick();
    nn::os::ConvertToTimeSpan(lVar4 - DAT_71074470e8);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x7104400b13);
    DAT_710509e4a8 = 0;
    iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*puVar1 + 0x4020));
    puVar1 = local_48;
    local_48 = (ulong *)0x0;
    if (puVar1 != (ulong *)0x0) {
      uVar3 = *puVar1;
      *puVar1 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40((ulong)puVar1);
    }
  }
  return;
}

