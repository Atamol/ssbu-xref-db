// addr:      7101a5a480
// offset:    0x1a5a480
// name:      FUN_7101a5a480
// mangled:   
// size:      4340

7101a5a480  sub sp,sp,#0x170
7101a5a484  str d8,[sp, #0x100]
7101a5a488  stp x28,x27,[sp, #0x110]
7101a5a48c  stp x26,x25,[sp, #0x120]
7101a5a490  stp x24,x23,[sp, #0x130]
7101a5a494  stp x22,x21,[sp, #0x140]
7101a5a498  stp x20,x19,[sp, #0x150]
7101a5a49c  stp x29,x30,[sp, #0x160]
7101a5a4a0  add x29,sp,#0x160
7101a5a4a4  ldr w8,[x0, #0xc]
7101a5a4a8  cmp w8,w1
7101a5a4ac  b.le 0x7101a5b24c
7101a5a4b0  mov x20,x0
7101a5a4b4  ldr x23,[x0, #0xa8]!
7101a5a4b8  ldr x8,[x0, #0x8]
7101a5a4bc  sub x8,x8,x23
7101a5a4c0  mov x9,#0xefbf
7101a5a4c4  movk x9,#0xbefb, LSL #16
7101a5a4c8  movk x9,#0xfbef, LSL #32
7101a5a4cc  movk x9,#0xefbe, LSL #48
7101a5a4d0  sxtw x26,w1
7101a5a4d4  asr x8,x8,#0x4
7101a5a4d8  mul x8,x8,x9
7101a5a4dc  cmp x8,x26
7101a5a4e0  b.ls 0x7101a5b570
7101a5a4e4  orr w8,wzr,#0x3f0
7101a5a4e8  madd x8,x26,x8,x23
7101a5a4ec  add x0,x8,#0x8
7101a5a4f0  mov x1,x2
7101a5a4f4  mov x19,x2
7101a5a4f8  mov x22,#-0x3f00000000000000
7101a5a4fc  bl 0x71016b6a10
7101a5a500  ldr w8,[x19, #0x8]
7101a5a504  cmp w8,#0x3
7101a5a508  b.ne 0x7101a5a514
7101a5a50c  mov w8,wzr
7101a5a510  b 0x7101a5a530
7101a5a514  ldr x8,[x19, #0x18]
7101a5a518  tst x8,#0xffffffffff
7101a5a51c  and x8,x8,#-0x100000000000000
7101a5a520  cset w9,ne
7101a5a524  cmp x8,x22
7101a5a528  cset w8,eq
7101a5a52c  and w8,w8,w9
7101a5a530  orr w9,wzr,#0x3f0
7101a5a534  madd x9,x26,x9,x23
7101a5a538  strb w8,[x9, #0x3ed]
7101a5a53c  ldr x8,[x20, #0xc0]!
7101a5a540  ldr x9,[x20, #0x8]
7101a5a544  sub x9,x9,x8
7101a5a548  asr x9,x9,#0x4
7101a5a54c  cmp x9,x26
7101a5a550  b.ls 0x7101a5b568
7101a5a554  add x24,x8,x26, LSL #0x4
7101a5a558  ldr w1,[x19, #0x8]
7101a5a55c  ldr x0,[x24, #0x8]!
7101a5a560  bl 0x7101a58f40
7101a5a564  ldr x25,[x24]
7101a5a568  ldr x21,[x19, #0x10]
7101a5a56c  adrp x1,0x71043be000
7101a5a570  add x1,x1,#0xe80
7101a5a574  ldrb w20,[x19, #0x20]
7101a5a578  add x8,sp,#0x88
7101a5a57c  add x0,x25,#0x70
7101a5a580  bl 0x7103776910
7101a5a584  ldr w8,[x25, #0xac]
7101a5a588  and x9,x21,#-0x100000000000000
7101a5a58c  cmp x9,x22
7101a5a590  b.ne 0x7101a5a5fc
7101a5a594  and x9,x21,#0xffffffffff
7101a5a598  cbz x9,0x7101a5a5fc
7101a5a59c  cmp w8,#0x1
7101a5a5a0  b.eq 0x7101a5a6e4
7101a5a5a4  cmp w8,#0x2
7101a5a5a8  b.ne 0x7101a5a6f4
7101a5a5ac  fmov s8,0x3f800000
7101a5a5b0  ldr x0,[x25, #0x38]
7101a5a5b4  adrp x22,0x7104400000
7101a5a5b8  add x22,x22,#0xe8e
7101a5a5bc  mov x1,x22
7101a5a5c0  mov v0.16B,v8.16B
7101a5a5c4  bl 0x7103778300
7101a5a5c8  ldr x0,[x25, #0x88]
7101a5a5cc  mov v0.16B,v8.16B
7101a5a5d0  mov x1,x22
7101a5a5d4  bl 0x7103778300
7101a5a5d8  ldr x0,[x25, #0x98]
7101a5a5dc  mov v0.16B,v8.16B
7101a5a5e0  mov x1,x22
7101a5a5e4  bl 0x7103778300
7101a5a5e8  ldr x0,[x25, #0x78]
7101a5a5ec  mov v0.16B,v8.16B
7101a5a5f0  adrp x1,0x71042b3000
7101a5a5f4  add x1,x1,#0xd9d
7101a5a5f8  b 0x7101a5a704
7101a5a5fc  ldr x0,[x25, #0x78]
7101a5a600  cmp w8,#0x2
7101a5a604  b.ne 0x7101a5a6d4
7101a5a608  fmov s0,0x3f800000
7101a5a60c  adrp x1,0x71042f8000
7101a5a610  add x1,x1,#0x480
7101a5a614  mov w21,#0x9dc5
7101a5a618  movk w21,#0x811c, LSL #16
7101a5a61c  bl 0x7103778300
7101a5a620  mov x9,#0x6c70
7101a5a624  movk x9,#0x7961, LSL #16
7101a5a628  orr x8,xzr,#0xf00000000
7101a5a62c  movk x9,#0x7265, LSL #32
7101a5a630  movk x9,#0x635f, LSL #48
7101a5a634  add x10,sp,#0x20
7101a5a638  stp x8,x9,[sp, #0x20]
7101a5a63c  mov x8,#0x6c6f
7101a5a640  movk x8,#0x726f, LSL #16
7101a5a644  movk x8,#0x665f, LSL #32
7101a5a648  movk x8,#0x70, LSL #48
7101a5a64c  add x9,x10,#0x9
7101a5a650  str x8,[sp, #0x30]
7101a5a654  orr w10,wzr,#0x70
7101a5a658  mov w8,#0x89
7101a5a65c  mov w11,w21
7101a5a660  mul w11,w11,w8
7101a5a664  and w10,w10,#0xff
7101a5a668  eor w11,w11,w10
7101a5a66c  ldrb w10,[x9], #0x1
7101a5a670  cbnz w10,0x7101a5a660
7101a5a674  str w11,[sp, #0x20]
7101a5a678  add x10,sp,#0x20
7101a5a67c  add x11,sp,#0xa0
7101a5a680  mov x9,xzr
7101a5a684  add x10,x10,#0x9
7101a5a688  add x11,x11,#0x9
7101a5a68c  orr w12,wzr,#0x70
7101a5a690  str xzr,[sp, #0xa0]
7101a5a694  tst w12,#0xff
7101a5a698  b.eq 0x7101a5a8cc
7101a5a69c  add w13,w9,#0x1
7101a5a6a0  add x14,x11,x9
7101a5a6a4  cmp w13,#0x3f
7101a5a6a8  sturb w12,[x14, #-0x1]
7101a5a6ac  b.cs 0x7101a5a8c0
7101a5a6b0  ldrb w12,[x10, x9, LSL ]
7101a5a6b4  cbz w12,0x7101a5a8c8
7101a5a6b8  add x13,x10,x9
7101a5a6bc  strb w12,[x11, x9, LSL ]
7101a5a6c0  ldrb w12,[x13, #0x1]
7101a5a6c4  add x9,x9,#0x2
7101a5a6c8  tst w12,#0xff
7101a5a6cc  b.ne 0x7101a5a69c
7101a5a6d0  b 0x7101a5a8cc
7101a5a6d4  adrp x1,0x710432a000
7101a5a6d8  add x1,x1,#0x22d
7101a5a6dc  fmov s0,0x3f800000
7101a5a6e0  b 0x7101a5a920
7101a5a6e4  ldr x0,[x25, #0x78]
7101a5a6e8  adrp x1,0x71043df000
7101a5a6ec  add x1,x1,#0xacd
7101a5a6f0  b 0x7101a5a700
7101a5a6f4  ldr x0,[x25, #0x78]
7101a5a6f8  adrp x1,0x7104401000
7101a5a6fc  add x1,x1,#0x7b0
7101a5a700  fmov s0,0x3f800000
7101a5a704  bl 0x7103778300
7101a5a708  adrp x27,0x710532f000
7101a5a70c  ldr x8,[x27, #0x730]
7101a5a710  ldr x28,[x8, #0x8]
7101a5a714  add x22,x28,#0x160
7101a5a718  mov x0,x22
7101a5a71c  mov x1,x21
7101a5a720  bl 0x7103264990
7101a5a724  tbz w0,#0x0,0x7101a5a734
7101a5a728  mov x1,#0x453e
7101a5a72c  movk x1,#0xb28d, LSL #16
7101a5a730  b 0x7101a5a74c
7101a5a734  mov x0,x22
7101a5a738  mov x1,x21
7101a5a73c  bl 0x7103264ab0
7101a5a740  tbz w0,#0x0,0x7101a5a75c
7101a5a744  mov x1,#0x67a6
7101a5a748  movk x1,#0xb3e5, LSL #16
7101a5a74c  movk x1,#0x13, LSL #32
7101a5a750  ldr x0,[x28, #0x168]
7101a5a754  bl 0x71032631a0
7101a5a758  mov x21,x0
7101a5a75c  ldr x0,[x25]
7101a5a760  mov w3,#0x1
7101a5a764  mov x1,x21
7101a5a768  mov w2,w20
7101a5a76c  bl 0x710323f330
7101a5a770  ldr x22,[sp, #0x90]
7101a5a774  mov x1,x0
7101a5a778  mov x0,x22
7101a5a77c  bl 0x7103778b80
7101a5a780  ldr x8,[x27, #0x730]
7101a5a784  ldr x25,[x8, #0x8]
7101a5a788  ldr x0,[x25, #0x2a8]
7101a5a78c  mov x1,x21
7101a5a790  mov w2,w20
7101a5a794  bl 0x7103280ec0
7101a5a798  ldr x8,[x25, #0x2a8]
7101a5a79c  fmov s8,wzr
7101a5a7a0  mov v0.16B,v8.16B
7101a5a7a4  mov x2,#0xcf4f
7101a5a7a8  movk x2,#0xae7, LSL #16
7101a5a7ac  movk x2,#0x12, LSL #32
7101a5a7b0  ldr x21,[x8, #0x8]
7101a5a7b4  mov w20,w0
7101a5a7b8  mov x0,x21
7101a5a7bc  mov w1,w20
7101a5a7c0  bl 0x710326ad60
7101a5a7c4  str d0,[sp, #0x10]
7101a5a7c8  mov v0.16B,v8.16B
7101a5a7cc  mov x2,#0xffd9
7101a5a7d0  movk x2,#0x7de0, LSL #16
7101a5a7d4  movk x2,#0x12, LSL #32
7101a5a7d8  mov x0,x21
7101a5a7dc  mov w1,w20
7101a5a7e0  bl 0x710326ad60
7101a5a7e4  str d0,[sp]
7101a5a7e8  fmov s0,0x3f800000
7101a5a7ec  mov x2,#0xc649
7101a5a7f0  movk x2,#0x95a1, LSL #16
7101a5a7f4  movk x2,#0xf, LSL #32
7101a5a7f8  mov x0,x21
7101a5a7fc  mov w1,w20
7101a5a800  bl 0x710326ad60
7101a5a804  mov w0,#0x10
7101a5a808  mov w1,#0x20
7101a5a80c  mov v8.16B,v0.16B
7101a5a810  bl 0x710392e290
7101a5a814  mov x21,x0
7101a5a818  cbnz x0,0x7101a5a864
7101a5a81c  adrp x8,0x7105332000
7101a5a820  ldr x0,[x8, #0xf00]
7101a5a824  cbz x0,0x7101a5a860
7101a5a828  mov w8,#0x20
7101a5a82c  str wzr,[sp, #0x20]
7101a5a830  add x1,sp,#0x20
7101a5a834  str x8,[sp, #0xa0]
7101a5a838  ldr x8,[x0]
7101a5a83c  ldr x8,[x8, #0x30]
7101a5a840  add x2,sp,#0xa0
7101a5a844  blr x8
7101a5a848  tbz w0,#0x0,0x7101a5a860
7101a5a84c  mov w0,#0x10
7101a5a850  mov w1,#0x20
7101a5a854  bl 0x710392e290
7101a5a858  mov x21,x0
7101a5a85c  cbnz x0,0x7101a5a864
7101a5a860  mov x21,xzr
7101a5a864  stp xzr,xzr,[x21, #0x10]
7101a5a868  movi v0.2D,#0x0
7101a5a86c  stp xzr,xzr,[x21]
7101a5a870  ldr x8,[x22]
7101a5a874  ldr q1,[sp, #0x10]
7101a5a878  mov v0.S[0x0],v1.S[0x0]
7101a5a87c  str x8,[x21]
7101a5a880  ldr x8,[x22, #0x8]
7101a5a884  str x8,[x21, #0x8]
7101a5a888  ldr x20,[sp, #0x90]
7101a5a88c  ldr q1,[sp]
7101a5a890  ldr x8,[x20, #0x10]
7101a5a894  mov v0.S[0x1],v1.S[0x0]
7101a5a898  str x8,[x21, #0x10]
7101a5a89c  ldr x8,[x20, #0x18]
7101a5a8a0  str x8,[x21, #0x18]
7101a5a8a4  add x1,sp,#0xa0
7101a5a8a8  str q0,[sp, #0xa0]
7101a5a8ac  mov v0.16B,v8.16B
7101a5a8b0  mov x0,x21
7101a5a8b4  bl 0x7103779770
7101a5a8b8  cbnz x21,0x7101a5a9c8
7101a5a8bc  b 0x7101a5a9d0
7101a5a8c0  add w9,w9,#0x1
7101a5a8c4  b 0x7101a5a8cc
7101a5a8c8  add x9,x9,#0x1
7101a5a8cc  add x11,sp,#0xa0
7101a5a8d0  add x20,x11,#0x8
7101a5a8d4  strb wzr,[x20, w9, UXTW ]
7101a5a8d8  ldrb w10,[sp, #0xa8]
7101a5a8dc  str w9,[sp, #0xa4]
7101a5a8e0  cbz w10,0x7101a5a8fc
7101a5a8e4  add x9,x11,#0x9
7101a5a8e8  mul w11,w21,w8
7101a5a8ec  and w10,w10,#0xff
7101a5a8f0  eor w21,w11,w10
7101a5a8f4  ldrb w10,[x9], #0x1
7101a5a8f8  cbnz w10,0x7101a5a8e8
7101a5a8fc  fmov s8,0x3f800000
7101a5a900  str w21,[sp, #0xa0]
7101a5a904  ldr x0,[x25, #0x38]
7101a5a908  mov x1,x20
7101a5a90c  mov v0.16B,v8.16B
7101a5a910  bl 0x7103778300
7101a5a914  ldr x0,[x25, #0x98]
7101a5a918  mov v0.16B,v8.16B
7101a5a91c  mov x1,x20
7101a5a920  bl 0x7103778300
7101a5a924  ldr x20,[sp, #0x90]
7101a5a928  mov w1,#0x1
7101a5a92c  mov x0,x20
7101a5a930  bl 0x71037790a0
7101a5a934  mov w0,#0x10
7101a5a938  mov w1,#0x20
7101a5a93c  bl 0x710392e290
7101a5a940  mov x21,x0
7101a5a944  cbnz x0,0x7101a5a990
7101a5a948  adrp x8,0x7105332000
7101a5a94c  ldr x0,[x8, #0xf00]
7101a5a950  cbz x0,0x7101a5a98c
7101a5a954  mov w8,#0x20
7101a5a958  str wzr,[sp, #0x20]
7101a5a95c  add x1,sp,#0x20
7101a5a960  str x8,[sp, #0xa0]
7101a5a964  ldr x8,[x0]
7101a5a968  ldr x8,[x8, #0x30]
7101a5a96c  add x2,sp,#0xa0
7101a5a970  blr x8
7101a5a974  tbz w0,#0x0,0x7101a5a98c
7101a5a978  mov w0,#0x10
7101a5a97c  mov w1,#0x20
7101a5a980  bl 0x710392e290
7101a5a984  mov x21,x0
7101a5a988  cbnz x0,0x7101a5a990
7101a5a98c  mov x21,xzr
7101a5a990  stp xzr,xzr,[x21, #0x10]
7101a5a994  mov x0,x21
7101a5a998  stp xzr,xzr,[x21]
7101a5a99c  ldr x8,[x20]
7101a5a9a0  str x8,[x21]
7101a5a9a4  ldr x8,[x20, #0x8]
7101a5a9a8  str x8,[x21, #0x8]
7101a5a9ac  ldr x20,[sp, #0x90]
7101a5a9b0  ldr x8,[x20, #0x10]
7101a5a9b4  str x8,[x21, #0x10]
7101a5a9b8  ldr x8,[x20, #0x18]
7101a5a9bc  str x8,[x21, #0x18]
7101a5a9c0  bl 0x71037799d0
7101a5a9c4  cbz x21,0x7101a5a9d0
7101a5a9c8  mov x0,x21
7101a5a9cc  bl 0x710392eb40
7101a5a9d0  adrp x25,0x710523d000
7101a5a9d4  add x25,x25,#0x9a8
7101a5a9d8  stp x25,xzr,[sp, #0x88]
7101a5a9dc  cbz x20,0x7101a5a9e8
7101a5a9e0  mov x0,x20
7101a5a9e4  bl 0x710392eb40
7101a5a9e8  ldr x21,[x24]
7101a5a9ec  ldr w8,[x21, #0xac]
7101a5a9f0  ldrb w20,[x19, #0x21]
7101a5a9f4  str w20,[x21, #0xb4]
7101a5a9f8  cmp w8,#0x1
7101a5a9fc  b.ne 0x7101a5aa2c
7101a5aa00  add x0,x21,#0x50
7101a5aa04  adrp x1,0x71042b3000
7101a5aa08  add x1,x1,#0xd87
7101a5aa0c  mov w2,#0x1
7101a5aa10  mov w3,w20
7101a5aa14  bl 0x710377a280
7101a5aa18  add x0,x21,#0x30
7101a5aa1c  adrp x1,0x710439d000
7101a5aa20  add x1,x1,#0xc8e
7101a5aa24  mov w2,w20
7101a5aa28  bl 0x7103778430
7101a5aa2c  orr w8,wzr,#0x3f0
7101a5aa30  madd x8,x26,x8,x23
7101a5aa34  ldr w8,[x8, #0x10]
7101a5aa38  cmp w8,#0x2
7101a5aa3c  b.ne 0x7101a5ab3c
7101a5aa40  ldrb w8,[x19, #0xf0]
7101a5aa44  ldr x9,[x24]
7101a5aa48  str w8,[x9, #0xb8]
7101a5aa4c  ldr x8,[x24]
7101a5aa50  add x0,x8,#0x30
7101a5aa54  adrp x1,0x7104281000
7101a5aa58  add x1,x1,#0x234
7101a5aa5c  add x8,sp,#0xa0
7101a5aa60  bl 0x7103776910
7101a5aa64  ldr x20,[sp, #0xa8]
7101a5aa68  ldr x0,[x20, #0x10]
7101a5aa6c  cbz x0,0x7101a5aa80
7101a5aa70  add x1,x19,#0xd0
7101a5aa74  mov w2,#0xffffffff
7101a5aa78  mov w3,#0x1
7101a5aa7c  bl 0x71037a2270
7101a5aa80  stp x25,xzr,[sp, #0xa0]
7101a5aa84  cbz x20,0x7101a5aa90
7101a5aa88  mov x0,x20
7101a5aa8c  bl 0x710392eb40
7101a5aa90  ldr x8,[x24]
7101a5aa94  ldrb w20,[x19, #0x108]
7101a5aa98  adrp x1,0x710435b000
7101a5aa9c  add x1,x1,#0x7fe
7101a5aaa0  add x0,x8,#0x30
7101a5aaa4  add x8,sp,#0x20
7101a5aaa8  bl 0x7103776640
7101a5aaac  cmp w20,#0x3
7101a5aab0  b.hi 0x7101a5af8c
7101a5aab4  adrp x9,0x71044f7000
7101a5aab8  add x9,x9,#0x844
7101a5aabc  add x8,sp,#0xa0
7101a5aac0  ldrsw x10,[x9, x20, LSL #0x2]
7101a5aac4  add x9,x10,x9
7101a5aac8  br x9
7101a5aacc  mov x9,#0x1300000000
7101a5aad0  str x9,[sp, #0xa0]
7101a5aad4  mov x9,#0x7073
7101a5aad8  movk x9,#0x7269, LSL #16
7101a5aadc  add x10,sp,#0xa0
7101a5aae0  add x1,x10,#0x8
7101a5aae4  movk x9,#0x7469, LSL #32
7101a5aae8  movk x9,#0x615f, LSL #48
7101a5aaec  str x9,[sp, #0xa8]
7101a5aaf0  add x9,x10,#0x9
7101a5aaf4  mov x10,#0x7474
7101a5aaf8  movk x10,#0x6361, LSL #16
7101a5aafc  movk x10,#0x656b, LSL #32
7101a5ab00  movk x10,#0x5f72, LSL #48
7101a5ab04  str x10,[sp, #0xb0]
7101a5ab08  mov w10,#0x6f6e
7101a5ab0c  movk w10,#0x6e, LSL #16
7101a5ab10  str w10,[sp, #0xb8]
7101a5ab14  mov w8,#0x9dc5
7101a5ab18  movk w8,#0x811c, LSL #16
7101a5ab1c  mov w11,#0x73
7101a5ab20  mov w10,#0x89
7101a5ab24  mul w8,w8,w10
7101a5ab28  and w11,w11,#0xff
7101a5ab2c  eor w8,w8,w11
7101a5ab30  ldrb w11,[x9], #0x1
7101a5ab34  cbnz w11,0x7101a5ab24
7101a5ab38  b 0x7101a5aff8
7101a5ab3c  ldr x21,[x24]
7101a5ab40  ldr w8,[x21, #0xac]
7101a5ab44  cmp w8,#0x2
7101a5ab48  b.eq 0x7101a5b038
7101a5ab4c  adrp x23,0x710532f000
7101a5ab50  ldr x8,[x23, #0x730]
7101a5ab54  ldrb w26,[x19, #0x180]
7101a5ab58  add x20,x21,#0x80
7101a5ab5c  adrp x1,0x710435b000
7101a5ab60  add x1,x1,#0x7fe
7101a5ab64  mov x0,x20
7101a5ab68  ldr x22,[x8, #0x8]
7101a5ab6c  add x8,sp,#0x20
7101a5ab70  bl 0x7103776640
7101a5ab74  adrp x1,0x710438c000
7101a5ab78  add x1,x1,#0xa75
7101a5ab7c  add x8,sp,#0x88
7101a5ab80  mov x0,x20
7101a5ab84  bl 0x7103776910
7101a5ab88  adrp x1,0x71043be000
7101a5ab8c  add x1,x1,#0x697
7101a5ab90  add x8,sp,#0x78
7101a5ab94  mov x0,x20
7101a5ab98  bl 0x7103776910
7101a5ab9c  ldrsh w8,[x19, #0x18e]
7101a5aba0  ldr x0,[x21, #0x88]
7101a5aba4  cmn w8,#0x1
7101a5aba8  b.eq 0x7101a5b270
7101a5abac  fmov s8,0x3f800000
7101a5abb0  mov v0.16B,v8.16B
7101a5abb4  adrp x1,0x71043e0000
7101a5abb8  add x1,x1,#0x1a5
7101a5abbc  bl 0x7103778300
7101a5abc0  sub w8,w26,#0x1
7101a5abc4  and x9,x8,#0xff
7101a5abc8  lsl x9,x9,#0x3
7101a5abcc  mov w10,#0x301
7101a5abd0  movk w10,#0x2, LSL #16
7101a5abd4  lsr w9,w10,w9
7101a5abd8  cmp w8,#0x3
7101a5abdc  csel w1,w9,wzr,cc
7101a5abe0  add x0,sp,#0xa0
7101a5abe4  mov w2,wzr
7101a5abe8  add x20,sp,#0xa0
7101a5abec  bl 0x710339dde0
7101a5abf0  ldr x0,[sp, #0x28]
7101a5abf4  mov v0.16B,v8.16B
7101a5abf8  add x1,x20,#0x8
7101a5abfc  bl 0x7103778300
7101a5ac00  ldrh w1,[x19, #0x18e]
7101a5ac04  ldr x0,[x22, #0x1d8]
7101a5ac08  ldr x20,[x21]
7101a5ac0c  bl 0x71032a9470
7101a5ac10  mov x1,x0
7101a5ac14  orr w2,wzr,#0x18
7101a5ac18  mov x0,x20
7101a5ac1c  bl 0x710323faf0
7101a5ac20  ldr x8,[x0, #0x8]
7101a5ac24  ldr x8,[x8]
7101a5ac28  cbz x8,0x7101a5b3ec
7101a5ac2c  mov x21,x0
7101a5ac30  ldr x20,[sp, #0x90]
7101a5ac34  mov x0,x20
7101a5ac38  mov x1,x21
7101a5ac3c  bl 0x7103778b80
7101a5ac40  ldr x0,[sp, #0x80]
7101a5ac44  mov x1,x21
7101a5ac48  bl 0x7103778b80
7101a5ac4c  orr w8,wzr,#0x3f800000
7101a5ac50  str w8,[sp, #0x70]
7101a5ac54  ldr x8,[x23, #0x730]
7101a5ac58  str xzr,[sp, #0x68]
7101a5ac5c  ldrh w1,[x19, #0x18e]
7101a5ac60  ldr x8,[x8, #0x8]
7101a5ac64  ldr x0,[x22, #0x1d8]
7101a5ac68  add x21,x8,#0x1e0
7101a5ac6c  bl 0x71032a9470
7101a5ac70  mov x1,x0
7101a5ac74  orr w2,wzr,#0x3
7101a5ac78  add x3,sp,#0x68
7101a5ac7c  mov x0,x21
7101a5ac80  add x22,sp,#0x68
7101a5ac84  bl 0x71032abaf0
7101a5ac88  mov w0,#0x10
7101a5ac8c  mov w1,#0x20
7101a5ac90  bl 0x710392e290
7101a5ac94  mov x21,x0
7101a5ac98  cbnz x0,0x7101a5ace4
7101a5ac9c  adrp x8,0x7105332000
7101a5aca0  ldr x0,[x8, #0xf00]
7101a5aca4  cbz x0,0x7101a5ace0
7101a5aca8  mov w8,#0x20
7101a5acac  str wzr,[sp, #0x9c]
7101a5acb0  add x1,sp,#0x9c
7101a5acb4  str x8,[sp, #0xa0]
7101a5acb8  ldr x8,[x0]
7101a5acbc  ldr x8,[x8, #0x30]
7101a5acc0  add x2,sp,#0xa0
7101a5acc4  blr x8
7101a5acc8  tbz w0,#0x0,0x7101a5ace0
7101a5accc  mov w0,#0x10
7101a5acd0  mov w1,#0x20
7101a5acd4  bl 0x710392e290
7101a5acd8  mov x21,x0
7101a5acdc  cbnz x0,0x7101a5ace4
7101a5ace0  mov x21,xzr
7101a5ace4  stp xzr,xzr,[x21, #0x10]
7101a5ace8  movi v0.2D,#0x0
7101a5acec  stp xzr,xzr,[x21]
7101a5acf0  ldr x8,[x20]
7101a5acf4  add x1,sp,#0xa0
7101a5acf8  mov x0,x21
7101a5acfc  str x8,[x21]
7101a5ad00  ldr x8,[x20, #0x8]
7101a5ad04  str x8,[x21, #0x8]
7101a5ad08  ldr x8,[sp, #0x90]
7101a5ad0c  ldr x9,[x8, #0x10]
7101a5ad10  str x9,[x21, #0x10]
7101a5ad14  ldr x8,[x8, #0x18]
7101a5ad18  str x8,[x21, #0x18]
7101a5ad1c  ld1 {v0.S}[0],[x22]
7101a5ad20  orr x8,x22,#0x4
7101a5ad24  ld1 {v0.S}[1],[x8]
7101a5ad28  str q0,[sp, #0x10]
7101a5ad2c  str q0,[sp, #0xa0]
7101a5ad30  ldr s0,[sp, #0x70]
7101a5ad34  bl 0x7103779770
7101a5ad38  cbz x21,0x7101a5ad44
7101a5ad3c  mov x0,x21
7101a5ad40  bl 0x710392eb40
7101a5ad44  mov w0,#0x10
7101a5ad48  mov w1,#0x20
7101a5ad4c  bl 0x710392e290
7101a5ad50  mov x21,x0
7101a5ad54  cbnz x0,0x7101a5ada0
7101a5ad58  adrp x8,0x7105332000
7101a5ad5c  ldr x0,[x8, #0xf00]
7101a5ad60  cbz x0,0x7101a5ad9c
7101a5ad64  mov w8,#0x20
7101a5ad68  str wzr,[sp, #0x9c]
7101a5ad6c  add x1,sp,#0x9c
7101a5ad70  str x8,[sp, #0xa0]
7101a5ad74  ldr x8,[x0]
7101a5ad78  ldr x8,[x8, #0x30]
7101a5ad7c  add x2,sp,#0xa0
7101a5ad80  blr x8
7101a5ad84  tbz w0,#0x0,0x7101a5ad9c
7101a5ad88  mov w0,#0x10
7101a5ad8c  mov w1,#0x20
7101a5ad90  bl 0x710392e290
7101a5ad94  mov x21,x0
7101a5ad98  cbnz x0,0x7101a5ada0
7101a5ad9c  mov x21,xzr
7101a5ada0  stp xzr,xzr,[x21, #0x10]
7101a5ada4  add x1,sp,#0xa0
7101a5ada8  stp xzr,xzr,[x21]
7101a5adac  ldr x8,[sp, #0x80]
7101a5adb0  ldr x9,[x8]
7101a5adb4  str x9,[x21]
7101a5adb8  ldr x8,[x8, #0x8]
7101a5adbc  str x8,[x21, #0x8]
7101a5adc0  ldr x20,[sp, #0x80]
7101a5adc4  ldr x8,[x20, #0x10]
7101a5adc8  str x8,[x21, #0x10]
7101a5adcc  ldr x8,[x20, #0x18]
7101a5add0  ldr q0,[sp, #0x10]
7101a5add4  str x8,[x21, #0x18]
7101a5add8  mov x0,x21
7101a5addc  str q0,[sp, #0xa0]
7101a5ade0  ldr s0,[sp, #0x70]
7101a5ade4  bl 0x7103779770
7101a5ade8  cbz x21,0x7101a5adf4
7101a5adec  mov x0,x21
7101a5adf0  bl 0x710392eb40
7101a5adf4  stp x25,xzr,[sp, #0x78]
7101a5adf8  cbz x20,0x7101a5ae04
7101a5adfc  mov x0,x20
7101a5ae00  bl 0x710392eb40
7101a5ae04  ldr x0,[sp, #0x90]
7101a5ae08  stp x25,xzr,[sp, #0x88]
7101a5ae0c  cbz x0,0x7101a5ae14
7101a5ae10  bl 0x710392eb40
7101a5ae14  ldr x20,[sp, #0x28]
7101a5ae18  b 0x7101a5b00c
7101a5ae1c  mov x12,#0x7073
7101a5ae20  movk x12,#0x7269, LSL #16
7101a5ae24  mov x10,#0x1700000000
7101a5ae28  movk x12,#0x7469, LSL #32
7101a5ae2c  movk x12,#0x615f, LSL #48
7101a5ae30  add x11,sp,#0xa0
7101a5ae34  stp x10,x12,[sp, #0xa0]
7101a5ae38  mov x10,#0x7474
7101a5ae3c  movk x10,#0x6361, LSL #16
7101a5ae40  movk x10,#0x656b, LSL #32
7101a5ae44  movk x10,#0x5f72, LSL #48
7101a5ae48  add x1,x11,#0x8
7101a5ae4c  str x10,[sp, #0xb0]
7101a5ae50  add x10,x11,#0x9
7101a5ae54  mov w11,#0x6564
7101a5ae58  strh w11,[sp, #0xb8]
7101a5ae5c  mov w11,#0x6566
7101a5ae60  movk w11,#0x736e, LSL #16
7101a5ae64  stur w11,[x8, #0x1a]
7101a5ae68  mov w8,#0x65
7101a5ae6c  mov w9,#0x9dc5
7101a5ae70  movk w9,#0x811c, LSL #16
7101a5ae74  strh w8,[sp, #0xbe]
7101a5ae78  mov w11,#0x73
7101a5ae7c  mov w8,#0x89
7101a5ae80  mul w9,w9,w8
7101a5ae84  and w11,w11,#0xff
7101a5ae88  eor w9,w9,w11
7101a5ae8c  ldrb w11,[x10], #0x1
7101a5ae90  cbnz w11,0x7101a5ae80
7101a5ae94  b 0x7101a5af84
7101a5ae98  mov x12,#0x7073
7101a5ae9c  movk x12,#0x7269, LSL #16
7101a5aea0  mov x10,#0x1500000000
7101a5aea4  movk x12,#0x7469, LSL #32
7101a5aea8  movk x12,#0x615f, LSL #48
7101a5aeac  add x11,sp,#0xa0
7101a5aeb0  stp x10,x12,[sp, #0xa0]
7101a5aeb4  mov x10,#0x7474
7101a5aeb8  movk x10,#0x6361, LSL #16
7101a5aebc  movk x10,#0x656b, LSL #32
7101a5aec0  movk x10,#0x5f72, LSL #48
7101a5aec4  add x1,x11,#0x8
7101a5aec8  str x10,[sp, #0xb0]
7101a5aecc  add x10,x11,#0x9
7101a5aed0  mov w11,#0x6874
7101a5aed4  strh w11,[sp, #0xb8]
7101a5aed8  mov w11,#0x6f72
7101a5aedc  movk w11,#0x77, LSL #16
7101a5aee0  stur w11,[x8, #0x1a]
7101a5aee4  mov w9,#0x9dc5
7101a5aee8  movk w9,#0x811c, LSL #16
7101a5aeec  mov w11,#0x73
7101a5aef0  mov w8,#0x89
7101a5aef4  mul w9,w9,w8
7101a5aef8  and w11,w11,#0xff
7101a5aefc  eor w9,w9,w11
7101a5af00  ldrb w11,[x10], #0x1
7101a5af04  cbnz w11,0x7101a5aef4
7101a5af08  b 0x7101a5af84
7101a5af0c  mov x12,#0x7073
7101a5af10  movk x12,#0x7269, LSL #16
7101a5af14  mov x10,#0x1700000000
7101a5af18  movk x12,#0x7469, LSL #32
7101a5af1c  movk x12,#0x615f, LSL #48
7101a5af20  add x11,sp,#0xa0
7101a5af24  stp x10,x12,[sp, #0xa0]
7101a5af28  mov x10,#0x7474
7101a5af2c  movk x10,#0x6361, LSL #16
7101a5af30  movk x10,#0x656b, LSL #32
7101a5af34  movk x10,#0x5f72, LSL #48
7101a5af38  add x1,x11,#0x8
7101a5af3c  str x10,[sp, #0xb0]
7101a5af40  add x10,x11,#0x9
7101a5af44  mov w11,#0x666f
7101a5af48  strh w11,[sp, #0xb8]
7101a5af4c  mov w11,#0x6566
7101a5af50  movk w11,#0x736e, LSL #16
7101a5af54  stur w11,[x8, #0x1a]
7101a5af58  mov w8,#0x65
7101a5af5c  mov w9,#0x9dc5
7101a5af60  movk w9,#0x811c, LSL #16
7101a5af64  strh w8,[sp, #0xbe]
7101a5af68  mov w11,#0x73
7101a5af6c  mov w8,#0x89
7101a5af70  mul w9,w9,w8
7101a5af74  and w11,w11,#0xff
7101a5af78  eor w9,w9,w11
7101a5af7c  ldrb w11,[x10], #0x1
7101a5af80  cbnz w11,0x7101a5af70
7101a5af84  str w9,[sp, #0xa0]
7101a5af88  b 0x7101a5affc
7101a5af8c  mov x9,#0x1300000000
7101a5af90  str x9,[sp, #0xa0]
7101a5af94  mov x9,#0x7073
7101a5af98  movk x9,#0x7269, LSL #16
7101a5af9c  add x10,sp,#0xa0
7101a5afa0  add x1,x10,#0x8
7101a5afa4  movk x9,#0x7469, LSL #32
7101a5afa8  movk x9,#0x615f, LSL #48
7101a5afac  str x9,[sp, #0xa8]
7101a5afb0  add x9,x10,#0x9
7101a5afb4  mov x10,#0x7474
7101a5afb8  movk x10,#0x6361, LSL #16
7101a5afbc  movk x10,#0x656b, LSL #32
7101a5afc0  movk x10,#0x5f72, LSL #48
7101a5afc4  str x10,[sp, #0xb0]
7101a5afc8  mov w10,#0x6f6e
7101a5afcc  movk w10,#0x6e, LSL #16
7101a5afd0  str w10,[sp, #0xb8]
7101a5afd4  mov w8,#0x9dc5
7101a5afd8  movk w8,#0x811c, LSL #16
7101a5afdc  mov w11,#0x73
7101a5afe0  mov w10,#0x89
7101a5afe4  mul w8,w8,w10
7101a5afe8  and w11,w11,#0xff
7101a5afec  eor w8,w8,w11
7101a5aff0  ldrb w11,[x9], #0x1
7101a5aff4  cbnz w11,0x7101a5afe4
7101a5aff8  str w8,[sp, #0xa0]
7101a5affc  ldr x20,[sp, #0x28]
7101a5b000  fmov s0,0x3f800000
7101a5b004  mov x0,x20
7101a5b008  bl 0x7103778300
7101a5b00c  adrp x8,0x710523d000
7101a5b010  add x8,x8,#0x988
7101a5b014  str x8,[sp, #0x20]
7101a5b018  str xzr,[sp, #0x28]
7101a5b01c  cbz x20,0x7101a5b038
7101a5b020  ldr x0,[x20, #0x18]
7101a5b024  stp x25,xzr,[x20, #0x10]
7101a5b028  cbz x0,0x7101a5b030
7101a5b02c  bl 0x710392eb40
7101a5b030  mov x0,x20
7101a5b034  bl 0x710392eb40
7101a5b038  ldr x8,[x24]
7101a5b03c  ldrh w20,[x19, #0x26]
7101a5b040  adrp x1,0x710425e000
7101a5b044  add x1,x1,#0xdae
7101a5b048  add x22,x8,#0x90
7101a5b04c  mov x21,#0x3f84
7101a5b050  movk x21,#0x7e19, LSL #16
7101a5b054  add x8,sp,#0xa0
7101a5b058  mov x0,x22
7101a5b05c  movk x21,#0xe, LSL #32
7101a5b060  bl 0x7103776910
7101a5b064  add x0,sp,#0xa0
7101a5b068  mov w1,#0x1
7101a5b06c  mov w2,w20
7101a5b070  bl 0x710377a310
7101a5b074  adrp x26,0x710532f000
7101a5b078  ldr x8,[x26, #0x8c0]
7101a5b07c  ldr x23,[x8, #0x8]
7101a5b080  fmov s0,wzr
7101a5b084  mov x0,x23
7101a5b088  mov x1,x21
7101a5b08c  bl 0x71033112b0
7101a5b090  fcvtzs w8,s0
7101a5b094  cmp w8,w20
7101a5b098  ldp x0,x1,[x23, #0xe0]
7101a5b09c  csel w8,w8,w20,gt
7101a5b0a0  scvtf s0,w8
7101a5b0a4  bl 0x71033115f0
7101a5b0a8  ldr x23,[sp, #0xa8]
7101a5b0ac  str w0,[sp, #0x20]
7101a5b0b0  ldr x0,[x23, #0x10]
7101a5b0b4  add x1,sp,#0x20
7101a5b0b8  bl 0x710377a5b0
7101a5b0bc  stp x25,xzr,[sp, #0xa0]
7101a5b0c0  cbz x23,0x7101a5b0cc
7101a5b0c4  mov x0,x23
7101a5b0c8  bl 0x710392eb40
7101a5b0cc  adrp x1,0x7104307000
7101a5b0d0  add x1,x1,#0xf8f
7101a5b0d4  add x8,sp,#0xa0
7101a5b0d8  mov x0,x22
7101a5b0dc  bl 0x7103776910
7101a5b0e0  add x0,sp,#0xa0
7101a5b0e4  mov w1,#0x1
7101a5b0e8  mov w2,w20
7101a5b0ec  bl 0x710377a310
7101a5b0f0  ldr x8,[x26, #0x8c0]
7101a5b0f4  ldr x22,[x8, #0x8]
7101a5b0f8  fmov s0,wzr
7101a5b0fc  mov x0,x22
7101a5b100  mov x1,x21
7101a5b104  bl 0x71033112b0
7101a5b108  fcvtzs w8,s0
7101a5b10c  cmp w8,w20
7101a5b110  ldp x0,x1,[x22, #0xe0]
7101a5b114  csel w8,w8,w20,gt
7101a5b118  scvtf s0,w8
7101a5b11c  bl 0x71033115f0
7101a5b120  ldr x20,[sp, #0xa8]
7101a5b124  str w0,[sp, #0x20]
7101a5b128  ldr x0,[x20, #0x10]
7101a5b12c  add x1,sp,#0x20
7101a5b130  bl 0x710377a5b0
7101a5b134  stp x25,xzr,[sp, #0xa0]
7101a5b138  cbz x20,0x7101a5b144
7101a5b13c  mov x0,x20
7101a5b140  bl 0x710392eb40
7101a5b144  ldr x8,[x24]
7101a5b148  ldrh w19,[x19, #0x22]
7101a5b14c  adrp x1,0x7104454000
7101a5b150  add x1,x1,#0x520
7101a5b154  add x21,x8,#0x90
7101a5b158  mov x20,#0xd008
7101a5b15c  movk x20,#0x1d09, LSL #16
7101a5b160  add x8,sp,#0xa0
7101a5b164  mov x0,x21
7101a5b168  movk x20,#0xf, LSL #32
7101a5b16c  bl 0x7103776910
7101a5b170  add x0,sp,#0xa0
7101a5b174  mov w1,#0x1
7101a5b178  mov w2,w19
7101a5b17c  bl 0x710377a310
7101a5b180  ldr x8,[x26, #0x8c0]
7101a5b184  ldr x22,[x8, #0x8]
7101a5b188  fmov s0,wzr
7101a5b18c  mov x0,x22
7101a5b190  mov x1,x20
7101a5b194  bl 0x71033112b0
7101a5b198  fcvtzs w8,s0
7101a5b19c  cmp w8,w19
7101a5b1a0  ldp x0,x1,[x22, #0xc8]
7101a5b1a4  csel w8,w8,w19,lt
7101a5b1a8  scvtf s0,w8
7101a5b1ac  bl 0x71033114a0
7101a5b1b0  ldr x22,[sp, #0xa8]
7101a5b1b4  str w0,[sp, #0x20]
7101a5b1b8  ldr x0,[x22, #0x10]
7101a5b1bc  add x1,sp,#0x20
7101a5b1c0  bl 0x710377a5b0
7101a5b1c4  stp x25,xzr,[sp, #0xa0]
7101a5b1c8  cbz x22,0x7101a5b1d4
7101a5b1cc  mov x0,x22
7101a5b1d0  bl 0x710392eb40
7101a5b1d4  adrp x1,0x71043ad000
7101a5b1d8  add x1,x1,#0x1cf
7101a5b1dc  add x8,sp,#0xa0
7101a5b1e0  mov x0,x21
7101a5b1e4  bl 0x7103776910
7101a5b1e8  add x0,sp,#0xa0
7101a5b1ec  mov w1,#0x1
7101a5b1f0  mov w2,w19
7101a5b1f4  bl 0x710377a310
7101a5b1f8  ldr x8,[x26, #0x8c0]
7101a5b1fc  ldr x21,[x8, #0x8]
7101a5b200  fmov s0,wzr
7101a5b204  mov x0,x21
7101a5b208  mov x1,x20
7101a5b20c  bl 0x71033112b0
7101a5b210  fcvtzs w8,s0
7101a5b214  cmp w8,w19
7101a5b218  ldp x0,x1,[x21, #0xc8]
7101a5b21c  csel w8,w8,w19,lt
7101a5b220  scvtf s0,w8
7101a5b224  bl 0x71033114a0
7101a5b228  ldr x19,[sp, #0xa8]
7101a5b22c  str w0,[sp, #0x20]
7101a5b230  ldr x0,[x19, #0x10]
7101a5b234  add x1,sp,#0x20
7101a5b238  bl 0x710377a5b0
7101a5b23c  stp x25,xzr,[sp, #0xa0]
7101a5b240  cbz x19,0x7101a5b24c
7101a5b244  mov x0,x19
7101a5b248  bl 0x710392eb40
7101a5b24c  ldr d8,[sp, #0x100]
7101a5b250  ldp x29,x30,[sp, #0x160]
7101a5b254  ldp x20,x19,[sp, #0x150]
7101a5b258  ldp x22,x21,[sp, #0x140]
7101a5b25c  ldp x24,x23,[sp, #0x130]
7101a5b260  ldp x26,x25,[sp, #0x120]
7101a5b264  ldp x28,x27,[sp, #0x110]
7101a5b268  add sp,sp,#0x170
7101a5b26c  ret
7101a5b270  fmov s8,0x3f800000
7101a5b274  mov v0.16B,v8.16B
7101a5b278  adrp x1,0x71043be000
7101a5b27c  add x1,x1,#0x6a5
7101a5b280  bl 0x7103778300
7101a5b284  ldr x0,[sp, #0x28]
7101a5b288  mov v0.16B,v8.16B
7101a5b28c  adrp x1,0x7104281000
7101a5b290  add x1,x1,#0x9c
7101a5b294  bl 0x7103778300
7101a5b298  ldr x20,[sp, #0x90]
7101a5b29c  mov w1,#0x1
7101a5b2a0  mov x0,x20
7101a5b2a4  bl 0x71037790a0
7101a5b2a8  ldr x0,[sp, #0x80]
7101a5b2ac  mov w1,#0x1
7101a5b2b0  bl 0x71037790a0
7101a5b2b4  mov w0,#0x10
7101a5b2b8  mov w1,#0x20
7101a5b2bc  bl 0x710392e290
7101a5b2c0  mov x21,x0
7101a5b2c4  cbnz x0,0x7101a5b310
7101a5b2c8  adrp x8,0x7105332000
7101a5b2cc  ldr x0,[x8, #0xf00]
7101a5b2d0  cbz x0,0x7101a5b30c
7101a5b2d4  mov w8,#0x20
7101a5b2d8  str wzr,[sp, #0x68]
7101a5b2dc  add x1,sp,#0x68
7101a5b2e0  str x8,[sp, #0xa0]
7101a5b2e4  ldr x8,[x0]
7101a5b2e8  ldr x8,[x8, #0x30]
7101a5b2ec  add x2,sp,#0xa0
7101a5b2f0  blr x8
7101a5b2f4  tbz w0,#0x0,0x7101a5b30c
7101a5b2f8  mov w0,#0x10
7101a5b2fc  mov w1,#0x20
7101a5b300  bl 0x710392e290
7101a5b304  mov x21,x0
7101a5b308  cbnz x0,0x7101a5b310
7101a5b30c  mov x21,xzr
7101a5b310  stp xzr,xzr,[x21, #0x10]
7101a5b314  mov x0,x21
7101a5b318  stp xzr,xzr,[x21]
7101a5b31c  ldr x8,[x20]
7101a5b320  str x8,[x21]
7101a5b324  ldr x8,[x20, #0x8]
7101a5b328  str x8,[x21, #0x8]
7101a5b32c  ldr x8,[sp, #0x90]
7101a5b330  ldr x9,[x8, #0x10]
7101a5b334  str x9,[x21, #0x10]
7101a5b338  ldr x8,[x8, #0x18]
7101a5b33c  str x8,[x21, #0x18]
7101a5b340  bl 0x71037799d0
7101a5b344  cbz x21,0x7101a5b350
7101a5b348  mov x0,x21
7101a5b34c  bl 0x710392eb40
7101a5b350  mov w0,#0x10
7101a5b354  mov w1,#0x20
7101a5b358  bl 0x710392e290
7101a5b35c  mov x21,x0
7101a5b360  cbnz x0,0x7101a5b3ac
7101a5b364  adrp x8,0x7105332000
7101a5b368  ldr x0,[x8, #0xf00]
7101a5b36c  cbz x0,0x7101a5b3a8
7101a5b370  mov w8,#0x20
7101a5b374  str wzr,[sp, #0x68]
7101a5b378  add x1,sp,#0x68
7101a5b37c  str x8,[sp, #0xa0]
7101a5b380  ldr x8,[x0]
7101a5b384  ldr x8,[x8, #0x30]
7101a5b388  add x2,sp,#0xa0
7101a5b38c  blr x8
7101a5b390  tbz w0,#0x0,0x7101a5b3a8
7101a5b394  mov w0,#0x10
7101a5b398  mov w1,#0x20
7101a5b39c  bl 0x710392e290
7101a5b3a0  mov x21,x0
7101a5b3a4  cbnz x0,0x7101a5b3ac
7101a5b3a8  mov x21,xzr
7101a5b3ac  stp xzr,xzr,[x21, #0x10]
7101a5b3b0  mov x0,x21
7101a5b3b4  stp xzr,xzr,[x21]
7101a5b3b8  ldr x8,[sp, #0x80]
7101a5b3bc  ldr x9,[x8]
7101a5b3c0  str x9,[x21]
7101a5b3c4  ldr x8,[x8, #0x8]
7101a5b3c8  str x8,[x21, #0x8]
7101a5b3cc  ldr x20,[sp, #0x80]
7101a5b3d0  ldr x8,[x20, #0x10]
7101a5b3d4  str x8,[x21, #0x10]
7101a5b3d8  ldr x8,[x20, #0x18]
7101a5b3dc  str x8,[x21, #0x18]
7101a5b3e0  bl 0x71037799d0
7101a5b3e4  cbnz x21,0x7101a5adec
7101a5b3e8  b 0x7101a5adf4
7101a5b3ec  ldr x8,[x23, #0x730]
7101a5b3f0  ldr x9,[x8, #0x8]
7101a5b3f4  ldrsh x8,[x19, #0x18e]
7101a5b3f8  ldr x0,[x9, #0x1d8]
7101a5b3fc  cmn x8,#0x1
7101a5b400  b.eq 0x7101a5b410
7101a5b404  add x9,x0,x8, LSL #0x1
7101a5b408  ldrh w9,[x9, #0x60]
7101a5b40c  b 0x7101a5b414
7101a5b410  mov w9,#0xffffffff
7101a5b414  ldp x10,x11,[x0, #0x20]
7101a5b418  sub x11,x11,x10
7101a5b41c  lsr x11,x11,#0x6
7101a5b420  mov w12,#0xcccd
7101a5b424  movk w12,#0xcccc, LSL #16
7101a5b428  mul w11,w11,w12
7101a5b42c  cmp w9,w11
7101a5b430  b.cs 0x7101a5b4c4
7101a5b434  mov w11,#0x140
7101a5b438  umaddl x9,w9,w11,x10
7101a5b43c  ldrb w9,[x9, #0x5a]
7101a5b440  cbz w9,0x7101a5b4c4
7101a5b444  adrp x9,0x7105329000
7101a5b448  ldr x9,[x9, #0xf98]
7101a5b44c  ldr x20,[x9]
7101a5b450  ldr x0,[x20, #0x20]
7101a5b454  and x2,x8,#0xffff
7101a5b458  mov w1,#0x1
7101a5b45c  mov w3,#0x20
7101a5b460  bl 0x710259c150
7101a5b464  ldrh w1,[x19, #0x18e]
7101a5b468  ldr x20,[x20, #0x20]
7101a5b46c  orr w8,wzr,#0xffff
7101a5b470  cmp x1,x8
7101a5b474  b.eq 0x7101a5b560
7101a5b478  mov x0,x20
7101a5b47c  ldr x8,[x0, #0x28]!
7101a5b480  ldr x9,[x0, #0x8]
7101a5b484  sub x11,x9,x8
7101a5b488  asr x9,x11,#0x3
7101a5b48c  cmp w9,#0x1
7101a5b490  b.lt 0x7101a5b560
7101a5b494  mov x10,xzr
7101a5b498  sbfx x11,x11,#0x3,#0x20
7101a5b49c  cmp x9,x10
7101a5b4a0  b.ls 0x7101a5b570
7101a5b4a4  ldrh w12,[x8]
7101a5b4a8  cmp w12,w1
7101a5b4ac  b.eq 0x7101a5b538
7101a5b4b0  add x10,x10,#0x1
7101a5b4b4  add x8,x8,#0x8
7101a5b4b8  cmp x10,x11
7101a5b4bc  b.lt 0x7101a5b49c
7101a5b4c0  b 0x7101a5b560
7101a5b4c4  and x1,x8,#0xffff
7101a5b4c8  bl 0x71032a9470
7101a5b4cc  orr w1,wzr,#0x18
7101a5b4d0  bl 0x7103239160
7101a5b4d4  tst x0,#0xffffffffff
7101a5b4d8  b.eq 0x7101a5b4f0
7101a5b4dc  mov x1,x0
7101a5b4e0  add x0,sp,#0xa0
7101a5b4e4  bl 0x710353da30
7101a5b4e8  ldr w21,[sp, #0xa0]
7101a5b4ec  b 0x7101a5b4f8
7101a5b4f0  orr w21,wzr,#0xffffff
7101a5b4f4  str w21,[sp, #0xa0]
7101a5b4f8  ldr x20,[sp, #0x90]
7101a5b4fc  add x1,sp,#0xa0
7101a5b500  mov x0,x20
7101a5b504  bl 0x7103778c70
7101a5b508  ldr x0,[sp, #0x80]
7101a5b50c  add x1,sp,#0xa0
7101a5b510  bl 0x7103778c70
7101a5b514  orr w26,wzr,#0xffffff
7101a5b518  cmp w21,w26
7101a5b51c  b.eq 0x7101a5ac4c
7101a5b520  adrp x8,0x7105332000
7101a5b524  ldr x0,[x8, #0xf20]
7101a5b528  mov w1,w21
7101a5b52c  bl 0x7103540b10
7101a5b530  str w26,[sp, #0xa0]
7101a5b534  b 0x7101a5ac4c
7101a5b538  tbnz w10,#0x1f,0x7101a5b560
7101a5b53c  ldr x8,[x23, #0x730]
7101a5b540  ldr x8,[x8, #0x8]
7101a5b544  ldr x0,[x8, #0x1d8]
7101a5b548  bl 0x71032a9470
7101a5b54c  mov x1,x0
7101a5b550  add x0,x20,#0x8
7101a5b554  orr w2,wzr,#0x18
7101a5b558  bl 0x710323faf0
7101a5b55c  b 0x7101a5ac2c
7101a5b560  add x21,x20,#0x70
7101a5b564  b 0x7101a5ac30
7101a5b568  mov x0,x20
7101a5b56c  bl 0x71039c1330
7101a5b570  bl 0x71039c1330
