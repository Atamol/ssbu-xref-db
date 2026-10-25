// addr:      710373e630
// offset:    0x373e630
// name:      FUN_710373e630
// mangled:   
// signature: undefined __cdecl FUN_710373e630(char * param_1, char * param_2, ThreadType * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710373e630(char *param_1,char *param_2,ThreadType *param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  ThreadType *pTVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  recursive_mutex *prVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  size_t sVar21;
  undefined8 uVar22;
  undefined8 extraout_x1;
  uint uVar23;
  code *pcVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  AudioOutBuffer *pAVar31;
  int *piVar32;
  long *plVar33;
  long lVar34;
  char *pcVar35;
  float fVar36;
  float fVar37;
  undefined8 local_2a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  undefined4 local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  char *pcStack_168;
  long *local_160;
  
  param_1[2] = '\0';
  *param_1 = *param_2;
  uVar13 = 2;
  if (*param_2 != '\0') {
    uVar13 = 6;
  }
  if ((DAT_7106dd50c8 & 1) == 0) {
    DAT_7106dd53a8 = 1;
    DAT_7106dd53b0 = 0;
    PTR_PTR_7105298b78 = (undefined *)&PTR_s_DefaultPlayer_7105298b58;
    PTR_PTR_7105298b80 = (undefined *)&PTR_s_DefaultPlayer_7105298b58;
    DAT_7106dd53b8 = 0;
    DAT_7106dd53ac = DAT_7106dd53ac + 1;
    DAT_7106dd53c0 = 0;
    DAT_7106dd53d0 = 0;
    DAT_7106dd53c8 = 0;
    local_2a8 = (byte ***)&DAT_00000028;
    DAT_7106dd53d8 = 0;
    local_180 = (undefined8 *)&DAT_7106dd50d8;
    prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)&local_180,&local_2a8);
    std::recursive_mutex::recursive_mutex(prVar15);
    local_180 = (undefined8 *)&DAT_7106dd5108;
    local_2a8 = (byte ***)&DAT_00000028;
    DAT_7106dd50d0 = prVar15;
    prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)&local_180,&local_2a8);
    std::recursive_mutex::recursive_mutex(prVar15);
    param_3 = (ThreadType *)&local_180;
    param_4 = (byte ****)&local_2a8;
    local_180 = (undefined8 *)&DAT_7106dd5380;
    local_2a8 = (byte ***)&DAT_00000028;
    DAT_7106dd5100 = prVar15;
    prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)param_3,(ulong *)param_4);
    std::recursive_mutex::recursive_mutex(prVar15);
    DAT_7106dd53f0 = FUN_710373e500;
    DAT_7106dd53f8 = FUN_710373e580;
    DAT_710529cf68 = 2;
    DAT_7106dd5400 = FUN_710373e600;
    DAT_7106dd5378 = prVar15;
    puVar16 = (undefined4 *)
              FUN_710373e500((long ***)0x20028,extraout_x1,(long ****)param_3,param_4,param_5,
                             param_6,param_7,param_8);
    DAT_7106dd5408 = puVar16;
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0x75716e62;
      puVar16[4] = 0x20000;
      *(undefined4 **)(puVar16 + 2) = puVar16 + 10;
      puVar16[7] = 0;
      param_3 = (ThreadType *)0x20000;
      puVar16[6] = 0;
      puVar16[5] = puVar16[6];
      memset(puVar16 + 10,0,0x20000);
      if (DAT_7105298b88._2_2_ == 0) {
        DAT_7105298b88 = 0x10000;
      }
      if (DAT_7105298b8c < 2) {
        DAT_7105298b8c = 2;
      }
      DAT_7106dd5410 = 0;
      if (DAT_7106dd53f0 == (code *)0x0) {
        std::recursive_mutex::lock();
        param_3 = (ThreadType *)0x0;
        puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x240,0);
        std::recursive_mutex::unlock();
      }
      else {
        puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x240);
      }
      DAT_7106dd5418 = puVar17;
      if (puVar17 != (undefined8 *)0x0) {
        memset(puVar17 + 2,0,0x230);
        DAT_7106e07008 = puVar17;
        *puVar17 = 0x10626e666c;
        puVar17[1] = puVar17 + 8;
        local_180 = puVar17 + 3;
        param_3 = (ThreadType *)&local_180;
        param_4 = (byte ****)&local_2a8;
        local_2a8 = (byte ***)&DAT_00000028;
        prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)param_3,(ulong *)param_4);
        std::recursive_mutex::recursive_mutex(prVar15);
        puVar17[2] = prVar15;
        DAT_710529b818 = 1;
        DAT_7106dd5850 = 0;
        if (DAT_7106dd53f0 == (code *)0x0) {
          std::recursive_mutex::lock();
          param_3 = (ThreadType *)0x0;
          puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x9ce8,0);
          std::recursive_mutex::unlock();
        }
        else {
          puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x9ce8);
        }
        DAT_7106dd5420 = puVar17;
        if (puVar17 != (undefined8 *)0x0) {
          memset(puVar17 + 1,0,0x9ce0);
          DAT_7106dd5858 = puVar17;
          puVar17[2] = puVar17 + 0x124d;
          *puVar17 = 0x3061666e62;
          local_180 = puVar17 + 4;
          local_2a8 = (byte ***)&DAT_00000028;
          prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)&local_180,&local_2a8);
          std::recursive_mutex::recursive_mutex(prVar15);
          local_180 = puVar17 + 10;
          puVar17[3] = prVar15;
          local_2a8 = (byte ***)&DAT_00000038;
          puVar18 = (undefined8 *)std::align(8,0x30,(void **)&local_180,&local_2a8);
          puVar18[2] = 0;
          puVar18[3] = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
          pTVar1 = (ThreadType *)(puVar17 + 0x11);
          *(undefined2 *)puVar18 = 1;
          *(undefined1 *)((long)puVar18 + 2) = 0;
          *(undefined1 *)(puVar18 + 4) = 1;
          *(undefined8 *)((long)puVar18 + 0x21) = 0;
          *(undefined1 *)((long)puVar18 + 0x29) = 1;
          puVar17[9] = puVar18;
          uVar12 = DAT_710529b818;
          param_6 = (ulong)DAT_710529b818;
          puVar17[0x49] = FUN_7103986980;
          param_4 = (byte ****)((long)puVar17 + 0x125fU & 0xfffffffffffff000);
          puVar17[0x4b] = 0;
          *(undefined1 *)(puVar17 + 0x4a) = 0;
          param_7 = (ulong)DAT_710529cf68;
          param_3 = pTVar1;
          if ((int)DAT_710529cf68 < 0) {
            param_5 = (long ****)0x8000;
            nn::os::CreateThread(pTVar1,FUN_710399dbc0,pTVar1,param_4,0x8000,uVar12);
          }
          else {
            param_5 = (long ****)0x8000;
            nn::os::CreateThread(pTVar1,FUN_710399dbc0,pTVar1,param_4,0x8000,uVar12,DAT_710529cf68);
          }
          nn::os::SetThreadName(pTVar1,"nuscFileAsyncRequest");
          nn::os::StartThread(pTVar1);
          lVar34 = 0;
          if (DAT_7106dd53f0 != (code *)0x0) goto LAB_710373eacc;
LAB_710373eadc:
          std::recursive_mutex::lock();
          param_3 = (ThreadType *)0x0;
          puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x58,0);
          std::recursive_mutex::unlock();
          do {
            *puVar17 = &PTR_FUN_7105298a60;
            puVar17[1] = "(null)";
            *(undefined4 *)(puVar17 + 2) = 0xffffffff;
            puVar17[5] = 0;
            puVar17[6] = 0;
            puVar17[3] = 0;
            puVar17[4] = 0;
            *(undefined4 *)((long)puVar17 + 0x3c) = 0;
            *(undefined4 *)(puVar17 + 7) = *(undefined4 *)((long)puVar17 + 0x3c);
            *(undefined1 *)(puVar17 + 10) = 0;
            puVar17[8] = 0;
            puVar17[9] = 0;
            if (lVar34 == 0x90) {
              DAT_7106dd57f8 = FUN_7103963490;
              DAT_7106dd57f0 = FUN_7103961a90;
              DAT_7106dd5800 = FUN_7103961bf0;
              DAT_7106dd55c8 = 1;
              DAT_7106dd5428 = puVar17;
              if ((DAT_7106dd57a8 & 1) != 0) break;
              _DAT_7106dd57b0 = 0;
              local_180 = (undefined8 *)&DAT_7106dd5620;
              local_2a8 = (byte ***)&DAT_00000028;
              DAT_7106dd57d8 = (undefined8 *)0x0;
              DAT_7106dd57e0 = (undefined8 *)0x0;
              DAT_7106dd57c8 = (undefined8 *)0x0;
              DAT_7106dd57d0 = (undefined8 *)0x0;
              _DAT_7106dd57b8 = 0;
              _DAT_7106dd57c0 = 0;
              prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)&local_180,&local_2a8);
              std::recursive_mutex::recursive_mutex(prVar15);
              param_3 = (ThreadType *)&local_180;
              param_4 = (byte ****)&local_2a8;
              local_180 = (undefined8 *)&DAT_7106dd5650;
              local_2a8 = (byte ***)&DAT_00000028;
              DAT_7106dd5618 = prVar15;
              prVar15 = (recursive_mutex *)std::align(8,0x20,(void **)param_3,(ulong *)param_4);
              std::recursive_mutex::recursive_mutex(prVar15);
              DAT_7106dd5648 = prVar15;
              if (((DAT_7106dd57f0 == (code *)0x0) || (DAT_7106dd57f8 == (code *)0x0)) ||
                 (DAT_7106dd5800 == (code *)0x0)) break;
              if (DAT_7106dd53f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                param_3 = (ThreadType *)0x0;
                puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x8028,0);
                std::recursive_mutex::unlock();
              }
              else {
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x8028);
              }
              DAT_7106dd5808 = puVar17;
              if (puVar17 == (undefined8 *)0x0) break;
              *(undefined4 *)puVar17 = 0x75716e62;
              puVar17[1] = puVar17 + 5;
              *(undefined4 *)(puVar17 + 2) = 0x8000;
              *(undefined4 *)((long)puVar17 + 0x1c) = 0;
              param_3 = (ThreadType *)0x8000;
              *(undefined4 *)(puVar17 + 3) = 0;
              *(undefined4 *)((long)puVar17 + 0x14) = *(undefined4 *)(puVar17 + 3);
              memset(puVar17 + 5,0,0x8000);
              if (DAT_7106dd57f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                param_3 = (ThreadType *)0x0;
                puVar17 = FUN_71039873e0(DAT_7106dd57e8,0x18,0);
LAB_710373efb0:
                std::recursive_mutex::unlock();
              }
              else {
                if (DAT_7106dd53f0 == (code *)0x0) {
                  std::recursive_mutex::lock();
                  param_3 = (ThreadType *)0x0;
                  puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x18,0);
                  goto LAB_710373efb0;
                }
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x18);
              }
              DAT_7106dd57c8 = puVar17;
              if (puVar17 == (undefined8 *)0x0) break;
              *puVar17 = 0x4944534e;
              puVar17[1] = 0;
              puVar17[2] = 0;
              if (DAT_7106dd57f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                param_3 = (ThreadType *)0x0;
                puVar17 = FUN_71039873e0(DAT_7106dd57e8,0x18,0);
LAB_710373f050:
                std::recursive_mutex::unlock();
              }
              else {
                if (DAT_7106dd53f0 == (code *)0x0) {
                  std::recursive_mutex::lock();
                  param_3 = (ThreadType *)0x0;
                  puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x18,0);
                  goto LAB_710373f050;
                }
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x18);
              }
              DAT_7106dd57d0 = puVar17;
              if (puVar17 == (undefined8 *)0x0) break;
              puVar17[1] = 0;
              puVar17[2] = 0;
              *(undefined4 *)puVar17 = 0x4946534e;
              *(undefined4 *)((long)puVar17 + 4) = 0;
              if (DAT_7106dd57f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                param_3 = (ThreadType *)0x0;
                puVar17 = FUN_71039873e0(DAT_7106dd57e8,0x18,0);
LAB_710373f0e4:
                std::recursive_mutex::unlock();
              }
              else {
                if (DAT_7106dd53f0 == (code *)0x0) {
                  std::recursive_mutex::lock();
                  param_3 = (ThreadType *)0x0;
                  puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x18,0);
                  goto LAB_710373f0e4;
                }
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x18);
              }
              DAT_7106dd57d8 = puVar17;
              if (puVar17 == (undefined8 *)0x0) break;
              *puVar17 = 0x4f56534e;
              puVar17[1] = 0;
              puVar17[2] = 0;
              if (DAT_7106dd57f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                param_3 = (ThreadType *)0x0;
                puVar17 = FUN_71039873e0(DAT_7106dd57e8,0x18,0);
LAB_710373f17c:
                std::recursive_mutex::unlock();
              }
              else {
                if (DAT_7106dd53f0 == (code *)0x0) {
                  std::recursive_mutex::lock();
                  param_3 = (ThreadType *)0x0;
                  puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x18,0);
                  goto LAB_710373f17c;
                }
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x18);
              }
              DAT_7106dd57e0 = puVar17;
              if (puVar17 == (undefined8 *)0x0) break;
              *puVar17 = 0x5542534e;
              puVar17[1] = 0;
              puVar17[2] = 0;
              if ((DAT_7106dd5890 & 1) != 0) break;
              DAT_7106dd5894 = &DAT_100000002;
              DAT_7106dd589c = 5;
              DAT_7106dd58a0 = uVar13;
              nn::audio::InitializeAudioOutParameter((AudioOutParameter *)&local_180);
              local_180._0_6_ = CONCAT24((short)DAT_7106dd58a0,48000);
              iVar14 = nn::audio::OpenDefaultAudioOut
                                 ((AudioOut *)&DAT_7106dd58a8,(SystemEvent *)&DAT_7106dd5860,
                                  (AudioOutParameter *)&local_180);
              if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              iVar14 = nn::audio::GetAudioOutChannelCount((AudioOut *)&DAT_7106dd58a8);
              uVar12 = nn::audio::GetAudioOutSampleRate((AudioOut *)&DAT_7106dd58a8);
              nn::audio::GetAudioOutSampleFormat((AudioOut *)&DAT_7106dd58a8);
              if (DAT_7106dd589c < 0x11) {
                if ((int)DAT_7106dd589c < 2) {
                  DAT_7106dd589c = 2;
                }
              }
              else {
                DAT_7106dd589c = 0x10;
              }
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = 512000000 / uVar12;
              }
              _DAT_7106dd57c0 = CONCAT44(DAT_7106dd57c4,DAT_7106dd589c);
              DAT_7106dd5a10 = 0;
              sVar21 = (ulong)(uint)(iVar14 << 9) << 2;
              _DAT_7106dd57b0 = CONCAT44(0x200,uVar12);
              _DAT_7106dd57b8 = CONCAT44(iVar14,uVar4);
              if (DAT_7106dd57f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                puVar17 = FUN_71039873e0(DAT_7106dd57e8,(int)sVar21,0);
LAB_710373f300:
                std::recursive_mutex::unlock();
              }
              else {
                if (DAT_7106dd53f0 == (code *)0x0) {
                  std::recursive_mutex::lock();
                  puVar17 = FUN_71039873e0(DAT_7106dd53e0,(int)sVar21,0);
                  goto LAB_710373f300;
                }
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(sVar21);
              }
              DAT_7106dd5a18 = puVar17;
              memset(puVar17,0,sVar21);
              if (DAT_7106dd57f0 == (code *)0x0) {
                std::recursive_mutex::lock();
                puVar17 = FUN_71039873e0(DAT_7106dd57e8,0x18000,0);
LAB_710373f398:
                std::recursive_mutex::unlock();
              }
              else {
                if (DAT_7106dd53f0 == (code *)0x0) {
                  std::recursive_mutex::lock();
                  puVar17 = FUN_71039873e0(DAT_7106dd53e0,0x18000,0);
                  goto LAB_710373f398;
                }
                puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x18000);
              }
              DAT_7106dd5a20 = puVar17;
              memset(puVar17,0,0x18000);
              uVar27 = (ulong)(DAT_7106dd57bc * DAT_7106dd57b4);
              if ((int)DAT_7106dd589c < 1) goto LAB_710373f4e8;
              lVar34 = 0;
              pAVar31 = (AudioOutBuffer *)&DAT_7106dd5a38;
              goto LAB_710373f3e4;
            }
            *(undefined8 **)((long)&DAT_7106dd5448 + lVar34) = puVar17;
            lVar34 = lVar34 + 8;
            if (DAT_7106dd53f0 == (code *)0x0) goto LAB_710373eadc;
LAB_710373eacc:
            puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0x58);
          } while( true );
        }
      }
    }
  }
  goto LAB_710373eb84;
LAB_710373f3e4:
  do {
    sVar21 = uVar27 << 1;
    uVar27 = (ulong)((int)sVar21 + 0xfff) & 0xfffff000;
    if (DAT_7106dd57f8 == (code *)0x0) {
      std::recursive_mutex::lock();
      puVar17 = FUN_71039873e0(DAT_7106dd57e8,(int)uVar27,0x1000);
LAB_710373f47c:
      std::recursive_mutex::unlock();
    }
    else {
      if (DAT_7106dd53f8 == (code *)0x0) {
        std::recursive_mutex::lock();
        puVar17 = FUN_71039873e0(DAT_7106dd53e0,(int)uVar27,0x1000);
        goto LAB_710373f47c;
      }
      puVar17 = (undefined8 *)(*DAT_7106dd53f8)(0x1000,uVar27);
    }
    memset(puVar17,0,sVar21);
    nn::audio::SetAudioOutBufferInfo(pAVar31,puVar17,uVar27,sVar21);
    nn::audio::AppendAudioOutBuffer((AudioOut *)&DAT_7106dd58a8,pAVar31);
    uVar27 = (ulong)(DAT_7106dd57bc * DAT_7106dd57b4);
    lVar34 = lVar34 + 1;
    pAVar31 = pAVar31 + 0x28;
  } while (lVar34 < (int)DAT_7106dd589c);
LAB_710373f4e8:
  sVar21 = uVar27 << 2;
  if (DAT_7106dd57f8 == (code *)0x0) {
    std::recursive_mutex::lock();
    puVar17 = FUN_71039873e0(DAT_7106dd57e8,(int)sVar21,0x20);
LAB_710373f56c:
    std::recursive_mutex::unlock();
  }
  else {
    if (DAT_7106dd53f8 == (code *)0x0) {
      std::recursive_mutex::lock();
      puVar17 = FUN_71039873e0(DAT_7106dd53e0,(int)sVar21,0x20);
      goto LAB_710373f56c;
    }
    puVar17 = (undefined8 *)(*DAT_7106dd53f8)(0x20,sVar21);
  }
  DAT_7106dd5a28 = puVar17;
  memset(puVar17,0,sVar21);
  iVar14 = (DAT_7106dd57b4 * 4 + 0xc) * DAT_7106dd57bc + 0x58;
  if (DAT_7106dd57f0 == (code *)0x0) {
    std::recursive_mutex::lock();
    puVar17 = FUN_71039873e0(DAT_7106dd57e8,iVar14,0);
    std::recursive_mutex::unlock();
joined_r0x00710373f670:
    if (puVar17 != (undefined8 *)0x0) goto LAB_710373f5d0;
LAB_710373f674:
    puVar18 = DAT_7106dd5a30 + 9;
  }
  else {
    if (DAT_7106dd53f0 == (code *)0x0) {
      std::recursive_mutex::lock();
      puVar17 = FUN_71039873e0(DAT_7106dd53e0,iVar14,0);
      std::recursive_mutex::unlock();
      goto joined_r0x00710373f670;
    }
    puVar17 = (undefined8 *)(*DAT_7106dd53f0)(iVar14);
    if (puVar17 == (undefined8 *)0x0) goto LAB_710373f674;
LAB_710373f5d0:
    uVar27 = _DAT_7106dd57b8;
    uVar13 = DAT_7106dd57b0;
    iVar11 = DAT_7106dd57b4;
    uVar12 = DAT_7106dd57bc;
    uVar30 = (ulong)DAT_7106dd57bc;
    iVar14 = (DAT_7106dd57b4 * 4 + 0xc) * DAT_7106dd57bc;
    memset(puVar17,0,(ulong)(iVar14 + 0x58));
    *(undefined4 *)puVar17 = 0x5542534e;
    *(int *)((long)puVar17 + 4) = iVar14 + 0x40;
    *(undefined4 *)(puVar17 + 3) = uVar13;
    *(int *)((long)puVar17 + 0x1c) = iVar11;
    *(undefined4 *)(puVar17 + 8) = 0x3f800000;
    *(undefined4 *)(puVar17 + 6) = 0x3f800000;
    *(uint *)(puVar17 + 4) = uVar12;
    *(undefined4 *)((long)puVar17 + 0x24) = 0x3f800000;
    if (uVar12 != 0) {
      lVar34 = (ulong)(uVar12 * iVar11) * 4;
      if (uVar30 - 1 < 3) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar18 = (undefined8 *)((long)puVar17 + lVar34 + 0x58);
        do {
          puVar3 = (undefined8 *)((long)puVar18 + uVar30 * 4);
          lVar19 = lVar19 + 4;
          *puVar3 = 0;
          *puVar18 = 0;
          puVar3[1] = 0;
          puVar18[1] = 0;
          puVar18 = puVar18 + 2;
        } while (uVar30 - (uVar30 & 3) != lVar19);
      }
      if ((uVar27 & 0x300000000) != 0) {
        lVar29 = -(uVar30 & 3);
        puVar16 = (undefined4 *)((long)puVar17 + lVar34 + lVar19 * 4 + 0x58);
        do {
          puVar16[uVar30] = 0;
          lVar29 = lVar29 + 1;
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (lVar29 != 0);
      }
      if (uVar12 != 0) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)puVar17 + uVar27 * 4 + lVar34 + uVar30 * 8 + 0x58) = 0x3f800000;
          uVar27 = uVar27 + 1;
        } while (uVar27 < *(uint *)(puVar17 + 4));
      }
    }
    puVar18 = puVar17 + 9;
    *puVar18 = 0;
    *(undefined1 *)((long)puVar17 + 0x46) = 0;
    puVar3 = DAT_7106dd57e0;
    if (DAT_7106dd57e0[1] != 0) {
      *(undefined8 **)(DAT_7106dd57e0[1] + 0x10) = puVar17;
      puVar17[1] = puVar3[1];
    }
    puVar3[1] = puVar17;
    puVar17[2] = puVar3;
    DAT_7106dd5a30 = puVar17;
  }
  *puVar18 = DAT_7106dd5a28;
  param_7 = (ulong)DAT_7106dd5894 & 0xffffffff;
  param_6 = (ulong)DAT_7106dd5894._4_4_;
  param_4 = (byte ****)&DAT_7106dd6000;
  param_5 = (long ****)0x20000;
  param_3 = (ThreadType *)0x0;
  if ((int)DAT_7106dd5894 < 0) {
    nn::os::CreateThread
              ((ThreadType *)&DAT_7106dd5cc0,FUN_7103987e40,(void *)0x0,&DAT_7106dd6000,0x20000,
               DAT_7106dd5894._4_4_);
  }
  else {
    nn::os::CreateThread
              ((ThreadType *)&DAT_7106dd5cc0,FUN_7103987e40,(void *)0x0,&DAT_7106dd6000,0x20000,
               DAT_7106dd5894._4_4_,(int)DAT_7106dd5894);
  }
  nn::os::SetThreadName((ThreadType *)&DAT_7106dd5cc0,"nus3::audio update");
  nn::os::StartThread((ThreadType *)&DAT_7106dd5cc0);
  DAT_7106dd5890 = 1;
  iVar14 = (DAT_7106dd57b4 * 4 + 0xc) * DAT_7106dd57bc + 0x58;
  if (DAT_7106dd57f0 == (code *)0x0) {
    std::recursive_mutex::lock();
    param_3 = (ThreadType *)0x0;
    puVar17 = FUN_71039873e0(DAT_7106dd57e8,iVar14,0);
    std::recursive_mutex::unlock();
    uVar27 = _DAT_7106dd57b8;
  }
  else if (DAT_7106dd53f0 == (code *)0x0) {
    std::recursive_mutex::lock();
    param_3 = (ThreadType *)0x0;
    puVar17 = FUN_71039873e0(DAT_7106dd53e0,iVar14,0);
    std::recursive_mutex::unlock();
    uVar27 = _DAT_7106dd57b8;
  }
  else {
    puVar17 = (undefined8 *)(*DAT_7106dd53f0)(iVar14);
    uVar27 = _DAT_7106dd57b8;
  }
  _DAT_7106dd57b8 = uVar27;
  if (puVar17 != (undefined8 *)0x0) {
    uVar13 = DAT_7106dd57b0;
    DAT_7106dd57b4 = (int)((ulong)_DAT_7106dd57b0 >> 0x20);
    iVar11 = DAT_7106dd57b4;
    DAT_7106dd57bc = (uint)(uVar27 >> 0x20);
    uVar12 = DAT_7106dd57bc;
    uVar30 = (ulong)DAT_7106dd57bc;
    iVar14 = (DAT_7106dd57b4 * 4 + 0xc) * DAT_7106dd57bc;
    memset(puVar17,0,(ulong)(iVar14 + 0x58));
    *(undefined4 *)puVar17 = 0x5542534e;
    *(int *)((long)puVar17 + 4) = iVar14 + 0x40;
    *(undefined4 *)(puVar17 + 3) = uVar13;
    *(int *)((long)puVar17 + 0x1c) = iVar11;
    *(undefined4 *)(puVar17 + 8) = 0x3f800000;
    *(undefined4 *)(puVar17 + 6) = 0x3f800000;
    *(uint *)(puVar17 + 4) = uVar12;
    *(undefined4 *)((long)puVar17 + 0x24) = 0x3f800000;
    if (uVar12 != 0) {
      lVar34 = (ulong)(uVar12 * iVar11) * 4;
      if (uVar30 - 1 < 3) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar18 = (undefined8 *)((long)puVar17 + lVar34 + 0x58);
        do {
          puVar3 = (undefined8 *)((long)puVar18 + uVar30 * 4);
          lVar19 = lVar19 + 4;
          *puVar3 = 0;
          *puVar18 = 0;
          puVar3[1] = 0;
          puVar18[1] = 0;
          puVar18 = puVar18 + 2;
        } while (uVar30 - (uVar30 & 3) != lVar19);
      }
      if ((uVar27 & 0x300000000) != 0) {
        lVar29 = -(uVar30 & 3);
        puVar16 = (undefined4 *)((long)puVar17 + lVar34 + lVar19 * 4 + 0x58);
        do {
          puVar16[uVar30] = 0;
          lVar29 = lVar29 + 1;
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (lVar29 != 0);
      }
      if (uVar12 != 0) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)puVar17 + uVar27 * 4 + lVar34 + uVar30 * 8 + 0x58) = 0x3f800000;
          uVar27 = uVar27 + 1;
        } while (uVar27 < *(uint *)(puVar17 + 4));
      }
    }
    *(undefined1 *)((long)puVar17 + 0x46) = 0;
    puVar17[9] = 0;
    puVar18 = DAT_7106dd57e0;
    DAT_7106dd5810 = puVar17;
    if (DAT_7106dd57e0[1] != 0) {
      *(undefined8 **)(DAT_7106dd57e0[1] + 0x10) = puVar17;
      puVar17[1] = puVar18[1];
    }
    puVar18[1] = puVar17;
    puVar17[2] = puVar18;
    FUN_7103985fa0((undefined8 *)s_NSDPp_710529c640,0,0,(undefined4 *)&local_2a8);
    local_180 = (undefined8 *)0x0;
    FUN_7103985fa0((undefined8 *)s_NSDPp_710529c6b8,&local_180,8,(undefined4 *)&local_2a8);
    FUN_7103985fa0((undefined8 *)s_NSDPp_710529c730,0,0,(undefined4 *)&local_2a8);
    FUN_7103985fa0((undefined8 *)s_NSDPp_710529c7a8,0,0,(undefined4 *)&local_2a8);
    FUN_7103985fa0((undefined8 *)s_NSDPp_710529c820,0,0,(undefined4 *)&local_2a8);
    param_4 = (byte ****)&local_2a8;
    FUN_7103985fa0((undefined8 *)s_NSDPp_710529c898,0,0,(undefined4 *)param_4);
    FUN_71039861f0((undefined8 *)s_NSFP__710529c910,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cb58,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cbc0,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cc28,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cc90,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529ccf8,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cd60,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cdc8,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529ce30,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529ce98,&local_184);
    FUN_71039861f0((undefined8 *)s_NSFP__710529cf00,&local_184);
    DAT_7106dd57a8 = 1;
    DAT_7106dd5818 = 0;
    DAT_7106dd5819 = 0;
    DAT_7106dd55cc._0_4_ = DAT_7106dd57bc;
    DAT_7106dd55cc._4_4_ = DAT_7106dd57b8;
    DAT_7106dd55d4._0_4_ = DAT_7106dd57b0;
    DAT_7106dd55d4._4_4_ = DAT_7106dd57b4;
    DAT_7106dd55dc = DAT_7106dd57c4;
    DAT_7106dd5440 = DAT_7106dd57c4;
    _DAT_7106dd5430 = CONCAT44(DAT_7106dd57b8,DAT_7106dd57bc);
    DAT_7106dd5438 = _DAT_7106dd57b0;
    DAT_7106dd5838 = FUN_71039635c0;
    if (DAT_7106dd57bc == 2) {
      DAT_7106dd54d8 = 1;
      DAT_7106dd54d9 = 1;
      DAT_7106dd55e0 = 1;
    }
    DAT_7106dd525c = DAT_7106dd57bc;
    DAT_7106dd52c0 = 1;
    DAT_7106dd524c = DAT_7106dd53e8;
    DAT_7106dd5250 = DAT_7106dd53e8;
    DAT_7106dd5238 = DAT_7106dd57b8;
    DAT_7106dd5240 = 0x1c5b;
    memcpy(&DAT_7105298aa0,&DAT_7106dd5210,0xb4);
    param_3 = (ThreadType *)&DAT_000000b4;
    memcpy(&DAT_7106dd52c4,&DAT_7106dd5210,0xb4);
    DAT_7106dd54dc = 0;
    FUN_7103961030(0x7105298b90,&DAT_7106dd54e0);
    if (DAT_7106dd53f0 == (code *)0x0) {
      std::recursive_mutex::lock();
      param_3 = (ThreadType *)0x0;
      puVar17 = FUN_71039873e0(DAT_7106dd53e0,0xf8,0);
      std::recursive_mutex::unlock();
      if (puVar17 != (undefined8 *)0x0) goto LAB_710373fc2c;
LAB_710373fd50:
      DAT_7106dd54e8 = (undefined8 *)0x0;
    }
    else {
      puVar17 = (undefined8 *)(*DAT_7106dd53f0)(0xf8);
      if (puVar17 == (undefined8 *)0x0) goto LAB_710373fd50;
LAB_710373fc2c:
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[3] = 0;
      puVar17[4] = 0;
      *(undefined4 *)((long)puVar17 + 0x3c) = 0;
      *(undefined4 *)(puVar17 + 7) = *(undefined4 *)((long)puVar17 + 0x3c);
      *puVar17 = &PTR_FUN_710529b230;
      puVar17[1] = "(null)";
      *(undefined1 *)(puVar17 + 10) = 0;
      puVar17[9] = 0;
      puVar17[0x1d] = 0;
      *(undefined2 *)(puVar17 + 0x1e) = 0;
      *(undefined2 *)((long)puVar17 + 0x72) = 0;
      *(undefined8 *)((long)puVar17 + 0x6a) = 0;
      *(undefined8 *)((long)puVar17 + 0x62) = 0;
      *(undefined2 *)(puVar17 + 0xc) = 0x100;
      *(undefined8 *)((long)puVar17 + 0x8c) = 0xbf800000;
      *(undefined8 *)((long)puVar17 + 0x84) = 0;
      *(undefined8 *)((long)puVar17 + 0x9c) = 0;
      *(undefined4 *)(puVar17 + 0x1c) = 0x3f800000;
      *(undefined4 *)((long)puVar17 + 0xcc) = 0x3f800000;
      *(undefined4 *)(puVar17 + 0x17) = 0x3f800000;
      *(undefined4 *)((long)puVar17 + 0xa4) = 0x3f800000;
      *(undefined8 *)((long)puVar17 + 0x94) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar17 + 0x7c) = 0;
      *(undefined8 *)((long)puVar17 + 0x74) = 0;
      *(undefined8 *)((long)puVar17 + 0xc4) = 0;
      *(undefined8 *)((long)puVar17 + 0xbc) = 0;
      puVar17[0xb] = &PTR_s_MasterListener_7105298bc8;
      puVar17[0x15] = 0;
      puVar17[0x16] = 0;
      puVar17[0x1a] = 0;
      puVar17[0x1b] = 0;
      puVar17[1] = PTR_s_MasterListener_7105298bc8;
      *(undefined4 *)(puVar17 + 2) = DAT_7105298bd0;
      puVar17[8] = &PTR_s_MasterListener_7105298bc8;
      std::recursive_mutex::lock();
      lVar34 = DAT_7106dd5458;
      puVar17[6] = DAT_7106dd5458;
      lVar19 = *(long *)(lVar34 + 0x28);
      if (lVar19 == 0) {
        *(undefined8 **)(lVar34 + 0x28) = puVar17;
      }
      else {
        do {
          lVar34 = lVar19;
          lVar19 = *(long *)(lVar34 + 0x18);
        } while (*(long *)(lVar34 + 0x18) != 0);
        *(undefined8 **)(lVar34 + 0x18) = puVar17;
        puVar17[4] = lVar34;
      }
      std::recursive_mutex::unlock();
      DAT_7106dd54e8 = puVar17;
    }
    FUN_7103961240(&PTR_s_System_SurroundSpeakerset_7105298be8,&DAT_7106dd54f0);
    FUN_7103961460(&PTR_s_System_MasterChannelmap_7105298c08,&DAT_7106dd54f8);
    FUN_7103961620(&PTR_s_System_MasterGroup_7105298c28,&DAT_7106dd5500);
    piVar32 = (int *)(DAT_7106dd54e0 + 0x38);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar8) {
        *piVar32 = *piVar32 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    piVar32 = (int *)(DAT_7106dd54e8 + 7);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar8) {
        *piVar32 = *piVar32 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    piVar32 = (int *)(DAT_7106dd54f0 + 0x38);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar8) {
        *piVar32 = *piVar32 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    piVar32 = (int *)(DAT_7106dd54f8 + 0x38);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar8) {
        *piVar32 = *piVar32 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    piVar32 = (int *)(DAT_7106dd5500 + 0x38);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar8) {
        *piVar32 = *piVar32 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DAT_7106dd50c8 = 1;
    DAT_7106dd50c9 = 0;
  }
LAB_710373eb84:
  lVar19 = DAT_7105332f20;
  lVar34 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
  uVar30 = (ulong)*(uint *)(lVar34 + 4);
  uVar27 = 0;
  if (uVar30 != 0) {
    uVar27 = 0x1ce5c186bd / uVar30;
  }
  uVar4 = *(uint *)(param_1 + 4);
  lVar34 = lVar34 + (0x1ce5c186bd - uVar27 * uVar30) * 8;
  uVar12 = *(uint *)(lVar34 + 0xc);
  uVar27 = (ulong)uVar12;
  puVar26 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                     (ulong)*(uint *)(lVar34 + 8) * 8);
  puVar2 = puVar26 + uVar27;
  puVar25 = puVar26;
  if (uVar12 != 0) {
    do {
      uVar30 = uVar27;
      if ((long)uVar27 < 0) {
        uVar30 = uVar27 + 1;
      }
      uVar30 = (long)uVar30 >> 1;
      puVar26 = puVar25 + uVar30 + 1;
      uVar27 = uVar27 + ~uVar30;
      if (0x1ce5c186bc < (puVar25[uVar30] & 0xffffffffff)) {
        puVar26 = puVar25;
        uVar27 = uVar30;
      }
      puVar25 = puVar26;
    } while (uVar27 != 0);
  }
  if (puVar26 == puVar2) {
LAB_710373ec1c:
    uVar23 = 0xffffff;
  }
  else {
    uVar27 = *puVar26;
    uVar12 = (uint)(uVar27 >> 0x28);
    if ((uVar27 & 0xffffffffff) != 0x1ce5c186bd || uVar12 == 0xffffff) goto LAB_710373ec1c;
    std::recursive_mutex::lock();
    puVar20 = FUN_71035404b0(lVar19,uVar27 & 0xffffff0000000000 | 0x1ce5c186bd);
    std::recursive_mutex::unlock();
    uVar23 = 0xffffff;
    if (puVar20 != (uint *)0x0) {
      uVar23 = uVar12;
    }
    if ((uVar23 == 0xffffff) || (*(char *)(*(long *)(lVar19 + 8) + (ulong)uVar23 * 8 + 4) == '\0'))
    goto LAB_710373ec1c;
  }
  *(uint *)(param_1 + 4) = uVar23;
  if (uVar4 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar4,(long *********)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    uVar23 = *(uint *)(param_1 + 4);
  }
  if (((uVar23 != 0xffffff) && (uVar23 < *(uint *)(DAT_7105332f20 + 0x18))) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar23 * 8 + 4) != '\0')) {
    uVar12 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar23 * 8);
    if ((uVar12 != 0xffffff) && (uVar12 < *(uint *)(DAT_7105332f20 + 0x1c))) {
      plVar28 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar12 * 0x18);
      if ((*(char *)((long)plVar28 + 0xc) != '\0' && plVar28 != (long *)0x0) &&
         ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar12 * 0x18 + 0xd) == '\x03' &&
          (*plVar28 != 0)))) {
        uVar12 = *(uint *)(param_1 + 4);
        uVar27 = (ulong)uVar12;
        if ((uVar12 != 0xffffff) &&
           ((uVar12 < *(uint *)(DAT_7105332f20 + 0x18) &&
            (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar27 * 8 + 4) != '\0')))) {
          uVar4 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar27 * 8);
          if ((uVar4 != 0xffffff) && (uVar4 < *(uint *)(DAT_7105332f20 + 0x1c))) {
            puVar17 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar4 * 0x18);
            if (((*(char *)((long)puVar17 + 0xc) != '\0') && (puVar17 != (undefined8 *)0x0)) &&
               (piVar32 = (int *)*puVar17, piVar32 != (int *)0x0)) {
              lVar34 = **(long **)(DAT_7105332f20 + 0x78);
              if (uVar12 < *(uint *)(*(long *)(lVar34 + 0x40) + 4)) {
                uVar12 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar34 + 0x60) + uVar27 * 0x20) >>
                               0x20);
                uVar23 = uVar12 >> 8;
                if ((uVar23 == 0xffffff) ||
                   (uVar5 = *(uint *)(*(long *)(lVar34 + 0x40) + 8), uVar12 = uVar12 >> 8,
                   uVar5 < uVar23 || uVar5 == uVar12)) goto LAB_710373fe4c;
                lVar19 = FUN_7103541e10(lVar34,*(long *)(lVar34 + 0x90) +
                                               ((ulong)*(uint *)(*(long *)(lVar34 + 0x68) +
                                                                 (ulong)uVar12 * 8 + 4) & 0xffffff)
                                               * 0x10,
                                        *(int *)(*(long *)(DAT_7105332f20 + 0x10) +
                                                 (ulong)uVar4 * 0x18 + 0x10));
                uVar13 = *(undefined4 *)
                          (*(long *)(lVar34 + 0xa0) + (ulong)*(uint *)(lVar19 + 4) * 0x10 + 8);
              }
              else {
LAB_710373fe4c:
                uVar13 = 0;
              }
              if ((((DAT_7106dd50c9 & 1) == 0) && (DAT_7106dd50c8 == 1)) &&
                 (DAT_7106dd5568 == (long *)0x0)) {
                if (*piVar32 == 0x6373756e) {
                  if (DAT_7106dd53f0 == (code *)0x0) {
                    std::recursive_mutex::lock();
                    plVar28 = FUN_71039873e0(DAT_7106dd53e0,0xc0,0);
                    std::recursive_mutex::unlock();
                  }
                  else {
                    plVar28 = (long *)(*DAT_7106dd53f0)(0xc0);
                  }
                  if (plVar28 != (long *)0x0) {
                    plVar28[5] = 0;
                    plVar28[6] = 0;
                    *(undefined4 *)(plVar28 + 2) = 0xffffffff;
                    plVar28[3] = 0;
                    plVar28[4] = 0;
                    plVar28[1] = (long)"(null)";
                    *(undefined4 *)((long)plVar28 + 0x3c) = 0;
                    *(undefined4 *)(plVar28 + 7) = *(undefined4 *)((long)plVar28 + 0x3c);
                    *plVar28 = (long)&PTR_FUN_7105298fc0;
                    *(undefined1 *)(plVar28 + 10) = 0;
                    plVar28[0xb] = 0;
                    *(undefined1 *)(plVar28 + 0xc) = 0;
                    plVar28[8] = 0;
                    plVar28[9] = 0;
                    plVar33 = plVar28 + 0xd;
                    *plVar33 = (long)&PTR_FUN_71052992a8;
                    plVar28[0x16] = 0;
                    plVar28[0x17] = 0;
                    plVar28[0x14] = 0;
                    plVar28[0x15] = 0;
                    plVar28[0x12] = 0;
                    plVar28[0x13] = 0;
                    plVar28[0x10] = 0;
                    plVar28[0x11] = 0;
                    plVar28[0xe] = 0;
                    plVar28[0xf] = 0;
                    uVar22 = FUN_7103966560((long)plVar33,(char *)piVar32,uVar13);
                    if ((int)uVar22 == 0) {
                      plVar28[1] = (long)"NUSound2";
                      *(undefined4 *)(plVar28 + 2) = 0;
                      plVar28[0xb] = (long)plVar33;
                      lVar34 = (**(code **)(plVar28[0xd] + 0x20))(plVar33);
                      plVar28[1] = lVar34;
                      uVar13 = (**(code **)(*(long *)plVar28[0xb] + 0x28))();
                      DAT_7106dd5578 = 2;
                      *(undefined4 *)(plVar28 + 2) = uVar13;
                      goto LAB_71037405f0;
                    }
                    DAT_7106dd5578 = 2;
LAB_710374050c:
                    (**(code **)*plVar28)(plVar28);
                    if (DAT_7106dd5400 == (code *)0x0) {
                      std::recursive_mutex::lock();
                      FUN_7103986e80(DAT_7106dd53e0,(long)plVar28);
                      std::recursive_mutex::unlock();
                      DAT_7106dd5578 = 0;
                    }
                    else {
                      (*DAT_7106dd5400)(plVar28);
                      DAT_7106dd5578 = 0;
                    }
                  }
                }
                else {
                  if (DAT_7106dd53f0 == (code *)0x0) {
                    std::recursive_mutex::lock();
                    plVar28 = FUN_71039873e0(DAT_7106dd53e0,0x208,0);
                    std::recursive_mutex::unlock();
                  }
                  else {
                    plVar28 = (long *)(*DAT_7106dd53f0)(0x208);
                  }
                  if (plVar28 != (long *)0x0) {
                    plVar28[5] = 0;
                    plVar28[6] = 0;
                    *(undefined4 *)(plVar28 + 2) = 0xffffffff;
                    plVar28[3] = 0;
                    plVar28[4] = 0;
                    plVar28[1] = (long)"(null)";
                    *(undefined4 *)((long)plVar28 + 0x3c) = 0;
                    *(undefined4 *)(plVar28 + 7) = *(undefined4 *)((long)plVar28 + 0x3c);
                    *plVar28 = (long)&PTR_FUN_71052993f8;
                    *(undefined1 *)(plVar28 + 10) = 0;
                    plVar28[0xb] = 0;
                    *(undefined1 *)(plVar28 + 0xc) = 0;
                    plVar28[8] = 0;
                    plVar28[9] = 0;
                    plVar33 = plVar28 + 0xd;
                    *plVar33 = (long)&PTR_FUN_71052996e0;
                    plVar28[0x12] = 0;
                    *(undefined4 *)(plVar28 + 0x13) = 0;
                    plVar28[0x14] = 0;
                    *(undefined4 *)(plVar28 + 0x15) = 0;
                    plVar28[0x16] = 0;
                    *(undefined4 *)(plVar28 + 0x17) = 0;
                    plVar28[0x18] = 0;
                    *(undefined4 *)(plVar28 + 0x19) = 0;
                    plVar28[0x1a] = 0;
                    *(undefined4 *)(plVar28 + 0x1b) = 0;
                    plVar28[0x1c] = 0;
                    *(undefined4 *)(plVar28 + 0x1d) = 0;
                    plVar28[0x1e] = 0;
                    *(undefined4 *)(plVar28 + 0x1f) = 0;
                    plVar28[0x20] = 0;
                    *(undefined4 *)(plVar28 + 0x21) = 0;
                    plVar28[0x22] = 0;
                    *(undefined4 *)(plVar28 + 0x23) = 0;
                    plVar28[0x24] = 0;
                    *(undefined4 *)(plVar28 + 0x25) = 0;
                    plVar28[0x26] = 0;
                    *(undefined4 *)(plVar28 + 0x27) = 0;
                    plVar28[0x28] = 0;
                    *(undefined4 *)(plVar28 + 0x29) = 0;
                    plVar28[0x2a] = 0;
                    *(undefined4 *)(plVar28 + 0x2b) = 0;
                    *(undefined4 *)(plVar28 + 0x11) = 0;
                    plVar28[0xe] = 0;
                    plVar28[0x2c] = 0;
                    plVar28[0xf] = 0;
                    plVar28[0x10] = 0;
                    plVar28[0x3f] = 0;
                    plVar28[0x40] = 0;
                    plVar28[0x3d] = 0;
                    plVar28[0x3e] = 0;
                    plVar28[0x3b] = 0;
                    plVar28[0x3c] = 0;
                    plVar28[0x39] = 0;
                    plVar28[0x3a] = 0;
                    plVar28[0x37] = 0;
                    plVar28[0x38] = 0;
                    plVar28[0x35] = 0;
                    plVar28[0x36] = 0;
                    plVar28[0x33] = 0;
                    plVar28[0x34] = 0;
                    plVar28[0x31] = 0;
                    plVar28[0x32] = 0;
                    plVar28[0x2f] = 0;
                    plVar28[0x30] = 0;
                    plVar28[0x2d] = 0;
                    plVar28[0x2e] = 0;
                    uVar22 = FUN_7103968770(plVar33,piVar32,uVar13);
                    if ((int)uVar22 != 0) {
                      DAT_7106dd5578 = 1;
                      goto LAB_710374050c;
                    }
                    plVar28[1] = (long)"NUSOUND3.0";
                    *(undefined4 *)(plVar28 + 2) = 0;
                    plVar28[0xb] = (long)plVar33;
                    lVar34 = (**(code **)(plVar28[0xd] + 0x20))(plVar33);
                    plVar28[1] = lVar34;
                    uVar13 = (**(code **)(*(long *)plVar28[0xb] + 0x28))();
                    *(undefined4 *)(plVar28 + 2) = uVar13;
                    DAT_7106dd5578 = 1;
LAB_71037405f0:
                    DAT_7106dd5568 = plVar28;
                    (**(code **)(*plVar28 + 0x1f8))(plVar28,&DAT_7106dd51a0);
                    local_2a8 = (byte ***)((ulong)local_2a8 & 0xffffffff00000000);
                    (**(code **)(*plVar28 + 0x200))(plVar28,&local_2a8);
                    if ((uint)local_2a8 != 0) {
                      uVar12 = 0;
                      do {
                        local_180 = (undefined8 *)0x0;
                        (**(code **)(*plVar28 + 0x208))(plVar28,uVar12,&local_180);
                        puVar17 = local_180;
                        if (local_180 != (undefined8 *)0x0) {
                          iVar14 = strncmp((char *)local_180[1],"MasterBus",0x1f);
                          if (iVar14 == 0) {
                            DAT_7106dd5580 = puVar17;
                          }
                          piVar32 = (int *)(puVar17 + 7);
                          do {
                            cVar6 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                            if (bVar8) {
                              *piVar32 = *piVar32 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < (uint)local_2a8);
                    }
                    local_184 = 0;
                    (**(code **)(*plVar28 + 0x230))(plVar28,&local_184);
                    if (local_184 != 0) {
                      uVar12 = 0;
                      do {
                        local_180 = (undefined8 *)0x0;
                        (**(code **)(*plVar28 + 0x238))(plVar28,uVar12,&local_180);
                        puVar17 = local_180;
                        if (local_180 != (undefined8 *)0x0) {
                          pcVar35 = (char *)local_180[1];
                          iVar14 = strncmp(pcVar35,"Pause",0x1f);
                          if ((((iVar14 == 0) ||
                               (iVar14 = strncmp(pcVar35,"System_TitlePause",0x1f), iVar14 == 0)) ||
                              (iVar14 = strncmp(pcVar35,"nus3_TitlePause",0x1f), iVar14 == 0)) ||
                             (iVar14 = strncmp(pcVar35,"nus3_GamePause",0x1f), iVar14 == 0)) {
                            DAT_7106dd5588 = puVar17;
                          }
                          else {
                            iVar14 = strncmp(pcVar35,"HUD_Mute",0x1f);
                            if (((iVar14 == 0) ||
                                (iVar14 = strncmp(pcVar35,"System_BgmMute",0x1f), iVar14 == 0)) ||
                               (iVar14 = strncmp(pcVar35,"nus3_BgmMute",0x1f), iVar14 == 0)) {
                              DAT_7106dd5590 = puVar17;
                            }
                          }
                          piVar32 = (int *)(puVar17 + 7);
                          do {
                            cVar6 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                            if (bVar8) {
                              *piVar32 = *piVar32 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_184);
                    }
                    local_188 = 0;
                    (**(code **)(*plVar28 + 0x280))(plVar28,&local_188);
                    if (local_188 != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 0x288))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_188);
                    }
                    local_18c = 0;
                    (**(code **)(*plVar28 + 0x240))(plVar28,&local_18c);
                    if (local_18c != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 0x248))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_18c);
                    }
                    local_190 = 0;
                    (**(code **)(*plVar28 + 0x250))(plVar28,&local_190);
                    if (local_190 != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 600))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_190);
                    }
                    local_194 = 0;
                    (**(code **)(*plVar28 + 0x240))(plVar28,&local_194);
                    local_198 = 0;
                    (**(code **)(*plVar28 + 0x290))(plVar28,&local_198);
                    if (local_198 != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 0x298))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_198);
                    }
                    local_19c = 0;
                    (**(code **)(*plVar28 + 0x2a0))(plVar28,&local_19c);
                    if (local_19c != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 0x2a8))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_19c);
                    }
                    local_1a0 = 0;
                    (**(code **)(*plVar28 + 0x2b0))(plVar28,&local_1a0);
                    if (local_1a0 != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 0x2b8))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_1a0);
                    }
                    local_1a4 = 0;
                    (**(code **)(*plVar28 + 0x2c0))(plVar28,&local_1a4);
                    if (local_1a4 != 0) {
                      uVar12 = 0;
                      do {
                        (**(code **)(*plVar28 + 0x2c8))(plVar28,uVar12,0);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < local_1a4);
                    }
                    (**(code **)(*plVar28 + 0x2d0))(plVar28,&DAT_7106dd5598);
                    uVar27 = (ulong)DAT_7106dd5598;
                    if (DAT_7106dd5598 != 0) {
                      if (DAT_7106dd53f0 == (code *)0x0) {
                        std::recursive_mutex::lock();
                        puVar17 = FUN_71039873e0(DAT_7106dd53e0,(int)(uVar27 << 3),0);
                        std::recursive_mutex::unlock();
                      }
                      else {
                        puVar17 = (undefined8 *)(*DAT_7106dd53f0)(uVar27 << 3);
                      }
                      DAT_7106dd5570 = puVar17;
                      if (puVar17 == (undefined8 *)0x0) goto LAB_710373fe5c;
                      if ((DAT_7106dd5598 != 0) &&
                         ((**(code **)(*plVar28 + 0x1b8))(plVar28,0xe,0,puVar17), 1 < DAT_7106dd5598
                         )) {
                        uVar27 = 1;
                        lVar34 = 8;
                        do {
                          (**(code **)(*plVar28 + 0x1b8))
                                    (plVar28,0xe,uVar27 & 0xffffffff,(long)DAT_7106dd5570 + lVar34);
                          uVar27 = uVar27 + 1;
                          lVar34 = lVar34 + 8;
                        } while (uVar27 < DAT_7106dd5598);
                      }
                    }
                    local_178 = (code *)0x0;
                    local_170 = 0;
                    local_180 = (undefined8 *)0x0;
                    iVar14 = (**(code **)(*plVar28 + 0x180))(plVar28,&local_180);
                    if (iVar14 == 0) {
                      DAT_7106dd5244 = (undefined4)local_178;
                      DAT_7106dd5248 = local_178._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_710373fe5c:
  nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)(param_1 + 0x148));
  nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)&local_180);
  strcpy((char *)&local_2a8,(char *)&local_180);
  sVar21 = strlen((char *)&local_2a8);
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  if (sVar21 == 0) {
    uVar27 = 0;
  }
  else {
    if (sVar21 == 1) {
      uVar27 = 0;
      pcVar35 = (char *)&local_2a8;
    }
    else {
      uVar27 = 0;
      pcVar35 = (char *)&local_2a8;
      lVar34 = (sVar21 & 1) - sVar21;
      do {
        cVar6 = *pcVar35;
        *(short *)(param_1 + 0x10a) = (short)uVar27 + 1;
        lVar34 = lVar34 + 2;
        param_1[uVar27 + 8] = cVar6;
        uVar7 = *(ushort *)(param_1 + 0x10a);
        cVar6 = pcVar35[1];
        pcVar35 = pcVar35 + 2;
        *(ushort *)(param_1 + 0x10a) = uVar7 + 1;
        param_1[(ulong)uVar7 + 8] = cVar6;
        uVar27 = (ulong)*(ushort *)(param_1 + 0x10a);
      } while (lVar34 != 0);
      if ((sVar21 & 1) == 0) goto LAB_710373ff10;
    }
    cVar6 = *pcVar35;
    *(short *)(param_1 + 0x10a) = (short)uVar27 + 1;
    param_1[uVar27 + 8] = cVar6;
    uVar27 = (ulong)*(ushort *)(param_1 + 0x10a);
  }
LAB_710373ff10:
  param_1[uVar27 + 8] = '\0';
  local_180 = (undefined8 *)&DAT_710523cfc8;
  local_178 = FUN_7103740b50;
  local_170 = 0;
  pcStack_168 = param_1;
  local_160 = &local_180;
  FUN_710353d5b0((undefined8 *)(param_1 + 0x140),&local_180,(long ****)0x5,(byte ****)0x2,
                 (long ****)"AudioDeviceChange",0x40000,param_7,param_8);
  if (&local_180 == local_160) {
    pcVar24 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) goto LAB_710373ff7c;
    pcVar24 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar24)();
LAB_710373ff7c:
  iVar14 = (int)DAT_7106dd5894;
  iVar11 = DAT_7106dd5894._4_4_;
  nn::os::LockMutex((MutexType *)&DAT_710529b820);
  if (DAT_7106df60c8 == '\0') {
    nn::os::InitializeEvent(&DAT_7106df60d0,0,0);
    if (iVar14 < 0) {
      nn::os::CreateThread
                ((ThreadType *)&DAT_7106df6100,FUN_710398b8a0,(void *)0x0,&DAT_7106df7000,0x10000,
                 iVar11);
    }
    else {
      nn::os::CreateThread
                ((ThreadType *)&DAT_7106df6100,FUN_710398b8a0,(void *)0x0,&DAT_7106df7000,0x10000,
                 iVar11,iVar14);
    }
    DAT_710529b840 = '\0';
    DAT_710529b844 = 0;
    DAT_710529b848 = 0;
    DAT_710529ba00 = 0;
    DAT_710529ba04 = 0;
    DAT_710529ba08 = 0;
    DAT_710529bbc0 = 0;
    DAT_710529bbc4 = 0;
    DAT_710529bbc8 = 0;
    DAT_710529bd80 = 0;
    DAT_710529bd84 = 0;
    DAT_710529bd88 = 0;
    DAT_710529bf40 = 0;
    DAT_710529bf44 = 0;
    DAT_710529bf48 = 0;
    DAT_710529c100 = 0;
    DAT_710529c104 = 0;
    DAT_710529c108 = 0;
    DAT_710529c2c0 = 0;
    DAT_710529c2c4 = 0;
    DAT_710529c2c8 = 0;
    DAT_710529c480 = 0;
    DAT_710529c484 = 0;
    DAT_710529c488 = 0;
    DAT_7106e07000 = 0;
    nn::os::SetThreadName((ThreadType *)&DAT_7106df6100,"sindou::update");
    nn::os::StartThread((ThreadType *)&DAT_7106df6100);
    DAT_7106df60c8 = '\x01';
  }
  nn::os::UnlockMutex((MutexType *)&DAT_710529b820);
  nn::os::LockMutex((MutexType *)&DAT_710529b820);
  if (DAT_7106df60c8 != '\0') {
    DAT_710529b840 = 0;
    DAT_710529b970 = FUN_710373e620;
    DAT_710529b928 = 0xf00000000;
    _DAT_710529b930 = 0x3b09421fbfe66666;
    _DAT_710529b938 = 0x4348000042f00000;
    _DAT_710529b940 = 0x4400000043800000;
    DAT_710529b850 = 0;
    uRam000000710529b868 = 0xbf9fd156bfd99595;
    _DAT_710529b860 = 0xbf9fd156bfd99595;
    uRam000000710529b8b8 = 0xbf9fd156bfd99595;
    _DAT_710529b8b0 = 0xbf9fd156bfd99595;
    DAT_710529b920 = 0x43eebb7f;
    DAT_710529b960 = FUN_710398bc70;
    DAT_710529b968 = &DAT_710529b840;
    DAT_710529b8d0 = 0;
    DAT_710529b8d8 = 0;
    uRam000000710529b898 = 0xbfc611a2bfdf295c;
    _DAT_710529b890 = 0xbfc611a2bfdf295c;
    uRam000000710529b8a8 = 0xbf5c4c77bfd27b1a;
    _DAT_710529b8a0 = 0xbf5c4c77bfd27b1a;
    DAT_710529b8c0 = 0;
    DAT_710529b8c8 = 0;
    fVar36 = cosf(NAN);
    fVar9 = DAT_710529b930;
    fVar37 = cosf(DAT_710529b934 * DAT_710529b940);
    fVar10 = DAT_710529b930;
    _DAT_710529b890 = CONCAT44(fVar9 * fVar37,fVar36 * -1.8);
    uRam000000710529b898 = CONCAT44(fVar9 * fVar37,fVar36 * -1.8);
    fVar36 = cosf(NAN);
    fVar9 = DAT_710529b930;
    fVar37 = cosf(DAT_710529b934 * DAT_710529b944);
    DAT_710529b880 = 0;
    DAT_710529b888 = 0;
    DAT_710529b870 = 0;
    DAT_710529b878 = 0;
    _DAT_710529b8a0 = CONCAT44(fVar9 * fVar37,fVar10 * fVar36);
    uRam000000710529b8a8 = CONCAT44(fVar9 * fVar37,fVar10 * fVar36);
    fVar9 = DAT_710529b930;
    fVar36 = cosf(DAT_710529b934 * (DAT_710529b93c + DAT_710529b938) * 0.5);
    fVar10 = DAT_710529b930;
    fVar37 = cosf(DAT_710529b934 * (DAT_710529b940 + DAT_710529b944) * 0.5);
    _DAT_710529b860 = CONCAT44(fVar10 * fVar37,fVar9 * fVar36);
    uRam000000710529b868 = CONCAT44(fVar10 * fVar37,fVar9 * fVar36);
    DAT_710529b844 = 0;
    DAT_710529b848 = 0;
    DAT_710529b840 = '\x01';
    _DAT_710529b8b0 = _DAT_710529b860;
    uRam000000710529b8b8 = uRam000000710529b868;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_710529b820);
  nn::os::LockMutex((MutexType *)&DAT_710529b820);
  if ((DAT_7106df60c8 != '\0') && (DAT_710529b840 != '\x01')) {
    DAT_710529b840 = '\x01';
  }
  nn::os::UnlockMutex((MutexType *)&DAT_710529b820);
  param_1[1] = '\x01';
  return;
}

