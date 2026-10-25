// addr:      7101d0ae40
// offset:    0x1d0ae40
// name:      FUN_7101d0ae40
// mangled:   
// size:      256

7101d0ae40  str d8,[sp, #-0x30]!
7101d0ae44  str x21,[sp, #0x8]
7101d0ae48  stp x20,x19,[sp, #0x10]
7101d0ae4c  stp x29,x30,[sp, #0x20]
7101d0ae50  add x29,sp,#0x20
7101d0ae54  ldp x20,x21,[x0, #0xc0]
7101d0ae58  mov x19,x0
7101d0ae5c  cmp x20,x21
7101d0ae60  b.eq 0x7101d0ae78
7101d0ae64  mov x0,x20
7101d0ae68  bl 0x7101d0e4a0
7101d0ae6c  add x20,x20,#0x1a0
7101d0ae70  cmp x21,x20
7101d0ae74  b.ne 0x7101d0ae64
7101d0ae78  ldp x20,x21,[x19, #0xd8]
7101d0ae7c  cmp x20,x21
7101d0ae80  b.eq 0x7101d0ae98
7101d0ae84  mov x0,x20
7101d0ae88  bl 0x7101d0e4a0
7101d0ae8c  add x20,x20,#0x1a0
7101d0ae90  cmp x21,x20
7101d0ae94  b.ne 0x7101d0ae84
7101d0ae98  ldp x20,x21,[x19, #0xf0]
7101d0ae9c  cmp x20,x21
7101d0aea0  b.eq 0x7101d0aeb8
7101d0aea4  mov x0,x20
7101d0aea8  bl 0x7101d0e4a0
7101d0aeac  add x20,x20,#0x1a0
7101d0aeb0  cmp x21,x20
7101d0aeb4  b.ne 0x7101d0aea4
7101d0aeb8  ldp x20,x21,[x19, #0x108]
7101d0aebc  cmp x20,x21
7101d0aec0  b.eq 0x7101d0aed8
7101d0aec4  mov x0,x20
7101d0aec8  bl 0x7101d0e4a0
7101d0aecc  add x20,x20,#0x1a0
7101d0aed0  cmp x21,x20
7101d0aed4  b.ne 0x7101d0aec4
7101d0aed8  ldp x20,x21,[x19, #0x120]
7101d0aedc  cmp x20,x21
7101d0aee0  b.eq 0x7101d0aef8
7101d0aee4  mov x0,x20
7101d0aee8  bl 0x7101d0e4a0
7101d0aeec  add x20,x20,#0x1a0
7101d0aef0  cmp x21,x20
7101d0aef4  b.ne 0x7101d0aee4
7101d0aef8  ldp x20,x21,[x19, #0xa8]
7101d0aefc  cmp x20,x21
7101d0af00  b.eq 0x7101d0af2c
7101d0af04  fmov s8,0x3f800000
7101d0af08  adrp x19,0x71043cf000
7101d0af0c  add x19,x19,#0x67d
7101d0af10  ldr x0,[x20, #0x8]
7101d0af14  mov v0.16B,v8.16B
7101d0af18  mov x1,x19
7101d0af1c  bl 0x7103778300
7101d0af20  add x20,x20,#0x30
7101d0af24  cmp x21,x20
7101d0af28  b.ne 0x7101d0af10
7101d0af2c  ldp x29,x30,[sp, #0x20]
7101d0af30  ldr x21,[sp, #0x8]
7101d0af34  ldp x20,x19,[sp, #0x10]
7101d0af38  ldr d8,[sp], #0x30
7101d0af3c  ret
