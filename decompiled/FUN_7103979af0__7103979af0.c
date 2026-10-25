// addr:      7103979af0
// offset:    0x3979af0
// name:      FUN_7103979af0
// mangled:   
// signature: undefined8 __cdecl FUN_7103979af0(long param_1, int * param_2, int * param_3, int * param_4)


undefined8 FUN_7103979af0(long param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *__s;
  undefined8 uVar7;
  long lVar8;
  int local_6c;
  int local_68;
  int local_64;
  
  iVar5 = strncmp((char *)param_2,"LightReverb",0x1f);
  if (iVar5 == 0) {
    iVar5 = 0x56524d49;
  }
  else {
    iVar5 = 0x4d4f4342;
    iVar6 = strncmp((char *)param_2,"Compressor",0x1f);
    if (iVar6 != 0) {
      iVar5 = 0x51454245;
      iVar6 = strncmp((char *)param_2,"EQ",0x1f);
      if (iVar6 == 0) {
        iVar5 = 0x5145504e;
      }
      else {
        iVar6 = strncmp((char *)param_2,"Delay",0x1f);
        if (iVar6 == 0) {
          iVar5 = 0x594c444e;
        }
        else {
          iVar6 = strncmp((char *)param_2,"Freeverb",0x1f);
          if (iVar6 == 0) {
            iVar5 = 0x42565246;
          }
          else {
            iVar6 = strncmp((char *)param_2,"Distortion",0x1f);
            if (iVar6 == 0) {
              iVar5 = 0x54534944;
            }
            else {
              iVar6 = strncmp((char *)param_2,"NUCompressor",0x1f);
              if (iVar6 == 0) {
                iVar5 = 0x4d4f4346;
              }
              else {
                iVar6 = strncmp((char *)param_2,"MPEQ",0x1f);
                if (iVar6 == 0) {
                  iVar5 = 0x5145504d;
                }
                else {
                  iVar6 = strncmp((char *)param_2,"DC1",0x1f);
                  if (iVar6 == 0) {
                    iVar5 = 0x20314344;
                  }
                  else {
                    iVar6 = strncmp((char *)param_2,"Vita_Distortion",0x1f);
                    if (iVar6 == 0) {
                      iVar5 = 0x54534456;
                    }
                    else {
                      iVar6 = strncmp((char *)param_2,"GEQ",0x1f);
                      if (iVar6 == 0) {
                        iVar5 = 0x20514547;
                      }
                      else {
                        iVar6 = strncmp((char *)param_2,"PitchShift",0x1f);
                        if (iVar6 == 0) {
                          iVar5 = 0x48535450;
                        }
                        else {
                          iVar6 = strncmp((char *)param_2,"DownMix",0x1f);
                          if (iVar6 == 0) {
                            iVar5 = 0x43524444;
                          }
                          else {
                            iVar6 = strncmp((char *)param_2,"Gate",0x1f);
                            if (iVar6 == 0) {
                              iVar5 = 0x45544147;
                            }
                            else {
                              iVar6 = strncmp((char *)param_2,"SpeakerEmulator",0x1f);
                              if (iVar6 == 0) {
                                iVar5 = 0x4d455053;
                              }
                              else {
                                iVar6 = strncmp((char *)param_2,"Radio",0x1f);
                                if (iVar6 == 0) {
                                  iVar5 = 0x4f494452;
                                }
                                else {
                                  iVar6 = strncmp((char *)param_2,"Ambisonic",0x1f);
                                  if (iVar6 == 0) {
                                    iVar5 = 0x53424d41;
                                  }
                                  else {
                                    iVar6 = strncmp((char *)param_2,"Binaural",0x1f);
                                    if (iVar6 == 0) {
                                      iVar5 = 0x4c524e42;
                                    }
                                    else {
                                      iVar6 = strncmp((char *)param_2,"EarlyReflection",0x1f);
                                      if (iVar6 == 0) {
                                        iVar5 = 0x46455245;
                                      }
                                      else {
                                        iVar6 = strncmp((char *)param_2,"SingleChannel_Freeverb",
                                                        0x1f);
                                        if (iVar6 == 0) {
                                          iVar5 = 0x56524353;
                                        }
                                        else {
                                          iVar6 = strncmp((char *)param_2,"EQ_8Band",0x1f);
                                          if (iVar6 != 0) {
                                            iVar5 = *param_2;
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
  }
  lVar8 = *(long *)(DAT_7106dd57d0 + 8);
  if (lVar8 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    do {
      if (*(int *)(lVar8 + 0x20) == iVar5) {
        iVar5 = (**(code **)(lVar8 + 0x40))
                          (*(undefined8 *)(lVar8 + 0x80),uVar2,DAT_7106dd57b4,DAT_7106dd57b0,
                           &local_6c);
        if (iVar5 == 0) {
          uVar1 = local_6c + 0x60;
          if (DAT_7106dd57f0 == 0) {
            std::recursive_mutex::lock();
            __s = (int *)FUN_71039873e0(DAT_7106dd57e8,uVar1,0);
            std::recursive_mutex::unlock();
            uVar3 = DAT_7106dd57b0;
            uVar4 = DAT_7106dd57b4;
          }
          else if (DAT_7106dd53f0 == (code *)0x0) {
            std::recursive_mutex::lock();
            __s = (int *)FUN_71039873e0(DAT_7106dd53e0,uVar1,0);
            std::recursive_mutex::unlock();
            uVar3 = DAT_7106dd57b0;
            uVar4 = DAT_7106dd57b4;
          }
          else {
            __s = (int *)(*DAT_7106dd53f0)((ulong)uVar1);
            uVar3 = DAT_7106dd57b0;
            uVar4 = DAT_7106dd57b4;
          }
          DAT_7106dd57b0 = uVar3;
          DAT_7106dd57b4 = uVar4;
          if (__s != (int *)0x0) {
            uVar7 = *(undefined8 *)(lVar8 + 0x80);
            memset(__s,0,(ulong)uVar1);
            *__s = 0x5846534e;
            __s[1] = local_6c + 0x48;
            *(undefined8 *)(__s + 6) = *(undefined8 *)(lVar8 + 0x50);
            *(undefined8 *)(__s + 8) = *(undefined8 *)(lVar8 + 0x58);
            *(undefined8 *)(__s + 10) = *(undefined8 *)(lVar8 + 0x60);
            *(undefined8 *)(__s + 0xc) = *(undefined8 *)(lVar8 + 0x68);
            *(undefined8 *)(__s + 0xe) = *(undefined8 *)(lVar8 + 0x70);
            *(undefined8 *)(__s + 0x10) = *(undefined8 *)(lVar8 + 0x78);
            *(undefined1 **)(__s + 0x12) = &DAT_3f8000003f800000;
            *(undefined1 *)(__s + 0x14) = 0;
            iVar5 = (**(code **)(lVar8 + 0x48))
                              (__s + 0x18,uVar7,uVar2,uVar4,uVar3,&local_64,&local_68);
            if (iVar5 == 0) {
              __s[0x15] = local_64;
              __s[0x16] = local_68;
              *(int **)(param_1 + 8) = __s;
              if (*__s == 0x5846534e) {
                *param_3 = __s[0x15];
                __s = *(int **)(param_1 + 8);
                if (__s == (int *)0x0) {
                  return 0;
                }
              }
              if (*__s != 0x5846534e) {
                return 0;
              }
              *param_4 = __s[0x16];
              return 0;
            }
            if (DAT_7106dd5800 == 0) {
              std::recursive_mutex::lock();
              FUN_7103986e80(DAT_7106dd57e8,(long)__s);
              std::recursive_mutex::unlock();
            }
            else if (DAT_7106dd5400 == (code *)0x0) {
              std::recursive_mutex::lock();
              FUN_7103986e80(DAT_7106dd53e0,(long)__s);
              std::recursive_mutex::unlock();
            }
            else {
              (*DAT_7106dd5400)(__s);
            }
          }
        }
        break;
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != 0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return 0x80000011;
}

