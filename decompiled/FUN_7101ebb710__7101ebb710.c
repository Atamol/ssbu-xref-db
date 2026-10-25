// addr:      7101ebb710
// offset:    0x1ebb710
// name:      FUN_7101ebb710
// mangled:   
// signature: undefined __cdecl FUN_7101ebb710(long param_1, undefined4 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ebb710(long param_1,undefined4 *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  long *local_68;
  
  lVar12 = *(long *)(param_1 + 0x80);
  *(undefined4 *)(lVar12 + 0x110) = *param_2;
  lVar11 = **(long **)(lVar12 + 0xf8);
  lVar10 = lVar11 + 8;
  FUN_7103778760(*(long *)(lVar11 + 0x10),0x710428ff7d);
  if (*(int *)(lVar12 + 0x110) == 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x71043adf91);
    uVar8 = 0;
    piVar1 = param_2 + 1;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 0;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 1;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 1;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 2;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",2,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 2;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 3;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 3;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 4;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",4,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 4;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 5;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",5,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 5;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 6;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",6,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 6;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 7;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",7,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 7;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 8;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 8;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 9;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",9,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 9;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 10;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",10,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *piVar1 == 10;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar8 = 0xb;
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_wallpaper_%02d",0xb,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",uVar8,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar10 = *local_68;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | *piVar1 == 0xb;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar9 = 4;
  }
  else {
    if (*(int *)(lVar12 + 0x110) != 0) goto LAB_7101ebc068;
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x7104422b09);
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x71042d6a8b);
    if (param_2[1] == 1) {
      pcVar7 = "left";
    }
    else {
      pcVar7 = "right";
    }
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar12 + 0xf8) + 0x10),(long)pcVar7);
    iVar6 = param_2[1];
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_r",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar11 = *local_68;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | iVar6 != 1;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    FUN_7103776640(&local_80,lVar10,(byte ****)"set_btn_l",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_selected_icon",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_68;
    lVar10 = *local_68;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | iVar6 == 1;
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    uVar3 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    uVar9 = 3;
  }
  *(undefined4 *)(lVar12 + 0x114) = uVar9;
  iVar6 = param_2[1];
  *(int *)(lVar12 + 0x118) = iVar6;
  if (1 < *(uint *)(lVar12 + 0x110)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_7103771a80((long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x110) * 8 + 0x100),iVar6,1);
  uVar2 = *(uint *)(lVar12 + 0xc);
  *(undefined1 *)(lVar12 + 0x11c) = 0;
  if ((int)uVar2 < 0x500000) {
    if ((int)uVar2 < 0x250000) {
      if ((int)uVar2 < 0x200000) {
        if ((int)uVar2 < 0x150000) {
          if ((int)uVar2 < 0x100000) {
            if ((int)uVar2 < 0xfe000) {
              if ((int)uVar2 < 0x50000) {
                if ((int)uVar2 < 0x10000) {
                  iVar6 = 3;
                  if (0 < (int)uVar2) {
                    iVar6 = 0;
                  }
                }
                else {
                  iVar6 = 1;
                }
              }
              else {
                iVar6 = 2;
              }
            }
            else {
              iVar6 = 8;
            }
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 6;
        }
      }
      else {
        iVar6 = 5;
      }
    }
    else {
      iVar6 = 7;
    }
  }
  else {
    iVar6 = 9;
  }
  FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0xf8),iVar6,(long ****)(ulong)uVar2,param_4,
                 param_5,param_6,param_7,param_8);
  *(undefined4 *)(lVar12 + 0xe4) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0xdc) = 0;
  *(undefined8 *)(lVar12 + 0xd4) = 0;
  *(undefined8 *)(lVar12 + 0xcc) = 0;
  *(undefined8 *)(lVar12 + 0xc4) = 0;
  *(undefined8 *)(lVar12 + 0xbc) = 0;
  *(undefined8 *)(lVar12 + 0xb4) = 0;
  *(undefined8 *)(lVar12 + 0xac) = 0;
  *(undefined8 *)(lVar12 + 0xa4) = 0;
  *(undefined8 *)(lVar12 + 0x9c) = 0;
  *(undefined8 *)(lVar12 + 0xe8) = 0xffffffff;
  *(undefined4 *)(lVar12 + 0xf0) = 0xffffffff;
  *(undefined1 *)(lVar12 + 0xf4) = 0;
  *(undefined4 *)(lVar12 + 0x98) = 1;
  FUN_7101ebb640((long *)(lVar12 + 0x20));
LAB_7101ebc068:
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

