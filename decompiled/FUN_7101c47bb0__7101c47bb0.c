// addr:      7101c47bb0
// offset:    0x1c47bb0
// name:      FUN_7101c47bb0
// mangled:   
// signature: bool __cdecl FUN_7101c47bb0(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_7101c47bb0(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ushort local_260 [24];
  undefined4 local_230;
  uint local_22c;
  undefined4 uStack_228;
  undefined1 local_224;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined2 local_210;
  undefined8 auStack_208 [52];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined1 local_58;
  
  if (*(int *)(*(long *)(param_1 + 0x170) + 200) == 0) {
    bVar3 = false;
  }
  else {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x170) + 0x102);
    uVar2 = uVar1 >> 8 & 1;
    bVar3 = uVar2 != 0 || (uVar1 & 0xff) != 0;
    if ((uVar2 != 0 || (uVar1 & 0xff) != 0) &&
       (puVar7 = *(undefined8 **)(param_1 + 0x40), puVar7 != (undefined8 *)0x0)) {
      if (uVar1 >> 8 == 0) {
        if ((*(char *)(param_1 + 0x178) == '\x02') && ((uVar1 & 0xff) != 2)) {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          ram0x0071053069a4 = 0xffffffff;
          DAT_7105306998 = &DAT_c1ffff0000000000;
          DAT_71053069a0._0_1_ = 0;
          DAT_71053069a8._4_4_ = 0;
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          DAT_7105308760 = &DAT_100000001;
          if (DAT_7105308768 != 1) {
            DAT_7105308768 = 1;
            lVar8 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
            if (*(char *)(lVar8 + 0x26a62) == '\0') {
              *(ulong *)(lVar8 + 0x26a90) = *(ulong *)(lVar8 + 0x26a90) | 1;
            }
          }
          FUN_710179e900(0x7105308760,1);
          local_230 = 0xffffffff;
          local_260[0] = 0;
          local_22c = local_22c & 0xffffff00;
          uStack_228 = 0;
          local_224 = 0;
          local_210 = 0;
          local_220 = &DAT_3f8000003f800000;
          local_218 = &DAT_3f8000003f800000;
          FUN_71017abd00(auStack_208);
          local_58 = 0xff;
          DAT_71053097f0 = 0xffffffff;
          DAT_71053097f8._0_4_ = 0;
          local_60 = 0xb95d0753f;
          ram0x007105309804 = 0xffffffff;
          unique0x10000215 = 0xffff00000000;
          DAT_7105309800._2_2_ = 0xffff;
          DAT_710530980c = 0xffffffffffffffff;
          local_68 = 0;
          DAT_7105309814 = 0xffff;
          FUN_7101696040((uint *)&DAT_7105309818,local_260);
          DAT_7105309850._0_4_ = local_230;
          DAT_710530985c = local_224;
          unique0x10000239 = CONCAT44(uStack_228,local_22c);
          DAT_7105309870 = local_210;
          DAT_7105309868 = local_218;
          DAT_7105309860 = local_220;
          FUN_7101785360((undefined4 *)&DAT_7105309878,(undefined4 *)auStack_208);
          DAT_7105309a28 = local_58;
          DAT_7105309a20 = local_60;
          DAT_7105309a18 = CONCAT71(uStack_67,local_68);
          puVar7 = *(undefined8 **)(param_1 + 0x40);
          if ((long *)*puVar7 != (long *)0x0) {
            FUN_7103375650((long *)*puVar7,"g_fighter_name_2p",&DAT_71042d5020);
            puVar7 = *(undefined8 **)(param_1 + 0x40);
          }
        }
        *(char *)(param_1 + 0x178) = (char)uVar1;
      }
      if ((long *)*puVar7 != (long *)0x0) {
        FUN_7103375650((long *)*puVar7,"g_result_melee_type",&DAT_71042b2a84);
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      puVar6 = DAT_7105306980;
      DAT_7105306978._2_1_ = *(undefined1 *)(param_1 + 0x178);
      lVar8 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
      uVar4 = FUN_71032632a0(lVar8,(ulong)DAT_7105306980);
      if ((uVar4 & 1) != 0) {
        puVar6 = FUN_71032631a0(lVar8,0x11b1ccb807);
      }
      FUN_7101797560(puVar6,3,0);
      if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"g_is_vip_fighter",&DAT_71043cdb7b)
        ;
      }
    }
  }
  return bVar3;
}

