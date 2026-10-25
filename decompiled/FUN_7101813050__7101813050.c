// addr:      7101813050
// offset:    0x1813050
// name:      FUN_7101813050
// mangled:   
// signature: undefined __cdecl FUN_7101813050(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, undefined8 param_6, byte * * * * param_7, long * * * * param_8, long param_9, undefined8 param_10, undefined8 param_11)


undefined1  [16]
FUN_7101813050(undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
              undefined8 param_6,byte ****param_7,long ****param_8,long param_9,undefined8 param_10,
              undefined8 param_11)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  long ****pppplVar9;
  ulong uVar10;
  long ****pppplVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 extraout_q0 [16];
  undefined1 auVar18 [16];
  undefined8 local_90;
  undefined8 *local_88;
  undefined **local_80;
  undefined8 *local_78;
  long ***local_70;
  undefined4 local_64;
  
  plVar17 = DAT_710593b6a0;
  if (*(int *)(*(long *)(*(long *)(param_4 + 0x110) + 0x80) + 0xd0) != 0) {
    return param_1;
  }
  *(undefined1 *)(*(long *)(param_4 + 0x110) + 0x70) = 1;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar6 = ((uint)DAT_7105307d28 & 0xffff) + 0x1a;
  if (0 < *(int *)(param_4 + 0x104)) {
    iVar8 = 0;
    do {
      lVar14 = *plVar17;
      std::mutex::lock();
      lVar12 = *(long *)(lVar14 + 0x24d0);
      uVar13 = (*(long *)(lVar14 + 0x24d8) - lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
      uVar10 = (ulong)(uint)(iVar6 + iVar8) & 0xffff;
      if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar12 = lVar12 + uVar10 * 0x68;
      plVar15 = *(long **)(lVar12 + 0x60);
      *(undefined8 *)(lVar12 + 0x58) = 0;
      *(undefined8 *)(lVar12 + 0x60) = 0;
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 1;
        do {
          lVar12 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
      std::mutex::unlock();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_4 + 0x104));
  }
  lVar12 = *plVar17;
  std::mutex::lock();
  uVar5 = nn::mii::Database::GetCount((int)lVar12 + 0x20);
  std::mutex::unlock();
  if (99 < uVar5) {
    uVar5 = 100;
  }
  *(uint *)(param_4 + 0x104) = uVar5;
  DAT_7105307d28._4_4_ = (uint)DAT_7105307d28 + uVar5;
  if (0 < *(int *)(param_4 + 0x104)) {
    iVar8 = 0;
    do {
      uVar5 = iVar6 + iVar8;
      FUN_71037593d0(*plVar17,(ulong)uVar5,iVar8);
      FUN_7103759500(extraout_q0,param_2,param_3,*plVar17,(ulong)uVar5,(long ****)&DAT_00000008,
                     param_7,param_8,param_9,param_10,param_11);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_4 + 0x104));
  }
  iVar6 = DAT_7105307d28._4_4_;
  lVar14 = *(long *)(*(long *)(param_4 + 0x110) + 0x80);
  lVar12 = **(long **)(lVar14 + 0xe0);
  uVar5 = 0;
  do {
    pppplVar9 = (long ****)(ulong)uVar5;
    FUN_7103776640(&local_90,lVar12 + 8,(byte ****)"set_parts_scr_item_%02d",pppplVar9,param_7,
                   param_8,param_9,param_10,param_11);
    FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_pic_mii",pppplVar9,param_7,param_8,
                   param_9,param_10,param_11);
    puVar7 = local_78;
    FUN_7103779650((long)local_78);
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    puVar7 = local_88;
    local_90 = &PTR_FUN_710523d988;
    local_88 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar10 = *(ulong *)((long)puVar7 + 0x18);
      *(undefined ***)((long)puVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar7 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40((ulong)puVar7);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x14);
  puVar7 = *(undefined8 **)(lVar14 + 0x128);
  puVar16 = *(undefined8 **)(lVar14 + 0x130);
  while (puVar16 != puVar7) {
    puVar16 = puVar16 + -2;
    (**(code **)*puVar16)(puVar16);
  }
  *(undefined8 **)(lVar14 + 0x130) = puVar7;
  FUN_71019bfaf0((ulong *)(lVar14 + 0x128),(long)iVar6,pppplVar9,param_7,param_8,param_9,param_10,
                 param_11);
  FUN_7103776640(&local_90,**(long **)(lVar14 + 0xe0) + 8,(byte ****)"set_parts_scr_item_00",
                 pppplVar9,param_7,param_8,param_9,param_10,param_11);
  FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_pic_mii",pppplVar9,param_7,param_8,
                 param_9,param_10,param_11);
  puVar7 = local_88;
  local_90._0_4_ = 0x523d988;
  local_90._4_4_ = 0x71;
  local_88 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar10 = *(ulong *)((long)puVar7 + 0x18);
    *(undefined ***)((long)puVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)puVar7);
  }
  if (0 < iVar6) {
    iVar8 = 0;
    do {
      local_90 = &PTR_FUN_71052401d0;
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x10,pppplVar9,param_7,param_8,param_9,param_10,param_11);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_70 = (long ***)&DAT_00000010;
          pppplVar9 = &local_70;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar10 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x10,pppplVar9,param_7,param_8,param_9,param_10,param_11)
             , puVar7 != (undefined8 *)0x0)) goto LAB_7101813394;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7101813394:
      *puVar7 = 0;
      puVar7[1] = 0;
      pppplVar9 = (long ****)*local_78;
      local_88 = puVar7;
      FUN_710379ca30((long)&local_90,(ulong)(iVar8 + 0x1a),pppplVar9,param_7,param_8,param_9,
                     param_10,param_11);
      if (*(undefined8 **)(lVar14 + 0x130) < *(undefined8 **)(lVar14 + 0x138)) {
        FUN_710379c960(*(undefined8 **)(lVar14 + 0x130),&local_90);
        *(long *)(lVar14 + 0x130) = *(long *)(lVar14 + 0x130) + 0x10;
      }
      else {
        FUN_71019bfc50((long *)(lVar14 + 0x128),&local_90,pppplVar9,param_7,param_8,param_9,param_10
                       ,param_11);
      }
      puVar7 = local_88;
      local_90._0_4_ = 0x52401d0;
      local_90._4_4_ = 0x71;
      local_88 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        plVar17 = (long *)puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        if (plVar17 != (long *)0x0) {
          plVar15 = plVar17 + 1;
          do {
            lVar12 = *plVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            std::__shared_weak_count::__release_weak();
            plVar17 = (long *)puVar7[1];
          }
          else {
            plVar17 = (long *)puVar7[1];
          }
          if (plVar17 != (long *)0x0) {
            plVar15 = plVar17 + 1;
            do {
              lVar12 = *plVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar7);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar6);
  }
  pppplVar9 = *(long *****)(lVar14 + 0x110);
  lVar12 = *(long *)(lVar14 + 0x118);
  iVar8 = (int)((ulong)(lVar12 - (long)pppplVar9) >> 2);
  if (iVar8 < iVar6) {
    pppplVar11 = (long ****)(lVar12 + -4);
    if (*(int *)(lVar14 + 0x104) != 0) {
      pppplVar11 = pppplVar9;
    }
    local_90._0_4_ = *(int *)pppplVar11;
    if ((int)local_90 < iVar6 + -1) {
      while( true ) {
        local_90._0_4_ = (int)local_90 + 1;
        FUN_71019bfdd0((ulong *)(lVar14 + 0x110),pppplVar9,(long ****)&local_90,param_7,param_8,
                       param_9,param_10,param_11);
        *(int *)(lVar14 + 0x104) = *(int *)(lVar14 + 0x104) + 1;
        if (iVar6 + -1 <= (int)local_90) break;
        pppplVar9 = *(long *****)(lVar14 + 0x110);
      }
      iVar8 = (int)((ulong)(*(long *)(lVar14 + 0x118) - *(long *)(lVar14 + 0x110)) >> 2);
    }
  }
  else {
    if (iVar8 <= iVar6) {
      auVar18 = FUN_710377cc80(*(long *)(lVar14 + 0xe8),1);
      goto LAB_7101813578;
    }
    iVar6 = iVar8 - iVar6;
    if (iVar6 != 0) {
      piVar1 = (int *)((long)pppplVar9 + (long)iVar6 * 4);
      __n = lVar12 - (long)piVar1;
      pppplVar11 = pppplVar9;
      if (__n != 0) {
        memmove(pppplVar9,piVar1,__n);
        pppplVar11 = *(long *****)(lVar14 + 0x110);
      }
      piVar1 = (int *)((long)pppplVar9 + ((long)__n >> 2) * 4);
      iVar8 = (int)((ulong)((long)piVar1 - (long)pppplVar11) >> 2);
      *(int **)(lVar14 + 0x118) = piVar1;
    }
    *(int *)(lVar14 + 0x104) = *(int *)(lVar14 + 0x104) - iVar6;
  }
  *(int *)(lVar14 + 0xf4) = iVar8;
  auVar18 = FUN_7103783690((long *)(lVar14 + 0xe8),iVar8);
LAB_7101813578:
  puVar7 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    auVar18 = FUN_710392eb40((ulong)puVar7);
  }
  iVar6 = DAT_7105307d28._4_4_ + -1;
  if (*(int *)(param_4 + 0x104) < 1) {
    iVar6 = 0;
  }
  *(int *)(*(long *)(*(long *)(param_4 + 0x110) + 0x80) + 0xfc) = iVar6;
  if (*(uint *)(param_4 + 0xe4) < 0x13) {
    *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0xe4) * 4 + 0x98) = 0;
    return auVar18;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

