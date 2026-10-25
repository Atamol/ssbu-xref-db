// addr:      710337d360
// offset:    0x337d360
// name:      FUN_710337d360
// mangled:   
// signature: undefined __cdecl FUN_710337d360(undefined8 * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710337d360(undefined8 *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined **local_30;
  ulong local_28;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar3 = DAT_7105307b68._4_4_;
  FUN_7103776390(&local_30,param_1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar1 = "keyhelp_gc";
  if (iVar3 != 6) {
    pcVar1 = "keyhelp_normal";
  }
  FUN_7103778300(0x3f800000,local_28,(long)pcVar1);
  uVar2 = local_28;
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

