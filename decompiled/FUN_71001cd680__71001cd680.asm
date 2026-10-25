// addr:      71001cd680
// offset:    0x1cd680
// name:      FUN_71001cd680
// mangled:   
// size:      328

71001cd680  sub sp,sp,#0x50
71001cd684  stp x22,x21,[sp, #0x20]
71001cd688  stp x20,x19,[sp, #0x30]
71001cd68c  stp x29,x30,[sp, #0x40]
71001cd690  add x29,sp,#0x40
71001cd694  adrp x8,0x71052a4000
71001cd698  ldr x8,[x8, #0xda8]
71001cd69c  adrp x22,0x71052a4000
71001cd6a0  ldrb w8,[x8]
71001cd6a4  ldr x22,[x22, #0xdb0]
71001cd6a8  mov x20,x1
71001cd6ac  mov x19,x0
71001cd6b0  add x21,x22,#0x28
71001cd6b4  cbz w8,0x71001cd6f0
71001cd6b8  adrp x8,0x71052a4000
71001cd6bc  ldr x8,[x8, #0xdb8]
71001cd6c0  ldr x0,[x8]
71001cd6c4  bl 0x7101717960
71001cd6c8  ldr w8,[x0]
71001cd6cc  cbz w8,0x71001cd6f0
71001cd6d0  ldr x10,[x22, #0xa0]
71001cd6d4  ldp x9,x10,[x10]
71001cd6d8  sub x10,x10,x9
71001cd6dc  asr x10,x10,#0x3
71001cd6e0  cmp x10,x8
71001cd6e4  b.ls 0x71001cd7b0
71001cd6e8  ldr x8,[x9, x8, LSL #0x3]
71001cd6ec  add x21,x8,#0x20
71001cd6f0  ldr x8,[x21]
71001cd6f4  ldr x8,[x8, #0x10]
71001cd6f8  ldr x9,[x8, #0x18]
71001cd6fc  ldr w8,[x19, #0x64]
71001cd700  ldr x11,[x9, #0x50]!
71001cd704  cbz x11,0x71001cd780
71001cd708  mov x10,x9
71001cd70c  ldr w12,[x11, #0x20]
71001cd710  cmp w12,w8
71001cd714  cset w12,cc
71001cd718  csel x10,x10,x11,cc
71001cd71c  ldr x11,[x11, w12, UXTW #0x3]
71001cd720  cbnz x11,0x71001cd70c
71001cd724  cmp x10,x9
71001cd728  b.eq 0x71001cd780
71001cd72c  ldr w9,[x10, #0x20]
71001cd730  cmp w9,w8
71001cd734  b.hi 0x71001cd780
71001cd738  ldr x21,[x10, #0x28]
71001cd73c  cbz x21,0x71001cd780
71001cd740  ldr x8,[x19, #0xf0]
71001cd744  cmp x8,x20
71001cd748  b.eq 0x71001cd758
71001cd74c  ldp x1,x2,[x20, #0x10]
71001cd750  add x0,x8,#0x10
71001cd754  bl 0x71017143b0
71001cd758  orr w8,wzr,#0x10001
71001cd75c  add x0,sp,#0x8
71001cd760  add x1,sp,#0x4
71001cd764  str w8,[sp, #0x4]
71001cd768  bl 0x71001b4200
71001cd76c  mov w1,#0x2
71001cd770  add x2,sp,#0x8
71001cd774  mov w3,#0x1
71001cd778  mov x0,x21
71001cd77c  bl 0x71001d0f00
71001cd780  mov w8,#0x5
71001cd784  str w8,[x19, #0x40]
71001cd788  ldr x8,[x19, #0x28]
71001cd78c  cbz x8,0x71001cd79c
71001cd790  add x1,x19,#0x30
71001cd794  mov x0,x19
71001cd798  blr x8
71001cd79c  ldp x29,x30,[sp, #0x40]
71001cd7a0  ldp x20,x19,[sp, #0x30]
71001cd7a4  ldp x22,x21,[sp, #0x20]
71001cd7a8  add sp,sp,#0x50
71001cd7ac  ret
71001cd7b0  adrp x0,0x71042c4000
71001cd7b4  add x0,x0,#0x35f
71001cd7b8  mov w1,#0x47
71001cd7bc  orr w2,wzr,#0xe0000003
71001cd7c0  mov w3,wzr
71001cd7c4  bl 0x71001b1300
