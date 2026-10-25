// addr:      7100275590
// offset:    0x275590
// name:      FUN_7100275590
// mangled:   
// signature: undefined FUN_7100275590(void)


void FUN_7100275590(long param_1)

{
  undefined ***pppuVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined **appuStack_80 [5];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  plVar16 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar9;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar16 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar10 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar16 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar10 == 0) {
    uVar11 = 0x80010004;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 2) {
      **(undefined1 **)(param_1 + 0x2a0) = 1;
      ppuStack_58 = *(undefined ***)(param_1 + 0x150);
      uStack_50 = *(undefined8 *)(param_1 + 0x158);
      uStack_48 = *(undefined8 *)(param_1 + 0x160);
      goto LAB_71002759c0;
    }
    FUN_71001b5080(appuStack_80,param_1 + 0x1f0,param_1 + 0x218);
    FUN_71001b5080(&ppuStack_58,(long)appuStack_80,param_1 + 0x240);
    uVar7 = uStack_48;
    uVar15 = uStack_50;
    pppuVar1 = (undefined ***)(param_1 + 200);
    if (pppuVar1 != &ppuStack_58) {
      puVar12 = (undefined1 *)(param_1 + 0xd0);
      uVar3 = *puVar12;
      *puVar12 = (undefined1)uStack_50;
      puVar13 = *(undefined1 **)(param_1 + 0xe0);
      uVar4 = *(undefined1 *)(param_1 + 0xd1);
      *(undefined1 *)(param_1 + 0xd1) = uStack_50._1_1_;
      uStack_50._0_2_ = CONCAT11(uVar4,uVar3);
      uVar3 = *(undefined1 *)(param_1 + 0xd2);
      uStack_50._2_1_ = SUB81(uVar15,2);
      *(undefined1 *)(param_1 + 0xd2) = uStack_50._2_1_;
      uStack_50._0_3_ = CONCAT12(uVar3,(undefined2)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd3);
      uStack_50._3_1_ = SUB81(uVar15,3);
      *(undefined1 *)(param_1 + 0xd3) = uStack_50._3_1_;
      uStack_50._0_4_ = CONCAT13(uVar3,(undefined3)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd4);
      uStack_50._4_1_ = SUB81(uVar15,4);
      *(undefined1 *)(param_1 + 0xd4) = uStack_50._4_1_;
      uStack_50._0_5_ = CONCAT14(uVar3,(undefined4)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd5);
      uStack_50._5_1_ = SUB81(uVar15,5);
      *(undefined1 *)(param_1 + 0xd5) = uStack_50._5_1_;
      uStack_50._0_6_ = CONCAT15(uVar3,(undefined5)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd6);
      uStack_50._6_1_ = SUB81(uVar15,6);
      *(undefined1 *)(param_1 + 0xd6) = uStack_50._6_1_;
      uStack_50._7_1_ = SUB81(uVar15,7);
      uStack_50._0_7_ = CONCAT16(uVar3,(undefined6)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd7);
      *(undefined1 *)(param_1 + 0xd7) = uStack_50._7_1_;
      uStack_50 = CONCAT17(uVar3,(undefined7)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd8);
      *(undefined1 *)(param_1 + 0xd8) = (undefined1)uStack_48;
      uVar4 = *(undefined1 *)(param_1 + 0xd9);
      *(undefined1 *)(param_1 + 0xd9) = uStack_48._1_1_;
      uStack_48._0_2_ = CONCAT11(uVar4,uVar3);
      uVar3 = *(undefined1 *)(param_1 + 0xda);
      uStack_48._2_1_ = SUB81(uVar7,2);
      *(undefined1 *)(param_1 + 0xda) = uStack_48._2_1_;
      uStack_48._0_3_ = CONCAT12(uVar3,(undefined2)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdb);
      uStack_48._3_1_ = SUB81(uVar7,3);
      *(undefined1 *)(param_1 + 0xdb) = uStack_48._3_1_;
      uStack_48._0_4_ = CONCAT13(uVar3,(undefined3)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdc);
      uStack_48._4_1_ = SUB81(uVar7,4);
      *(undefined1 *)(param_1 + 0xdc) = uStack_48._4_1_;
      uStack_48._0_5_ = CONCAT14(uVar3,(undefined4)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdd);
      uStack_48._5_1_ = SUB81(uVar7,5);
      *(undefined1 *)(param_1 + 0xdd) = uStack_48._5_1_;
      uStack_48._0_6_ = CONCAT15(uVar3,(undefined5)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xde);
      uStack_48._6_1_ = SUB81(uVar7,6);
      *(undefined1 *)(param_1 + 0xde) = uStack_48._6_1_;
      uStack_48._7_1_ = SUB81(uVar7,7);
      uStack_48._0_7_ = CONCAT16(uVar3,(undefined6)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdf);
      *(undefined1 *)(param_1 + 0xdf) = uStack_48._7_1_;
      uStack_48 = CONCAT17(uVar3,(undefined7)uStack_48);
      puVar14 = *(undefined8 **)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puStack_40;
      uVar15 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = uStack_38;
      puVar5 = &uStack_50;
      if (puVar13 != puVar12) {
        puVar5 = puVar14;
      }
      bVar6 = puStack_40 == &uStack_50;
      puStack_40 = puVar5;
      uStack_38 = uVar15;
      if (bVar6) {
        *(undefined1 **)(param_1 + 0xe0) = puVar12;
      }
    }
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_58);
    appuStack_80[0] = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)appuStack_80);
    iVar8 = FUN_71001b56d0((long)pppuVar1,"http://");
    if ((iVar8 == 0) || (iVar8 = FUN_71001b56d0((long)pppuVar1,"https://"), iVar8 == 0)) {
      FUN_71001b0270(&ppuStack_58,(long)pppuVar1,"");
      uVar15 = uStack_50;
      uVar7 = uStack_48;
    }
    else {
      FUN_71001b2400(&ppuStack_58,"https://",(long)pppuVar1);
      uVar15 = uStack_50;
      uVar7 = uStack_48;
    }
    uStack_50 = uVar15;
    uStack_48 = uVar7;
    if (pppuVar1 != &ppuStack_58) {
      puVar12 = (undefined1 *)(param_1 + 0xd0);
      uVar3 = *puVar12;
      uStack_50._0_1_ = (undefined1)uVar15;
      *puVar12 = (undefined1)uStack_50;
      puVar13 = *(undefined1 **)(param_1 + 0xe0);
      uVar4 = *(undefined1 *)(param_1 + 0xd1);
      uStack_50._1_1_ = (undefined1)((ulong)uVar15 >> 8);
      *(undefined1 *)(param_1 + 0xd1) = uStack_50._1_1_;
      uStack_50._0_2_ = CONCAT11(uVar4,uVar3);
      uVar3 = *(undefined1 *)(param_1 + 0xd2);
      uStack_50._2_1_ = (undefined1)((ulong)uVar15 >> 0x10);
      *(undefined1 *)(param_1 + 0xd2) = uStack_50._2_1_;
      uStack_50._0_3_ = CONCAT12(uVar3,(undefined2)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd3);
      uStack_50._3_1_ = (undefined1)((ulong)uVar15 >> 0x18);
      *(undefined1 *)(param_1 + 0xd3) = uStack_50._3_1_;
      uStack_50._0_4_ = CONCAT13(uVar3,(undefined3)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd4);
      uStack_50._4_1_ = (undefined1)((ulong)uVar15 >> 0x20);
      *(undefined1 *)(param_1 + 0xd4) = uStack_50._4_1_;
      uStack_50._0_5_ = CONCAT14(uVar3,(undefined4)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd5);
      uStack_50._5_1_ = (undefined1)((ulong)uVar15 >> 0x28);
      *(undefined1 *)(param_1 + 0xd5) = uStack_50._5_1_;
      uStack_50._0_6_ = CONCAT15(uVar3,(undefined5)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd6);
      uStack_50._6_1_ = (undefined1)((ulong)uVar15 >> 0x30);
      *(undefined1 *)(param_1 + 0xd6) = uStack_50._6_1_;
      uStack_50._7_1_ = (undefined1)((ulong)uVar15 >> 0x38);
      uStack_50._0_7_ = CONCAT16(uVar3,(undefined6)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd7);
      *(undefined1 *)(param_1 + 0xd7) = uStack_50._7_1_;
      uStack_50 = CONCAT17(uVar3,(undefined7)uStack_50);
      uVar3 = *(undefined1 *)(param_1 + 0xd8);
      uStack_48._0_1_ = (undefined1)uVar7;
      *(undefined1 *)(param_1 + 0xd8) = (undefined1)uStack_48;
      uVar4 = *(undefined1 *)(param_1 + 0xd9);
      uStack_48._1_1_ = (undefined1)((ulong)uVar7 >> 8);
      *(undefined1 *)(param_1 + 0xd9) = uStack_48._1_1_;
      uStack_48._0_2_ = CONCAT11(uVar4,uVar3);
      uVar3 = *(undefined1 *)(param_1 + 0xda);
      uStack_48._2_1_ = (undefined1)((ulong)uVar7 >> 0x10);
      *(undefined1 *)(param_1 + 0xda) = uStack_48._2_1_;
      uStack_48._0_3_ = CONCAT12(uVar3,(undefined2)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdb);
      uStack_48._3_1_ = (undefined1)((ulong)uVar7 >> 0x18);
      *(undefined1 *)(param_1 + 0xdb) = uStack_48._3_1_;
      uStack_48._0_4_ = CONCAT13(uVar3,(undefined3)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdc);
      uStack_48._4_1_ = (undefined1)((ulong)uVar7 >> 0x20);
      *(undefined1 *)(param_1 + 0xdc) = uStack_48._4_1_;
      uStack_48._0_5_ = CONCAT14(uVar3,(undefined4)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdd);
      uStack_48._5_1_ = (undefined1)((ulong)uVar7 >> 0x28);
      *(undefined1 *)(param_1 + 0xdd) = uStack_48._5_1_;
      uStack_48._0_6_ = CONCAT15(uVar3,(undefined5)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xde);
      uStack_48._6_1_ = (undefined1)((ulong)uVar7 >> 0x30);
      *(undefined1 *)(param_1 + 0xde) = uStack_48._6_1_;
      uStack_48._7_1_ = (undefined1)((ulong)uVar7 >> 0x38);
      uStack_48._0_7_ = CONCAT16(uVar3,(undefined6)uStack_48);
      uVar3 = *(undefined1 *)(param_1 + 0xdf);
      *(undefined1 *)(param_1 + 0xdf) = uStack_48._7_1_;
      uStack_48 = CONCAT17(uVar3,(undefined7)uStack_48);
      puVar14 = *(undefined8 **)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puStack_40;
      uVar15 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = uStack_38;
      puVar5 = &uStack_50;
      if (puVar13 != puVar12) {
        puVar5 = puVar14;
      }
      bVar6 = puStack_40 == &uStack_50;
      puStack_40 = puVar5;
      uStack_38 = uVar15;
      if (bVar6) {
        *(undefined1 **)(param_1 + 0xe0) = puVar12;
      }
    }
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_58);
    if (*(int *)(param_1 + 0x1d0) == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 1;
    }
    uVar11 = 0x10001;
  }
  appuStack_80[0] = (undefined **)CONCAT44(appuStack_80[0]._4_4_,uVar11);
  FUN_71001b4200((undefined4 *)&ppuStack_58,(undefined4 *)appuStack_80);
LAB_71002759c0:
  FUN_7100275400(param_1,(int *)&ppuStack_58);
  return;
}

