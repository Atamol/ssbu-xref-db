// addr:      710339ae90
// offset:    0x339ae90
// name:      FUN_710339ae90
// mangled:   
// signature: undefined __cdecl FUN_710339ae90(short * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710339ae90(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short *psVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  byte *pbVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  uint local_e0 [2];
  char local_d8 [64];
  undefined **local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  if (*(long *)(*(long *)(param_1 + 0xc) + 8) != 0) {
    psVar1 = param_1 + 8;
    FUN_71037780e0(&local_88,(long)psVar1,(long ****)"aura_up_anim",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_80;
    if (param_1 + 0x10 != (short *)&local_88) {
      local_80 = 0;
      uVar4 = *(ulong *)(param_1 + 0x14);
      *(ulong *)(param_1 + 0x14) = uVar5;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar5 = local_80;
    local_88 = &PTR_FUN_710523d9e8;
    local_80 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_71037780e0(&local_88,(long)psVar1,(long ****)"in_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_80;
    if (param_1 + 0x18 != (short *)&local_88) {
      local_80 = 0;
      uVar4 = *(ulong *)(param_1 + 0x1c);
      *(ulong *)(param_1 + 0x1c) = uVar5;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar5 = local_80;
    local_88 = &PTR_FUN_710523d9e8;
    local_80 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    plVar10 = *(long **)(param_1 + 0x1c);
    lVar7 = *plVar10;
    if ((lVar7 != 0) && (plVar14 = (long *)plVar10[1], plVar14 != (long *)0x0)) {
      if ((char)plVar10[2] != '\0') {
        plVar10 = (long *)(lVar7 + 0x88);
        plVar15 = *(long **)(lVar7 + 0x80);
        if (*(long **)(lVar7 + 0x80) != plVar10) {
          do {
            while( true ) {
              uVar5 = (**(code **)(*(long *)plVar15[0xd] + 0x148))();
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = (**(code **)(*plVar14 + 0x120))(plVar14,plVar15[0xd]), (uVar5 & 1) != 0))
              {
                (**(code **)(*(long *)plVar15[0xd] + 0x178))();
                (**(code **)(*(long *)plVar15[0xd] + 0x140))((long *)plVar15[0xd],0);
              }
              plVar8 = (long *)plVar15[1];
              if ((long *)plVar15[1] == (long *)0x0) break;
              do {
                plVar15 = plVar8;
                plVar8 = (long *)*plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
LAB_710339b01c:
              if (plVar15 == plVar10) goto LAB_710339b034;
            }
            plVar8 = plVar15 + 2;
            plVar11 = (long *)*plVar8;
            if ((long *)*plVar11 != plVar15) {
              do {
                lVar7 = *plVar8;
                plVar8 = (long *)(lVar7 + 0x10);
                plVar15 = (long *)*plVar8;
              } while (*plVar15 != lVar7);
              goto LAB_710339b01c;
            }
            plVar15 = plVar11;
          } while (plVar11 != plVar10);
LAB_710339b034:
          plVar14 = *(long **)(*(long *)(param_1 + 0x1c) + 8);
        }
      }
      (**(code **)(*plVar14 + 0x188))(plVar14);
    }
    FUN_71037780e0(&local_88,(long)psVar1,(long ****)"out_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_80;
    if (param_1 + 0x20 != (short *)&local_88) {
      local_80 = 0;
      uVar4 = *(ulong *)(param_1 + 0x24);
      *(ulong *)(param_1 + 0x24) = uVar5;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar5 = local_80;
    local_88 = &PTR_FUN_710523d9e8;
    local_80 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    if ((long)*param_1 == -1) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xc),0x710439ba10);
    }
    else {
      lVar7 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar3 = *(ushort *)(lVar7 + (long)*param_1 * 2 + 0x60);
      if (((uint)uVar3 <
           (uint)((int)((ulong)(*(long *)(lVar7 + 0x28) - *(long *)(lVar7 + 0x20)) >> 6) *
                 -0x33333333)) &&
         (*(char *)(*(long *)(lVar7 + 0x20) + (ulong)uVar3 * 0x140 + 0x5e) == '\0')) {
        lVar7 = *(long *)(param_1 + 0xc);
        pcVar6 = "level_on";
      }
      else {
        lVar7 = *(long *)(param_1 + 0xc);
        pcVar6 = "level_off";
      }
      FUN_7103778300(0x3f800000,lVar7,(long)pcVar6);
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == -1) {
        uVar5 = 1;
      }
      else {
        uVar13 = iVar2 - 1;
        uVar9 = iVar2 + 2;
        if (-1 < (int)uVar13) {
          uVar9 = uVar13;
        }
        uVar5 = (ulong)((uVar13 - (uVar9 & 0xfffffffc)) + 1);
      }
      local_80 = local_80 & 0xffffffffffffff00;
      local_88 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_88,"bg_color_%d");
      uVar9 = local_88._4_4_;
      if ((int)local_88._4_4_ < 0x3f) {
        lVar7 = (long)(int)local_88._4_4_;
        uVar9 = local_88._4_4_ + 1;
        local_88 = (undefined **)((ulong)uVar9 << 0x20);
        *(undefined1 *)((long)&local_80 + lVar7) = 0x70;
      }
      *(undefined1 *)((long)&local_80 + (long)(int)uVar9) = 0;
      uVar13 = (uint)(byte)local_80;
      uVar9 = 0x811c9dc5;
      if ((byte)local_80 != 0) {
        pbVar12 = (byte *)((long)&local_80 + 1);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
      local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar9);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xc),(long)&local_80);
      FUN_7103776910(&local_98,(long)psVar1,(long ****)"set_txt_num_player",uVar5,param_4,param_5,
                     param_6,param_7,param_8);
      if (*(uint *)(param_1 + 4) == 0xffffffff) {
        local_d8[0] = '\0';
        local_e0[0] = 0;
        local_e0[1] = 0;
      }
      else {
        FUN_71003a4ca0(local_e0,"cmn_%dp",(ulong)*(uint *)(param_1 + 4),uVar5,param_4,param_5,
                       param_6,param_7,param_8);
      }
      FUN_710377a120((long)&local_98,local_d8,uVar5,param_4,param_5,param_6,param_7,param_8);
      uVar5 = local_90;
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
    }
  }
  return;
}

