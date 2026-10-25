// addr:      71000f1bc0
// offset:    0xf1bc0
// name:      FUN_71000f1bc0
// mangled:   
// signature: undefined FUN_71000f1bc0(void)


undefined8 FUN_71000f1bc0(long param_1)

{
  long *plVar1;
  long lVar2;
  int aiStack_78 [4];
  undefined **ppuStack_68;
  undefined4 uStack_60;
  undefined4 auStack_38 [2];
  
  lVar2 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x80);
  FUN_7100160230(&ppuStack_68,(long)plVar1);
  FUN_71000beb40(lVar2 + 0x10,(long)&ppuStack_68);
  ppuStack_68 = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  uStack_60 = 0;
  ppuStack_68 = (undefined **)0x20000;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x18))(*(long **)(param_1 + 0x70),&ppuStack_68);
  lVar2 = DAT_71052acd90;
  ppuStack_68 = (undefined **)((ulong)ppuStack_68 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&ppuStack_68 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&ppuStack_68 | 4),(Result *)auStack_38);
  FUN_71000bce50(aiStack_78,(int *)&ppuStack_68);
  FUN_71000c5af0(lVar2,plVar1,aiStack_78,(uint)(*(char *)(param_1 + 0x78) == '\0'));
  FUN_71000c5ad0(DAT_71052acd90,plVar1,(uint)*(byte *)(param_1 + 0x78));
  *(char **)(param_1 + 0x40) = "ConnectStationJob::SendConnectionRequest";
  *(code **)(param_1 + 0x30) = FUN_71001867a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

