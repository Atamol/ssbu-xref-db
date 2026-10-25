// addr:      710017e100
// offset:    0x17e100
// name:      FUN_710017e100
// mangled:   
// signature: undefined FUN_710017e100(void)


void FUN_710017e100(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  uint uVar7;
  int aiStack_98 [4];
  int iStack_88;
  int aiStack_80 [4];
  byte bStack_6e;
  undefined4 auStack_58 [2];
  
  plVar6 = (long *)param_2[2];
  aiStack_80[0] = (**(code **)(*param_2 + 0x18))();
  plVar6 = FUN_7100153d50(plVar6,aiStack_80);
  (**(code **)(*(long *)*plVar6 + 0x98))();
  uVar4 = (**(code **)(*(long *)*plVar6 + 0xa0))();
  if ((uVar4 & 1) == 0) {
    do {
      plVar1 = (long *)0x0;
      if (*(long *)(*plVar6 + 0x40) != 0) {
        plVar1 = (long *)(*plVar6 + 0x40);
      }
      bVar2 = *(byte *)(plVar1 + 6);
      uVar7 = 1;
      if ((bVar2 & 1) != 0) {
        uVar7 = 2;
      }
      if ((bVar2 & 2) != 0) {
        uVar7 = uVar7 + 2;
      }
      if ((bVar2 & 4) != 0) {
        uVar7 = uVar7 + 4;
      }
      if ((bVar2 & 8) != 0) {
        uVar7 = uVar7 + 8;
      }
      if ((bVar2 & 0x10) != 0) {
        uVar7 = uVar7 + 8;
      }
      memcpy(param_2 + 0x169,(void *)(*plVar1 + (ulong)uVar7),
             (ulong)*(ushort *)((long)plVar1 + 0x32));
      FUN_7100182940((undefined8 *)aiStack_80,param_2 + 0x169,0x5d8);
      FUN_71001829a0((long)aiStack_80);
      if (bStack_6e == 1) {
        aiStack_98[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_98 | 4));
        auStack_58[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_98 | 4),(Result *)auStack_58);
        piVar5 = aiStack_98;
        goto LAB_710017e3b4;
      }
      FUN_7100182e70((undefined8 *)aiStack_98,param_2 + 0x224,(uint)*(ushort *)((long)plVar1 + 0x32)
                    );
      bVar2 = *(byte *)(plVar1 + 6);
      uVar7 = 1;
      if ((bVar2 & 1) != 0) {
        uVar7 = 2;
      }
      if ((bVar2 & 2) != 0) {
        uVar7 = uVar7 + 2;
      }
      if ((bVar2 & 4) != 0) {
        uVar7 = uVar7 + 4;
      }
      if ((bVar2 & 8) != 0) {
        uVar7 = uVar7 + 8;
      }
      if ((bVar2 & 0x10) != 0) {
        uVar7 = uVar7 + 8;
      }
      FUN_7100182e90((undefined8 *)aiStack_98,(void *)(*plVar1 + (ulong)uVar7),
                     *(ushort *)((long)plVar1 + 0x32),(uint)bStack_6e);
      if (iStack_88 - 0x11U < 0x11) {
        switch(iStack_88) {
        case 0x11:
          (**(code **)(*param_2 + 0x1d8))(param_2,aiStack_98);
          break;
        case 0x12:
          FUN_7100180400((long)param_2,(undefined8 *)aiStack_98);
          break;
        case 0x13:
          FUN_7100180810(param_2,(undefined8 *)aiStack_98);
          break;
        case 0x21:
          FUN_7100180330((long)param_2,(undefined8 *)aiStack_98,(long)(plVar1 + 10));
        }
      }
      (**(code **)(*(long *)*plVar6 + 0xa8))();
      uVar4 = (**(code **)(*(long *)*plVar6 + 0xa0))();
    } while ((uVar4 & 1) == 0);
  }
  plVar6 = param_2 + 0x58;
  bVar3 = FUN_71000b2850((long)plVar6);
  if (bVar3) {
    bVar3 = FUN_71000b2850((long)(param_2 + 0x54));
    if ((!bVar3) || (uVar4 = FUN_71000b2b10((long)(param_2 + 0x54),(long)plVar6), (uVar4 & 1) == 0))
    goto LAB_710017e32c;
  }
  else {
LAB_710017e32c:
    bVar3 = FUN_71000b2850((long)plVar6);
    if (!bVar3) goto LAB_710017e360;
    bVar3 = FUN_71000b2850((long)(param_2 + 0x54));
    if ((!bVar3) || (uVar4 = FUN_71000b2b10((long)(param_2 + 0x54),(long)plVar6), (uVar4 & 1) != 0))
    goto LAB_710017e360;
  }
  *(undefined1 *)((long)param_2 + 0x1734) = 0;
LAB_710017e360:
  aiStack_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_80 | 4));
  aiStack_98[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_80 | 4),(Result *)aiStack_98);
  piVar5 = aiStack_80;
LAB_710017e3b4:
  FUN_71000bce50(param_1,piVar5);
  return;
}

