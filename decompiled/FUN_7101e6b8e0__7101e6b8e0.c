// addr:      7101e6b8e0
// offset:    0x1e6b8e0
// name:      FUN_7101e6b8e0
// mangled:   
// signature: undefined __cdecl FUN_7101e6b8e0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e6b8e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long ****pppplVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long ***local_58;
  
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined1 *)(param_1 + 0x494) = 0;
  FUN_7101e98dd0((long *)(param_1 + 0x310),0);
  lVar12 = *(long *)(param_1 + 0x330);
  plVar6 = *(long **)(lVar12 + 0x18);
  plVar11 = (long *)plVar6[1];
  if (plVar11 != (long *)0x0) {
    if ((char)plVar6[2] != '\0') {
      plVar13 = *(long **)(*plVar6 + 0x80);
      plVar6 = (long *)(*plVar6 + 0x88);
      if (plVar13 != plVar6) {
        do {
          while( true ) {
            uVar4 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
            if (((uVar4 & 1) != 0) &&
               (uVar4 = (**(code **)(*plVar11 + 0x120))(plVar11,plVar13[0xd]), (uVar4 & 1) != 0)) {
              (**(code **)(*(long *)plVar13[0xd] + 0x178))();
              (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
            }
            plVar7 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) break;
            do {
              plVar13 = plVar7;
              plVar7 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
LAB_7101e6b9d4:
            if (plVar13 == plVar6) goto LAB_7101e6b9ec;
          }
          plVar7 = plVar13 + 2;
          plVar9 = (long *)*plVar7;
          if ((long *)*plVar9 != plVar13) {
            do {
              lVar10 = *plVar7;
              plVar7 = (long *)(lVar10 + 0x10);
              plVar13 = (long *)*plVar7;
            } while (*plVar13 != lVar10);
            goto LAB_7101e6b9d4;
          }
          plVar13 = plVar9;
        } while (plVar9 != plVar6);
LAB_7101e6b9ec:
        plVar11 = *(long **)(*(long *)(lVar12 + 0x18) + 8);
      }
    }
    (**(code **)(*plVar11 + 0x168))(0x3f800000,plVar11);
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  *(undefined1 *)(param_1 + 0x218) = 0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x210),0x7104412f3e);
  pcVar8 = (char *)(*(long *)(param_1 + 0x200) + 8);
  bVar3 = *pcVar8 != '\x01';
  FUN_710377a120((long)(pcVar8 + (ulong)bVar3 * 0x48 + 0x18),"cam_searchfield_continue",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar8 + (ulong)bVar3 * 0x48 + 0x28),"cam_searchfield_continue",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar8 + (ulong)bVar3 * 0x48 + 0x38),"cam_searchfield_continue",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  pcVar8 = (char *)(*(long *)(param_1 + 0x200) + 8);
  cVar2 = *pcVar8;
  FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),0x710433a880)
  ;
  FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),0x710425fba5)
  ;
  FUN_7101e96fc0(param_1 + 0x1f8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
  local_58 = (long ***)0xf57a523f5;
  pppplVar5 = &local_58;
  FUN_7103772070(**(long **)(param_1 + 0x200),
                 (uint)((char)(*(long **)(param_1 + 0x200))[1] != '\x01'),pppplVar5,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar8 = (char *)(*(long *)(param_1 + 0x200) + 8);
  bVar3 = *pcVar8 != '\0';
  FUN_710377a120((long)(pcVar8 + (ulong)bVar3 * 0x48 + 0x18),"cam_searchfield_cancel_btn",pppplVar5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar8 + (ulong)bVar3 * 0x48 + 0x28),"cam_searchfield_cancel_btn",pppplVar5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)(pcVar8 + (ulong)bVar3 * 0x48 + 0x38),"cam_searchfield_cancel_btn",pppplVar5,
                 param_4,param_5,param_6,param_7,param_8);
  pcVar8 = (char *)(*(long *)(param_1 + 0x200) + 8);
  cVar2 = *pcVar8;
  FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar2 != '\0') * 0x48 + 0x10),0x710433a880);
  FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar2 != '\0') * 0x48 + 0x10),0x710425fba5);
  FUN_7101e96fc0(param_1 + 0x1f8,'\0',pppplVar5,param_4,param_5,param_6,param_7,param_8);
  local_58 = (long ***)0xf57a523f5;
  FUN_7103772070(**(long **)(param_1 + 0x200),(uint)((char)(*(long **)(param_1 + 0x200))[1] != '\0')
                 ,&local_58,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x200) + 0x98) = 0;
  if (0x12 < *(uint *)(param_1 + 0x1cc)) {
LAB_7101e6bbf4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1cc) * 4 + 0x180) = 3;
  if (*(int *)(param_1 + 0x1cc) < 0x12) {
    uVar1 = *(int *)(param_1 + 0x1cc) + 1;
    *(uint *)(param_1 + 0x1cc) = uVar1;
    if (0x12 < uVar1) goto LAB_7101e6bbf4;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x180) = 0xd;
  }
  return;
}

