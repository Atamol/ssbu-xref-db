// addr:      7100158790
// offset:    0x158790
// name:      FUN_7100158790
// mangled:   
// signature: undefined __cdecl FUN_7100158790(undefined8 * param_1)


void FUN_7100158790(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100159ae0(param_1);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *param_1 = &PTR_FUN_7104f50758;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,3);
    FUN_71000bc730(lVar1,"ReliableProtocol send buffer num");
    if (DAT_71052accf8 != 0) {
      lVar1 = FUN_71000bc710(DAT_71052accf8,4);
      FUN_71000bc730(lVar1,"ReliableProtocol receive buffer num");
      return;
    }
  }
  return;
}

