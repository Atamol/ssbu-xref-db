// addr:      7101ca24d0
// offset:    0x1ca24d0
// name:      FUN_7101ca24d0
// mangled:   
// size:      308

7101ca24d0  sub sp,sp,#0x30
7101ca24d4  str x19,[sp, #0x10]
7101ca24d8  stp x29,x30,[sp, #0x20]
7101ca24dc  add x29,sp,#0x20
7101ca24e0  mov x19,x0
7101ca24e4  cmp w1,#0x1
7101ca24e8  b.eq 0x7101ca2574
7101ca24ec  cbnz w1,0x7101ca25f4
7101ca24f0  adrp x1,0x7104454000
7101ca24f4  add x1,x1,#0xb34
7101ca24f8  mov x0,x19
7101ca24fc  bl 0x7101ca1ee0
7101ca2500  add x0,x19,#0x118
7101ca2504  adrp x1,0x7104338000
7101ca2508  add x1,x1,#0xd31
7101ca250c  mov x8,sp
7101ca2510  bl 0x7103776910
7101ca2514  adrp x1,0x71043cf000
7101ca2518  add x1,x1,#0x550
7101ca251c  mov x0,sp
7101ca2520  bl 0x710377a120
7101ca2524  ldr x0,[sp, #0x8]
7101ca2528  adrp x8,0x710523d000
7101ca252c  add x8,x8,#0x9a8
7101ca2530  stp x8,xzr,[sp]
7101ca2534  cbz x0,0x7101ca253c
7101ca2538  bl 0x710392eb40
7101ca253c  ldr x0,[x19, #0x130]
7101ca2540  ldr x8,[x0]
7101ca2544  ldr x8,[x8, #0x60]
7101ca2548  mov w1,wzr
7101ca254c  blr x8
7101ca2550  ldr x0,[x19, #0x130]
7101ca2554  ldr x8,[x0]
7101ca2558  ldr x8,[x8, #0x70]
7101ca255c  mov w1,wzr
7101ca2560  blr x8
7101ca2564  mov x0,x19
7101ca2568  mov w1,wzr
7101ca256c  bl 0x7101ca10c0
7101ca2570  b 0x7101ca25f4
7101ca2574  adrp x1,0x71042e7000
7101ca2578  add x1,x1,#0x2ce
7101ca257c  mov x0,x19
7101ca2580  bl 0x7101ca1ee0
7101ca2584  add x0,x19,#0x118
7101ca2588  adrp x1,0x7104338000
7101ca258c  add x1,x1,#0xd31
7101ca2590  mov x8,sp
7101ca2594  bl 0x7103776910
7101ca2598  adrp x1,0x710433a000
7101ca259c  add x1,x1,#0x27d
7101ca25a0  mov x0,sp
7101ca25a4  bl 0x710377a120
7101ca25a8  ldr x0,[sp, #0x8]
7101ca25ac  adrp x8,0x710523d000
7101ca25b0  add x8,x8,#0x9a8
7101ca25b4  stp x8,xzr,[sp]
7101ca25b8  cbz x0,0x7101ca25c0
7101ca25bc  bl 0x710392eb40
7101ca25c0  ldrb w1,[x19, #0x24e]
7101ca25c4  mov x0,x19
7101ca25c8  bl 0x7101c9e110
7101ca25cc  mov w1,#0x1
7101ca25d0  mov x0,x19
7101ca25d4  bl 0x7101ca10c0
7101ca25d8  ldr x0,[x19, #0x130]
7101ca25dc  bl 0x710376b960
7101ca25e0  ldr x0,[x19, #0x130]
7101ca25e4  ldr x8,[x0]
7101ca25e8  ldr x8,[x8, #0x60]
7101ca25ec  mov w1,#0x1
7101ca25f0  blr x8
7101ca25f4  ldp x29,x30,[sp, #0x20]
7101ca25f8  ldr x19,[sp, #0x10]
7101ca25fc  add sp,sp,#0x30
7101ca2600  ret
