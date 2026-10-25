// addr:      71036f79c0
// offset:    0x36f79c0
// name:      FUN_71036f79c0
// mangled:   
// signature: undefined4 __cdecl FUN_71036f79c0(undefined8 * param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_71036f79c0(undefined8 *param_1,byte param_2,undefined8 param_3,byte ****param_4,long ****param_5
              ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  byte bVar3;
  size_t sVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  MediaData *__n;
  void *pvVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  double dVar20;
  MediaData aMStack_128 [8];
  undefined8 local_120;
  Buffer aBStack_118 [64];
  ulong local_d8;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if ((*(char *)(param_1 + 3) == '\0') || (*(char *)((long)param_1 + 0x19) != '\0')) {
    return 0x1000;
  }
  nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  lVar9 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  (*DAT_7105941878)(*(undefined8 *)(*(long *)(lVar9 + 0x58) + 0xb8),0xffffffffffffffff);
  movie::Buffer::Buffer(aBStack_118);
  local_120 = 0;
  dVar20 = (double)param_1[0x17];
  std::mutex::lock();
  puVar17 = (undefined4 *)param_1[5];
  if (dVar20 == 1.0) {
    if ((undefined4 *)param_1[6] != puVar17) {
      do {
        uVar15 = *(undefined8 *)(puVar17 + 2);
        iVar7 = puVar17[4];
        uVar14 = *puVar17;
        uVar6 = FUN_71036f75a0((long)param_1,uVar15);
        if (iVar7 == 4) {
          *(undefined1 *)(param_1 + 0xe) = 1;
          if (0 < *(int *)(param_1 + 0x12)) {
            *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + -1;
          }
          if ((EventType *)*param_1 != (EventType *)0x0) {
            nn::os::SignalEvent((EventType *)*param_1);
          }
          (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],uVar14);
          __dest = (void *)param_1[5];
          pvVar13 = (void *)((long)__dest + 0x18);
          sVar4 = param_1[6] - (long)pvVar13;
          goto joined_r0x0071036f7b7c;
        }
        if ((uVar6 & 1) == 0) {
          bVar16 = false;
          goto LAB_71036f7c64;
        }
        (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],uVar14);
        pvVar13 = (void *)param_1[5];
        sVar4 = param_1[6] - ((long)pvVar13 + 0x18);
        if (sVar4 != 0) {
          memmove(pvVar13,(void *)((long)pvVar13 + 0x18),sVar4);
        }
        param_1[6] = (void *)((long)pvVar13 + ((long)sVar4 >> 3) * 8);
        std::mutex::unlock();
        *(undefined1 *)((long)param_1 + 0x94) = 1;
        std::mutex::lock();
        puVar17 = (undefined4 *)param_1[5];
      } while ((undefined4 *)param_1[6] != puVar17);
    }
  }
  else if ((undefined4 *)param_1[6] != puVar17) {
    uVar15 = *(undefined8 *)(puVar17 + 2);
    iVar7 = puVar17[4];
    uVar14 = *puVar17;
    uVar6 = FUN_71036f75a0((long)param_1,uVar15);
    if (iVar7 == 4) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      if (0 < *(int *)(param_1 + 0x12)) {
        *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + -1;
      }
      if ((EventType *)*param_1 != (EventType *)0x0) {
        nn::os::SignalEvent((EventType *)*param_1);
      }
      (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],uVar14);
      __dest = (void *)param_1[5];
      pvVar13 = (void *)((long)__dest + 0x18);
      sVar4 = param_1[6] - (long)pvVar13;
joined_r0x0071036f7b7c:
      if (sVar4 != 0) {
        memmove(__dest,pvVar13,sVar4);
      }
      param_1[6] = (void *)((long)__dest + ((long)sVar4 >> 3) * 8);
      std::mutex::unlock();
      uVar14 = 0;
      goto LAB_71036f8094;
    }
    if ((uVar6 & 1) != 0) {
      (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],uVar14);
      pvVar13 = (void *)param_1[5];
      sVar4 = param_1[6] - ((long)pvVar13 + 0x18);
      if (sVar4 != 0) {
        memmove(pvVar13,(void *)((long)pvVar13 + 0x18),sVar4);
      }
      param_1[6] = (void *)((long)pvVar13 + ((long)sVar4 >> 3) * 8);
      *(undefined1 *)((long)param_1 + 0x94) = 1;
    }
    bVar16 = 40000 < (long)param_1[0x10];
LAB_71036f7c64:
    param_1[0x15] = uVar15;
    uVar15 = *(undefined8 *)(*(long *)(*(long *)param_1[2] + 0x28) + 0x4e0);
    uVar10 = FUN_71000319b0(*(long *)(*(long *)param_1[2] + 0x28) + 0x128);
    param_1[0xc] = uVar15;
    movie::Buffer::SetDataAndCapacity(aBStack_118,uVar10);
    movie::Buffer::SetRange((int)aBStack_118,0);
    movie::MediaData::MediaData(aMStack_128);
    __n = aMStack_128;
    iVar7 = (**(code **)(*(long *)param_1[1] + 0x90))((long *)param_1[1],*puVar17);
    if (iVar7 == 0) {
      local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
      iVar2 = *(int *)(param_1 + 0xd);
      uVar10 = movie::MediaData::FindInt32((char *)aMStack_128,(int *)"width");
      local_d8 = local_d8 & 0xffffffff00000000;
      uVar6 = *(uint *)((long)param_1 + 0x6c);
      iVar7 = (int)local_a8;
      if ((uVar10 & 1) == 0) {
        iVar7 = iVar2;
      }
      uVar10 = movie::MediaData::FindInt32((char *)aMStack_128,(int *)"height");
      uVar1 = (uint)local_d8;
      if ((uVar10 & 1) == 0) {
        uVar1 = uVar6;
      }
      if ((iVar7 != *(int *)(param_1 + 0xd)) || (uVar1 != *(uint *)((long)param_1 + 0x6c))) {
        *(int *)(param_1 + 0xd) = iVar7;
        *(uint *)((long)param_1 + 0x6c) = uVar1;
        FUN_71036e85f0(*(long *)param_1[2],iVar7,(long ****)(ulong)uVar1,param_4,param_5,param_6,
                       param_7,param_8);
      }
      movie::MediaData::FindInt32((char *)aMStack_128,(int *)"nv12-y-stride");
      movie::MediaData::FindInt32((char *)aMStack_128,(int *)"nv12-uv-offset");
      movie::MediaData::FindInt32((char *)aMStack_128,(int *)"nv12-y-offset");
      movie::MediaData::Clear();
      iVar7 = (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],aMStack_128);
      if (iVar7 == 0) {
        movie::MediaData::FindInt32((char *)aMStack_128,(int *)"nv12-colorspace");
      }
      __n = (MediaData *)aBStack_118;
      iVar7 = (**(code **)(*(long *)param_1[1] + 0x68))((long *)param_1[1],*puVar17);
      if (iVar7 != 0) goto LAB_71036f7dd0;
      if (!bVar16 && (param_2 & 1) == 0) {
        (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],*puVar17);
        pvVar13 = (void *)param_1[5];
        __n = (MediaData *)(param_1[6] - ((long)pvVar13 + 0x18));
        lVar9 = (long)__n >> 3;
        if (__n != (MediaData *)0x0) {
          memmove(pvVar13,(void *)((long)pvVar13 + 0x18),(size_t)__n);
        }
        param_1[6] = (void *)((long)pvVar13 + lVar9 * 8);
      }
      uVar14 = 0;
      bVar16 = true;
    }
    else {
LAB_71036f7dd0:
      bVar16 = false;
      uVar14 = 0x1000;
    }
    if (puVar17[4] == 4) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      if ((EventType *)*param_1 != (EventType *)0x0) {
        nn::os::SignalEvent((EventType *)*param_1);
      }
    }
    std::mutex::unlock();
    if (bVar16) {
      lVar9 = *(long *)param_1[2];
      uVar5 = local_120._4_4_;
      iVar7 = *(int *)(lVar9 + 0x20);
      iVar2 = *(int *)(lVar9 + 0x24);
      uVar15 = *(undefined8 *)(lVar9 + 0x20);
      if (((DAT_710533a070 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710533a070), iVar8 != 0))
      {
        DAT_710533a060 = (undefined8 *)0x0;
        DAT_710533a068 = 0;
        DAT_710533a050 = &PTR_FUN_710522fea0;
        DAT_710533a058 = (long *)0x0;
        __cxa_guard_release(&DAT_710533a070);
      }
      if ((DAT_710533a078 & 1) == 0) {
        plVar19 = *(long **)(*(long *)(*(long *)(DAT_7105335480 + 0x68) + 0x18) + 0x128);
joined_r0x0071036f7e4c:
        if (plVar19 != (long *)0x0) {
          do {
            plVar18 = (long *)plVar19[5];
            bVar3 = *(byte *)(plVar18 + 8);
            uVar10 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              uVar10 = plVar18[9];
            }
            if (uVar10 == 6) {
              pvVar13 = (void *)plVar18[10];
              if ((bVar3 & 1) == 0) {
                pvVar13 = (void *)((long)plVar18 + 0x41);
              }
              __n = (MediaData *)0x6;
              iVar8 = memcmp(pvVar13,"UI_FG0",6);
              if (iVar8 == 0) goto LAB_71036f7eb0;
            }
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) break;
          } while( true );
        }
        DAT_710533a078 = 1;
      }
      lVar11 = FUN_710363f730(**(long **)(*(long *)(lVar9 + 0x28) + 0x520),1,(long ****)__n,param_4,
                              param_5,param_6,param_7,param_8);
      FUN_7100033190(lVar11,0x20);
      FUN_7100033190(lVar11,0x10);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      local_a8 = (undefined **)0x0;
      local_a0 = (undefined1  [8])0x0;
      FUN_7100031410(&local_a8);
      FUN_71000313f0((undefined8 *)(local_a0 + 4));
      local_88 = CONCAT44(local_88._4_4_,1);
      local_a0._0_4_ = iVar2;
      local_a8 = (undefined **)CONCAT44(iVar7,uVar5);
      local_90 = uVar15;
      FUN_71000328a0(lVar11,*(long *)(lVar9 + 0x28) + 0x290,*(long *)(lVar9 + 0x28) + 0x128,
                     (int *)&local_a8);
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_d8 = 0;
      auStack_d0 = (undefined1  [8])0x0;
      FUN_7100031410(&local_d8);
      FUN_71000313f0((undefined8 *)(auStack_d0 + 4));
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      local_c0 = CONCAT44(iVar2 >> 1,iVar7 >> 1);
      local_b8 = CONCAT44(local_b8._4_4_,1);
      auStack_d0._0_4_ = iVar2 >> 1;
      local_d8 = (ulong)(uint)(iVar7 >> 1) << 0x20;
      FUN_71000328a0(lVar11,*(long *)(lVar9 + 0x28) + 0x368,*(long *)(lVar9 + 0x28) + 0x128,
                     (int *)&local_d8);
      FUN_71000331c0(lVar11,0x10);
      FUN_71000331c0(lVar11,0x20);
      lVar11 = *(long *)(DAT_7105335480 + 0x68);
      if (*(long **)(lVar11 + 0x40) == (long *)0x0) {
        local_a0 = (undefined1  [8])0x0;
LAB_71036f8040:
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
      }
      else {
        if (**(long **)(lVar11 + 0x40) != *(long *)(lVar11 + 0x48)) {
          local_a0 = (undefined1  [8])0x0;
          goto LAB_71036f8040;
        }
        local_a0 = *(undefined1 (*) [8])(lVar11 + 0x38);
        if (local_a0 == (undefined1  [8])0x0) goto LAB_71036f8040;
        local_98 = *(undefined8 **)((long)local_a0 + 8);
        local_90 = *local_98;
      }
      local_a8 = &PTR_FUN_710522fd88;
      puVar12 = FUN_710363fa50(**(long **)(*(long *)(lVar9 + 0x28) + 0x520),(long)&local_a8,1);
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)(*DAT_710533a058 + 0x18))(DAT_710533a058,puVar12);
      }
    }
    movie::MediaData::~MediaData(aMStack_128);
    goto LAB_71036f8094;
  }
  std::mutex::unlock();
  uVar14 = 0x1000;
LAB_71036f8094:
  movie::Buffer::~Buffer(aBStack_118);
  return uVar14;
LAB_71036f7eb0:
  if (((((long *)plVar19[6] == (long *)0x0) || (*(long *)plVar19[6] != plVar19[7])) ||
      (plVar18 == (long *)0x0)) || (plVar18[1] == 0)) {
    DAT_710533a068 = 0;
    DAT_710533a058 = (long *)0x0;
    DAT_710533a060 = (undefined8 *)0x0;
  }
  else {
    DAT_710533a060 = (undefined8 *)plVar18[1];
    DAT_710533a068 = *DAT_710533a060;
    DAT_710533a058 = plVar18;
  }
  plVar19 = (long *)*plVar19;
  goto joined_r0x0071036f7e4c;
}

