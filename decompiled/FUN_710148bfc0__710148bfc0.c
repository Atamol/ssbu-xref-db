// addr:      710148bfc0
// offset:    0x148bfc0
// name:      FUN_710148bfc0
// mangled:   
// signature: undefined __cdecl FUN_710148bfc0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710148bfc0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined **local_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(char *)(param_1 + 0x1fa) = *(char *)(param_1 + 0x1fa) + -1;
    cVar1 = *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xc);
    if (cVar1 != '\0') {
      *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xc) = cVar1 + -1;
    }
    FUN_710148d4e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    local_60 = 0x56;
    local_58 = 5;
    local_68 = (undefined **)&DAT_7105069478;
    local_54 = 1;
    puVar8 = (uint *)*lib::Singleton<app::FighterManager>::instance_;
    if (0x56 < *puVar8) {
      uVar6 = puVar8[6] + 1;
      puVar8[6] = uVar6;
      plVar11 = *(long **)(*(long *)(puVar8 + 2) + 0x818);
      plVar4 = (long *)(*(long *)(puVar8 + 2) + 0x818);
      if (plVar4 != plVar11) {
        do {
          plVar3 = (long *)plVar11[2];
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
          }
          plVar11 = (long *)*plVar11;
        } while (plVar4 != plVar11);
        uVar6 = puVar8[6];
      }
      puVar8[6] = uVar6 - 1;
      if ((uVar6 - 1 == 0) && (puVar8[7] != 0)) {
        FUN_71037ae770(puVar8);
      }
    }
  }
  if ('\0' < *(char *)(*(long *)(*DAT_7105329f98 + 0x50) + 0xc)) {
    lVar9 = *(long *)(*(long *)(*DAT_7105329f98 + 0x50) + 0x150);
    *(undefined1 *)(lVar9 + 0x152) = 1;
    *(undefined1 *)(lVar9 + 0x154) = 1;
    FUN_71024a4c20(lVar9);
    lVar7 = *DAT_7105329fa0;
    *(undefined4 *)(lVar9 + 0x158) = *(undefined4 *)(lVar7 + 0x2ac);
    *(undefined4 *)(lVar9 + 0x15c) = *(undefined4 *)(lVar7 + 0x2b0);
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + 0x80);
    FUN_7103778300(0x3f800000,puVar10[4],0x71042703ad);
    FUN_7103778300(0x3f800000,puVar10[4],0x71043088f6);
    FUN_7103776640(&local_68,(long)(puVar10 + 3),(byte ****)"set_parts_use_slow",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_50,(long)&local_68,(long ****)"set_txt_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_50,"nam_goods_spirit_roulette_speed",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    uVar2 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    plVar4 = FUN_7103240590((long *)*puVar10,(long ****)0x2dffff1e76b05925,(long ****)param_3,
                            param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_50,(long)&local_68,(long ****)"set_rep_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_48;
    FUN_7103778b80(local_48,(long)plVar4,param_3,param_4,param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    uVar2 = local_60;
    FUN_7103778300(0x3f800000,local_60,0x7104421055);
    local_68 = &PTR_FUN_710523d988;
    local_60 = 0;
    if (uVar2 != 0) {
      uVar5 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(*DAT_7105329fa0 + 0x2a8);
  if (*(uint *)(param_1 + 0x1d4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

