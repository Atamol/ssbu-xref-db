// addr:      7101ddc3a0
// offset:    0x1ddc3a0
// name:      FUN_7101ddc3a0
// mangled:   
// size:      956

7101ddc3a0  sub sp,sp,#0xe0
7101ddc3a4  str x21,[sp, #0xb0]
7101ddc3a8  stp x20,x19,[sp, #0xc0]
7101ddc3ac  stp x29,x30,[sp, #0xd0]
7101ddc3b0  add x29,sp,#0xd0
7101ddc3b4  mov w19,w1
7101ddc3b8  and w21,w1,#0xff
7101ddc3bc  add x0,x0,#0x18
7101ddc3c0  adrp x1,0x71043ae000
7101ddc3c4  add x1,x1,#0xcc
7101ddc3c8  sub x8,x29,#0x30
7101ddc3cc  mov w20,#0x9dc5
7101ddc3d0  movk w20,#0x811c, LSL #16
7101ddc3d4  bl 0x7103776640
7101ddc3d8  adrp x1,0x71043ad000
7101ddc3dc  add x1,x1,#0xfe3
7101ddc3e0  sub x8,x29,#0x40
7101ddc3e4  sub x0,x29,#0x30
7101ddc3e8  bl 0x7103776910
7101ddc3ec  adrp x1,0x71042b4000
7101ddc3f0  add x1,x1,#0x8bc
7101ddc3f4  sub x0,x29,#0x40
7101ddc3f8  bl 0x710377a120
7101ddc3fc  cmp w21,#0x4
7101ddc400  b.hi 0x7101ddc484
7101ddc404  and x8,x19,#0xff
7101ddc408  adrp x9,0x71044fb000
7101ddc40c  add x9,x9,#0x668
7101ddc410  ldrsw x8,[x9, x8, LSL #0x2]
7101ddc414  add x8,x8,x9
7101ddc418  br x8
7101ddc41c  mov x10,#0x6e6d
7101ddc420  movk x10,#0x5f75, LSL #16
7101ddc424  mov x8,#0x1300000000
7101ddc428  movk x10,#0x7073, LSL #32
7101ddc42c  movk x10,#0x7269, LSL #48
7101ddc430  mov x9,sp
7101ddc434  stp x8,x10,[sp]
7101ddc438  mov x10,#0x7469
7101ddc43c  movk x10,#0x5f73, LSL #16
7101ddc440  movk x10,#0x6f73, LSL #32
7101ddc444  movk x10,#0x7472, LSL #48
7101ddc448  str x10,[sp, #0x10]
7101ddc44c  mov w10,#0x315f
7101ddc450  movk w10,#0x38, LSL #16
7101ddc454  add x8,x9,#0x8
7101ddc458  str w10,[sp, #0x18]
7101ddc45c  add x9,x9,#0x9
7101ddc460  mov w11,#0x6d
7101ddc464  mov w10,#0x89
7101ddc468  mov w12,w20
7101ddc46c  mul w12,w12,w10
7101ddc470  and w11,w11,#0xff
7101ddc474  eor w12,w12,w11
7101ddc478  ldrb w11,[x9], #0x1
7101ddc47c  cbnz w11,0x7101ddc46c
7101ddc480  b 0x7101ddc638
7101ddc484  mov x8,sp
7101ddc488  mov w9,wzr
7101ddc48c  strb wzr,[sp, #0x8]
7101ddc490  add x8,x8,#0x8
7101ddc494  str xzr,[sp]
7101ddc498  b 0x7101ddc640
7101ddc49c  mov x10,#0x6e6d
7101ddc4a0  movk x10,#0x5f75, LSL #16
7101ddc4a4  mov x8,#0x1300000000
7101ddc4a8  movk x10,#0x7073, LSL #32
7101ddc4ac  movk x10,#0x7269, LSL #48
7101ddc4b0  mov x9,sp
7101ddc4b4  stp x8,x10,[sp]
7101ddc4b8  mov x10,#0x7469
7101ddc4bc  movk x10,#0x5f73, LSL #16
7101ddc4c0  movk x10,#0x6f73, LSL #32
7101ddc4c4  movk x10,#0x7472, LSL #48
7101ddc4c8  str x10,[sp, #0x10]
7101ddc4cc  mov w10,#0x305f
7101ddc4d0  movk w10,#0x33, LSL #16
7101ddc4d4  add x8,x9,#0x8
7101ddc4d8  str w10,[sp, #0x18]
7101ddc4dc  add x9,x9,#0x9
7101ddc4e0  mov w11,#0x6d
7101ddc4e4  mov w10,#0x89
7101ddc4e8  mov w12,w20
7101ddc4ec  mul w12,w12,w10
7101ddc4f0  and w11,w11,#0xff
7101ddc4f4  eor w12,w12,w11
7101ddc4f8  ldrb w11,[x9], #0x1
7101ddc4fc  cbnz w11,0x7101ddc4ec
7101ddc500  b 0x7101ddc638
7101ddc504  mov x10,#0x6e6d
7101ddc508  movk x10,#0x5f75, LSL #16
7101ddc50c  mov x8,#0x1300000000
7101ddc510  movk x10,#0x7073, LSL #32
7101ddc514  movk x10,#0x7269, LSL #48
7101ddc518  mov x9,sp
7101ddc51c  stp x8,x10,[sp]
7101ddc520  mov x10,#0x7469
7101ddc524  movk x10,#0x5f73, LSL #16
7101ddc528  movk x10,#0x6f73, LSL #32
7101ddc52c  movk x10,#0x7472, LSL #48
7101ddc530  str x10,[sp, #0x10]
7101ddc534  mov w10,#0x305f
7101ddc538  movk w10,#0x34, LSL #16
7101ddc53c  add x8,x9,#0x8
7101ddc540  str w10,[sp, #0x18]
7101ddc544  add x9,x9,#0x9
7101ddc548  mov w11,#0x6d
7101ddc54c  mov w10,#0x89
7101ddc550  mov w12,w20
7101ddc554  mul w12,w12,w10
7101ddc558  and w11,w11,#0xff
7101ddc55c  eor w12,w12,w11
7101ddc560  ldrb w11,[x9], #0x1
7101ddc564  cbnz w11,0x7101ddc554
7101ddc568  b 0x7101ddc638
7101ddc56c  mov x10,#0x6e6d
7101ddc570  movk x10,#0x5f75, LSL #16
7101ddc574  mov x8,#0x1300000000
7101ddc578  movk x10,#0x7073, LSL #32
7101ddc57c  movk x10,#0x7269, LSL #48
7101ddc580  mov x9,sp
7101ddc584  stp x8,x10,[sp]
7101ddc588  mov x10,#0x7469
7101ddc58c  movk x10,#0x5f73, LSL #16
7101ddc590  movk x10,#0x6f73, LSL #32
7101ddc594  movk x10,#0x7472, LSL #48
7101ddc598  str x10,[sp, #0x10]
7101ddc59c  mov w10,#0x305f
7101ddc5a0  movk w10,#0x32, LSL #16
7101ddc5a4  add x8,x9,#0x8
7101ddc5a8  str w10,[sp, #0x18]
7101ddc5ac  add x9,x9,#0x9
7101ddc5b0  mov w11,#0x6d
7101ddc5b4  mov w10,#0x89
7101ddc5b8  mov w12,w20
7101ddc5bc  mul w12,w12,w10
7101ddc5c0  and w11,w11,#0xff
7101ddc5c4  eor w12,w12,w11
7101ddc5c8  ldrb w11,[x9], #0x1
7101ddc5cc  cbnz w11,0x7101ddc5bc
7101ddc5d0  b 0x7101ddc638
7101ddc5d4  mov x10,#0x6e6d
7101ddc5d8  movk x10,#0x5f75, LSL #16
7101ddc5dc  mov x8,#0x1300000000
7101ddc5e0  movk x10,#0x7073, LSL #32
7101ddc5e4  movk x10,#0x7269, LSL #48
7101ddc5e8  mov x9,sp
7101ddc5ec  stp x8,x10,[sp]
7101ddc5f0  mov x10,#0x7469
7101ddc5f4  movk x10,#0x5f73, LSL #16
7101ddc5f8  movk x10,#0x6f73, LSL #32
7101ddc5fc  movk x10,#0x7472, LSL #48
7101ddc600  str x10,[sp, #0x10]
7101ddc604  mov w10,#0x325f
7101ddc608  movk w10,#0x32, LSL #16
7101ddc60c  add x8,x9,#0x8
7101ddc610  str w10,[sp, #0x18]
7101ddc614  add x9,x9,#0x9
7101ddc618  mov w11,#0x6d
7101ddc61c  mov w10,#0x89
7101ddc620  mov w12,w20
7101ddc624  mul w12,w12,w10
7101ddc628  and w11,w11,#0xff
7101ddc62c  eor w12,w12,w11
7101ddc630  ldrb w11,[x9], #0x1
7101ddc634  cbnz w11,0x7101ddc624
7101ddc638  str w12,[sp]
7101ddc63c  mov w9,#0x6d
7101ddc640  mov x10,xzr
7101ddc644  add x8,x8,#0x1
7101ddc648  add x11,sp,#0x48
7101ddc64c  str xzr,[sp, #0x48]
7101ddc650  tst w9,#0xff
7101ddc654  b.ne 0x7101ddc674
7101ddc658  b 0x7101ddc69c
7101ddc65c  add x13,x8,x10
7101ddc660  strb w9,[x12, #0x9]
7101ddc664  ldrb w9,[x13, #0x1]
7101ddc668  add x10,x10,#0x2
7101ddc66c  tst w9,#0xff
7101ddc670  b.eq 0x7101ddc69c
7101ddc674  add w13,w10,#0x1
7101ddc678  add x12,x11,x10
7101ddc67c  cmp w13,#0x3f
7101ddc680  strb w9,[x12, #0x8]
7101ddc684  b.cs 0x7101ddc698
7101ddc688  ldrb w9,[x8, x10, LSL ]
7101ddc68c  cbnz w9,0x7101ddc65c
7101ddc690  add x10,x10,#0x1
7101ddc694  b 0x7101ddc69c
7101ddc698  add w10,w10,#0x1
7101ddc69c  add x8,sp,#0x48
7101ddc6a0  add x19,x8,#0x8
7101ddc6a4  strb wzr,[x19, w10, UXTW ]
7101ddc6a8  ldrb w9,[sp, #0x50]
7101ddc6ac  str w10,[sp, #0x4c]
7101ddc6b0  cbz w9,0x7101ddc6d0
7101ddc6b4  add x8,x8,#0x9
7101ddc6b8  mov w10,#0x89
7101ddc6bc  mul w11,w20,w10
7101ddc6c0  and w9,w9,#0xff
7101ddc6c4  eor w20,w11,w9
7101ddc6c8  ldrb w9,[x8], #0x1
7101ddc6cc  cbnz w9,0x7101ddc6bc
7101ddc6d0  adrp x1,0x7104431000
7101ddc6d4  add x1,x1,#0x6d5
7101ddc6d8  mov x8,sp
7101ddc6dc  sub x0,x29,#0x30
7101ddc6e0  str w20,[sp, #0x48]
7101ddc6e4  bl 0x7103776910
7101ddc6e8  mov x0,sp
7101ddc6ec  mov x1,x19
7101ddc6f0  bl 0x710377a120
7101ddc6f4  ldr x0,[sp, #0x8]
7101ddc6f8  adrp x20,0x710523d000
7101ddc6fc  add x20,x20,#0x9a8
7101ddc700  stp x20,xzr,[sp]
7101ddc704  cbz x0,0x7101ddc70c
7101ddc708  bl 0x710392eb40
7101ddc70c  ldur x0,[x29, #-0x38]
7101ddc710  stp x20,xzr,[x29, #-0x40]
7101ddc714  cbz x0,0x7101ddc71c
7101ddc718  bl 0x710392eb40
7101ddc71c  ldur x19,[x29, #-0x28]
7101ddc720  adrp x8,0x710523d000
7101ddc724  add x8,x8,#0x988
7101ddc728  stp x8,xzr,[x29, #-0x30]
7101ddc72c  cbz x19,0x7101ddc748
7101ddc730  ldr x0,[x19, #0x18]
7101ddc734  stp x20,xzr,[x19, #0x10]
7101ddc738  cbz x0,0x7101ddc740
7101ddc73c  bl 0x710392eb40
7101ddc740  mov x0,x19
7101ddc744  bl 0x710392eb40
7101ddc748  ldp x29,x30,[sp, #0xd0]
7101ddc74c  ldr x21,[sp, #0xb0]
7101ddc750  ldp x20,x19,[sp, #0xc0]
7101ddc754  add sp,sp,#0xe0
7101ddc758  ret
