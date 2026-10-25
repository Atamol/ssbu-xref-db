// addr:      710000e940
// offset:    0xe940
// name:      FUN_710000e940
// mangled:   
// signature: ulong __cdecl FUN_710000e940(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710000e940(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x1;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar8 + 0x170);
  if (iVar1 - 100U < 100) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x4d00) != '\0') {
    uVar5 = 0;
    if (*(char *)(lVar8 + 0x6b8) != '\0') {
      uVar5 = 0x16;
    }
    return (ulong)uVar5;
  }
  bVar3 = false;
  if (((char)param_1[0x103] == '\0') ||
     ((iVar1 != 0x191 &&
      ((bVar3 = false, 299 < iVar1 || (*(char *)((long)param_1 + 0x822) == '\0')))))) {
LAB_710000ea44:
    if (*(char *)((long)param_1 + 0x819) == '\0') goto LAB_710000ea98;
LAB_710000ea4c:
    if ((iVar1 != 0x197) && ((299 < iVar1 || (*(char *)((long)param_1 + 0x822) == '\0'))))
    goto LAB_710000ea98;
    uVar7 = *(ulong *)(lVar8 + 0x4ce0) & *(ulong *)(lVar8 + 0x4cf0);
    uVar5 = (uint)uVar7;
    if ((uVar5 >> 2 & 1) == 0) {
      if ((uVar5 >> 1 & 1) == 0) {
        if ((uVar5 >> 3 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar7 & 1) == 0) {
              *(undefined8 *)(lVar8 + 0x4ce8) = 0x40000000;
              *(undefined8 *)(lVar8 + 0x4cf0) = 0;
              *(undefined1 *)(lVar8 + 0x4d00) = 1;
              goto LAB_710000ea98;
            }
            uVar6 = 1;
          }
          else {
            uVar6 = 0x20;
          }
        }
        else {
          uVar6 = 8;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 4;
    }
    *(undefined8 *)(lVar8 + 0x4ce8) = uVar6;
    *(undefined8 *)(lVar8 + 0x4cf0) = 0;
LAB_710000eb0c:
    FUN_71000272a0();
    *(undefined8 *)(lVar8 + 0x238) = 0;
    auVar11 = FUN_71000272c0();
    uVar6 = auVar11._8_8_;
    *(long *)(lVar8 + 0x238) = auVar11._0_8_;
    if (auVar11._0_8_ == 0) {
      return 0x1b;
    }
    if (((*(uint *)(lVar8 + 0x480) | 4) != 5) && (*(char *)((long)param_1 + 0x823) == '\0')) {
      lVar9 = *param_1;
      lVar4 = *(long *)(lVar9 + 600);
      if ((lVar4 != 0) && (uVar5 = *(uint *)(lVar9 + 0x480), (uVar5 | 4) != 5)) {
        lVar10 = *(long *)(lVar4 + 0x30);
        if ((*(char *)((long)param_1 + 0x822) == '\0') && (*(char *)((long)param_1 + 0x81f) != '\0')
           ) {
          if (uVar5 == 2) {
LAB_710000ec2c:
            lVar4 = *(long *)(lVar9 + 0x4fb8);
            *(undefined1 *)((long)param_1 + 0x823) = 0;
joined_r0x00710000ec60:
            if (lVar4 != -1) goto LAB_710000ec00;
          }
          else {
            if (uVar5 == 3) {
              lVar4 = *(long *)(lVar4 + 8);
              *(undefined1 *)((long)param_1 + 0x823) = 0;
              goto joined_r0x00710000ec60;
            }
            if (uVar5 == 4) goto LAB_710000ec2c;
            *(undefined1 *)((long)param_1 + 0x823) = 0;
          }
LAB_710000ec6c:
          FUN_7100004200((long)param_1,2);
          *(undefined8 *)(lVar9 + 0xc0) = 0;
          uVar6 = extraout_x1;
        }
        else {
          lVar4 = 0;
          *(undefined1 *)((long)param_1 + 0x823) = 0;
LAB_710000ec00:
          if (lVar10 < lVar4) goto LAB_710000ec6c;
        }
        if ((lVar10 != 0) &&
           (uVar7 = FUN_71000179b0(param_1,uVar6,param_3,param_4,param_5,param_6,param_7,param_8),
           (int)uVar7 != 0)) {
          return uVar7;
        }
      }
    }
  }
  else {
    uVar7 = *(ulong *)(lVar8 + 0x4cc0) & *(ulong *)(lVar8 + 0x4cd0);
    uVar5 = (uint)uVar7;
    if ((uVar5 >> 2 & 1) != 0) {
      uVar6 = 4;
LAB_710000ea38:
      *(undefined8 *)(lVar8 + 0x4cc8) = uVar6;
      *(undefined8 *)(lVar8 + 0x4cd0) = 0;
      bVar3 = true;
      goto LAB_710000ea44;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar6 = 2;
      goto LAB_710000ea38;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar6 = 8;
      goto LAB_710000ea38;
    }
    if ((uVar5 >> 5 & 1) != 0) {
      uVar6 = 0x20;
      goto LAB_710000ea38;
    }
    if ((uVar7 & 1) != 0) {
      uVar6 = 1;
      goto LAB_710000ea38;
    }
    bVar3 = false;
    *(undefined8 *)(lVar8 + 0x4cd0) = 0;
    *(undefined8 *)(lVar8 + 0x4cc8) = 0x40000000;
    *(undefined1 *)(lVar8 + 0x4d00) = 1;
    if (*(char *)((long)param_1 + 0x819) != '\0') goto LAB_710000ea4c;
LAB_710000ea98:
    if (bVar3) goto LAB_710000eb0c;
    if ((((iVar1 < 300) && (*(char *)(lVar8 + 0x4cd8) == '\0')) &&
        (*(char *)((long)param_1 + 0x822) != '\0')) && ((*(uint *)(lVar8 + 0x480) | 4) != 5)) {
      lVar4 = FUN_71000272c0();
      *(long *)(lVar8 + 0x238) = lVar4;
      if (lVar4 == 0) {
        return 0x1b;
      }
      *(char *)(lVar8 + 0x4cd8) = '\x01';
    }
  }
  lVar4 = *param_1;
  iVar1 = *(int *)(lVar4 + 0x170);
  if ((iVar1 < 400) || (*(char *)(lVar4 + 0x6b8) == '\0')) {
    return 0;
  }
  if (iVar1 == 0x197) {
    cVar2 = *(char *)((long)param_1 + 0x819);
  }
  else {
    if (iVar1 != 0x191) goto LAB_710000eba0;
    cVar2 = (char)param_1[0x103];
  }
  if ((cVar2 != '\0') && (*(char *)(lVar4 + 0x4d00) == '\0')) {
    return 0;
  }
LAB_710000eba0:
  FUN_7100016040(lVar8,(byte *)"The requested URL returned error: %d",
                 (ulong)*(uint *)(lVar8 + 0x170),param_4,param_5,param_6,param_7,param_8);
  return 0x16;
}

