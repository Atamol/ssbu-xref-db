// addr:      71014af650
// offset:    0x14af650
// name:      FUN_71014af650
// mangled:   
// size:      528

71014af650  stp x24,x23,[sp, #-0x40]!
71014af654  stp x22,x21,[sp, #0x10]
71014af658  stp x20,x19,[sp, #0x20]
71014af65c  stp x29,x30,[sp, #0x30]
71014af660  add x29,sp,#0x30
71014af664  adrp x8,0x71052c3000
71014af668  ldr x8,[x8, #0x6c0]
71014af66c  ldr x8,[x8]
71014af670  ldr x8,[x8, #0x18]
71014af674  ldr x21,[x8]
71014af678  ldr x0,[x21]
71014af67c  ldr x8,[x0]
71014af680  ldr x8,[x8, #0x10]
71014af684  blr x8
71014af688  ldr x8,[x0]
71014af68c  ldr x9,[x8, #0x270]
71014af690  ldr x8,[x8, #0x268]
71014af694  sub x8,x9,x8
71014af698  lsr x8,x8,#0x2
71014af69c  cmp w8,#0x2
71014af6a0  b.cc 0x71014af7bc
71014af6a4  adrp x8,0x71052c3000
71014af6a8  ldr x8,[x8, #0x420]
71014af6ac  ldr x8,[x8, #0x8]
71014af6b0  ldr x0,[x21]
71014af6b4  ldr x19,[x8]
71014af6b8  ldr x8,[x0]
71014af6bc  ldr x8,[x8, #0x10]
71014af6c0  blr x8
71014af6c4  ldr x8,[x0]
71014af6c8  ldr w8,[x8, #0x284]
71014af6cc  mov w9,#0x2
71014af6d0  sub w3,w9,w8
71014af6d4  ldr x8,[x19, #0xc40]
71014af6d8  ldr x8,[x8]
71014af6dc  ldr x8,[x8, #0x9a0]
71014af6e0  ldr x8,[x8, #0x8]
71014af6e4  ldr x8,[x8, #0x80]
71014af6e8  add x0,x8,#0x170
71014af6ec  adrp x1,0x7104432000
71014af6f0  add x1,x1,#0xd2f
71014af6f4  mov w2,#0x1
71014af6f8  bl 0x710377a280
71014af6fc  ldr x8,[x19, #0xc40]
71014af700  ldr x8,[x8]
71014af704  ldr x8,[x8, #0x9a0]
71014af708  ldr x8,[x8, #0x8]
71014af70c  ldr x8,[x8, #0x80]
71014af710  ldr w9,[x8, #0x3e8]
71014af714  cbnz w9,0x71014af768
71014af718  add x9,x8,#0xd0
71014af71c  str x9,[x8, #0x3f8]
71014af720  add x9,x8,#0xf0
71014af724  str x9,[x8, #0x400]
71014af728  ldrsw x9,[x8, #0x3e4]
71014af72c  cmp w9,#0x13
71014af730  b.cs 0x71014af85c
71014af734  add x9,x8,x9, LSL #0x2
71014af738  mov w10,#0x2
71014af73c  str w10,[x9, #0x398]
71014af740  ldr w9,[x8, #0x3e4]
71014af744  cmp w9,#0x11
71014af748  b.gt 0x71014af768
71014af74c  add w9,w9,#0x1
71014af750  cmp w9,#0x13
71014af754  str w9,[x8, #0x3e4]
71014af758  b.cs 0x71014af85c
71014af75c  add x8,x8,w9, SXTW  #0x2
71014af760  mov w9,#0x1
71014af764  str w9,[x8, #0x398]
71014af768  ldr x8,[x21, #0x8]
71014af76c  cbz x8,0x71014af790
71014af770  ldr x8,[x8]
71014af774  ldr x0,[x8, #0x8]
71014af778  cbz x0,0x71014af790
71014af77c  ldr x8,[x0]
71014af780  ldr x8,[x8, #0x58]
71014af784  mov w2,#0xffffffff
71014af788  orr w1,wzr,#0x1f
71014af78c  blr x8
71014af790  ldr x0,[x21]
71014af794  ldr x8,[x0]
71014af798  ldr x8,[x8, #0x10]
71014af79c  blr x8
71014af7a0  ldr x8,[x0]
71014af7a4  ldr x9,[x8, #0x268]
71014af7a8  ldr x10,[x8, #0x270]
71014af7ac  cmp x9,x10
71014af7b0  b.eq 0x71014af7d0
71014af7b4  ldr w22,[x8, #0x280]
71014af7b8  b 0x71014af7d4
71014af7bc  ldp x29,x30,[sp, #0x30]
71014af7c0  ldp x20,x19,[sp, #0x20]
71014af7c4  ldp x22,x21,[sp, #0x10]
71014af7c8  ldp x24,x23,[sp], #0x40
71014af7cc  ret
71014af7d0  mov w22,wzr
71014af7d4  ldr x0,[x21]
71014af7d8  ldr x8,[x0]
71014af7dc  ldr x8,[x8, #0x10]
71014af7e0  blr x8
71014af7e4  ldr x8,[x19, #0xc40]
71014af7e8  ldr x8,[x8]
71014af7ec  ldr x23,[x8, #0x9f8]
71014af7f0  ldr w8,[x23, #0x10]
71014af7f4  cmp w8,#0x1
71014af7f8  b.lt 0x71014af840
71014af7fc  ldr x8,[x0]
71014af800  ldr w20,[x8, #0x284]
71014af804  mov w19,wzr
71014af808  mov w24,#0x2
71014af80c  cmp w22,w19
71014af810  cset w8,eq
71014af814  cmp w19,w22
71014af818  csel w3,w24,w8,lt
71014af81c  ldr x8,[x23, #0x8]
71014af820  ldr x0,[x8, #0x80]
71014af824  mov w1,w19
71014af828  mov w2,w20
71014af82c  bl 0x7101b5cfb0
71014af830  ldr w8,[x23, #0x10]
71014af834  add w19,w19,#0x1
71014af838  cmp w19,w8
71014af83c  b.lt 0x71014af80c
71014af840  ldr x0,[x21]
71014af844  ldp x29,x30,[sp, #0x30]
71014af848  ldp x20,x19,[sp, #0x20]
71014af84c  mov w1,wzr
71014af850  ldp x22,x21,[sp, #0x10]
71014af854  ldp x24,x23,[sp], #0x40
71014af858  b 0x71014b9b40
71014af85c  bl 0x71039c2650
