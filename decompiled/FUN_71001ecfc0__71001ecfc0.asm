// addr:      71001ecfc0
// offset:    0x1ecfc0
// name:      FUN_71001ecfc0
// mangled:   
// size:      256

71001ecfc0  str x21,[sp, #-0x30]!
71001ecfc4  stp x20,x19,[sp, #0x10]
71001ecfc8  stp x29,x30,[sp, #0x20]
71001ecfcc  add x29,sp,#0x20
71001ecfd0  adrp x8,0x71052a4000
71001ecfd4  ldr x8,[x8, #0xda8]
71001ecfd8  adrp x21,0x71052a4000
71001ecfdc  ldrb w8,[x8]
71001ecfe0  ldr x21,[x21, #0xdb0]
71001ecfe4  mov x19,x0
71001ecfe8  add x20,x21,#0x28
71001ecfec  cbz w8,0x71001ed028
71001ecff0  adrp x8,0x71052a4000
71001ecff4  ldr x8,[x8, #0xdb8]
71001ecff8  ldr x0,[x8]
71001ecffc  bl 0x7101717960
71001ed000  ldr w8,[x0]
71001ed004  cbz w8,0x71001ed028
71001ed008  ldr x10,[x21, #0xa0]
71001ed00c  ldp x9,x10,[x10]
71001ed010  sub x10,x10,x9
71001ed014  asr x10,x10,#0x3
71001ed018  cmp x10,x8
71001ed01c  b.ls 0x71001ed040
71001ed020  ldr x8,[x9, x8, LSL #0x3]
71001ed024  add x20,x8,#0x20
71001ed028  ldr x8,[x20]
71001ed02c  cbz x8,0x71001ed058
71001ed030  ldr x8,[x8, #0x10]
71001ed034  cbz x8,0x71001ed058
71001ed038  ldr x20,[x8, #0x10]
71001ed03c  b 0x71001ed05c
71001ed040  adrp x0,0x71042c4000
71001ed044  add x0,x0,#0x35f
71001ed048  mov w1,#0x47
71001ed04c  orr w2,wzr,#0xe0000003
71001ed050  mov w3,wzr
71001ed054  bl 0x71001b1300
71001ed058  mov x20,xzr
71001ed05c  ldr x8,[x20, #0x78]!
71001ed060  ldr x8,[x8, #0x10]
71001ed064  mov x0,x20
71001ed068  blr x8
71001ed06c  ldr x8,[x19, #0x10]
71001ed070  cbz x8,0x71001ed098
71001ed074  ldr x0,[x19, #0x20]
71001ed078  cbz x0,0x71001ed088
71001ed07c  ldr x8,[x0]
71001ed080  ldr x8,[x8, #0x8]
71001ed084  blr x8
71001ed088  mov w21,#0x1
71001ed08c  str xzr,[x19, #0x20]
71001ed090  str xzr,[x19, #0x10]
71001ed094  b 0x71001ed09c
71001ed098  mov w21,wzr
71001ed09c  ldr x8,[x20]
71001ed0a0  ldr x8,[x8, #0x20]
71001ed0a4  mov x0,x20
71001ed0a8  blr x8
71001ed0ac  ldp x29,x30,[sp, #0x20]
71001ed0b0  mov w0,w21
71001ed0b4  ldp x20,x19,[sp, #0x10]
71001ed0b8  ldr x21,[sp], #0x30
71001ed0bc  ret
