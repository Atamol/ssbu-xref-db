// addr:      7101ff4d60
// offset:    0x1ff4d60
// name:      FUN_7101ff4d60
// mangled:   
// size:      984

7101ff4d60  sub sp,sp,#0x80
7101ff4d64  stp x26,x25,[sp, #0x30]
7101ff4d68  stp x24,x23,[sp, #0x40]
7101ff4d6c  stp x22,x21,[sp, #0x50]
7101ff4d70  stp x20,x19,[sp, #0x60]
7101ff4d74  stp x29,x30,[sp, #0x70]
7101ff4d78  add x29,sp,#0x70
7101ff4d7c  ldur x8,[x0, #-0x8]
7101ff4d80  cbz x8,0x7101ff5118
7101ff4d84  ldr x21,[x8, #0x48]
7101ff4d88  cbz x21,0x7101ff5118
7101ff4d8c  ldr x8,[x0, #0x20]
7101ff4d90  ldr x8,[x8]
7101ff4d94  ldr x22,[x0, #0x10]
7101ff4d98  mov w1,#0x1
7101ff4d9c  mov x2,xzr
7101ff4da0  mov x19,x0
7101ff4da4  add x23,x8,#0x10
7101ff4da8  bl 0x71038f45b0
7101ff4dac  ldr x8,[x19, #0x20]
7101ff4db0  ldr x8,[x8]
7101ff4db4  ldr x9,[x19, #0x10]
7101ff4db8  add x8,x8,#0x20
7101ff4dbc  adrp x24,0x7104862000
7101ff4dc0  add x24,x24,#0x960
7101ff4dc4  cmp x8,x9
7101ff4dc8  mov x20,x0
7101ff4dcc  adrp x2,0x710430c000
7101ff4dd0  add x2,x2,#0x66a
7101ff4dd4  mov x0,x19
7101ff4dd8  csel x1,x8,x24,cc
7101ff4ddc  bl 0x71038f4d40
7101ff4de0  ldr x9,[x19, #0x10]
7101ff4de4  sub x8,x9,#0x10
7101ff4de8  ldur w9,[x9, #-0x8]
7101ff4dec  and w10,w9,#0xf
7101ff4df0  cmp w10,#0x2
7101ff4df4  b.eq 0x7101ff4e10
7101ff4df8  mov x9,xzr
7101ff4dfc  cmp w10,#0x7
7101ff4e00  b.ne 0x7101ff4e14
7101ff4e04  ldr x9,[x8]
7101ff4e08  add x9,x9,#0x28
7101ff4e0c  b 0x7101ff4e14
7101ff4e10  ldr x9,[x8]
7101ff4e14  sub x23,x22,x23
7101ff4e18  str x8,[x19, #0x10]
7101ff4e1c  blr x9
7101ff4e20  mov w2,#0x2
7101ff4e24  mov x1,x19
7101ff4e28  mov x22,x0
7101ff4e2c  bl 0x7101ff2160
7101ff4e30  ldr x8,[x19, #0x20]
7101ff4e34  ldr x8,[x8]
7101ff4e38  ldr x9,[x19, #0x10]
7101ff4e3c  add x8,x8,#0x30
7101ff4e40  cmp x8,x9
7101ff4e44  csel x25,x8,x24,cc
7101ff4e48  ldr w8,[x25, #0x8]
7101ff4e4c  cmp w8,#0x3
7101ff4e50  b.ne 0x7101ff4e5c
7101ff4e54  ldr s2,[x25]
7101ff4e58  b 0x7101ff4ed4
7101ff4e5c  cmp w8,#0x13
7101ff4e60  b.ne 0x7101ff4e70
7101ff4e64  ldr x8,[x25]
7101ff4e68  scvtf s2,x8
7101ff4e6c  b 0x7101ff4ed4
7101ff4e70  and w8,w8,#0xf
7101ff4e74  cmp w8,#0x4
7101ff4e78  b.ne 0x7101ff4ed0
7101ff4e7c  ldr x8,[x25]
7101ff4e80  add x0,x8,#0x18
7101ff4e84  add x1,sp,#0x20
7101ff4e88  bl 0x7103907f00
7101ff4e8c  ldr x8,[x25]
7101ff4e90  ldrb w9,[x8, #0x8]
7101ff4e94  cmp w9,#0x4
7101ff4e98  b.ne 0x7101ff4ea4
7101ff4e9c  ldrb w8,[x8, #0xb]
7101ff4ea0  b 0x7101ff4ea8
7101ff4ea4  ldr x8,[x8, #0x10]
7101ff4ea8  add x8,x8,#0x1
7101ff4eac  cmp x0,x8
7101ff4eb0  b.ne 0x7101ff4ed0
7101ff4eb4  ldr x9,[sp, #0x20]
7101ff4eb8  scvtf s0,x9
7101ff4ebc  ldr w8,[sp, #0x28]
7101ff4ec0  fmov s1,w9
7101ff4ec4  cmp w8,#0x13
7101ff4ec8  fcsel s2,s0,s1,eq
7101ff4ecc  b 0x7101ff4ed4
7101ff4ed0  fmov s2,wzr
7101ff4ed4  ldr x8,[x19, #0x20]
7101ff4ed8  ldr x8,[x8]
7101ff4edc  ldr x9,[x19, #0x10]
7101ff4ee0  add x8,x8,#0x40
7101ff4ee4  cmp x8,x9
7101ff4ee8  csel x26,x8,x24,cc
7101ff4eec  ldr w8,[x26, #0x8]
7101ff4ef0  lsr x25,x23,#0x4
7101ff4ef4  cmp w8,#0x3
7101ff4ef8  b.ne 0x7101ff4f04
7101ff4efc  ldr s3,[x26]
7101ff4f00  b 0x7101ff4f84
7101ff4f04  cmp w8,#0x13
7101ff4f08  b.ne 0x7101ff4f18
7101ff4f0c  ldr x8,[x26]
7101ff4f10  scvtf s3,x8
7101ff4f14  b 0x7101ff4f84
7101ff4f18  and w8,w8,#0xf
7101ff4f1c  cmp w8,#0x4
7101ff4f20  b.ne 0x7101ff4f80
7101ff4f24  ldr x8,[x26]
7101ff4f28  add x1,sp,#0x20
7101ff4f2c  add x0,x8,#0x18
7101ff4f30  str q2,[sp, #0x10]
7101ff4f34  bl 0x7103907f00
7101ff4f38  ldr x8,[x26]
7101ff4f3c  ldrb w9,[x8, #0x8]
7101ff4f40  cmp w9,#0x4
7101ff4f44  b.ne 0x7101ff4f50
7101ff4f48  ldrb w8,[x8, #0xb]
7101ff4f4c  b 0x7101ff4f54
7101ff4f50  ldr x8,[x8, #0x10]
7101ff4f54  ldr q2,[sp, #0x10]
7101ff4f58  add x8,x8,#0x1
7101ff4f5c  cmp x0,x8
7101ff4f60  b.ne 0x7101ff4f80
7101ff4f64  ldr x9,[sp, #0x20]
7101ff4f68  scvtf s0,x9
7101ff4f6c  ldr w8,[sp, #0x28]
7101ff4f70  fmov s1,w9
7101ff4f74  cmp w8,#0x13
7101ff4f78  fcsel s3,s0,s1,eq
7101ff4f7c  b 0x7101ff4f84
7101ff4f80  fmov s3,wzr
7101ff4f84  ldr x8,[x19, #0x20]
7101ff4f88  ldr x8,[x8]
7101ff4f8c  ldr x9,[x19, #0x10]
7101ff4f90  add x8,x8,#0x50
7101ff4f94  cmp x8,x9
7101ff4f98  csel x26,x8,x24,cc
7101ff4f9c  ldr w8,[x26, #0x8]
7101ff4fa0  cmp w8,#0x3
7101ff4fa4  b.ne 0x7101ff4fb0
7101ff4fa8  ldr s0,[x26]
7101ff4fac  b 0x7101ff5030
7101ff4fb0  cmp w8,#0x13
7101ff4fb4  b.ne 0x7101ff4fc4
7101ff4fb8  ldr x8,[x26]
7101ff4fbc  scvtf s0,x8
7101ff4fc0  b 0x7101ff5030
7101ff4fc4  and w8,w8,#0xf
7101ff4fc8  cmp w8,#0x4
7101ff4fcc  b.ne 0x7101ff502c
7101ff4fd0  stp q3,q2,[sp]
7101ff4fd4  ldr x8,[x26]
7101ff4fd8  add x0,x8,#0x18
7101ff4fdc  add x1,sp,#0x20
7101ff4fe0  bl 0x7103907f00
7101ff4fe4  ldr x8,[x26]
7101ff4fe8  ldrb w9,[x8, #0x8]
7101ff4fec  cmp w9,#0x4
7101ff4ff0  b.ne 0x7101ff4ffc
7101ff4ff4  ldrb w8,[x8, #0xb]
7101ff4ff8  b 0x7101ff5000
7101ff4ffc  ldr x8,[x8, #0x10]
7101ff5000  ldp q3,q2,[sp]
7101ff5004  add x8,x8,#0x1
7101ff5008  cmp x0,x8
7101ff500c  b.ne 0x7101ff502c
7101ff5010  ldr x9,[sp, #0x20]
7101ff5014  scvtf s0,x9
7101ff5018  ldr w8,[sp, #0x28]
7101ff501c  fmov s1,w9
7101ff5020  cmp w8,#0x13
7101ff5024  fcsel s0,s0,s1,eq
7101ff5028  b 0x7101ff5030
7101ff502c  fmov s0,wzr
7101ff5030  movi v1.2D,#0x0
7101ff5034  mov v1.S[0x0],v2.S[0x0]
7101ff5038  mov v1.S[0x1],v3.S[0x0]
7101ff503c  cmp w25,#0x6
7101ff5040  mov v1.S[0x2],v0.S[0x0]
7101ff5044  str q1,[sp, #0x20]
7101ff5048  b.lt 0x7101ff5088
7101ff504c  ldr x8,[x19, #0x20]
7101ff5050  ldr x8,[x8]
7101ff5054  add x9,x8,#0x60
7101ff5058  ldr x8,[x19, #0x10]
7101ff505c  cmp x9,x8
7101ff5060  csel x9,x9,x24,cc
7101ff5064  ldr w10,[x9, #0x8]
7101ff5068  and w10,w10,#0xf
7101ff506c  cmp w10,#0x2
7101ff5070  b.eq 0x7101ff50d4
7101ff5074  cmp w10,#0x7
7101ff5078  b.ne 0x7101ff50dc
7101ff507c  ldr x9,[x9]
7101ff5080  add x9,x9,#0x28
7101ff5084  b 0x7101ff50e0
7101ff5088  tbnz w25,#0x1f,0x7101ff5094
7101ff508c  ldr x8,[x19, #0x10]
7101ff5090  b 0x7101ff50e4
7101ff5094  ldr x8,[x19, #0x20]
7101ff5098  ldr x8,[x8]
7101ff509c  lsl x10,x23,#0x1c
7101ff50a0  ldr x9,[x19, #0x10]
7101ff50a4  eor x10,x10,#-0x100000000
7101ff50a8  add x8,x8,x10, ASR #0x1c
7101ff50ac  add x8,x8,#0x10
7101ff50b0  cmp x9,x8
7101ff50b4  b.cs 0x7101ff50ec
7101ff50b8  add x10,x9,#0x10
7101ff50bc  str x10,[x19, #0x10]
7101ff50c0  str wzr,[x9, #0x8]
7101ff50c4  ldr x9,[x19, #0x10]
7101ff50c8  cmp x9,x8
7101ff50cc  b.cc 0x7101ff50b8
7101ff50d0  b 0x7101ff50ec
7101ff50d4  ldr x9,[x9]
7101ff50d8  b 0x7101ff50e0
7101ff50dc  mov x9,xzr
7101ff50e0  ldr x21,[x9, #0x60]
7101ff50e4  neg x9,x23, LSL #0x1c
7101ff50e8  add x8,x8,x9, ASR #0x1c
7101ff50ec  str x8,[x19, #0x10]
7101ff50f0  ldr x8,[x21]
7101ff50f4  ldr x8,[x8, #0x220]
7101ff50f8  add x3,sp,#0x20
7101ff50fc  mov x0,x21
7101ff5100  mov w1,w20
7101ff5104  mov x2,x22
7101ff5108  blr x8
7101ff510c  cbz x22,0x7101ff5118
7101ff5110  mov x0,x22
7101ff5114  bl 0x710392eb40
7101ff5118  ldp x29,x30,[sp, #0x70]
7101ff511c  mov w0,wzr
7101ff5120  ldp x20,x19,[sp, #0x60]
7101ff5124  ldp x22,x21,[sp, #0x50]
7101ff5128  ldp x24,x23,[sp, #0x40]
7101ff512c  ldp x26,x25,[sp, #0x30]
7101ff5130  add sp,sp,#0x80
7101ff5134  ret
