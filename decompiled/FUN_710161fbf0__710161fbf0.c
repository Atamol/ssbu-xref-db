// addr:      710161fbf0
// offset:    0x161fbf0
// name:      FUN_710161fbf0
// mangled:   
// signature: ulong __cdecl FUN_710161fbf0(long * param_1, undefined8 param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710161fbf0(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_48;
  
  uVar4 = (**(code **)(*param_1 + 0x78))();
  if ((uVar4 & 1) == 0) {
    local_48 = 0;
    uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_71037278a0((long *)param_1[2],0x2199ebc1b2,(long *)&local_48,"ffffi",
                             param_4 & 0xffffffff,param_6,param_7,param_8);
      uVar4 = (ulong)uVar3;
      uVar2 = local_48;
    }
    else {
      uVar4 = FUN_710372e100(param_1[0x3b],0x2199ebc1b2,&local_48,0x710425e9a3,param_4 & 0xffffffff,
                             param_6,param_7,param_8);
      uVar2 = local_48;
    }
    if (uVar2 != 0) {
      lVar6 = *(long *)(uVar2 + 0x10);
      lVar5 = 0;
      local_48 = uVar2;
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
          if (local_48 == 0) {
            return 0;
          }
          uVar4 = FUN_710392eb40(local_48);
          return uVar4;
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
  }
  return uVar4;
}

