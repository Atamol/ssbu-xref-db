// addr:      7100055f00
// offset:    0x55f00
// name:      FUN_7100055f00
// mangled:   
// signature: undefined __cdecl FUN_7100055f00(undefined8 param_1, long param_2, long param_3, ushort param_4)


void FUN_7100055f00(undefined8 param_1,long param_2,long param_3,ushort param_4)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    iVar5 = ((uint)param_4 + (uint)param_4 * 2) * 4;
    lVar4 = 0;
    lVar6 = param_3;
    do {
      while( true ) {
        puVar1 = (uint *)(param_3 + lVar4);
        uVar7 = *puVar1;
        pcVar8 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        iVar3 = strcmp("__CUS_Vec2_0",pcVar8);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        else {
          pcVar8 = (char *)(lVar6 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec2_1",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec2_2",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec2_3",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec3_0",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 8)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec3_1",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 8)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec3_2",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 8)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Vec3_3",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 4)
          ;
          *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4 + 8)
          ;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Rgba_0",pcVar2);
        if (iVar3 == 0) {
          *(float *)(param_2 + 0x1b0) = (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4) / 255.0;
          *(float *)(param_2 + 0x1b4) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 4) / 255.0;
          *(float *)(param_2 + 0x1b8) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 8) / 255.0;
          *(float *)(param_2 + 0x1bc) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 0xc) / 255.0;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Rgba_1",pcVar2);
        if (iVar3 == 0) {
          *(float *)(param_2 + 0x1c0) = (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4) / 255.0;
          *(float *)(param_2 + 0x1c4) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 4) / 255.0;
          *(float *)(param_2 + 0x1c8) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 8) / 255.0;
          *(float *)(param_2 + 0x1cc) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 0xc) / 255.0;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Rgba_2",pcVar2);
        if (iVar3 == 0) {
          *(float *)(param_2 + 0x1d0) = (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4) / 255.0;
          *(float *)(param_2 + 0x1d4) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 4) / 255.0;
          *(float *)(param_2 + 0x1d8) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 8) / 255.0;
          *(float *)(param_2 + 0x1dc) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 0xc) / 255.0;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Rgba_3",pcVar2);
        if (iVar3 == 0) {
          *(float *)(param_2 + 0x1e0) = (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4) / 255.0;
          *(float *)(param_2 + 0x1e4) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 4) / 255.0;
          *(float *)(param_2 + 0x1e8) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 8) / 255.0;
          *(float *)(param_2 + 0x1ec) =
               (float)*(int *)(param_3 + (ulong)puVar1[1] + lVar4 + 0xc) / 255.0;
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Float_0",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Float_1",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        iVar3 = strcmp("__CUS_Float_2",pcVar2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
          uVar7 = *(uint *)(param_3 + lVar4);
          pcVar8 = (char *)(param_3 + lVar4 + (ulong)uVar7);
        }
        pcVar2 = (char *)0x0;
        if (uVar7 != 0) {
          pcVar2 = pcVar8;
        }
        lVar6 = lVar6 + 0xc;
        iVar3 = strcmp("__CUS_Float_3",pcVar2);
        if (iVar3 == 0) break;
        lVar4 = lVar4 + 0xc;
        if (iVar5 == (int)lVar4) {
          return;
        }
      }
      *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
      lVar4 = lVar4 + 0xc;
    } while (iVar5 != (int)lVar4);
  }
  return;
}

