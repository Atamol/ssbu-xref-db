// addr:      71019d44f0
// offset:    0x19d44f0
// name:      FUN_71019d44f0
// mangled:   
// signature: undefined __cdecl FUN_71019d44f0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019d44f0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  size_t __n;
  bool bVar4;
  ulong uVar5;
  long ****pppplVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 local_200 [6];
  long local_1e8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 *local_60;
  
  pppplVar6 = (long ****)local_200;
  if (0 < param_2) {
    uVar10 = (ulong)param_2;
    if (uVar10 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 2)) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x178) + uVar10 * 4);
      puVar9 = *(undefined8 **)(*DAT_7105314510 + 0x88);
      puVar11 = *(undefined8 **)(*DAT_7105314510 + 0x238);
      bVar4 = FUN_71017c84f0(puVar9,uVar3);
      if (bVar4) {
        local_d0 = 0x13ffff0000000000;
        local_c8 = 0x5affff0000000000;
        local_200[0] = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_bc = 0;
        local_c0 = 0;
        local_60 = &DAT_c1ffff0000000000;
        FUN_71017bd310((undefined8 *)local_200);
        uVar5 = FUN_71017c81d0(puVar9,uVar3,local_200);
        param_3 = pppplVar6;
        if ((local_1e8 != 0) && ((uVar5 & 1) != 0)) {
          lVar8 = *(long *)*puVar11;
          lVar7 = 0;
          while( true ) {
            lVar1 = lVar8 + lVar7;
            *(undefined8 *)(lVar1 + 0xb38) = *(undefined8 *)(lVar1 + 0xb30);
            if (lVar7 == -0x2c0) break;
            *(undefined8 *)(lVar1 + 0xb30) = *(undefined8 *)(lVar1 + 0xb28);
            lVar7 = lVar7 + -0x10;
          }
          *(long *)(lVar8 + 0x870) = local_1e8;
        }
      }
      if ((uVar3 != 0) && (*(char *)(*DAT_7105314510 + 1) == '\0')) {
        FUN_71017c7f60((long *)**(undefined8 **)(*DAT_7105314510 + 0x88),(ulong)uVar3,param_3,
                       param_4,param_5,param_6,param_7,param_8);
      }
      lVar7 = *(long *)(param_1 + 0x178);
      pvVar2 = (void *)(lVar7 + uVar10 * 4);
      __n = *(long *)(param_1 + 0x180) - ((long)pvVar2 + 4);
      if (__n != 0) {
        memmove(pvVar2,(void *)((long)pvVar2 + 4),__n);
        lVar7 = *(long *)(param_1 + 0x178);
      }
      pvVar2 = (void *)((long)pvVar2 + ((long)__n >> 2) * 4);
      *(void **)(param_1 + 0x180) = pvVar2;
      if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"LIST_ITEM_NUM",&DAT_71042b2a84);
      }
      FUN_7103783690((long *)(param_1 + 0x138),(int)((ulong)((long)pvVar2 - lVar7) >> 2));
      FUN_710377cc80(*(long *)(param_1 + 0x138),1);
      return;
    }
  }
  return;
}

