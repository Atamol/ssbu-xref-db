// addr:      71036f0f20
// offset:    0x36f0f20
// name:      FUN_71036f0f20
// mangled:   
// signature: undefined __cdecl FUN_71036f0f20(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71036f0f20(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ThreadType *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  Decoder *pDVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long ***ppplVar12;
  ulong uVar13;
  EventType *pEVar14;
  undefined8 *puVar15;
  MultiWaitType *pMVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  long ***ppplVar20;
  undefined8 uVar21;
  long ****pppplVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined1 auVar26 [16];
  long ***local_78;
  undefined4 local_6c;
  long ***local_68;
  
  std::recursive_mutex::lock();
  iVar6 = *(int *)(param_1 + 0x80);
  if (iVar6 < 0) {
    if (-1 < *(int *)(param_1 + 0x7c)) {
      iVar6 = *(int *)(param_1 + 0x7c);
      goto joined_r0x0071036f13d8;
    }
    pEVar14 = *(EventType **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x630) = 0x4000;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x48);
    if (iVar7 == 0) {
      std::recursive_mutex::lock();
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      plVar10 = *(long **)(param_1 + 0x28);
      if (plVar10 != (long *)0x0) {
        iVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
        if ((((iVar7 != 0 || 0 < (int)local_68) && (iVar6 < (int)local_68)) && (iVar7 == 0)) &&
           (plVar10 = *(long **)(param_1 + 0x28), plVar10 != (long *)0x0)) {
          (**(code **)(*plVar10 + 0x38))(plVar10,iVar6);
        }
      }
      std::recursive_mutex::unlock();
      iVar6 = *(int *)(param_1 + 0x7c);
joined_r0x0071036f13d8:
      if (-1 < iVar6) {
        iVar7 = *(int *)(param_1 + 0x38);
        if (iVar7 == 0) {
          std::recursive_mutex::lock();
          local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
          plVar10 = *(long **)(param_1 + 0x28);
          if (plVar10 != (long *)0x0) {
            iVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
            if ((((iVar7 != 0) || (0 < (int)local_68)) && (iVar6 < (int)local_68)) &&
               ((iVar7 == 0 && (plVar10 = *(long **)(param_1 + 0x28), plVar10 != (long *)0x0)))) {
              (**(code **)(*plVar10 + 0x38))(plVar10,iVar6);
            }
          }
          std::recursive_mutex::unlock();
        }
        else {
          pDVar8 = (Decoder *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
          if (pDVar8 == (Decoder *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_78._0_4_ = 0;
              local_68 = (long ***)&DAT_00000010;
              pppplVar17 = &local_68;
              uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
              if (((uVar9 & 1) != 0) &&
                 (pDVar8 = (Decoder *)
                           FUN_710392e290(0x10,0x10,pppplVar17,param_4,param_5,param_6,param_7,
                                          param_8), pDVar8 != (Decoder *)0x0)) goto LAB_71036f1440;
            }
            pDVar8 = (Decoder *)0x0;
          }
LAB_71036f1440:
          ppppbVar18 = (byte ****)0x1;
          param_5 = (long ****)&DAT_00000010;
          movie::Decoder::Decoder(pDVar8,iVar7,1);
          *(Decoder **)(param_1 + 0x30) = pDVar8;
          iVar6 = (**(code **)(*(long *)pDVar8 + 0x18))(pDVar8,param_1 + 0x1d0);
          if (iVar6 != 0) goto LAB_71036f1474;
          movie::MediaData::MediaData((MediaData *)&local_78);
          pppplVar17 = &local_78;
          (**(code **)(**(long **)(param_1 + 0x28) + 0x28))
                    (*(long **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x7c));
          (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30),&local_78);
          movie::MediaData::Clear();
          puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8);
          if (puVar11 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c = 0;
              local_68 = (long ***)&DAT_00000008;
              pppplVar17 = &local_68;
              uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
              if (((uVar9 & 1) != 0) &&
                 (puVar11 = (undefined8 *)
                            FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                           param_8), puVar11 != (undefined8 *)0x0))
              goto LAB_71036f1600;
            }
            puVar11 = (undefined8 *)0x0;
          }
LAB_71036f1600:
          uVar4 = *(undefined4 *)(param_1 + 0x7c);
          uVar21 = *(undefined8 *)(param_1 + 0x28);
          uVar24 = *(undefined8 *)(param_1 + 0x30);
          puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x278,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8)
          ;
          if (puVar15 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c = 0;
              local_68 = (long ***)0x278;
              pppplVar17 = &local_68;
              uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
              if (((uVar9 & 1) != 0) &&
                 (puVar15 = (undefined8 *)
                            FUN_710392e290(0x10,0x278,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                           param_8), puVar15 != (undefined8 *)0x0))
              goto LAB_71036f1664;
            }
            puVar15 = (undefined8 *)0x0;
          }
LAB_71036f1664:
          puVar15[3] = 0x20000;
          puVar15[4] = 0;
          puVar15[0x3f] = 0;
          puVar15[0x40] = 0;
          pppplVar17 = (long ****)&DAT_000001c0;
          *(undefined2 *)(puVar15 + 0x40) = 1;
          *(undefined4 *)(puVar15 + 2) = uVar4;
          puVar15[0x43] = 0;
          puVar15[0x42] = 0;
          puVar15[0x41] = 0;
          *(undefined1 *)((long)puVar15 + 0x202) = 0;
          puVar15[0x44] = 0x100;
          *puVar15 = uVar21;
          puVar15[1] = uVar24;
          puVar15[0x3d] = 0;
          puVar15[0x3e] = 0;
          memset(puVar15 + 5,0,0x1c0);
          puVar15[0x4e] = 0;
          puVar15[0x4d] = 0;
          puVar15[0x4c] = 0;
          puVar15[0x4b] = 0;
          puVar15[0x4a] = 0;
          puVar15[0x49] = 0;
          puVar15[0x48] = 0;
          puVar15[0x47] = 0;
          puVar15[0x46] = 0;
          puVar15[0x45] = 0;
          *puVar11 = puVar15;
          *(undefined8 **)(param_1 + 0x60) = puVar11;
          if (*(long *)(param_1 + 0x68) == 0) {
            puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8);
            if (puVar15 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c = 0;
                local_68 = (long ***)&DAT_00000008;
                pppplVar17 = &local_68;
                uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
                if (((uVar9 & 1) != 0) &&
                   (puVar15 = (undefined8 *)
                              FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                             param_8), puVar15 != (undefined8 *)0x0))
                goto LAB_71036f1740;
              }
              puVar15 = (undefined8 *)0x0;
            }
LAB_71036f1740:
            puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x148,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                     param_8);
            if (puVar11 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c = 0;
                local_68 = (long ***)&DAT_00000148;
                pppplVar17 = &local_68;
                uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
                if (((uVar9 & 1) != 0) &&
                   (puVar11 = (undefined8 *)
                              FUN_710392e290(0x10,0x148,pppplVar17,ppppbVar18,param_5,param_6,
                                             param_7,param_8), puVar11 != (undefined8 *)0x0))
                goto LAB_71036f1794;
              }
              puVar11 = (undefined8 *)0x0;
            }
LAB_71036f1794:
            *puVar11 = 0;
            puVar11[1] = 0;
            *(undefined4 *)((long)puVar11 + 0x24) = 0;
            *(undefined8 *)((long)puVar11 + 0x14) = 0x20000bb80;
            puVar11[7] = 0;
            *(undefined8 *)((long)puVar11 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)((long)puVar11 + 0x12) = 0;
            *(undefined2 *)(puVar11 + 2) = 0;
            *(undefined1 *)(puVar11 + 10) = 0;
            *(undefined1 *)(puVar11 + 0x1b) = 0;
            *(undefined1 *)(puVar11 + 0x20) = 0;
            puVar11[0x21] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0x10;
            *(undefined8 *)((long)puVar11 + 0x44) = 0x200000000010;
            *(undefined4 *)((long)puVar11 + 0x4c) = 0x1000;
            puVar11[0x15] = 5;
            puVar11[0x16] = 0x8000;
            puVar11[0x13] = 0;
            puVar11[0x14] = 0;
            puVar11[0x11] = 0;
            puVar11[0x12] = 0;
            puVar11[0xf] = 0;
            puVar11[0x10] = 0;
            puVar11[0xd] = 0;
            puVar11[0xe] = 0;
            puVar11[0xb] = 0;
            puVar11[0xc] = 0;
            puVar11[0x19] = 0;
            puVar11[0x1a] = 0;
            puVar11[0x17] = 0;
            puVar11[0x18] = 0;
            *(undefined2 *)(puVar11 + 0x17) = 1;
            *(undefined1 *)((long)puVar11 + 0xba) = 0;
            puVar11[0x27] = 0;
            puVar11[0x28] = 0;
            puVar11[0x25] = 0;
            puVar11[0x26] = 0;
            puVar11[0x1e] = 0;
            puVar11[0x1f] = 0;
            puVar11[0x1c] = 0;
            puVar11[0x1d] = 0;
            *(undefined8 *)((long)puVar11 + 0x11d) = 0;
            *(undefined1 *)(puVar11 + 0x25) = 1;
            *(undefined1 *)((long)puVar11 + 0x129) = 0;
            *(undefined1 *)((long)puVar11 + 0x12a) = 0;
            *(undefined4 *)(puVar11 + 8) = 0x20000;
            puVar11[0x22] = 0;
            puVar11[0x23] = 0;
            *puVar15 = puVar11;
            *(undefined8 **)(param_1 + 0x68) = puVar15;
            *(undefined1 *)((long)puVar11 + 0x124) = *(undefined1 *)(param_1 + 0xd9b);
            puVar11 = *(undefined8 **)(param_1 + 0x60);
            if ((puVar11 == (undefined8 *)0x0) || (puVar15 == (undefined8 *)0x0))
            goto LAB_71036f1a8c;
          }
          pppplVar19 = (long ****)*puVar11;
          ppplVar20 = pppplVar19[0x3d];
          uVar9 = *(ulong *)(param_1 + 0x220);
          if ((ulong)((long)pppplVar19[0x3f] - (long)ppplVar20 >> 2) < 0x40) {
            pppplVar22 = (long ****)((long)pppplVar19[0x3e] - (long)ppplVar20);
            lVar25 = (long)pppplVar22 >> 2;
            ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                       param_8);
            if (ppplVar12 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c = 0;
                local_68 = (long ***)&DAT_00000100;
                pppplVar17 = &local_68;
                uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
                if (((uVar13 & 1) != 0) &&
                   (ppplVar12 = (long ***)
                                FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar18,param_5,param_6,
                                               param_7,param_8), ppplVar12 != (long ***)0x0))
                goto LAB_71036f18f0;
              }
              ppplVar12 = (long ***)0x0;
            }
LAB_71036f18f0:
            if (0 < (long)pppplVar22) {
              memcpy(ppplVar12,ppplVar20,(size_t)pppplVar22);
              pppplVar17 = pppplVar22;
            }
            pppplVar19[0x3d] = ppplVar12;
            pppplVar19[0x3e] = (long ***)((long)ppplVar12 + lVar25 * 4);
            pppplVar19[0x3f] = ppplVar12 + 0x20;
            if (ppplVar20 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar20);
            }
          }
          if (uVar9 != 0) {
            movie::SetCoreMask(uVar9);
          }
          param_3 = (long ****)pppplVar19[0x44];
          auVar5._8_8_ = 0;
          auVar5._0_8_ = param_3;
          ppplVar20 = (long ***)((long)param_3 << 3);
          if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
            ppplVar20 = (long ***)0xffffffffffffffff;
          }
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          ppplVar12 = (long ***)
                      FUN_710392e290(0x10,ppplVar20,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                     param_8);
          if (ppplVar12 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c = 0;
              pppplVar17 = &local_68;
              local_68 = ppplVar20;
              uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
              if (((uVar9 & 1) != 0) &&
                 (ppplVar12 = (long ***)
                              FUN_710392e290(0x10,ppplVar20,pppplVar17,ppppbVar18,param_5,param_6,
                                             param_7,param_8), ppplVar12 != (long ***)0x0))
              goto LAB_71036f19a8;
            }
            ppplVar12 = (long ***)0x0;
          }
LAB_71036f19a8:
          pppplVar19[0x45] = ppplVar12;
          nn::os::InitializeMessageQueue
                    ((MessageQueueType *)(pppplVar19 + 0x46),(ulong *)ppplVar12,(ulong)param_3);
          ppplVar20 = pppplVar19[3];
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          param_4 = (byte ****)
                    FUN_710392e290(0x1000,ppplVar20,param_3,ppppbVar18,param_5,param_6,param_7,
                                   param_8);
          if (param_4 == (byte ****)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c = 0;
              param_3 = &local_68;
              local_68 = ppplVar20;
              uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
              if (((uVar9 & 1) != 0) &&
                 (param_4 = (byte ****)
                            FUN_710392e290(0x1000,ppplVar20,param_3,param_4,param_5,param_6,param_7,
                                           param_8), param_4 != (byte ****)0x0))
              goto LAB_71036f19d8;
            }
            pppplVar19[4] = (long ***)0x0;
          }
          else {
LAB_71036f19d8:
            param_5 = (long ****)pppplVar19[3];
            pTVar1 = (ThreadType *)(pppplVar19 + 5);
            param_6 = 0x10;
            pppplVar19[4] = (long ***)param_4;
            iVar6 = nn::os::CreateThread
                              (pTVar1,FUN_71036f47f0,pppplVar19,param_4,(ulong)param_5,0x10);
            param_3 = pppplVar19;
            if (iVar6 == 0) {
              nn::os::SetThreadName(pTVar1,"MovieAudioInputReadThread");
              nn::os::StartThread(pTVar1);
              param_3 = pppplVar19;
            }
          }
          *(undefined1 *)(param_1 + 0x634) = 0;
          movie::MediaData::~MediaData((MediaData *)&local_78);
        }
      }
      puVar11 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar11 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78._0_4_ = 0;
          local_68 = (long ***)&DAT_00000008;
          param_3 = &local_68;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar9 & 1) != 0) &&
             (puVar11 = (undefined8 *)
                        FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
             puVar11 != (undefined8 *)0x0)) goto LAB_71036f1b58;
        }
        puVar11 = (undefined8 *)0x0;
      }
LAB_71036f1b58:
      lVar23 = *(long *)(param_1 + 0x30);
      lVar25 = *(long *)(param_1 + 0x40);
      uVar21 = *(undefined8 *)(param_1 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar24 = *(undefined8 *)(param_1 + 0x60);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      pMVar16 = (MultiWaitType *)
                FUN_710392e290(0x10,0x4c8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (pMVar16 == (MultiWaitType *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78._0_4_ = 0;
          local_68 = (long ***)0x4c8;
          pppplVar17 = &local_68;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar9 & 1) != 0) &&
             (pMVar16 = (MultiWaitType *)
                        FUN_710392e290(0x10,0x4c8,pppplVar17,param_4,param_5,param_6,param_7,param_8
                                      ), pMVar16 != (MultiWaitType *)0x0)) goto LAB_71036f1bc4;
        }
        pMVar16 = (MultiWaitType *)0x0;
      }
LAB_71036f1bc4:
      *(long *)(pMVar16 + 0x30) = lVar25;
      *(long *)(pMVar16 + 0x38) = lVar23;
      *(undefined8 *)(pMVar16 + 0x40) = uVar21;
      *(undefined8 *)(pMVar16 + 0x48) = uVar2;
      *(undefined4 *)(pMVar16 + 0x4c0) = 0;
      *(undefined8 *)(pMVar16 + 0x50) = uVar24;
      *(undefined8 *)(pMVar16 + 0x58) = uVar3;
      *(undefined8 *)(pMVar16 + 0x60) = 0x20000;
      *(undefined8 *)(pMVar16 + 0x68) = 0;
      if (lVar23 == 0) {
        pMVar16[0x4c0] = (MultiWaitType)0x1;
      }
      if (lVar25 == 0) {
        pMVar16[0x4c1] = (MultiWaitType)0x1;
      }
      uVar21 = 0x450;
      *(undefined8 *)(pMVar16 + 0x20) = 0;
      *(undefined8 *)(pMVar16 + 0x28) = 0;
      *(undefined8 *)(pMVar16 + 0x10) = 0;
      *(undefined8 *)(pMVar16 + 0x18) = 0;
      *(undefined8 *)pMVar16 = 0;
      *(undefined8 *)(pMVar16 + 8) = 0;
      memset(pMVar16 + 0x70,0,0x450);
      *puVar11 = pMVar16;
      *(undefined8 **)(param_1 + 0x210) = puVar11;
      FUN_71036f41f0(pMVar16,*(ulong *)(param_1 + 0x220),uVar21,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0x90),(long ****)0x5,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0xb8),(long ****)0x6,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0xe0),(long ****)&DAT_00000007,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0x108),(long ****)&DAT_00000008,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0x130),(long ****)0x1,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0x158),(long ****)0x2,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0x180),(long ****)0x3,param_4,param_5,param_6,param_7,
                     param_8);
      pppplVar17 = (long ****)&DAT_00000004;
      FUN_71036f43a0((MultiWaitType *)**(undefined8 **)(param_1 + 0x210),
                     (EventType *)(param_1 + 0x1a8),(long ****)&DAT_00000004,param_4,param_5,param_6
                     ,param_7,param_8);
      nn::os::StartThread((ThreadType *)(**(long **)(param_1 + 0x210) + 0x70));
      puVar11 = (undefined8 *)
                FUN_710392e290(0x10,8,pppplVar17,param_4,param_5,param_6,param_7,param_8);
      uVar21 = extraout_x1_01;
      if (puVar11 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78._0_4_ = 0;
          local_68 = (long ***)&DAT_00000008;
          pppplVar17 = &local_68;
          auVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          uVar21 = auVar26._8_8_;
          if (((auVar26._0_8_ & 1) != 0) &&
             (puVar11 = (undefined8 *)
                        FUN_710392e290(0x10,8,pppplVar17,param_4,param_5,param_6,param_7,param_8),
             uVar21 = extraout_x1_02, puVar11 != (undefined8 *)0x0)) goto LAB_71036f1d20;
        }
        puVar11 = (undefined8 *)0x0;
      }
LAB_71036f1d20:
      FUN_71036f7060(puVar11,uVar21,pppplVar17,param_4,param_5,param_6,param_7,param_8);
      *(undefined8 **)(param_1 + 0x218) = puVar11;
      std::recursive_mutex::lock();
      iVar6 = *(int *)(param_1 + 8);
      std::recursive_mutex::unlock();
      if ((iVar6 == 8) || (iVar6 == 2)) {
        std::recursive_mutex::lock();
        *(undefined4 *)(param_1 + 8) = 3;
        if (*(EventType **)(param_1 + 0x18) != (EventType *)0x0) {
          nn::os::SignalEvent(*(EventType **)(param_1 + 0x18));
        }
        std::recursive_mutex::unlock();
      }
      else {
        *(undefined4 *)(param_1 + 0x630) = 0x100f;
        if (*(EventType **)(param_1 + 0x10) != (EventType *)0x0) {
          nn::os::SignalEvent(*(EventType **)(param_1 + 0x10));
        }
      }
      *(undefined1 *)(param_1 + 0xd9a) = 1;
      goto LAB_71036f1db0;
    }
    pDVar8 = (Decoder *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
    if (pDVar8 == (Decoder *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78._0_4_ = 0;
        local_68 = (long ***)&DAT_00000010;
        pppplVar17 = &local_68;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar9 & 1) != 0) &&
           (pDVar8 = (Decoder *)
                     FUN_710392e290(0x10,0x10,pppplVar17,param_4,param_5,param_6,param_7,param_8),
           pDVar8 != (Decoder *)0x0)) goto LAB_71036f0fbc;
      }
      pDVar8 = (Decoder *)0x0;
    }
LAB_71036f0fbc:
    ppppbVar18 = (byte ****)0x1;
    param_5 = (long ****)&DAT_00000010;
    movie::Decoder::Decoder(pDVar8,iVar7,4);
    *(Decoder **)(param_1 + 0x40) = pDVar8;
    iVar6 = (**(code **)(*(long *)pDVar8 + 0x18))(pDVar8,param_1 + 0x1f0);
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        pEVar14 = *(EventType **)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x630) = 0;
        goto joined_r0x0071036f1a24;
      }
      movie::MediaData::MediaData((MediaData *)&local_78);
      (**(code **)(**(long **)(param_1 + 0x28) + 0x28))
                (*(long **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x80),&local_78);
      local_68 = (long ***)((ulong)local_68 & 0xffffffff00000000);
      movie::MediaData::FindInt32((char *)&local_78,(int *)"max-input-size");
      pppplVar17 = (long ****)(ulong)((int)local_68 + 0x5000);
      movie::MediaData::SetInt32((char *)&local_78,0x4453342);
      (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),&local_78);
      movie::MediaData::Clear();
      plVar10 = (long *)FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8)
      ;
      if (plVar10 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c = 0;
          local_68 = (long ***)&DAT_00000008;
          pppplVar17 = &local_68;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
          if (((uVar9 & 1) != 0) &&
             (plVar10 = (long *)FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                               param_8), plVar10 != (long *)0x0))
          goto LAB_71036f10c0;
        }
        plVar10 = (long *)0x0;
      }
LAB_71036f10c0:
      uVar21 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      uVar24 = *(undefined8 *)(param_1 + 0x40);
      puVar11 = (undefined8 *)
                FUN_710392e290(0x10,0x278,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8);
      if (puVar11 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c = 0;
          local_68 = (long ***)0x278;
          pppplVar17 = &local_68;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
          if (((uVar9 & 1) != 0) &&
             (puVar11 = (undefined8 *)
                        FUN_710392e290(0x10,0x278,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                       param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71036f1128;
        }
        puVar11 = (undefined8 *)0x0;
      }
LAB_71036f1128:
      puVar11[3] = 0x40000;
      puVar11[4] = 0;
      puVar11[0x3f] = 0;
      puVar11[0x40] = 0;
      pppplVar17 = (long ****)&DAT_000001c0;
      *(undefined2 *)(puVar11 + 0x40) = 1;
      *(undefined4 *)(puVar11 + 2) = uVar4;
      puVar11[0x43] = 0;
      puVar11[0x42] = 0;
      puVar11[0x41] = 0;
      *(undefined1 *)((long)puVar11 + 0x202) = 0;
      puVar11[0x44] = 0x100;
      *puVar11 = uVar21;
      puVar11[1] = uVar24;
      puVar11[0x3d] = 0;
      puVar11[0x3e] = 0;
      memset(puVar11 + 5,0,0x1c0);
      puVar11[0x4e] = 0;
      puVar11[0x4d] = 0;
      puVar11[0x4c] = 0;
      puVar11[0x4b] = 0;
      puVar11[0x4a] = 0;
      puVar11[0x49] = 0;
      puVar11[0x48] = 0;
      puVar11[0x47] = 0;
      puVar11[0x46] = 0;
      puVar11[0x45] = 0;
      *plVar10 = (long)puVar11;
      *(long **)(param_1 + 0x50) = plVar10;
      if (*(long *)(param_1 + 0x58) != 0) {
LAB_71036f1218:
        pppplVar19 = (long ****)*plVar10;
        ppplVar20 = pppplVar19[0x3d];
        uVar9 = *(ulong *)(param_1 + 0x220);
        if ((ulong)((long)pppplVar19[0x3f] - (long)ppplVar20 >> 2) < 0x40) {
          pppplVar22 = (long ****)((long)pppplVar19[0x3e] - (long)ppplVar20);
          lVar25 = (long)pppplVar22 >> 2;
          ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                     param_8);
          if (ppplVar12 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c = 0;
              local_68 = (long ***)&DAT_00000100;
              pppplVar17 = &local_68;
              uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
              if (((uVar13 & 1) != 0) &&
                 (ppplVar12 = (long ***)
                              FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar18,param_5,param_6,
                                             param_7,param_8), ppplVar12 != (long ***)0x0))
              goto LAB_71036f12a0;
            }
            ppplVar12 = (long ***)0x0;
          }
LAB_71036f12a0:
          if (0 < (long)pppplVar22) {
            memcpy(ppplVar12,ppplVar20,(size_t)pppplVar22);
            pppplVar17 = pppplVar22;
          }
          pppplVar19[0x3d] = ppplVar12;
          pppplVar19[0x3e] = (long ***)((long)ppplVar12 + lVar25 * 4);
          pppplVar19[0x3f] = ppplVar12 + 0x20;
          if (ppplVar20 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar20);
          }
        }
        if (uVar9 != 0) {
          movie::SetCoreMask(uVar9);
        }
        param_3 = (long ****)pppplVar19[0x44];
        auVar26._8_8_ = 0;
        auVar26._0_8_ = param_3;
        ppplVar20 = (long ***)((long)param_3 << 3);
        if (SUB168(auVar26 * ZEXT816(8),8) != 0) {
          ppplVar20 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar20 == (long ***)0x0) {
          ppplVar20 = (long ***)0x1;
        }
        ppplVar12 = (long ***)
                    FUN_710392e290(0x10,ppplVar20,pppplVar17,ppppbVar18,param_5,param_6,param_7,
                                   param_8);
        if (ppplVar12 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c = 0;
            pppplVar17 = &local_68;
            local_68 = ppplVar20;
            uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
            if (((uVar9 & 1) != 0) &&
               (ppplVar12 = (long ***)
                            FUN_710392e290(0x10,ppplVar20,pppplVar17,ppppbVar18,param_5,param_6,
                                           param_7,param_8), ppplVar12 != (long ***)0x0))
            goto LAB_71036f1358;
          }
          ppplVar12 = (long ***)0x0;
        }
LAB_71036f1358:
        pppplVar19[0x45] = ppplVar12;
        nn::os::InitializeMessageQueue
                  ((MessageQueueType *)(pppplVar19 + 0x46),(ulong *)ppplVar12,(ulong)param_3);
        ppplVar20 = pppplVar19[3];
        if (ppplVar20 == (long ***)0x0) {
          ppplVar20 = (long ***)0x1;
        }
        param_4 = (byte ****)
                  FUN_710392e290(0x1000,ppplVar20,param_3,ppppbVar18,param_5,param_6,param_7,param_8
                                );
        if (param_4 == (byte ****)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c = 0;
            param_3 = &local_68;
            local_68 = ppplVar20;
            uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
            if (((uVar9 & 1) != 0) &&
               (param_4 = (byte ****)
                          FUN_710392e290(0x1000,ppplVar20,param_3,param_4,param_5,param_6,param_7,
                                         param_8), param_4 != (byte ****)0x0)) goto LAB_71036f1388;
          }
          pppplVar19[4] = (long ***)0x0;
        }
        else {
LAB_71036f1388:
          param_5 = (long ****)pppplVar19[3];
          pTVar1 = (ThreadType *)(pppplVar19 + 5);
          param_6 = 0x10;
          pppplVar19[4] = (long ***)param_4;
          iVar6 = nn::os::CreateThread(pTVar1,FUN_71036f71d0,pppplVar19,param_4,(ulong)param_5,0x10)
          ;
          param_3 = pppplVar19;
          if (iVar6 == 0) {
            nn::os::SetThreadName(pTVar1,"MovieVideoInputReadThread");
            nn::os::StartThread(pTVar1);
            param_3 = pppplVar19;
          }
        }
        *(undefined1 *)(param_1 + 0x635) = 0;
        movie::MediaData::~MediaData((MediaData *)&local_78);
        iVar6 = *(int *)(param_1 + 0x7c);
        goto joined_r0x0071036f13d8;
      }
      puVar11 = (undefined8 *)
                FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8);
      uVar21 = extraout_x1;
      if (puVar11 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c = 0;
          local_68 = (long ***)&DAT_00000008;
          pppplVar17 = &local_68;
          auVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
          uVar21 = auVar26._8_8_;
          if (((auVar26._0_8_ & 1) != 0) &&
             (puVar11 = (undefined8 *)
                        FUN_710392e290(0x10,8,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8)
             , uVar21 = extraout_x1_00, puVar11 != (undefined8 *)0x0)) goto LAB_71036f1204;
        }
        puVar11 = (undefined8 *)0x0;
      }
LAB_71036f1204:
      FUN_71036f7780(puVar11,uVar21,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8);
      *(undefined8 **)(param_1 + 0x58) = puVar11;
      plVar10 = *(long **)(param_1 + 0x50);
      if (plVar10 != (long *)0x0) goto LAB_71036f1218;
LAB_71036f1a8c:
      *(undefined4 *)(param_1 + 0x630) = 0x1002;
      if (*(EventType **)(param_1 + 0x10) != (EventType *)0x0) {
        nn::os::SignalEvent(*(EventType **)(param_1 + 0x10));
      }
      movie::MediaData::~MediaData((MediaData *)&local_78);
      goto LAB_71036f1db0;
    }
LAB_71036f1474:
    *(int *)(param_1 + 0x630) = iVar6;
    pEVar14 = *(EventType **)(param_1 + 0x10);
  }
joined_r0x0071036f1a24:
  if (pEVar14 != (EventType *)0x0) {
    nn::os::SignalEvent(pEVar14);
  }
LAB_71036f1db0:
  std::recursive_mutex::unlock();
  return;
}

