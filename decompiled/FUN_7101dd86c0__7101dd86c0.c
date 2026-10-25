// addr:      7101dd86c0
// offset:    0x1dd86c0
// name:      FUN_7101dd86c0
// mangled:   
// signature: undefined __cdecl FUN_7101dd86c0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dd86c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  lVar11 = *(long *)(param_1 + 0x80);
  lVar9 = *(long *)(*(long *)(lVar11 + 0xf0) + 0x1b8);
  if (lVar9 != 0) {
    lVar1 = *(long *)(lVar11 + 0xf0) + 0x1b8;
    lVar6 = lVar1;
    do {
      if (5 < *(int *)(lVar9 + 0x20)) {
        lVar6 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 6) * 8);
    } while (lVar9 != 0);
    if ((((lVar6 != lVar1) && (*(int *)(lVar6 + 0x20) < 7)) &&
        (*(long **)(lVar6 + 0x28) != (long *)0x0)) &&
       (uVar4 = (**(code **)(**(long **)(lVar6 + 0x28) + 0x200))(), (uVar4 & 1) != 0)) {
      plVar7 = *(long **)(*DAT_7105329f98 + 0x40);
      if ((char)plVar7[0x71] == '\0') {
        cVar10 = '\0';
        cVar3 = '\0';
      }
      else {
        lVar9 = *plVar7;
        cVar8 = '\0';
        if (lVar9 != 0) {
          bVar2 = *(char *)(lVar9 + 0x20) == '\x03';
          cVar8 = '\x01';
          if (bVar2) {
            cVar8 = '\x02';
          }
          if (*(char *)(lVar9 + 0x1f8) != '\x03') {
            cVar8 = bVar2;
          }
          if (*(char *)(lVar9 + 0x3d0) == '\x03') {
            cVar8 = cVar8 + '\x01';
          }
          if (*(char *)(lVar9 + 0x5a8) == '\x03') {
            cVar8 = cVar8 + '\x01';
          }
        }
        lVar9 = plVar7[1];
        cVar3 = '\0';
        if (lVar9 != 0) {
          cVar3 = *(char *)(lVar9 + 0x1f0) == '\x03';
          cVar10 = '\x02';
          if (!(bool)cVar3) {
            cVar10 = '\x01';
          }
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar10;
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[2];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[3];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[4];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[5];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[6];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[7];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[8];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[9];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[10];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[0xb];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[0xc];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[0xd];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        lVar9 = plVar7[0xe];
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x28) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x1f0) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x3b8) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
          if (*(char *)(lVar9 + 0x580) == '\x03') {
            cVar3 = cVar3 + '\x01';
          }
        }
        cVar10 = '\0';
        if (plVar7[0xf] != 0) {
          cVar10 = *(char *)(plVar7[0xf] + 0x80);
          if ((cVar10 == '\x04') || (cVar10 == '\x02')) {
            cVar10 = '\x01';
          }
          else {
            cVar10 = '\0';
          }
        }
        cVar3 = cVar3 + cVar8;
        if ((plVar7[0x10] != 0) &&
           ((cVar8 = *(char *)(plVar7[0x10] + 0x80), cVar8 == '\x04' || (cVar8 == '\x02')))) {
          cVar10 = cVar10 + '\x01';
        }
        if ((plVar7[0x11] != 0) &&
           ((cVar8 = *(char *)(plVar7[0x11] + 0x80), cVar8 == '\x04' || (cVar8 == '\x02')))) {
          cVar10 = cVar10 + '\x01';
        }
      }
      if ((char)(cVar3 + cVar10) == '\0') {
        FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0xe8),0x710433a60c);
        return;
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0xe8),0x710437ca30);
      FUN_7103776640(&local_50,lVar11 + 0xe0,(byte ****)"set_parts_badge",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_40,(long)&local_50,(long ****)"set_txt_count",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a280((long)&local_40,(byte *)"cam_info_menu_new_n",1);
      uVar4 = local_38;
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      uVar4 = local_48;
      local_50 = &PTR_FUN_710523d988;
      local_48 = 0;
      if (uVar4 != 0) {
        uVar5 = *(ulong *)(uVar4 + 0x18);
        *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar4 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar4);
      }
    }
  }
  return;
}

