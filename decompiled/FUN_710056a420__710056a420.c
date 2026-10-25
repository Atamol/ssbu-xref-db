// addr:      710056a420
// offset:    0x56a420
// name:      FUN_710056a420
// mangled:   
// signature: undefined __cdecl FUN_710056a420(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710056a420(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  recursive_mutex *prVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long ****pppplVar10;
  void *pvVar11;
  long lVar12;
  long ***local_58;
  undefined4 local_44;
  
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_7104f77158;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[8] = param_1 + 9;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xf;
  param_1[0x12] = param_1 + 0x12;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = param_1 + 0x12;
  param_1[0x14] = 0;
  std::recursive_mutex::recursive_mutex((recursive_mutex *)(param_1 + 0x15));
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x1a] = &PTR_FUN_7104f773b0;
  param_1[0x1b] = 0x10;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1 + 0x1e;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = &SUB_ffffff00ffffff;
  param_1[0x22] = 0;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a534;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a534:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[0x26] = prVar1;
  param_1[0x27] = 0;
  param_1[0x2a] = &SUB_ffffff00ffffff;
  param_1[0x2b] = 0;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a5b8;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a5b8:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x2f] = prVar1;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x33] = &SUB_ffffff00ffffff;
  param_1[0x34] = 0;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a640;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a640:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  param_1[0x38] = prVar1;
  param_1[0x39] = 0;
  param_1[0x3c] = &SUB_ffffff00ffffff;
  param_1[0x3d] = 0;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a6c4;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a6c4:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x41] = prVar1;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = &SUB_ffffff00ffffff;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a758;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a758:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x4a] = prVar1;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = &SUB_ffffff00ffffff;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a7e8;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a7e8:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x53] = prVar1;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = &SUB_ffffff00ffffff;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a87c;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a87c:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x5c] = prVar1;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = &SUB_ffffff00ffffff;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a90c;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a90c:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x65] = prVar1;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = &SUB_ffffff00ffffff;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056a9a0;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056a9a0:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x6e] = prVar1;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = &SUB_ffffff00ffffff;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056aa30;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056aa30:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x77] = prVar1;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = &SUB_ffffff00ffffff;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056aac4;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056aac4:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x80] = prVar1;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = &SUB_ffffff00ffffff;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056ab54;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056ab54:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x89] = prVar1;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = &SUB_ffffff00ffffff;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056abe8;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056abe8:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x92] = prVar1;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = &SUB_ffffff00ffffff;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056ac78;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056ac78:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0x9b] = prVar1;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = &SUB_ffffff00ffffff;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056ad0c;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056ad0c:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0xa4] = prVar1;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = &SUB_ffffff00ffffff;
  param_1[0xa9] = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  prVar1 = (recursive_mutex *)
           FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (prVar1 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (prVar1 = (recursive_mutex *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         prVar1 != (recursive_mutex *)0x0)) goto LAB_710056ad9c;
    }
    prVar1 = (recursive_mutex *)0x0;
  }
LAB_710056ad9c:
  *(undefined8 *)(prVar1 + 0x10) = 0;
  *(undefined8 *)(prVar1 + 0x18) = 0;
  *(undefined8 *)prVar1 = 0;
  *(undefined8 *)(prVar1 + 8) = 0;
  std::recursive_mutex::recursive_mutex(prVar1);
  param_1[0xad] = prVar1;
  param_1[0x1c] = 0x10;
  lVar4 = DAT_7105324680;
  if (*(long *)(DAT_7105324680 + 0xb8) == 0) {
    plVar3 = (long *)FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar3 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)&DAT_00000048;
        param_3 = &local_58;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar2 & 1) != 0) &&
           (plVar3 = (long *)FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar3 != (long *)0x0)) goto LAB_710056ae28;
      }
      plVar3 = (long *)0x0;
    }
LAB_710056ae28:
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_710509fa80;
    plVar3[1] = (long)(plVar3 + 2);
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *(undefined2 *)(plVar3 + 5) = 1;
    *(undefined1 *)((long)plVar3 + 0x2a) = 0;
    plVar8 = *(long **)(lVar4 + 0xb8);
    *(long **)(lVar4 + 0xb8) = plVar3;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      plVar3 = *(long **)(lVar4 + 0xb8);
    }
    (**(code **)(*plVar3 + 0x10))();
    lVar7 = *(long *)(lVar4 + 0xc0);
  }
  else {
    lVar7 = *(long *)(DAT_7105324680 + 0xc0);
  }
  if (lVar7 == 0) {
    plVar3 = (long *)FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar3 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)&DAT_00000048;
        param_3 = &local_58;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar2 & 1) != 0) &&
           (plVar3 = (long *)FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar3 != (long *)0x0)) goto LAB_710056aee0;
      }
      plVar3 = (long *)0x0;
    }
LAB_710056aee0:
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_710509fa38;
    plVar3[1] = (long)(plVar3 + 2);
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *(undefined2 *)(plVar3 + 5) = 1;
    *(undefined1 *)((long)plVar3 + 0x2a) = 0;
    plVar8 = *(long **)(lVar4 + 0xc0);
    *(long **)(lVar4 + 0xc0) = plVar3;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      plVar3 = *(long **)(lVar4 + 0xc0);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined8 *)((long)param_1 + 0x57c) = 0;
  *(undefined8 *)((long)param_1 + 0x584) = 0xffffffffffffffff;
  pvVar9 = (void *)param_1[1];
  *(undefined2 *)((long)param_1 + 0x58c) = 0;
  if ((ulong)((param_1[3] - (long)pvVar9 >> 4) * -0x3333333333333333) < 0x14) {
    pppplVar10 = (long ****)(param_1[2] - (long)pvVar9);
    lVar4 = FUN_710392e290(0x10,0x640,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar4 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)0x640;
        param_3 = &local_58;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar2 & 1) != 0) &&
           (lVar4 = FUN_710392e290(0x10,0x640,param_3,param_4,param_5,param_6,param_7,param_8),
           lVar4 != 0)) goto LAB_710056afdc;
      }
      lVar4 = 0;
    }
LAB_710056afdc:
    lVar7 = SUB168(SEXT816((long)pppplVar10) * SEXT816(-0x6666666666666667),8);
    lVar12 = lVar4 + ((long)pppplVar10 >> 4) * 0x10;
    pvVar11 = (void *)(lVar12 + ((lVar7 >> 5) - (lVar7 >> 0x3f)) * 0x50);
    if (0 < (long)pppplVar10) {
      memcpy(pvVar11,pvVar9,(size_t)pppplVar10);
      param_3 = pppplVar10;
    }
    param_1[1] = pvVar11;
    param_1[2] = lVar12;
    param_1[3] = lVar4 + 0x640;
    if (pvVar9 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar9);
    }
  }
  pvVar9 = (void *)param_1[4];
  if ((ulong)((param_1[6] - (long)pvVar9 >> 4) * 0x6db6db6db6db6db7) < 0x14) {
    pppplVar10 = (long ****)(param_1[5] - (long)pvVar9);
    lVar4 = FUN_710392e290(0x10,0x8c0,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar4 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)0x8c0;
        param_3 = &local_58;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar2 & 1) != 0) &&
           (lVar4 = FUN_710392e290(0x10,0x8c0,param_3,param_4,param_5,param_6,param_7,param_8),
           lVar4 != 0)) goto LAB_710056b0b8;
      }
      lVar4 = 0;
    }
LAB_710056b0b8:
    lVar7 = SUB168(SEXT816((long)pppplVar10) * SEXT816(-0x4924924924924925),8);
    lVar12 = lVar4 + ((long)pppplVar10 >> 4) * 0x10;
    pvVar11 = (void *)(lVar12 + ((lVar7 >> 5) - (lVar7 >> 0x3f)) * 0x70);
    if (0 < (long)pppplVar10) {
      memcpy(pvVar11,pvVar9,(size_t)pppplVar10);
      param_3 = pppplVar10;
    }
    param_1[4] = pvVar11;
    param_1[5] = lVar12;
    param_1[6] = lVar4 + 0x8c0;
    if (pvVar9 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar9);
    }
  }
  if (DAT_71052b9418 != (undefined8 *)0x0) goto LAB_710056b298;
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0xc0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_000000c0;
      param_3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0xc0,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_710056b178;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_710056b178:
  *puVar5 = &PTR_FUN_7104f794d0;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x100,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_00000100;
      pppplVar10 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x100,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_710056b1d8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_710056b1d8:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)puVar6 = 0xffffff;
  puVar6[1] = &PTR_FUN_7104f79518;
  puVar6[2] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[6] = &PTR_FUN_7104f76b70;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  *(undefined4 *)(puVar6 + 0x1a) = 0xffffff;
  puVar6[0x1b] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0xffffff;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined4 *)(puVar6 + 5) = 0xffffff;
  puVar6[0xe] = &PTR_FUN_7104f79490;
  puVar6[0xf] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x18] = &SUB_ffffff00ffffff;
  puVar6[0x19] = &SUB_ffffff00ffffff;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  puVar5[0x17] = puVar6;
  *(undefined2 *)(puVar5 + 0x16) = 0xffff;
  puVar5[0x15] = 0xffffffffffffffff;
  DAT_71052b9418 = puVar5;
LAB_710056b298:
  *(undefined2 *)(param_1 + 0xaf) = 0;
  param_1[0xae] = 0;
  return;
}

