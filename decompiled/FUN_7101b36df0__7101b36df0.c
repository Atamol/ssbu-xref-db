// addr:      7101b36df0
// offset:    0x1b36df0
// name:      FUN_7101b36df0
// mangled:   
// signature: undefined __cdecl FUN_7101b36df0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b36df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 500) == '\0') {
    return;
  }
  if (2 < *(uint *)(param_1 + 0x1fc)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar9 = *(ulong *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1fc) * 0x28 + 0xf8) & 0xffffffffff;
  if (uVar9 < 0x171954c00c) {
    if (uVar9 == 0xc40bf5050) {
      uVar8 = 3;
    }
    else {
      if (uVar9 != 0x154b5c4392) {
LAB_7101b36ea8:
        *(undefined1 *)(*(long *)(param_1 + 0x380) + 0x2c) = 0;
        return;
      }
      uVar8 = 0;
    }
  }
  else if (uVar9 == 0x171954c00c) {
    uVar8 = 2;
  }
  else {
    if (uVar9 != 0x17945ccdf9) goto LAB_7101b36ea8;
    uVar8 = 1;
  }
  if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar11 = 1 << (ulong)uVar8;
  lVar1 = *(long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 8) + 8;
  uVar8 = *(ushort *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x84e8) & uVar11;
  FUN_7103776ad0(&local_60,lVar1,(long ****)"set_part_btn",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar4 = local_58;
  plVar5 = (long *)*local_58;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x2e0))(plVar5,0);
    local_58 = (long *)*local_58;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x2f0))(local_58,uVar8 == (uVar11 & 0xffff),0);
    }
  }
  pcVar2 = "line_on";
  if (uVar8 != (uVar11 & 0xffff)) {
    pcVar2 = "line_off";
  }
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",0,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",1,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",2,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",4,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  uVar7 = 6;
  FUN_7103776640(&local_a8,lVar1,(byte ****)"set_parts_scr_item_%02d",6,param_4,param_5,param_6,
                 param_7,param_8);
  uVar9 = local_a0;
  FUN_7103778300(0x3f800000,local_a0,(long)pcVar2);
  local_a8 = &PTR_FUN_710523d988;
  local_a0 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = 0;
  pcVar2 = "mnu_opt_select_song_help_random_select";
  if (uVar8 != (uVar11 & 0xffff)) {
    pcVar2 = "mnu_opt_select_song_help_random_all";
  }
  do {
    cVar3 = pcVar2[uVar9];
    if (cVar3 == '\0') {
LAB_7101b37244:
      uVar8 = 0x811c9dc5;
      *(char *)((long)&local_a0 + (uVar9 & 0xffffffff)) = '\0';
      uVar11 = (uint)(byte)local_a0;
      if ((byte)local_a0 != 0) {
        pbVar10 = (byte *)((long)&local_a0 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (uVar11 != 0);
      }
      local_a8 = (undefined **)CONCAT44((int)uVar9,uVar8);
      FUN_710377a120(*(long *)(param_1 + 0x380) + 0x10,(char *)&local_a0,uVar7,param_4,param_5,
                     param_6,param_7,param_8);
      local_60 = &PTR_FUN_710523d9c8;
      local_58 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar4);
      }
      return;
    }
    *(char *)((long)&local_a0 + uVar9) = cVar3;
    if (0x3e < (int)uVar9 + 1U) {
      uVar9 = (ulong)((int)uVar9 + 1);
      goto LAB_7101b37244;
    }
    cVar3 = (pcVar2 + uVar9)[1];
    if (cVar3 == '\0') {
      uVar9 = uVar9 + 1;
      goto LAB_7101b37244;
    }
    *(char *)((long)&local_a0 + uVar9 + 1) = cVar3;
    uVar9 = uVar9 + 2;
  } while( true );
}

