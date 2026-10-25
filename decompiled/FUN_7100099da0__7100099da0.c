// addr:      7100099da0
// offset:    0x99da0
// name:      FUN_7100099da0
// mangled:   
// signature: undefined __cdecl FUN_7100099da0(long param_1, long param_2)


void FUN_7100099da0(long param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  if (param_2 == 0) {
    FUN_7100093660();
    lVar3 = *(long *)(param_1 + 0x538);
  }
  else {
    *(long *)(param_1 + 0x458) = param_2;
    lVar3 = *(long *)(param_1 + 0x538);
  }
  if (lVar3 != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
  }
  if (*(long *)(param_1 + 0x4b0) != 0) {
    lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_71000380b0(lVar3);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  if (*(long *)(param_1 + 0x4f8) != 0) {
    lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_71000380b0(lVar3);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
  }
  plVar1 = (long *)(param_1 + 0x450);
  FUN_710009cc10(param_1 + 0x4c0,*(undefined8 *)(param_1 + 0x10),plVar1);
  FUN_710009d030(param_1 + 0x508,*(undefined8 *)(param_1 + 0x10),plVar1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_71000afe20(*(long *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar3 = *(long *)(param_1 + 0xa8);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(lVar3 + 0x28) + lVar5 * 8);
      FUN_710003a200(*(undefined1 **)(lVar3 + 0x80));
      FUN_710003a3b0(*(undefined1 **)(lVar3 + 0x88));
      lVar3 = *(long *)(param_1 + 0xa8);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xa0));
  }
  if (lVar3 != 0) {
    if (*(undefined8 **)(lVar3 + 0x48) == *(undefined8 **)(lVar3 + 0x40)) {
      FUN_71000339b0(*(undefined8 **)(lVar3 + 0x48));
    }
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x58);
      if (0 < *(int *)(lVar5 + lVar3 * 0x38 + 4)) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          pcVar2 = (char *)(*(long *)(lVar5 + lVar3 * 0x38 + 0x18) + lVar6);
          FUN_710008a740((long)pcVar2);
          FUN_710008b320(pcVar2);
          lVar5 = *(long *)(param_1 + 0x58);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x3e0;
        } while (lVar7 < *(int *)(lVar5 + lVar3 * 0x38 + 4));
      }
      uVar4 = *(undefined8 *)(lVar5 + lVar3 * 0x38 + 0x20);
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
      (**(code **)(**(long **)(param_1 + 0x458) + 0x18))(*(long **)(param_1 + 0x458),uVar4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x4c));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x140) != '\0') {
    FUN_71000afa50((undefined1 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x10),plVar1);
  }
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    FUN_71000afa50((undefined1 *)(param_1 + 0x2a0),*(undefined8 *)(param_1 + 0x10),plVar1);
    return;
  }
  return;
}

