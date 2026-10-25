// addr:      71036f9420
// offset:    0x36f9420
// name:      FUN_71036f9420
// mangled:   
// signature: int __cdecl FUN_71036f9420(long param_1, long * param_2, void * param_3)


int FUN_71036f9420(long param_1,long *param_2,void *param_3)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    std::recursive_mutex::lock();
    plVar6 = *(long **)(lVar5 + 0x28);
    plVar3 = plVar6 + 0x75;
    if (*(long **)(lVar5 + 0x18) < plVar3) {
      plVar6 = *(long **)(lVar5 + 0x10);
      plVar3 = plVar6 + 0x75;
      if (*(long **)(lVar5 + 0x20) < plVar3) {
        std::recursive_mutex::unlock();
        return 0;
      }
    }
    *(long **)(lVar5 + 0x28) = plVar3;
    *plVar6 = 0;
    plVar6[1] = 0;
    if (*(long *)(lVar5 + 0x30) == 0) {
      *(long **)(lVar5 + 0x30) = plVar6;
    }
    else {
      *plVar6 = *(long *)(lVar5 + 0x38);
      *(long **)(*(long *)(lVar5 + 0x38) + 8) = plVar6;
    }
    *(long **)(lVar5 + 0x38) = plVar6;
    plVar6[2] = (long)&PTR_FUN_710509dfd8;
    plVar6[3] = 0;
    plVar6[4] = (long)"TaskMatching";
    *(undefined4 *)(plVar6 + 5) = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 8) = 1;
    plVar6[10] = 0;
    *(undefined8 *)(plVar6 + 9) = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    std::recursive_mutex::recursive_mutex((recursive_mutex *)(plVar6 + 9));
    *(undefined1 *)((long)plVar6 + 0x72) = 0;
    *(undefined2 *)(plVar6 + 0xe) = 0;
    plVar6[0xd] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar6 + 0x74));
    plVar3 = plVar6 + 0x11;
    *plVar3 = 0;
    *(undefined1 *)(plVar6 + 0x10) = 0;
    *(undefined1 *)(plVar6 + 0x12) = 0;
    plVar6[0x13] = 0;
    iVar4 = DAT_710593b000;
    iVar2 = DAT_710593b000 + 1;
    *(int *)(plVar6 + 5) = DAT_710593b000;
    DAT_710593b000 = iVar2;
    if (iVar4 == 0) {
      DAT_710593b000 = 2;
      *(undefined4 *)(plVar6 + 5) = 1;
    }
    plVar6[2] = (long)&PTR_FUN_710523c3d0;
    plVar6[0x18] = 0;
    *(undefined4 *)(plVar6 + 0x1a) = 0;
    plVar6[6] = (long)(plVar6 + 0x1c);
    *(undefined4 *)(plVar6 + 7) = 0x2c8;
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    if (plVar3 != param_2) {
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        sVar1 = *(short *)(lVar5 + 8) + -1;
        *(short *)(lVar5 + 8) = sVar1;
        if ((sVar1 < 1) && ((long *)*plVar3 != (long *)0x0)) {
          (**(code **)(*(long *)*plVar3 + 8))();
        }
        *plVar3 = 0;
      }
      lVar5 = *param_2;
      *plVar3 = lVar5;
      if (lVar5 != 0) {
        *(short *)(lVar5 + 8) = *(short *)(lVar5 + 8) + 1;
      }
    }
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    if (0x2c7 < *(uint *)(plVar6 + 7)) {
      memcpy((void *)plVar6[6],param_3,0x2c8);
    }
    std::recursive_mutex::unlock();
    iVar4 = (int)plVar6[5];
    if ((iVar4 != 0) && (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) {
      std::recursive_mutex::lock();
      for (lVar5 = *(long *)(lVar5 + 0x30); lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(int *)(lVar5 + 0x28) == iVar4) {
          std::recursive_mutex::lock();
          if (*(char *)(lVar5 + 0x80) == '\0') {
            *(undefined1 *)(lVar5 + 0x80) = 1;
          }
          std::recursive_mutex::unlock();
          break;
        }
      }
      std::recursive_mutex::unlock();
    }
  }
  return iVar4;
}

