// addr:      7101c8af80
// offset:    0x1c8af80
// name:      FUN_7101c8af80
// mangled:   
// signature: undefined __cdecl FUN_7101c8af80(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c8af80(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_6e;
  undefined4 local_66;
  undefined2 local_62;
  undefined8 local_60;
  
  lVar6 = param_1[1];
  FUN_7103778300(0x3f800000,*(long *)(*param_1 + 8),0x710433aa5c);
  uVar4 = *(long *)(*(long *)(lVar6 + 0x418) + 0x188) - *(long *)(*(long *)(lVar6 + 0x418) + 0x180);
  if (0 < (int)(uVar4 >> 3)) {
    uVar10 = 0;
    do {
      if ((ulong)(*(long *)(lVar6 + 0x440) - *(long *)(lVar6 + 0x438)) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      bVar1 = *(byte *)(*(long *)(lVar6 + 0x438) + uVar10);
      param_5 = (long ****)0x1;
      param_4 = (byte ****)(uVar10 & 0xffffffff);
      FUN_7101c8b340(lVar6,(uint)bVar1,(ulong)bVar1,param_4,(long ****)0x1,param_6,param_7,param_8);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(uVar4 * 0x20000000) >> 0x20);
  }
  lVar11 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar9 = 0x811c9dc5;
  if (*(int *)(lVar6 + 0x208) == 0x13) {
    FUN_7103778300(0x3f800000,*(long *)(*param_1 + 8),0x710433a6a9);
    lVar2 = *(long *)(lVar11 + 0x80);
    uVar7 = 0x6d;
    local_78 = CONCAT26(local_78._6_2_,0x6b6f5f7265);
    lVar5 = 9;
    uVar8 = uVar9;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar7;
      uVar7 = (uint)*(byte *)((long)&local_88 + lVar5);
      lVar5 = lVar5 + 1;
    } while (uVar7 != 0);
    _local_88 = CONCAT44(0xd,uVar8);
  }
  else {
    local_78 = 0x7478656e5f7265;
    uVar7 = 0x6d;
    lVar2 = 9;
    uVar8 = uVar9;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar7;
      uVar7 = (uint)*(byte *)((long)&local_88 + lVar2);
      lVar2 = lVar2 + 1;
    } while (uVar7 != 0);
    _local_88 = CONCAT44(0xf,uVar8);
    lVar2 = *(long *)(lVar11 + 0x80);
  }
  local_80 = (undefined1 *)0x746f6f665f756e6d;
  puVar3 = &local_88;
  FUN_7101af6200(lVar2,5,puVar3);
  lVar2 = *(long *)(lVar11 + 0x80);
  FUN_710376b960(*(long *)(lVar2 + 0x2268));
  (**(code **)(**(long **)(lVar2 + 0x2268) + 0x70))(*(long **)(lVar2 + 0x2268),0);
  if (*(int *)(lVar2 + 0x11b0) == 5) {
    if (*(char *)(lVar2 + 0x2258) == '\x01') goto LAB_7101c8b1c0;
  }
  else {
    *(undefined4 *)(lVar2 + 0x11b0) = 5;
  }
  if (*(char *)(lVar2 + 0x225a) == -1) {
    *(char *)(lVar2 + 0x225a) = '\0';
  }
  if (*(int *)(lVar2 + 0xa8) == 1) {
    *(undefined4 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined1 *)(lVar2 + 0xb4) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0x200000001;
    *(undefined8 *)(lVar2 + 0xac) = 0xffffffff00000000;
    *(undefined8 *)(lVar2 + 0xa4) = 0xffffffff00000001;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
  }
LAB_7101c8b1c0:
  if (*(int *)(lVar6 + 0x208) == 0x13) {
    uStack_84 = 0x27;
    local_78 = 0x5f6d6f6f725f656e;
    local_70 = 0x6573;
    local_6e = 0x6f6f725f68637261;
    local_66 = 0x75725f6d;
    local_62 = 0x656c;
    local_60 = 0x65676e6168635f;
    uVar8 = 0x6d;
    lVar6 = 9;
    do {
      uVar9 = uVar9 * 0x89 ^ uVar8;
      uVar8 = (uint)*(byte *)((long)&local_88 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar8 != 0);
  }
  else {
    uStack_84 = 0x1c;
    local_66 = (uint)local_66._3_1_ << 0x18;
    local_78 = 0x5f6d6f6f725f656e;
    local_70 = 0x7263;
    local_6e = 0x7469745f65746165;
    uVar8 = 0x6d;
    local_66 = CONCAT22(local_66._2_2_,0x656c);
    lVar6 = 9;
    do {
      uVar9 = uVar9 * 0x89 ^ uVar8;
      uVar8 = (uint)*(byte *)((long)&local_88 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar8 != 0);
  }
  local_78 = 0x5f6d6f6f725f656e;
  local_80 = &DAT_696c6e6f5f756e6d;
  _local_88 = CONCAT44(uStack_84,uVar9);
  FUN_7101af90b0(*(long *)(lVar11 + 0x80),&local_88,puVar3,param_4,param_5,param_6,param_7,param_8);
  lVar6 = *(long *)(*(long *)(*param_1 + 8) + 8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  }
  return;
}

