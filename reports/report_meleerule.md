# meleerule (funcs=12, hits=12)

Top 50 functions by hit count

## 1. `FUN_7102366d30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102366d30`  (offset `0x2366d30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7102366d30(long param_1, uint * param_2)`
- **Size / BBs / Incoming:** 708 bytes / 39 bb / 2 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** OptionTopScene;OptionButtonScene;OptionLanguageScene;OptionOnlineScene;OptionVideoScene;OptionSoundScene;SoundTestScene;StageSelectScene;OptionMeleeScene;MeleeRuleScene;CharaSelectScene
- **Callers:** FUN_7102367240;online_melee_event_handler
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_7102366d30__7102366d30.c)  [cfg](../decompiled/FUN_7102366d30__7102366d30.mmd)
- **Clone hash:** `c1b33daacc43b0c1`

```c

undefined8 FUN_7102366d30(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *__s1;
  undefined4 uVar3;
  char *pcVar4;
  
  __s1 = param_2 + 2;
  uVar1 = *param_2;
  if (uVar1 < 0x4d1b6eab) {
    return 0;
  }
  if (uVar1 == 0xe6c44dfe) {
    iVar2 = strcmp((char *)__s1,"OptionButtonScene");
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    uVar3 = 4;
    goto LAB_7102366de0;
  }
  if (uVar1 == 0x4d1b6eab) {
    iVar2 = strcmp((char *)__s1,"OptionTopScene");
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    uVar3 = 3;
    goto LAB_7102366de0;
// ... (116 more lines)
```

## 2. `FUN_7102336c90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102336c90`  (offset `0x2336c90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102336c90(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1692 bytes / 73 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** AmiiboSequenceScene;MenuSequenceScene;MeleeRuleScene;SpecialVariousScene;StageSelectScene;CharaSelectScene
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710178c070;FUN_710323b9e0;FUN_7103723a90;FUN_7103723e70;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102336c90__7102336c90.c)  [cfg](../decompiled/FUN_7102336c90__7102336c90.mmd)
- **Clone hash:** `a4a3e470bd994e21`

```c

void FUN_7102336c90(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long ********local_68;
  undefined4 local_54;
  
  plVar3 = (long *)FUN_710392e290(0x10,0x140,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ********)&DAT_00000140;
      param_3 = (undefined **)&local_68;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x140,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar3 != (long *)0x0))
      goto LAB_7102336d18;
    }
    plVar3 = (long *)0x0;
  }
LAB_7102336d18:
  *plVar3 = param_1 + 0x50;
  plVar3[1] = (long)plVar3;
  *(undefined4 *)(plVar3 + 0x25) = 0xffffffff;
  plVar3[2] = 0;
  plVar3[3] = 0;
// ... (226 more lines)
```

## 3. `FUN_7100422490`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422490`  (offset `0x422490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422490(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** CharaSelectScene;StageSelectScene;MeleeRuleScene;SpecialVariousScene;IngameCallSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422490__7100422490.c)  [cfg](../decompiled/FUN_7100422490__7100422490.mmd)
- **Clone hash:** `c72751112cd7b9ec`

```c

void FUN_7100422490(void)

{
  int iVar1;
  
  DAT_7105328ac8 = 0;
  DAT_7105328ad0 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328ad8 = &PTR_PTR_71050b6960;
  DAT_7105328ae0 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328ae8 = &PTR_PTR_71050b7478;
  DAT_7105328af0 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328af8 = &PTR_PTR_71050a42c0;
  DAT_7105328b00 = "SpecialVariousScene";
  if (((DAT_7105328a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a20), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a20);
  }
  DAT_7105328b08 = &PTR_PTR_71050b7d20;
  DAT_7105328b10 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328b18 = &PTR_PTR_7104f76410;
  DAT_7105328b20 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328b30 = 0;
  DAT_7105328b38 = 0;
  DAT_7105328b28 = &PTR_PTR_71050b5930;
  return;
// ... (2 more lines)
```

## 4. `FUN_7100422250`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422250`  (offset `0x422250`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422250(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** CharaSelectScene;StageSelectScene;MeleeRuleScene;IngameCallSequenceScene;UnlockSequenceScene;MeleeAllBattleResultScene;MeleeAllBattleTieGameScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422250__7100422250.c)  [cfg](../decompiled/FUN_7100422250__7100422250.mmd)
- **Clone hash:** `c11adab06107116f`

```c

void FUN_7100422250(void)

{
  int iVar1;
  
  DAT_7105328a30 = 0;
  DAT_7105328a38 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328a40 = &PTR_PTR_71050b6960;
  DAT_7105328a48 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328a50 = &PTR_PTR_71050b7478;
  DAT_7105328a58 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328a60 = &PTR_PTR_71050a42c0;
  DAT_7105328a68 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328a70 = &PTR_PTR_7104f76410;
  DAT_7105328a78 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328a80 = &PTR_PTR_71050b5930;
  DAT_7105328a88 = "MeleeAllBattleResultScene";
  if (((DAT_7105328ab8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328ab8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328ab8);
  }
  DAT_7105328a90 = &PTR_PTR_71050b7f10;
  DAT_7105328a98 = "MeleeAllBattleTieGameScene";
  if (((DAT_7105328ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328ac0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328ac0);
// ... (7 more lines)
```

## 5. `FUN_7100425fe0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425fe0`  (offset `0x425fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425fe0(void)`
- **Size / BBs / Incoming:** 720 bytes / 28 bb / 0 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** OnlineMeleeRoomTopScene;OnlineMeleeRoomScene;MeleeRuleScene;SoundTestScene;StageSelectScene;CharaSelectScene;IngameCallSequenceScene;UnlockSequenceScene;OnlineMeleeRoomChangeRuleScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100425fe0__7100425fe0.c)  [cfg](../decompiled/FUN_7100425fe0__7100425fe0.mmd)
- **Clone hash:** `9ecb72819a94ee11`

```c

void FUN_7100425fe0(void)

{
  int iVar1;
  
  DAT_7105329420 = 0;
  DAT_7105329428 = "OnlineMeleeRoomTopScene";
  if (((DAT_71053294c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053294c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053294c8);
  }
  DAT_7105329430 = &PTR_PTR_71050b9248;
  DAT_7105329438 = "OnlineMeleeRoomScene";
  if (((DAT_71053294d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053294d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053294d0);
  }
  DAT_7105329440 = &PTR_PTR_71050b9250;
  DAT_7105329448 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105329450 = &PTR_PTR_71050a42c0;
  DAT_7105329458 = "SoundTestScene";
  if (((DAT_7105329310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329310);
  }
  DAT_7105329460 = &PTR_PTR_71050b8db8;
  DAT_7105329468 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105329470 = &PTR_PTR_71050b7478;
  DAT_7105329478 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329480 = &PTR_PTR_71050b6960;
  DAT_7105329488 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (17 more lines)
```

## 6. `FUN_710041dd90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041dd90`  (offset `0x41dd90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041dd90(void)`
- **Size / BBs / Incoming:** 112 bytes / 4 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** MeleeRuleScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_710041dd90__710041dd90.c)  [cfg](../decompiled/FUN_710041dd90__710041dd90.mmd)
- **Clone hash:** `99248db533a50d1d`

```c

void FUN_710041dd90(void)

{
  int iVar1;
  
  DAT_7105324938 = 0;
  DAT_7105324940 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105324950 = 0;
  DAT_7105324958 = 0;
  DAT_7105324948 = &PTR_PTR_71050a42c0;
  return;
}


```

## 7. `FUN_7100421ee0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421ee0`  (offset `0x421ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421ee0(void)`
- **Size / BBs / Incoming:** 872 bytes / 34 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** OptionOnlineScene;LocalTopScene;LocalModeSelectScene;MeleeRuleScene;SpecialVariousScene;SpiritsBoardScene;MeleeNormalSequenceScene;MeleeTeamCompeSequenceScene;SpiritsBoardSequenceScene;KumiteSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100421ee0__7100421ee0.c)  [cfg](../decompiled/FUN_7100421ee0__7100421ee0.mmd)
- **Clone hash:** `024517ae74c314e8`

```c

void FUN_7100421ee0(void)

{
  int iVar1;
  
  DAT_7105328940 = 0;
  DAT_7105328948 = "OptionOnlineScene";
  if (((DAT_7105328a08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a08), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a08);
  }
  DAT_7105328950 = &PTR_PTR_71050b7d08;
  DAT_7105328958 = "LocalTopScene";
  if (((DAT_7105328a10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a10), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a10);
  }
  DAT_7105328960 = &PTR_PTR_71050b7d10;
  DAT_7105328968 = "LocalModeSelectScene";
  if (((DAT_7105328a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a18), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a18);
  }
  DAT_7105328970 = &PTR_PTR_71050b7d18;
  DAT_7105328978 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328980 = &PTR_PTR_71050a42c0;
  DAT_7105328988 = "SpecialVariousScene";
  if (((DAT_7105328a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a20), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a20);
  }
  DAT_7105328990 = &PTR_PTR_71050b7d20;
  DAT_7105328998 = "SpiritsBoardScene";
  if (((DAT_7105328a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a28), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a28);
  }
  DAT_71053289a0 = &PTR_PTR_71050b7d28;
  DAT_71053289a8 = "MeleeNormalSequenceScene";
  if (((DAT_7105328010 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328010), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328010);
// ... (27 more lines)
```

## 8. `FUN_7101868a00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101868a00`  (offset `0x1868a00`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7101868a00(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** MeleeRuleSceneParameter
- **Files:** [decomp](../decompiled/FUN_7101868a00__7101868a00.c)  [cfg](../decompiled/FUN_7101868a00__7101868a00.mmd)
- **Clone hash:** `2668565f4f0cd7f5`

```c

char * FUN_7101868a00(void)

{
  return "MeleeRuleSceneParameter";
}


```

## 9. `FUN_7100422a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422a40`  (offset `0x422a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422a40(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 1 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;MeleeRuleScene;StageSelectScene;TeamCompeMatchupScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422a40__7100422a40.c)  [cfg](../decompiled/FUN_7100422a40__7100422a40.mmd)
- **Clone hash:** `3efb9efa1d2be2e9`

```c

void FUN_7100422a40(void)

{
  int iVar1;
  
  DAT_7105328c78 = 0;
  DAT_7105328c80 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328c88 = &PTR_PTR_71050b6960;
  DAT_7105328c90 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328c98 = &PTR_PTR_7104f76410;
  DAT_7105328ca0 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328ca8 = &PTR_PTR_71050a42c0;
  DAT_7105328cb0 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328cb8 = &PTR_PTR_71050b7478;
  DAT_7105328cc0 = "TeamCompeMatchupScene";
  if (((DAT_7105328b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328b78), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328b78);
  }
  DAT_7105328cc8 = &PTR_PTR_71050b80c0;
  DAT_7105328cd0 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328ce0 = 0;
  DAT_7105328ce8 = 0;
  DAT_7105328cd8 = &PTR_PTR_71050b5930;
  return;
// ... (2 more lines)
```

## 10. `FUN_7100422e70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422e70`  (offset `0x422e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422e70(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 0 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** MeleeVrSetupScene;MeleeVrResetScene;CharaSelectScene;StageSelectScene;MeleeRuleScene;IngameCallSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422e70__7100422e70.c)  [cfg](../decompiled/FUN_7100422e70__7100422e70.mmd)
- **Clone hash:** `1c43e0a448b6e23a`

```c

void FUN_7100422e70(void)

{
  int iVar1;
  
  DAT_7105328d90 = 0;
  DAT_7105328d98 = "MeleeVrSetupScene";
  if (((DAT_7105328e08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328e08), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328e08);
  }
  DAT_7105328da0 = &PTR_PTR_71050b8640;
  DAT_7105328da8 = "MeleeVrResetScene";
  if (((DAT_7105328e10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328e10), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328e10);
  }
  DAT_7105328db0 = &PTR_PTR_71050b8648;
  DAT_7105328db8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328dc0 = &PTR_PTR_71050b6960;
  DAT_7105328dc8 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328dd0 = &PTR_PTR_71050b7478;
  DAT_7105328dd8 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328de0 = &PTR_PTR_71050a42c0;
  DAT_7105328de8 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328df8 = 0;
  DAT_7105328e00 = 0;
  DAT_7105328df0 = &PTR_PTR_7104f76410;
  return;
// ... (2 more lines)
```

## 11. `FUN_71004258f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004258f0`  (offset `0x4258f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004258f0(void)`
- **Size / BBs / Incoming:** 872 bytes / 34 bb / 0 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** OptionTopScene;OptionButtonScene;OptionLanguageScene;OptionMeleeScene;MeleeRuleScene;CharaSelectScene;OptionSoundScene;StageSelectScene;SoundTestScene;OptionOnlineScene;OptionVideoScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004258f0__71004258f0.c)  [cfg](../decompiled/FUN_71004258f0__71004258f0.mmd)
- **Clone hash:** `f5257f3c74946ea4`

```c

void FUN_71004258f0(void)

{
  int iVar1;
  
  DAT_7105329220 = 0;
  DAT_7105329228 = "OptionTopScene";
  if (((DAT_71053292e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292e8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292e8);
  }
  DAT_7105329230 = &PTR_PTR_71050b8d90;
  DAT_7105329238 = "OptionButtonScene";
  if (((DAT_71053292f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292f0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292f0);
  }
  DAT_7105329240 = &PTR_PTR_71050b8d98;
  DAT_7105329248 = "OptionLanguageScene";
  if (((DAT_71053292f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292f8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292f8);
  }
  DAT_7105329250 = &PTR_PTR_71050b8da0;
  DAT_7105329258 = "OptionMeleeScene";
  if (((DAT_7105329300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329300), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329300);
  }
  DAT_7105329260 = &PTR_PTR_71050b8da8;
  DAT_7105329268 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105329270 = &PTR_PTR_71050a42c0;
  DAT_7105329278 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329280 = &PTR_PTR_71050b6960;
  DAT_7105329288 = "OptionSoundScene";
  if (((DAT_7105329308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329308), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329308);
// ... (27 more lines)
```

## 12. `FUN_7100422c30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422c30`  (offset `0x422c30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422c30(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 0 incoming refs
- **Match values:** MeleeRule
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;MeleeRuleScene;StageSelectScene;TournamentTableScene;TournamentTableSettingScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422c30__7100422c30.c)  [cfg](../decompiled/FUN_7100422c30__7100422c30.mmd)
- **Clone hash:** `ff49b551fefc2675`

```c

void FUN_7100422c30(void)

{
  int iVar1;
  
  DAT_7105328cf0 = 0;
  DAT_7105328cf8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328d00 = &PTR_PTR_71050b6960;
  DAT_7105328d08 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328d10 = &PTR_PTR_7104f76410;
  DAT_7105328d18 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328d20 = &PTR_PTR_71050a42c0;
  DAT_7105328d28 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328d30 = &PTR_PTR_71050b7478;
  DAT_7105328d38 = "TournamentTableScene";
  if (((DAT_7105328d78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328d78), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328d78);
  }
  DAT_7105328d40 = &PTR_PTR_71050b84e0;
  DAT_7105328d48 = "TournamentTableSettingScene";
  if (((DAT_7105328d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328d80), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328d80);
  }
  DAT_7105328d50 = &PTR_PTR_71050b84e8;
  DAT_7105328d58 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
// ... (7 more lines)
```

