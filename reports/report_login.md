# login (funcs=4, hits=12)

Top 50 functions by hit count

## 1. `FUN_7100023e70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023e70`  (offset `0x23e70`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100023e70(byte * param_1, long * param_2, long * param_3, long param_4)`
- **Size / BBs / Incoming:** 1132 bytes / 74 bb / 1 incoming refs
- **Match values:** login
- **Strings touched:** password;machine;login;chara/chara_4/chara_4_;default;%s%s%s;.netrc
- **Callers:** FUN_710001f340
- **Callees:** FUN_7100007fd0;FUN_7100017280;FUN_71000176a0;FUN_71000242e0;FUN_71000272a0;FUN_71000272c0;FUN_7100027950;FUN_7100027980;FUN_7100027a10
- **Files:** [decomp](../decompiled/FUN_7100023e70__7100023e70.c)  [cfg](../decompiled/FUN_7100023e70__7100023e70.mmd)
- **Clone hash:** `21b431dca335f7f5`

```c

/* WARNING: Removing unreachable block (ram,0x007100024214) */

undefined4 FUN_7100023e70(byte *param_1,long *param_2,long *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  byte abStack_170 [256];
  long alStack_70 [2];
  
  if ((char *)*param_2 == (char *)0x0) {
    bVar2 = false;
    if (param_4 != 0) goto LAB_7100023eb4;
LAB_7100024238:
    lVar6 = FUN_71000242e0("HOME");
    if (lVar6 == 0) {
      return 1;
    }
    lVar6 = FUN_7100007fd0((byte *)"%s%s%s");
    FUN_71000272a0();
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    lVar6 = FUN_7100027980();
    FUN_71000272a0();
  }
  else {
    bVar2 = *(char *)*param_2 != '\0';
    if (param_4 == 0) goto LAB_7100024238;
LAB_7100023eb4:
// ... (183 more lines)
```

## 2. `FUN_71016814f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71016814f0`  (offset `0x16814f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71016814f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 968 bytes / 59 bb / 1 incoming refs
- **Match values:** Login
- **Strings touched:** NODE_PRE_REFRACT_BLEND;Login
- **Callees:** FUN_71002aae60;FUN_710392e290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::abort;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_71016814f0__71016814f0.c)  [cfg](../decompiled/FUN_71016814f0__71016814f0.mmd)
- **Clone hash:** `9ecab4e807fec0d6`

```c

void FUN_71016814f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long ****pppplVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long ***local_50;
  undefined4 local_44;
  
  lVar8 = DAT_710533a0a0;
  pppplVar4 = &local_50;
  if (*(int *)(param_1 + 0x21c) != 0) {
    return;
  }
  if ((((*(long **)(DAT_710533a0a0 + 0x30) != (long *)0x0) &&
       (lVar5 = **(long **)(DAT_710533a0a0 + 0x30), lVar5 != 0)) &&
      (lVar5 = *(long *)(lVar5 + 0x48), lVar5 != 0)) && (*(char *)(lVar5 + 0x98) == '\x02')) {
    if (0 < *(int *)(param_1 + 0x214)) {
      *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + -1;
    }
    lVar5 = *DAT_710593b580;
    iVar9 = *(int *)(lVar5 + 0x7300);
    if (iVar9 == -1) {
      lVar5 = lVar5 + 0x10;
      plVar6 = *(long **)(lVar8 + 0x30);
joined_r0x007101681870:
      if (((plVar6 != (long *)0x0) && (*plVar6 != 0)) &&
         ((lVar8 = *(long *)(*plVar6 + 0x48), lVar8 != 0 &&
          (lVar8 = **(long **)(lVar8 + 0x70), lVar8 != 0)))) {
        FUN_71002aae60(lVar8,lVar5);
      }
// ... (139 more lines)
```

## 3. `FUN_71004206a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004206a0`  (offset `0x4206a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004206a0(void)`
- **Size / BBs / Incoming:** 1328 bytes / 52 bb / 1 incoming refs
- **Match values:** Login
- **Strings touched:** AmiiboReadFigureScene;AmiiboSelectColorScene;AmiiboEditScene;AmiiboWriteFigureScene;AmiiboTransitionEditScene;CharaMakeSequenceScene;IngameCallSequenceScene;SpiritsForceReturnScene;AmiiboStartJourneyScene;AmiiboPseudoSleepScene;set_assist_team_no;AmiiboReturnJourneyScene;AmiiboResultListScene;AmiiboResultDetailScene;AmiiboJourneyReplayScene;MeleeReplaySequenceScene;PrizeListScene;LoginScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004206a0__71004206a0.c)  [cfg](../decompiled/FUN_71004206a0__71004206a0.mmd)
- **Clone hash:** `767ea7d4ffe1a8d0`

```c

void FUN_71004206a0(void)

{
  int iVar1;
  
  DAT_7105328188 = 0;
  DAT_7105328190 = "AmiiboReadFigureScene";
  if (((DAT_71053282b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b0);
  }
  DAT_7105328198 = &PTR_PTR_71050b63b8;
  DAT_71053281a0 = "AmiiboSelectColorScene";
  if (((DAT_71053282b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b8);
  }
  DAT_71053281a8 = &PTR_PTR_71050b63c0;
  DAT_71053281b0 = "AmiiboEditScene";
  if (((DAT_71053282c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c0);
  }
  DAT_71053281b8 = &PTR_PTR_71050b63c8;
  DAT_71053281c0 = "AmiiboWriteFigureScene";
  if (((DAT_71053282c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c8);
  }
  DAT_71053281c8 = &PTR_PTR_71050b63d0;
  DAT_71053281d0 = "AmiiboTransitionEditScene";
  if (((DAT_71053282d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d0);
  }
  DAT_71053281d8 = &PTR_PTR_71050b63d8;
  DAT_71053281e0 = "CharaMakeSequenceScene";
  if (((DAT_7105328078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328078), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328078);
  }
  DAT_71053281e8 = &PTR_PTR_71050b59a8;
  DAT_71053281f0 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (57 more lines)
```

## 4. `FUN_7100246440`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100246440`  (offset `0x246440`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100246440(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Login
- **Strings touched:** RendezVousLogin
- **Files:** [decomp](../decompiled/FUN_7100246440__7100246440.c)  [cfg](../decompiled/FUN_7100246440__7100246440.mmd)
- **Clone hash:** `58831deafa9e80cc`

```c

char * FUN_7100246440(void)

{
  return "RendezVousLogin";
}


```

