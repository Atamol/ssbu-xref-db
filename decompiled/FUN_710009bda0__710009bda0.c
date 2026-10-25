// addr:      710009bda0
// offset:    0x9bda0
// name:      FUN_710009bda0
// mangled:   
// signature: undefined8 __cdecl FUN_710009bda0(long param_1, long param_2, long param_3)


undefined8 FUN_710009bda0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  undefined *local_80 [4];
  
  *(long *)(param_1 + 0x10) = param_2;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  lVar6 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = lVar6;
  pcVar7 = "_p0";
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar6 + 0x18);
  local_80[0] = &DAT_71043291fc;
  local_80[1] = &DAT_71044214ef;
  local_80[2] = &DAT_7104453bbe;
  local_80[3] = &DAT_71042f6d76;
  lVar3 = FUN_710009bff0(lVar2,"_p0");
  lVar2 = 0;
  lVar6 = 0x40;
  do {
    lVar4 = FUN_710009bff0(*(long *)(param_1 + 0x18),pcVar7);
    if ((lVar2 == 0x20) && (lVar4 == 0)) {
      if ((ulong)*(byte *)(param_3 + 0x14) != 0xff) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        if (lVar4 != 0) {
          lVar4 = FUN_710009bff0(*(long *)(param_1 + 0x18),
                                 (char *)(*(long *)(lVar4 + (ulong)*(byte *)(param_3 + 0x14) * 0x10
                                                   + 0x20) + 2));
          goto LAB_710009be9c;
        }
      }
LAB_710009bf24:
      ((undefined4 *)(param_1 + lVar6))[5] = (uint)*(byte *)(lVar3 + 0xe);
      *(undefined4 *)(param_1 + lVar6) = *(undefined4 *)(lVar3 + 8);
      lVar4 = lVar3;
    }
    else {
LAB_710009be9c:
      if (lVar4 == 0) goto LAB_710009bf24;
      iVar8 = *(int *)(lVar4 + 8);
      if (lVar2 == 0x20) {
        lVar5 = FUN_710009bff0(*(long *)(param_1 + 0x18),"_u1");
        if (lVar5 == 0) {
          if ((ulong)*(byte *)(param_3 + 0x15) != 0xff) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
            if ((lVar5 != 0) &&
               (lVar5 = FUN_710009bff0(*(long *)(param_1 + 0x18),
                                       (char *)(*(long *)(lVar5 + (ulong)*(byte *)(param_3 + 0x15) *
                                                                  0x10 + 0x20) + 2)), lVar5 != 0))
            goto LAB_710009bebc;
          }
        }
        else {
LAB_710009bebc:
          if (iVar8 == *(int *)(lVar5 + 8)) {
            iVar1 = 0xb01;
            if (iVar8 != 0x901) {
              iVar1 = iVar8;
            }
            iVar8 = 0x1501;
            if (iVar1 != 0x1201) {
              iVar8 = iVar1;
            }
            iVar1 = 0x1505;
            if (iVar8 != 0x1205) {
              iVar1 = iVar8;
            }
            iVar8 = 0x1905;
            if (iVar1 != 0x1705) {
              iVar8 = iVar1;
            }
            iVar1 = 0xb02;
            if (iVar8 != 0x902) {
              iVar1 = iVar8;
            }
            iVar8 = 0x1502;
            if (iVar1 != 0x1202) {
              iVar8 = iVar1;
            }
          }
          else {
            FUN_7100093660();
          }
        }
        *(int *)(param_1 + 0x50) = iVar8;
        *(uint *)(param_1 + 100) = (uint)*(byte *)(lVar4 + 0xe);
      }
      else {
        *(int *)(param_1 + lVar6) = iVar8;
        ((int *)(param_1 + lVar6))[5] = (uint)*(byte *)(lVar4 + 0xe);
      }
    }
    *(ulong *)(param_1 + lVar2 + 0x68) = (ulong)*(ushort *)(lVar4 + 0xc);
    if (lVar2 == 0x20) {
      FUN_7100031a20(*(long *)(*(long *)(param_1 + 0x28) + 0x10),(undefined8 *)(param_1 + 0x30));
      return 1;
    }
    pcVar7 = *(char **)((long)local_80 + lVar2);
    lVar2 = lVar2 + 8;
    lVar6 = lVar6 + 4;
  } while( true );
}

