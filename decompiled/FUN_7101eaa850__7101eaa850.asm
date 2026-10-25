// addr:      7101eaa850
// offset:    0x1eaa850
// name:      FUN_7101eaa850
// mangled:   
// size:      852

7101eaa850  str d8,[sp, #-0x50]!
7101eaa854  str x28,[sp, #0x8]
7101eaa858  stp x24,x23,[sp, #0x10]
7101eaa85c  stp x22,x21,[sp, #0x20]
7101eaa860  stp x20,x19,[sp, #0x30]
7101eaa864  stp x29,x30,[sp, #0x40]
7101eaa868  add x29,sp,#0x40
7101eaa86c  sub sp,sp,#0x1c0
7101eaa870  mov x20,x0
7101eaa874  ldr x0,[x2, #0x8]
7101eaa878  mov x19,x2
7101eaa87c  cbz w1,0x7101eaa9d4
7101eaa880  fmov s0,0x3f800000
7101eaa884  mov w21,w1
7101eaa888  adrp x1,0x71042e7000
7101eaa88c  add x1,x1,#0x958
7101eaa890  bl 0x7103778300
7101eaa894  adrp x8,0x7105314000
7101eaa898  ldr x8,[x8, #0x510]
7101eaa89c  ldr x8,[x8]
7101eaa8a0  ldr x22,[x8, #0x298]
7101eaa8a4  add x23,sp,#0x28
7101eaa8a8  add x0,x23,#0x8
7101eaa8ac  mov w2,#0x10a
7101eaa8b0  mov w1,wzr
7101eaa8b4  str wzr,[sp, #0x28]
7101eaa8b8  add x24,x23,#0x134
7101eaa8bc  bl 0x71039c02a0
7101eaa8c0  mov w8,#0x1
7101eaa8c4  str x8,[x24]
7101eaa8c8  mov x8,#0xff0000000000
7101eaa8cc  movk x8,#0xd9ff, LSL #48
7101eaa8d0  str x8,[sp, #0x168]
7101eaa8d4  add x8,x23,#0x14f
7101eaa8d8  str xzr,[x8]
7101eaa8dc  str xzr,[sp, #0x170]
7101eaa8e0  sxtw x8,w21
7101eaa8e4  stp xzr,xzr,[sp, #0x1b0]
7101eaa8e8  stp xzr,xzr,[sp, #0x1a0]
7101eaa8ec  stp xzr,xzr,[sp, #0x190]
7101eaa8f0  stp xzr,xzr,[sp, #0x180]
7101eaa8f4  ldp x9,x10,[x20, #0x138]
7101eaa8f8  sub x10,x10,x9
7101eaa8fc  asr x10,x10,#0x2
7101eaa900  cmp x10,x8
7101eaa904  b.ls 0x7101eaab9c
7101eaa908  ldr w21,[x9, x8, LSL #0x2]
7101eaa90c  add x2,sp,#0x28
7101eaa910  mov x0,x22
7101eaa914  mov x1,x21
7101eaa918  bl 0x71017ceba0
7101eaa91c  tbz w0,#0x0,0x7101eaab08
7101eaa920  adrp x1,0x71043cf000
7101eaa924  add x1,x1,#0xca4
7101eaa928  add x8,sp,#0x18
7101eaa92c  mov x0,x19
7101eaa930  add x22,x23,#0x110
7101eaa934  bl 0x7103776910
7101eaa938  add x0,sp,#0x18
7101eaa93c  mov w1,#0x1
7101eaa940  mov x2,x22
7101eaa944  bl 0x710377a310
7101eaa948  adrp x1,0x71042e7000
7101eaa94c  add x1,x1,#0x963
7101eaa950  add x8,sp,#0x8
7101eaa954  mov x0,x19
7101eaa958  bl 0x7103776910
7101eaa95c  ldr x9,[x20, #0x160]
7101eaa960  cbz x9,0x7101eaa998
7101eaa964  add x10,x20,#0x160
7101eaa968  mov x8,x10
7101eaa96c  ldr w11,[x9, #0x1c]
7101eaa970  cmp w11,w21
7101eaa974  cset w11,cc
7101eaa978  csel x8,x8,x9,cc
7101eaa97c  ldr x9,[x9, w11, UXTW #0x3]
7101eaa980  cbnz x9,0x7101eaa96c
7101eaa984  cmp x8,x10
7101eaa988  b.eq 0x7101eaa998
7101eaa98c  ldr w9,[x8, #0x1c]
7101eaa990  cmp w21,w9
7101eaa994  b.cs 0x7101eaab28
7101eaa998  ldr x20,[sp, #0x10]
7101eaa99c  ldr x8,[x20]
7101eaa9a0  cbz x8,0x7101eaa9b0
7101eaa9a4  ldrb w9,[x8, #0x58]
7101eaa9a8  and w9,w9,#0xfe
7101eaa9ac  strb w9,[x8, #0x58]
7101eaa9b0  ldr w8,[sp, #0x15c]
7101eaa9b4  cmp w8,#0x1
7101eaa9b8  b.eq 0x7101eaaa40
7101eaa9bc  cmp w8,#0x2
7101eaa9c0  b.ne 0x7101eaaa50
7101eaa9c4  ldr x0,[x19, #0x8]
7101eaa9c8  adrp x1,0x71042c5000
7101eaa9cc  add x1,x1,#0x58a
7101eaa9d0  b 0x7101eaaa5c
7101eaa9d4  fmov s8,0x3f800000
7101eaa9d8  mov v0.16B,v8.16B
7101eaa9dc  adrp x1,0x710434a000
7101eaa9e0  add x1,x1,#0xae7
7101eaa9e4  bl 0x7103778300
7101eaa9e8  ldr x0,[x19, #0x8]
7101eaa9ec  mov v0.16B,v8.16B
7101eaa9f0  adrp x1,0x71042f8000
7101eaa9f4  add x1,x1,#0xa93
7101eaa9f8  bl 0x7103778300
7101eaa9fc  ldr x0,[x19, #0x8]
7101eaaa00  mov v0.16B,v8.16B
7101eaaa04  adrp x1,0x7104413000
7101eaaa08  add x1,x1,#0x3d
7101eaaa0c  bl 0x7103778300
7101eaaa10  ldr x0,[x19, #0x8]
7101eaaa14  adrp x1,0x71042d6000
7101eaaa18  add x1,x1,#0xa14
7101eaaa1c  mov v0.16B,v8.16B
7101eaaa20  add sp,sp,#0x1c0
7101eaaa24  ldp x29,x30,[sp, #0x40]
7101eaaa28  ldr x28,[sp, #0x8]
7101eaaa2c  ldp x20,x19,[sp, #0x30]
7101eaaa30  ldp x22,x21,[sp, #0x20]
7101eaaa34  ldp x24,x23,[sp, #0x10]
7101eaaa38  ldr d8,[sp], #0x50
7101eaaa3c  b 0x7103778300
7101eaaa40  ldr x0,[x19, #0x8]
7101eaaa44  adrp x1,0x710433a000
7101eaaa48  add x1,x1,#0x960
7101eaaa4c  b 0x7101eaaa5c
7101eaaa50  ldr x0,[x19, #0x8]
7101eaaa54  adrp x1,0x710433a000
7101eaaa58  add x1,x1,#0x96a
7101eaaa5c  fmov s0,0x3f800000
7101eaaa60  bl 0x7103778300
7101eaaa64  ldrb w8,[sp, #0x17d]
7101eaaa68  ldr x0,[x19, #0x8]
7101eaaa6c  cbz w8,0x7101eaaa7c
7101eaaa70  adrp x1,0x710432a000
7101eaaa74  add x1,x1,#0x744
7101eaaa78  b 0x7101eaaa84
7101eaaa7c  adrp x1,0x71042f8000
7101eaaa80  add x1,x1,#0xa93
7101eaaa84  fmov s0,0x3f800000
7101eaaa88  bl 0x7103778300
7101eaaa8c  ldrb w8,[sp, #0x17e]
7101eaaa90  ldr x0,[x19, #0x8]
7101eaaa94  cbz w8,0x7101eaaaa4
7101eaaa98  adrp x1,0x710435b000
7101eaaa9c  add x1,x1,#0xed4
7101eaaaa0  b 0x7101eaaaac
7101eaaaa4  adrp x1,0x7104413000
7101eaaaa8  add x1,x1,#0x3d
7101eaaaac  fmov s0,0x3f800000
7101eaaab0  bl 0x7103778300
7101eaaab4  ldrb w8,[sp, #0x34]
7101eaaab8  ldr x0,[x19, #0x8]
7101eaaabc  cmp w8,#0x1
7101eaaac0  b.ne 0x7101eaaad0
7101eaaac4  adrp x1,0x7104443000
7101eaaac8  add x1,x1,#0xe4b
7101eaaacc  b 0x7101eaaad8
7101eaaad0  adrp x1,0x71042d6000
7101eaaad4  add x1,x1,#0xa14
7101eaaad8  fmov s0,0x3f800000
7101eaaadc  bl 0x7103778300
7101eaaae0  adrp x19,0x710523d000
7101eaaae4  add x19,x19,#0x9a8
7101eaaae8  stp x19,xzr,[sp, #0x8]
7101eaaaec  cbz x20,0x7101eaaaf8
7101eaaaf0  mov x0,x20
7101eaaaf4  bl 0x710392eb40
7101eaaaf8  ldr x0,[sp, #0x20]
7101eaaafc  stp x19,xzr,[sp, #0x18]
7101eaab00  cbz x0,0x7101eaab08
7101eaab04  bl 0x710392eb40
7101eaab08  add sp,sp,#0x1c0
7101eaab0c  ldp x29,x30,[sp, #0x40]
7101eaab10  ldr x28,[sp, #0x8]
7101eaab14  ldp x20,x19,[sp, #0x30]
7101eaab18  ldp x22,x21,[sp, #0x20]
7101eaab1c  ldp x24,x23,[sp, #0x10]
7101eaab20  ldr d8,[sp], #0x50
7101eaab24  ret
7101eaab28  adrp x9,0x710532f000
7101eaab2c  ldr x9,[x9, #0x860]
7101eaab30  ldr x9,[x9]
7101eaab34  ldr x10,[x9, #0x10]
7101eaab38  cbz x10,0x7101eaab84
7101eaab3c  ldr w8,[x8, #0x20]
7101eaab40  ldr x11,[x9, #0x8]!
7101eaab44  cbz x11,0x7101eaab84
7101eaab48  mov x10,x9
7101eaab4c  ldr w12,[x11, #0x20]
7101eaab50  cmp w12,w8
7101eaab54  cset w12,cc
7101eaab58  csel x10,x10,x11,cc
7101eaab5c  ldr x11,[x11, w12, UXTW #0x3]
7101eaab60  cbnz x11,0x7101eaab4c
7101eaab64  cmp x10,x9
7101eaab68  b.eq 0x7101eaab84
7101eaab6c  ldr w9,[x10, #0x20]
7101eaab70  cmp w9,w8
7101eaab74  b.hi 0x7101eaab84
7101eaab78  add x1,x10,#0x28
7101eaab7c  add x0,sp,#0x8
7101eaab80  bl 0x7103779480
7101eaab84  ldr x20,[sp, #0x10]
7101eaab88  ldr x8,[x20]
7101eaab8c  cbz x8,0x7101eaa9b0
7101eaab90  ldrb w9,[x8, #0x58]
7101eaab94  orr w9,w9,#0x1
7101eaab98  b 0x7101eaa9ac
7101eaab9c  add x0,x20,#0x138
7101eaaba0  bl 0x71039c1330
