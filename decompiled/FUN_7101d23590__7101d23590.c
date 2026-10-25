// addr:      7101d23590
// offset:    0x1d23590
// name:      FUN_7101d23590
// mangled:   
// signature: undefined __cdecl FUN_7101d23590(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d23590(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  undefined **local_90;
  undefined8 *local_88;
  undefined **local_80;
  ulong local_78;
  
  if ((*(int *)(param_1 + 0xbc) == 0) &&
     (lVar9 = *(long *)(param_1 + 0xd8), *(char *)(lVar9 + 200) != '\0')) {
    pcVar11 = (char *)(lVar9 + 0xe8);
    plVar1 = (long *)(lVar9 + 0x460);
    do {
      if (*pcVar11 != '\0') {
        bVar2 = pcVar11[4];
        iVar5 = FUN_7101d239c0((uint)bVar2);
        plVar8 = (long *)*plVar1;
        uVar10 = (uint)bVar2;
        plVar7 = plVar1;
        if (plVar8 == (long *)0x0) {
LAB_7101d23648:
          FUN_7101d1b3f0(lVar9,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
          plVar7 = plVar1;
          for (plVar8 = (long *)*(long *)(lVar9 + 0x460); plVar8 != (long *)0x0;
              plVar8 = (long *)*plVar8) {
            while (*(int *)((long)plVar8 + 0x1c) <= (int)uVar10) {
              if ((int)uVar10 <= *(int *)((long)plVar8 + 0x1c)) goto LAB_7101d2369c;
              plVar7 = plVar8 + 1;
              plVar8 = (long *)*plVar7;
              if (plVar8 == (long *)0x0) goto LAB_7101d2369c;
            }
            plVar7 = plVar8;
          }
LAB_7101d2369c:
          plVar7 = (long *)*plVar7;
        }
        else {
          do {
            if ((int)(uint)bVar2 <= *(int *)((long)plVar8 + 0x1c)) {
              plVar7 = plVar8;
            }
            plVar8 = (long *)plVar8[*(int *)((long)plVar8 + 0x1c) < (int)(uint)bVar2];
          } while (plVar8 != (long *)0x0);
          if ((plVar7 == plVar1) || ((int)uVar10 < *(int *)((long)plVar7 + 0x1c)))
          goto LAB_7101d23648;
        }
        param_3 = (long ****)(ulong)*(uint *)(plVar7 + 4);
        FUN_7103776640(&local_80,*(long *)(lVar9 + 0xc0),(byte ****)"set_panel_%02d",param_3,param_4
                       ,param_5,param_6,param_7,param_8);
        if (iVar5 == 1) {
          if (*(char *)(lVar9 + 0x4a1) != '\0') {
            plVar7 = plVar1;
            for (plVar8 = (long *)*plVar1; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              while (*(int *)((long)plVar8 + 0x1c) <= (int)uVar10) {
                if ((int)uVar10 <= *(int *)((long)plVar8 + 0x1c)) goto LAB_7101d23714;
                plVar7 = plVar8 + 1;
                plVar8 = (long *)*plVar7;
                if (plVar8 == (long *)0x0) goto LAB_7101d23714;
              }
              plVar7 = plVar8;
            }
LAB_7101d23714:
            if (*(int *)(*plVar7 + 0x20) % 2 == 1) goto LAB_7101d23778;
          }
          FUN_7103778300(0x3f800000,local_78,0x71043be8bc);
          FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_fxui_rankflash",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          puVar3 = local_88;
          FUN_710377abf0((long *)*local_88,0);
          local_90 = &PTR_FUN_710523d9a8;
          local_88 = (undefined8 *)0x0;
          if (puVar3 != (undefined8 *)0x0) {
            FUN_710392eb40((ulong)puVar3);
          }
        }
LAB_7101d23778:
        uVar4 = local_78;
        local_80 = &PTR_FUN_710523d988;
        local_78 = 0;
        if (uVar4 != 0) {
          uVar6 = *(ulong *)(uVar4 + 0x18);
          *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar4 + 0x18) = 0;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          FUN_710392eb40(uVar4);
        }
      }
      pcVar11 = pcVar11 + 0x58;
    } while (pcVar11 != (char *)(lVar9 + 0x3a8));
  }
  return;
}

