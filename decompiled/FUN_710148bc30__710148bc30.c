// addr:      710148bc30
// offset:    0x148bc30
// name:      FUN_710148bc30
// mangled:   
// signature: undefined __cdecl FUN_710148bc30(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710148bc30(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined **local_58;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    *(undefined1 *)(param_1 + 0x1fb) = 1;
    *(char *)(param_1 + 0x1f9) = *(char *)(param_1 + 0x1f9) + -1;
    cVar1 = *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xb);
    if (cVar1 != '\0') {
      *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xb) = cVar1 + -1;
    }
    FUN_710148d4e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + 0x80);
    FUN_7103778300(0x3f800000,puVar9[4],0x71043088f6);
    FUN_7103778300(0x3f800000,puVar9[4],0x710436c86f);
    FUN_7103776640(&local_58,(long)(puVar9 + 3),(byte ****)"set_parts_use_slow",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_40,(long)&local_58,(long ****)"set_txt_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_40,"nam_goods_spirit_roulette_luck_up",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    plVar3 = FUN_7103240590((long *)*puVar9,(long ****)0x2dffff203f2a5401,(long ****)param_3,param_4
                            ,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_40,(long)&local_58,(long ****)"set_rep_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_38;
    FUN_7103778b80(local_38,(long)plVar3,param_3,param_4,param_5,param_6,param_7,param_8);
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    uVar2 = local_50;
    FUN_7103778300(0x3f800000,local_50,0x7104421055);
    local_58 = &PTR_FUN_710523d988;
    local_50 = 0;
    if (uVar2 != 0) {
      uVar4 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar2);
    }
    lVar7 = *(long *)(*(long *)(*DAT_7105329f98 + 0x50) + 0x150);
    if (*(int *)(lVar7 + 0x108) != 7) {
      if (0x12 < *(uint *)(lVar7 + 0x104)) goto LAB_710148bf44;
      *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0x104) * 4 + 0xb8) = 7;
    }
    local_50 = 0x56;
    local_48 = 5;
    local_58 = (undefined **)&DAT_7105069478;
    local_44 = 1;
    puVar8 = (uint *)*lib::Singleton<app::FighterManager>::instance_;
    if (0x56 < *puVar8) {
      uVar6 = puVar8[6] + 1;
      puVar8[6] = uVar6;
      plVar10 = *(long **)(*(long *)(puVar8 + 2) + 0x818);
      plVar3 = (long *)(*(long *)(puVar8 + 2) + 0x818);
      if (plVar3 != plVar10) {
        do {
          plVar5 = (long *)plVar10[2];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
          }
          plVar10 = (long *)*plVar10;
        } while (plVar3 != plVar10);
        uVar6 = puVar8[6];
      }
      puVar8[6] = uVar6 - 1;
      if ((uVar6 - 1 == 0) && (puVar8[7] != 0)) {
        FUN_71037ae770(puVar8);
      }
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(*DAT_7105329f98 + 0x50) + 0x150);
    if (*(int *)(lVar7 + 0x108) == 8) {
      if ((*(int *)(lVar7 + 0x118) == -1) &&
         ((*(uint *)(lVar7 + 0x11c) & *(uint *)(lVar7 + 0x120)) == 0xffffffff &&
          (*(uint *)(lVar7 + 0x124) & 0xf) == 0xf)) {
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x20),
                       0x71042f876c);
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x20),
                       0x71042c5289);
      }
      if (0x12 < *(uint *)(param_1 + 0x1d4)) {
LAB_710148bf44:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 0xb;
    }
  }
  return;
}

