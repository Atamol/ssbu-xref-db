// addr:      710011d1c0
// offset:    0x11d1c0
// name:      FUN_710011d1c0
// mangled:   
// signature: undefined8 __cdecl FUN_710011d1c0(long param_1, int * param_2)


undefined8 FUN_710011d1c0(long param_1,int *param_2)

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
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    local_48[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    FUN_71000bcf30((int *)(param_1 + 0x120),local_48);
    pcVar9 = FUN_710013e970;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x120);
    FUN_71000bcf30(piVar3,param_2);
    local_48[0] = 0x6838;
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
    if (*(int *)(param_1 + 0x120) != local_48[0]) {
      local_48[0] = 0x6c3d;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
      if (*piVar3 == local_48[0]) {
        local_48[0] = 0x6c4c;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4))
        ;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
        FUN_71000bcf30(piVar3,local_48);
      }
      else {
        local_48[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4))
        ;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
        if ((*piVar3 != local_48[0]) &&
           (bVar2 = *(char *)(param_1 + 0x11f) + 1, *(byte *)(param_1 + 0x11f) = bVar2,
           lVar4 = DAT_71052adb38, bVar2 < 2)) {
          puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
          *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
          FUN_7100150b70((long *)*puVar1);
          (**(code **)(**(long **)(lVar4 + 8) + 0x28))();
          lVar7 = FUN_7100193580(DAT_71052adfc0);
          lVar4 = DAT_71052ac580;
          iVar5 = *(int *)(lVar7 + 0x68);
          plVar8 = FUN_71000bb680();
          uVar6 = 5;
          *(long *)(param_1 + 0x140) = *(long *)(lVar4 + 0x30) + *plVar8 * ((long)iVar5 + 9000);
          pcVar9 = FUN_710011d3f0;
          pcVar10 = "LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession";
          goto LAB_710011d3c8;
        }
      }
    }
    pcVar9 = FUN_710013f360;
    uVar6 = 5;
    pcVar10 = "LanMatchJoinSessionJob::MeshCleanup";
  }
LAB_710011d3c8:
  *(code **)(param_1 + 0x30) = pcVar9;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar10;
  return uVar6;
}

