// addr:      71025abf40
// offset:    0x25abf40
// name:      FUN_71025abf40
// mangled:   
// size:      532

71025abf40  str d8,[sp, #-0x30]!
71025abf44  str x21,[sp, #0x8]
71025abf48  stp x20,x19,[sp, #0x10]
71025abf4c  stp x29,x30,[sp, #0x20]
71025abf50  add x29,sp,#0x20
71025abf54  ldr w8,[x0, #0x1fc]
71025abf58  mov x19,x0
71025abf5c  cbz w8,0x71025abfd4
71025abf60  adrp x8,0x71052c4000
71025abf64  ldr x8,[x8, #0xc58]
71025abf68  ldr x8,[x8, #0x8]
71025abf6c  ldr x9,[x8, #0x80]
71025abf70  ldrb w9,[x9, #0x244]
71025abf74  ldr x20,[x8, #0x90]
71025abf78  cbz w9,0x71025abf84
71025abf7c  ldr w8,[x20, #0x10]
71025abf80  cbnz w8,0x71025ac124
71025abf84  add x0,x20,#0x30
71025abf88  bl 0x71039c0bc0
71025abf8c  cbnz w0,0x71025abf98
71025abf90  ldr w8,[x20, #0x28]
71025abf94  cbz w8,0x71025abfa0
71025abf98  ldrb w8,[x20, #0x2d]
71025abf9c  cbz w8,0x71025ac0ec
71025abfa0  ldr x8,[x19, #0x228]
71025abfa4  ldrb w9,[x19, #0x209]
71025abfa8  ldr x8,[x8, #0x80]
71025abfac  cbz w9,0x71025ac108
71025abfb0  orr w9,wzr,#0x3f800000
71025abfb4  str w9,[x8, #0x5ac]
71025abfb8  ldr w9,[x8, #0x5a8]
71025abfbc  add x10,x8,#0x5b4
71025abfc0  str w9,[x8, #0x5b0]
71025abfc4  mov w8,#0xa
71025abfc8  str x8,[x10]
71025abfcc  strb wzr,[x19, #0x209]
71025abfd0  b 0x71025ac124
71025abfd4  ldr x8,[x19, #0x228]
71025abfd8  ldr x20,[x8, #0x80]
71025abfdc  ldr w8,[x20, #0x5a4]
71025abfe0  cmp w8,#0x6
71025abfe4  ccmp w8,#0x0,#0x4,ne
71025abfe8  b.ne 0x71025ac05c
71025abfec  fmov s8,0x3f800000
71025abff0  ldr x0,[x20, #0x4f0]
71025abff4  adrp x1,0x7104421000
71025abff8  add x1,x1,#0x55
71025abffc  mov v0.16B,v8.16B
71025ac000  bl 0x7103778300
71025ac004  ldr x0,[x20, #0x4f0]
71025ac008  mov v0.16B,v8.16B
71025ac00c  adrp x1,0x71043f0000
71025ac010  add x1,x1,#0xdfb
71025ac014  bl 0x7103778300
71025ac018  ldr x0,[x20, #0x4f0]
71025ac01c  mov v0.16B,v8.16B
71025ac020  adrp x1,0x71043f0000
71025ac024  add x1,x1,#0xfa9
71025ac028  bl 0x7103778300
71025ac02c  ldr x0,[x20, #0x4f0]
71025ac030  fmov s0,wzr
71025ac034  adrp x1,0x7104443000
71025ac038  add x1,x1,#0xccd
71025ac03c  str wzr,[x20, #0x5b8]
71025ac040  str xzr,[x20, #0x5b0]
71025ac044  str xzr,[x20, #0x5a8]
71025ac048  bl 0x7103778630
71025ac04c  mov w8,#0x1
71025ac050  str w8,[x20, #0x5a4]
71025ac054  ldr x8,[x19, #0x228]
71025ac058  ldr x20,[x8, #0x80]
71025ac05c  mov w8,#0x6666
71025ac060  movk w8,#0x3f66, LSL #16
71025ac064  str w8,[x20, #0x5ac]
71025ac068  ldr w8,[x20, #0x5a8]
71025ac06c  str w8,[x20, #0x5b0]
71025ac070  add x8,x20,#0x5b4
71025ac074  orr w9,wzr,#0x3c
71025ac078  mov w20,#0x1
71025ac07c  str x9,[x8]
71025ac080  strb w20,[x19, #0x209]
71025ac084  adrp x8,0x710532f000
71025ac088  ldr x8,[x8, #0x7d8]
71025ac08c  cbz x8,0x71025ac124
71025ac090  ldr x21,[x8, #0x8]
71025ac094  add x19,x21,#0xc8
71025ac098  mov x0,x19
71025ac09c  bl 0x71039c19c0
71025ac0a0  ldr w8,[x21, #0xe8]
71025ac0a4  ldr x10,[x21, #0xa0]
71025ac0a8  strb w20,[x21, #0xf1]
71025ac0ac  strb wzr,[x21, #0xf5]
71025ac0b0  orr w8,w8,#0x4
71025ac0b4  str w8,[x21, #0xe8]
71025ac0b8  ldrb w9,[x21, #0xf4]
71025ac0bc  ldr x8,[x10, #0x80]
71025ac0c0  strb w9,[x8, #0x1cc]
71025ac0c4  mov w8,#0xffffffff
71025ac0c8  mov x9,#0xff0000000000
71025ac0cc  movk x9,#0x8ff, LSL #48
71025ac0d0  str w8,[x21, #0xec]
71025ac0d4  orr w8,wzr,#0x7
71025ac0d8  mov x0,x19
71025ac0dc  str x9,[x21, #0xf8]
71025ac0e0  str w8,[x21, #0x100]
71025ac0e4  bl 0x71039c19d0
71025ac0e8  b 0x71025ac124
71025ac0ec  ldrsw x8,[x19, #0x1f4]
71025ac0f0  cmp w8,#0x13
71025ac0f4  b.cs 0x71025ac150
71025ac0f8  add x8,x19,x8, LSL #0x2
71025ac0fc  mov w9,#0x16
71025ac100  str w9,[x8, #0x1a8]
71025ac104  b 0x71025ac124
71025ac108  ldr w9,[x8, #0x5a4]
71025ac10c  cmp w9,#0x2
71025ac110  b.ne 0x71025ac124
71025ac114  ldr s0,[x8, #0x5a8]
71025ac118  fmov s1,0x3f800000
71025ac11c  fcmp s0,s1
71025ac120  b.ge 0x71025ac138
71025ac124  ldp x29,x30,[sp, #0x20]
71025ac128  ldr x21,[sp, #0x8]
71025ac12c  ldp x20,x19,[sp, #0x10]
71025ac130  ldr d8,[sp], #0x30
71025ac134  ret
71025ac138  ldrsw x8,[x19, #0x1f4]
71025ac13c  cmp w8,#0x13
71025ac140  b.cs 0x71025ac150
71025ac144  add x8,x19,x8, LSL #0x2
71025ac148  mov w9,#0x15
71025ac14c  b 0x71025ac100
71025ac150  bl 0x71039c2650
