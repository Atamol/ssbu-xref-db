// addr:      71029da2d0
// offset:    0x29da2d0
// name:      FUN_71029da2d0
// mangled:   
// signature: int __cdecl FUN_71029da2d0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_71029da2d0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                  long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  ulong local_80 [4];
  long ***local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  ppppbVar10 = param_4;
  plVar6 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = local_80[0] & 0xffffffff00000000;
      local_60 = (long ***)&SUB_00000020;
      pppplVar9 = &local_60;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x20,pppplVar9,ppppbVar10,param_5,param_6,param_7,
                                          param_8), plVar6 != (long *)0x0)) goto LAB_71029da354;
    }
    plVar6 = (long *)0x0;
  }
LAB_71029da354:
  *plVar6 = param_2;
  plVar6[1] = (long)param_3;
  uVar3 = 0xffffffff;
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 3) = 0xffffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (long ***)0x0;
  uStack_58 = 0;
  snprintf((char *)&local_60,0x20,"joint%d",(int)param_4);
  if (plVar6[1] != 0) {
    lVar11 = *(long *)(plVar6[1] + 0xd8);
    if (lVar11 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar5 = 0;
      do {
        uVar7 = (ulong)uVar5;
        uVar5 = uVar5 + 1;
      } while (*(char *)((long)&local_60 + uVar7) != '\0');
      if ((char)local_60 != '\0') {
        pcVar12 = (char *)((ulong)&local_60 | 1);
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
      }
      plVar8 = *(long **)(*(long *)(lVar11 + 8) + 8);
      uVar3 = (**(code **)(*plVar8 + 0x18))(plVar8,&local_60);
    }
  }
  *(undefined4 *)(plVar6 + 3) = uVar3;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  iVar4 = snprintf((char *)local_80,0x20,"dys_Lift_set__0%d__",(int)param_4);
  plVar13 = *(long **)(*(long *)(*plVar6 + 0x300) + 0x18);
  plVar8 = (long *)*plVar13;
  plVar13 = (long *)plVar13[1];
  if (plVar8 != plVar13) {
    do {
      uVar5 = (uint)(byte)local_80[0];
      if (uVar5 == 0) {
        uVar15 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        uVar16 = 0xffffffff;
        pbVar14 = (byte *)((ulong)local_80 | 1);
        do {
          uVar1 = uVar5 + 0x20;
          if (0x19 < uVar5 - 0x41) {
            uVar1 = uVar5;
          }
          uVar16 = (&DAT_7104754084)[(uVar1 ^ uVar16) & 0xff] ^ uVar16 >> 8;
          uVar5 = (uint)*pbVar14;
          uVar7 = uVar7 + 0x100000000;
          pbVar14 = pbVar14 + 1;
        } while (uVar5 != 0);
        uVar15 = (ulong)~uVar16;
        uVar7 = uVar7 & 0xff00000000;
        iVar4 = 0;
      }
      if ((*(ulong *)(*plVar8 + 0x98) & 0xffffffffff) == (uVar7 | uVar15)) {
        plVar8 = *(long **)(*plVar8 + 0x110);
        if ((plVar8 != (long *)0x0) && (*plVar8 != plVar8[1])) {
          plVar6[2] = (long)plVar8;
        }
        break;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar13);
  }
  *param_1 = plVar6;
  return iVar4;
}

