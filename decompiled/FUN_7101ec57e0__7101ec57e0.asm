// addr:      7101ec57e0
// offset:    0x1ec57e0
// name:      FUN_7101ec57e0
// mangled:   
// size:      428

7101ec57e0  sub sp,sp,#0x80
7101ec57e4  stp x20,x19,[sp, #0x60]
7101ec57e8  stp x29,x30,[sp, #0x70]
7101ec57ec  add x29,sp,#0x70
7101ec57f0  adrp x1,0x71042e7000
7101ec57f4  add x1,x1,#0xa3a
7101ec57f8  add x8,sp,#0x8
7101ec57fc  add x20,sp,#0x8
7101ec5800  bl 0x7103776640
7101ec5804  adrp x1,0x71042a1000
7101ec5808  add x1,x1,#0xaf1
7101ec580c  sub x8,x29,#0x20
7101ec5810  add x0,sp,#0x8
7101ec5814  bl 0x7103776910
7101ec5818  ldr x19,[sp, #0x10]
7101ec581c  adrp x8,0x710523d000
7101ec5820  add x8,x8,#0x988
7101ec5824  stp x8,xzr,[sp, #0x8]
7101ec5828  cbz x19,0x7101ec584c
7101ec582c  ldr x0,[x19, #0x18]
7101ec5830  adrp x8,0x710523d000
7101ec5834  add x8,x8,#0x9a8
7101ec5838  stp x8,xzr,[x19, #0x10]
7101ec583c  cbz x0,0x7101ec5844
7101ec5840  bl 0x710392eb40
7101ec5844  mov x0,x19
7101ec5848  bl 0x710392eb40
7101ec584c  mov x10,#0x6e6d
7101ec5850  movk x10,#0x5f75, LSL #16
7101ec5854  mov w8,#0x9dc5
7101ec5858  movk w8,#0x811c, LSL #16
7101ec585c  orr x9,xzr,#0x2000000000
7101ec5860  strb wzr,[sp, #0x30]
7101ec5864  movk x10,#0x7473, LSL #32
7101ec5868  movk x10,#0x6367, LSL #48
7101ec586c  mov x11,#0x6572
7101ec5870  movk x11,#0x7461, LSL #16
7101ec5874  stp x9,x10,[sp, #0x8]
7101ec5878  mov x13,#0x645f
7101ec587c  movk x13,#0x7369, LSL #16
7101ec5880  add x1,x20,#0x8
7101ec5884  add x16,x20,#0x9
7101ec5888  movk x11,#0x5f65, LSL #32
7101ec588c  movk x11,#0x6465, LSL #48
7101ec5890  str x11,[sp, #0x18]
7101ec5894  mov w12,#0x7469
7101ec5898  strh w12,[sp, #0x20]
7101ec589c  movk x13,#0x6c70, LSL #32
7101ec58a0  movk x13,#0x7961, LSL #48
7101ec58a4  stur x13,[sp, #0x22]
7101ec58a8  mov w14,#0x675f
7101ec58ac  movk w14,#0x6975, LSL #16
7101ec58b0  stur w14,[sp, #0x2a]
7101ec58b4  mov w15,#0x6564
7101ec58b8  strh w15,[sp, #0x2e]
7101ec58bc  mov w17,#0x6d
7101ec58c0  mov w9,#0x89
7101ec58c4  mov w18,w8
7101ec58c8  mul w18,w18,w9
7101ec58cc  and w17,w17,#0xff
7101ec58d0  eor w18,w18,w17
7101ec58d4  ldrb w17,[x16], #0x1
7101ec58d8  cbnz w17,0x7101ec58c8
7101ec58dc  adrp x16,0x7105329000
7101ec58e0  ldr x16,[x16, #0xd78]
7101ec58e4  str w18,[sp, #0x8]
7101ec58e8  ldr x16,[x16, #0x8]
7101ec58ec  ldr w17,[x16, #0x750]
7101ec58f0  cmp w17,#0x1
7101ec58f4  b.ne 0x7101ec595c
7101ec58f8  ldr w16,[x16, #0x5d8]
7101ec58fc  cbnz w16,0x7101ec595c
7101ec5900  stp x10,x11,[sp, #0x10]
7101ec5904  mov x11,#0x6c5f
7101ec5908  movk x11,#0x6665, LSL #16
7101ec590c  movk x11,#0x6874, LSL #32
7101ec5910  movk x11,#0x6e61, LSL #48
7101ec5914  add x10,sp,#0x8
7101ec5918  str x11,[sp, #0x30]
7101ec591c  mov w11,#0x64
7101ec5920  add x10,x10,#0x9
7101ec5924  strh w12,[sp, #0x20]
7101ec5928  strh w11,[sp, #0x38]
7101ec592c  mov w12,#0x29
7101ec5930  mov w11,#0x6d
7101ec5934  stur x13,[sp, #0x22]
7101ec5938  stur w14,[sp, #0x2a]
7101ec593c  strh w15,[sp, #0x2e]
7101ec5940  str w12,[sp, #0xc]
7101ec5944  mul w8,w8,w9
7101ec5948  and w11,w11,#0xff
7101ec594c  eor w8,w8,w11
7101ec5950  ldrb w11,[x10], #0x1
7101ec5954  cbnz w11,0x7101ec5944
7101ec5958  str w8,[sp, #0x8]
7101ec595c  sub x0,x29,#0x20
7101ec5960  bl 0x710377a120
7101ec5964  ldur x0,[x29, #-0x18]
7101ec5968  adrp x8,0x710523d000
7101ec596c  add x8,x8,#0x9a8
7101ec5970  stp x8,xzr,[x29, #-0x20]
7101ec5974  cbz x0,0x7101ec597c
7101ec5978  bl 0x710392eb40
7101ec597c  ldp x29,x30,[sp, #0x70]
7101ec5980  ldp x20,x19,[sp, #0x60]
7101ec5984  add sp,sp,#0x80
7101ec5988  ret
