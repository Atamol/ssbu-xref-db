// addr:      7101b4e580
// offset:    0x1b4e580
// name:      FUN_7101b4e580
// mangled:   
// size:      804

7101b4e580  sub sp,sp,#0x130
7101b4e584  str d8,[sp, #0xc0]
7101b4e588  stp x28,x27,[sp, #0xd0]
7101b4e58c  stp x26,x25,[sp, #0xe0]
7101b4e590  stp x24,x23,[sp, #0xf0]
7101b4e594  stp x22,x21,[sp, #0x100]
7101b4e598  stp x20,x19,[sp, #0x110]
7101b4e59c  stp x29,x30,[sp, #0x120]
7101b4e5a0  add x29,sp,#0x120
7101b4e5a4  cmp w1,#0x2
7101b4e5a8  b.cs 0x7101b4e8a0
7101b4e5ac  ldr x20,[x3]
7101b4e5b0  and x9,x20,#-0x100000000000000
7101b4e5b4  mov x10,#-0x3f00000000000000
7101b4e5b8  and x8,x20,#0xffffffffff
7101b4e5bc  cmp x9,x10
7101b4e5c0  mov x24,x5
7101b4e5c4  mov w26,w4
7101b4e5c8  mov x23,x3
7101b4e5cc  mov x27,x2
7101b4e5d0  mov x19,x0
7101b4e5d4  mov w21,w1
7101b4e5d8  str x6,[sp, #0x10]
7101b4e5dc  ccmp x8,#0x0,#0x4,eq
7101b4e5e0  b.eq 0x7101b4e610
7101b4e5e4  ldrb w8,[x23, #0xc]
7101b4e5e8  cbz w8,0x7101b4e610
7101b4e5ec  adrp x8,0x710532f000
7101b4e5f0  ldr x8,[x8, #0x730]
7101b4e5f4  ldr x8,[x8, #0x8]
7101b4e5f8  ldr x0,[x8, #0x168]
7101b4e5fc  mov x1,#0xb807
7101b4e600  movk x1,#0xb1cc, LSL #16
7101b4e604  movk x1,#0x11, LSL #32
7101b4e608  bl 0x71032631a0
7101b4e60c  mov x20,x0
7101b4e610  adrp x8,0x710532f000
7101b4e614  ldr x8,[x8, #0x730]
7101b4e618  ldr x28,[x8, #0x8]
7101b4e61c  ldr x0,[x28, #0x168]
7101b4e620  ldr w22,[x23, #0x8]
7101b4e624  mov x1,x20
7101b4e628  add x25,x28,#0x160
7101b4e62c  bl 0x71032638e0
7101b4e630  mvn w8,w26
7101b4e634  and w8,w8,#0x1
7101b4e638  tst w0,#0x1
7101b4e63c  csel w26,w8,w22,ne
7101b4e640  ldrb w8,[x27, #0x4]
7101b4e644  cmp w8,#0x0
7101b4e648  mov w8,#0x2
7101b4e64c  csel x8,xzr,x8,eq
7101b4e650  str w22,[sp, #0x24]
7101b4e654  ldrh w8,[x27, x8, LSL #0x0]
7101b4e658  sub w8,w8,#0x2
7101b4e65c  cmp w8,#0xc
7101b4e660  b.hi 0x7101b4e678
7101b4e664  sxth x8,w8
7101b4e668  adrp x9,0x7104544000
7101b4e66c  add x9,x9,#0xa60
7101b4e670  ldr s0,[x9,x8, lsl #2]
7101b4e674  b 0x7101b4e67c
7101b4e678  fmov s0,wzr
7101b4e67c  mov w8,#0x58
7101b4e680  madd x22,x21,x8,x19
7101b4e684  add x0,x22,#0x2a0
7101b4e688  stur x21,[x29, #-0x58]
7101b4e68c  bl 0x710377b010
7101b4e690  ldr x0,[x28, #0x168]
7101b4e694  mov x1,x20
7101b4e698  mov w2,w26
7101b4e69c  bl 0x7103263540
7101b4e6a0  ldr x1,[x28, #0x168]
7101b4e6a4  mov w27,w0
7101b4e6a8  add x0,sp,#0x70
7101b4e6ac  mov x2,x20
7101b4e6b0  add x28,sp,#0x70
7101b4e6b4  bl 0x7103262310
7101b4e6b8  add x28,x28,#0x8
7101b4e6bc  adrp x0,0x71042f6000
7101b4e6c0  add x0,x0,#0x3d1
7101b4e6c4  add x8,sp,#0x28
7101b4e6c8  mov w1,w27
7101b4e6cc  mov x2,x28
7101b4e6d0  add x21,sp,#0x28
7101b4e6d4  bl 0x71003a4ca0
7101b4e6d8  add x0,x22,#0x280
7101b4e6dc  add x1,x21,#0x8
7101b4e6e0  bl 0x710377a120
7101b4e6e4  add x0,sp,#0x70
7101b4e6e8  mov x1,x25
7101b4e6ec  mov x2,x20
7101b4e6f0  mov w3,w26
7101b4e6f4  mov w4,wzr
7101b4e6f8  bl 0x7103265040
7101b4e6fc  add x0,x22,#0x290
7101b4e700  mov x1,x28
7101b4e704  bl 0x710377a120
7101b4e708  cmp w24,#0x1f
7101b4e70c  b.hi 0x7101b4e788
7101b4e710  sxtw x24,w24
7101b4e714  cmp x24,#0x20
7101b4e718  b.cs 0x7101b4e8a0
7101b4e71c  adrp x26,0x710593b000
7101b4e720  ldr x8,[x26, #0xc38]
7101b4e724  ldr x8,[x8, #0x8]
7101b4e728  ldr x21,[x8, x24, LSL #0x3]
7101b4e72c  mov x0,x25
7101b4e730  mov x1,x20
7101b4e734  bl 0x7103265e70
7101b4e738  cbz x21,0x7101b4e788
7101b4e73c  tbz w0,#0x0,0x7101b4e788
7101b4e740  ldur x9,[x29, #-0x58]
7101b4e744  mov w8,#0x58
7101b4e748  ldr x1,[sp, #0x10]
7101b4e74c  madd x20,x9,x8,x19
7101b4e750  ldr s0,[x1, #0x10]
7101b4e754  ldr x0,[x20, #0x278]
7101b4e758  bl 0x7103779770
7101b4e75c  ldr x8,[x20, #0x278]
7101b4e760  ldr x0,[x8, #0x8]
7101b4e764  cbz x0,0x7101b4e860
7101b4e768  ldr x8,[x26, #0xc38]
7101b4e76c  cbz x8,0x7101b4e860
7101b4e770  ldr x8,[x8, #0x8]
7101b4e774  ldr x1,[x8, x24, LSL #0x3]
7101b4e778  cbz x1,0x7101b4e860
7101b4e77c  mov w2,wzr
7101b4e780  bl 0x710379e9c0
7101b4e784  b 0x7101b4e860
7101b4e788  adrp x8,0x710532f000
7101b4e78c  ldr x8,[x8, #0x730]
7101b4e790  ldr x21,[x8, #0x8]
7101b4e794  ldr w2,[x23, #0x8]
7101b4e798  ldr x0,[x21, #0x2a8]
7101b4e79c  mov x1,x20
7101b4e7a0  bl 0x7103280ec0
7101b4e7a4  ldr x8,[x21, #0x2a8]
7101b4e7a8  fmov s8,wzr
7101b4e7ac  mov v0.16B,v8.16B
7101b4e7b0  mov x2,#0x6f35
7101b4e7b4  movk x2,#0x30c, LSL #16
7101b4e7b8  movk x2,#0x12, LSL #32
7101b4e7bc  ldr x23,[x8, #0x8]
7101b4e7c0  mov w22,w0
7101b4e7c4  mov x0,x23
7101b4e7c8  mov w1,w22
7101b4e7cc  bl 0x710326ad60
7101b4e7d0  str d0,[sp, #0x10]
7101b4e7d4  mov v0.16B,v8.16B
7101b4e7d8  mov x2,#0x5fa3
7101b4e7dc  movk x2,#0x740b, LSL #16
7101b4e7e0  movk x2,#0x12, LSL #32
7101b4e7e4  mov x0,x23
7101b4e7e8  mov w1,w22
7101b4e7ec  bl 0x710326ad60
7101b4e7f0  str d0,[sp]
7101b4e7f4  fmov s0,0x3f800000
7101b4e7f8  mov x2,#0xe25a
7101b4e7fc  movk x2,#0x61ee, LSL #16
7101b4e800  movk x2,#0xf, LSL #32
7101b4e804  mov x0,x23
7101b4e808  mov w1,w22
7101b4e80c  bl 0x710326ad60
7101b4e810  ldr q2,[sp, #0x10]
7101b4e814  movi v1.2D,#0x0
7101b4e818  ldur x9,[x29, #-0x58]
7101b4e81c  mov v1.S[0x0],v2.S[0x0]
7101b4e820  ldr q2,[sp]
7101b4e824  mov v1.S[0x1],v2.S[0x0]
7101b4e828  mov w8,#0x58
7101b4e82c  madd x21,x9,x8,x19
7101b4e830  add x1,sp,#0x70
7101b4e834  str q1,[sp, #0x70]
7101b4e838  ldr x0,[x21, #0x278]
7101b4e83c  bl 0x7103779770
7101b4e840  ldr x0,[x21, #0x268]
7101b4e844  ldr w2,[sp, #0x24]
7101b4e848  mov w3,#0x1
7101b4e84c  mov x1,x20
7101b4e850  bl 0x710323f330
7101b4e854  mov x1,x0
7101b4e858  ldr x0,[x21, #0x278]
7101b4e85c  bl 0x7103778b80
7101b4e860  fmov s8,0x3f800000
7101b4e864  mov v0.16B,v8.16B
7101b4e868  add x0,x19,#0x2b0
7101b4e86c  bl 0x710377aee0
7101b4e870  mov v0.16B,v8.16B
7101b4e874  add x0,x19,#0x308
7101b4e878  bl 0x710377aee0
7101b4e87c  ldr d8,[sp, #0xc0]
7101b4e880  ldp x29,x30,[sp, #0x120]
7101b4e884  ldp x20,x19,[sp, #0x110]
7101b4e888  ldp x22,x21,[sp, #0x100]
7101b4e88c  ldp x24,x23,[sp, #0xf0]
7101b4e890  ldp x26,x25,[sp, #0xe0]
7101b4e894  ldp x28,x27,[sp, #0xd0]
7101b4e898  add sp,sp,#0x130
7101b4e89c  ret
7101b4e8a0  bl 0x71039c2650
