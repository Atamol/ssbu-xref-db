// addr:      7101922970
// offset:    0x1922970
// name:      FUN_7101922970
// mangled:   
// signature: undefined __cdecl FUN_7101922970(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101922970(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 extraout_x1;
  long *********ppppppppplVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  long *local_48;
  
  puVar1 = (uint *)(param_1 + 0x42c0);
  if (*(int *)(param_1 + 0x1b4) == 0) {
    *puVar1 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    *(undefined1 *)(*(long *)(lVar5 + 0x558) + 0x70) = 0;
    *(undefined1 *)(*(long *)(lVar5 + 0x560) + 0x70) = 0;
    if (*(char *)(lVar5 + 0x5d9) != '\0') {
      *(undefined1 *)(lVar5 + 0x5d9) = 0;
      *(undefined4 *)(lVar5 + 0x5c8) = 0;
      FUN_7103776910(&local_50,*(long *)(*(long *)(lVar5 + 0x558) + 0x80) + 0x30,
                     (long ****)"keyhelp",param_3,param_4,param_5,param_6,param_7,param_8);
      plVar2 = local_48;
      lVar5 = *local_48;
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar2);
      }
    }
    lVar5 = DAT_710532f870;
    if ((*(byte *)(*(long *)(DAT_710532f870 + 8) + 0x10) >> 1 & 1) == 0) {
      plVar2 = (long *)(*(long *)(DAT_710532f870 + 8) + 8);
      *(undefined8 *)(*plVar2 + 0x70) = 1;
      FUN_7101845ea0(plVar2);
      *(undefined8 *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 0x70) = 0;
    }
    *(undefined4 *)(*DAT_710532a860 + 0x5f3c4) = 0xffffffff;
    FUN_710366ac20(0);
    if (DAT_710532f7f0 != 0) {
      FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8
                    );
    }
    lVar5 = *DAT_710532a860;
    ppppppppplVar4 = (long *********)(lVar5 + 0x3d2e8);
    if (*(int *)ppppppppplVar4 != 0xffffff) {
      param_4 = (byte ****)(lVar5 + 0x3d2f0);
      if (*(int *)param_4 == 0xffffff) {
        param_4 = (byte ****)(lVar5 + 0x3d2ec);
        FUN_7103739eb0(&local_50,(long *)*DAT_710593b3d8,ppppppppplVar4,param_4,param_5,param_6,
                       param_7,param_8);
      }
      else {
        param_5 = (long ****)(lVar5 + 0x3d2ec);
        FUN_710373a140(&local_50,(long *)*DAT_710593b3d8,ppppppppplVar4,param_4,param_5,param_6,
                       param_7,param_8);
      }
      FUN_7103738660((undefined8 *)(lVar5 + 0x3d2f8),&local_50,ppppppppplVar4,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103737e70(&local_50,extraout_x1,ppppppppplVar4,param_4,param_5,param_6,param_7,param_8);
    }
    if ((*(char *)(param_1 + 0x42cb) == '\0') ||
       ((((DAT_7107447018 & 1) == 0 && ((DAT_7107447038 & 0xffffffffff) == 0)) ||
        (*(char *)(*DAT_710532a860 + 0x5f3d2) != '\0')))) {
      lVar5 = *(long *)(DAT_710532f8d0 + 8);
      iVar3 = 1;
    }
    else {
      lVar5 = *(long *)(DAT_710532f8d0 + 8);
      iVar3 = 2;
    }
    FUN_7103315820(lVar5,iVar3);
    *(undefined1 *)
     (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x558) + 0x80) + 0x24a) = 0;
    lVar5 = DAT_7105329f38;
    lVar6 = *(long *)(DAT_710532f8d0 + 8);
    std::recursive_mutex::lock();
    plVar2 = &DAT_7104465568;
    if (*(char *)(*(long *)(lVar5 + 0x28) + 0x58) != '\0') {
      plVar2 = (long *)(*(long *)(lVar5 + 0x28) + 0x68);
    }
    lVar7 = *plVar2;
    std::recursive_mutex::unlock();
    lVar5 = *(long *)(lVar6 + 0x18);
    if ((lVar5 != lVar7) || (lVar5 == 0)) {
      FUN_71033145d0(DAT_710532f8d0,0xd9ffff1e3d9517e5,1,param_4,param_5,param_6,param_7,param_8);
    }
  }
  if (*puVar1 < 0xf) {
    *puVar1 = *puVar1 + 1;
  }
  else {
    if (0x12 < *(uint *)(param_1 + 0x1ac)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1ac) * 4 + 0x160) = 2;
  }
  return;
}

