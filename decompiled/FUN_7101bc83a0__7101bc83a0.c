// addr:      7101bc83a0
// offset:    0x1bc83a0
// name:      FUN_7101bc83a0
// mangled:   
// signature: undefined __cdecl FUN_7101bc83a0(long param_1, int * param_2, int * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bc83a0(long param_1,int *param_2,int *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  byte ****ppppbVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  long lVar13;
  undefined4 local_70 [4];
  long local_60;
  int local_58;
  
  lVar13 = *(long *)(param_1 + 8);
  iVar7 = *param_3;
  if (*param_2 == 1) {
    if (iVar7 == 1) {
      iVar7 = 1;
      uVar8 = 1;
    }
    else {
      if (iVar7 != 0) {
        return;
      }
      iVar7 = 7;
      uVar8 = 0;
    }
    FUN_7101bc8640(lVar13,iVar7,uVar8,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  if (*param_2 != 0) {
    return;
  }
  puVar10 = *(uint **)(lVar13 + 0x440);
  puVar12 = *(uint **)(lVar13 + 0x438);
  if ((ulong)((long)puVar10 - (long)puVar12 >> 2) <= (ulong)(long)iVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar2 = puVar12[iVar7];
  if (puVar12 != puVar10) {
    uVar1 = *puVar12;
    while (uVar1 != uVar2) {
      puVar12 = puVar12 + 1;
      if (puVar10 == puVar12) {
        return;
      }
      uVar1 = *puVar12;
    }
  }
  if (puVar12 == puVar10) {
    return;
  }
  uVar1 = *(uint *)(lVar13 + 0x420);
  ppppbVar9 = (byte ****)(ulong)uVar1;
  lVar5 = lVar13 + 0x230;
  if (uVar1 != uVar2) {
    if (uVar1 == 4) {
      FUN_710377a120(lVar13 + 0x240,"mel_mockbattle_cp_auto",param_3,4,param_5,param_6,param_7,
                     param_8);
    }
    else if (uVar1 < 4) {
      param_3 = (int *)0x1;
      FUN_710377a280(lVar13 + 0x240,(byte *)"mel_mockbattle_cp_n",1);
    }
    if (uVar2 == 4) {
      FUN_710377a120(lVar5,"mel_mockbattle_cp_auto",param_3,ppppbVar9,param_5,param_6,param_7,
                     param_8);
    }
    else if (uVar2 < 4) {
      ppppbVar9 = (byte ****)(ulong)uVar2;
      FUN_710377a280(lVar5,(byte *)"mel_mockbattle_cp_n",1);
    }
    if (*(int *)(lVar13 + 0x424) < iVar7) {
      lVar5 = lVar13 + 0x250;
    }
    else {
      lVar5 = lVar13 + 0x260;
    }
    FUN_710377aee0(0x3f800000,lVar5);
    *(int *)(lVar13 + 0x424) = iVar7;
    *(uint *)(lVar13 + 0x420) = uVar2;
    if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004
                                 ,ppppbVar9,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) &&
        (FUN_71024076d0(local_70,0x151ca6c028), local_60 != 0)) &&
       ((DAT_7106dd53a8 == '\x01' && (local_58 == DAT_7106dd53ac)))) {
      piVar11 = (int *)(local_60 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = *piVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  *(uint *)(lVar13 + 0x420) = uVar2;
  if (uVar2 == 4) {
    FUN_710377a120(lVar5,"mel_mockbattle_cp_auto",param_3,ppppbVar9,param_5,param_6,param_7,param_8)
    ;
    return;
  }
  if (3 < uVar2) {
    return;
  }
  FUN_710377a280(lVar5,(byte *)"mel_mockbattle_cp_n",1);
  return;
}

