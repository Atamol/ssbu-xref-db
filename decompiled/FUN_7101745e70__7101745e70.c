// addr:      7101745e70
// offset:    0x1745e70
// name:      FUN_7101745e70
// mangled:   
// signature: undefined __cdecl FUN_7101745e70(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101745e70(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  long ******pppppplVar3;
  ulong uVar4;
  long *****ppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long *****ppppplVar9;
  ulong *puVar10;
  uint uVar11;
  long lVar12;
  long *******ppppppplVar13;
  long ***local_b8;
  undefined1 local_b0 [64];
  ulong *local_70;
  long *******local_68;
  long *******local_60;
  long local_58;
  
  lVar12 = *(long *)(*DAT_7105329f98 + 0x30);
  ppppplVar9 = (long *****)0x0;
  local_60 = (long *******)0x0;
  local_58 = 0;
  ppppppplVar13 = (long *******)&local_60;
  local_68 = ppppppplVar13;
  do {
    ppppppplVar8 = local_60;
    pppppplVar3 = (long ******)
                  FUN_710392e290(0x10,0x30,param_3,param_4,param_5,param_6,param_7,param_8);
    if (pppppplVar3 == (long ******)0x0) {
      local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (long ***)&DAT_00000030;
      param_3 = &local_b8;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      pppppplVar3 = (long ******)
                    FUN_710392e290(0x10,0x30,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    ppppplVar5 = (long *****)(ulong)*(ushort *)(lVar12 + (long)ppppplVar9 * 0x24 + 0xc);
    pppppplVar3[4] = ppppplVar5;
    pppppplVar3[5] = ppppplVar9;
    ppppppplVar7 = ppppppplVar13;
    while (ppppppplVar6 = ppppppplVar7, ppppppplVar8 != (long *******)0x0) {
      while (ppppppplVar6 = ppppppplVar8, (long)ppppppplVar6[4] <= (long)ppppplVar5) {
        ppppppplVar7 = ppppppplVar6 + 1;
        ppppppplVar8 = (long *******)*ppppppplVar7;
        if ((long *******)*ppppppplVar7 == (long *******)0x0) goto LAB_7101745f5c;
      }
      ppppppplVar7 = ppppppplVar6;
      ppppppplVar8 = (long *******)*ppppppplVar6;
    }
LAB_7101745f5c:
    *pppppplVar3 = (long *****)0x0;
    pppppplVar3[1] = (long *****)0x0;
    pppppplVar3[2] = (long *****)ppppppplVar6;
    *ppppppplVar7 = pppppplVar3;
    if ((long *******)*local_68 != (long *******)0x0) {
      pppppplVar3 = *ppppppplVar7;
      local_68 = (long *******)*local_68;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((long *)local_60,(long *)pppppplVar3);
    ppppplVar9 = (long *****)((long)ppppplVar9 + 1);
    local_58 = local_58 + 1;
  } while (ppppplVar9 != (long *****)0x7d0);
  FUN_710375aa90((long *)&local_70,"spirits_count",param_3,param_4,param_5,param_6,param_7,param_8);
  puVar10 = local_70;
  if (ppppppplVar13 != local_68) {
    uVar11 = 0;
    do {
      ppppppplVar8 = ppppppplVar13;
      ppppppplVar7 = (long *******)*ppppppplVar13;
      if ((long *******)*ppppppplVar13 == (long *******)0x0) {
        do {
          ppppppplVar6 = (long *******)ppppppplVar8[2];
          bVar2 = (long *******)*ppppppplVar6 == ppppppplVar8;
          ppppppplVar8 = ppppppplVar6;
        } while (bVar2);
      }
      else {
        do {
          ppppppplVar6 = ppppppplVar7;
          ppppppplVar7 = (long *******)ppppppplVar6[1];
        } while ((long *******)ppppppplVar6[1] != (long *******)0x0);
      }
      if (ppppppplVar6[4] == (long ******)0x0) {
        puVar10 = local_70;
        if (uVar11 == 0) goto joined_r0x00710174616c;
        break;
      }
      local_b0[0] = 0;
      local_b8 = (long ***)0x0;
      FUN_710062dc20((uint *)&local_b8,"spirits_id_%02d");
      puVar10 = local_70;
      pppppplVar3 = *ppppppplVar13;
      ppppppplVar8 = ppppppplVar13;
      if (pppppplVar3 == (long ******)0x0) {
        do {
          bVar2 = (long *******)*ppppppplVar8[2] == ppppppplVar8;
          ppppppplVar8 = (long *******)ppppppplVar8[2];
        } while (bVar2);
      }
      else {
        do {
          pppppplVar3 = (long ******)pppppplVar3[1];
        } while (pppppplVar3 != (long ******)0x0);
      }
      nn::prepo::PlayReport::Add((char *)(*local_70 + 0x4020),(long)local_b0);
      FUN_710062dc20((uint *)&local_b8,"spirits_count_%02d");
      pppppplVar3 = *ppppppplVar13;
      ppppppplVar8 = ppppppplVar13;
      if (pppppplVar3 == (long ******)0x0) {
        do {
          bVar2 = (long *******)*ppppppplVar8[2] == ppppppplVar8;
          ppppppplVar8 = (long *******)ppppppplVar8[2];
        } while (bVar2);
      }
      else {
        do {
          pppppplVar3 = (long ******)pppppplVar3[1];
        } while (pppppplVar3 != (long ******)0x0);
      }
      nn::prepo::PlayReport::Add((char *)(*puVar10 + 0x4020),(long)local_b0);
      uVar11 = uVar11 + 1;
      if (0x31 < uVar11) break;
      ppppppplVar8 = (long *******)*ppppppplVar13;
      ppppppplVar7 = ppppppplVar13;
      if ((long *******)*ppppppplVar13 == (long *******)0x0) {
        do {
          ppppppplVar13 = (long *******)ppppppplVar7[2];
          bVar2 = (long *******)*ppppppplVar13 == ppppppplVar7;
          ppppppplVar7 = ppppppplVar13;
        } while (bVar2);
      }
      else {
        do {
          ppppppplVar13 = ppppppplVar8;
          ppppppplVar8 = (long *******)ppppppplVar13[1];
        } while ((long *******)ppppppplVar13[1] != (long *******)0x0);
      }
    } while (ppppppplVar13 != local_68);
    iVar1 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar1 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar1)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*puVar10 + 0x4020));
  }
joined_r0x00710174616c:
  local_70 = (ulong *)0x0;
  if (puVar10 != (ulong *)0x0) {
    local_70 = (ulong *)0x0;
    uVar4 = *puVar10;
    *puVar10 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40((ulong)puVar10);
  }
  FUN_71017461b0(local_60);
  return;
}

