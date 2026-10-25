// addr:      7101746ff0
// offset:    0x1746ff0
// name:      FUN_7101746ff0
// mangled:   
// signature: undefined __cdecl FUN_7101746ff0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101746ff0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  uint local_88 [2];
  Any64BitId local_80 [64];
  ulong *local_40;
  undefined8 local_38;
  
  FUN_710375aa90((long *)&local_40,"show_shop",param_3,param_4,param_5,param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar1 = local_40;
  nn::prepo::PlayReport::Add((char *)(*local_40 + 0x4020),0x710445421c);
  local_80[0] = (Any64BitId)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_710062dc20(local_88,"ns_uid_%02d");
  local_38 = *param_1;
  nn::prepo::PlayReport::Add((char *)(*local_40 + 0x4020),local_80);
  iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_40 + 0x4020));
  local_40 = (ulong *)0x0;
  if (puVar1 != (ulong *)0x0) {
    uVar3 = *puVar1;
    *puVar1 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40((ulong)puVar1);
  }
  return;
}

