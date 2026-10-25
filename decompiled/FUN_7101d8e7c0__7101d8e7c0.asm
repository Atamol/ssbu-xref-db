// addr:      7101d8e7c0
// offset:    0x1d8e7c0
// name:      FUN_7101d8e7c0
// mangled:   
// size:      740

7101d8e7c0  sub sp,sp,#0xc0
7101d8e7c4  stp x28,x27,[sp, #0x60]
7101d8e7c8  stp x26,x25,[sp, #0x70]
7101d8e7cc  stp x24,x23,[sp, #0x80]
7101d8e7d0  stp x22,x21,[sp, #0x90]
7101d8e7d4  stp x20,x19,[sp, #0xa0]
7101d8e7d8  stp x29,x30,[sp, #0xb0]
7101d8e7dc  add x29,sp,#0xb0
7101d8e7e0  ldrb w8,[x0, #0x2f6]
7101d8e7e4  mov w20,w2
7101d8e7e8  mov x21,x0
7101d8e7ec  str x1,[sp, #0x8]
7101d8e7f0  cbnz w8,0x7101d8e808
7101d8e7f4  tbz w3,#0x0,0x7101d8e808
7101d8e7f8  mov w8,#0x2
7101d8e7fc  str w8,[x21, #0x2f8]
7101d8e800  mov w8,#0x1
7101d8e804  strb w8,[x21, #0x2f6]
7101d8e808  add x0,x21,#0x120
7101d8e80c  adrp x1,0x710439d000
7101d8e810  add x1,x1,#0x945
7101d8e814  add x8,sp,#0x50
7101d8e818  str x0,[sp]
7101d8e81c  bl 0x7103776640
7101d8e820  mov w23,wzr
7101d8e824  adrp x22,0x710523d000
7101d8e828  add x22,x22,#0x9a8
7101d8e82c  adrp x24,0x710523d000
7101d8e830  add x24,x24,#0x988
7101d8e834  adrp x26,0x71043cd000
7101d8e838  add x26,x26,#0x2e1
7101d8e83c  adrp x27,0x71042a0000
7101d8e840  add x27,x27,#0xdf3
7101d8e844  adrp x28,0x710438a000
7101d8e848  add x28,x28,#0xa63
7101d8e84c  add x0,sp,#0x30
7101d8e850  mov w1,#0x20
7101d8e854  adrp x2,0x7104348000
7101d8e858  add x2,x2,#0xe8
7101d8e85c  mov w3,w23
7101d8e860  bl 0x71039c04d0
7101d8e864  ldrb w8,[x21, #0x2f6]
7101d8e868  cmp w8,#0x0
7101d8e86c  cset w8,ne
7101d8e870  orr w25,w8,w20
7101d8e874  add x8,sp,#0x10
7101d8e878  add x0,sp,#0x50
7101d8e87c  add x1,sp,#0x30
7101d8e880  bl 0x7103776640
7101d8e884  add x8,sp,#0x20
7101d8e888  add x0,sp,#0x10
7101d8e88c  adrp x1,0x7104410000
7101d8e890  add x1,x1,#0x5f3
7101d8e894  bl 0x7103776910
7101d8e898  ldr x19,[sp, #0x28]
7101d8e89c  ldr x0,[x19]
7101d8e8a0  and w1,w25,#0x1
7101d8e8a4  bl 0x710377aa20
7101d8e8a8  stp x22,xzr,[sp, #0x20]
7101d8e8ac  cbz x19,0x7101d8e8b8
7101d8e8b0  mov x0,x19
7101d8e8b4  bl 0x710392eb40
7101d8e8b8  ldr x19,[sp, #0x18]
7101d8e8bc  stp x24,xzr,[sp, #0x10]
7101d8e8c0  cbz x19,0x7101d8e8dc
7101d8e8c4  ldr x0,[x19, #0x18]
7101d8e8c8  stp x22,xzr,[x19, #0x10]
7101d8e8cc  cbz x0,0x7101d8e8d4
7101d8e8d0  bl 0x710392eb40
7101d8e8d4  mov x0,x19
7101d8e8d8  bl 0x710392eb40
7101d8e8dc  add x8,sp,#0x10
7101d8e8e0  add x0,sp,#0x50
7101d8e8e4  add x1,sp,#0x30
7101d8e8e8  bl 0x7103776640
7101d8e8ec  add x8,sp,#0x20
7101d8e8f0  add x0,sp,#0x10
7101d8e8f4  mov x1,x26
7101d8e8f8  bl 0x7103776910
7101d8e8fc  ldr x19,[sp, #0x28]
7101d8e900  ldr x0,[x19]
7101d8e904  and w1,w25,#0x1
7101d8e908  bl 0x710377aa20
7101d8e90c  stp x22,xzr,[sp, #0x20]
7101d8e910  cbz x19,0x7101d8e91c
7101d8e914  mov x0,x19
7101d8e918  bl 0x710392eb40
7101d8e91c  ldr x19,[sp, #0x18]
7101d8e920  stp x24,xzr,[sp, #0x10]
7101d8e924  cbz x19,0x7101d8e940
7101d8e928  ldr x0,[x19, #0x18]
7101d8e92c  stp x22,xzr,[x19, #0x10]
7101d8e930  cbz x0,0x7101d8e938
7101d8e934  bl 0x710392eb40
7101d8e938  mov x0,x19
7101d8e93c  bl 0x710392eb40
7101d8e940  add x8,sp,#0x10
7101d8e944  add x0,sp,#0x50
7101d8e948  add x1,sp,#0x30
7101d8e94c  bl 0x7103776640
7101d8e950  add x8,sp,#0x20
7101d8e954  add x0,sp,#0x10
7101d8e958  mov x1,x27
7101d8e95c  bl 0x7103776910
7101d8e960  ldr x19,[sp, #0x28]
7101d8e964  ldr x0,[x19]
7101d8e968  and w1,w25,#0x1
7101d8e96c  bl 0x710377aa20
7101d8e970  stp x22,xzr,[sp, #0x20]
7101d8e974  cbz x19,0x7101d8e980
7101d8e978  mov x0,x19
7101d8e97c  bl 0x710392eb40
7101d8e980  ldr x19,[sp, #0x18]
7101d8e984  stp x24,xzr,[sp, #0x10]
7101d8e988  cbz x19,0x7101d8e9a4
7101d8e98c  ldr x0,[x19, #0x18]
7101d8e990  stp x22,xzr,[x19, #0x10]
7101d8e994  cbz x0,0x7101d8e99c
7101d8e998  bl 0x710392eb40
7101d8e99c  mov x0,x19
7101d8e9a0  bl 0x710392eb40
7101d8e9a4  add x8,sp,#0x10
7101d8e9a8  add x0,sp,#0x50
7101d8e9ac  add x1,sp,#0x30
7101d8e9b0  bl 0x7103776640
7101d8e9b4  add x8,sp,#0x20
7101d8e9b8  add x0,sp,#0x10
7101d8e9bc  mov x1,x28
7101d8e9c0  bl 0x7103776910
7101d8e9c4  ldr x19,[sp, #0x28]
7101d8e9c8  ldr x0,[x19]
7101d8e9cc  and w1,w25,#0x1
7101d8e9d0  bl 0x710377aa20
7101d8e9d4  stp x22,xzr,[sp, #0x20]
7101d8e9d8  cbz x19,0x7101d8e9e4
7101d8e9dc  mov x0,x19
7101d8e9e0  bl 0x710392eb40
7101d8e9e4  ldr x19,[sp, #0x18]
7101d8e9e8  stp x24,xzr,[sp, #0x10]
7101d8e9ec  cbz x19,0x7101d8ea08
7101d8e9f0  ldr x0,[x19, #0x18]
7101d8e9f4  stp x22,xzr,[x19, #0x10]
7101d8e9f8  cbz x0,0x7101d8ea00
7101d8e9fc  bl 0x710392eb40
7101d8ea00  mov x0,x19
7101d8ea04  bl 0x710392eb40
7101d8ea08  add w23,w23,#0x1
7101d8ea0c  cmp w23,#0xf
7101d8ea10  b.ne 0x7101d8e84c
7101d8ea14  ldr x0,[sp]
7101d8ea18  adrp x1,0x71042d6000
7101d8ea1c  add x1,x1,#0x8a1
7101d8ea20  add x8,sp,#0x30
7101d8ea24  bl 0x7103776910
7101d8ea28  ldr x19,[sp, #0x38]
7101d8ea2c  ldr x0,[x19]
7101d8ea30  and w1,w20,#0x1
7101d8ea34  bl 0x710377aa20
7101d8ea38  stp x22,xzr,[sp, #0x30]
7101d8ea3c  cbz x19,0x7101d8ea48
7101d8ea40  mov x0,x19
7101d8ea44  bl 0x710392eb40
7101d8ea48  ldr x1,[sp, #0x8]
7101d8ea4c  ldrb w8,[x1]
7101d8ea50  ldr x20,[sp, #0x58]
7101d8ea54  cbz w8,0x7101d8ea64
7101d8ea58  fmov s0,0x3f800000
7101d8ea5c  mov x0,x20
7101d8ea60  bl 0x7103778300
7101d8ea64  stp x24,xzr,[sp, #0x50]
7101d8ea68  cbz x20,0x7101d8ea84
7101d8ea6c  ldr x0,[x20, #0x18]
7101d8ea70  stp x22,xzr,[x20, #0x10]
7101d8ea74  cbz x0,0x7101d8ea7c
7101d8ea78  bl 0x710392eb40
7101d8ea7c  mov x0,x20
7101d8ea80  bl 0x710392eb40
7101d8ea84  ldp x29,x30,[sp, #0xb0]
7101d8ea88  ldp x20,x19,[sp, #0xa0]
7101d8ea8c  ldp x22,x21,[sp, #0x90]
7101d8ea90  ldp x24,x23,[sp, #0x80]
7101d8ea94  ldp x26,x25,[sp, #0x70]
7101d8ea98  ldp x28,x27,[sp, #0x60]
7101d8ea9c  add sp,sp,#0xc0
7101d8eaa0  ret
