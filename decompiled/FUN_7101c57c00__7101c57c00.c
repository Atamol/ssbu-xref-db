// addr:      7101c57c00
// offset:    0x1c57c00
// name:      FUN_7101c57c00
// mangled:   
// signature: undefined __cdecl FUN_7101c57c00(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c57c00(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x2c4) != 0) {
    return;
  }
  if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
      (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
    bVar1 = false;
    if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c57c6c;
LAB_7101c57c88:
    if (*(char *)(param_1 + 0xaf8) == '\x04') {
      bVar2 = *(char *)(param_1 + 0xafa) == '\0';
      goto joined_r0x007101c57ca4;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c57ca8;
LAB_7101c57c74:
    param_3 = 3;
LAB_7101c57cb0:
    FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c57cbc:
    if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c57d2c;
LAB_7101c57cc4:
    if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c57d2c;
    bVar1 = *(char *)(param_1 + 0xce2) == '\0';
    if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_7101c57d08;
LAB_7101c57d34:
    if (*(char *)(param_1 + 0xce0) == '\x04') {
      bVar2 = *(char *)(param_1 + 0xce2) == '\0';
      goto joined_r0x007101c57d08;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c57d50;
LAB_7101c57d0c:
    param_3 = 3;
LAB_7101c57d5c:
    FUN_7101c76f30(param_1 + 0x448,1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c57d64:
    if (*(char *)(param_1 + 0xece) == '\0') goto LAB_7101c57dd0;
LAB_7101c57d6c:
    if ((((*(byte *)(param_1 + 0xec8) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
       (*(int *)(param_1 + 0x2c0) - 7U < 5)) goto LAB_7101c57dd0;
    bVar1 = *(char *)(param_1 + 0xeca) == '\0';
    if (*(char *)(param_1 + 0xecd) != '\0') goto LAB_7101c57dd8;
LAB_7101c57db0:
    bVar2 = false;
joined_r0x007101c57df0:
    if (!bVar1) goto LAB_7101c57df4;
LAB_7101c57db4:
    param_3 = 3;
LAB_7101c57e00:
    FUN_7101c76f30(param_1 + 0x448,2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    bVar1 = *(char *)(param_1 + 0xafa) == '\0';
    if (*(char *)(param_1 + 0xafd) != '\0') goto LAB_7101c57c88;
LAB_7101c57c6c:
    bVar2 = false;
joined_r0x007101c57ca4:
    if (bVar1) goto LAB_7101c57c74;
LAB_7101c57ca8:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c57cb0;
    }
    lVar7 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar7 + 0x1a0) == 0) goto LAB_7101c57cbc;
    FUN_71037780e0(&local_40,lVar7 + 0x28,(long ****)"balloon_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_40);
    uVar6 = local_38;
    *(undefined4 *)(lVar7 + 0x1a0) = 0;
    local_40 = &PTR_FUN_710523d9e8;
    local_38 = 0;
    if (uVar6 == 0) goto LAB_7101c57cbc;
    FUN_710392eb40(uVar6);
    if (*(char *)(param_1 + 0xce6) != '\0') goto LAB_7101c57cc4;
LAB_7101c57d2c:
    bVar1 = false;
    if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_7101c57d34;
LAB_7101c57d08:
    bVar2 = false;
joined_r0x007101c57d08:
    if (bVar1) goto LAB_7101c57d0c;
LAB_7101c57d50:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c57d5c;
    }
    lVar7 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar7 + 0x380) == 0) goto LAB_7101c57d64;
    FUN_71037780e0(&local_40,lVar7 + 0x208,(long ****)"balloon_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_40);
    uVar6 = local_38;
    *(undefined4 *)(lVar7 + 0x380) = 0;
    local_40 = &PTR_FUN_710523d9e8;
    local_38 = 0;
    if (uVar6 == 0) goto LAB_7101c57d64;
    FUN_710392eb40(uVar6);
    if (*(char *)(param_1 + 0xece) != '\0') goto LAB_7101c57d6c;
LAB_7101c57dd0:
    bVar1 = false;
    if (*(char *)(param_1 + 0xecd) == '\0') goto LAB_7101c57db0;
LAB_7101c57dd8:
    if (*(char *)(param_1 + 0xec8) == '\x04') {
      bVar2 = *(char *)(param_1 + 0xeca) == '\0';
      goto joined_r0x007101c57df0;
    }
    bVar2 = false;
    if (bVar1) goto LAB_7101c57db4;
LAB_7101c57df4:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c57e00;
    }
    lVar7 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar7 + 0x560) != 0) {
      FUN_71037780e0(&local_40,lVar7 + 1000,(long ****)"balloon_off",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar6 = local_38;
      *(undefined4 *)(lVar7 + 0x560) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
  }
  lVar7 = param_1 + 0x448;
  bVar1 = false;
  if (*(char *)(param_1 + 0x10b6) != '\0') {
    if ((*(byte *)(param_1 + 0x10b0) | 1) == 3) {
      bVar1 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar1 = *(char *)(param_1 + 0x10b2) == '\0';
      }
    }
    else {
      bVar1 = false;
    }
  }
  bVar2 = false;
  if (*(char *)(param_1 + 0x10b5) == '\0') {
LAB_7101c57e98:
    if (bVar1) goto LAB_7101c57e9c;
LAB_7101c57eb0:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c57ebc;
    }
    lVar9 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar9 + 0x740) != 0) {
      FUN_71037780e0(&local_40,lVar9 + 0x5c8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar6 = local_38;
      *(undefined4 *)(lVar9 + 0x740) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x10b0) == '\x04') {
      bVar2 = *(char *)(param_1 + 0x10b2) == '\0';
      goto LAB_7101c57e98;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c57eb0;
LAB_7101c57e9c:
    param_3 = 3;
LAB_7101c57ebc:
    FUN_7101c76f30(lVar7,3,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x129e) != '\0') {
    if ((*(byte *)(param_1 + 0x1298) | 1) == 3) {
      bVar1 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar1 = *(char *)(param_1 + 0x129a) == '\0';
      }
    }
    else {
      bVar1 = false;
    }
  }
  bVar2 = false;
  if (*(char *)(param_1 + 0x129d) == '\0') {
LAB_7101c57f48:
    if (bVar1) goto LAB_7101c57f4c;
LAB_7101c57f60:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c57f6c;
    }
    lVar9 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar9 + 0x920) != 0) {
      FUN_71037780e0(&local_40,lVar9 + 0x7a8,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar6 = local_38;
      *(undefined4 *)(lVar9 + 0x920) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1298) == '\x04') {
      bVar2 = *(char *)(param_1 + 0x129a) == '\0';
      goto LAB_7101c57f48;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c57f60;
LAB_7101c57f4c:
    param_3 = 3;
LAB_7101c57f6c:
    FUN_7101c76f30(lVar7,4,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x1486) != '\0') {
    if ((*(byte *)(param_1 + 0x1480) | 1) == 3) {
      bVar1 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar1 = *(char *)(param_1 + 0x1482) == '\0';
      }
    }
    else {
      bVar1 = false;
    }
  }
  bVar2 = false;
  if (*(char *)(param_1 + 0x1485) == '\0') {
LAB_7101c57ff8:
    if (bVar1) goto LAB_7101c57ffc;
LAB_7101c58010:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c5801c;
    }
    lVar9 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar9 + 0xb00) != 0) {
      FUN_71037780e0(&local_40,lVar9 + 0x988,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar6 = local_38;
      *(undefined4 *)(lVar9 + 0xb00) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1480) == '\x04') {
      bVar2 = *(char *)(param_1 + 0x1482) == '\0';
      goto LAB_7101c57ff8;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c58010;
LAB_7101c57ffc:
    param_3 = 3;
LAB_7101c5801c:
    FUN_7101c76f30(lVar7,5,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x166e) != '\0') {
    if ((*(byte *)(param_1 + 0x1668) | 1) == 3) {
      bVar1 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar1 = *(char *)(param_1 + 0x166a) == '\0';
      }
    }
    else {
      bVar1 = false;
    }
  }
  bVar2 = false;
  if (*(char *)(param_1 + 0x166d) == '\0') {
LAB_7101c580a8:
    if (bVar1) goto LAB_7101c580ac;
LAB_7101c580c0:
    if (bVar2) {
      param_3 = 4;
      goto LAB_7101c580cc;
    }
    lVar9 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar9 + 0xce0) != 0) {
      FUN_71037780e0(&local_40,lVar9 + 0xb68,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar6 = local_38;
      *(undefined4 *)(lVar9 + 0xce0) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1668) == '\x04') {
      bVar2 = *(char *)(param_1 + 0x166a) == '\0';
      goto LAB_7101c580a8;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c580c0;
LAB_7101c580ac:
    param_3 = 3;
LAB_7101c580cc:
    FUN_7101c76f30(lVar7,6,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x1856) != '\0') {
    if ((*(byte *)(param_1 + 0x1850) | 1) == 3) {
      bVar1 = false;
      if ((*(int *)(param_1 + 0x2c0) - 5U < 4) && (4 < *(int *)(param_1 + 0x2c0) - 7U)) {
        bVar1 = *(char *)(param_1 + 0x1852) == '\0';
      }
    }
    else {
      bVar1 = false;
    }
  }
  bVar2 = false;
  if (*(char *)(param_1 + 0x1855) == '\0') {
LAB_7101c58158:
    if (bVar1) goto LAB_7101c5815c;
LAB_7101c58170:
    if (bVar2) {
      uVar5 = 4;
      goto LAB_7101c5817c;
    }
    lVar7 = *(long *)(param_1 + 0x450);
    if (*(int *)(lVar7 + 0xec0) != 0) {
      FUN_71037780e0(&local_40,lVar7 + 0xd48,(long ****)"balloon_off",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar6 = local_38;
      *(undefined4 *)(lVar7 + 0xec0) = 0;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1850) == '\x04') {
      bVar2 = *(char *)(param_1 + 0x1852) == '\0';
      goto LAB_7101c58158;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c58170;
LAB_7101c5815c:
    uVar5 = 3;
LAB_7101c5817c:
    FUN_7101c76f30(lVar7,7,uVar5,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7101c591b0(param_1,0,0,0);
  uVar6 = *(ulong *)(param_1 + 0x428);
  if ((uVar6 & 1) == 0) {
LAB_7101c581a0:
    uVar8 = 0;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x2f8);
    plVar4 = (long *)**(long **)(*plVar10 + 0x18);
    if (plVar4 == (long *)0x0) {
LAB_7101c58470:
      uVar6 = *(ulong *)(param_1 + 0x428);
    }
    else {
      uVar6 = (**(code **)(*plVar4 + 0x2f8))();
      if ((uVar6 & 1) != 0) {
        uVar6 = *(ulong *)(param_1 + 0x428);
        uVar8 = 0;
        goto LAB_7101c58484;
      }
      plVar4 = (long *)**(long **)(*plVar10 + 0x18);
      if (plVar4 == (long *)0x0) goto LAB_7101c58470;
      uVar3 = (**(code **)(*plVar4 + 0x3c0))();
      uVar6 = *(ulong *)(param_1 + 0x428);
      if ((uVar3 & 1) == 0) goto LAB_7101c581a0;
    }
    if (((uint)uVar6 >> 1 & 1) == 0) {
      uVar8 = (uint)(uVar6 >> 2) & 1;
    }
    else {
      uVar8 = 1;
    }
  }
LAB_7101c58484:
  *(ulong *)(param_1 + 0x428) = uVar6 & 0xfffffffffffffffd;
  if ((uVar6 & 1) == 0) {
LAB_7101c584f0:
    if (uVar8 == 0) goto LAB_7101c584f8;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x2f8);
    plVar4 = (long *)**(long **)(*plVar10 + 0x18);
    if ((plVar4 != (long *)0x0) &&
       ((uVar6 = (**(code **)(*plVar4 + 0x2f8))(), (uVar6 & 1) != 0 ||
        ((plVar4 = (long *)**(long **)(*plVar10 + 0x18), plVar4 != (long *)0x0 &&
         (uVar6 = (**(code **)(*plVar4 + 0x3c0))(), (uVar6 & 1) == 0)))))) goto LAB_7101c584f0;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
      if ((uVar8 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c584f8;
    }
    else if (uVar8 != 0) goto LAB_7101c584f8;
  }
  *(undefined1 *)(param_1 + 0x431) = 0;
LAB_7101c584f8:
  FUN_7101c59330(param_1 + 0x800,1,6,0,param_5,param_6,param_7,param_8);
  uVar6 = (ulong)*(byte *)(param_1 + 0x1920);
  if (uVar6 < 8) {
    lVar7 = *(long *)(param_1 + 0x450) + uVar6 * 0x1e0;
    if (*(char *)(lVar7 + 0x19b) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x450) + uVar6 * 0x1e0 + 0x30),
                     0x71043f0a45);
    }
    *(undefined1 *)(lVar7 + 0x19b) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

