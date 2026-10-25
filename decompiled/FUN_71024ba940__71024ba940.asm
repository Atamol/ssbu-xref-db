// addr:      71024ba940
// offset:    0x24ba940
// name:      FUN_71024ba940
// mangled:   
// size:      748

71024ba940  str x21,[sp, #-0x30]!
71024ba944  stp x20,x19,[sp, #0x10]
71024ba948  stp x29,x30,[sp, #0x20]
71024ba94c  add x29,sp,#0x20
71024ba950  ldr w8,[x0, #0x24c]
71024ba954  mov x19,x0
71024ba958  cbz w8,0x71024ba980
71024ba95c  bl 0x71004ec3b0
71024ba960  tbz w0,#0x0,0x71024baa00
71024ba964  ldrsw x8,[x19, #0x244]
71024ba968  cmp w8,#0x13
71024ba96c  b.cs 0x71024bac28
71024ba970  add x8,x19,x8, LSL #0x2
71024ba974  mov w9,#0x12
71024ba978  str w9,[x8, #0x1f8]
71024ba97c  b 0x71024baae8
71024ba980  adrp x8,0x7105314000
71024ba984  add x8,x8,#0x4d8
71024ba988  ldarb w8,[x8]
71024ba98c  tbz w8,#0x0,0x71024baba8
71024ba990  adrp x0,0x71052c5000
71024ba994  add x0,x0,#0x1b0
71024ba998  bl 0x71014e1e90
71024ba99c  adrp x8,0x71052b9000
71024ba9a0  ldr x8,[x8, #0x4f8]
71024ba9a4  ldr x8,[x8]
71024ba9a8  ldr x20,[x8, #0x20]
71024ba9ac  cbz x20,0x71024baaac
71024ba9b0  mov w8,#0x591b
71024ba9b4  mov w9,#0x2
71024ba9b8  strb w9,[x20, x8, LSL ]
71024ba9bc  mov w8,#0x5920
71024ba9c0  add x21,x20,x8
71024ba9c4  ldrb w8,[x21]
71024ba9c8  sub w9,w8,#0x3
71024ba9cc  cmp w9,#0x1
71024ba9d0  b.hi 0x71024baa30
71024ba9d4  mov w8,#0x591f
71024ba9d8  ldrb w8,[x20, x8, LSL ]
71024ba9dc  tbz w8,#0x0,0x71024baaac
71024ba9e0  mov x0,x20
71024ba9e4  bl 0x7100655f60
71024ba9e8  orr w8,wzr,#0x3
71024ba9ec  mov w9,#0x5934
71024ba9f0  strb w8,[x21]
71024ba9f4  mov w8,#0x1
71024ba9f8  strb w8,[x20, x9, LSL ]
71024ba9fc  b 0x71024baaac
71024baa00  adrp x8,0x7105314000
71024baa04  add x8,x8,#0x4d8
71024baa08  ldarb w8,[x8]
71024baa0c  tbz w8,#0x0,0x71024babe8
71024baa10  adrp x8,0x71052c5000
71024baa14  add x8,x8,#0x1b0
71024baa18  ldrb w9,[x8, #0x6]
71024baa1c  ldrb w8,[x8]
71024baa20  cbz w9,0x71024baa58
71024baa24  cmp w8,#0x19
71024baa28  b.ne 0x71024baa78
71024baa2c  b 0x71024baae8
71024baa30  adrp x9,0x71052c3000
71024baa34  ldr x9,[x9, #0x3d8]
71024baa38  ldr x9,[x9]
71024baa3c  ldr w9,[x9]
71024baa40  cmp w9,#0x1
71024baa44  ccmp w8,#0x6,#0x4,ge
71024baa48  b.ne 0x71024baaa4
71024baa4c  mov x0,x20
71024baa50  bl 0x7100655f60
71024baa54  b 0x71024baaac
71024baa58  sub w8,w8,#0x1
71024baa5c  cmp w8,#0x24
71024baa60  b.hi 0x71024baa78
71024baa64  mov x9,#0xe495
71024baa68  movk x9,#0x1fe, LSL #16
71024baa6c  movk x9,#0x18, LSL #32
71024baa70  lsr x8,x9,x8
71024baa74  tbnz w8,#0x0,0x71024baae8
71024baa78  adrp x8,0x71052b9000
71024baa7c  ldr x8,[x8, #0x4f8]
71024baa80  ldr x8,[x8]
71024baa84  ldr x9,[x8, #0x20]
71024baa88  cbz x9,0x71024baa94
71024baa8c  mov x8,xzr
71024baa90  b 0x71024bab54
71024baa94  ldr x9,[x8, #0x28]
71024baa98  cbz x9,0x71024baaf8
71024baa9c  mov w8,#0x1
71024baaa0  b 0x71024bab54
71024baaa4  mov w8,#0x5
71024baaa8  strb w8,[x21]
71024baaac  strb wzr,[x19, #0x2cc]
71024baab0  adrp x8,0x71052b8000
71024baab4  ldr x8,[x8, #0xef8]
71024baab8  ldr x0,[x8, #0x8]
71024baabc  bl 0x71004eaa30
71024baac0  bl 0x71004eb940
71024baac4  adrp x8,0x710532f000
71024baac8  ldr x8,[x8, #0x7c8]
71024baacc  ldr x0,[x8, #0x8]
71024baad0  mov w2,#0x1
71024baad4  mov w1,wzr
71024baad8  mov w3,wzr
71024baadc  mov w4,wzr
71024baae0  mov w5,wzr
71024baae4  bl 0x71032e4d70
71024baae8  ldp x29,x30,[sp, #0x20]
71024baaec  ldp x20,x19,[sp, #0x10]
71024baaf0  ldr x21,[sp], #0x30
71024baaf4  ret
71024baaf8  ldr x9,[x8, #0x30]
71024baafc  cbz x9,0x71024bab08
71024bab00  mov w8,#0x2
71024bab04  b 0x71024bab54
71024bab08  ldr x9,[x8, #0x38]
71024bab0c  cbz x9,0x71024bab18
71024bab10  orr w8,wzr,#0x3
71024bab14  b 0x71024bab54
71024bab18  ldr x9,[x8, #0x40]
71024bab1c  cbz x9,0x71024bab28
71024bab20  mov w8,#0x4
71024bab24  b 0x71024bab54
71024bab28  ldr x9,[x8, #0x48]
71024bab2c  cbz x9,0x71024bab38
71024bab30  mov w8,#0x5
71024bab34  b 0x71024bab54
71024bab38  ldr x9,[x8, #0x50]
71024bab3c  cbz x9,0x71024bab48
71024bab40  orr w8,wzr,#0x6
71024bab44  b 0x71024bab54
71024bab48  ldr x8,[x8, #0x58]
71024bab4c  cbz x8,0x71024baae8
71024bab50  orr w8,wzr,#0x7
71024bab54  adrp x9,0x71052c5000
71024bab58  ldr x9,[x9, #0xf0]
71024bab5c  add x8,x9,x8, LSL #0x2
71024bab60  ldrsw x8,[x8, #0x298]
71024bab64  cmn w8,#0x1
71024bab68  b.eq 0x71024baae8
71024bab6c  cmp w8,#0xa
71024bab70  b.cs 0x71024bac28
71024bab74  adrp x9,0x710593b000
71024bab78  ldr x9,[x9, #0x980]
71024bab7c  ldr x9,[x9, #0x8]
71024bab80  orr w10,wzr,#0x30
71024bab84  madd x8,x8,x10,x9
71024bab88  ldrb w8,[x8, #0x4]
71024bab8c  tbz w8,#0x6,0x71024baae8
71024bab90  mov w8,#0x1
71024bab94  strb w8,[x19, #0x2cc]
71024bab98  ldp x29,x30,[sp, #0x20]
71024bab9c  ldp x20,x19,[sp, #0x10]
71024baba0  ldr x21,[sp], #0x30
71024baba4  b 0x71004ec2a0
71024baba8  adrp x0,0x7105314000
71024babac  add x0,x0,#0x4d8
71024babb0  bl 0x71039c06b0
71024babb4  cbz w0,0x71024ba990
71024babb8  bl 0x7101764000
71024babbc  adrp x0,0x7101763000
71024babc0  add x0,x0,#0xc40
71024babc4  adrp x1,0x71052c5000
71024babc8  add x1,x1,#0x180
71024babcc  adrp x2,0x7104f17000
71024babd0  add x2,x2,#0x0
71024babd4  bl 0x71000001c0
71024babd8  adrp x0,0x7105314000
71024babdc  add x0,x0,#0x4d8
71024babe0  bl 0x71039c06c0
71024babe4  b 0x71024ba990
71024babe8  adrp x0,0x7105314000
71024babec  add x0,x0,#0x4d8
71024babf0  bl 0x71039c06b0
71024babf4  cbz w0,0x71024baa10
71024babf8  bl 0x7101764000
71024babfc  adrp x0,0x7101763000
71024bac00  add x0,x0,#0xc40
71024bac04  adrp x1,0x71052c5000
71024bac08  add x1,x1,#0x180
71024bac0c  adrp x2,0x7104f17000
71024bac10  add x2,x2,#0x0
71024bac14  bl 0x71000001c0
71024bac18  adrp x0,0x7105314000
71024bac1c  add x0,x0,#0x4d8
71024bac20  bl 0x71039c06c0
71024bac24  b 0x71024baa10
71024bac28  bl 0x71039c2650
