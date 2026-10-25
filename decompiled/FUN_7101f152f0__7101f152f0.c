// addr:      7101f152f0
// offset:    0x1f152f0
// name:      FUN_7101f152f0
// mangled:   
// signature: undefined __cdecl FUN_7101f152f0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f152f0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  byte ****ppppbVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8e;
  undefined4 local_86;
  undefined2 local_82;
  
  if (*(int *)(param_1 + 0x2ac) == 0) {
    lVar2 = 9;
    *(undefined4 *)(param_1 + 0x328) = 9;
    local_a0 = 0x6c7065725f756e6d;
    local_98 = 0x6569766f6d5f7961;
    local_90 = 0x655f;
    local_8e = 0x5f7372745f746964;
    uVar10 = 0x811c9dc5;
    local_86 = 0x6c746974;
    uVar12 = 0x6d;
    local_82 = 0x65;
    do {
      uVar10 = uVar10 * 0x89 ^ uVar12;
      uVar12 = (uint)*(byte *)((long)&local_a8 + lVar2);
      lVar2 = lVar2 + 1;
    } while (uVar12 != 0);
    local_a8 = (undefined **)CONCAT44(0x1f,uVar10);
    FUN_7101af8e90(*(long *)(*(long *)(param_1 + 0x330) + 0x80),(uint *)&local_a8,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7101f1cb60(param_1);
    lVar2 = *(long *)(param_1 + 0x518);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x56e8) = 0x58ffff2615eb43e1;
      *(undefined8 *)(param_1 + 0x56f0) = 0x400000004;
      uVar10 = *(uint *)(param_1 + 0x2a4);
      if (uVar10 < 0x13) {
        uVar8 = 0x20;
        goto LAB_7101f156a8;
      }
    }
    else {
      FUN_7101f3b2a0(*(long *)(param_1 + 0x340),lVar2,(long ****)(ulong)*(uint *)(lVar2 + 0x28),
                     param_4,param_5,param_6,param_7,param_8);
      lVar2 = *(long *)(param_1 + 0x510);
      FUN_7101f3b2a0(*(long *)(param_1 + 0x340),lVar2,
                     (long ****)(ulong)((*(int *)(lVar2 + 0x28) + *(int *)(lVar2 + 0x2c)) - 1),
                     param_4,param_5,param_6,param_7,param_8);
      lVar14 = *(long *)(param_1 + 0x380);
      lVar2 = *(long *)(param_1 + 0x510);
      plVar13 = (long *)(lVar14 + 0xf0);
      (**(code **)(*(long *)*plVar13 + 0x60))((long *)*plVar13,1);
      (**(code **)(*(long *)*plVar13 + 0x70))((long *)*plVar13,1);
      plVar3 = *(long **)(lVar14 + 0xf8);
      (**(code **)(*plVar3 + 0x60))(plVar3,1);
      (**(code **)(**(long **)(lVar14 + 0x100) + 0x60))(*(long **)(lVar14 + 0x100),1);
      FUN_7103771a80(plVar13,*(int *)(lVar2 + 0x30),1);
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar10 = 2;
      if (lVar2 != *(long *)(lVar14 + 0x138)) {
        uVar10 = (uint)(lVar2 == *(long *)(lVar14 + 0x130) || lVar2 != *(long *)(lVar14 + 0x128));
      }
      uVar9 = 1;
      FUN_7103771a80((long *)(lVar14 + 0xf8),uVar10,1);
      lVar2 = *(long *)(*plVar13 + 0x180);
      lVar11 = *(long *)(*plVar13 + 0x188);
      if (0 < (int)((ulong)(lVar11 - lVar2) >> 3)) {
        uVar15 = 0;
        do {
          if ((long)uVar15 < (long)(int)((ulong)(lVar11 - lVar2) >> 3)) {
            if ((ulong)(lVar11 - lVar2 >> 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            ppppbVar6 = *(byte *****)(*(long *)(lVar2 + uVar15 * 8) + 0x88);
          }
          else {
            ppppbVar6 = (byte ****)0x0;
          }
          FUN_7103776640(&local_a8,**(long **)(lVar14 + 0xe8) + 8,ppppbVar6,uVar9,param_4,param_5,
                         param_6,param_7,param_8);
          uVar1 = local_a0;
          if (*(long *)(local_a0 + 8) != 0) {
            pcVar7 = "select_icon_off";
            if (uVar15 == *(uint *)(*plVar13 + 0x254)) {
              pcVar7 = "select_icon_on";
            }
            FUN_7103778300(0x3f800000,local_a0,(long)pcVar7);
          }
          local_a8 = &PTR_FUN_710523d988;
          local_a0 = 0;
          if (uVar1 != 0) {
            uVar4 = *(ulong *)(uVar1 + 0x18);
            *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar1 + 0x18) = 0;
            if (uVar4 != 0) {
              FUN_710392eb40(uVar4);
            }
            FUN_710392eb40(uVar1);
          }
          lVar2 = *(long *)(*plVar13 + 0x180);
          lVar11 = *(long *)(*plVar13 + 0x188);
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)(int)((ulong)(lVar11 - lVar2) >> 3));
      }
      if (*(uint *)(lVar14 + 0xd4) < 0x13) {
        *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar14 + 0xd4) * 4 + 0x88) = 1;
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar14 + 0xe8) + 0x10),0x7104421055);
        return;
      }
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x380);
    uVar10 = *(uint *)(*(long *)(lVar2 + 0xf0) + 0x25c);
    if (uVar10 == 0xffffffff) {
      if (*(char *)(*(long *)(lVar2 + 0xf0) + 0x280) == '\0') {
        return;
      }
      FUN_7101f386f0(lVar2);
      lVar2 = *(long *)(*(long *)(param_1 + 0x330) + 0x80);
      if (*(char *)(lVar2 + 0xc9) == '\0') {
        iVar5 = 4;
      }
      else {
        iVar5 = 0;
      }
      FUN_7103771be0((long *)(lVar2 + 0x2260),iVar5,0);
      *(undefined4 *)(lVar2 + 0x2270) = *(undefined4 *)(*(long *)(lVar2 + 0x2260) + 0x25c);
    }
    else {
      uVar12 = *(uint *)(*(long *)(lVar2 + 0xf8) + 0x254);
      if (uVar12 == 0xffffffff) {
        uVar9 = 0;
      }
      else {
        if (2 < uVar12) goto LAB_7101f156d4;
        uVar9 = *(undefined8 *)(lVar2 + (long)(int)uVar12 * 8 + 0x128);
      }
      lVar2 = *(long *)(param_1 + 0x510);
      *(ulong *)(lVar2 + 0x30) = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      FUN_7101f386f0(*(long *)(param_1 + 0x380));
    }
    uVar10 = *(uint *)(param_1 + 0x2a4);
    if (uVar10 < 0x13) {
      uVar8 = 4;
LAB_7101f156a8:
      *(undefined4 *)(param_1 + (long)(int)uVar10 * 4 + 600) = uVar8;
      return;
    }
  }
LAB_7101f156d4:
                    /* WARNING: Subroutine does not return */
  abort();
}

