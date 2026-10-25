// addr:      71019de980
// offset:    0x19de980
// name:      FUN_71019de980
// mangled:   
// signature: undefined __cdecl FUN_71019de980(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019de980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  
  lVar7 = **(long **)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xd4) == 0) {
    uVar6 = 0x6d;
    lVar5 = 9;
    lVar3 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
    *(undefined1 *)(param_1 + 0xf8) = 0;
    local_70 = 0x69696d6d5f756e6d;
    local_68 = 0x745f657079745f66;
    local_5c = 0;
    local_60 = 0x656c7469;
    uVar4 = 0x811c9dc5;
    do {
      uVar4 = uVar4 * 0x89 ^ uVar6;
      uVar6 = (uint)*(byte *)((long)&local_78 + lVar5);
      lVar5 = lVar5 + 1;
    } while (uVar6 != 0);
    _local_78 = CONCAT44(0x14,uVar4);
    FUN_7101af90b0(*(long *)(lVar3 + 0x80),&local_78,param_3,param_4,param_5,param_6,param_7,param_8
                  );
    FUN_7103778430(lVar7 + 8,"type_0%d",(ulong)*(uint *)(*(long *)(param_1 + 0xe8) + 0x254),param_4,
                   param_5,param_6,param_7,param_8);
    lVar5 = *(long *)(lVar7 + 0x10);
    if ((*(long *)(lVar5 + 8) != 0) && (lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x18), lVar3 != 0))
    {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
      lVar5 = *(long *)(lVar7 + 0x10);
    }
    FUN_7103778300(0x3f800000,lVar5,0x7104421055);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0xe0),1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x60))(*(long **)(param_1 + 0xe8),1);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x70))(*(long **)(param_1 + 0xe8),1);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
    if (((lVar7 == 0) ||
        (plVar1 = (long *)FUN_71037964b0(lVar7,0x7104421055), plVar1 == (long *)0x0)) ||
       (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) != 0)) {
      if (0x12 < *(uint *)(param_1 + 0xcc)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xcc) * 4 + 0x80) = 2;
    }
  }
  return;
}

