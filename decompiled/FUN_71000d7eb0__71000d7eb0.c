// addr:      71000d7eb0
// offset:    0xd7eb0
// name:      FUN_71000d7eb0
// mangled:   
// signature: undefined FUN_71000d7eb0(void)


void FUN_71000d7eb0(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uStack_a8 = 0x10c07;
    goto LAB_71000d82ec;
  }
  if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
    if (DAT_71052adb38 != 0) {
      uVar4 = FUN_7100148da0(DAT_71052adb38);
      if ((1 < ((uint)uVar4 & 0xff)) && (uVar5 = FUN_7100148d80(DAT_71052adb38), (uVar5 & 1) != 0))
      {
        uVar4 = FUN_7100148da0(DAT_71052adb38);
        if (*(long **)(param_2 + 0x60) == (long *)0x0) {
LAB_71000d7f78:
          iVar1 = 0;
          plVar8 = *(long **)(param_2 + 0x68);
        }
        else {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
          lVar7 = FUN_71000c36b0(DAT_71052acd90);
          if (lVar6 == lVar7) goto LAB_71000d7f78;
          plVar9 = *(long **)(param_2 + 0x128);
          plVar8 = FUN_71001b1820(0x18);
          plVar8[1] = (long)plVar9;
          plVar8[2] = lVar6;
          *plVar8 = 0;
          lVar6 = *plVar9;
          *plVar8 = lVar6;
          *(long **)(lVar6 + 8) = plVar8;
          *plVar9 = (long)plVar8;
          plVar9[2] = plVar9[2] + 1;
          iVar1 = 1;
          plVar8 = *(long **)(param_2 + 0x68);
        }
        if (plVar8 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar8 + 0x18))();
          lVar7 = FUN_71000c36b0(DAT_71052acd90);
          if (lVar6 != lVar7) {
            plVar9 = *(long **)(param_2 + 0x128);
            plVar8 = FUN_71001b1820(0x18);
            plVar8[1] = (long)plVar9;
            plVar8[2] = lVar6;
            iVar1 = iVar1 + 1;
            *plVar8 = 0;
            lVar6 = *plVar9;
            *plVar8 = lVar6;
            *(long **)(lVar6 + 8) = plVar8;
            *plVar9 = (long)plVar8;
            plVar9[2] = plVar9[2] + 1;
          }
        }
        if (*(long **)(param_2 + 0x70) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x70) + 0x18))();
          lVar7 = FUN_71000c36b0(DAT_71052acd90);
          if (lVar6 != lVar7) {
            plVar9 = *(long **)(param_2 + 0x128);
            plVar8 = FUN_71001b1820(0x18);
            plVar8[1] = (long)plVar9;
            plVar8[2] = lVar6;
            iVar1 = iVar1 + 1;
            *plVar8 = 0;
            lVar6 = *plVar9;
            *plVar8 = lVar6;
            *(long **)(lVar6 + 8) = plVar8;
            *plVar9 = (long)plVar8;
            plVar9[2] = plVar9[2] + 1;
          }
        }
        if (*(long **)(param_2 + 0x78) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x78) + 0x18))();
          lVar7 = FUN_71000c36b0(DAT_71052acd90);
          if (lVar6 != lVar7) {
            plVar9 = *(long **)(param_2 + 0x128);
            plVar8 = FUN_71001b1820(0x18);
            plVar8[1] = (long)plVar9;
            plVar8[2] = lVar6;
            iVar1 = iVar1 + 1;
            *plVar8 = 0;
            lVar6 = *plVar9;
            *plVar8 = lVar6;
            *(long **)(lVar6 + 8) = plVar8;
            *plVar9 = (long)plVar8;
            plVar9[2] = plVar9[2] + 1;
          }
        }
        plVar9 = *(long **)(param_2 + 0x128);
        plVar8 = (long *)(*(long *)(param_2 + 0xb8) + 0x160);
        if (plVar8 != plVar9) {
          FUN_71000eba40(plVar8,plVar9[1],(long)plVar9);
        }
        uVar3 = (int)uVar4 - iVar1;
        if (iVar1 == 0) {
          *(ushort *)(*(long *)(param_2 + 0xb8) + 0x1a8) = (ushort)uVar3 & 0xff;
        }
        iVar1 = nn::util::SNPrintf((char *)&uStack_a8,0x47,"%d",(ulong)(uVar3 & 0xff));
        if (*(long **)(param_2 + 0x60) == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
        }
        *(undefined1 *)((long)&uStack_a8 + (long)iVar1) = 0x20;
        iVar2 = nn::util::SNPrintf((char *)((long)&uStack_a8 + (long)iVar1 + 1),(long)(0x46 - iVar1)
                                   ,"%016llx",uVar4);
        lVar6 = (long)iVar2 + (long)(iVar1 + 1);
        if (*(long **)(param_2 + 0x68) == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(**(long **)(param_2 + 0x68) + 0x18))();
        }
        *(undefined1 *)((long)&uStack_a8 + lVar6) = 0x20;
        iVar1 = nn::util::SNPrintf((char *)((long)&uStack_a8 + lVar6 + 1),(long)(0x46 - (int)lVar6),
                                   "%016llx",uVar4);
        lVar6 = (long)iVar1 + (long)((int)lVar6 + 1);
        if (*(long **)(param_2 + 0x70) == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x18))();
        }
        *(undefined1 *)((long)&uStack_a8 + lVar6) = 0x20;
        iVar1 = nn::util::SNPrintf((char *)((long)&uStack_a8 + lVar6 + 1),(long)(0x46 - (int)lVar6),
                                   "%016llx",uVar4);
        lVar6 = (long)iVar1 + (long)((int)lVar6 + 1);
        if (*(long **)(param_2 + 0x78) == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(**(long **)(param_2 + 0x78) + 0x18))();
        }
        *(undefined1 *)((long)&uStack_a8 + lVar6) = 0x20;
        iVar1 = nn::util::SNPrintf((char *)((long)&uStack_a8 + lVar6 + 1),(long)(0x46 - (int)lVar6),
                                   "%016llx",uVar4);
        iVar1 = iVar1 + (int)lVar6 + 1;
        if (0x46 < iVar1) {
          iVar1 = 0x47;
        }
        *(undefined1 *)((long)&uStack_a8 + (long)iVar1) = 0;
        lVar6 = *(long *)(param_2 + 0xb8);
        auStack_c8[0] = 0;
        puStack_b8 = auStack_c8;
        uStack_b0 = 0x10;
        ppuStack_d0 = &PTR_FUN_710509cc08;
        FUN_71001b47e0((long)&ppuStack_d0,(char *)&uStack_a8,-1);
        FUN_71001b2f70(lVar6 + 0x180,(long)&ppuStack_d0);
        ppuStack_d0 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&ppuStack_d0);
      }
      if (*(int *)(param_2 + 0x154) == 1) goto LAB_71000d82e0;
    }
    uVar3 = FUN_710024e200(*(long *)(param_2 + 0x58),(long *)(param_2 + 0x140),
                           *(long *)(param_2 + 0xb8),*(ulong *)(param_2 + 0xa8));
    if ((uVar3 & 1) == 0) {
      uStack_a8 = 0xac5a;
    }
    else {
      *(int **)(param_2 + 0x2c0) = param_3;
      FUN_71000b4160(param_3);
      *(undefined4 *)(param_2 + 0x550) = 0;
      *(undefined2 *)(param_2 + 0x554) = 0x100;
      *(undefined4 *)(param_2 + 0x558) = 0;
      *(undefined8 *)(param_2 + 0x560) = 0;
      (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
      uStack_a8 = 0;
    }
  }
  else {
LAB_71000d82e0:
    uStack_a8 = 0x10c08;
  }
LAB_71000d82ec:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_a8 | 4));
  ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&uStack_a8 | 4),(Result *)&ppuStack_d0);
  FUN_71000bce50(param_1,&uStack_a8);
  return;
}

