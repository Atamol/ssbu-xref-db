# socket (funcs=10, hits=62)

Top 50 functions by hit count

## 1. `FUN_7100224e50`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100224e50`  (offset `0x224e50`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_7100224e50(long param_1, char * param_2, ulong param_3, long param_4, long param_5)`
- **Size / BBs / Incoming:** 380 bytes / 8 bb / 1 incoming refs
- **Match values:** socket;Socket
- **Strings touched:** GET %s HTTP/1.1
Host: %s
Upgrade: websocket
Connection: upgrade
Sec-WebSocket-Key: %s
Sec-WebSocket-Version: 13
Sec-WebSocket-Protocol: %s


- **Callers:** FUN_7100224a60
- **Callees:** FUN_71001b5de0;FUN_71001dc540;<EXTERNAL>::memset;<EXTERNAL>::snprintf
- **Files:** [decomp](../decompiled/FUN_7100224e50__7100224e50.c)  [cfg](../decompiled/FUN_7100224e50__7100224e50.mmd)
- **Clone hash:** `a36de598c9c6d733`

```c

bool FUN_7100224e50(long param_1,char *param_2,ulong param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  char *local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  char *local_958;
  char local_950 [1279];
  undefined1 local_451;
  char acStack_450 [1024];
  
  if (param_3 < 0x400) {
    return false;
  }
  memset(acStack_450,0,0x400);
  memset(local_950 + 0x100,0,0x400);
  local_950[0xf0] = '\0';
  local_950[0xf1] = '\0';
  local_950[0xf2] = '\0';
  local_950[0xf3] = '\0';
  local_950[0xf4] = '\0';
  local_950[0xf5] = '\0';
  local_950[0xf6] = '\0';
  local_950[0xf7] = '\0';
  local_950[0xf8] = '\0';
  local_950[0xf9] = '\0';
  local_950[0xfa] = '\0';
  local_950[0xfb] = '\0';
  local_950[0xfc] = '\0';
  local_950[0xfd] = '\0';
  local_950[0xfe] = '\0';
// ... (267 more lines)
```

## 2. `FUN_7100224fd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100224fd0`  (offset `0x224fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100224fd0(long param_1, char * param_2, long param_3, char * param_4, long param_5, ulong * param_6)`
- **Size / BBs / Incoming:** 1436 bytes / 86 bb / 1 incoming refs
- **Match values:** socket
- **Strings touched:** dys_yoga03_l_03_set;HTTP/;Location:;Upgrade: websocket;Connection: Upgrade;Sec-Websocket-Accept:;58EAFA5-E914-47DA-95CA-C5AB0DC85B11
- **Callers:** FUN_7100224b50
- **Callees:** FUN_71001b5850;FUN_71001b5de0;<EXTERNAL>::nn::crypto::GenerateSha1Hash;FUN_7100225dd0;<EXTERNAL>::strcmp;<EXTERNAL>::strlen;<EXTERNAL>::strchr;<EXTERNAL>::strncmp;<EXTERNAL>::memset;<EXTERNAL>::strncpy;<EXTERNAL>::strnlen;<EXTERNAL>::atoi
- **Files:** [decomp](../decompiled/FUN_7100224fd0__7100224fd0.c)  [cfg](../decompiled/FUN_7100224fd0__7100224fd0.mmd)
- **Clone hash:** `b1850dbc233dbade`

```c

/* WARNING: Removing unreachable block (ram,0x0071002253f0) */

undefined8
FUN_7100224fd0(long param_1,char *param_2,long param_3,char *param_4,long param_5,ulong *param_6)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char cVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  char local_148 [32];
  char local_128 [32];
  ulong uStack_108;
  byte local_100 [24];
  char acStack_e8 [64];
  char local_a8 [72];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  memset((char *)(param_1 + 0x34),0,0x400);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar11 = *param_2;
  if (cVar11 == '\0') {
    return 0;
  }
  lVar5 = 0;
  do {
// ... (347 more lines)
```

## 3. `FUN_71001c8bd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001c8bd0`  (offset `0x1c8bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001c8bd0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Socket
- **Strings touched:** SocketDriver::Socket
- **Files:** [decomp](../decompiled/FUN_71001c8bd0__71001c8bd0.c)  [cfg](../decompiled/FUN_71001c8bd0__71001c8bd0.mmd)
- **Clone hash:** `f2c7fb36e11eb75b`

```c

char * FUN_71001c8bd0(void)

{
  return "SocketDriver::Socket";
}


```

## 4. `FUN_71001c89f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001c89f0`  (offset `0x1c89f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001c89f0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Socket
- **Strings touched:** BerkeleySocketDriver::BerkeleySocket
- **Files:** [decomp](../decompiled/FUN_71001c89f0__71001c89f0.c)  [cfg](../decompiled/FUN_71001c89f0__71001c89f0.mmd)
- **Clone hash:** `081b1e3a7afd3b3e`

```c

char * FUN_71001c89f0(void)

{
  return "BerkeleySocketDriver::BerkeleySocket";
}


```

## 5. `FUN_71001c8b50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001c8b50`  (offset `0x1c8b50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001c8b50(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Socket
- **Strings touched:** ClientWebSocketDriver::ClientWebSocket
- **Files:** [decomp](../decompiled/FUN_71001c8b50__71001c8b50.c)  [cfg](../decompiled/FUN_71001c8b50__71001c8b50.mmd)
- **Clone hash:** `f263121e8782d6d7`

```c

char * FUN_71001c8b50(void)

{
  return "ClientWebSocketDriver::ClientWebSocket";
}


```

## 6. `FUN_71001f9c80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f9c80`  (offset `0x1f9c80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f9c80(long param_1)`
- **Size / BBs / Incoming:** 804 bytes / 49 bb / 1 incoming refs
- **Match values:** Socket
- **Strings touched:** SocketTransport::TransportJob;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001f9c20
- **Callees:** FUN_71001af850;FUN_71001af8a0;FUN_71001b1300;FUN_71001b47e0;FUN_71001b4910;FUN_71001cd210;FUN_71001da260;FUN_71001f61e0;FUN_71001fe990;FUN_71001feb20;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001f9c80__71001f9c80.c)  [cfg](../decompiled/FUN_71001f9c80__71001f9c80.mmd)
- **Clone hash:** `3ef1b09d4ae3b4d9`

```c

/* WARNING: Removing unreachable block (ram,0x0071001f9efc) */
/* WARNING: Removing unreachable block (ram,0x0071001f9ee8) */

void FUN_71001f9c80(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x2b8) != 0) goto joined_r0x0071001f9e7c;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto joined_r0x0071001f9e7c;
      }
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x10) == 0)) goto joined_r0x0071001f9e7c;
  puVar8 = FUN_71001af850(0x70);
  if (puVar8 == (undefined8 *)0x0) {
// ... (95 more lines)
```

## 7. `FUN_7100000df0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100000df0`  (offset `0xdf0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100000df0(long param_1, void * param_2, ulong param_3, size_t * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 172 bytes / 10 bb / 2 incoming refs
- **Match values:** socket
- **Strings touched:** CONNECT_ONLY is required!;Failed to get recent socket
- **Callers:** FUN_7100223aa0;FUN_7100224b50
- **Callees:** FUN_7100004150;FUN_7100016040;FUN_71000169e0
- **Files:** [decomp](../decompiled/FUN_7100000df0__7100000df0.c)  [cfg](../decompiled/FUN_7100000df0__7100000df0.mmd)
- **Clone hash:** `18ccbfaf1101010e`

```c

int FUN_7100000df0(long param_1,void *param_2,ulong param_3,size_t *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  size_t *psVar4;
  long *local_40;
  size_t local_38;
  
  if (param_1 == 0) {
    iVar1 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x6e1) == '\0') {
      pcVar2 = "CONNECT_ONLY is required!";
    }
    else {
      uVar3 = param_3;
      psVar4 = param_4;
      iVar1 = FUN_7100004150(param_1,(long *)&local_40);
      if (iVar1 != -1) {
        *param_4 = 0;
        iVar1 = FUN_71000169e0(local_40,iVar1,param_2,param_3,&local_38);
        if (iVar1 != 0) {
          return iVar1;
        }
        *param_4 = local_38;
        return 0;
      }
      pcVar2 = "Failed to get recent socket";
      param_3 = uVar3;
      param_4 = psVar4;
    }
    FUN_7100016040(param_1,(byte *)pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar1 = 1;
  }
  return iVar1;
// ... (2 more lines)
```

## 8. `FUN_71001bdb60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001bdb60`  (offset `0x1bdb60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001bdb60(void)`
- **Size / BBs / Incoming:** 400 bytes / 14 bb / 1 incoming refs
- **Match values:** Socket
- **Strings touched:** BerkeleySocketDriver Connect Thread
- **Callees:** FUN_71001af850;FUN_71001b2360;FUN_71001b27e0;FUN_71001b47e0;FUN_71001b4910;<EXTERNAL>::memset;<EXTERNAL>::nn::socket::GetLastErrno;<EXTERNAL>::nn::socket::InetHtonl;<EXTERNAL>::nn::socket::InetHtons;<EXTERNAL>::nn::socket::Connect
- **Files:** [decomp](../decompiled/FUN_71001bdb60__71001bdb60.c)  [cfg](../decompiled/FUN_71001bdb60__71001bdb60.mmd)
- **Clone hash:** `7f81c128e2fcf02a`

```c

undefined4 FUN_71001bdb60(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  sockaddr sStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  memset(&sStack_40,0,0x10);
  uStack_3f = 2;
  uStack_3c = nn::socket::InetHtonl(*param_2);
  uStack_3e = nn::socket::InetHtons((ushort)param_2[2]);
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(ulong *)(param_1 + 0x18) =
         CONCAT44(uStack_3c,CONCAT22(uStack_3e,CONCAT11(uStack_3f,sStack_40)));
    *(undefined8 *)(param_1 + 0x20) = uStack_38;
    puVar2 = FUN_71001af850(0x78);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      auStack_60[0] = 0;
      puStack_50 = auStack_60;
      uStack_48 = 0x10;
      ppuStack_68 = &PTR_FUN_710509cc08;
      FUN_71001b47e0((long)&ppuStack_68,"BerkeleySocketDriver Connect Thread",-1);
      FUN_71001b2360(puVar2,(long)&ppuStack_68,DAT_7104f555d8);
// ... (38 more lines)
```

## 9. `FUN_7100000ea0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100000ea0`  (offset `0xea0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100000ea0(long param_1, undefined8 param_2, undefined8 param_3, long * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 204 bytes / 14 bb / 3 incoming refs
- **Match values:** socket
- **Strings touched:** CONNECT_ONLY is required!;Failed to get recent socket
- **Callers:** FUN_7100223d90;FUN_7100224a60
- **Callees:** FUN_7100004150;FUN_7100016040;FUN_7100016180
- **Files:** [decomp](../decompiled/FUN_7100000ea0__7100000ea0.c)  [cfg](../decompiled/FUN_7100000ea0__7100000ea0.mmd)
- **Clone hash:** `38a190b1485aa81b`

```c

int FUN_7100000ea0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_40;
  long local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    iVar1 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x6e1) == '\0') {
      pcVar2 = "CONNECT_ONLY is required!";
    }
    else {
      uVar3 = param_3;
      plVar4 = param_4;
      iVar1 = FUN_7100004150(param_1,&local_40);
      if (iVar1 != -1) {
        *param_4 = 0;
        iVar1 = FUN_7100016180(local_40,iVar1,param_2,param_3,&local_38);
        if (local_38 == -1) {
          return 0x37;
        }
        if ((iVar1 == 0) && (local_38 == 0)) {
          return 0x51;
        }
        *param_4 = local_38;
        return iVar1;
      }
      pcVar2 = "Failed to get recent socket";
      param_3 = uVar3;
      param_4 = plVar4;
    }
// ... (6 more lines)
```

## 10. `FUN_7100224030`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100224030`  (offset `0x224030`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100224030(int * param_1, long param_2, long param_3, undefined8 param_4, byte * param_5, undefined1 * param_6, char * param_7, long param_8)`
- **Size / BBs / Incoming:** 1088 bytes / 27 bb / 1 incoming refs
- **Match values:** Socket
- **Strings touched:** select_item;ws://;wss://;https;WebSocketClient Connect Thread
- **Callers:** FUN_71001be440
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001b2360;FUN_71001b27e0;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001b53d0;FUN_71001b56d0;FUN_71001de2c0;FUN_71001de8c0;FUN_71001de950;FUN_71001dec00;FUN_71001dec30;FUN_71002239e0;...
- **Files:** [decomp](../decompiled/FUN_7100224030__7100224030.c)  [cfg](../decompiled/FUN_7100224030__7100224030.mmd)
- **Clone hash:** `ec72bd2fd28ebff7`

```c

undefined4
FUN_7100224030(int *param_1,long param_2,long param_3,long param_4,byte *param_5,undefined1 *param_6
              ,char *param_7,long param_8)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 extraout_x1;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined **local_1c8;
  char local_1c0 [16];
  char *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  
  plVar13 = (long *)(param_1 + 0x3a);
  iVar1 = (int)param_4;
  lVar9 = param_3;
  pbVar10 = param_5;
  (**(code **)(*plVar13 + 0x10))(plVar13);
  if (*param_1 == 3) {
// ... (161 more lines)
```

