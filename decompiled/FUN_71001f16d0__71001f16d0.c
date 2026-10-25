// addr:      71001f16d0
// offset:    0x1f16d0
// name:      FUN_71001f16d0
// mangled:   
// signature: undefined __cdecl FUN_71001f16d0(long param_1, long param_2)


void FUN_71001f16d0(long param_1,long param_2)

{
  long ****pppplVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long lVar7;
  long ****pppplVar8;
  int local_14c;
  undefined **local_138;
  char local_130 [16];
  char *local_120;
  undefined8 uStack_118;
  undefined **local_110;
  char local_108 [16];
  char *local_f8;
  undefined8 uStack_f0;
  long ***local_e8;
  long ***local_e0;
  long local_d8;
  
  pppplVar8 = *(long *****)(param_2 + 0x20);
  pppplVar1 = (long ****)(param_2 + 0x18);
  if (pppplVar1 != pppplVar8) {
    local_14c = 0;
    do {
      uVar4 = FUN_71001f2ba0((long)(pppplVar8 + 2),"type",0);
      if (((uint)uVar4 >> 1 & 1) == 0) {
        bVar2 = false;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x20);
        if (param_1 + 0x18 == lVar7) {
          bVar2 = false;
        }
        else {
          do {
            local_e8 = (long ***)((ulong)local_e8 & 0xffffffffffffff00);
            if (*(char *)(lVar7 + 0x78) == '\0') {
              FUN_71001f2180(lVar7 + 0x10);
              iVar3 = FUN_71001bef20(*(long *)(lVar7 + 0x18));
            }
            else {
              iVar3 = FUN_71001bef20(*(long *)(lVar7 + 0x18));
            }
            if (iVar3 != 0) {
              FUN_71001bef30(*(long *)(lVar7 + 0x18),(char *)&local_e8,0x80);
            }
            uStack_f0 = 0x10;
            local_108[0] = '\0';
            local_110 = &PTR_FUN_710509cc08;
            local_f8 = local_108;
            FUN_71001b47e0((long)&local_110,(char *)&local_e8,-1);
            local_e8 = (long ***)((ulong)local_e8 & 0xffffffffffffff00);
            if (*(char *)(pppplVar8 + 0xf) == '\0') {
              FUN_71001f2180((long)(pppplVar8 + 2));
              iVar3 = FUN_71001bef20((long)pppplVar8[3]);
            }
            else {
              iVar3 = FUN_71001bef20((long)pppplVar8[3]);
            }
            if (iVar3 != 0) {
              FUN_71001bef30((long)pppplVar8[3],(char *)&local_e8,0x80);
            }
            local_130[0] = '\0';
            uStack_118 = 0x10;
            local_138 = &PTR_FUN_710509cc08;
            local_120 = local_130;
            FUN_71001b47e0((long)&local_138,(char *)&local_e8,-1);
            bVar2 = FUN_71001b4e00(local_f8,local_120);
            local_138 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_138);
            local_110 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_110);
          } while ((!bVar2) && (lVar7 = *(long *)(lVar7 + 8), param_1 + 0x18 != lVar7));
        }
        local_14c = local_14c + 1;
        if (bVar2 != false) break;
      }
      pppplVar8 = (long ****)pppplVar8[1];
    } while (pppplVar1 != pppplVar8);
    if (local_14c != 0) {
      local_e8 = (long ***)&local_e8;
      local_d8 = 0;
      local_e0 = local_e8;
      if ((bVar2 != false) && (pppplVar8 = *(long *****)(param_2 + 0x20), pppplVar1 != pppplVar8)) {
        do {
          uVar4 = FUN_71001f2ba0((long)(pppplVar8 + 2),"type",0);
          if (((uint)uVar4 >> 1 & 1) == 0) {
            pppplVar5 = (long ****)FUN_71001b1820(0x80);
            *pppplVar5 = (long ***)0x0;
            pppplVar5[2] = (long ***)&PTR_FUN_7104f57900;
            pppplVar5[6] = (long ***)0x0;
            pppplVar5[5] = (long ***)(pppplVar5 + 6);
            pppplVar5[9] = (long ***)0x0;
            pppplVar5[7] = (long ***)0x0;
            pppplVar5[8] = (long ***)(pppplVar5 + 9);
            pppplVar5[0xc] = (long ***)0x0;
            pppplVar5[10] = (long ***)0x0;
            pppplVar5[0xb] = (long ***)(pppplVar5 + 0xc);
            *(undefined2 *)(pppplVar5 + 0xf) = 1;
            *(undefined1 *)((long)pppplVar5 + 0x7a) = 0;
            pppplVar5[0xd] = (long ***)0x0;
            pppplVar5[0xe] = (long ***)0x0;
            ppplVar6 = (long ***)FUN_71001af850(0x90);
            if (ppplVar6 != (long ***)0x0) {
              FUN_71001beb40(ppplVar6);
            }
            pppplVar5[3] = ppplVar6;
            FUN_71001f1f40((long)(pppplVar5 + 2),(long)(pppplVar8 + 2));
            *pppplVar5 = local_e8;
            pppplVar5[1] = (long ***)&local_e8;
            local_e8[1] = (long **)pppplVar5;
            local_d8 = local_d8 + 1;
            local_e8 = (long ***)pppplVar5;
          }
          pppplVar8 = (long ****)pppplVar8[1];
        } while (pppplVar1 != pppplVar8);
      }
      pppplVar8 = *(long *****)(param_2 + 0x20);
      if (pppplVar1 != pppplVar8) {
        do {
          uVar4 = FUN_71001f2ba0((long)(pppplVar8 + 2),"type",0);
          if (((uint)uVar4 >> 1 & 1) != 0) {
            pppplVar5 = (long ****)FUN_71001b1820(0x80);
            *pppplVar5 = (long ***)0x0;
            pppplVar5[2] = (long ***)&PTR_FUN_7104f57900;
            pppplVar5[6] = (long ***)0x0;
            pppplVar5[5] = (long ***)(pppplVar5 + 6);
            pppplVar5[9] = (long ***)0x0;
            pppplVar5[7] = (long ***)0x0;
            pppplVar5[8] = (long ***)(pppplVar5 + 9);
            pppplVar5[0xc] = (long ***)0x0;
            pppplVar5[10] = (long ***)0x0;
            pppplVar5[0xb] = (long ***)(pppplVar5 + 0xc);
            *(undefined2 *)(pppplVar5 + 0xf) = 1;
            *(undefined1 *)((long)pppplVar5 + 0x7a) = 0;
            pppplVar5[0xd] = (long ***)0x0;
            pppplVar5[0xe] = (long ***)0x0;
            ppplVar6 = (long ***)FUN_71001af850(0x90);
            if (ppplVar6 != (long ***)0x0) {
              FUN_71001beb40(ppplVar6);
            }
            pppplVar5[3] = ppplVar6;
            FUN_71001f1f40((long)(pppplVar5 + 2),(long)(pppplVar8 + 2));
            *pppplVar5 = local_e8;
            pppplVar5[1] = (long ***)&local_e8;
            local_e8[1] = (long **)pppplVar5;
            local_d8 = local_d8 + 1;
            local_e8 = (long ***)pppplVar5;
          }
          pppplVar8 = (long ****)pppplVar8[1];
        } while (pppplVar1 != pppplVar8);
      }
      if (pppplVar1 != &local_e8) {
        pppplVar8 = *(long *****)(param_2 + 0x20);
        pppplVar5 = (long ****)local_e0;
        if (&local_e8 != (long ****)local_e0) {
          do {
            if (pppplVar1 == pppplVar8) break;
            FUN_71001f1f40((long)(pppplVar8 + 2),(long)(pppplVar5 + 2));
            pppplVar5 = (long ****)pppplVar5[1];
            pppplVar8 = (long ****)pppplVar8[1];
          } while (&local_e8 != pppplVar5);
        }
        if (pppplVar1 == pppplVar8) {
          FUN_7100219890((long)pppplVar1,(long *)pppplVar1,(long)pppplVar5,(long)&local_e8);
        }
        else {
          lVar7 = *(long *)(param_2 + 0x18);
          ppplVar6 = *pppplVar8;
          ppplVar6[1] = *(long ***)(lVar7 + 8);
          **(undefined8 **)(lVar7 + 8) = ppplVar6;
          do {
            pppplVar5 = (long ****)pppplVar8[1];
            *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + -1;
            (*(code *)*pppplVar8[2])();
            FUN_71001b1870((long)pppplVar8);
            pppplVar8 = pppplVar5;
          } while (pppplVar1 != pppplVar5);
        }
      }
      if (local_d8 != 0) {
        ppplVar6 = (long ***)*local_e0;
        ppplVar6[1] = local_e8[1];
        *local_e8[1] = (long *)ppplVar6;
        local_d8 = 0;
        pppplVar1 = (long ****)local_e0;
        while (pppplVar1 != &local_e8) {
          pppplVar8 = (long ****)pppplVar1[1];
          (*(code *)*pppplVar1[2])();
          FUN_71001b1870((long)pppplVar1);
          pppplVar1 = pppplVar8;
        }
      }
    }
  }
  return;
}

