// addr:      71019b8430
// offset:    0x19b8430
// name:      FUN_71019b8430
// mangled:   
// signature: undefined __cdecl FUN_71019b8430(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019b8430(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    pppplVar6 = (long ****)(ulong)uVar1;
    if ((int)uVar1 < 0x500000) {
      if ((int)uVar1 < 0x250000) {
        if ((int)uVar1 < 0x200000) {
          if ((int)uVar1 < 0x150000) {
            if ((int)uVar1 < 0x100000) {
              if ((int)uVar1 < 0xfe000) {
                if ((int)uVar1 < 0x50000) {
                  if ((int)uVar1 < 0x10000) {
                    iVar5 = 3;
                    if (0 < (int)uVar1) {
                      iVar5 = 0;
                    }
                  }
                  else {
                    iVar5 = 1;
                  }
                }
                else {
                  iVar5 = 2;
                }
              }
              else {
                iVar5 = 8;
              }
            }
            else {
              iVar5 = 4;
            }
          }
          else {
            iVar5 = 6;
          }
        }
        else {
          iVar5 = 5;
        }
      }
      else {
        iVar5 = 7;
      }
    }
    else {
      iVar5 = 9;
    }
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x20),iVar5,pppplVar6,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_71032d6810(param_1,0,pppplVar6,param_4,param_5,param_6,param_7,param_8);
    lVar2 = param_1 + 0x28;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x7104421055);
    FUN_71019bbad0(param_1,extraout_x1,pppplVar6,param_4,param_5,param_6,param_7,param_8);
    uVar7 = (uint)((ulong)(*(long *)(param_1 + 0x218) - *(long *)(param_1 + 0x210)) >> 2);
    uVar1 = (uint)((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) >> 4);
    if (uVar7 <= uVar1) {
      uVar1 = uVar7;
    }
    uVar4 = (ulong)uVar1;
    FUN_7103778430(lVar2,"chip_count%d",uVar4,param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x358) - 2U < 3) {
      FUN_7103776910(&local_70,lVar2,(long ****)"set_txt_count",uVar4,param_4,param_5,param_6,
                     param_7,param_8);
      plVar3 = local_68;
      lVar8 = *local_68;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      FUN_7103776910(&local_70,lVar2,(long ****)"amiibo_icon",uVar4,param_4,param_5,param_6,param_7,
                     param_8);
      plVar3 = local_68;
      lVar2 = *local_68;
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
    }
    else {
      FUN_7103776910(&local_70,lVar2,(long ****)"set_txt_count",uVar4,param_4,param_5,param_6,
                     param_7,param_8);
      plVar3 = local_68;
      lVar8 = *local_68;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      FUN_7103776910(&local_70,lVar2,(long ****)"amiibo_icon",uVar4,param_4,param_5,param_6,param_7,
                     param_8);
      plVar3 = local_68;
      lVar8 = *local_68;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      FUN_7103776910(&local_80,lVar2,(long ****)"set_txt_count",uVar4,param_4,param_5,param_6,
                     param_7,param_8);
      plVar3 = local_78;
      plVar9 = (long *)local_78[2];
      if (plVar9 != (long *)0x0) {
        local_40 = 0;
        uStack_38 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = (undefined **)0x0;
        local_68 = (long *)0x0;
        uVar1 = FUN_71037ad940((long)&local_70,0x20,0,
                               (uint)((ulong)(*(long *)(param_1 + 0x218) -
                                             *(long *)(param_1 + 0x210)) >> 2),0,0);
        FUN_71037a2270(plVar9,(ushort *)&local_70,uVar1,0);
      }
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = (long *)0x0;
    }
    if (plVar3 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar3);
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    if (((lVar2 == 0) ||
        (plVar3 = (long *)FUN_71037964b0(lVar2,0x7104421055), plVar3 == (long *)0x0)) ||
       (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)) {
      if (0x12 < *(uint *)(param_1 + 500)) {
LAB_71019b8760:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 500) * 4 + 0x1a8) = 3;
      if ((*(char *)(param_1 + 0x468) != '\0') && (*(int *)(param_1 + 500) < 0x12)) {
        uVar1 = *(int *)(param_1 + 500) + 1;
        *(uint *)(param_1 + 500) = uVar1;
        if (0x12 < uVar1) goto LAB_71019b8760;
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1a8) = 2;
      }
    }
  }
  return;
}

