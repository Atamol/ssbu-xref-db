// addr:      71001640a0
// offset:    0x1640a0
// name:      FUN_71001640a0
// mangled:   
// signature: undefined __cdecl FUN_71001640a0(long param_1)


void FUN_71001640a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_7100154ca0("[Analysis] ------ BEGIN(Pia Connection info, %d.%03d sec. passed) ------");
  FUN_7100154ca0("[Analysis] StationIndex,  RTT,  RttMin,  RttMax,  PacketLoss");
  lVar1 = 0;
  lVar2 = param_1 + 0x10;
  do {
    if (*(char *)(lVar2 + 0xc) != '\0') {
      FUN_7100154ca0("[Analysis]         0x%02x, %4d,    %4d,    %4d,      %6.2f");
    }
    lVar1 = lVar1 + 1;
    lVar2 = lVar2 + 0x20;
  } while (lVar1 != 0x20);
  FUN_7100154ca0("[Analysis] ---------------------------- END ----------------------------");
  return;
}

