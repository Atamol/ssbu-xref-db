// addr:      7102aee440
// offset:    0x2aee440
// name:      FUN_7102aee440
// mangled:   
// signature: undefined8 __cdecl FUN_7102aee440(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


undefined8
FUN_7102aee440(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x310);
  plVar2 = *(long **)(lVar4 + 0xd0);
  do {
    if (plVar2 == *(long **)(lVar4 + 0xd8)) {
LAB_7102aee49c:
      *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
LAB_7102aee4a4:
      uVar1 = 0xffffffff;
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x7c) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
LAB_7102aee4c4:
      *(undefined4 *)(param_1 + 0x70) = uVar1;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      return 1;
    }
    if ((*(uint *)(plVar2 + 1) < 2) && (lVar5 = *plVar2, *(long *)(lVar5 + 0x68) == 0xf55f0f949)) {
      if (lVar5 != 0) {
        if ((*(long *)(lVar5 + 0xd8) == 0) && (*(long *)(lVar5 + 0xd8) == 0)) {
          plVar2 = FUN_71026533a0((undefined8 *)(lVar5 + 0x90),0,param_3,param_4,param_5,param_6,
                                  param_7,param_8);
          plVar3 = *(long **)(lVar5 + 0xd8);
          *(long **)(lVar5 + 0xd8) = plVar2;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"GreenBallPositionA");
        }
        *(undefined4 *)(param_1 + 0x88) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
          if (lVar5 == 0) goto LAB_7102aee4a4;
          lVar4 = *(long *)(lVar5 + 0xd8);
          if (lVar4 == 0) goto LAB_7102aee5c0;
LAB_7102aee5a0:
          plVar2 = *(long **)(*(long *)(lVar4 + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"GreenBallPositionC");
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"GreenBallPositionB");
          *(undefined4 *)(param_1 + 0x8c) = uVar1;
          lVar4 = *(long *)(lVar5 + 0xd8);
          if (lVar4 != 0) goto LAB_7102aee5a0;
LAB_7102aee5c0:
          uVar1 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x90) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"GreenBallPositionD");
        }
        *(undefined4 *)(param_1 + 0x94) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"EnemyOutPointA");
        }
        *(undefined4 *)(param_1 + 0x78) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"EnemyOutPointB");
        }
        *(undefined4 *)(param_1 + 0x7c) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"EnemyInPointA");
        }
        *(undefined4 *)(param_1 + 0x80) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"EnemyInPointB");
        }
        *(undefined4 *)(param_1 + 0x84) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"powBlockPosition");
        }
        *(undefined4 *)(param_1 + 0x74) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaD_Position");
        }
        *(undefined4 *)(param_1 + 0x58) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaF_Position");
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaG_Position");
        }
        *(undefined4 *)(param_1 + 0x60) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaC_Position");
        }
        *(undefined4 *)(param_1 + 100) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaE_Position");
        }
        *(undefined4 *)(param_1 + 0x68) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaA_Position");
        }
        *(undefined4 *)(param_1 + 0x6c) = uVar1;
        if (*(long *)(lVar5 + 0xd8) == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar5 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"yukaB_Position");
        }
        goto LAB_7102aee4c4;
      }
      goto LAB_7102aee49c;
    }
    plVar2 = plVar2 + 2;
  } while( true );
}

