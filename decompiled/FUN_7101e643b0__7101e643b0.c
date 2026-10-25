// addr:      7101e643b0
// offset:    0x1e643b0
// name:      FUN_7101e643b0
// mangled:   
// signature: undefined __cdecl FUN_7101e643b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e643b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long ****pppplVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long ***local_68;
  
  puVar7 = *(undefined8 **)(param_1 + 0x1c8);
  plVar4 = (long *)*puVar7;
  (**(code **)(*plVar4 + 0x60))(plVar4,0);
  plVar4 = (long *)*puVar7;
  (**(code **)(*plVar4 + 0x70))(plVar4,0);
  *(undefined1 *)(param_1 + 0x270) = 0;
  if (*(char *)(param_1 + 0x1f8) != '\x01') {
    *(undefined1 *)(param_1 + 0x1f8) = 1;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1f0),0x7104292336);
    pcVar6 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    bVar3 = *pcVar6 != '\x01';
    FUN_710377a120((long)(pcVar6 + (ulong)bVar3 * 0x48 + 0x18),"cmn_yes",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar6 + (ulong)bVar3 * 0x48 + 0x28),"cmn_yes",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar6 + (ulong)bVar3 * 0x48 + 0x38),"cmn_yes",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar6 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    cVar2 = *pcVar6;
    FUN_7103778300(0x3f800000,*(long *)(pcVar6 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),
                   0x710433a880);
    FUN_7103778300(0x3f800000,*(long *)(pcVar6 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),
                   0x710425fba5);
    FUN_7101e96fc0(param_1 + 0x1d8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
    local_68 = (long ***)0xf57a523f5;
    pppplVar5 = &local_68;
    FUN_7103772070(**(long **)(param_1 + 0x1e0),
                   (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),pppplVar5,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar6 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    bVar3 = *pcVar6 != '\0';
    FUN_710377a120((long)(pcVar6 + (ulong)bVar3 * 0x48 + 0x18),"cmn_no",pppplVar5,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar6 + (ulong)bVar3 * 0x48 + 0x28),"cmn_no",pppplVar5,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar6 + (ulong)bVar3 * 0x48 + 0x38),"cmn_no",pppplVar5,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar6 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    cVar2 = *pcVar6;
    FUN_7103778300(0x3f800000,*(long *)(pcVar6 + (ulong)(cVar2 != '\0') * 0x48 + 0x10),0x710433a880)
    ;
    FUN_7103778300(0x3f800000,*(long *)(pcVar6 + (ulong)(cVar2 != '\0') * 0x48 + 0x10),0x710425fba5)
    ;
    FUN_7101e96fc0(param_1 + 0x1d8,'\0',pppplVar5,param_4,param_5,param_6,param_7,param_8);
    local_68 = (long ***)0xf57a523f5;
    FUN_7103772070(**(long **)(param_1 + 0x1e0),
                   (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\0'),&local_68,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(*(long *)(param_1 + 0x1e0) + 0x98) = 1;
  }
  if (*(uint *)(param_1 + 0x19c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x19c) * 4 + 0x150) = 0xb;
    if (*(int *)(param_1 + 0x19c) < 0x12) {
      uVar1 = *(int *)(param_1 + 0x19c) + 1;
      *(uint *)(param_1 + 0x19c) = uVar1;
      if (0x12 < uVar1) goto LAB_7101e64604;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x150) = 0xd;
    }
    return;
  }
LAB_7101e64604:
                    /* WARNING: Subroutine does not return */
  abort();
}

