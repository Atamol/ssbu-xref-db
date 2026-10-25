// addr:      7100196770
// offset:    0x196770
// name:      FUN_7100196770
// mangled:   
// signature: undefined __cdecl FUN_7100196770(undefined8 * param_1)


void FUN_7100196770(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100156390(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_thunk_FUN_71001563d0_7104f54248;
  param_1[0xd] = 0x3e800000000;
  param_1[0xe] = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xaa) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,9);
    FUN_71000bc730(lVar1,"MeshProtocolReliable send buffer num");
    if (DAT_71052accf8 != 0) {
      lVar1 = FUN_71000bc710(DAT_71052accf8,10);
      FUN_71000bc730(lVar1,"MeshProtocolReliable receive buffer num");
      return;
    }
  }
  return;
}

