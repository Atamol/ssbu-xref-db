// addr:      7102df58a0
// offset:    0x2df58a0
// name:      FUN_7102df58a0
// mangled:   
// signature: undefined __cdecl FUN_7102df58a0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102df58a0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 == '\b') {
    lVar5 = *(long *)(param_1 + 0x18);
    fVar9 = 0.0;
    fVar8 = 0.0;
    if (lVar5 != 0) {
      fVar8 = fVar9;
      if (*(char *)(lVar5 + 0x110) == '\0') {
        *(undefined1 *)(lVar5 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar5 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar5 = *(long *)(param_1 + 0x18);
        param_2 = extraout_x1_00;
        if (lVar5 != 0) {
          if ((*(char *)(lVar5 + 0xe0) != '\0') && (*(long *)(lVar5 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar5 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar5 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar5 + 0xe0) == '\0') goto LAB_7102df5a78;
          *(undefined1 *)(*(long *)(lVar5 + 0xb0) + 0x10) = 1;
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) goto LAB_7102df5ae4;
          goto LAB_7102df5a80;
        }
      }
      else {
LAB_7102df5a78:
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 != 0) {
LAB_7102df5a80:
          if (*(long *)(lVar5 + 0xd8) != 0) {
            fVar8 = *(float *)(*(long *)(lVar5 + 0xd8) + 0x10);
          }
        }
      }
    }
LAB_7102df5ae4:
    if (*(float *)(param_1 + 0x54) <= fVar8) {
      puVar6 = *(undefined8 **)(param_1 + 0x28);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x10) = 3;
      *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x11) = 0;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar5 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 != 0) {
          if ((*(char *)(lVar5 + 0xe0) != '\0') && (*(long *)(lVar5 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar5 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar5 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar5 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar5 + 0xb0) + 0x10) = 0;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x20) = 0;
      lVar5 = *(long *)(param_1 + 0x18);
      goto joined_r0x007102df5b68;
    }
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\0') goto LAB_7102df5bb0;
      *(undefined1 *)(param_1 + 0x50) = 1;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        if ((*(char *)(lVar5 + 0xe0) != '\0') && (*(long *)(lVar5 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar5 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar5 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar5 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar5 + 0xb0) + 0x10) = 0;
        }
      }
      FUN_710260fdd0(0,*(long *)(param_1 + 0x18),1);
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar5 + 0x108),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 != 0) {
          if ((*(char *)(lVar5 + 0xe0) != '\0') && (*(long *)(lVar5 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar5 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar5 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar5 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar5 + 0xb0) + 0x10) = 0;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0;
      FUN_7102610070(*(long *)(param_1 + 0x18),(byte *)"ripple_scale");
      uVar7 = 0;
      FUN_710260fdd0(0,*(long *)(param_1 + 0x18),1);
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        if ((*(char *)(lVar5 + 0xe0) != '\0') && (*(long *)(lVar5 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar5 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar5 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar5 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar5 + 0xb0) + 0x10) = 1;
        }
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 != 0) {
          if ((*(char *)(lVar5 + 0xe0) != '\0') && (*(long *)(lVar5 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar5 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar5 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x22) = 0;
          }
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8), lVar5 != 0)) {
            lVar5 = *(long *)(lVar5 + 8);
            plVar3 = *(long **)(lVar5 + 0x10);
            iVar1 = *(int *)(lVar5 + 0xac);
            if (iVar1 == 1) {
              plVar4 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,1);
              plVar3 = (long *)0x0;
              if (plVar4 != (long *)0x0) {
LAB_7102df5b84:
                plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4,0);
              }
            }
            else {
              if (iVar1 != 0) goto LAB_7102df5ba4;
              plVar4 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,0);
              if (plVar4 != (long *)0x0) goto LAB_7102df5b84;
              plVar3 = (long *)0x0;
            }
            uVar7 = (**(code **)(*plVar3 + 0x88))();
          }
        }
      }
LAB_7102df5ba4:
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      *(undefined1 *)(param_1 + 0x20) = 8;
    }
  }
LAB_7102df5bb0:
  lVar5 = *(long *)(param_1 + 0x18);
joined_r0x007102df5b68:
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x110) != '\0')) {
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)((long)*(undefined8 **)(param_1 + 0x28) + 0x12));
    local_80 = **(undefined8 **)(param_1 + 0x28);
    local_78 = CONCAT44(0x3f800000,fVar8 * 0.1);
    uStack_a8 = 0;
    local_b0 = 0x3f800000;
    uStack_98 = 0;
    local_a0 = 0x3f80000000000000;
    uStack_88 = 0x3f800000;
    local_90 = 0;
    (**(code **)(**(long **)(lVar5 + 0x90) + 0x148))(*(long **)(lVar5 + 0x90),&local_b0);
    lVar5 = *(long *)(lVar5 + 0xd8);
    if (lVar5 != 0) {
      local_58 = uStack_98;
      local_60 = local_a0;
      local_68 = uStack_a8;
      local_70 = local_b0;
      local_38 = local_78;
      local_40 = local_80;
      local_48 = uStack_88;
      local_50 = local_90;
      if (*(char *)(*(long *)(lVar5 + 8) + 0xa8) != '\0') {
        plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x48);
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_70);
      }
      *(undefined1 *)(lVar5 + 0x20) = 1;
    }
  }
  return;
}

