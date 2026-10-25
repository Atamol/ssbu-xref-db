// addr:      71001656b0
// offset:    0x1656b0
// name:      FUN_71001656b0
// mangled:   
// signature: undefined __cdecl FUN_71001656b0(undefined8 * param_1)


void FUN_71001656b0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100159ae0(param_1);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_7104f50ed8;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,0xb);
    FUN_71000bc730(lVar1,"UnreliableProtocol receive buffer num");
    return;
  }
  return;
}

