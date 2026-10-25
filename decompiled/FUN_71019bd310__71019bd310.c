// addr:      71019bd310
// offset:    0x19bd310
// name:      FUN_71019bd310
// mangled:   
// signature: undefined __cdecl FUN_71019bd310(long param_1, undefined8 * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019bd310(long param_1,undefined8 *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  
  uVar7 = *(ulong *)(param_1 + 0x210);
  uVar1 = SUB84(param_3,0);
  bVar2 = (byte)param_4;
  if (uVar7 != 0) {
    *(ulong *)(param_1 + 0x218) = uVar7;
    FUN_710392eb40(uVar7);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  *(undefined8 *)(param_1 + 0x210) = *param_2;
  *(undefined8 *)(param_1 + 0x218) = param_2[1];
  *(undefined8 *)(param_1 + 0x220) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  piVar14 = *(int **)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(byte *)(param_1 + 0x468) = bVar2 & 1;
  if (*(int **)(param_1 + 0x210) != piVar14) {
    lVar13 = *(long *)(DAT_710532f730 + 8);
    lVar12 = lVar13;
    piVar3 = *(int **)(param_1 + 0x210);
    while( true ) {
      piVar8 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),*piVar3);
      puVar11 = *(undefined1 **)(piVar8 + 2);
      lVar12 = *(long *)(lVar12 + 0x168);
      uVar4 = FUN_71032632a0(lVar12,(ulong)puVar11);
      puVar9 = puVar11;
      if ((uVar4 & 1) != 0) {
        puVar9 = FUN_71032631a0(lVar12,0x11b1ccb807);
      }
      uVar5 = FUN_71032633f0(lVar12,(ulong)puVar11);
      uVar4 = (uint)*(byte *)((long)piVar8 + 0x12);
      if (uVar5 <= *(byte *)((long)piVar8 + 0x12)) {
        uVar4 = 0;
      }
      param_3 = (undefined **)0x1;
      local_80 = (undefined **)FUN_7103238a70((ulong)puVar9,(ulong)uVar4,1);
      if (((ulong)local_80 & 0xffffffffff) != 0) {
        lVar12 = *(long *)(param_1 + 0x230);
        param_3 = (undefined **)(long)*(int *)(lVar12 + 0x70);
        param_4 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
        FUN_710323c4e0(lVar12,(ulong *)&local_80,(long *********)param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      uVar7 = FUN_7103263f80(*(long *)(lVar13 + 0x168),(ulong)puVar9);
      local_80 = (undefined **)FUN_7103238d60(uVar7,0x11);
      if (((ulong)local_80 & 0xffffffffff) != 0) {
        lVar12 = *(long *)(param_1 + 0x230);
        param_3 = (undefined **)(long)*(int *)(lVar12 + 0x70);
        param_4 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
        FUN_710323c4e0(lVar12,(ulong *)&local_80,(long *********)param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      if (piVar14 == piVar3 + 1) break;
      lVar12 = *(long *)(DAT_710532f730 + 8);
      piVar3 = piVar3 + 1;
    }
  }
  if (*(uint *)(param_1 + 500) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 500) * 4 + 0x1a8) = 1;
    lVar12 = *(long *)(param_1 + 0x350);
    *(undefined4 *)(lVar12 + 0xb0) = 0xffffffff;
    if (*(uint *)(lVar12 + 0x9c) < 0x13) {
      *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0x9c) * 4 + 0x50) = 1;
      *(undefined1 *)(param_1 + 0x410) = 1;
      lVar12 = param_1 + 0x28;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x710439cd03);
      FUN_7103776640(&local_80,lVar12,(byte ****)"set_parts_controller_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_78,0x71042f8480);
      FUN_7103776910(&local_90,lVar12,(long ****)"set_txt_string",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar7 = local_88;
      if (*(long **)(local_88 + 0x10) != (long *)0x0) {
        FUN_71037a28a0(*(long **)(local_88 + 0x10),&DAT_7104867c2e);
      }
      local_90 = &PTR_FUN_710523d9a8;
      local_88 = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_7103776910(&local_90,lVar12,(long ****)"txt_bg_title",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      if (*(int *)(param_1 + 0x358) == 2) {
        FUN_710377a120((long)&local_90,"mnu_amiibo_journey_start",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        piVar14 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
        FUN_7103342f40(&DAT_7105307fe8,(undefined1 *)piVar14,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      else if (*(int *)(param_1 + 0x358) == 3) {
        FUN_710377a120((long)&local_90,"mnu_amiibo_journey_save",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        iVar6 = DAT_7105307d50;
        FUN_71022e6350(*DAT_7105328160,DAT_7105307d50);
        piVar14 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),iVar6);
        iVar6 = piVar14[0x2c];
        *(undefined2 *)(piVar14 + 0x2c) = 0;
        *(short *)((long)piVar14 + 0xb2) = (short)iVar6;
      }
      else {
        FUN_710377a120((long)&local_90,"mnu_amiibo_writing_wait",param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      uVar7 = local_88;
      *(undefined1 *)(param_1 + 0x414) = 0;
      local_90 = &PTR_FUN_710523d9a8;
      local_88 = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      uVar7 = local_78;
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar7 != 0) {
        uVar10 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar7);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

