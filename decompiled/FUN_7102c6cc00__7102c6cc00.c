// addr:      7102c6cc00
// offset:    0x2c6cc00
// name:      FUN_7102c6cc00
// mangled:   
// signature: undefined __cdecl FUN_7102c6cc00(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102c6cc00(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  long ****pppplVar7;
  long lVar8;
  undefined4 local_4c;
  long ***local_48;
  
  ppppbVar6 = param_4;
  pppplVar7 = param_5;
  plVar2 = (long *)FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000050;
      pppplVar5 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x50,pppplVar5,ppppbVar6,pppplVar7,param_6,param_7,
                                          param_8), plVar2 != (long *)0x0)) goto LAB_7102c6cc88;
    }
    plVar2 = (long *)0x0;
  }
LAB_7102c6cc88:
  *plVar2 = param_2;
  plVar2[1] = 0;
  plVar2[2] = -0x100000000;
  plVar2[5] = (long)param_4[1];
  plVar2[4] = (long)*param_4;
  plVar2[7] = (long)param_5[1];
  plVar2[8] = 0;
  plVar2[6] = (long)*param_5;
  plVar4 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
  do {
    if (plVar4 == *(long **)(*(long *)(param_2 + 0x310) + 0xd8)) {
      plVar2[1] = 0;
LAB_7102c6ccfc:
      uVar1 = 0xffffffff;
LAB_7102c6cd00:
      *(undefined4 *)((long)plVar2 + 0x14) = uVar1;
      local_48 = (long ***)0x0;
      lVar8 = *(long *)(**(long **)(param_2 + 0x338) + 8);
      if (lVar8 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = FUN_7102405040(lVar8,&local_48,0,ppppbVar6,pppplVar7,param_6,param_7,param_8);
      }
      *(undefined4 *)(plVar2 + 2) = uVar1;
      *(undefined4 *)(plVar2 + 8) = *(undefined4 *)((long)param_3 + 300);
      lVar8 = plVar2[1];
      *(undefined1 *)((long)plVar2 + 0x44) = *(undefined1 *)(param_3 + 0x25);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0xd8) != 0)) {
        FUN_7102610070(lVar8,(byte *)"queen_set_wait");
        if (plVar2[1] == 0) {
          lVar8 = 0;
        }
        else {
          FUN_71025ee080(plVar2[1] + 0x60,(byte *)"queen_set_wait",0);
          lVar8 = plVar2[1];
        }
        FUN_710260fdd0(0,lVar8,1);
        lVar8 = plVar2[1];
        if (lVar8 == 0) {
          *(undefined1 *)((long)plVar2 + 0x46) = 1;
        }
        else {
          if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar8 + 200) + 0x32) = 0x101;
          }
          if (*(long *)(lVar8 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x22) = 1;
          }
          lVar8 = plVar2[1];
          *(undefined1 *)((long)plVar2 + 0x46) = 1;
          if (lVar8 != 0) {
            if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar8 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar8 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
            }
          }
        }
      }
      *param_1 = plVar2;
      return;
    }
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar8 = *plVar4, *(long *)(lVar8 + 0x68) == 0x9c8ef8b71)) {
      plVar2[1] = lVar8;
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0xd8) == 0)) goto LAB_7102c6ccfc;
      plVar4 = *(long **)(*(long *)(*(long *)(lVar8 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,"BottomJaw_1_end");
      goto LAB_7102c6cd00;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}

