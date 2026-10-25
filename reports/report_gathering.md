# gathering (funcs=28, hits=38)

Top 50 functions by hit count

## 1. `FUN_710024cbc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024cbc0`  (offset `0x24cbc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024cbc0(void)`
- **Size / BBs / Incoming:** 76 bytes / 3 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** DynamicGathering;Gathering
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024cbc0__710024cbc0.c)  [cfg](../decompiled/FUN_710024cbc0__710024cbc0.mmd)
- **Clone hash:** `ece94457b5e7863c`

```c

bool FUN_710024cbc0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"DynamicGathering");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"Gathering");
  return bVar1;
}


```

## 2. `FUN_7100105b50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105b50`  (offset `0x105b50`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7100105b50(long param_1)`
- **Size / BBs / Incoming:** 1112 bytes / 32 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::CompleteFailure;CreateSessionJob::MeshStartup
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000ed820;FUN_710013dae0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100105b50__7100105b50.c)  [cfg](../decompiled/FUN_7100105b50__7100105b50.mmd)
- **Clone hash:** `cca19695e79c76ec`

```c

uint FUN_7100105b50(long param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  ErrorResultVariant *pEVar7;
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_48[0] = 0xc406;
    break;
  case 6:
    local_48[0] = 0xa471;
    break;
  case 7:
    local_48[0] = 0xc420;
    break;
  case 8:
    local_48[0] = 0xc421;
    break;
  default:
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      local_48[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
// ... (140 more lines)
```

## 3. `FUN_7100120640`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120640`  (offset `0x120640`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120640(void)`
- **Size / BBs / Incoming:** 188 bytes / 4 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::UnregisterGathering
- **Callees:** FUN_71000bcf30;FUN_710011bb20;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120640__7100120640.c)  [cfg](../decompiled/FUN_7100120640__7100120640.mmd)
- **Clone hash:** `0a3daf2c8f756ac2`

```c

undefined8 FUN_7100120640(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    pcVar3 = FUN_71001429b0;
    uVar2 = 0;
    pcVar4 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
    FUN_710011bb20(*(long *)(param_1 + 0x178));
    pcVar3 = FUN_7100120700;
    uVar2 = 5;
    pcVar4 = "LanMatchRandomMatchmakeJob::UnregisterGathering";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}


```

## 4. `FUN_710168c4d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710168c4d0`  (offset `0x168c4d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710168c4d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1572 bytes / 55 bb / 1 incoming refs
- **Match values:** gathering
- **Strings touched:** hac_p_aaaba_session_end;Ver. %d.%d.%d;app_version;gathering_id;gamemode;min_players;max_players;rating;country;scorebased_key;scorebased_value;cluster_id;rate_rank;is_vip;is_parallel;matching_retry;match_result;wait_interval
- **Callees:** FUN_71000001c0;FUN_710167fac0;FUN_710172b370;FUN_710172bb90;FUN_7101747490;FUN_7101764000;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add
- **Files:** [decomp](../decompiled/FUN_710168c4d0__710168c4d0.c)  [cfg](../decompiled/FUN_710168c4d0__710168c4d0.mmd)
- **Clone hash:** `4a9e8d132a490049`

```c

void FUN_710168c4d0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  ulong local_68;
  ulong local_60;
  ulong *local_48;
  
  iVar6 = (int)param_3;
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      ppppbVar10 = param_4;
      if ((*(int *)(param_1 + 0x269c0) == 0xc) && (*(byte *)(param_4 + 1) < 3)) {
        lVar13 = *DAT_710593b580;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x98);
        iVar3 = *(int *)(lVar13 + 0x7300);
        uVar2 = *(uint *)(lVar11 + 0xdcc);
        if (iVar3 == -1) {
          plVar7 = (long *)(lVar13 + 0x28);
        }
        else {
          if (*(ulong *)(lVar13 + 0x72c0) <= (ulong)(long)iVar3) goto LAB_710168caf0;
          plVar7 = (long *)(lVar13 + (long)iVar3 * 0xcc0 + 0xce8);
        }
        lVar11 = lVar11 + 0x540;
// ... (148 more lines)
```

## 5. `FUN_7100105fd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105fd0`  (offset `0x105fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105fd0(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering
- **Callees:** FUN_71000bcf30
- **Files:** [decomp](../decompiled/FUN_7100105fd0__7100105fd0.c)  [cfg](../decompiled/FUN_7100105fd0__7100105fd0.mmd)
- **Clone hash:** `801f1cc0b6166b99`

```c

undefined8 FUN_7100105fd0(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0x90),param_2);
  *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::UnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_7100105660;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 6. `FUN_7100105660`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105660`  (offset `0x105660`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105660(void)`
- **Size / BBs / Incoming:** 320 bytes / 12 bb / 7 incoming refs
- **Match values:** Gathering
- **Strings touched:** nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitUnregisterGathering
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100105660__7100105660.c)  [cfg](../decompiled/FUN_7100105660__7100105660.mmd)
- **Clone hash:** `3fcf7ce476aa39b1`

```c

undefined8 FUN_7100105660(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar2 + 0x70))
              (aiStack_38,plVar2,param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_38[0] == 0) {
      pcVar4 = FUN_7100106010;
      uVar3 = 5;
      pcVar5 = "NexMatchCreateSessionJob::WaitUnregisterGathering";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_38);
      pcVar4 = FUN_710013d590;
// ... (19 more lines)
```

## 7. `FUN_710024cba0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024cba0`  (offset `0x24cba0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024cba0(void)`
- **Size / BBs / Incoming:** 20 bytes / 1 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** DynamicGathering
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024cba0__710024cba0.c)  [cfg](../decompiled/FUN_710024cba0__710024cba0.mmd)
- **Clone hash:** `fdb36abaf7829e1b`

```c

bool FUN_710024cba0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"DynamicGathering");
  return bVar1;
}


```

## 8. `FUN_710024cdc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024cdc0`  (offset `0x24cdc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024cdc0(void)`
- **Size / BBs / Incoming:** 76 bytes / 3 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** GameSession;Gathering
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024cdc0__710024cdc0.c)  [cfg](../decompiled/FUN_710024cdc0__710024cdc0.mmd)
- **Clone hash:** `f541ee9acf46cdfb`

```c

bool FUN_710024cdc0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"GameSession");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"Gathering");
  return bVar1;
}


```

## 9. `FUN_7101746780`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101746780`  (offset `0x1746780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101746780(undefined8 param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2160 bytes / 55 bb / 2 incoming refs
- **Match values:** gathering
- **Strings touched:** hac_p_aaaba_match_end;Ver. %d.%d.%d;app_version;match_id_lo;match_id_hi;match_mode;match_submode;event_type;tournament_id;gathering_id;is_host;rating;is_provisional;start_rtt_max;rtt_min;rtt_max;rtt_ave;experience;game_time;rtt_raw;rtt_correct;loss_ratio_min;loss_ratio_max;loss_ratio_ave;loss_ratio_dirty
- **Callers:** FUN_71016ad9e0;FUN_71016b9340
- **Callees:** FUN_71000001c0;FUN_71016f6340;FUN_71017436d0;FUN_7101743910;FUN_7101764000;FUN_71017994c0;FUN_710179eec0;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101746780__7101746780.c)  [cfg](../decompiled/FUN_7101746780__7101746780.mmd)
- **Clone hash:** `e105e8441062ab05`

```c

void FUN_7101746780(undefined8 param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined **ppuVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  double dVar17;
  byte local_80 [4];
  uint local_7c;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong *local_50;
  undefined *local_48;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
// ... (201 more lines)
```

## 10. `FUN_7100105ad0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105ad0`  (offset `0x105ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105ad0(void)`
- **Size / BBs / Incoming:** 128 bytes / 4 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;NexMatchCreateSessionJob::WaitStartNatSession
- **Callees:** FUN_71000bcf30;FUN_71000ed7a0
- **Files:** [decomp](../decompiled/FUN_7100105ad0__7100105ad0.c)  [cfg](../decompiled/FUN_7100105ad0__7100105ad0.mmd)
- **Clone hash:** `0db1756a6b94f75e`

```c

undefined8 FUN_7100105ad0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int aiStack_30 [4];
  
  FUN_71000ed7a0(aiStack_30);
  if (aiStack_30[0] == 0) {
    pcVar2 = FUN_7100105b50;
    pcVar1 = "NexMatchCreateSessionJob::WaitStartNatSession";
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_30);
    pcVar2 = FUN_7100105660;
    pcVar1 = "NexMatchCreateSessionJob::UnregisterGathering";
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 5;
}


```

## 11. `FUN_710011f5f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f5f0`  (offset `0x11f5f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011f5f0(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LanMatchCreateSessionJob::UnregisterGathering
- **Callees:** FUN_71000bcf30
- **Files:** [decomp](../decompiled/FUN_710011f5f0__710011f5f0.c)  [cfg](../decompiled/FUN_710011f5f0__710011f5f0.mmd)
- **Clone hash:** `18b134e833ab1252`

```c

undefined8 FUN_710011f5f0(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0xa0),param_2);
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::UnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f630;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 12. `FUN_710024d1f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024d1f0`  (offset `0x24d1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024d1f0(void)`
- **Size / BBs / Incoming:** 20 bytes / 1 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** Gathering
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024d1f0__710024d1f0.c)  [cfg](../decompiled/FUN_710024d1f0__710024d1f0.mmd)
- **Clone hash:** `7317121bfcc0978a`

```c

bool FUN_710024d1f0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"Gathering");
  return bVar1;
}


```

## 13. `FUN_710024c0e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024c0e0`  (offset `0x24c0e0`)
- **Namespace:** `Global`
- **Signature:** `long __cdecl FUN_710024c0e0(undefined8 param_1, long param_2)`
- **Size / BBs / Incoming:** 480 bytes / 17 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** DynamicGathering
- **Callers:** FUN_710024c3a0
- **Callees:** FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024c0e0__710024c0e0.c)  [cfg](../decompiled/FUN_710024c0e0__710024c0e0.mmd)
- **Clone hash:** `811a7312731f5726`

```c

long FUN_710024c0e0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined **local_90;
  char local_88 [16];
  char *local_78;
  undefined8 local_70;
  undefined **local_68 [3];
  char *local_50;
  
  (**(code **)(DAT_71052b59b8 + 0x10))(&DAT_71052b59b8);
  lVar3 = *(long *)(DAT_71052b5a48 + 8);
  if (DAT_71052b5a48 != lVar3) {
    do {
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))(local_68);
      bVar1 = FUN_71001b4e00(local_50,*(char **)(param_2 + 0x18));
      local_68[0] = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)local_68);
      if (bVar1) {
        plVar2 = *(long **)(lVar3 + 0x10);
        goto LAB_710024c184;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (DAT_71052b5a48 != lVar3);
  }
  plVar2 = (long *)0x0;
LAB_710024c184:
  (**(code **)(DAT_71052b59b8 + 0x20))(&DAT_71052b59b8);
  if (plVar2 == (long *)0x0) {
    local_88[0] = '\0';
    local_78 = local_88;
    local_70 = 0x10;
    local_90 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_90,"DynamicGathering",-1);
    (**(code **)(DAT_71052b59b8 + 0x10))(&DAT_71052b59b8);
    lVar3 = *(long *)(DAT_71052b5a48 + 8);
// ... (32 more lines)
```

## 14. `FUN_710024cb60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024cb60`  (offset `0x24cb60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024cb60(void)`
- **Size / BBs / Incoming:** 52 bytes / 1 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** DynamicGathering
- **Callees:** FUN_71001b47e0
- **Files:** [decomp](../decompiled/FUN_710024cb60__710024cb60.c)  [cfg](../decompiled/FUN_710024cb60__710024cb60.mmd)
- **Clone hash:** `cefe4a736c91be0e`

```c

void FUN_710024cb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"DynamicGathering",-1);
  return;
}


```

## 15. `FUN_71001057a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001057a0`  (offset `0x1057a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001057a0(long param_1)`
- **Size / BBs / Incoming:** 816 bytes / 28 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::UnregisterGathering;NexMatchCreateSessionJob::StartNatSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000ecfb0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001057a0__71001057a0.c)  [cfg](../decompiled/FUN_71001057a0__71001057a0.mmd)
- **Clone hash:** `a2673036977c05ad`

```c

undefined8 FUN_71001057a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int local_58 [4];
  undefined4 local_48 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    local_58[0] = 0xc406;
    break;
  case 6:
    local_58[0] = 0xa471;
    break;
  case 7:
    local_58[0] = 0xc420;
    break;
  case 8:
    local_58[0] = 0xc421;
    break;
  default:
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0xc0)) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar5 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar5 == (long *)0x0) {
          uVar3 = 1;
          plVar5 = (long *)FUN_71000ecfb0((long)plVar9,1);
// ... (81 more lines)
```

## 16. `FUN_710024d1b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024d1b0`  (offset `0x24d1b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024d1b0(void)`
- **Size / BBs / Incoming:** 52 bytes / 1 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** Gathering
- **Callees:** FUN_71001b47e0
- **Files:** [decomp](../decompiled/FUN_710024d1b0__710024d1b0.c)  [cfg](../decompiled/FUN_710024d1b0__710024d1b0.mmd)
- **Clone hash:** `e27b6cd0b8b9c1ba`

```c

void FUN_710024d1b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"Gathering",-1);
  return;
}


```

## 17. `FUN_7101747490`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101747490`  (offset `0x1747490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101747490(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 816 bytes / 18 bb / 4 incoming refs
- **Match values:** gathering
- **Strings touched:** competition_entry;Ver. %d.%d.%d;app_version;gathering_id;gamemode;event_id;min_players;max_players;rating;country;match_result;wait_interval
- **Callers:** FUN_710168c4d0;FUN_710169bef0;FUN_710236cc20;FUN_710236dce0
- **Callees:** FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101747490__7101747490.c)  [cfg](../decompiled/FUN_7101747490__7101747490.mmd)
- **Clone hash:** `6e8a287adb6adb94`

```c

void FUN_7101747490(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *local_48;
  
  if (DAT_710509e4a8 != 0) {
    FUN_710375aa90((long *)&local_48,"competition_entry",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar1 = local_48;
    lVar4 = DAT_710533a0a0;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71052b92e0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"app_version");
    if (((*(long **)(lVar4 + 0x30) != (long *)0x0) &&
        (lVar4 = **(long **)(lVar4 + 0x30), lVar4 != 0)) && (*(long *)(lVar4 + 0x40) != 0)) {
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gathering_id");
    }
    puVar1 = local_48;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gamemode");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"event_id");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"min_players");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"max_players");
    NEON_ucvtf(*(undefined4 *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xa8) + 0x2984));
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"rating");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"country");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"match_result");
    lVar4 = nn::os::GetSystemTick();
    nn::os::ConvertToTimeSpan(lVar4 - DAT_71074470e8);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x7104400b13);
    DAT_710509e4a8 = 0;
    iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
// ... (18 more lines)
```

## 18. `FUN_710024c2c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024c2c0`  (offset `0x24c2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710024c2c0(undefined8 param_1, long param_2, long * param_3)`
- **Size / BBs / Incoming:** 224 bytes / 3 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** PersistentGathering;Community
- **Callees:** FUN_71001b3cb0;FUN_71001b4910;FUN_71001b4e00;FUN_71001d0460;FUN_71001e6720;FUN_71001e6910;FUN_71001e69b0;FUN_7100228510
- **Files:** [decomp](../decompiled/FUN_710024c2c0__710024c2c0.c)  [cfg](../decompiled/FUN_710024c2c0__710024c2c0.mmd)
- **Clone hash:** `6ebc4035d15ae587`

```c

void FUN_710024c2c0(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 auStack_c0 [14];
  undefined **local_50 [3];
  char *local_38;
  undefined4 local_24;
  
  (**(code **)(*param_3 + 0x18))(local_50,param_3);
  bVar1 = FUN_71001b4e00(local_38,"PersistentGathering");
  if (bVar1) {
    FUN_71001b3cb0((long)local_50,"Community");
  }
  FUN_7100228510(param_2,(long)local_50);
  FUN_71001e6720(auStack_c0);
  (**(code **)(*param_3 + 0x30))(param_3,auStack_c0);
  lVar2 = FUN_71001e69b0((long)auStack_c0);
  local_24 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
  FUN_71001d0460(param_2,&local_24,4);
  FUN_71001d0460(param_2,(void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28)),
                 *(size_t *)(lVar2 + 0x18));
  FUN_71001e6910(auStack_c0);
  local_50[0] = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)local_50);
  return;
}


```

## 19. `FUN_7100256a60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100256a60`  (offset `0x256a60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100256a60(void)`
- **Size / BBs / Incoming:** 52 bytes / 1 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** PersistentGathering
- **Callees:** FUN_71001b47e0
- **Files:** [decomp](../decompiled/FUN_7100256a60__7100256a60.c)  [cfg](../decompiled/FUN_7100256a60__7100256a60.mmd)
- **Clone hash:** `b773505f6750d51b`

```c

void FUN_7100256a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"PersistentGathering",-1);
  return;
}


```

## 20. `FUN_710024c3a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024c3a0`  (offset `0x24c3a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710024c3a0(undefined8 param_1, long param_2, long * param_3)`
- **Size / BBs / Incoming:** 464 bytes / 9 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** Community;PersistentGathering
- **Callees:** FUN_71001b3cb0;FUN_71001b4910;FUN_71001b4e00;FUN_71001cb870;FUN_71001cf750;FUN_71001cf760;FUN_71001cfad0;FUN_71001e6870;FUN_71001e6910;FUN_71001e69b0;FUN_7100228650;FUN_710024c0e0
- **Files:** [decomp](../decompiled/FUN_710024c3a0__710024c3a0.c)  [cfg](../decompiled/FUN_710024c3a0__710024c3a0.mmd)
- **Clone hash:** `f7dd8bc6b14df48b`

```c

void FUN_710024c3a0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_110 [14];
  undefined **local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined **local_68;
  char local_60 [16];
  char *local_50;
  undefined8 local_48;
  
  local_50 = local_60;
  local_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_60[0] = '\0';
  FUN_7100228650(param_2,(long)&local_68);
  bVar3 = FUN_71001b4e00(local_50,"Community");
  uVar4 = (ulong)bVar3;
  if (bVar3) {
    uVar4 = FUN_71001b3cb0((long)&local_68,"PersistentGathering");
  }
  lVar5 = FUN_710024c0e0(uVar4,(long)&local_68);
  *param_3 = lVar5;
  local_98 = 1;
  local_a0 = &PTR_FUN_7104f56018;
  local_94 = 0;
  uVar4 = FUN_71001cf750();
  FUN_71001cf760((long)&local_a0,uVar4,0);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x18);
  if ((ulong)(lVar6 - lVar1) < 4) {
// ... (29 more lines)
```

## 21. `FUN_710011f630`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f630`  (offset `0x11f630`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011f630(long param_1)`
- **Size / BBs / Incoming:** 304 bytes / 5 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure;LanMatchCreateSessionJob::WaitUnregisterGathering
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011f630__710011f630.c)  [cfg](../decompiled/FUN_710011f630__710011f630.mmd)
- **Clone hash:** `365d35b30722a88b`

```c

undefined8 FUN_710011f630(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int aiStack_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    local_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_71000bcf30((int *)(param_1 + 0xa0),local_38);
    *(code **)(param_1 + 0x30) = FUN_710013d590;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure";
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x70))
            (local_38,*(long **)(param_1 + 0xb0),param_1 + 0x60,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (local_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 0xa0));
    FUN_71000b41f0(puVar2,aiStack_48);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::WaitUnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f760;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}
// ... (1 more lines)
```

## 22. `FUN_7100256aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100256aa0`  (offset `0x256aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100256aa0(void)`
- **Size / BBs / Incoming:** 20 bytes / 1 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** PersistentGathering
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_7100256aa0__7100256aa0.c)  [cfg](../decompiled/FUN_7100256aa0__7100256aa0.mmd)
- **Clone hash:** `93cac65407333972`

```c

bool FUN_7100256aa0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"PersistentGathering");
  return bVar1;
}


```

## 23. `FUN_7100256ac0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100256ac0`  (offset `0x256ac0`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_7100256ac0(undefined8 param_1, long param_2)`
- **Size / BBs / Incoming:** 76 bytes / 3 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** PersistentGathering
- **Callees:** FUN_71001b4e00;FUN_710024cc10
- **Files:** [decomp](../decompiled/FUN_7100256ac0__7100256ac0.c)  [cfg](../decompiled/FUN_7100256ac0__7100256ac0.mmd)
- **Clone hash:** `6633c7aeab3cd5a7`

```c

bool FUN_7100256ac0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"PersistentGathering");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_710024cc10(param_1,param_2);
  return bVar1;
}


```

## 24. `FUN_710024ca30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024ca30`  (offset `0x24ca30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024ca30(void)`
- **Size / BBs / Incoming:** 296 bytes / 3 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** DynamicGathering
- **Callees:** FUN_71001af850;FUN_71001b3cb0;FUN_71001b47e0;FUN_71001cf750;FUN_71001cf760
- **Files:** [decomp](../decompiled/FUN_710024ca30__710024ca30.c)  [cfg](../decompiled/FUN_710024ca30__710024ca30.mmd)
- **Clone hash:** `300572ae2707c7e4`

```c

undefined8 * FUN_710024ca30(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar1 = FUN_71001af850(200);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[7] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[10] = puVar1 + 8;
    puVar1[0xb] = 0x10;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0x200;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_7104f5cc18;
    *(undefined8 *)((long)puVar1 + 0x24) = 1;
    FUN_71001b3cb0((long)(puVar1 + 7),"");
    *(undefined1 *)(puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_7104f5cea8;
    puVar3 = puVar1 + 0xd;
    *puVar3 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar1 + 0xe) = 1;
    *(undefined1 *)((long)puVar1 + 0x74) = 0;
    *puVar3 = &PTR_FUN_7104f56018;
    uVar2 = FUN_71001cf750();
    FUN_71001cf760((long)puVar3,uVar2,0);
    *puVar1 = &PTR_FUN_7104f5cff8;
    puVar1[0x14] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar1 + 0x15) = 0;
    puVar1[0x17] = puVar1 + 0x15;
    puVar1[0x18] = 0x10;
    FUN_71001b47e0((long)(puVar1 + 0x14),"DynamicGathering",-1);
  }
  return puVar1;
// ... (2 more lines)
```

## 25. `FUN_71001054b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001054b0`  (offset `0x1054b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001054b0(void)`
- **Size / BBs / Incoming:** 424 bytes / 16 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitNotification
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710013dac0;FUN_7100146ba0;FUN_7100149240;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001054b0__71001054b0.c)  [cfg](../decompiled/FUN_71001054b0__71001054b0.mmd)
- **Clone hash:** `97bdff533222fedd`

```c

undefined8 FUN_71001054b0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  int aiStack_40 [4];
  int aiStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    aiStack_28[0] = 0;
    uVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))(*(long **)(param_1 + 0xa0),aiStack_28)
    ;
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) != 2) {
      if (*(int *)(param_1 + 0x60) != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
// ... (33 more lines)
```

## 26. `FUN_710024ab30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024ab30`  (offset `0x24ab30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710024ab30(undefined8 * param_1)`
- **Size / BBs / Incoming:** 1024 bytes / 30 bb / 1 incoming refs
- **Match values:** Gathering
- **Strings touched:** SDK MW+Nintendo+NEX_MM-4_6_13;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;DynamicGathering
- **Callers:** FUN_710024dff0
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b3cb0;FUN_71001b47e0;FUN_71001cf750;FUN_71001cf760;FUN_7100234fb0;FUN_710024b170;FUN_710024d010;FUN_710024d230;FUN_710024d4f0;FUN_710024da60;FUN_710024db10;FUN_7101717960;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_710024ab30__710024ab30.c)  [cfg](../decompiled/FUN_710024ab30__710024ab30.mmd)
- **Clone hash:** `95aa837e102d4307`

```c

void FUN_710024ab30(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  FUN_7100234fb0(param_1,0xc);
  *param_1 = &PTR_FUN_7104f5cb88;
  FUN_710024d230(param_1 + 4,0x15);
  FUN_710024d4f0(param_1 + 0x16,0x32);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_MM-4_6_13");
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024abd8:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710024ac0c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710024abd8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710024abd8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710024ac0c:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
// ... (102 more lines)
```

## 27. `FUN_710024cc10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024cc10`  (offset `0x24cc10`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_710024cc10(undefined8 param_1, long param_2)`
- **Size / BBs / Incoming:** 20 bytes / 1 bb / 4 incoming refs
- **Match values:** Gathering
- **Strings touched:** Gathering
- **Callers:** FUN_7100255690;FUN_7100256ac0
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024cc10__710024cc10.c)  [cfg](../decompiled/FUN_710024cc10__710024cc10.mmd)
- **Clone hash:** `7317121bfcc0978a`

```c

bool FUN_710024cc10(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"Gathering");
  return bVar1;
}


```

## 28. `FUN_7100120700`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120700`  (offset `0x120700`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120700(void)`
- **Size / BBs / Incoming:** 324 bytes / 5 bb / 2 incoming refs
- **Match values:** Gathering
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitUnregisterGathering
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120700__7100120700.c)  [cfg](../decompiled/FUN_7100120700__7100120700.mmd)
- **Clone hash:** `002ed3de86477b88`

```c

undefined8 FUN_7100120700(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_38);
    param_1[6] = (long)FUN_71001429b0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
    return 0;
  }
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar2 + 0x70))
            (aiStack_38,plVar2,param_1 + 0x22,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (aiStack_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_48,(int *)((long)param_1 + 0x6c));
    FUN_71000b41f0(puVar3,aiStack_48);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  param_1[8] = (long)"LanMatchRandomMatchmakeJob::WaitUnregisterGathering";
  param_1[6] = (long)FUN_71001211d0;
// ... (4 more lines)
```

