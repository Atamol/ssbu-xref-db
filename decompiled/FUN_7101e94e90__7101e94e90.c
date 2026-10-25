// addr:      7101e94e90
// offset:    0x1e94e90
// name:      FUN_7101e94e90
// mangled:   
// signature: undefined __cdecl FUN_7101e94e90(long * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e94e90(long *param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  long *plVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  long ****pppplVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined **local_68;
  undefined **local_60;
  long ***local_58;
  undefined4 local_44;
  
  if (*(char *)((long)param_1 + 10) == '\0') {
    return;
  }
  lVar11 = *param_1;
  plVar2 = *(long **)(*(long *)(lVar11 + 0x18) + 0x10);
  lVar6 = lVar11;
  if (plVar2 != (long *)0x0) {
    param_3 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
    FUN_71037a2270(plVar2,(ushort *)&local_68,0,0);
    lVar6 = *param_1;
  }
  plVar2 = *(long **)(lVar6 + 0x40);
  if (plVar2 != (long *)0x0) {
    plVar8 = (long *)plVar2[1];
    plVar10 = (long *)plVar8[1];
    if (plVar10 == (long *)0x0) {
      *(undefined8 *)(lVar6 + 0x40) = 0;
    }
    else {
      if ((char)plVar8[2] != '\0') {
        plVar12 = *(long **)(*plVar8 + 0x80);
        plVar8 = (long *)(*plVar8 + 0x88);
        if (plVar12 != plVar8) {
          do {
            while( true ) {
              uVar3 = (**(code **)(*(long *)plVar12[0xd] + 0x148))();
              if (((uVar3 & 1) != 0) &&
                 (uVar3 = (**(code **)(*plVar10 + 0x120))(plVar10,plVar12[0xd]), (uVar3 & 1) != 0))
              {
                (**(code **)(*(long *)plVar12[0xd] + 0x178))();
                (**(code **)(*(long *)plVar12[0xd] + 0x140))((long *)plVar12[0xd],0);
              }
              plVar7 = (long *)plVar12[1];
              if ((long *)plVar12[1] == (long *)0x0) break;
              do {
                plVar12 = plVar7;
                plVar7 = (long *)*plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
LAB_7101e94fac:
              if (plVar12 == plVar8) goto LAB_7101e94fc4;
            }
            plVar7 = plVar12 + 2;
            plVar9 = (long *)*plVar7;
            if ((long *)*plVar9 != plVar12) {
              do {
                lVar6 = *plVar7;
                plVar7 = (long *)(lVar6 + 0x10);
                plVar12 = (long *)*plVar7;
              } while (*plVar12 != lVar6);
              goto LAB_7101e94fac;
            }
            plVar12 = plVar9;
          } while (plVar9 != plVar8);
LAB_7101e94fc4:
          plVar10 = *(long **)(plVar2[1] + 8);
        }
      }
      (**(code **)(*plVar10 + 0x178))(plVar10);
      plVar2 = *(long **)(*param_1 + 0x40);
      *(undefined8 *)(*param_1 + 0x40) = 0;
      if (plVar2 == (long *)0x0) goto LAB_7101e95004;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
LAB_7101e95004:
  FUN_7103778300(0x3f800000,*(long *)(*param_1 + 8),0x7104443dfb);
  *(undefined1 *)((long)param_1 + 9) = 0;
  FUN_71037780e0(&local_68,*param_1,(long ****)&DAT_710428ff7d,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pppuVar4 = (undefined ***)
             FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppuVar4 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_00000010;
      pppplVar5 = &local_58;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (pppuVar4 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         pppuVar4 != (undefined ***)0x0)) goto LAB_7101e9508c;
    }
    pppuVar4 = (undefined ***)0x0;
  }
LAB_7101e9508c:
  ppuVar1 = local_60;
  *pppuVar4 = &PTR_FUN_710523d9e8;
  pppuVar4[1] = (undefined **)0x0;
  if (&local_68 != pppuVar4) {
    local_60 = (undefined **)0x0;
    pppuVar4[1] = ppuVar1;
  }
  plVar2 = *(long **)(lVar11 + 0x48);
  *(undefined ****)(lVar11 + 0x48) = pppuVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  ppuVar1 = local_60;
  local_68 = &PTR_FUN_710523d9e8;
  local_60 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar1);
  }
  if ((param_2 & 1) == 0) {
    FUN_710377aee0(0x3f800000,*(long *)(lVar11 + 0x48));
  }
  else {
    FUN_710377b140(*(long *)(lVar11 + 0x48));
  }
  *(undefined1 *)((long)param_1 + 10) = 0;
  return;
}

