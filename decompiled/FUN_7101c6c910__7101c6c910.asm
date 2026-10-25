// addr:      7101c6c910
// offset:    0x1c6c910
// name:      FUN_7101c6c910
// mangled:   
// size:      424

7101c6c910  sub sp,sp,#0x80
7101c6c914  str x21,[sp, #0x50]
7101c6c918  stp x20,x19,[sp, #0x60]
7101c6c91c  stp x29,x30,[sp, #0x70]
7101c6c920  add x29,sp,#0x70
7101c6c924  mov w8,#0x1920
7101c6c928  ldrb w8,[x0, x8, LSL ]
7101c6c92c  cmp w8,w1, UXTB 
7101c6c930  b.eq 0x7101c6c954
7101c6c934  mov w8,#0x1861
7101c6c938  ldrb w8,[x0, x8, LSL ]
7101c6c93c  cmp w8,w1, UXTB 
7101c6c940  and w8,w1,#0xff
7101c6c944  mov w20,w1
7101c6c948  mov x19,x0
7101c6c94c  ccmp w8,#0x7,#0x2,ne
7101c6c950  b.ls 0x7101c6c968
7101c6c954  ldp x29,x30,[sp, #0x70]
7101c6c958  ldr x21,[sp, #0x50]
7101c6c95c  ldp x20,x19,[sp, #0x60]
7101c6c960  add sp,sp,#0x80
7101c6c964  ret
7101c6c968  and x8,x20,#0xff
7101c6c96c  mov w9,#0x1e8
7101c6c970  madd x9,x8,x9,x19
7101c6c974  ldrb w10,[x9, #0xafc]
7101c6c978  cbz w10,0x7101c6c954
7101c6c97c  add x9,x9,#0xafc
7101c6c980  strb wzr,[x9]
7101c6c984  mov w9,#0x1e8
7101c6c988  madd x21,x8,x9,x19
7101c6c98c  orr w8,wzr,#0x3
7101c6c990  mov x0,x19
7101c6c994  mov w1,w20
7101c6c998  str w8,[x21, #0x958]
7101c6c99c  bl 0x7101c6cac0
7101c6c9a0  ldr x0,[x19, #0x450]
7101c6c9a4  mov w1,w20
7101c6c9a8  bl 0x7101c76940
7101c6c9ac  add x1,x21,#0x924
7101c6c9b0  add x0,sp,#0x8
7101c6c9b4  add x20,x19,#0x480
7101c6c9b8  str xzr,[sp, #0x8]
7101c6c9bc  bl 0x7101696040
7101c6c9c0  mov w1,#0x2
7101c6c9c4  add x2,sp,#0x8
7101c6c9c8  mov x0,x20
7101c6c9cc  bl 0x7101c74ac0
7101c6c9d0  ldr x8,[x19, #0x468]
7101c6c9d4  ldr x0,[x8, #0x80]
7101c6c9d8  bl 0x7101c78060
7101c6c9dc  ldrb w8,[x19, #0xafc]
7101c6c9e0  ldrb w9,[x19, #0xce4]
7101c6c9e4  add w8,w9,w8
7101c6c9e8  ldrb w10,[x19, #0xecc]
7101c6c9ec  mov w9,#0x10b4
7101c6c9f0  add w8,w8,w10
7101c6c9f4  ldrb w9,[x19, x9, LSL ]
7101c6c9f8  mov w10,#0x129c
7101c6c9fc  ldrb w10,[x19, x10, LSL ]
7101c6ca00  add w8,w8,w9
7101c6ca04  mov w9,#0x1484
7101c6ca08  ldrb w9,[x19, x9, LSL ]
7101c6ca0c  add w8,w8,w10
7101c6ca10  mov w10,#0x166c
7101c6ca14  add w8,w8,w9
7101c6ca18  ldrb w9,[x19, x10, LSL ]
7101c6ca1c  mov w10,#0x1854
7101c6ca20  ldrb w10,[x19, x10, LSL ]
7101c6ca24  ldr x11,[x19, #0x478]
7101c6ca28  add x0,x11,#0x88
7101c6ca2c  add w8,w8,w9
7101c6ca30  add w19,w8,w10
7101c6ca34  adrp x1,0x710433a000
7101c6ca38  add x1,x1,#0x1f7
7101c6ca3c  add x8,sp,#0x8
7101c6ca40  bl 0x7103776640
7101c6ca44  adrp x1,0x710435b000
7101c6ca48  add x1,x1,#0x89c
7101c6ca4c  sub x8,x29,#0x30
7101c6ca50  add x0,sp,#0x8
7101c6ca54  bl 0x7103776910
7101c6ca58  and w3,w19,#0xff
7101c6ca5c  adrp x1,0x710434a000
7101c6ca60  add x1,x1,#0x3f5
7101c6ca64  sub x0,x29,#0x30
7101c6ca68  mov w2,#0x1
7101c6ca6c  bl 0x710377a280
7101c6ca70  ldur x0,[x29, #-0x28]
7101c6ca74  adrp x20,0x710523d000
7101c6ca78  add x20,x20,#0x9a8
7101c6ca7c  stp x20,xzr,[x29, #-0x30]
7101c6ca80  cbz x0,0x7101c6ca88
7101c6ca84  bl 0x710392eb40
7101c6ca88  ldr x19,[sp, #0x10]
7101c6ca8c  adrp x8,0x710523d000
7101c6ca90  add x8,x8,#0x988
7101c6ca94  stp x8,xzr,[sp, #0x8]
7101c6ca98  cbz x19,0x7101c6c954
7101c6ca9c  ldr x0,[x19, #0x18]
7101c6caa0  stp x20,xzr,[x19, #0x10]
7101c6caa4  cbz x0,0x7101c6caac
7101c6caa8  bl 0x710392eb40
7101c6caac  mov x0,x19
7101c6cab0  bl 0x710392eb40
7101c6cab4  b 0x7101c6c954
