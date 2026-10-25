// addr:      7101e64120
// offset:    0x1e64120
// name:      FUN_7101e64120
// mangled:   
// signature: undefined __cdecl FUN_7101e64120(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e64120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  byte ****ppppbVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long ***local_48;
  
  *(undefined1 *)(param_1 + 0x270) = 0;
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1f0),0x71043e07cf);
    pcVar4 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    bVar2 = *pcVar4 != '\x01';
    FUN_710377a120((long)(pcVar4 + (ulong)bVar2 * 0x48 + 0x18),"cam_searchfield_go",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar4 + (ulong)bVar2 * 0x48 + 0x28),"cam_searchfield_go",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar4 + (ulong)bVar2 * 0x48 + 0x38),"cam_searchfield_go",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar4 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
    cVar1 = *pcVar4;
    FUN_7103778300(0x3f800000,*(long *)(pcVar4 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                   0x710433a880);
    FUN_7103778300(0x3f800000,*(long *)(pcVar4 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                   0x7104433776);
    FUN_7101e96fc0(param_1 + 0x1d8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
    ppppbVar3 = (byte ****)0x0;
    FUN_7103771930(**(long **)(param_1 + 0x1e0),
                   (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),(long ****)&DAT_00000007
                   ,(byte ****)0x0,param_5,param_6,param_7,param_8);
    local_48 = (long ***)0xf57a523f5;
    FUN_7103772070(**(long **)(param_1 + 0x1e0),
                   (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),&local_48,ppppbVar3,
                   param_5,param_6,param_7,param_8);
    plVar11 = *(long **)(param_1 + 0x1e0);
    bVar2 = (char)plVar11[1] != '\0';
    lVar5 = *(long *)(*plVar11 + 0x1b8);
    if (lVar5 != 0) {
      lVar6 = *plVar11 + 0x1b8;
      lVar7 = lVar6;
      lVar8 = lVar5;
      do {
        uVar10 = (uint)bVar2;
        if ((int)uVar10 <= *(int *)(lVar8 + 0x20)) {
          lVar7 = lVar8;
        }
        lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < (int)uVar10) * 8);
      } while (lVar8 != 0);
      uVar10 = (uint)bVar2;
      if (((lVar7 != lVar6) && (*(int *)(lVar7 + 0x20) <= (int)uVar10)) &&
         (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x208))(plVar9,0);
        (**(code **)(*plVar9 + 0x388))(plVar9,1,0);
        lVar6 = *plVar11 + 0x1b8;
        lVar5 = *(long *)(*plVar11 + 0x1b8);
      }
      lVar7 = lVar6;
      if (lVar5 != 0) {
        do {
          if ((int)uVar10 <= *(int *)(lVar5 + 0x20)) {
            lVar7 = lVar5;
          }
          lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < (int)uVar10) * 8);
        } while (lVar5 != 0);
        if (((lVar7 != lVar6) && (*(int *)(lVar7 + 0x20) <= (int)uVar10)) &&
           (plVar11 = *(long **)(lVar7 + 0x28), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar11 + 0x1f8))(plVar11,0);
          (**(code **)(*plVar11 + 0x388))(plVar11,1,0);
        }
      }
    }
    *(undefined1 *)(*(long *)(param_1 + 0x1e0) + 0x98) = 0;
  }
  if (0x12 < *(uint *)(param_1 + 0x19c)) {
LAB_7101e643a4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x19c) * 4 + 0x150) = 10;
  if (*(int *)(param_1 + 0x19c) < 0x12) {
    uVar10 = *(int *)(param_1 + 0x19c) + 1;
    *(uint *)(param_1 + 0x19c) = uVar10;
    if (0x12 < uVar10) goto LAB_7101e643a4;
    *(undefined4 *)(param_1 + (long)(int)uVar10 * 4 + 0x150) = 0xd;
  }
  return;
}

