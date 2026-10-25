// addr:      71000f17c0
// offset:    0xf17c0
// name:      FUN_71000f17c0
// mangled:   
// signature: undefined FUN_71000f17c0(void)


ulong FUN_71000f17c0(long param_1)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  ErrorResultVariant *this;
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  ulong uStack_58;
  undefined4 auStack_48 [2];
  
  lVar7 = DAT_71052acd90;
  plVar1 = (long *)(param_1 + 0x80);
  iVar5 = FUN_71001602e0((long)plVar1);
  uVar6 = FUN_71000c5330(lVar7,iVar5);
  if ((uVar6 & 1) == 0) {
    uStack_58 = 0;
    FUN_71000bb5d0(&uStack_58);
    if ((uStack_58 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar6 = 0x640000;
      uVar10 = 4;
      goto LAB_71000f1afc;
    }
    lVar7 = FUN_7100161fb0(DAT_71052add68);
    bVar2 = FUN_71001603a0((long)plVar1,lVar7 + 8);
    FUN_71000bce50(aiStack_68,(int *)(param_1 + 0x10c));
    if (*(int *)(param_1 + 0x108) == 3) {
      this = (ErrorResultVariant *)((ulong)aiStack_78 | 4);
      aiStack_78[0] = 0x644a;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_48);
      lVar7 = DAT_71052acd90;
      if (aiStack_68[0] != aiStack_78[0]) {
        if (*(int *)(param_1 + 0x108) == 3) {
          aiStack_78[0] = 0x6434;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_78 | 4));
          auStack_48[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_48);
          if (aiStack_68[0] == aiStack_78[0]) goto LAB_71000f19d4;
        }
        goto LAB_71000f1958;
      }
      aiStack_78[0] = 0x644a;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_48);
      FUN_71000bce50(aiStack_88,aiStack_78);
      FUN_71000c5af0(lVar7,plVar1,aiStack_88,0);
    }
    else {
LAB_71000f1958:
      lVar7 = FUN_7100161fb0(DAT_71052add68);
      bVar3 = FUN_7100160340(lVar7 + 8);
      if (((bVar3 & 1) == 0) || (bVar3 = FUN_7100160340((long)plVar1), (bVar3 & 1) == 0)) {
        aiStack_78[0] = 0x643f;
      }
      else {
        iVar5 = FUN_71000c4cd0(DAT_71052acd90);
        if ((iVar5 == 2) && (bVar4 = FUN_7100160300((long)plVar1), bVar4)) {
          if (bVar2) {
            aiStack_78[0] = 0x646a;
          }
          else {
            aiStack_78[0] = 0x6445;
          }
        }
        else {
          iVar5 = FUN_71000c4cd0(DAT_71052acd90);
          if ((iVar5 == 2) && (bVar4 = FUN_7100160320((long)plVar1), bVar4)) {
            if (bVar2) {
              aiStack_78[0] = 0x6469;
            }
            else {
              aiStack_78[0] = 0x6444;
            }
          }
          else {
            iVar5 = FUN_71000c4cd0(DAT_71052acd90);
            if ((iVar5 == 1) && (bVar4 = FUN_7100160300((long)plVar1), bVar4)) {
              if (bVar2) {
                aiStack_78[0] = 0x6468;
              }
              else {
                aiStack_78[0] = 0x6443;
              }
            }
            else {
              iVar5 = FUN_71000c4cd0(DAT_71052acd90);
              if ((iVar5 != 1) || (bVar4 = FUN_7100160320((long)plVar1), !bVar4))
              goto LAB_71000f19d4;
              if (bVar2) {
                aiStack_78[0] = 0x6467;
              }
              else {
                aiStack_78[0] = 0x6442;
              }
            }
          }
        }
      }
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4))
      ;
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_48);
      FUN_71000bcf30(aiStack_68,aiStack_78);
    }
LAB_71000f19d4:
    puVar8 = FUN_71000c0860();
    aiStack_78[0] = 0x10c13;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
    auStack_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_48);
    if (puVar8[1] != aiStack_78[0]) {
      puVar8 = FUN_71000c0860();
      if (puVar8[1] == 0) {
        piVar9 = (int *)(&DAT_71052acf28 + (*(ulong *)(DAT_71052ac580 + 0x30) % 10) * 0x10);
      }
      else {
        puVar8 = FUN_71000c0860();
        piVar9 = puVar8 + 1;
      }
      FUN_71000bcf30(aiStack_68,piVar9);
    }
    if ((aiStack_68[0] != 0) &&
       (puVar8 = *(undefined4 **)(param_1 + 0x68), puVar8 != (undefined4 *)0x0)) {
      FUN_71000bce50(aiStack_98,aiStack_68);
      FUN_71000b41f0(puVar8,aiStack_98);
    }
    lVar7 = DAT_71052acd90;
    FUN_71000bce50(aiStack_a8,aiStack_68);
    FUN_71000c5af0(lVar7,plVar1,aiStack_a8,(uint)(*(char *)(param_1 + 0x78) == '\0'));
    FUN_71000c5390(DAT_71052acd90,plVar1,1,1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    pcVar11 = "ConnectStationJob::ConnectionFailed";
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_71000f09f0;
    pcVar11 = "NexConnectStationJob::ResolveCurrentAddress";
  }
  uVar10 = 0;
  uVar6 = 0;
  *(char **)(param_1 + 0x40) = pcVar11;
LAB_71000f1afc:
  return uVar6 | uVar10;
}

