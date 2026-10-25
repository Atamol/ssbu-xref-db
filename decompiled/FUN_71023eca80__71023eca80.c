// addr:      71023eca80
// offset:    0x23eca80
// name:      FUN_71023eca80
// mangled:   
// signature: undefined __cdecl FUN_71023eca80(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023eca80(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long ****pppplVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long ***local_40;
  undefined4 local_34;
  
  pppplVar5 = &local_40;
  plVar2 = (long *)FUN_710392e290(0x10,0x100,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000100;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar5;
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x100,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar5, plVar2 != (long *)0x0))
      goto LAB_71023ecafc;
    }
    plVar2 = (long *)0x0;
  }
LAB_71023ecafc:
  *plVar2 = param_1 + 0x50;
  plVar2[1] = (long)plVar2;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 0x1f) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0xfc) = 0;
  plVar2[6] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0xffffffff;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  FUN_7103723a90(param_1 + 0x50,&DAT_7105329ea8,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2[6] = (long)FUN_71023eb1b0;
  plVar2[7] = 0;
  plVar2[10] = (long)FUN_71023eb3b0;
  plVar2[0xb] = 0;
  plVar2[0xc] = (long)FUN_71023eb7b0;
  plVar2[0xd] = 0;
  plVar2[8] = (long)FUN_71023eb280;
  plVar2[9] = 0;
  plVar2[0x10] = (long)FUN_71023ebbf0;
  plVar2[0x11] = 0;
  plVar2[0xe] = (long)FUN_71023eb980;
  plVar2[0xf] = 0;
  plVar2[0x12] = (long)FUN_71023ec7e0;
  plVar2[0x13] = 0;
  puVar8 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar8 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328150), iVar1 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324750), iVar1 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar4 = (undefined8 *)(**(code **)*puVar8)(puVar8); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      if ((undefined8 **)puVar4 == &DAT_7105328158) {
        uVar6 = *(uint *)(puVar8 + 1);
        if (0xe33b8f26 < uVar6) {
          if (uVar6 == 0xff126b7a) {
            iVar1 = strcmp((char *)(puVar8 + 2),"CharaSelectScene");
            uVar6 = *(uint *)((long)plVar2 + 0xec);
            if (iVar1 != 0) {
              if (0x12 >= uVar6) goto LAB_71023ecbfc;
              goto LAB_71023eccb4;
            }
            if (0x12 < uVar6) goto LAB_71023eccb4;
            uVar7 = 4;
            goto LAB_71023ecc00;
          }
          if ((uVar6 == 0xe33b8f27) &&
             (iVar1 = strcmp((char *)(puVar8 + 2),"StageSelectScene"), iVar1 == 0)) {
            uVar6 = *(uint *)((long)plVar2 + 0xec);
            if (0x12 < uVar6) goto LAB_71023eccb4;
            uVar7 = 3;
            goto LAB_71023ecc00;
          }
        }
        uVar6 = *(uint *)((long)plVar2 + 0xec);
        goto joined_r0x0071023eccb0;
      }
    }
  }
  uVar6 = *(uint *)((long)plVar2 + 0xec);
joined_r0x0071023eccb0:
  if (0x12 < uVar6) {
LAB_71023eccb4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_71023ecbfc:
  uVar7 = 0;
LAB_71023ecc00:
  *(undefined4 *)((long)plVar2 + (long)(int)uVar6 * 4 + 0xa0) = uVar7;
  plVar9 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar2;
  if (plVar9 == (long *)0x0) {
    return;
  }
  pppplVar5 = (long ****)0x0;
  FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
  FUN_7103723e70(*plVar9,&DAT_7105329ea8,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_710392eb40((ulong)plVar9);
  return;
}

