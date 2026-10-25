// addr:      7101c77cf0
// offset:    0x1c77cf0
// name:      FUN_7101c77cf0
// mangled:   
// signature: undefined __cdecl FUN_7101c77cf0(long param_1, byte param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c77cf0(long param_1,byte param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined **local_60;
  ulong local_58;
  
  bVar2 = *(char *)(param_1 + 0xe7) != '\0';
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(byte *)(param_1 + 0xe5) = bVar2 & param_2;
  pcVar1 = "owner_caption";
  if ((bVar2 & param_2) == 0) {
    pcVar1 = "player_caption";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)pcVar1);
  if (*(char *)(param_1 + 0xe7) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042b446e);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x60))(*(long **)(param_1 + 0xd0),0);
    plVar10 = (long *)(param_1 + 200);
    (**(code **)(*(long *)*plVar10 + 0x60))((long *)*plVar10,1);
    (**(code **)(*(long *)*plVar10 + 0x70))((long *)*plVar10,1);
    uVar3 = 1;
    FUN_7103771a80(plVar10,8,1);
    FUN_7103776910(&local_60,param_1 + 0x28,(long ****)"set_txt_00",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    cVar4 = *(char *)(param_1 + 0xe5);
  }
  else {
    pcVar1 = "guide_btn_on";
    if (*(char *)(param_1 + 0xe5) != '\0') {
      pcVar1 = "guide_btn_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)pcVar1);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x60))
              (*(long **)(param_1 + 0xd0),*(char *)(param_1 + 0xe5) == '\0');
    uVar13 = 0;
    plVar10 = (long *)(param_1 + 200);
    do {
      lVar8 = param_1 + uVar13 * 2;
      cVar4 = *(char *)(lVar8 + 0xb8);
      if (cVar4 == '\0') {
LAB_7101c77e08:
        bVar2 = false;
      }
      else {
        uVar6 = (ulong)*(byte *)(lVar8 + 0xb9);
        if (7 < uVar6) goto LAB_7101c7805c;
        if ((*(long *)(param_1 + 8) + uVar6 * 0x1e8 == 0) || (*(char *)(param_1 + 0xe5) == '\0'))
        goto LAB_7101c77e08;
        bVar2 = *(char *)(*(long *)(param_1 + 8) + uVar6 * 0x1e8 + 0x1e4) != '\0';
      }
      lVar9 = *(long *)(*plVar10 + 0x1b8);
      iVar12 = (int)uVar13;
      if (lVar9 != 0) {
        lVar5 = *plVar10 + 0x1b8;
        lVar7 = lVar5;
        do {
          if (iVar12 <= *(int *)(lVar9 + 0x20)) {
            lVar7 = lVar9;
          }
          lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < iVar12) * 8);
        } while (lVar9 != 0);
        if (((lVar7 != lVar5) && (*(int *)(lVar7 + 0x20) <= iVar12)) &&
           (plVar11 = *(long **)(lVar7 + 0x28), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar11 + 0x1f8))(plVar11,bVar2);
          (**(code **)(*plVar11 + 0x388))(plVar11,bVar2 ^ 1,0);
          cVar4 = *(char *)(lVar8 + 0xb8);
        }
      }
      if (cVar4 == '\0') {
LAB_7101c77eb8:
        bVar2 = false;
      }
      else {
        uVar6 = (ulong)*(byte *)(lVar8 + 0xb9);
        if (7 < uVar6) {
LAB_7101c7805c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = *(long *)(param_1 + 8);
        if (((lVar8 + uVar6 * 0x1e8 == 0) || (*(char *)(lVar8 + uVar6 * 0x1e8 + 0x1e3) != '\0')) ||
           ((*(char *)(lVar8 + uVar6 * 0x1e8 + 0x1e2) != '\0' || (*(char *)(param_1 + 0xe5) == '\0')
            ))) goto LAB_7101c77eb8;
        bVar2 = *(char *)(lVar8 + uVar6 * 0x1e8 + 0x1e4) != '\0';
      }
      lVar8 = *(long *)(*plVar10 + 0x1b8);
      if (lVar8 != 0) {
        lVar9 = *plVar10 + 0x1b8;
        lVar5 = lVar9;
        do {
          if (iVar12 <= *(int *)(lVar8 + 0x20)) {
            lVar5 = lVar8;
          }
          lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < iVar12) * 8);
        } while (lVar8 != 0);
        if (((lVar5 != lVar9) && (*(int *)(lVar5 + 0x20) <= iVar12)) &&
           (plVar11 = *(long **)(lVar5 + 0x28), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar11 + 0x208))(plVar11,bVar2);
          (**(code **)(*plVar11 + 0x388))(plVar11,bVar2 ^ 1,0);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 8);
    (**(code **)(**(long **)(param_1 + 200) + 0x60))(*(long **)(param_1 + 200),1);
    (**(code **)(**(long **)(param_1 + 200) + 0x70))(*(long **)(param_1 + 200),1);
    uVar3 = 1;
    FUN_7103771a80(plVar10,8,1);
    FUN_7103776910(&local_60,param_1 + 0x28,(long ****)"set_txt_00",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    cVar4 = *(char *)(param_1 + 0xe5);
  }
  pcVar1 = "mnu_online_room_inside_ok_btn";
  if (cVar4 != '\0') {
    pcVar1 = "mnu_online_room_inside_back_btn";
  }
  FUN_710377a120((long)&local_60,pcVar1,uVar3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  return;
}

