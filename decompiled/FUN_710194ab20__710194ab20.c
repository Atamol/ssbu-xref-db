// addr:      710194ab20
// offset:    0x194ab20
// name:      FUN_710194ab20
// mangled:   
// signature: undefined __cdecl FUN_710194ab20(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710194ab20(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long ****pppplVar6;
  char *pcVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined **local_70;
  ulong local_68;
  long ***local_60;
  undefined4 local_54;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x170) + 0x80);
  if (*(int *)(param_1 + 0x15c) != 0) {
    if (*(int *)(lVar10 + 400) != 0x10) {
      return;
    }
    if (*(char *)(lVar10 + 0x2d8) == '\x01') {
      uVar2 = *(uint *)(param_1 + 0x154);
      if (uVar2 < 0x13) {
        uVar9 = 4;
        goto LAB_710194adcc;
      }
    }
    else {
      if (*(char *)(lVar10 + 0x2d8) != '\x02') {
        return;
      }
      *(undefined1 *)(param_1 + 0x189) = 1;
      uVar2 = *(uint *)(param_1 + 0x154);
      if (uVar2 < 0x13) {
        uVar9 = 9;
LAB_710194adcc:
        *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x108) = uVar9;
        return;
      }
    }
    goto LAB_710194adf0;
  }
  *(undefined1 *)(lVar10 + 0x2d8) = 0;
  pcVar7 = (char *)(*(long *)(lVar10 + 0x1c0) + 8);
  bVar3 = *pcVar7 != '\x01';
  FUN_710377a120((long)(pcVar7 + (ulong)bVar3 * 0x48 + 0x18),"cmn_yes",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar7 + (ulong)bVar3 * 0x48 + 0x28),"cmn_yes",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar7 + (ulong)bVar3 * 0x48 + 0x38),"cmn_yes",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar7 = (char *)(*(long *)(lVar10 + 0x1c0) + 8);
  cVar1 = *pcVar7;
  FUN_7103778300(0x3f800000,*(long *)(pcVar7 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),0x710433a880)
  ;
  FUN_7103778300(0x3f800000,*(long *)(pcVar7 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),0x710425fba5)
  ;
  FUN_7101e96fc0(lVar10 + 0x1b8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar7 = (char *)(*(long *)(lVar10 + 0x1c0) + 8);
  bVar3 = *pcVar7 != '\0';
  FUN_710377a120((long)(pcVar7 + (ulong)bVar3 * 0x48 + 0x18),"cmn_no",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar7 + (ulong)bVar3 * 0x48 + 0x28),"cmn_no",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar7 + (ulong)bVar3 * 0x48 + 0x38),"cmn_no",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar7 = (char *)(*(long *)(lVar10 + 0x1c0) + 8);
  cVar1 = *pcVar7;
  FUN_7103778300(0x3f800000,*(long *)(pcVar7 + (ulong)(cVar1 != '\0') * 0x48 + 0x10),0x710433a880);
  FUN_7103778300(0x3f800000,*(long *)(pcVar7 + (ulong)(cVar1 != '\0') * 0x48 + 0x10),0x710425fba5);
  FUN_7101e96fc0(lVar10 + 0x1b8,'\0',param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_70,lVar10 + 0x1a8,(long ****)"menu_in",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000010;
      pppplVar6 = &local_60;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_710194ad1c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_710194ad1c:
  uVar5 = local_68;
  *puVar4 = &PTR_FUN_710523d9e8;
  puVar4[1] = 0;
  if (&local_70 != (undefined ***)puVar4) {
    local_68 = 0;
    puVar4[1] = uVar5;
  }
  plVar8 = *(long **)(lVar10 + 0x2d0);
  *(undefined8 **)(lVar10 + 0x2d0) = puVar4;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  uVar5 = local_68;
  local_70 = &PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_710377aee0(0x3f800000,*(long *)(lVar10 + 0x2d0));
  if (0x12 < *(uint *)(lVar10 + 0x18c)) {
LAB_710194adf0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0x18c) * 4 + 0x140) = 9;
  if (*(int *)(lVar10 + 0x18c) < 0x12) {
    uVar2 = *(int *)(lVar10 + 0x18c) + 1;
    *(uint *)(lVar10 + 0x18c) = uVar2;
    if (0x12 < uVar2) goto LAB_710194adf0;
    *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x140) = 0xf;
  }
  return;
}

