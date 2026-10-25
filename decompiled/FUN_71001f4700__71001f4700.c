// addr:      71001f4700
// offset:    0x1f4700
// name:      FUN_71001f4700
// mangled:   
// signature: undefined FUN_71001f4700(void)


undefined4 FUN_71001f4700(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 auStack_178 [18];
  undefined **ppuStack_e8;
  long *plStack_e0;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  ushort uStack_80;
  undefined1 uStack_7e;
  undefined4 auStack_78 [6];
  
  FUN_71001bf280(auStack_78);
  FUN_71001bf310(auStack_78);
  FUN_71001bf440(auStack_78);
  iVar1 = FUN_71001bf440(auStack_78);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_71001bf440(auStack_78);
    if (iVar1 != 0) {
      uVar9 = 0;
      do {
        lVar4 = FUN_71001bf450((long)auStack_78,uVar9);
        uVar2 = FUN_71001bf270(lVar4);
        if ((uVar2 >> 2 & 1) == 0) {
          puStack_c8 = (undefined8 *)0x0;
          uStack_c0 = 0;
          puStack_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          uStack_7e = 0;
          puStack_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          pcStack_88 = (char *)0x0;
          uStack_80 = 0x100;
          ppuStack_e8 = &PTR_FUN_7104f57900;
          ppuStack_d0 = &puStack_c8;
          ppuStack_b8 = &puStack_b0;
          ppuStack_a0 = &puStack_98;
          plVar5 = FUN_71001af850(0x90);
          if (plVar5 != (long *)0x0) {
            FUN_71001beb40(plVar5);
          }
          plStack_e0 = plVar5;
          if (pcStack_88 != (char *)0x0) {
            FUN_71001b1870((long)pcStack_88 + -4);
            pcStack_88 = (char *)0x0;
            uStack_80 = uStack_80 & 0xff;
          }
          sVar6 = strlen("prudp:/");
          puVar7 = FUN_71001b1820(sVar6 + 5);
          pcStack_88 = (char *)((long)puVar7 + 4);
          *(int *)puVar7 = (int)(sVar6 + 1);
          strncpy(pcStack_88,"prudp:/",sVar6 + 1);
          pcStack_88[sVar6] = '\0';
          uStack_80 = 0x100;
          uStack_7e = 0;
          FUN_71001beb40(auStack_178);
          puVar8 = (undefined4 *)FUN_71001bf450((long)auStack_78,uVar9);
          uVar3 = FUN_71001bf250(puVar8);
          FUN_71001bef90((long)auStack_178,uVar3);
          if ((char)uStack_80 == '\0') {
            FUN_71001f2180((long)&ppuStack_e8);
          }
          FUN_71001bec20((long)plStack_e0,(long)auStack_178);
          uStack_80 = uStack_80 & 0xff;
          plVar5 = FUN_71001b1820(0x80);
          *plVar5 = 0;
          plVar5[2] = (long)&PTR_FUN_7104f57900;
          plVar5[6] = 0;
          plVar5[5] = (long)(plVar5 + 6);
          plVar5[9] = 0;
          plVar5[7] = 0;
          plVar5[8] = (long)(plVar5 + 9);
          plVar5[0xc] = 0;
          plVar5[10] = 0;
          plVar5[0xb] = (long)(plVar5 + 0xc);
          plVar5[0xd] = 0;
          plVar5[0xe] = 0;
          *(undefined2 *)(plVar5 + 0xf) = 1;
          *(undefined1 *)((long)plVar5 + 0x7a) = 0;
          puVar7 = FUN_71001af850(0x90);
          if (puVar7 != (undefined8 *)0x0) {
            FUN_71001beb40(puVar7);
          }
          plVar5[3] = (long)puVar7;
          FUN_71001f1f40((long)(plVar5 + 2),(long)&ppuStack_e8);
          plVar5[1] = (long)param_2;
          lVar4 = *param_2;
          *plVar5 = lVar4;
          *(long **)(lVar4 + 8) = plVar5;
          *param_2 = (long)plVar5;
          param_2[2] = param_2[2] + 1;
          FUN_71001bef00();
          ppuStack_e8 = &PTR_FUN_7104f57900;
          if (pcStack_88 != (char *)0x0) {
            FUN_71001b1870((long)(pcStack_88 + -4));
            pcStack_88 = (char *)0x0;
            uStack_80 = uStack_80 & 0xff;
          }
          if (plStack_e0 != (long *)0x0) {
            (**(code **)(*plStack_e0 + 8))();
          }
          FUN_7101711670(&ppuStack_a0,puStack_98);
          FUN_7101711670(&ppuStack_b8,puStack_b0);
          FUN_7100219ca0(&ppuStack_d0,puStack_c8);
        }
        uVar9 = uVar9 + 1;
        uVar2 = FUN_71001bf440(auStack_78);
      } while (uVar9 < uVar2);
    }
    if (param_2[2] == 0) {
      pcStack_88 = (char *)0x0;
      puStack_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      ppuStack_e8 = &PTR_FUN_7104f57900;
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      ppuStack_d0 = &puStack_c8;
      ppuStack_b8 = &puStack_b0;
      ppuStack_a0 = &puStack_98;
      puStack_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      uStack_7e = 0;
      uStack_80 = 0x100;
      plVar5 = FUN_71001af850(0x90);
      if (plVar5 != (long *)0x0) {
        FUN_71001beb40(plVar5);
      }
      plStack_e0 = plVar5;
      if (pcStack_88 != (char *)0x0) {
        FUN_71001b1870((long)pcStack_88 + -4);
        pcStack_88 = (char *)0x0;
        uStack_80 = uStack_80 & 0xff;
      }
      sVar6 = strlen("prudp:/");
      puVar7 = FUN_71001b1820(sVar6 + 5);
      pcStack_88 = (char *)((long)puVar7 + 4);
      *(int *)puVar7 = (int)(sVar6 + 1);
      strncpy(pcStack_88,"prudp:/",sVar6 + 1);
      pcStack_88[sVar6] = '\0';
      uStack_7e = 0;
      uStack_80 = 0x100;
      FUN_71001beb40(auStack_178);
      puVar8 = (undefined4 *)FUN_71001bf450((long)auStack_78,0);
      uVar3 = FUN_71001bf250(puVar8);
      FUN_71001bef90((long)auStack_178,uVar3);
      if ((char)uStack_80 == '\0') {
        FUN_71001f2180((long)&ppuStack_e8);
      }
      FUN_71001bec20((long)plStack_e0,(long)auStack_178);
      uStack_80 = uStack_80 & 0xff;
      plVar5 = FUN_71001b1820(0x80);
      *plVar5 = 0;
      plVar5[2] = (long)&PTR_FUN_7104f57900;
      plVar5[6] = 0;
      plVar5[5] = (long)(plVar5 + 6);
      plVar5[9] = 0;
      plVar5[7] = 0;
      plVar5[8] = (long)(plVar5 + 9);
      plVar5[0xc] = 0;
      plVar5[10] = 0;
      plVar5[0xb] = (long)(plVar5 + 0xc);
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      *(undefined2 *)(plVar5 + 0xf) = 1;
      *(undefined1 *)((long)plVar5 + 0x7a) = 0;
      puVar7 = FUN_71001af850(0x90);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_71001beb40(puVar7);
      }
      plVar5[3] = (long)puVar7;
      FUN_71001f1f40((long)(plVar5 + 2),(long)&ppuStack_e8);
      plVar5[1] = (long)param_2;
      lVar4 = *param_2;
      *plVar5 = lVar4;
      *(long **)(lVar4 + 8) = plVar5;
      *param_2 = (long)plVar5;
      param_2[2] = param_2[2] + 1;
      FUN_71001bef00();
      ppuStack_e8 = &PTR_FUN_7104f57900;
      if (pcStack_88 != (char *)0x0) {
        FUN_71001b1870((long)(pcStack_88 + -4));
        pcStack_88 = (char *)0x0;
        uStack_80 = uStack_80 & 0xff;
      }
      if (plStack_e0 != (long *)0x0) {
        (**(code **)(*plStack_e0 + 8))();
      }
      FUN_7101711670(&ppuStack_a0,puStack_98);
      FUN_7101711670(&ppuStack_b8,puStack_b0);
      FUN_7100219ca0(&ppuStack_d0,puStack_c8);
    }
    else {
      lVar4 = FUN_71001bf450((long)auStack_78,0);
      (**(code **)(*param_1 + 0x50))(param_1,lVar4);
    }
    uVar3 = 1;
  }
  FUN_71001bf290(auStack_78);
  return uVar3;
}

