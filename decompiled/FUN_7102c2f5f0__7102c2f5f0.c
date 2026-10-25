// addr:      7102c2f5f0
// offset:    0x2c2f5f0
// name:      FUN_7102c2f5f0
// mangled:   
// signature: undefined __cdecl FUN_7102c2f5f0(long param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102c2f5f0(long param_1,ulong param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *********ppppppppplVar6;
  long *********local_38;
  
  uVar4 = param_2 & 0xffffffff;
  FUN_7102633910(*(long *)(*(long *)(param_1 + 8) + 0x318),
                 (long *********)(&PTR_s_render_param_00_7105123e68)[uVar4],param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar6 = (long *********)(&PTR_s_chara_s00_7105123e48)[uVar4];
  FUN_7102633a10(*(long *)(*(long *)(param_1 + 8) + 0x318),ppppppppplVar6,1,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = 1;
  FUN_7102633b90(*(long *)(*(long *)(param_1 + 8) + 0x318),
                 (long *********)(&PTR_s_stage_s00_7105123e88)[uVar4],1,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7102633800(*(long *)(*(long *)(param_1 + 8) + 0x318),
                 (long *********)(&PTR_s_reflection_cubemap_s00_7105123ea8)[uVar4],uVar3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71025f7350(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x318) + 0x10),
                 (&PTR_s_light00_7105123ec8)[uVar4]);
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    plVar1 = *(long **)(lVar5 + 0x58);
    for (plVar2 = *(long **)(lVar5 + 0x50); plVar2 != plVar1; plVar2 = plVar2 + 7) {
      if ((((char)plVar2[4] != '\0') && (lVar5 = *plVar2, lVar5 != 0)) &&
         (*(char *)(lVar5 + 0xe0) != '\0')) {
        local_38 = ppppppppplVar6;
        FUN_71026527b0(*(undefined8 **)(lVar5 + 0xb8),&local_38,(long *********)0x1,param_4,param_5,
                       param_6,param_7,param_8);
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != 0) {
    plVar1 = *(long **)(lVar5 + 0x58);
    for (plVar2 = *(long **)(lVar5 + 0x50); plVar2 != plVar1; plVar2 = plVar2 + 7) {
      if ((((char)plVar2[4] != '\0') && (lVar5 = *plVar2, lVar5 != 0)) &&
         (*(char *)(lVar5 + 0xe0) != '\0')) {
        local_38 = ppppppppplVar6;
        FUN_71026527b0(*(undefined8 **)(lVar5 + 0xb8),&local_38,(long *********)0x1,param_4,param_5,
                       param_6,param_7,param_8);
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    plVar1 = *(long **)(lVar5 + 0x58);
    for (plVar2 = *(long **)(lVar5 + 0x50); plVar2 != plVar1; plVar2 = plVar2 + 7) {
      if ((((char)plVar2[4] != '\0') && (lVar5 = *plVar2, lVar5 != 0)) &&
         (*(char *)(lVar5 + 0xe0) != '\0')) {
        local_38 = ppppppppplVar6;
        FUN_71026527b0(*(undefined8 **)(lVar5 + 0xb8),&local_38,(long *********)0x1,param_4,param_5,
                       param_6,param_7,param_8);
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    plVar1 = *(long **)(lVar5 + 0x58);
    for (plVar2 = *(long **)(lVar5 + 0x50); plVar2 != plVar1; plVar2 = plVar2 + 7) {
      if ((((char)plVar2[4] != '\0') && (lVar5 = *plVar2, lVar5 != 0)) &&
         (*(char *)(lVar5 + 0xe0) != '\0')) {
        local_38 = ppppppppplVar6;
        FUN_71026527b0(*(undefined8 **)(lVar5 + 0xb8),&local_38,(long *********)0x1,param_4,param_5,
                       param_6,param_7,param_8);
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,ppppppppplVar6);
  }
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,ppppppppplVar6);
  }
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,ppppppppplVar6);
  }
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,ppppppppplVar6);
  }
  plVar2 = *(long **)(param_1 + 0x98);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,ppppppppplVar6);
  }
  plVar2 = *(long **)(param_1 + 0xa0);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007102c2f864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,ppppppppplVar6);
  return;
}

