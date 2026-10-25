# gamemode (funcs=3, hits=3)

Top 50 functions by hit count

## 1. `FUN_710168c4d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710168c4d0`  (offset `0x168c4d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710168c4d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1572 bytes / 55 bb / 1 incoming refs
- **Match values:** gamemode
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

## 2. `FUN_71002a4c60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a4c60`  (offset `0x2a4c60`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71002a4c60(long param_1, long param_2)`
- **Size / BBs / Incoming:** 3308 bytes / 147 bb / 1 incoming refs
- **Match values:** gameMode
- **Strings touched:** requestId;parameter;sessionId;gameModeId;channel;createIfNotExist
- **Callers:** FUN_71002a4430
- **Callees:** FUN_71001b1870;FUN_71001b3160;FUN_71001b34a0;FUN_71001b3cb0;FUN_71001b9950;FUN_71001b9fe0;FUN_71002ac3d0;FUN_71002ad5d0;FUN_71002ad6c0
- **Files:** [decomp](../decompiled/FUN_71002a4c60__71002a4c60.c)  [cfg](../decompiled/FUN_71002a4c60__71002a4c60.mmd)
- **Clone hash:** `6e92371a83dc4fd9`

```c

undefined8 FUN_71002a4c60(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  long *local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [4];
  char acStack_64 [20];
  
  local_78 = 0;
  uStack_70 = 0x100;
  local_d8 = &local_98;
  local_d0 = auStack_68;
// ... (584 more lines)
```

## 3. `FUN_7101747490`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101747490`  (offset `0x1747490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101747490(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 816 bytes / 18 bb / 4 incoming refs
- **Match values:** gamemode
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

