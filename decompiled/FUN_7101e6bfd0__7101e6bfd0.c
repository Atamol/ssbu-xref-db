// addr:      7101e6bfd0
// offset:    0x1e6bfd0
// name:      FUN_7101e6bfd0
// mangled:   
// signature: undefined __cdecl FUN_7101e6bfd0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e6bfd0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long ***local_80;
  ulong local_78;
  long ***local_70;
  undefined4 local_64;
  
  pppplVar6 = &local_80;
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined1 *)(param_1 + 0x494) = 1;
  FUN_7101e980b0((long *)(param_1 + 0x310),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar13 = *(long *)(param_1 + 0x330);
  plVar7 = *(long **)(lVar13 + 0x18);
  plVar12 = (long *)plVar7[1];
  if (plVar12 != (long *)0x0) {
    if ((char)plVar7[2] != '\0') {
      plVar14 = *(long **)(*plVar7 + 0x80);
      plVar7 = (long *)(*plVar7 + 0x88);
      if (plVar14 != plVar7) {
        do {
          while( true ) {
            uVar4 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
            if (((uVar4 & 1) != 0) &&
               (uVar4 = (**(code **)(*plVar12 + 0x120))(plVar12,plVar14[0xd]), (uVar4 & 1) != 0)) {
              (**(code **)(*(long *)plVar14[0xd] + 0x178))();
              (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
            }
            plVar8 = (long *)plVar14[1];
            if ((long *)plVar14[1] == (long *)0x0) break;
            do {
              plVar14 = plVar8;
              plVar8 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e6c0cc:
            if (plVar14 == plVar7) goto LAB_7101e6c0e4;
          }
          plVar8 = plVar14 + 2;
          plVar10 = (long *)*plVar8;
          if ((long *)*plVar10 != plVar14) {
            do {
              lVar11 = *plVar8;
              plVar8 = (long *)(lVar11 + 0x10);
              plVar14 = (long *)*plVar8;
            } while (*plVar14 != lVar11);
            goto LAB_7101e6c0cc;
          }
          plVar14 = plVar10;
        } while (plVar10 != plVar7);
LAB_7101e6c0e4:
        plVar12 = *(long **)(*(long *)(lVar13 + 0x18) + 8);
      }
    }
    (**(code **)(*plVar12 + 0x178))(plVar12);
  }
  *(undefined1 *)(param_1 + 0x338) = 0;
  FUN_71037780e0(&local_80,*(long *)(param_1 + 0x2e8),(long ****)"treasure_liftup",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000010;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar4 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_7101e6c16c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101e6c16c:
  uVar4 = local_78;
  *puVar5 = &PTR_FUN_710523d9e8;
  puVar5[1] = 0;
  if (&local_80 != (long ****)puVar5) {
    local_78 = 0;
    puVar5[1] = uVar4;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x2e8) + 0x20);
  *(undefined8 **)(*(long *)(param_1 + 0x2e8) + 0x20) = puVar5;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  uVar4 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_710377aee0(0x3f800000,*(long *)(*(long *)(param_1 + 0x2e8) + 0x20));
  *(undefined1 *)(param_1 + 0x2f0) = 4;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  FUN_7101e67380(param_1 + 0x230,1,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x2c1) = 2;
  *(undefined1 *)(param_1 + 0x218) = 1;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x210),0x7104412f3e);
  pcVar9 = (char *)(*(long *)(param_1 + 0x200) + 8);
  bVar3 = *pcVar9 != '\x01';
  FUN_710377a120((long)(pcVar9 + (ulong)bVar3 * 0x48 + 0x18),"cmn_yes",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar9 + (ulong)bVar3 * 0x48 + 0x28),"cmn_yes",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar9 + (ulong)bVar3 * 0x48 + 0x38),"cmn_yes",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar9 = (char *)(*(long *)(param_1 + 0x200) + 8);
  cVar2 = *pcVar9;
  FUN_7103778300(0x3f800000,*(long *)(pcVar9 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),0x710433a880)
  ;
  FUN_7103778300(0x3f800000,*(long *)(pcVar9 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),0x710425fba5)
  ;
  FUN_7101e96fc0(param_1 + 0x1f8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
  local_80 = (long ***)0xf57a523f5;
  FUN_7103772070(**(long **)(param_1 + 0x200),
                 (uint)((char)(*(long **)(param_1 + 0x200))[1] != '\x01'),&local_80,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar9 = (char *)(*(long *)(param_1 + 0x200) + 8);
  bVar3 = *pcVar9 != '\0';
  FUN_710377a120((long)(pcVar9 + (ulong)bVar3 * 0x48 + 0x18),"cmn_no",pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar9 + (ulong)bVar3 * 0x48 + 0x28),"cmn_no",pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar9 + (ulong)bVar3 * 0x48 + 0x38),"cmn_no",pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar9 = (char *)(*(long *)(param_1 + 0x200) + 8);
  cVar2 = *pcVar9;
  FUN_7103778300(0x3f800000,*(long *)(pcVar9 + (ulong)(cVar2 != '\0') * 0x48 + 0x10),0x710433a880);
  FUN_7103778300(0x3f800000,*(long *)(pcVar9 + (ulong)(cVar2 != '\0') * 0x48 + 0x10),0x710425fba5);
  FUN_7101e96fc0(param_1 + 0x1f8,'\0',pppplVar6,param_4,param_5,param_6,param_7,param_8);
  local_80 = (long ***)0xf57a523f5;
  FUN_7103772070(**(long **)(param_1 + 0x200),(uint)((char)(*(long **)(param_1 + 0x200))[1] != '\0')
                 ,&local_80,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x200) + 0x98) = 1;
  if (0x12 < *(uint *)(param_1 + 0x1cc)) {
LAB_7101e6c404:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1cc) * 4 + 0x180) = 8;
  if (*(int *)(param_1 + 0x1cc) < 0x12) {
    uVar1 = *(int *)(param_1 + 0x1cc) + 1;
    *(uint *)(param_1 + 0x1cc) = uVar1;
    if (0x12 < uVar1) goto LAB_7101e6c404;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x180) = 0xd;
    if (*(int *)(param_1 + 0x1cc) < 0x12) {
      uVar1 = *(int *)(param_1 + 0x1cc) + 1;
      *(uint *)(param_1 + 0x1cc) = uVar1;
      if (0x12 < uVar1) goto LAB_7101e6c404;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x180) = 0xf;
    }
  }
  return;
}

