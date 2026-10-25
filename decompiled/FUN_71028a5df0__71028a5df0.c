// addr:      71028a5df0
// offset:    0x28a5df0
// name:      FUN_71028a5df0
// mangled:   
// signature: undefined __cdecl FUN_71028a5df0(ulong param_1, uint param_2, undefined1[16] * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71028a5df0(ulong param_1,uint param_2,undefined1 (*param_3) [16],byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  uVar6 = (ulong)param_2;
  if (uVar6 < (ulong)(*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 4)) {
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + uVar6 * 0x10);
    uVar7 = *puVar12;
    lVar9 = puVar12[1];
    if (lVar9 != 0) {
      plVar11 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = *(long **)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x198) = uVar7;
    *(long *)(param_1 + 0x1a0) = lVar9;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_71025e46e0(param_1,1);
  }
  lVar9 = *(long *)(param_1 + 0x300);
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  FUN_710262bb40(lVar9,uVar3);
  FUN_710262beb0(lVar9,~uVar3);
  lVar9 = *(long *)(param_1 + 0x300);
  lVar10 = *(long *)(*(long *)(lVar9 + 0x48) + uVar6 * 8);
  puVar8 = *(ulong **)(lVar9 + 0x60);
  if (puVar8 != (ulong *)(lVar10 + 8)) {
    param_3 = *(undefined1 (**) [16])(lVar10 + 0x10);
    FUN_7102616cf0(puVar8,*(undefined1 (**) [16])(lVar10 + 8),param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar9 = *(long *)(param_1 + 0x300);
    lVar10 = *(long *)(*(long *)(lVar9 + 0x48) + uVar6 * 8);
    puVar8 = *(ulong **)(lVar9 + 0x60);
  }
  if (puVar8 + 3 != (ulong *)(lVar10 + 0x20)) {
    param_3 = *(undefined1 (**) [16])(lVar10 + 0x28);
    FUN_7102616cf0(puVar8 + 3,*(undefined1 (**) [16])(lVar10 + 0x20),param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    lVar9 = *(long *)(param_1 + 0x300);
  }
  FUN_710262c200(lVar9,param_2);
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + uVar6 * 8);
  uVar7 = *(undefined8 *)(lVar10 + 0x40);
  lVar9 = *(long *)(*(long *)(param_1 + 0x300) + 0x60);
  *(ulong *)(lVar9 + 0x38) = *(ulong *)(lVar10 + 0x48) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0x30) = uVar7;
  uVar7 = *(undefined8 *)(lVar10 + 0x50);
  *(ulong *)(lVar9 + 0x48) = *(ulong *)(lVar10 + 0x58) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0x40) = uVar7;
  uVar7 = *(undefined8 *)(lVar10 + 0x60);
  *(ulong *)(lVar9 + 0x58) = *(ulong *)(lVar10 + 0x68) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0x50) = uVar7;
  uVar7 = *(undefined8 *)(lVar10 + 0x70);
  *(ulong *)(lVar9 + 0x68) = *(ulong *)(lVar10 + 0x78) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0x60) = uVar7;
  uVar7 = *(undefined8 *)(lVar10 + 0x80);
  *(ulong *)(lVar9 + 0x78) = *(ulong *)(lVar10 + 0x88) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0x70) = uVar7;
  *(undefined1 *)(lVar9 + 0x80) = *(undefined1 *)(lVar10 + 0x90);
  uVar7 = *(undefined8 *)(lVar10 + 0xa0);
  *(ulong *)(lVar9 + 0x98) = *(ulong *)(lVar10 + 0xa8) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0x90) = uVar7;
  uVar7 = *(undefined8 *)(lVar10 + 0xb0);
  *(ulong *)(lVar9 + 0xa8) = *(ulong *)(lVar10 + 0xb8) & 0xffffffff;
  *(undefined8 *)(lVar9 + 0xa0) = uVar7;
  FUN_7102624870(*(long *)(param_1 + 0x308),uVar6);
  FUN_7102624740(*(long *)(param_1 + 0x308),(ulong)param_2);
  FUN_7102633910(*(long *)(param_1 + 0x318),(long *********)(&PTR_s_render_param_71050efec8)[uVar6],
                 param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7102633a10(*(long *)(param_1 + 0x318),(long *********)(&PTR_s_chara_S00_71050efee0)[uVar6],1,
                 param_4,param_5,param_6,param_7,param_8);
  uVar7 = 1;
  FUN_7102633b90(*(long *)(param_1 + 0x318),(long *********)(&PTR_s_stage_S00_71050efef8)[uVar6],1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7102633800(*(long *)(param_1 + 0x318),
                 (long *********)(&PTR_s_reflection_cubemap_S00_71050eff10)[uVar6],uVar7,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71025f7350(*(long *)(*(long *)(param_1 + 0x318) + 0x10),(&PTR_s_light00_71050eff28)[uVar6]);
  puVar8 = (ulong *)**(long **)(param_1 + 0x330);
  puVar12 = (undefined8 *)puVar8[10];
  puVar2 = (undefined8 *)puVar8[0xb];
  if (puVar12 != puVar2) {
    do {
      plVar11 = (long *)*puVar12;
      if (*(uint *)((long)plVar11 + 0xc) == param_2) {
        if ((char)plVar11[3] == '\0') {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          *(undefined1 *)(plVar11 + 3) = 1;
        }
      }
      else if ((char)plVar11[3] != '\0') {
        *(undefined1 *)(plVar11 + 3) = 0;
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      puVar12 = puVar12 + 1;
    } while (puVar2 != puVar12);
    puVar8 = (ulong *)**(undefined8 **)(param_1 + 0x330);
  }
  FUN_7102630ae0(puVar8);
  return;
}

