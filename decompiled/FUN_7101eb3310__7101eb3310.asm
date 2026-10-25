// addr:      7101eb3310
// offset:    0x1eb3310
// name:      FUN_7101eb3310
// mangled:   
// size:      216

7101eb3310  str d8,[sp, #-0x30]!
7101eb3314  str x21,[sp, #0x8]
7101eb3318  stp x20,x19,[sp, #0x10]
7101eb331c  stp x29,x30,[sp, #0x20]
7101eb3320  add x29,sp,#0x20
7101eb3324  ldr x8,[x0, #0x8]
7101eb3328  ldr x21,[x8]
7101eb332c  ldr w8,[x0, #0x270]
7101eb3330  mov x19,x0
7101eb3334  ldr x0,[x21, #0x10]
7101eb3338  cmp w8,#0x1
7101eb333c  b.ne 0x7101eb33a4
7101eb3340  ldr x20,[x0, #0x8]
7101eb3344  cbz x20,0x7101eb339c
7101eb3348  adrp x1,0x7104413000
7101eb334c  add x1,x1,#0xab
7101eb3350  mov x0,x20
7101eb3354  bl 0x71037964b0
7101eb3358  cbz x0,0x7101eb3378
7101eb335c  ldr x8,[x0]
7101eb3360  ldr x8,[x8, #0x138]
7101eb3364  blr x8
7101eb3368  tbz w0,#0x0,0x7101eb33d4
7101eb336c  ldr x8,[x21, #0x10]
7101eb3370  ldr x20,[x8, #0x8]
7101eb3374  cbz x20,0x7101eb339c
7101eb3378  adrp x1,0x71043ad000
7101eb337c  add x1,x1,#0xf48
7101eb3380  mov x0,x20
7101eb3384  bl 0x71037964b0
7101eb3388  cbz x0,0x7101eb339c
7101eb338c  ldr x8,[x0]
7101eb3390  ldr x8,[x8, #0x138]
7101eb3394  blr x8
7101eb3398  tbz w0,#0x0,0x7101eb33d4
7101eb339c  stp xzr,xzr,[x19, #0x10]
7101eb33a0  b 0x7101eb33d4
7101eb33a4  fmov s8,0x3f800000
7101eb33a8  mov v0.16B,v8.16B
7101eb33ac  adrp x1,0x7104413000
7101eb33b0  add x1,x1,#0xab
7101eb33b4  bl 0x7103778300
7101eb33b8  ldr x0,[x21, #0x10]
7101eb33bc  mov v0.16B,v8.16B
7101eb33c0  adrp x1,0x71043ad000
7101eb33c4  add x1,x1,#0xf48
7101eb33c8  bl 0x7103778300
7101eb33cc  mov w8,#0x1
7101eb33d0  str w8,[x19, #0x270]
7101eb33d4  ldp x29,x30,[sp, #0x20]
7101eb33d8  ldr x21,[sp, #0x8]
7101eb33dc  ldp x20,x19,[sp, #0x10]
7101eb33e0  ldr d8,[sp], #0x30
7101eb33e4  ret
