// addr:      7101747230
// offset:    0x1747230
// name:      FUN_7101747230
// mangled:   
// signature: undefined __cdecl FUN_7101747230(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101747230(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *local_58;
  
  if (DAT_71074470e0 != 0) {
    FUN_710375aa90((long *)&local_58,"tournament_entry",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar1 = local_58;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71052b92e0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"app_version");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"tournament_id");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"evend_id");
    puVar1 = local_58;
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),(Any64BitId *)"rating");
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),(Any64BitId *)"match_result");
    lVar3 = nn::os::GetSystemTick();
    nn::os::ConvertToTimeSpan(lVar3 - DAT_71074470e8);
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),0x7104400b13);
    DAT_71074470e0 = 0;
    iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*local_58 + 0x4020));
    local_58 = (ulong *)0x0;
    if (puVar1 != (ulong *)0x0) {
      uVar4 = *puVar1;
      *puVar1 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40((ulong)puVar1);
    }
  }
  return;
}

