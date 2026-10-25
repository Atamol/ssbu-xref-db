// addr:      710011dc10
// offset:    0x11dc10
// name:      FUN_710011dc10
// mangled:   
// signature: undefined FUN_710011dc10(void)


void FUN_710011dc10(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                   ushort param_6,long param_7)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  puVar1 = (undefined8 *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0xb8) != 0) {
    if (*(undefined8 **)(param_2 + 0xb0) != puVar1) {
      puVar5 = *(undefined8 **)(param_2 + 0xb0);
      do {
        puVar7 = (undefined8 *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_71000b70c0(param_2 + 0xc0,param_2 + 0xc0,
                       (long *)((long)*(int *)(param_2 + 0xd4) + (long)puVar5));
        puVar5 = puVar7;
      } while (puVar7 != puVar1);
    }
    FUN_71000b7080((long)puVar1);
  }
  if (param_6 != 0) {
    lVar9 = *(long *)(DAT_71052adb38 + 0xf0);
    bVar2 = false;
    bVar3 = false;
    uVar8 = (ulong)param_6;
    do {
      if (*(int *)(param_2 + 0xd0) != 0) {
        plVar4 = FUN_71000b71c0((undefined8 *)(param_2 + 0xc0));
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = (long *)((long)plVar4 - (long)*(int *)(param_2 + 0xd4));
        }
        plVar4[2] = 0;
        FUN_71000b7090((long)puVar1,puVar1,plVar4);
        lVar6 = *param_5;
        plVar4[2] = lVar6;
        bVar2 = (bool)(bVar2 | lVar6 == param_7);
        bVar3 = (bool)(bVar3 | lVar6 == lVar9);
      }
      param_5 = param_5 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if ((bVar2) && (bVar3)) {
      *(undefined4 *)(param_2 + 0xf0) = 0;
      *(code **)(param_2 + 0x30) = FUN_710011ddb0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LanMatchJointSessionJob::CallSessionEvent";
      aiStack_78[0] = 0;
      goto LAB_710011dd5c;
    }
  }
  aiStack_78[0] = 0x10c07;
LAB_710011dd5c:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  auStack_68[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_68);
  FUN_71000bce50(param_1,aiStack_78);
  return;
}

