// addr:      710161de00
// offset:    0x161de00
// name:      FUN_710161de00
// mangled:   
// signature: ulong __cdecl FUN_710161de00(long * param_1, ulong param_2, undefined8 param_3)


ulong FUN_710161de00(long *param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_38;
  
  uVar4 = (**(code **)(*param_1 + 0x78))();
  if ((uVar4 & 1) == 0) {
    local_38 = 0;
    uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_71037278a0((long *)param_1[2],0x17c17f5360,(long *)&local_38,"ip",
                             param_2 & 0xffffffff,param_3,in_x6,in_x7);
      uVar4 = (ulong)uVar3;
      uVar2 = local_38;
    }
    else {
      uVar4 = FUN_710372e100(param_1[0x3b],0x17c17f5360,&local_38,0x71043acdd1,param_2 & 0xffffffff,
                             param_3,in_x6,in_x7);
      uVar2 = local_38;
    }
    if (uVar2 != 0) {
      lVar6 = *(long *)(uVar2 + 0x10);
      lVar5 = 0;
      local_38 = uVar2;
      do {
        cVar1 = *(char *)(lVar6 + lVar5);
        if (cVar1 == 's') {
          lVar7 = *(long *)(uVar2 + 8);
          uVar4 = *(ulong *)(lVar7 + lVar5 * 8);
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          *(undefined8 *)(lVar7 + lVar5 * 8) = 0;
        }
        else if (cVar1 == '\0') {
          if (local_38 == 0) {
            return 0;
          }
          uVar4 = FUN_710392eb40(local_38);
          return uVar4;
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
  }
  return uVar4;
}

