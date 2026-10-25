// addr:      7101b7ea40
// offset:    0x1b7ea40
// name:      FUN_7101b7ea40
// mangled:   
// size:      356

7101b7ea40  str d8,[sp, #-0x50]!
7101b7ea44  stp x24,x23,[sp, #0x10]
7101b7ea48  stp x22,x21,[sp, #0x20]
7101b7ea4c  stp x20,x19,[sp, #0x30]
7101b7ea50  stp x29,x30,[sp, #0x40]
7101b7ea54  add x29,sp,#0x40
7101b7ea58  cmp w1,#0x8
7101b7ea5c  b.cs 0x7101b7eba0
7101b7ea60  ldr x23,[x0, #0x80]
7101b7ea64  mov w21,w1
7101b7ea68  mov w20,w5
7101b7ea6c  mov w19,w4
7101b7ea70  mov x22,x0
7101b7ea74  sxtw x24,w21
7101b7ea78  cmp w2,#0x4
7101b7ea7c  b.hi 0x7101b7eb98
7101b7ea80  mov w8,w2
7101b7ea84  adrp x9,0x71044f8000
7101b7ea88  add x9,x9,#0x800
7101b7ea8c  ldrsw x8,[x9, x8, LSL #0x2]
7101b7ea90  add x8,x8,x9
7101b7ea94  br x8
7101b7ea98  fmov s0,0x40a00000
7101b7ea9c  fmov s1,wzr
7101b7eaa0  ldr x0,[x22, #0x78]
7101b7eaa4  tst w3,#0x1
7101b7eaa8  fcsel s8,s1,s0,ne
7101b7eaac  adrp x1,0x7104443000
7101b7eab0  add x1,x1,#0x3c9
7101b7eab4  b 0x7101b7eb34
7101b7eab8  fmov s0,0x41100000
7101b7eabc  fmov s1,0x40800000
7101b7eac0  tst w3,#0x1
7101b7eac4  ldr x0,[x22, #0x78]
7101b7eac8  adrp x1,0x710436c000
7101b7eacc  add x1,x1,#0x92
7101b7ead0  fcsel s8,s1,s0,ne
7101b7ead4  b 0x7101b7eb34
7101b7ead8  fmov s0,0x40e00000
7101b7eadc  fmov s1,0x40000000
7101b7eae0  ldr x0,[x22, #0x78]
7101b7eae4  tst w3,#0x1
7101b7eae8  fcsel s8,s1,s0,ne
7101b7eaec  adrp x1,0x7104308000
7101b7eaf0  add x1,x1,#0x23e
7101b7eaf4  b 0x7101b7eb34
7101b7eaf8  fmov s0,0x40c00000
7101b7eafc  fmov s1,0x3f800000
7101b7eb00  ldr x0,[x22, #0x78]
7101b7eb04  tst w3,#0x1
7101b7eb08  fcsel s8,s1,s0,ne
7101b7eb0c  adrp x1,0x710436c000
7101b7eb10  add x1,x1,#0x77
7101b7eb14  b 0x7101b7eb34
7101b7eb18  fmov s0,0x41000000
7101b7eb1c  fmov s1,0x40400000
7101b7eb20  ldr x0,[x22, #0x78]
7101b7eb24  tst w3,#0x1
7101b7eb28  fcsel s8,s1,s0,ne
7101b7eb2c  adrp x1,0x71042d6000
7101b7eb30  add x1,x1,#0x1f
7101b7eb34  mov w2,wzr
7101b7eb38  bl 0x7103240d30
7101b7eb3c  mov w8,#0xd90
7101b7eb40  madd x8,x24,x8,x23
7101b7eb44  mov x1,x0
7101b7eb48  ldr x0,[x8, #0xf50]
7101b7eb4c  bl 0x7103778b80
7101b7eb50  mov w8,#0xd90
7101b7eb54  madd x23,x24,x8,x23
7101b7eb58  mov v0.16B,v8.16B
7101b7eb5c  add x0,x23,#0xe18
7101b7eb60  bl 0x710377b010
7101b7eb64  and w3,w20,#0x1
7101b7eb68  mov x0,x22
7101b7eb6c  mov w1,w21
7101b7eb70  mov w2,w19
7101b7eb74  bl 0x7101b7e8f0
7101b7eb78  add x0,x23,#0xe28
7101b7eb7c  ldp x29,x30,[sp, #0x40]
7101b7eb80  ldp x20,x19,[sp, #0x30]
7101b7eb84  fmov s0,0x3f800000
7101b7eb88  ldp x22,x21,[sp, #0x20]
7101b7eb8c  ldp x24,x23,[sp, #0x10]
7101b7eb90  ldr d8,[sp], #0x50
7101b7eb94  b 0x710377aee0
7101b7eb98  fmov s8,wzr
7101b7eb9c  b 0x7101b7eb50
7101b7eba0  bl 0x71039c2650
