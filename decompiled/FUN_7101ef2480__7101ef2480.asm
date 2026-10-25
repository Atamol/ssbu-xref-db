// addr:      7101ef2480
// offset:    0x1ef2480
// name:      FUN_7101ef2480
// mangled:   
// size:      416

7101ef2480  sub sp,sp,#0x70
7101ef2484  str d8,[sp, #0x40]
7101ef2488  stp x20,x19,[sp, #0x50]
7101ef248c  stp x29,x30,[sp, #0x60]
7101ef2490  add x29,sp,#0x60
7101ef2494  ldr w8,[x0, #0x24c]
7101ef2498  mov x19,x0
7101ef249c  cbz w8,0x7101ef24dc
7101ef24a0  ldr x8,[x19, #0x270]
7101ef24a4  ldr x9,[x19, #0x278]
7101ef24a8  ldr x8,[x8, #0x8]
7101ef24ac  ldr x9,[x9, #0x8]
7101ef24b0  ldr w8,[x8, #0x1f8]
7101ef24b4  ldr w9,[x9, #0x1f8]
7101ef24b8  orr w8,w8,w9
7101ef24bc  cbnz w8,0x7101ef2608
7101ef24c0  ldrsw x8,[x19, #0x244]
7101ef24c4  cmp w8,#0x13
7101ef24c8  b.cs 0x7101ef261c
7101ef24cc  add x8,x19,x8, LSL #0x2
7101ef24d0  mov w9,#0x5
7101ef24d4  str w9,[x8, #0x1f8]
7101ef24d8  b 0x7101ef2608
7101ef24dc  adrp x8,0x710532f000
7101ef24e0  ldr x8,[x8, #0x8d0]
7101ef24e4  ldr x0,[x8, #0x8]
7101ef24e8  ldrb w8,[x0, #0x191]
7101ef24ec  cbnz w8,0x7101ef256c
7101ef24f0  mov x20,#0x38de
7101ef24f4  movk x20,#0xfdac, LSL #16
7101ef24f8  movk x20,#0x15, LSL #32
7101ef24fc  mov w2,#0x4
7101ef2500  mov x1,x20
7101ef2504  bl 0x7103313f20
7101ef2508  tbz w0,#0x0,0x7101ef256c
7101ef250c  mov x0,sp
7101ef2510  mov x1,x20
7101ef2514  bl 0x71024076d0
7101ef2518  ldr x8,[sp, #0x10]
7101ef251c  adrp x9,0x7104f73000
7101ef2520  add x9,x9,#0xd50
7101ef2524  str x9,[sp, #0x8]
7101ef2528  cbz x8,0x7101ef2598
7101ef252c  adrp x8,0x7106dd5000
7101ef2530  ldrb w8,[x8, #0x3a8]
7101ef2534  cmp w8,#0x1
7101ef2538  b.ne 0x7101ef2598
7101ef253c  adrp x9,0x7106dd5000
7101ef2540  ldr w8,[sp, #0x18]
7101ef2544  ldr w9,[x9, #0x3ac]
7101ef2548  cmp w8,w9
7101ef254c  b.ne 0x7101ef2598
7101ef2550  ldr x8,[sp, #0x10]
7101ef2554  ldr wzr,[x8, #0x38]!
7101ef2558  ldaxr w9,[x8]
7101ef255c  sub w9,w9,#0x1
7101ef2560  stlxr w10,w9,[x8]
7101ef2564  cbnz w10,0x7101ef2558
7101ef2568  b 0x7101ef2598
7101ef256c  mov x8,#0x650000000000
7101ef2570  movk x8,#0x87, LSL #48
7101ef2574  strb wzr,[sp, #0x20]
7101ef2578  stp xzr,x8,[sp, #0x10]
7101ef257c  mov x8,#-0x1
7101ef2580  stp x8,xzr,[sp, #0x28]
7101ef2584  adrp x8,0x7104f73000
7101ef2588  add x8,x8,#0xd50
7101ef258c  str wzr,[sp]
7101ef2590  str xzr,[sp, #0x38]
7101ef2594  str x8,[sp, #0x8]
7101ef2598  str xzr,[sp, #0x10]
7101ef259c  strb wzr,[sp, #0x20]
7101ef25a0  ldr x8,[x19, #0x270]
7101ef25a4  ldr x1,[x19, #0x8]
7101ef25a8  ldr x0,[x8, #0x8]
7101ef25ac  bl 0x7101f03200
7101ef25b0  ldr x8,[x19, #0x278]
7101ef25b4  ldr x1,[x19, #0x8]
7101ef25b8  ldr x0,[x8, #0x8]
7101ef25bc  bl 0x7101f03200
7101ef25c0  fmov s8,0x3f800000
7101ef25c4  ldr x0,[x19, #0x260]
7101ef25c8  adrp x1,0x71042b4000
7101ef25cc  add x1,x1,#0xbf1
7101ef25d0  mov v0.16B,v8.16B
7101ef25d4  bl 0x7103778300
7101ef25d8  adrp x8,0x7105328000
7101ef25dc  ldr x8,[x8, #0xe18]
7101ef25e0  ldr x8,[x8]
7101ef25e4  ldr x8,[x8]
7101ef25e8  ldr x8,[x8, #0x80]
7101ef25ec  ldr x8,[x8]
7101ef25f0  ldr x8,[x8]
7101ef25f4  ldr x0,[x8, #0x10]
7101ef25f8  mov v0.16B,v8.16B
7101ef25fc  adrp x1,0x710433a000
7101ef2600  add x1,x1,#0x9e6
7101ef2604  bl 0x7103778300
7101ef2608  ldr d8,[sp, #0x40]
7101ef260c  ldp x29,x30,[sp, #0x60]
7101ef2610  ldp x20,x19,[sp, #0x50]
7101ef2614  add sp,sp,#0x70
7101ef2618  ret
7101ef261c  bl 0x71039c2650
