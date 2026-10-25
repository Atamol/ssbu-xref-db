// addr:      7100187ff0
// offset:    0x187ff0
// name:      FUN_7100187ff0
// mangled:   
// signature: undefined FUN_7100187ff0(void)


void FUN_7100187ff0(int *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong auStack_50 [2];
  undefined4 auStack_38 [2];
  
  if (param_3 == 0) {
    uVar4 = 0x10c07;
  }
  else {
    if (*(int *)(param_3 + 0x48) == 5) {
      param_2[0xd] = param_3;
      *(undefined1 *)((long)param_2 + 0x7c) = 0;
      auStack_50[0] = 0;
      FUN_71000bb5d0(auStack_50);
      lVar2 = param_2[0xc];
      plVar1 = FUN_71000bb680();
      param_2[0xb] = auStack_50[0] + *plVar1 * (long)(int)lVar2;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[6] = (long)FUN_7100188180;
      param_2[7] = 0;
      param_2[8] = (long)"DisconnectStationJob::SendDisconnectionRequest";
      lVar2 = FUN_7100193a30(DAT_71052adfc0);
      if (lVar2 != 0) {
        lVar2 = FUN_7100161fa0(DAT_71052add68);
        if (*(long *)(lVar2 + 0x98) != 0) {
          lVar2 = FUN_7100193a30(DAT_71052adfc0);
          lVar3 = FUN_7100161fa0(DAT_71052add68);
          FUN_71001aca60((int *)auStack_50,lVar2,(uint)*(byte *)(*(long *)(lVar3 + 0x98) + 0x38),
                         (uint)*(byte *)(param_2[0xd] + 0x38),(undefined1 *)auStack_38);
          if (((int)auStack_50[0] == 0) && (auStack_38[0]._0_1_ != *(Result *)(param_2[0xd] + 0x38))
             ) {
            param_2[6] = (long)FUN_7100188240;
            param_2[7] = 0;
            param_2[8] = (long)"DisconnectStationJob::CutRouteOfRelayConnection";
          }
        }
      }
      auStack_50[0] = auStack_50[0] & 0xffffffff00000000;
      goto LAB_7100188140;
    }
    uVar4 = 0x10c08;
  }
  auStack_50[0] = CONCAT44(auStack_50[0]._4_4_,uVar4);
LAB_7100188140:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)auStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)auStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,(int *)auStack_50);
  return;
}

