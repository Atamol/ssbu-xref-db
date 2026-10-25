// addr:      7100120b00
// offset:    0x120b00
// name:      FUN_7100120b00
// mangled:   
// signature: undefined FUN_7100120b00(void)


undefined8 FUN_7100120b00(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  ErrorResultVariant *this;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    pcVar9 = FUN_71001429b0;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x6c);
    FUN_71000bcf30(piVar3,param_2);
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    if (*(int *)(param_1 + 0x6c) != aiStack_50[0]) {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
      *(byte *)(param_1 + 0x82) = bVar2;
      lVar4 = DAT_71052adb38;
      if (bVar2 < 3) {
        puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
        *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
        FUN_7100150b70((long *)*puVar1);
        (**(code **)(**(long **)(lVar4 + 8) + 0x28))();
        aiStack_50[0] = 0x6c3d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
        if ((*param_2 == aiStack_50[0]) || (*(char *)(param_1 + 0x82) != '\x01')) {
          FUN_710011beb0(*(long *)(param_1 + 0x178),*(undefined4 *)(param_1 + 100));
          pcVar9 = FUN_7100120290;
          uVar6 = 5;
          pcVar10 = "LanMatchRandomMatchmakeJob::RandomMatchmake";
        }
        else {
          lVar7 = FUN_7100193580(DAT_71052adfc0);
          lVar4 = DAT_71052ac580;
          iVar5 = *(int *)(lVar7 + 0x68);
          plVar8 = FUN_71000bb680();
          *(long *)(param_1 + 0x180) = *(long *)(lVar4 + 0x30) + *plVar8 * ((long)iVar5 + 9000);
          FUN_710011bec0(*(long *)(param_1 + 0x178),*(undefined4 *)(param_1 + 100));
          pcVar9 = FUN_7100120d70;
          uVar6 = 5;
          pcVar10 = "LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake";
        }
        goto LAB_7100120be8;
      }
      aiStack_50[0] = 0x6c3d;
      this = (ErrorResultVariant *)((ulong)aiStack_50 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
      if (*piVar3 == aiStack_50[0]) {
        aiStack_50[0] = 0x6c4c;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
        FUN_71000bcf30(piVar3,aiStack_50);
      }
    }
    FUN_710011bb20(*(long *)(param_1 + 0x178));
    pcVar9 = FUN_7100120eb0;
    uVar6 = 5;
    pcVar10 = "LanMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  }
LAB_7100120be8:
  *(code **)(param_1 + 0x30) = pcVar9;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar10;
  return uVar6;
}

