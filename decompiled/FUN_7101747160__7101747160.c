// addr:      7101747160
// offset:    0x1747160
// name:      FUN_7101747160
// mangled:   
// signature: undefined __cdecl FUN_7101747160(ulong param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101747160(ulong param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *local_30;
  ulong local_28;
  
  FUN_710375aa90((long *)&local_30,"post_share",param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2 = local_30;
  local_28 = param_1 & 0xffff;
  nn::prepo::PlayReport::Add((char *)(*local_30 + 0x4020),(Any64BitId *)"data_type");
  iVar1 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar1 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar1)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_30 + 0x4020));
  local_30 = (ulong *)0x0;
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

