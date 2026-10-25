// addr:      71027493d0
// offset:    0x27493d0
// name:      FUN_71027493d0
// mangled:   
// signature: undefined __cdecl FUN_71027493d0(float param_1, long * param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_71027493d0(float param_1,long *param_2,undefined8 param_3,long ****param_4,byte ****param_5
                   ,long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  bool bVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((int)param_2[2] == 1) {
    fVar7 = *(float *)((long)param_2 + 0x1c);
    fVar5 = fVar7 + param_1;
    lVar4 = param_2[1];
    *(float *)((long)param_2 + 0x1c) = fVar5;
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0xc));
    bVar1 = true;
    bVar2 = false;
    if (fVar7 < fVar6) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar5) && !NAN(fVar6)) {
        bVar1 = fVar5 < fVar6;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      lVar4 = param_2[(long)*(int *)((long)param_2 + 0x14) + 6];
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar4 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
        if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar4 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar4 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x21) = 1;
        }
        param_3 = extraout_x1;
        if (*(char *)(lVar4 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar4 + 0xb0) + 0x10) = 0;
        }
      }
      lVar4 = param_2[1];
    }
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x10));
    if ((fVar7 < fVar5) && (fVar5 <= *(float *)((long)param_2 + 0x1c))) {
      lVar4 = param_2[(long)(int)param_2[3] + 6];
      if (lVar4 == 0) {
        FUN_710260fdd0(0,0,1);
      }
      else {
        *(undefined1 *)(lVar4 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar4 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
        FUN_710260fdd0(0,lVar4,1);
        if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar4 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar4 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar4 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar4 + 0xb0) + 0x10) = 1;
        }
      }
      lVar4 = param_2[1];
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x10));
    }
    if (((fVar5 <= *(float *)((long)param_2 + 0x1c)) &&
        (fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0xc)),
        fVar5 <= *(float *)((long)param_2 + 0x1c))) && (bVar1 = FUN_710260ffb0(param_2[5]), bVar1))
    {
      lVar4 = param_2[5];
      *(undefined4 *)(param_2 + 2) = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar4 + 0x108),extraout_x1_00,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        lVar4 = param_2[5];
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar4 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar4 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar4 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar4 + 0xb0) + 0x10) = 0;
          }
        }
      }
      FUN_7102749210(param_2,(int)param_2[3],0,param_5,param_6,param_7,param_8,param_9);
    }
  }
  else if (((int)param_2[2] == 0) && ((char)param_2[4] != '\0')) {
    if ((int)param_2[3] != *(int *)((long)param_2 + 0x24)) {
      *(undefined4 *)(param_2 + 2) = 1;
      *(int *)((long)param_2 + 0x14) = (int)param_2[3];
      lVar4 = param_2[5];
      *(int *)(param_2 + 3) = *(int *)((long)param_2 + 0x24);
      *(undefined4 *)((long)param_2 + 0x1c) = 0;
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        *(undefined1 *)(lVar4 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar4 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
        lVar4 = param_2[5];
      }
      FUN_710260fdd0(0,lVar4,1);
      lVar4 = param_2[5];
      if (lVar4 != 0) {
        if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar4 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar4 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar4 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar4 + 0xb0) + 0x10) = 1;
        }
        lVar4 = param_2[5];
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar4 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar4 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x22) = 0;
          }
        }
      }
      FUN_71025f74f0(30.0,*(long *)(*(long *)(*param_2 + 0x318) + 0x10),(byte *)"light_change");
      FUN_7102633a10(*(long *)(*param_2 + 0x318),(long *********)"chara_change",1,param_5,param_6,
                     param_7,param_8,param_9);
      uVar3 = 1;
      FUN_7102633b90(*(long *)(*param_2 + 0x318),(long *********)"stage_change",1,param_5,param_6,
                     param_7,param_8,param_9);
      FUN_7102633800(*(long *)(*param_2 + 0x318),(long *********)"reflection_cubemap_change",uVar3,
                     param_5,param_6,param_7,param_8,param_9);
      *(undefined1 *)(param_2 + 4) = 0;
    }
  }
  return;
}

