// addr:      7101b4a760
// offset:    0x1b4a760
// name:      FUN_7101b4a760
// mangled:   
// size:      1088

7101b4a760  sub sp,sp,#0x80
7101b4a764  stp x22,x21,[sp, #0x50]
7101b4a768  stp x20,x19,[sp, #0x60]
7101b4a76c  stp x29,x30,[sp, #0x70]
7101b4a770  add x29,sp,#0x70
7101b4a774  mov w22,w4
7101b4a778  mov w20,w3
7101b4a77c  mov w21,w2
7101b4a780  mov x19,x0
7101b4a784  cmp w1,#0x4
7101b4a788  strb wzr,[sp, #0x8]
7101b4a78c  str xzr,[sp]
7101b4a790  b.hi 0x7101b4aaec
7101b4a794  mov w8,w1
7101b4a798  adrp x9,0x71044f8000
7101b4a79c  add x9,x9,#0x720
7101b4a7a0  ldrsw x8,[x9, x8, LSL #0x2]
7101b4a7a4  add x8,x8,x9
7101b4a7a8  br x8
7101b4a7ac  mov x10,#0x735f
7101b4a7b0  movk x10,#0x6174, LSL #16
7101b4a7b4  movk x10,#0x6567, LSL #32
7101b4a7b8  movk x10,#0x705f, LSL #48
7101b4a7bc  str x10,[sp, #0x10]
7101b4a7c0  mov w10,#0x6b6f
7101b4a7c4  strh w10,[sp, #0x18]
7101b4a7c8  mov x10,#0x5f65
7101b4a7cc  movk x10,#0x7473, LSL #16
7101b4a7d0  movk x10,#0x6461, LSL #32
7101b4a7d4  movk x10,#0x7569, LSL #48
7101b4a7d8  stur x10,[sp, #0x1a]
7101b4a7dc  mov w10,#0x5f6d
7101b4a7e0  movk w10,#0x7974, LSL #16
7101b4a7e4  stur w10,[sp, #0x22]
7101b4a7e8  mov w10,#0x6570
7101b4a7ec  mov x9,#0x656d
7101b4a7f0  movk x9,#0x5f6c, LSL #16
7101b4a7f4  movk x9,#0x6e69, LSL #32
7101b4a7f8  movk x9,#0x6f66, LSL #48
7101b4a7fc  str x9,[sp, #0x8]
7101b4a800  strh w10,[sp, #0x26]
7101b4a804  mov x10,#0x6e5f
7101b4a808  movk x10,#0x726f, LSL #16
7101b4a80c  movk x10,#0x616d, LSL #32
7101b4a810  movk x10,#0x6c, LSL #48
7101b4a814  str x10,[sp, #0x28]
7101b4a818  mov x9,sp
7101b4a81c  mov w10,#0x27
7101b4a820  str w10,[sp, #0x4]
7101b4a824  mov w8,#0x9dc5
7101b4a828  movk w8,#0x811c, LSL #16
7101b4a82c  add x9,x9,#0x9
7101b4a830  mov w11,#0x6d
7101b4a834  mov w10,#0x89
7101b4a838  mul w8,w8,w10
7101b4a83c  and w11,w11,#0xff
7101b4a840  eor w8,w8,w11
7101b4a844  ldrb w11,[x9], #0x1
7101b4a848  cbnz w11,0x7101b4a838
7101b4a84c  b 0x7101b4aae8
7101b4a850  mov w10,#0x6b6f
7101b4a854  strh w10,[sp, #0x18]
7101b4a858  mov x10,#0x5f65
7101b4a85c  movk x10,#0x7473, LSL #16
7101b4a860  movk x10,#0x6461, LSL #32
7101b4a864  movk x10,#0x7569, LSL #48
7101b4a868  stur x10,[sp, #0x1a]
7101b4a86c  mov w10,#0x5f6d
7101b4a870  movk w10,#0x7974, LSL #16
7101b4a874  stur w10,[sp, #0x22]
7101b4a878  mov w10,#0x6570
7101b4a87c  mov x9,#0x735f
7101b4a880  movk x9,#0x6174, LSL #16
7101b4a884  movk x9,#0x6567, LSL #32
7101b4a888  movk x9,#0x705f, LSL #48
7101b4a88c  strh w10,[sp, #0x26]
7101b4a890  mov w10,#0x675f
7101b4a894  movk w10,#0x6172, LSL #16
7101b4a898  mov x8,#0x656d
7101b4a89c  movk x8,#0x5f6c, LSL #16
7101b4a8a0  str w10,[sp, #0x28]
7101b4a8a4  mov w10,#0x7373
7101b4a8a8  str x9,[sp, #0x10]
7101b4a8ac  strh w10,[sp, #0x2c]
7101b4a8b0  movk x8,#0x6e69, LSL #32
7101b4a8b4  movk x8,#0x6f66, LSL #48
7101b4a8b8  str x8,[sp, #0x8]
7101b4a8bc  mov x9,sp
7101b4a8c0  mov w10,#0x26
7101b4a8c4  str w10,[sp, #0x4]
7101b4a8c8  mov w8,#0x9dc5
7101b4a8cc  movk w8,#0x811c, LSL #16
7101b4a8d0  strb wzr,[sp, #0x2e]
7101b4a8d4  add x9,x9,#0x9
7101b4a8d8  mov w11,#0x6d
7101b4a8dc  mov w10,#0x89
7101b4a8e0  mul w8,w8,w10
7101b4a8e4  and w11,w11,#0xff
7101b4a8e8  eor w8,w8,w11
7101b4a8ec  ldrb w11,[x9], #0x1
7101b4a8f0  cbnz w11,0x7101b4a8e0
7101b4a8f4  b 0x7101b4aae8
7101b4a8f8  mov w10,#0x6b6f
7101b4a8fc  strh w10,[sp, #0x18]
7101b4a900  mov x10,#0x5f65
7101b4a904  movk x10,#0x7473, LSL #16
7101b4a908  movk x10,#0x6461, LSL #32
7101b4a90c  movk x10,#0x7569, LSL #48
7101b4a910  stur x10,[sp, #0x1a]
7101b4a914  mov w10,#0x5f6d
7101b4a918  movk w10,#0x7974, LSL #16
7101b4a91c  stur w10,[sp, #0x22]
7101b4a920  mov w10,#0x6570
7101b4a924  mov x9,#0x735f
7101b4a928  movk x9,#0x6174, LSL #16
7101b4a92c  movk x9,#0x6567, LSL #32
7101b4a930  movk x9,#0x705f, LSL #48
7101b4a934  strh w10,[sp, #0x26]
7101b4a938  mov w10,#0x775f
7101b4a93c  movk w10,#0x7461, LSL #16
7101b4a940  mov x8,#0x656d
7101b4a944  movk x8,#0x5f6c, LSL #16
7101b4a948  str w10,[sp, #0x28]
7101b4a94c  mov w10,#0x7265
7101b4a950  str x9,[sp, #0x10]
7101b4a954  strh w10,[sp, #0x2c]
7101b4a958  movk x8,#0x6e69, LSL #32
7101b4a95c  movk x8,#0x6f66, LSL #48
7101b4a960  str x8,[sp, #0x8]
7101b4a964  mov x9,sp
7101b4a968  mov w10,#0x26
7101b4a96c  str w10,[sp, #0x4]
7101b4a970  mov w8,#0x9dc5
7101b4a974  movk w8,#0x811c, LSL #16
7101b4a978  strb wzr,[sp, #0x2e]
7101b4a97c  add x9,x9,#0x9
7101b4a980  mov w11,#0x6d
7101b4a984  mov w10,#0x89
7101b4a988  mul w8,w8,w10
7101b4a98c  and w11,w11,#0xff
7101b4a990  eor w8,w8,w11
7101b4a994  ldrb w11,[x9], #0x1
7101b4a998  cbnz w11,0x7101b4a988
7101b4a99c  b 0x7101b4aae8
7101b4a9a0  mov w10,#0x6b6f
7101b4a9a4  strh w10,[sp, #0x18]
7101b4a9a8  mov x10,#0x5f65
7101b4a9ac  movk x10,#0x7473, LSL #16
7101b4a9b0  movk x10,#0x6461, LSL #32
7101b4a9b4  movk x10,#0x7569, LSL #48
7101b4a9b8  stur x10,[sp, #0x1a]
7101b4a9bc  mov w10,#0x5f6d
7101b4a9c0  movk w10,#0x7974, LSL #16
7101b4a9c4  stur w10,[sp, #0x22]
7101b4a9c8  mov w10,#0x6570
7101b4a9cc  mov x9,#0x735f
7101b4a9d0  movk x9,#0x6174, LSL #16
7101b4a9d4  movk x9,#0x6567, LSL #32
7101b4a9d8  movk x9,#0x705f, LSL #48
7101b4a9dc  strh w10,[sp, #0x26]
7101b4a9e0  mov w10,#0x665f
7101b4a9e4  movk w10,#0x616c, LSL #16
7101b4a9e8  mov x8,#0x656d
7101b4a9ec  movk x8,#0x5f6c, LSL #16
7101b4a9f0  str w10,[sp, #0x28]
7101b4a9f4  mov w10,#0x6572
7101b4a9f8  str x9,[sp, #0x10]
7101b4a9fc  strh w10,[sp, #0x2c]
7101b4aa00  movk x8,#0x6e69, LSL #32
7101b4aa04  movk x8,#0x6f66, LSL #48
7101b4aa08  str x8,[sp, #0x8]
7101b4aa0c  mov x9,sp
7101b4aa10  mov w10,#0x26
7101b4aa14  str w10,[sp, #0x4]
7101b4aa18  mov w8,#0x9dc5
7101b4aa1c  movk w8,#0x811c, LSL #16
7101b4aa20  strb wzr,[sp, #0x2e]
7101b4aa24  add x9,x9,#0x9
7101b4aa28  mov w11,#0x6d
7101b4aa2c  mov w10,#0x89
7101b4aa30  mul w8,w8,w10
7101b4aa34  and w11,w11,#0xff
7101b4aa38  eor w8,w8,w11
7101b4aa3c  ldrb w11,[x9], #0x1
7101b4aa40  cbnz w11,0x7101b4aa30
7101b4aa44  b 0x7101b4aae8
7101b4aa48  mov w10,#0x6b6f
7101b4aa4c  strh w10,[sp, #0x18]
7101b4aa50  mov x10,#0x5f65
7101b4aa54  movk x10,#0x7473, LSL #16
7101b4aa58  movk x10,#0x6461, LSL #32
7101b4aa5c  movk x10,#0x7569, LSL #48
7101b4aa60  stur x10,[sp, #0x1a]
7101b4aa64  mov w10,#0x5f6d
7101b4aa68  movk w10,#0x7974, LSL #16
7101b4aa6c  stur w10,[sp, #0x22]
7101b4aa70  mov w10,#0x6570
7101b4aa74  mov x9,#0x735f
7101b4aa78  movk x9,#0x6174, LSL #16
7101b4aa7c  movk x9,#0x6567, LSL #32
7101b4aa80  movk x9,#0x705f, LSL #48
7101b4aa84  strh w10,[sp, #0x26]
7101b4aa88  mov w10,#0x725f
7101b4aa8c  movk w10,#0x636f, LSL #16
7101b4aa90  mov x8,#0x656d
7101b4aa94  movk x8,#0x5f6c, LSL #16
7101b4aa98  str w10,[sp, #0x28]
7101b4aa9c  mov w10,#0x6b
7101b4aaa0  str x9,[sp, #0x10]
7101b4aaa4  strh w10,[sp, #0x2c]
7101b4aaa8  movk x8,#0x6e69, LSL #32
7101b4aaac  movk x8,#0x6f66, LSL #48
7101b4aab0  str x8,[sp, #0x8]
7101b4aab4  mov x9,sp
7101b4aab8  mov w10,#0x25
7101b4aabc  str w10,[sp, #0x4]
7101b4aac0  mov w8,#0x9dc5
7101b4aac4  movk w8,#0x811c, LSL #16
7101b4aac8  add x9,x9,#0x9
7101b4aacc  mov w11,#0x6d
7101b4aad0  mov w10,#0x89
7101b4aad4  mul w8,w8,w10
7101b4aad8  and w11,w11,#0xff
7101b4aadc  eor w8,w8,w11
7101b4aae0  ldrb w11,[x9], #0x1
7101b4aae4  cbnz w11,0x7101b4aad4
7101b4aae8  str w8,[sp]
7101b4aaec  mov x8,sp
7101b4aaf0  add x0,x19,#0x38
7101b4aaf4  add x1,x8,#0x8
7101b4aaf8  bl 0x710377a120
7101b4aafc  tbz w22,#0x0,0x7101b4ab14
7101b4ab00  add x0,x19,#0x58
7101b4ab04  adrp x1,0x71043be000
7101b4ab08  add x1,x1,#0x36b
7101b4ab0c  bl 0x710377a120
7101b4ab10  b 0x7101b4ab34
7101b4ab14  ldr x8,[x19, #0x60]
7101b4ab18  ldr x0,[x8, #0x10]
7101b4ab1c  cbz x0,0x7101b4ab34
7101b4ab20  sub x1,x29,#0x24
7101b4ab24  mov w2,wzr
7101b4ab28  mov w3,wzr
7101b4ab2c  stur wzr,[x29, #-0x24]
7101b4ab30  bl 0x71037a2270
7101b4ab34  ldr x8,[x19, #0x70]
7101b4ab38  ldr x0,[x8, #0x10]
7101b4ab3c  cbz x0,0x7101b4ab54
7101b4ab40  sub x1,x29,#0x24
7101b4ab44  mov w2,wzr
7101b4ab48  mov w3,wzr
7101b4ab4c  stur wzr,[x29, #-0x24]
7101b4ab50  bl 0x71037a2270
7101b4ab54  fmov s0,wzr
7101b4ab58  fmov s1,0x3f800000
7101b4ab5c  cmp w21,#0x3
7101b4ab60  fcsel s0,s1,s0,eq
7101b4ab64  fmov s1,0x40000000
7101b4ab68  cmp w21,#0x4
7101b4ab6c  fcsel s0,s1,s0,eq
7101b4ab70  cmp w20,#0x4
7101b4ab74  mov w8,#0x150
7101b4ab78  mov w9,#0x170
7101b4ab7c  csel x8,x9,x8,gt
7101b4ab80  add x8,x19,x8
7101b4ab84  add x0,x8,#0x158
7101b4ab88  bl 0x710377b010
7101b4ab8c  ldp x29,x30,[sp, #0x70]
7101b4ab90  ldp x20,x19,[sp, #0x60]
7101b4ab94  ldp x22,x21,[sp, #0x50]
7101b4ab98  add sp,sp,#0x80
7101b4ab9c  ret
