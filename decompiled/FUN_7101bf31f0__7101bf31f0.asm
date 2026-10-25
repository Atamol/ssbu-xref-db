// addr:      7101bf31f0
// offset:    0x1bf31f0
// name:      FUN_7101bf31f0
// mangled:   
// size:      316

7101bf31f0  str x23,[sp, #-0x40]!
7101bf31f4  stp x22,x21,[sp, #0x10]
7101bf31f8  stp x20,x19,[sp, #0x20]
7101bf31fc  stp x29,x30,[sp, #0x30]
7101bf3200  add x29,sp,#0x30
7101bf3204  ldr x8,[x0, #0x80]
7101bf3208  ldr x19,[x8, #0x40]
7101bf320c  ldr x8,[x19]
7101bf3210  cbz x8,0x7101bf3300
7101bf3214  adrp x1,0x71042b2000
7101bf3218  add x1,x1,#0xa84
7101bf321c  add x0,sp,#0x8
7101bf3220  str xzr,[sp, #0x8]
7101bf3224  bl 0x71037aea50
7101bf3228  ldr x19,[x19]
7101bf322c  ldr x0,[x19]
7101bf3230  cbz x0,0x7101bf32b0
7101bf3234  ldr x8,[x0, #0x18]
7101bf3238  ldr x8,[x8, #0x40]
7101bf323c  ldr w9,[x8, #0xc]
7101bf3240  cmp w9,#0x2
7101bf3244  b.cc 0x7101bf3254
7101bf3248  ldr x8,[x8, #0x10]
7101bf324c  add x1,x8,#0x10
7101bf3250  b 0x7101bf32a0
7101bf3254  ldr x9,[x8, #0x18]
7101bf3258  ldrb w8,[x8, #0xb]
7101bf325c  mov w10,#0xffffffff
7101bf3260  lsl x8,x10,x8
7101bf3264  mvn w8,w8
7101bf3268  and x8,x8,#0x2
7101bf326c  add x1,x9,x8, LSL #0x5
7101bf3270  adrp x8,0x7104862000
7101bf3274  add x8,x8,#0x960
7101bf3278  ldr w9,[x1, #0x18]
7101bf327c  cmp w9,#0x13
7101bf3280  b.ne 0x7101bf3290
7101bf3284  ldr x9,[x1, #0x10]
7101bf3288  cmp x9,#0x2
7101bf328c  b.eq 0x7101bf32a0
7101bf3290  ldrsw x9,[x1, #0x1c]
7101bf3294  add x1,x1,x9, LSL #0x5
7101bf3298  cbnz w9,0x7101bf3278
7101bf329c  mov x1,x8
7101bf32a0  adrp x2,0x7104401000
7101bf32a4  add x2,x2,#0x426
7101bf32a8  bl 0x71038f4d40
7101bf32ac  ldr x0,[x19]
7101bf32b0  add x1,sp,#0x8
7101bf32b4  bl 0x710372d940
7101bf32b8  ldr x20,[sp, #0x8]
7101bf32bc  cbz x20,0x7101bf3300
7101bf32c0  ldp x8,x22,[x20, #0x8]
7101bf32c4  ldr w19,[x8]
7101bf32c8  mov x21,xzr
7101bf32cc  b 0x7101bf32d4
7101bf32d0  add x21,x21,#0x1
7101bf32d4  ldrb w8,[x22, x21, LSL ]
7101bf32d8  cmp w8,#0x73
7101bf32dc  b.eq 0x7101bf32e8
7101bf32e0  cbnz w8,0x7101bf32d0
7101bf32e4  b 0x7101bf3308
7101bf32e8  ldr x23,[x20, #0x8]
7101bf32ec  ldr x0,[x23, x21, LSL #0x3]
7101bf32f0  cbz x0,0x7101bf32f8
7101bf32f4  bl 0x710392eb40
7101bf32f8  str xzr,[x23, x21, LSL #0x3]
7101bf32fc  b 0x7101bf32d0
7101bf3300  mov w19,wzr
7101bf3304  b 0x7101bf3314
7101bf3308  mov x0,x20
7101bf330c  bl 0x710392eb40
7101bf3310  str xzr,[sp, #0x8]
7101bf3314  mov w0,w19
7101bf3318  ldp x29,x30,[sp, #0x30]
7101bf331c  ldp x20,x19,[sp, #0x20]
7101bf3320  ldp x22,x21,[sp, #0x10]
7101bf3324  ldr x23,[sp], #0x40
7101bf3328  ret
