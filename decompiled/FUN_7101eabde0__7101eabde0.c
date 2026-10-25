// addr:      7101eabde0
// offset:    0x1eabde0
// name:      FUN_7101eabde0
// mangled:   
// signature: undefined __cdecl FUN_7101eabde0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eabde0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  size_t __n;
  bool bVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  long ****pppplVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *pvVar14;
  void *__dest;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 local_200 [2];
  undefined1 auStack_1f8 [8];
  long local_1f0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined7 uStack_b8;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  pppplVar6 = (long ****)local_200;
  if (0 < param_2) {
    uVar16 = (ulong)param_2;
    if (uVar16 < (ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 2)) {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x138) + uVar16 * 4);
      puVar12 = *(undefined8 **)(*DAT_7105314510 + 0x298);
      puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x238);
      bVar3 = FUN_71017cf490(puVar12,uVar2);
      uVar5 = extraout_x1;
      if (bVar3) {
        local_200[0] = 0;
        memset(auStack_1f8,0,0x10a);
        local_cc = 1;
        uStack_b0 = 0;
        local_c0 = 0xd9ffff0000000000;
        uStack_b8 = 0;
        local_b1 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uVar4 = FUN_71017ceba0(puVar12,uVar2,local_200);
        uVar5 = extraout_x1_00;
        param_3 = pppplVar6;
        if ((local_1f0 != 0) && ((uVar4 & 1) != 0)) {
          lVar9 = *(long *)*puVar15;
          lVar7 = 0;
          while( true ) {
            lVar1 = lVar9 + lVar7;
            *(undefined8 *)(lVar1 + 0xb38) = *(undefined8 *)(lVar1 + 0xb30);
            if (lVar7 == -0x2c0) break;
            *(undefined8 *)(lVar1 + 0xb30) = *(undefined8 *)(lVar1 + 0xb28);
            lVar7 = lVar7 + -0x10;
          }
          *(long *)(lVar9 + 0x870) = local_1f0;
        }
      }
      if ((uVar2 != 0) && (*(char *)(*DAT_7105314510 + 1) == '\0')) {
        plVar13 = (long *)**(undefined8 **)(*DAT_7105314510 + 0x298);
        lVar7 = plVar13[1];
        if ((*plVar13 != lVar7) && (plVar13[0xb] != 0)) {
          plVar10 = plVar13 + 10;
          plVar11 = (long *)*plVar10;
          plVar8 = plVar10;
          if (plVar11 != (long *)0x0) {
            do {
              bVar3 = *(uint *)((long)plVar11 + 0x1c) < uVar2;
              if (!bVar3) {
                plVar8 = plVar11;
              }
              plVar11 = (long *)plVar11[bVar3];
            } while (plVar11 != (long *)0x0);
            if (((plVar8 != plVar10) && (*(uint *)((long)plVar8 + 0x1c) <= uVar2)) &&
               ((int)plVar8[4] != -1)) {
              pvVar14 = (void *)(*plVar13 + (long)(int)plVar8[4] * 0x32198);
              if ((long)pvVar14 + 0x32198 != lVar7) {
                __dest = pvVar14;
                do {
                  pvVar14 = (void *)((long)__dest + 0x32198);
                  memcpy(__dest,pvVar14,0x108);
                  FUN_7101748070((uint *)((long)__dest + 0x108),(ushort *)((long)__dest + 0x322a8));
                  *(undefined8 *)((long)__dest + 0x134) = *(undefined8 *)((long)__dest + 0x322cc);
                  *(undefined8 *)((long)__dest + 0x154) = *(undefined8 *)((long)__dest + 0x322ec);
                  *(undefined8 *)((long)__dest + 0x14c) = *(undefined8 *)((long)__dest + 0x322e4);
                  *(undefined8 *)((long)__dest + 0x144) = *(undefined8 *)((long)__dest + 0x322dc);
                  *(undefined8 *)((long)__dest + 0x13c) = *(undefined8 *)((long)__dest + 0x322d4);
                  *(undefined8 *)((long)__dest + 0x174) = *(undefined8 *)((long)__dest + 0x3230c);
                  *(undefined8 *)((long)__dest + 0x16c) = *(undefined8 *)((long)__dest + 0x32304);
                  *(undefined8 *)((long)__dest + 0x164) = *(undefined8 *)((long)__dest + 0x322fc);
                  *(undefined8 *)((long)__dest + 0x15c) = *(undefined8 *)((long)__dest + 0x322f4);
                  *(undefined4 *)((long)__dest + 0x194) = *(undefined4 *)((long)__dest + 0x3232c);
                  *(undefined8 *)((long)__dest + 0x18c) = *(undefined8 *)((long)__dest + 0x32324);
                  *(undefined8 *)((long)__dest + 0x184) = *(undefined8 *)((long)__dest + 0x3231c);
                  *(undefined8 *)((long)__dest + 0x17c) = *(undefined8 *)((long)__dest + 0x32314);
                  param_3 = (long ****)0x32000;
                  memcpy((void *)((long)__dest + 0x198),(void *)((long)__dest + 0x32330),0x32000);
                  lVar9 = (long)__dest + 0x64330;
                  uVar5 = extraout_x1_01;
                  __dest = pvVar14;
                } while (lVar9 != lVar7);
              }
              plVar13[1] = (long)pvVar14;
              FUN_71017c9d80(plVar13,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
              *(int *)(plVar13 + 0x1f) = (int)plVar13[0x1f] + -1;
              *(undefined1 *)((long)plVar13 + 0xfc) = 1;
            }
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x138);
      pvVar14 = (void *)(lVar7 + uVar16 * 4);
      __n = *(long *)(param_1 + 0x140) - ((long)pvVar14 + 4);
      if (__n != 0) {
        memmove(pvVar14,(void *)((long)pvVar14 + 4),__n);
        lVar7 = *(long *)(param_1 + 0x138);
      }
      pvVar14 = (void *)((long)pvVar14 + ((long)__n >> 2) * 4);
      *(void **)(param_1 + 0x140) = pvVar14;
      if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"LIST_ITEM_NUM",&DAT_71042b2a84);
      }
      FUN_7103783690((long *)(param_1 + 0xf8),(int)((ulong)((long)pvVar14 - lVar7) >> 2));
      return;
    }
  }
  return;
}

