// addr:      7102c75460
// offset:    0x2c75460
// name:      FUN_7102c75460
// mangled:   
// signature: undefined __cdecl FUN_7102c75460(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102c75460(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long ****pppplVar5;
  long lVar6;
  undefined4 local_34;
  long ***local_28;
  
  plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_28 = (long ***)&SUB_00000020;
      pppplVar5 = &local_28;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), plVar2 != (long *)0x0)) goto LAB_7102c754d8;
    }
    plVar2 = (long *)0x0;
  }
LAB_7102c754d8:
  *plVar2 = param_2;
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 2) = 0;
  *(undefined8 *)((long)plVar2 + 0x14) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x1c) = 0;
  plVar4 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
  do {
    if (plVar4 == *(long **)(*(long *)(param_2 + 0x310) + 0xd8)) {
      plVar2[1] = 0;
LAB_7102c75534:
      uVar1 = 0xffffffff;
LAB_7102c75538:
      *(undefined4 *)((long)plVar2 + 0x14) = uVar1;
      local_28 = (long ***)0x0;
      lVar6 = *(long *)(**(long **)(param_2 + 0x338) + 8);
      if (lVar6 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = FUN_7102405040(lVar6,&local_28,0,param_4,param_5,param_6,param_7,param_8);
      }
      *(undefined4 *)(plVar2 + 2) = uVar1;
      lVar6 = plVar2[1];
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0xd8) != 0)) {
        FUN_7102610070(lVar6,(byte *)"queen_set_wait");
        if (plVar2[1] == 0) {
          lVar6 = 0;
        }
        else {
          FUN_71025ee080(plVar2[1] + 0x60,(byte *)"queen_set_wait",0);
          lVar6 = plVar2[1];
        }
        FUN_710260fdd0(0,lVar6,1);
        lVar6 = plVar2[1];
        if (lVar6 == 0) {
          *(undefined1 *)((long)plVar2 + 0x19) = 1;
        }
        else {
          if ((*(char *)(lVar6 + 0xe0) != '\0') && (*(long *)(lVar6 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar6 + 200) + 0x32) = 0x101;
          }
          if (*(long *)(lVar6 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar6 + 0xd8) + 0x22) = 1;
          }
          lVar6 = plVar2[1];
          *(undefined1 *)((long)plVar2 + 0x19) = 1;
          if (lVar6 != 0) {
            if ((*(char *)(lVar6 + 0xe0) != '\0') && (*(long *)(lVar6 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar6 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar6 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar6 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar6 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar6 + 0xb0) + 0x10) = 1;
            }
          }
        }
      }
      *param_1 = plVar2;
      return;
    }
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar6 = *plVar4, *(long *)(lVar6 + 0x68) == 0x9c8ef8b71)) {
      plVar2[1] = lVar6;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0xd8) == 0)) goto LAB_7102c75534;
      plVar4 = *(long **)(*(long *)(*(long *)(lVar6 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,"BottomJaw_1_end");
      goto LAB_7102c75538;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}

