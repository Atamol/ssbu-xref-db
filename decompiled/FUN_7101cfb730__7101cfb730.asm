// addr:      7101cfb730
// offset:    0x1cfb730
// name:      FUN_7101cfb730
// mangled:   
// size:      728

7101cfb730  sub sp,sp,#0x60
7101cfb734  stp x24,x23,[sp, #0x20]
7101cfb738  stp x22,x21,[sp, #0x30]
7101cfb73c  stp x20,x19,[sp, #0x40]
7101cfb740  stp x29,x30,[sp, #0x50]
7101cfb744  add x29,sp,#0x50
7101cfb748  mov x19,x0
7101cfb74c  add x0,sp,#0x10
7101cfb750  bl 0x71039c2680
7101cfb754  cbz w0,0x7101cfb760
7101cfb758  add x0,sp,#0x10
7101cfb75c  bl 0x71039c1070
7101cfb760  ldr x20,[sp, #0x10]
7101cfb764  ldr x0,[x19, #0x388]
7101cfb768  mov x9,#0x8e00
7101cfb76c  movk x9,#0xbcac, LSL #16
7101cfb770  mov w22,#0xca00
7101cfb774  movk w22,#0x3b9a, LSL #16
7101cfb778  sub x8,x0,x20
7101cfb77c  movk x9,#0xd, LSL #32
7101cfb780  add x1,sp,#0x10
7101cfb784  str xzr,[sp, #0x10]
7101cfb788  madd x21,x8,x22,x9
7101cfb78c  bl 0x7103741810
7101cfb790  ldr x8,[sp, #0x10]
7101cfb794  and x8,x8,#-0x3fffe00001
7101cfb798  add x0,sp,#0x10
7101cfb79c  mov x1,sp
7101cfb7a0  str x8,[sp, #0x10]
7101cfb7a4  bl 0x71037419c0
7101cfb7a8  ldr x8,[sp]
7101cfb7ac  sub x9,x8,x20
7101cfb7b0  cmp x8,x20
7101cfb7b4  mul x8,x9,x22
7101cfb7b8  mov w10,#0x48e3
7101cfb7bc  movk w10,#0x48f9, LSL #16
7101cfb7c0  asr x11,x8,#0x20
7101cfb7c4  and x9,x8,#0xfffffe00
7101cfb7c8  mov w13,#0xff6f
7101cfb7cc  movk w13,#0x683f, LSL #16
7101cfb7d0  lsr x8,x8,#0x3f
7101cfb7d4  mul x12,x11,x10
7101cfb7d8  mul x10,x9,x10
7101cfb7dc  mul x11,x11,x13
7101cfb7e0  mul x9,x9,x13
7101cfb7e4  add x10,x12,x10, LSR #0x20
7101cfb7e8  add x9,x9,w10, UXTW 
7101cfb7ec  add x10,x11,x10, ASR #0x20
7101cfb7f0  add x9,x10,x9, ASR #0x20
7101cfb7f4  asr x9,x9,#0x2d
7101cfb7f8  add w8,w9,w8
7101cfb7fc  csinc w20,wzr,w8,lt
7101cfb800  ldr x8,[x19, #0x140]
7101cfb804  ldr x8,[x8]
7101cfb808  add x0,x8,#0x8
7101cfb80c  adrp x1,0x7104454000
7101cfb810  add x1,x1,#0xc23
7101cfb814  add x8,sp,#0x10
7101cfb818  bl 0x7103776640
7101cfb81c  and x22,x21,#0xfffffe00
7101cfb820  asr x23,x21,#0x20
7101cfb824  mov w8,#0x94b3
7101cfb828  movk w8,#0x26d6, LSL #16
7101cfb82c  mul x9,x23,x8
7101cfb830  mul x8,x22,x8
7101cfb834  add x8,x9,x8, LSR #0x20
7101cfb838  mov w9,#0xbe8
7101cfb83c  movk w9,#0x112e, LSL #16
7101cfb840  mul x10,x23,x9
7101cfb844  mul x9,x22,x9
7101cfb848  add x9,x9,w8, UXTW 
7101cfb84c  add x8,x10,x8, ASR #0x20
7101cfb850  add x8,x8,x9, LSR #0x20
7101cfb854  lsr x24,x21,#0x3f
7101cfb858  add x8,x24,x8, ASR #0x1a
7101cfb85c  cmp x8,#0x44
7101cfb860  b.gt 0x7101cfb880
7101cfb864  ldr x19,[sp, #0x18]
7101cfb868  fmov s0,0x3f800000
7101cfb86c  adrp x1,0x710432a000
7101cfb870  add x1,x1,#0x1e0
7101cfb874  mov x0,x19
7101cfb878  bl 0x7103778300
7101cfb87c  b 0x7101cfb950
7101cfb880  cmp w20,#0x1
7101cfb884  b.lt 0x7101cfb8ac
7101cfb888  ldr x19,[sp, #0x18]
7101cfb88c  fmov s0,0x3f800000
7101cfb890  adrp x1,0x71043be000
7101cfb894  add x1,x1,#0x82e
7101cfb898  mov x0,x19
7101cfb89c  bl 0x7103778300
7101cfb8a0  adrp x1,0x7104291000
7101cfb8a4  add x1,x1,#0xe45
7101cfb8a8  b 0x7101cfb91c
7101cfb8ac  mov w8,#0xed55
7101cfb8b0  movk w8,#0xed75, LSL #16
7101cfb8b4  mul x9,x23,x8
7101cfb8b8  mul x8,x22,x8
7101cfb8bc  add x8,x9,x8, LSR #0x20
7101cfb8c0  mov x9,#-0xda
7101cfb8c4  movk x9,#0x9c5f, LSL #16
7101cfb8c8  mul x10,x22,x9
7101cfb8cc  madd x9,x23,x9,x21
7101cfb8d0  add x10,x10,w8, UXTW 
7101cfb8d4  add x8,x9,x8, ASR #0x20
7101cfb8d8  add x8,x8,x10, ASR #0x20
7101cfb8dc  add x8,x24,x8, ASR #0x29
7101cfb8e0  cmp x8,#0x1
7101cfb8e4  b.lt 0x7101cfb998
7101cfb8e8  ldr x19,[sp, #0x18]
7101cfb8ec  cmp w8,#0x17
7101cfb8f0  mov w9,#0x17
7101cfb8f4  fmov s0,0x3f800000
7101cfb8f8  csel w8,w8,w9,lt
7101cfb8fc  cmp w8,#0x1
7101cfb900  adrp x1,0x710438c000
7101cfb904  add x1,x1,#0xccf
7101cfb908  csinc w20,w8,wzr,gt
7101cfb90c  mov x0,x19
7101cfb910  bl 0x7103778300
7101cfb914  adrp x1,0x71043be000
7101cfb918  add x1,x1,#0x83b
7101cfb91c  mov x8,sp
7101cfb920  add x0,sp,#0x10
7101cfb924  bl 0x7103776910
7101cfb928  mov x0,sp
7101cfb92c  mov w1,#0x1
7101cfb930  mov w2,w20
7101cfb934  bl 0x710377a310
7101cfb938  ldr x0,[sp, #0x8]
7101cfb93c  adrp x8,0x710523d000
7101cfb940  add x8,x8,#0x9a8
7101cfb944  stp x8,xzr,[sp]
7101cfb948  cbz x0,0x7101cfb950
7101cfb94c  bl 0x710392eb40
7101cfb950  adrp x8,0x710523d000
7101cfb954  add x8,x8,#0x988
7101cfb958  stp x8,xzr,[sp, #0x10]
7101cfb95c  cbz x19,0x7101cfb980
7101cfb960  ldr x0,[x19, #0x18]
7101cfb964  adrp x8,0x710523d000
7101cfb968  add x8,x8,#0x9a8
7101cfb96c  stp x8,xzr,[x19, #0x10]
7101cfb970  cbz x0,0x7101cfb978
7101cfb974  bl 0x710392eb40
7101cfb978  mov x0,x19
7101cfb97c  bl 0x710392eb40
7101cfb980  ldp x29,x30,[sp, #0x50]
7101cfb984  ldp x20,x19,[sp, #0x40]
7101cfb988  ldp x22,x21,[sp, #0x30]
7101cfb98c  ldp x24,x23,[sp, #0x20]
7101cfb990  add sp,sp,#0x60
7101cfb994  ret
7101cfb998  ldr x19,[sp, #0x18]
7101cfb99c  fmov s0,0x3f800000
7101cfb9a0  adrp x1,0x71042d6000
7101cfb9a4  add x1,x1,#0x464
7101cfb9a8  mov x0,x19
7101cfb9ac  bl 0x7103778300
7101cfb9b0  adrp x1,0x7104454000
7101cfb9b4  add x1,x1,#0xc44
7101cfb9b8  mov x8,sp
7101cfb9bc  add x0,sp,#0x10
7101cfb9c0  bl 0x7103776910
7101cfb9c4  mov w8,#0x3d1d
7101cfb9c8  movk w8,#0x68fd, LSL #16
7101cfb9cc  mul x9,x23,x8
7101cfb9d0  mul x8,x22,x8
7101cfb9d4  add x8,x9,x8, LSR #0x20
7101cfb9d8  mov w9,#0x33fe
7101cfb9dc  movk w9,#0x125, LSL #16
7101cfb9e0  mul x10,x23,x9
7101cfb9e4  mul x9,x22,x9
7101cfb9e8  add x9,x9,w8, UXTW 
7101cfb9ec  add x8,x10,x8, ASR #0x20
7101cfb9f0  add x8,x8,x9, LSR #0x20
7101cfb9f4  add x2,x24,x8, ASR #0x1c
7101cfb9f8  mov x0,sp
7101cfb9fc  mov w1,#0x1
7101cfba00  bl 0x710377a310
7101cfba04  b 0x7101cfb938
