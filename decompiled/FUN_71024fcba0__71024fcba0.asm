// addr:      71024fcba0
// offset:    0x24fcba0
// name:      FUN_71024fcba0
// mangled:   
// size:      336

71024fcba0  sub sp,sp,#0x40
71024fcba4  stp x22,x21,[sp, #0x10]
71024fcba8  stp x20,x19,[sp, #0x20]
71024fcbac  stp x29,x30,[sp, #0x30]
71024fcbb0  add x29,sp,#0x30
71024fcbb4  ldrb w8,[x0, #0x5d9]
71024fcbb8  mov w19,w3
71024fcbbc  mov w21,w2
71024fcbc0  mov x20,x0
71024fcbc4  and w22,w2,#0x1
71024fcbc8  cbnz w8,0x71024fcc24
71024fcbcc  tbz w1,#0x0,0x71024fcc24
71024fcbd0  mov w8,#0x1
71024fcbd4  strb w8,[x20, #0x5d9]
71024fcbd8  ldr x8,[x20, #0x558]
71024fcbdc  str wzr,[x20, #0x5c8]
71024fcbe0  ldr x8,[x8, #0x80]
71024fcbe4  add x0,x8,#0x30
71024fcbe8  adrp x1,0x7104270000
71024fcbec  add x1,x1,#0x5b7
71024fcbf0  mov x8,sp
71024fcbf4  bl 0x7103776910
71024fcbf8  ldr x0,[sp, #0x8]
71024fcbfc  ldr x8,[x0]
71024fcc00  cbz x8,0x71024fcc10
71024fcc04  ldrb w9,[x8, #0x58]
71024fcc08  orr w9,w9,#0x1
71024fcc0c  strb w9,[x8, #0x58]
71024fcc10  adrp x8,0x710523d000
71024fcc14  add x8,x8,#0x9a8
71024fcc18  stp x8,xzr,[sp]
71024fcc1c  cbz x0,0x71024fcc24
71024fcc20  bl 0x710392eb40
71024fcc24  ldrb w8,[x20, #0x5da]
71024fcc28  cmp w8,w22
71024fcc2c  b.eq 0x71024fcc84
71024fcc30  ldr x8,[x20, #0x558]
71024fcc34  strb w22,[x20, #0x5da]
71024fcc38  ldr x22,[x8, #0x80]
71024fcc3c  ldr x0,[x22, #0x38]
71024fcc40  tbz w21,#0x0,0x71024fcc64
71024fcc44  fmov s0,0x3f800000
71024fcc48  adrp x1,0x7104309000
71024fcc4c  add x1,x1,#0x252
71024fcc50  bl 0x7103778300
71024fcc54  add x0,x22,#0x170
71024fcc58  adrp x1,0x7104422000
71024fcc5c  add x1,x1,#0x939
71024fcc60  b 0x71024fcc80
71024fcc64  fmov s0,0x3f800000
71024fcc68  adrp x1,0x7104423000
71024fcc6c  add x1,x1,#0x56
71024fcc70  bl 0x7103778300
71024fcc74  add x0,x22,#0x170
71024fcc78  adrp x1,0x71043e0000
71024fcc7c  add x1,x1,#0x778
71024fcc80  bl 0x710377a120
71024fcc84  ldrb w8,[x20, #0x5db]
71024fcc88  and w9,w19,#0x1
71024fcc8c  cmp w8,w9
71024fcc90  b.eq 0x71024fccc0
71024fcc94  and w8,w19,#0x1
71024fcc98  strb w8,[x20, #0x5db]
71024fcc9c  ldrb w8,[x20, #0x5da]
71024fcca0  cbz w8,0x71024fccc0
71024fcca4  ldr x8,[x20, #0x558]
71024fcca8  ldr x8,[x8, #0x80]
71024fccac  add x0,x8,#0x170
71024fccb0  tbz w19,#0x0,0x71024fccd4
71024fccb4  adrp x1,0x71043e0000
71024fccb8  add x1,x1,#0x778
71024fccbc  b 0x71024fccdc
71024fccc0  ldp x29,x30,[sp, #0x30]
71024fccc4  ldp x20,x19,[sp, #0x20]
71024fccc8  ldp x22,x21,[sp, #0x10]
71024fcccc  add sp,sp,#0x40
71024fccd0  ret
71024fccd4  adrp x1,0x7104422000
71024fccd8  add x1,x1,#0x939
71024fccdc  ldp x29,x30,[sp, #0x30]
71024fcce0  ldp x20,x19,[sp, #0x20]
71024fcce4  ldp x22,x21,[sp, #0x10]
71024fcce8  add sp,sp,#0x40
71024fccec  b 0x710377a120
