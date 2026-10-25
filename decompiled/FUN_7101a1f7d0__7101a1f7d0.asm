// addr:      7101a1f7d0
// offset:    0x1a1f7d0
// name:      FUN_7101a1f7d0
// mangled:   
// size:      604

7101a1f7d0  sub sp,sp,#0x60
7101a1f7d4  str x23,[sp, #0x20]
7101a1f7d8  stp x22,x21,[sp, #0x30]
7101a1f7dc  stp x20,x19,[sp, #0x40]
7101a1f7e0  stp x29,x30,[sp, #0x50]
7101a1f7e4  add x29,sp,#0x50
7101a1f7e8  ldr w8,[x0, #0x16c]
7101a1f7ec  mov x19,x0
7101a1f7f0  cmp w8,#0x5
7101a1f7f4  b.ne 0x7101a1f954
7101a1f7f8  ldrsw x9,[x19, #0x160]
7101a1f7fc  cmp w9,#0x1
7101a1f800  b.lt 0x7101a1f85c
7101a1f804  ldr x11,[x19, #0x258]
7101a1f808  ldr x12,[x19, #0x250]
7101a1f80c  sub x11,x11,x12
7101a1f810  mov x10,xzr
7101a1f814  mov w8,wzr
7101a1f818  add x0,x19,#0x250
7101a1f81c  asr x11,x11,#0x4
7101a1f820  add x12,x12,#0x8
7101a1f824  cmp x11,x10
7101a1f828  b.ls 0x7101a1fa28
7101a1f82c  ldr x13,[x12], #0x10
7101a1f830  ldr w13,[x13, #0x1f8]
7101a1f834  cmp w13,#0x3
7101a1f838  add x10,x10,#0x1
7101a1f83c  cinc w8,w8,ne
7101a1f840  cmp x10,x9
7101a1f844  b.lt 0x7101a1f824
7101a1f848  ldr w9,[x19, #0xcb8]
7101a1f84c  cbz w9,0x7101a1f868
7101a1f850  ldr w8,[x19, #0x2b4]
7101a1f854  sub w20,w8,w9
7101a1f858  b 0x7101a1f894
7101a1f85c  mov w8,wzr
7101a1f860  ldr w9,[x19, #0xcb8]
7101a1f864  cbnz w9,0x7101a1f850
7101a1f868  cmp w8,#0x8
7101a1f86c  mov w9,#0x8
7101a1f870  csel w8,w8,w9,lt
7101a1f874  cmp w8,#0x2
7101a1f878  mov w9,#0x2
7101a1f87c  csel w8,w8,w9,gt
7101a1f880  ldr w9,[x19, #0x2ac]
7101a1f884  sdiv w8,w9,w8
7101a1f888  ldr w9,[x19, #0x2b0]
7101a1f88c  cmp w9,w8
7101a1f890  csel w20,w9,w8,lt
7101a1f894  ldr x8,[x19, #0x1a0]
7101a1f898  ldr x8,[x8]
7101a1f89c  add x0,x8,#0x8
7101a1f8a0  adrp x1,0x7104412000
7101a1f8a4  add x1,x1,#0x346
7101a1f8a8  add x8,sp,#0x10
7101a1f8ac  bl 0x7103776910
7101a1f8b0  ldr x8,[x19, #0x1a0]
7101a1f8b4  ldr x8,[x8]
7101a1f8b8  add x0,x8,#0x8
7101a1f8bc  adrp x1,0x71042c4000
7101a1f8c0  add x1,x1,#0x7ca
7101a1f8c4  mov x8,sp
7101a1f8c8  bl 0x7103776910
7101a1f8cc  cmp w20,#0x1
7101a1f8d0  b.gt 0x7101a1f8f8
7101a1f8d4  adrp x20,0x710426f000
7101a1f8d8  add x20,x20,#0xa03
7101a1f8dc  add x0,sp,#0x10
7101a1f8e0  mov x1,x20
7101a1f8e4  bl 0x710377a120
7101a1f8e8  mov x0,sp
7101a1f8ec  mov x1,x20
7101a1f8f0  bl 0x710377a120
7101a1f8f4  b 0x7101a1f928
7101a1f8f8  adrp x21,0x71042d5000
7101a1f8fc  add x21,x21,#0xc5c
7101a1f900  add x0,sp,#0x10
7101a1f904  mov w2,#0x1
7101a1f908  mov x1,x21
7101a1f90c  mov w3,w20
7101a1f910  bl 0x710377a280
7101a1f914  mov x0,sp
7101a1f918  mov w2,#0x1
7101a1f91c  mov x1,x21
7101a1f920  mov w3,w20
7101a1f924  bl 0x710377a280
7101a1f928  ldr x0,[sp, #0x8]
7101a1f92c  adrp x20,0x710523d000
7101a1f930  add x20,x20,#0x9a8
7101a1f934  stp x20,xzr,[sp]
7101a1f938  cbz x0,0x7101a1f940
7101a1f93c  bl 0x710392eb40
7101a1f940  ldr x0,[sp, #0x18]
7101a1f944  stp x20,xzr,[sp, #0x10]
7101a1f948  cbz x0,0x7101a1f950
7101a1f94c  bl 0x710392eb40
7101a1f950  ldr w8,[x19, #0x16c]
7101a1f954  cmp w8,#0x9
7101a1f958  b.ne 0x7101a1f9dc
7101a1f95c  ldr x8,[x19, #0xdd0]
7101a1f960  ldp x9,x8,[x8]
7101a1f964  sub x8,x8,x9
7101a1f968  mov w9,#0x8ba3
7101a1f96c  movk w9,#0xba2e, LSL #16
7101a1f970  lsr x8,x8,#0x4
7101a1f974  mul w23,w8,w9
7101a1f978  cmp w23,#0x1
7101a1f97c  b.lt 0x7101a1fa10
7101a1f980  mov w20,wzr
7101a1f984  add x21,x19,#0xdc8
7101a1f988  ldr w22,[x19, #0x160]
7101a1f98c  mov x0,x21
7101a1f990  mov w1,w20
7101a1f994  mov w2,wzr
7101a1f998  bl 0x71019f1fa0
7101a1f99c  mov x1,x0
7101a1f9a0  mov w0,w22
7101a1f9a4  bl 0x7101a0dd00
7101a1f9a8  mov w8,w0
7101a1f9ac  ldr x0,[x19, #0xdd0]
7101a1f9b0  tbz w8,#0x0,0x7101a1f9c0
7101a1f9b4  mov w2,#0x2
7101a1f9b8  mov w1,w20
7101a1f9bc  b 0x7101a1f9c8
7101a1f9c0  mov w1,w20
7101a1f9c4  mov w2,wzr
7101a1f9c8  bl 0x71019f0fb0
7101a1f9cc  add w20,w20,#0x1
7101a1f9d0  cmp w23,w20
7101a1f9d4  b.ne 0x7101a1f988
7101a1f9d8  ldr w8,[x19, #0x16c]
7101a1f9dc  cmp w8,#0xf
7101a1f9e0  b.ne 0x7101a1fa10
7101a1f9e4  ldr w8,[x19, #0x160]
7101a1f9e8  cmp w8,#0x1
7101a1f9ec  b.lt 0x7101a1fa10
7101a1f9f0  mov w20,wzr
7101a1f9f4  mov x0,x19
7101a1f9f8  mov w1,w20
7101a1f9fc  bl 0x7101a19990
7101a1fa00  ldr w8,[x19, #0x160]
7101a1fa04  add w20,w20,#0x1
7101a1fa08  cmp w20,w8
7101a1fa0c  b.lt 0x7101a1f9f4
7101a1fa10  ldp x29,x30,[sp, #0x50]
7101a1fa14  ldr x23,[sp, #0x20]
7101a1fa18  ldp x20,x19,[sp, #0x40]
7101a1fa1c  ldp x22,x21,[sp, #0x30]
7101a1fa20  add sp,sp,#0x60
7101a1fa24  ret
7101a1fa28  bl 0x71039c1330
