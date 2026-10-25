// addr:      71001a0660
// offset:    0x1a0660
// name:      FUN_71001a0660
// mangled:   
// signature: undefined8 __cdecl FUN_71001a0660(long param_1)


undefined8 FUN_71001a0660(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_434 [836];
  int aiStack_f0 [4];
  int local_e0 [4];
  undefined8 auStack_d0 [16];
  
  if (*(char *)(*(long *)(param_1 + 0x70) + 8) == '\0') {
    return 1;
  }
  FUN_710015fd60(auStack_d0);
  plVar6 = (long *)FUN_7100161fb0((long)DAT_71052add68);
  (**(code **)(*plVar6 + 0x28))(local_e0,plVar6,*(undefined8 *)(param_1 + 0x70),auStack_d0);
  if (local_e0[0] != 0) {
LAB_71001a06c4:
    uVar8 = 1;
    goto LAB_71001a0aa0;
  }
  uVar8 = FUN_71001602c0((long)auStack_d0);
  uVar4 = FUN_71001602d0((long)auStack_d0);
  if ((uint)((-0x3c - DAT_71052ac568[4]) + *DAT_71052ac568) < 0x344) {
    memset(auStack_434,0,0x1be);
    FUN_710019f090(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x98),auStack_434,1,uVar8,uVar4,
                   (uint)*(byte *)(param_1 + 0x80));
    piVar9 = (int *)(param_1 + 100);
    *piVar9 = 0;
    if (*(char *)(param_1 + 0x80) == '\0') {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      lVar7 = *(long *)(param_1 + 0x70);
      uVar5 = (**(code **)(**(long **)(lVar7 + 0x98) + 0x18))();
      FUN_71001adc20(aiStack_f0,plVar6,piVar9,auStack_434,0x1be,lVar7 + 0x10,uVar5,
                     *(long *)(param_1 + 0x58));
    }
    else {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x70) + 0x38);
      uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x70) + 0x98) + 0x18))();
      FUN_71001adf00(aiStack_f0,plVar6,piVar9,auStack_434,0x1be,uVar1,uVar5,1,
                     *(long *)(param_1 + 0x58));
    }
    FUN_71000bcf30(local_e0,aiStack_f0);
    iVar3 = local_e0[0];
    memset(auStack_434,0,0x1be);
    FUN_710019f090(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x98),auStack_434,2,uVar8,uVar4,
                   (uint)*(byte *)(param_1 + 0x80));
    piVar10 = (int *)(param_1 + 0x68);
    *piVar10 = 0;
    if (*(char *)(param_1 + 0x80) == '\0') {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      lVar7 = *(long *)(param_1 + 0x70);
      uVar4 = (**(code **)(**(long **)(lVar7 + 0x98) + 0x18))();
      FUN_71001adc20(aiStack_f0,plVar6,piVar10,auStack_434,0x1be,lVar7 + 0x10,uVar4,
                     *(long *)(param_1 + 0x58));
    }
    else {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x70) + 0x38);
      uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x70) + 0x98) + 0x18))();
      FUN_71001adf00(aiStack_f0,plVar6,piVar10,auStack_434,0x1be,uVar1,uVar4,1,
                     *(long *)(param_1 + 0x58));
    }
    FUN_71000bcf30(local_e0,aiStack_f0);
    if (iVar3 == 0 && local_e0[0] == 0) {
      lVar7 = *(long *)(param_1 + 0x70);
      bVar2 = *(byte *)(lVar7 + 0x38);
      goto joined_r0x0071001a09ac;
    }
    if (*piVar9 != 0) {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      FUN_71001ae030(plVar6,*piVar9);
    }
    if (*piVar10 != 0) {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      FUN_71001ae030(plVar6,*piVar10);
    }
LAB_71001a0a80:
    if (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30)) {
      FUN_71000b4300(*(long *)(param_1 + 0x78));
      goto LAB_71001a06c4;
    }
  }
  else {
    memset(auStack_434,0,0x344);
    FUN_710019f090(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x98),auStack_434,0,uVar8,uVar4,
                   (uint)*(byte *)(param_1 + 0x80));
    if (*(char *)(param_1 + 0x80) == '\0') {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      lVar7 = *(long *)(param_1 + 0x70);
      uVar4 = (**(code **)(**(long **)(lVar7 + 0x98) + 0x18))();
      FUN_71001adc20(aiStack_f0,plVar6,(undefined4 *)(param_1 + 100),auStack_434,0x344,lVar7 + 0x10,
                     uVar4,*(long *)(param_1 + 0x58));
    }
    else {
      plVar6 = (long *)FUN_7100193a40(DAT_71052adfc0);
      uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x70) + 0x38);
      uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x70) + 0x98) + 0x18))();
      FUN_71001adf00(aiStack_f0,plVar6,(undefined4 *)(param_1 + 100),auStack_434,0x344,uVar1,uVar4,1
                     ,*(long *)(param_1 + 0x58));
    }
    FUN_71000bcf30(local_e0,aiStack_f0);
    if (local_e0[0] != 0) goto LAB_71001a0a80;
    lVar7 = *(long *)(param_1 + 0x70);
    bVar2 = *(byte *)(lVar7 + 0x38);
joined_r0x0071001a09ac:
    if (0x1f < bVar2) {
      *(undefined8 *)(lVar7 + 0x80) = *DAT_71052add68;
    }
    *(char **)(param_1 + 0x40) = "ProcessConnectionRequestJob::WaitResponseAck";
    *(code **)(param_1 + 0x30) = FUN_71001a0af0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  uVar8 = 5;
LAB_71001a0aa0:
  FUN_710015ff20(auStack_d0);
  return uVar8;
}

