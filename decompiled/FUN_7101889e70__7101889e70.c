// addr:      7101889e70
// offset:    0x1889e70
// name:      FUN_7101889e70
// mangled:   
// signature: undefined __cdecl FUN_7101889e70(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101889e70(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long *********ppppppppplVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long ********local_88;
  ulong local_80;
  undefined **local_50;
  ulong local_48;
  
  lVar12 = *(long *)(DAT_71052c4c58 + 8);
  iVar5 = *(int *)(param_1 + 0x1cc);
  if (iVar5 == 0x1e) {
    if (DAT_710532f7d8 == 0) goto LAB_7101889f14;
    lVar10 = *(long *)(DAT_710532f7d8 + 8);
    std::mutex::lock();
    *(uint *)(lVar10 + 0xe8) = *(uint *)(lVar10 + 0xe8) | 4;
    *(undefined1 *)(lVar10 + 0xf1) = 1;
    *(undefined1 *)(lVar10 + 0xf5) = 0;
    *(undefined1 *)(*(long *)(*(long *)(lVar10 + 0xa0) + 0x80) + 0x1cc) =
         *(undefined1 *)(lVar10 + 0xf4);
    *(undefined4 *)(lVar10 + 0xec) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0xf8) = 0x8ffff0000000000;
    *(undefined4 *)(lVar10 + 0x100) = 7;
    std::mutex::unlock();
    iVar5 = *(int *)(param_1 + 0x1cc);
  }
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x1f0) == '\0') {
      if (*(int *)(param_1 + 0x1c4) < 1) {
        return;
      }
      *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + -1;
      return;
    }
    if (((*(char *)(param_1 + 0x24d) != '\0') ||
        ((*(long *)(param_1 + 0x1e8) != 0 &&
         (*(int *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + 0x2c0) - 2U < 3)))) &&
       (*(char *)(param_1 + 0x24e) == '\0')) {
      bVar1 = *(byte *)(param_1 + 0x1f1);
      if (((ulong)bVar1 < 8) &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + (ulong)bVar1 * 0x1e8 + 0xaf8) ==
          '\x01')) {
        uVar4 = 1 << (ulong)(bVar1 & 0x1f);
        local_88 = (long ********)CONCAT44(local_88._4_4_,uVar4);
        if ((*(uint *)(param_1 + 0x248) & uVar4) == 0) {
          lVar11 = *(long *)(lVar12 + 0x88);
          lVar10 = *(long *)(lVar11 + 0x9ff8);
          if (((((lVar10 != 0) &&
                (uVar4 = *(uint *)(param_1 + 0x244), uVar3 = FUN_71016f6340(lVar11 + 0xa010,lVar10),
                (1 << (ulong)(uVar3 & 0x1f) & uVar4) == 0)) && (lVar10 != 0)) &&
              ((uVar4 = FUN_71016f6340(lVar11 + 0xa010,lVar10), (~uVar4 & 0xff) != 0 &&
               (*(long *)(DAT_710533a0a0 + 0x30) != 0)))) &&
             (lVar10 = *(long *)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108), lVar10 != 0)) {
            param_5 = (long ****)&DAT_00000009;
            param_3 = &local_88;
            param_4 = (byte ****)&DAT_00000004;
            FUN_7103701910(lVar10,0x191,param_3,4,9);
          }
        }
      }
    }
    uVar6 = FUN_71016a86a0(*(long *)(lVar12 + 0x88),(ulong)*(byte *)(param_1 + 0x1f1),
                           (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if ((int)uVar6 != 0) {
      if (0 < *(int *)(param_1 + 0x1c4)) {
        *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + -1;
      }
      if (*(char *)(param_1 + 0x1f0) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      return;
    }
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x1e8) + 0x80);
    bVar1 = *(byte *)(param_1 + 0x1f1);
    if (((*(byte *)(uVar9 + 0x1920) != bVar1) && (*(byte *)(uVar9 + 0x1861) != bVar1)) &&
       ((bVar1 < 8 && (lVar10 = uVar9 + (ulong)bVar1 * 0x1e8, *(char *)(lVar10 + 0xafc) != '\0'))))
    {
      *(undefined1 *)(lVar10 + 0xafc) = 0;
      FUN_7101c6cac0(uVar9,(uint)bVar1);
      FUN_7101c76940(*(long *)(uVar9 + 0x450),bVar1,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      local_88 = (long ********)0x0;
      FUN_7101696040((uint *)&local_88,(ushort *)(uVar9 + (ulong)bVar1 * 0x1e8 + 0x924));
      ppppppppplVar8 = &local_88;
      FUN_7101c74ac0((long *)(uVar9 + 0x480),3,(long ****)ppppppppplVar8,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101c78060(*(undefined8 **)(*(long *)(uVar9 + 0x468) + 0x80),extraout_x1,ppppppppplVar8,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_88,*(long *)(uVar9 + 0x478) + 0x88,(byte ****)"set_parts_header_btn",
                     ppppppppplVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_50,(long)&local_88,(long ****)"set_txt_now",ppppppppplVar8,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_50,(byte *)"mnu_online_room_search_participants_n",1);
      uVar9 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      uVar9 = local_80;
      local_88 = (long ********)&PTR_FUN_710523d988;
      local_80 = 0;
      if (uVar9 != 0) {
        uVar7 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar9);
      }
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x1e8) + 0x80);
    }
    *(undefined1 *)(uVar9 + 0x1b25) = 0;
  }
LAB_7101889f14:
  lVar12 = *(long *)(lVar12 + 0x88);
  if (((*(long *)(lVar12 + 0x30) == 0) && (*(int *)(lVar12 + 0x70) == 0)) &&
     (*(long *)(lVar12 + 0x60) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x1f1);
    if ((ulong)bVar1 == 0xff) {
      cVar2 = DAT_71052c4cd8;
      if (((DAT_71052c4cf8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&DAT_71052c4cf8), cVar2 = DAT_71052c4cd8, iVar5 != 0)) {
        DAT_71052c4ccc = 0xffffff;
        DAT_71052c4ca0 = 0;
        DAT_71052c4ca8 = 0;
        DAT_71052c4cd0 = 1;
        DAT_71052c4cda = 0xff0000;
        DAT_71052c4cca = 0;
        DAT_71052c4cc8 = 0;
        DAT_71052c4cb0 = 0;
        DAT_71052c4cd4 = 0;
        DAT_71052c4cd8 = '\0';
        DAT_71052c4cf0 = 0;
        DAT_71052c4c90 = 0;
        DAT_71052c4c98 = 0;
        DAT_71052c4c80 = 0;
        DAT_71052c4c88 = 0;
        DAT_71052c4ce0 = 0xffffffffffffffff;
        DAT_71052c4ce8 = 0;
        __cxa_guard_release(&DAT_71052c4cf8);
        cVar2 = DAT_71052c4cd8;
      }
    }
    else {
      if (0xf < bVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      cVar2 = *(char *)(lVar12 + (ulong)bVar1 * 0x78 + 0xa070);
    }
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x1f0) != '\0') {
        *(undefined1 *)(param_1 + 0x1f0) = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c4)) {
        *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + -1;
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + 0x1b25) = 1;
      if (DAT_710532f7d8 != 0) {
        lVar12 = *(long *)(DAT_710532f7d8 + 8);
        std::mutex::lock();
        uVar4 = *(uint *)(lVar12 + 0xe8) & 0xfffffffb;
        *(uint *)(lVar12 + 0xe8) = uVar4;
        if (uVar4 == 0) {
          *(undefined4 *)(lVar12 + 0xf1) = 0;
          *(undefined4 *)(lVar12 + 0xec) = 0xffffffff;
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (DAT_71052c51cf != '\0') {
            if (DAT_71052c3760 != (long *)0x0) {
              *(undefined1 *)(*DAT_71052c3760 + 0xb) = 0;
            }
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
              FUN_7101764000();
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            DAT_71052c51cf = '\0';
          }
        }
        std::mutex::unlock();
      }
    }
  }
  return;
}

