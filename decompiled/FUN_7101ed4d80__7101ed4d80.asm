// addr:      7101ed4d80
// offset:    0x1ed4d80
// name:      FUN_7101ed4d80
// mangled:   
// size:      1188

7101ed4d80  sub sp,sp,#0x50
7101ed4d84  str x23,[sp, #0x10]
7101ed4d88  stp x22,x21,[sp, #0x20]
7101ed4d8c  stp x20,x19,[sp, #0x30]
7101ed4d90  stp x29,x30,[sp, #0x40]
7101ed4d94  add x29,sp,#0x40
7101ed4d98  mov x21,x1
7101ed4d9c  mov x19,x0
7101ed4da0  add x1,x2,#0x8
7101ed4da4  mov x8,sp
7101ed4da8  mov x0,x21
7101ed4dac  mov x20,x2
7101ed4db0  mov x22,sp
7101ed4db4  bl 0x7103776640
7101ed4db8  cmp x19,x22
7101ed4dbc  b.eq 0x7101ed4df4
7101ed4dc0  ldr x8,[sp, #0x8]
7101ed4dc4  str xzr,[sp, #0x8]
7101ed4dc8  ldr x22,[x19, #0x8]
7101ed4dcc  str x8,[x19, #0x8]
7101ed4dd0  cbz x22,0x7101ed4df4
7101ed4dd4  ldr x0,[x22, #0x18]
7101ed4dd8  adrp x8,0x710523d000
7101ed4ddc  add x8,x8,#0x9a8
7101ed4de0  stp x8,xzr,[x22, #0x10]
7101ed4de4  cbz x0,0x7101ed4dec
7101ed4de8  bl 0x710392eb40
7101ed4dec  mov x0,x22
7101ed4df0  bl 0x710392eb40
7101ed4df4  ldr x22,[sp, #0x8]
7101ed4df8  adrp x23,0x710523d000
7101ed4dfc  add x23,x23,#0x988
7101ed4e00  stp x23,xzr,[sp]
7101ed4e04  cbz x22,0x7101ed4e28
7101ed4e08  ldr x0,[x22, #0x18]
7101ed4e0c  adrp x8,0x710523d000
7101ed4e10  add x8,x8,#0x9a8
7101ed4e14  stp x8,xzr,[x22, #0x10]
7101ed4e18  cbz x0,0x7101ed4e20
7101ed4e1c  bl 0x710392eb40
7101ed4e20  mov x0,x22
7101ed4e24  bl 0x710392eb40
7101ed4e28  add x1,x20,#0x50
7101ed4e2c  mov x8,sp
7101ed4e30  mov x0,x21
7101ed4e34  mov x22,sp
7101ed4e38  bl 0x7103776640
7101ed4e3c  add x8,x19,#0x10
7101ed4e40  cmp x8,x22
7101ed4e44  b.eq 0x7101ed4e7c
7101ed4e48  ldr x8,[sp, #0x8]
7101ed4e4c  str xzr,[sp, #0x8]
7101ed4e50  ldr x22,[x19, #0x18]
7101ed4e54  str x8,[x19, #0x18]
7101ed4e58  cbz x22,0x7101ed4e7c
7101ed4e5c  ldr x0,[x22, #0x18]
7101ed4e60  adrp x8,0x710523d000
7101ed4e64  add x8,x8,#0x9a8
7101ed4e68  stp x8,xzr,[x22, #0x10]
7101ed4e6c  cbz x0,0x7101ed4e74
7101ed4e70  bl 0x710392eb40
7101ed4e74  mov x0,x22
7101ed4e78  bl 0x710392eb40
7101ed4e7c  ldr x22,[sp, #0x8]
7101ed4e80  stp x23,xzr,[sp]
7101ed4e84  cbz x22,0x7101ed4ea8
7101ed4e88  ldr x0,[x22, #0x18]
7101ed4e8c  adrp x8,0x710523d000
7101ed4e90  add x8,x8,#0x9a8
7101ed4e94  stp x8,xzr,[x22, #0x10]
7101ed4e98  cbz x0,0x7101ed4ea0
7101ed4e9c  bl 0x710392eb40
7101ed4ea0  mov x0,x22
7101ed4ea4  bl 0x710392eb40
7101ed4ea8  add x1,x20,#0x98
7101ed4eac  mov x8,sp
7101ed4eb0  mov x0,x21
7101ed4eb4  mov x22,sp
7101ed4eb8  bl 0x7103776640
7101ed4ebc  add x8,x19,#0x20
7101ed4ec0  cmp x8,x22
7101ed4ec4  b.eq 0x7101ed4efc
7101ed4ec8  ldr x8,[sp, #0x8]
7101ed4ecc  str xzr,[sp, #0x8]
7101ed4ed0  ldr x22,[x19, #0x28]
7101ed4ed4  str x8,[x19, #0x28]
7101ed4ed8  cbz x22,0x7101ed4efc
7101ed4edc  ldr x0,[x22, #0x18]
7101ed4ee0  adrp x8,0x710523d000
7101ed4ee4  add x8,x8,#0x9a8
7101ed4ee8  stp x8,xzr,[x22, #0x10]
7101ed4eec  cbz x0,0x7101ed4ef4
7101ed4ef0  bl 0x710392eb40
7101ed4ef4  mov x0,x22
7101ed4ef8  bl 0x710392eb40
7101ed4efc  ldr x22,[sp, #0x8]
7101ed4f00  stp x23,xzr,[sp]
7101ed4f04  cbz x22,0x7101ed4f28
7101ed4f08  ldr x0,[x22, #0x18]
7101ed4f0c  adrp x8,0x710523d000
7101ed4f10  add x8,x8,#0x9a8
7101ed4f14  stp x8,xzr,[x22, #0x10]
7101ed4f18  cbz x0,0x7101ed4f20
7101ed4f1c  bl 0x710392eb40
7101ed4f20  mov x0,x22
7101ed4f24  bl 0x710392eb40
7101ed4f28  add x1,x20,#0xe0
7101ed4f2c  mov x8,sp
7101ed4f30  mov x0,x21
7101ed4f34  mov x22,sp
7101ed4f38  bl 0x7103776910
7101ed4f3c  add x8,x19,#0x30
7101ed4f40  cmp x8,x22
7101ed4f44  b.eq 0x7101ed4f60
7101ed4f48  ldr x8,[sp, #0x8]
7101ed4f4c  str xzr,[sp, #0x8]
7101ed4f50  ldr x0,[x19, #0x38]
7101ed4f54  str x8,[x19, #0x38]
7101ed4f58  cbz x0,0x7101ed4f60
7101ed4f5c  bl 0x710392eb40
7101ed4f60  ldr x0,[sp, #0x8]
7101ed4f64  adrp x21,0x710523d000
7101ed4f68  add x21,x21,#0x9a8
7101ed4f6c  stp x21,xzr,[sp]
7101ed4f70  cbz x0,0x7101ed4f78
7101ed4f74  bl 0x710392eb40
7101ed4f78  adrp x1,0x71042d6000
7101ed4f7c  add x1,x1,#0xad9
7101ed4f80  mov x8,sp
7101ed4f84  mov x0,x19
7101ed4f88  mov x22,sp
7101ed4f8c  bl 0x71037780e0
7101ed4f90  add x8,x19,#0x50
7101ed4f94  cmp x8,x22
7101ed4f98  b.eq 0x7101ed4fb4
7101ed4f9c  ldr x8,[sp, #0x8]
7101ed4fa0  str xzr,[sp, #0x8]
7101ed4fa4  ldr x0,[x19, #0x58]
7101ed4fa8  str x8,[x19, #0x58]
7101ed4fac  cbz x0,0x7101ed4fb4
7101ed4fb0  bl 0x710392eb40
7101ed4fb4  ldr x0,[sp, #0x8]
7101ed4fb8  adrp x22,0x710523d000
7101ed4fbc  add x22,x22,#0x9e8
7101ed4fc0  stp x22,xzr,[sp]
7101ed4fc4  cbz x0,0x7101ed4fcc
7101ed4fc8  bl 0x710392eb40
7101ed4fcc  adrp x1,0x71042f8000
7101ed4fd0  add x1,x1,#0xb52
7101ed4fd4  mov x8,sp
7101ed4fd8  mov x0,x19
7101ed4fdc  mov x23,sp
7101ed4fe0  bl 0x71037780e0
7101ed4fe4  add x8,x19,#0x60
7101ed4fe8  cmp x8,x23
7101ed4fec  b.eq 0x7101ed5008
7101ed4ff0  ldr x8,[sp, #0x8]
7101ed4ff4  str xzr,[sp, #0x8]
7101ed4ff8  ldr x0,[x19, #0x68]
7101ed4ffc  str x8,[x19, #0x68]
7101ed5000  cbz x0,0x7101ed5008
7101ed5004  bl 0x710392eb40
7101ed5008  ldr x0,[sp, #0x8]
7101ed500c  stp x22,xzr,[sp]
7101ed5010  cbz x0,0x7101ed5018
7101ed5014  bl 0x710392eb40
7101ed5018  adrp x1,0x7104455000
7101ed501c  add x1,x1,#0x251
7101ed5020  mov x0,x19
7101ed5024  bl 0x7103776510
7101ed5028  tbz w0,#0x0,0x7101ed5090
7101ed502c  adrp x1,0x7104455000
7101ed5030  add x1,x1,#0x251
7101ed5034  mov x8,sp
7101ed5038  mov x0,x19
7101ed503c  mov x22,sp
7101ed5040  bl 0x7103776910
7101ed5044  add x8,x19,#0x40
7101ed5048  cmp x8,x22
7101ed504c  b.eq 0x7101ed5068
7101ed5050  ldr x8,[sp, #0x8]
7101ed5054  str xzr,[sp, #0x8]
7101ed5058  ldr x0,[x19, #0x48]
7101ed505c  str x8,[x19, #0x48]
7101ed5060  cbz x0,0x7101ed5068
7101ed5064  bl 0x710392eb40
7101ed5068  ldr x0,[sp, #0x8]
7101ed506c  stp x21,xzr,[sp]
7101ed5070  cbz x0,0x7101ed5078
7101ed5074  bl 0x710392eb40
7101ed5078  ldr x8,[x19, #0x48]
7101ed507c  ldr x8,[x8]
7101ed5080  cbz x8,0x7101ed5090
7101ed5084  ldrb w9,[x8, #0x58]
7101ed5088  and w9,w9,#0xfe
7101ed508c  strb w9,[x8, #0x58]
7101ed5090  mov w0,#0x10
7101ed5094  mov w1,#0x8
7101ed5098  bl 0x710392e290
7101ed509c  mov x21,x0
7101ed50a0  cbnz x0,0x7101ed50ec
7101ed50a4  adrp x8,0x7105332000
7101ed50a8  ldr x0,[x8, #0xf00]
7101ed50ac  cbz x0,0x7101ed50e8
7101ed50b0  mov w8,#0x8
7101ed50b4  str wzr,[sp, #0x1c]
7101ed50b8  add x1,sp,#0x1c
7101ed50bc  str x8,[sp]
7101ed50c0  ldr x8,[x0]
7101ed50c4  ldr x8,[x8, #0x30]
7101ed50c8  mov x2,sp
7101ed50cc  blr x8
7101ed50d0  tbz w0,#0x0,0x7101ed50e8
7101ed50d4  mov w0,#0x10
7101ed50d8  mov w1,#0x8
7101ed50dc  bl 0x710392e290
7101ed50e0  mov x21,x0
7101ed50e4  cbnz x0,0x7101ed50ec
7101ed50e8  mov x21,xzr
7101ed50ec  str xzr,[x21]
7101ed50f0  ldr x8,[x19, #0x18]
7101ed50f4  ldr x8,[x8, #0x8]
7101ed50f8  cbz x8,0x7101ed5130
7101ed50fc  ldr x0,[x8, #0x60]
7101ed5100  cbz x0,0x7101ed5130
7101ed5104  ldr x8,[x8, #0x18]
7101ed5108  add x1,x8,#0xb0
7101ed510c  bl 0x7103796f20
7101ed5110  str x0,[x21]
7101ed5114  cbz x0,0x7101ed5134
7101ed5118  ldr x8,[x0]
7101ed511c  ldr x8,[x8, #0x268]
7101ed5120  mov w1,#0x1
7101ed5124  mov w2,#0x1
7101ed5128  blr x8
7101ed512c  b 0x7101ed5134
7101ed5130  str xzr,[x21]
7101ed5134  mov x0,x21
7101ed5138  bl 0x710392eb40
7101ed513c  mov w0,#0x10
7101ed5140  mov w1,#0x8
7101ed5144  bl 0x710392e290
7101ed5148  mov x21,x0
7101ed514c  cbnz x0,0x7101ed5198
7101ed5150  adrp x8,0x7105332000
7101ed5154  ldr x0,[x8, #0xf00]
7101ed5158  cbz x0,0x7101ed5194
7101ed515c  mov w8,#0x8
7101ed5160  str wzr,[sp, #0x1c]
7101ed5164  add x1,sp,#0x1c
7101ed5168  str x8,[sp]
7101ed516c  ldr x8,[x0]
7101ed5170  ldr x8,[x8, #0x30]
7101ed5174  mov x2,sp
7101ed5178  blr x8
7101ed517c  tbz w0,#0x0,0x7101ed5194
7101ed5180  mov w0,#0x10
7101ed5184  mov w1,#0x8
7101ed5188  bl 0x710392e290
7101ed518c  mov x21,x0
7101ed5190  cbnz x0,0x7101ed5198
7101ed5194  mov x21,xzr
7101ed5198  str xzr,[x21]
7101ed519c  ldr x8,[x19, #0x28]
7101ed51a0  ldr x8,[x8, #0x8]
7101ed51a4  cbz x8,0x7101ed51dc
7101ed51a8  ldr x0,[x8, #0x60]
7101ed51ac  cbz x0,0x7101ed51dc
7101ed51b0  ldr x8,[x8, #0x18]
7101ed51b4  add x1,x8,#0xb0
7101ed51b8  bl 0x7103796f20
7101ed51bc  str x0,[x21]
7101ed51c0  cbz x0,0x7101ed51e0
7101ed51c4  ldr x8,[x0]
7101ed51c8  ldr x8,[x8, #0x268]
7101ed51cc  mov w1,#0x1
7101ed51d0  mov w2,#0x1
7101ed51d4  blr x8
7101ed51d8  b 0x7101ed51e0
7101ed51dc  str xzr,[x21]
7101ed51e0  mov x0,x21
7101ed51e4  bl 0x710392eb40
7101ed51e8  adrp x8,0x7104473000
7101ed51ec  ldr s1,[x8, #0xb30]
7101ed51f0  adrp x8,0x7104471000
7101ed51f4  ldr s0,[x20, #0x120]
7101ed51f8  ldr s2,[x8, #0xb98]
7101ed51fc  str s0,[x19, #0xd0]
7101ed5200  fmul s1,s0,s1
7101ed5204  fmul s0,s0,s2
7101ed5208  stp s1,s0,[x19, #0xdc]
7101ed520c  ldp x29,x30,[sp, #0x40]
7101ed5210  ldr x23,[sp, #0x10]
7101ed5214  ldp x20,x19,[sp, #0x30]
7101ed5218  ldp x22,x21,[sp, #0x20]
7101ed521c  add sp,sp,#0x50
7101ed5220  ret
