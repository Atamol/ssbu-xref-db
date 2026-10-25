// addr:      71035f9e10
// offset:    0x35f9e10
// name:      FUN_71035f9e10
// mangled:   
// signature: undefined __cdecl FUN_71035f9e10(undefined8 * param_1, long param_2, char param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * * param_7, void * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035f9e10(undefined8 *param_1,long param_2,char param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,byte ****param_7,void *param_8)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  long lVar7;
  long *plVar8;
  undefined **local_78;
  long local_70;
  long *local_68;
  long local_60;
  byte local_58;
  char local_57 [16];
  undefined6 uStack_47;
  undefined1 local_41;
  
  FUN_710388e7f0(param_1,param_2,0x40,param_4,param_5,param_6,param_7,param_8);
  if ((((long *)param_1[2] != (long *)0x0) && (param_3 == '\x01')) &&
     (*(long *)param_1[2] == param_1[3])) {
    nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
    lVar4 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
    lVar7 = *(long *)(lVar4 + 0x58);
    local_58 = 0x2c;
    uStack_47 = 0x65757161706f;
    builtin_strncpy(local_57,"item_sil",8);
    builtin_strncpy(local_57 + 8,"houette_",8);
    local_41 = 0;
    uVar1 = *(uint *)(param_1[1] + 0x80);
    FUN_7103662490(&local_78,uVar1 ^ (int)uVar1 >> 0x1f,param_1[1] + 0x88);
    lVar4 = 0;
    if ((local_68 == (long *)0x0) ||
       (lVar4 = local_70, plVar8 = _SUB_00000020, *local_68 == local_60)) {
      plVar8 = *(long **)(lVar4 + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      if (lVar7 == 0) {
        do {
          uVar2 = *(uint *)(plVar8 + 5);
          uVar1 = uVar2 ^ (int)uVar2 >> 0x1f;
          pppplVar5 = (long ****)(ulong)uVar1;
          ppppbVar6 = (byte ****)(plVar8 + 6);
          FUN_710356bf30(&local_78,(ulong)uVar2,uVar1,(long)ppppbVar6);
          lVar4 = local_70;
          FUN_71038aa1d0(local_70,(ulong *)&local_58);
          local_78 = &PTR_FUN_71052317b0;
          local_68 = (long *)0x0;
          local_60 = 0;
          local_70 = lVar7;
          FUN_71038ac560(lVar4,(long)&local_78,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar2 = *(uint *)(plVar8 + 5);
          uVar1 = uVar2 ^ (int)uVar2 >> 0x1f;
          pppplVar5 = (long ****)(ulong)uVar1;
          ppppbVar6 = (byte ****)(plVar8 + 6);
          FUN_710356bf30(&local_78,(ulong)uVar2,uVar1,(long)ppppbVar6);
          lVar4 = local_70;
          FUN_71038aa1d0(local_70,(ulong *)&local_58);
          local_68 = *(long **)(lVar7 + 8);
          local_60 = *local_68;
          local_78 = &PTR_FUN_71052317b0;
          local_70 = lVar7;
          FUN_71038ac560(lVar4,(long)&local_78,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if ((local_58 & 1) != 0) {
      pvVar3 = (void *)CONCAT17(local_41,CONCAT61(uStack_47,local_57[0xf]));
      nu::VirtualFreeHook(pvVar3);
      FUN_710392eb40((ulong)pvVar3);
    }
  }
  return;
}

