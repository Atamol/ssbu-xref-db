// addr:      71000f0ae0
// offset:    0xf0ae0
// name:      FUN_71000f0ae0
// mangled:   
// signature: ulong __cdecl FUN_71000f0ae0(long param_1)


ulong FUN_71000f0ae0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ErrorResultVariant *this;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  long local_80 [2];
  int local_70 [4];
  ulong local_60;
  undefined4 local_58 [2];
  
  plVar1 = DAT_71052acd90;
  plVar9 = (long *)(param_1 + 0x80);
  iVar6 = FUN_71001602e0((long)plVar9);
  uVar7 = FUN_71000c5330((long)plVar1,iVar6);
  if ((uVar7 & 1) == 0) {
    local_60 = 0;
    FUN_71000bb5d0(&local_60);
    if ((local_60 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar14 = 0x640000;
      uVar7 = 4;
      goto LAB_71000f0dfc;
    }
    piVar11 = (int *)(param_1 + 0x108);
    lVar8 = FUN_7100161fb0(DAT_71052add68);
    bVar3 = FUN_71001603a0((long)plVar9,lVar8 + 8);
    FUN_71000bce50(local_70,(int *)(param_1 + 0x10c));
    if (*(int *)(param_1 + 0x108) == 3) {
      this = (ErrorResultVariant *)((ulong)local_80 | 4);
      local_80[0] = CONCAT44(local_80[0]._4_4_,0x644a);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_58[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_58);
      plVar1 = DAT_71052acd90;
      if (local_70[0] != (int)local_80[0]) {
        if (*piVar11 == 3) {
          local_80[0] = CONCAT44(local_80[0]._4_4_,0x6434);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_80 | 4));
          local_58[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_58);
          if (local_70[0] == (int)local_80[0]) goto LAB_71000f0cfc;
        }
        goto LAB_71000f0c80;
      }
      local_80[0] = CONCAT44(local_80[0]._4_4_,0x644a);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_58[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_58);
      FUN_71000bce50(aiStack_90,(int *)local_80);
      FUN_71000c5af0((long)plVar1,plVar9,aiStack_90,0);
    }
    else {
LAB_71000f0c80:
      lVar8 = FUN_7100161fb0(DAT_71052add68);
      bVar5 = FUN_7100160340(lVar8 + 8);
      if (((bVar5 & 1) == 0) || (bVar5 = FUN_7100160340((long)plVar9), (bVar5 & 1) == 0)) {
        uVar12 = 0x643f;
      }
      else {
        iVar6 = FUN_71000c4cd0((long)DAT_71052acd90);
        if ((iVar6 == 2) && (bVar4 = FUN_7100160300((long)plVar9), bVar4)) {
          if (bVar3) {
            uVar12 = 0x646a;
          }
          else {
            uVar12 = 0x6445;
          }
        }
        else {
          iVar6 = FUN_71000c4cd0((long)DAT_71052acd90);
          if ((iVar6 == 2) && (bVar4 = FUN_7100160320((long)plVar9), bVar4)) {
            if (bVar3) {
              uVar12 = 0x6469;
            }
            else {
              uVar12 = 0x6444;
            }
          }
          else {
            iVar6 = FUN_71000c4cd0((long)DAT_71052acd90);
            if ((iVar6 == 1) && (bVar4 = FUN_7100160300((long)plVar9), bVar4)) {
              if (bVar3) {
                uVar12 = 0x6468;
              }
              else {
                uVar12 = 0x6443;
              }
            }
            else {
              iVar6 = FUN_71000c4cd0((long)DAT_71052acd90);
              if ((iVar6 != 1) || (bVar4 = FUN_7100160320((long)plVar9), !bVar4))
              goto LAB_71000f0cfc;
              if (bVar3) {
                uVar12 = 0x6467;
              }
              else {
                uVar12 = 0x6442;
              }
            }
          }
        }
      }
      local_80[0] = CONCAT44(local_80[0]._4_4_,uVar12);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_80 | 4));
      local_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_58);
      FUN_71000bcf30(local_70,(int *)local_80);
    }
LAB_71000f0cfc:
    FUN_71000c5390((long)DAT_71052acd90,plVar9,1,1);
    iVar6 = *(int *)(param_1 + 0x140);
    if (0 < iVar6) {
      *(int *)(param_1 + 0x140) = iVar6 + -1;
      uVar7 = (**(code **)(*DAT_71052acd90 + 0x58))();
      cVar2 = DAT_71052ac6db;
      if ((uVar7 & 1) != 0) {
        DAT_71052ac625 = '\x02' - (char)iVar6;
        cVar2 = '\x01';
        if (DAT_71052ac6db != -1) {
          cVar2 = DAT_71052ac6db + '\x01';
        }
      }
      DAT_71052ac6db = cVar2;
      uVar14 = 0x640000;
      FUN_71000b4260(piVar11);
      FUN_71000b40e0(piVar11);
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
      *(code **)(param_1 + 0x30) = FUN_71000f0790;
      *(undefined8 *)(param_1 + 0x38) = 0;
      iVar6 = *(int *)((long)DAT_71052acd90 + 0xb4);
      lVar8 = DAT_71052acd90[0x17];
      plVar9 = FUN_71000bb680();
      lVar15 = *plVar9;
      local_80[0] = 0;
      FUN_71000bb5d0(local_80);
      *(long *)(param_1 + 0x100) = local_80[0] + lVar15 * ((long)(int)lVar8 + (long)iVar6);
      uVar7 = 4;
      goto LAB_71000f0dfc;
    }
    if (0 < *(int *)(param_1 + 0x144)) {
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
      FUN_71000b4260(piVar11);
      FUN_71000b40e0(piVar11);
      uVar14 = 0;
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
      *(code **)(param_1 + 0x30) = FUN_71000f0790;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar7 = 5;
      goto LAB_71000f0dfc;
    }
    if (((*(char *)(param_1 + 0x78) == '\0') &&
        (bVar5 = FUN_71000c36d0((long)DAT_71052acd90), (bVar5 & 1) != 0)) &&
       (uVar7 = (**(code **)(*(long *)DAT_71052acd90[0x11] + 0x60))(), (uVar7 & 1) != 0)) {
      FUN_71000b4260(piVar11);
      FUN_71000b40e0(piVar11);
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversalByRelay";
      *(code **)(param_1 + 0x30) = FUN_71000f1410;
      *(undefined8 *)(param_1 + 0x38) = 0;
      iVar6 = *(int *)((long)DAT_71052acd90 + 0xb4);
      lVar8 = DAT_71052acd90[0x17];
      plVar9 = FUN_71000bb680();
      lVar15 = *plVar9;
      local_80[0] = 0;
      FUN_71000bb5d0(local_80);
      uVar7 = 0;
      uVar14 = 0;
      *(long *)(param_1 + 0x100) = local_80[0] + lVar15 * ((long)(int)lVar8 + (long)iVar6);
      goto LAB_71000f0dfc;
    }
    puVar10 = FUN_71000c0860();
    local_80[0] = CONCAT44(local_80[0]._4_4_,0x10c13);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_80 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_58);
    if (puVar10[1] != (int)local_80[0]) {
      puVar10 = FUN_71000c0860();
      if (puVar10[1] == 0) {
        piVar11 = (int *)(&DAT_71052acf28 + (*(ulong *)(DAT_71052ac580 + 0x30) % 10) * 0x10);
      }
      else {
        puVar10 = FUN_71000c0860();
        piVar11 = puVar10 + 1;
      }
      FUN_71000bcf30(local_70,piVar11);
    }
    if ((local_70[0] != 0) &&
       (puVar10 = *(undefined4 **)(param_1 + 0x68), puVar10 != (undefined4 *)0x0)) {
      FUN_71000bce50(aiStack_a0,local_70);
      FUN_71000b41f0(puVar10,aiStack_a0);
    }
    plVar1 = DAT_71052acd90;
    FUN_71000bce50(aiStack_b0,local_70);
    FUN_71000c5af0((long)plVar1,plVar9,aiStack_b0,(uint)(*(char *)(param_1 + 0x78) == '\0'));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    pcVar13 = "ConnectStationJob::ConnectionFailed";
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_71000f09f0;
    pcVar13 = "NexConnectStationJob::ResolveCurrentAddress";
  }
  uVar14 = 0;
  uVar7 = 0;
  *(char **)(param_1 + 0x40) = pcVar13;
LAB_71000f0dfc:
  return uVar14 | uVar7;
}

