// addr:      71000134b0
// offset:    0x134b0
// name:      FUN_71000134b0
// mangled:   
// signature: undefined4 __cdecl FUN_71000134b0(long * param_1, ulong param_2, byte * param_3)


undefined4 FUN_71000134b0(long *param_1,ulong param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  plVar1 = (long *)(*param_1 + 0x4c80);
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)(*param_1 + 0x4c40);
  }
  bVar3 = FUN_7100017490((byte *)"Digest",param_3,6);
  if (bVar3) {
    pbVar5 = param_3 + 6;
    bVar2 = *pbVar5;
    if (4 < bVar2 - 9) goto LAB_710001351c;
    do {
      do {
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
      } while (bVar2 - 9 < 5);
LAB_710001351c:
    } while (bVar2 == 0x20);
    uVar4 = FUN_7100024770(pbVar5,plVar1);
    return uVar4;
  }
  return 0x3d;
}

