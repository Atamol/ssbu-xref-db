// addr:      7101cda440
// offset:    0x1cda440
// name:      FUN_7101cda440
// mangled:   
// signature: undefined __cdecl FUN_7101cda440(undefined8 param_1, ulong param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cda440(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **local_40;
  ulong local_38;
  
  lVar5 = DAT_7105324fd8;
  lVar4 = param_3;
  if (((DAT_7105324fd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105324fd0), iVar2 != 0)) {
    DAT_7105324fb0 = 0;
    DAT_7105324fb8 = 0;
    __cxa_guard_release(&DAT_7105324fd0);
  }
  FUN_7103776910(&local_40,param_3,(long ****)"set_txt_name",lVar4,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a280((long)&local_40,(byte *)"mnu_share_search_follow_nam",1);
  uVar10 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(int *)(lVar5 + 200) == 3) {
    pcVar3 = "friend_icon_hide";
    if ((param_2 & 0xffffffff) < *(ulong *)(lVar5 + 0x16c8)) {
      uVar10 = *(ulong *)(*DAT_710593b5f0 + 0x25998);
      if (uVar10 == 0) {
LAB_7101cda608:
        plVar8 = (long *)0x0;
      }
      else {
        uVar6 = **(ulong **)(lVar5 + (param_2 & 0xffffffff) * 8 + 0x13a8);
        uVar11 = uVar10 - 1;
        if ((uVar11 & uVar10) == 0) {
          uVar9 = uVar11 & uVar6;
        }
        else {
          uVar9 = uVar6;
          if (uVar10 <= uVar6) {
            uVar9 = 0;
            if (uVar10 != 0) {
              uVar9 = uVar6 / uVar10;
            }
            uVar9 = uVar6 - uVar9 * uVar10;
          }
        }
        plVar7 = *(long **)(*(long *)(*DAT_710593b5f0 + 0x25990) + uVar9 * 8);
        plVar8 = (long *)0x0;
        if ((plVar7 != (long *)0x0) && (plVar8 = (long *)*plVar7, plVar8 != (long *)0x0)) {
          if ((uVar11 & uVar10) == 0) {
            do {
              uVar10 = plVar8[1];
              if (uVar10 != uVar6 && (uVar10 & uVar11) != uVar9) goto LAB_7101cda608;
            } while (((uVar10 != uVar6) || (plVar8[2] != uVar6)) &&
                    (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0));
          }
          else {
            do {
              uVar11 = plVar8[1];
              if (uVar11 == uVar6) {
                if (plVar8[2] == uVar6) break;
              }
              else {
                if (uVar10 <= uVar11) {
                  uVar1 = 0;
                  if (uVar10 != 0) {
                    uVar1 = uVar11 / uVar10;
                  }
                  uVar11 = uVar11 - uVar1 * uVar10;
                }
                if (uVar11 != uVar9) goto LAB_7101cda608;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      if (plVar8 != (long *)0x0) {
        pcVar3 = "friend_icon_show";
      }
    }
  }
  else {
    pcVar3 = "friend_icon_hide";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar3);
  return;
}

