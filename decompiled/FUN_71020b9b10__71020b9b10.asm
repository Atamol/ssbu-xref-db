// addr:      71020b9b10
// offset:    0x20b9b10
// name:      FUN_71020b9b10
// mangled:   
// size:      3992

71020b9b10  sub sp,sp,#0x50
71020b9b14  str x23,[sp, #0x10]
71020b9b18  stp x22,x21,[sp, #0x20]
71020b9b1c  stp x20,x19,[sp, #0x30]
71020b9b20  stp x29,x30,[sp, #0x40]
71020b9b24  add x29,sp,#0x40
71020b9b28  mov w21,w2
71020b9b2c  mov x19,x1
71020b9b30  mov x20,x0
71020b9b34  mov w22,#0xb9d8
71020b9b38  movk w22,#0xfff0, LSL #16
71020b9b3c  bl 0x71020b6680
71020b9b40  ldr x8,[x19, #0x20]
71020b9b44  cmp w21,#0x1
71020b9b48  b.lt 0x71020b9b6c
71020b9b4c  ldr x8,[x8]
71020b9b50  ldr x10,[x19, #0x10]
71020b9b54  adrp x9,0x7104862000
71020b9b58  add x9,x9,#0x960
71020b9b5c  add x8,x8,w21, SXTW  #0x4
71020b9b60  cmp x8,x10
71020b9b64  csel x1,x8,x9,cc
71020b9b68  b 0x71020b9bcc
71020b9b6c  add w9,w22,#0x1
71020b9b70  cmp w21,w9
71020b9b74  b.ge 0x71020b9b8c
71020b9b78  cmp w21,w22
71020b9b7c  b.ne 0x71020b9b98
71020b9b80  ldr x8,[x19, #0x18]
71020b9b84  add x1,x8,#0x40
71020b9b88  b 0x71020b9bcc
71020b9b8c  ldr x8,[x19, #0x10]
71020b9b90  add x1,x8,w21, SXTW  #0x4
71020b9b94  b 0x71020b9bcc
71020b9b98  ldr x8,[x8]
71020b9b9c  ldr w9,[x8, #0x8]
71020b9ba0  adrp x1,0x7104862000
71020b9ba4  add x1,x1,#0x960
71020b9ba8  cmp w9,#0x16
71020b9bac  b.eq 0x71020b9bcc
71020b9bb0  ldr x8,[x8]
71020b9bb4  sub w9,w22,w21
71020b9bb8  add x10,x8,w9, SXTW  #0x4
71020b9bbc  ldrb w8,[x8, #0xa]
71020b9bc0  add x10,x10,#0x10
71020b9bc4  cmp w9,w8
71020b9bc8  csel x1,x1,x10,gt
71020b9bcc  adrp x2,0x71042c5000
71020b9bd0  add x2,x2,#0xce7
71020b9bd4  mov x0,x19
71020b9bd8  bl 0x71038f4d40
71020b9bdc  ldr x8,[x19, #0x10]
71020b9be0  sub x1,x8,#0x10
71020b9be4  adrp x2,0x71043d7000
71020b9be8  add x2,x2,#0xeae
71020b9bec  mov x0,x19
71020b9bf0  bl 0x71038f4d40
71020b9bf4  ldr x23,[x19, #0x10]
71020b9bf8  ldur w8,[x23, #-0x8]
71020b9bfc  cmp w8,#0x3
71020b9c00  b.ne 0x71020b9c0c
71020b9c04  ldur s0,[x23, #-0x10]
71020b9c08  b 0x71020b9c84
71020b9c0c  cmp w8,#0x13
71020b9c10  b.ne 0x71020b9c20
71020b9c14  ldur x8,[x23, #-0x10]
71020b9c18  scvtf s0,x8
71020b9c1c  b 0x71020b9c84
71020b9c20  and w8,w8,#0xf
71020b9c24  cmp w8,#0x4
71020b9c28  b.ne 0x71020b9c80
71020b9c2c  ldur x8,[x23, #-0x10]
71020b9c30  add x0,x8,#0x18
71020b9c34  mov x1,sp
71020b9c38  bl 0x7103907f00
71020b9c3c  ldur x8,[x23, #-0x10]
71020b9c40  ldrb w9,[x8, #0x8]
71020b9c44  cmp w9,#0x4
71020b9c48  b.ne 0x71020b9c54
71020b9c4c  ldrb w8,[x8, #0xb]
71020b9c50  b 0x71020b9c58
71020b9c54  ldr x8,[x8, #0x10]
71020b9c58  add x8,x8,#0x1
71020b9c5c  cmp x0,x8
71020b9c60  b.ne 0x71020b9c80
71020b9c64  ldr x9,[sp]
71020b9c68  scvtf s0,x9
71020b9c6c  ldr w8,[sp, #0x8]
71020b9c70  fmov s1,w9
71020b9c74  cmp w8,#0x13
71020b9c78  fcsel s0,s0,s1,eq
71020b9c7c  b 0x71020b9c84
71020b9c80  fmov s0,wzr
71020b9c84  ldr x8,[x19, #0x10]
71020b9c88  sub x8,x8,#0x10
71020b9c8c  str x8,[x19, #0x10]
71020b9c90  ldr q1,[x20, #0x80]
71020b9c94  mov v1.S[0x0],v0.S[0x0]
71020b9c98  str q1,[x20, #0x80]
71020b9c9c  ldr x8,[x19, #0x10]
71020b9ca0  sub x1,x8,#0x10
71020b9ca4  adrp x2,0x71042ab000
71020b9ca8  add x2,x2,#0xc20
71020b9cac  mov x0,x19
71020b9cb0  bl 0x71038f4d40
71020b9cb4  ldr x23,[x19, #0x10]
71020b9cb8  ldur w8,[x23, #-0x8]
71020b9cbc  cmp w8,#0x3
71020b9cc0  b.ne 0x71020b9ccc
71020b9cc4  ldur s0,[x23, #-0x10]
71020b9cc8  b 0x71020b9d44
71020b9ccc  cmp w8,#0x13
71020b9cd0  b.ne 0x71020b9ce0
71020b9cd4  ldur x8,[x23, #-0x10]
71020b9cd8  scvtf s0,x8
71020b9cdc  b 0x71020b9d44
71020b9ce0  and w8,w8,#0xf
71020b9ce4  cmp w8,#0x4
71020b9ce8  b.ne 0x71020b9d40
71020b9cec  ldur x8,[x23, #-0x10]
71020b9cf0  add x0,x8,#0x18
71020b9cf4  mov x1,sp
71020b9cf8  bl 0x7103907f00
71020b9cfc  ldur x8,[x23, #-0x10]
71020b9d00  ldrb w9,[x8, #0x8]
71020b9d04  cmp w9,#0x4
71020b9d08  b.ne 0x71020b9d14
71020b9d0c  ldrb w8,[x8, #0xb]
71020b9d10  b 0x71020b9d18
71020b9d14  ldr x8,[x8, #0x10]
71020b9d18  add x8,x8,#0x1
71020b9d1c  cmp x0,x8
71020b9d20  b.ne 0x71020b9d40
71020b9d24  ldr x9,[sp]
71020b9d28  scvtf s0,x9
71020b9d2c  ldr w8,[sp, #0x8]
71020b9d30  fmov s1,w9
71020b9d34  cmp w8,#0x13
71020b9d38  fcsel s0,s0,s1,eq
71020b9d3c  b 0x71020b9d44
71020b9d40  fmov s0,wzr
71020b9d44  ldr x8,[x19, #0x10]
71020b9d48  sub x8,x8,#0x10
71020b9d4c  str x8,[x19, #0x10]
71020b9d50  ldr q1,[x20, #0x80]
71020b9d54  mov v1.S[0x1],v0.S[0x0]
71020b9d58  str q1,[x20, #0x80]
71020b9d5c  ldr x8,[x19, #0x10]
71020b9d60  sub x1,x8,#0x10
71020b9d64  adrp x2,0x710443b000
71020b9d68  add x2,x2,#0x9a0
71020b9d6c  mov x0,x19
71020b9d70  bl 0x71038f4d40
71020b9d74  ldr x23,[x19, #0x10]
71020b9d78  ldur w8,[x23, #-0x8]
71020b9d7c  cmp w8,#0x3
71020b9d80  b.ne 0x71020b9d8c
71020b9d84  ldur s0,[x23, #-0x10]
71020b9d88  b 0x71020b9e04
71020b9d8c  cmp w8,#0x13
71020b9d90  b.ne 0x71020b9da0
71020b9d94  ldur x8,[x23, #-0x10]
71020b9d98  scvtf s0,x8
71020b9d9c  b 0x71020b9e04
71020b9da0  and w8,w8,#0xf
71020b9da4  cmp w8,#0x4
71020b9da8  b.ne 0x71020b9e00
71020b9dac  ldur x8,[x23, #-0x10]
71020b9db0  add x0,x8,#0x18
71020b9db4  mov x1,sp
71020b9db8  bl 0x7103907f00
71020b9dbc  ldur x8,[x23, #-0x10]
71020b9dc0  ldrb w9,[x8, #0x8]
71020b9dc4  cmp w9,#0x4
71020b9dc8  b.ne 0x71020b9dd4
71020b9dcc  ldrb w8,[x8, #0xb]
71020b9dd0  b 0x71020b9dd8
71020b9dd4  ldr x8,[x8, #0x10]
71020b9dd8  add x8,x8,#0x1
71020b9ddc  cmp x0,x8
71020b9de0  b.ne 0x71020b9e00
71020b9de4  ldr x9,[sp]
71020b9de8  scvtf s0,x9
71020b9dec  ldr w8,[sp, #0x8]
71020b9df0  fmov s1,w9
71020b9df4  cmp w8,#0x13
71020b9df8  fcsel s0,s0,s1,eq
71020b9dfc  b 0x71020b9e04
71020b9e00  fmov s0,wzr
71020b9e04  ldr x8,[x19, #0x10]
71020b9e08  sub x8,x8,#0x10
71020b9e0c  str x8,[x19, #0x10]
71020b9e10  ldr q1,[x20, #0x80]
71020b9e14  mov v1.S[0x2],v0.S[0x0]
71020b9e18  fmov s0,wzr
71020b9e1c  mov v1.S[0x3],v0.S[0x0]
71020b9e20  str q1,[x20, #0x80]
71020b9e24  ldr x8,[x19, #0x10]
71020b9e28  ldr x9,[x19, #0x20]
71020b9e2c  sub x8,x8,#0x10
71020b9e30  cmp w21,#0x1
71020b9e34  str x8,[x19, #0x10]
71020b9e38  b.lt 0x71020b9e58
71020b9e3c  ldr x9,[x9]
71020b9e40  add x9,x9,w21, SXTW  #0x4
71020b9e44  adrp x10,0x7104862000
71020b9e48  add x10,x10,#0x960
71020b9e4c  cmp x9,x8
71020b9e50  csel x1,x9,x10,cc
71020b9e54  b 0x71020b9eb4
71020b9e58  add w10,w22,#0x1
71020b9e5c  cmp w21,w10
71020b9e60  b.ge 0x71020b9e78
71020b9e64  cmp w21,w22
71020b9e68  b.ne 0x71020b9e80
71020b9e6c  ldr x8,[x19, #0x18]
71020b9e70  add x1,x8,#0x40
71020b9e74  b 0x71020b9eb4
71020b9e78  add x1,x8,w21, SXTW  #0x4
71020b9e7c  b 0x71020b9eb4
71020b9e80  ldr x8,[x9]
71020b9e84  ldr w9,[x8, #0x8]
71020b9e88  adrp x1,0x7104862000
71020b9e8c  add x1,x1,#0x960
71020b9e90  cmp w9,#0x16
71020b9e94  b.eq 0x71020b9eb4
71020b9e98  ldr x8,[x8]
71020b9e9c  sub w9,w22,w21
71020b9ea0  add x10,x8,w9, SXTW  #0x4
71020b9ea4  ldrb w8,[x8, #0xa]
71020b9ea8  add x10,x10,#0x10
71020b9eac  cmp w9,w8
71020b9eb0  csel x1,x1,x10,gt
71020b9eb4  adrp x2,0x71043f1000
71020b9eb8  add x2,x2,#0x98b
71020b9ebc  mov x0,x19
71020b9ec0  bl 0x71038f4d40
71020b9ec4  ldr x23,[x19, #0x10]
71020b9ec8  ldur w8,[x23, #-0x8]
71020b9ecc  cmp w8,#0x3
71020b9ed0  b.ne 0x71020b9edc
71020b9ed4  ldur w8,[x23, #-0x10]
71020b9ed8  b 0x71020b9f58
71020b9edc  cmp w8,#0x13
71020b9ee0  b.ne 0x71020b9ef4
71020b9ee4  ldur x8,[x23, #-0x10]
71020b9ee8  scvtf s0,x8
71020b9eec  fmov w8,s0
71020b9ef0  b 0x71020b9f58
71020b9ef4  and w8,w8,#0xf
71020b9ef8  cmp w8,#0x4
71020b9efc  b.ne 0x71020b9f54
71020b9f00  ldur x8,[x23, #-0x10]
71020b9f04  add x0,x8,#0x18
71020b9f08  mov x1,sp
71020b9f0c  bl 0x7103907f00
71020b9f10  ldur x8,[x23, #-0x10]
71020b9f14  ldrb w9,[x8, #0x8]
71020b9f18  cmp w9,#0x4
71020b9f1c  b.ne 0x71020b9f28
71020b9f20  ldrb w8,[x8, #0xb]
71020b9f24  b 0x71020b9f2c
71020b9f28  ldr x8,[x8, #0x10]
71020b9f2c  add x8,x8,#0x1
71020b9f30  cmp x0,x8
71020b9f34  b.ne 0x71020b9f54
71020b9f38  ldr x9,[sp]
71020b9f3c  scvtf s0,x9
71020b9f40  ldr w8,[sp, #0x8]
71020b9f44  cmp w8,#0x13
71020b9f48  fmov w10,s0
71020b9f4c  csel w8,w10,w9,eq
71020b9f50  b 0x71020b9f58
71020b9f54  mov w8,wzr
71020b9f58  str w8,[x20, #0x90]
71020b9f5c  ldr x8,[x19, #0x10]
71020b9f60  ldr x9,[x19, #0x20]
71020b9f64  sub x8,x8,#0x10
71020b9f68  cmp w21,#0x1
71020b9f6c  str x8,[x19, #0x10]
71020b9f70  b.lt 0x71020b9f90
71020b9f74  ldr x9,[x9]
71020b9f78  add x9,x9,w21, SXTW  #0x4
71020b9f7c  adrp x10,0x7104862000
71020b9f80  add x10,x10,#0x960
71020b9f84  cmp x9,x8
71020b9f88  csel x1,x9,x10,cc
71020b9f8c  b 0x71020b9fec
71020b9f90  add w10,w22,#0x1
71020b9f94  cmp w21,w10
71020b9f98  b.ge 0x71020b9fb0
71020b9f9c  cmp w21,w22
71020b9fa0  b.ne 0x71020b9fb8
71020b9fa4  ldr x8,[x19, #0x18]
71020b9fa8  add x1,x8,#0x40
71020b9fac  b 0x71020b9fec
71020b9fb0  add x1,x8,w21, SXTW  #0x4
71020b9fb4  b 0x71020b9fec
71020b9fb8  ldr x8,[x9]
71020b9fbc  ldr w9,[x8, #0x8]
71020b9fc0  adrp x1,0x7104862000
71020b9fc4  add x1,x1,#0x960
71020b9fc8  cmp w9,#0x16
71020b9fcc  b.eq 0x71020b9fec
71020b9fd0  ldr x8,[x8]
71020b9fd4  sub w9,w22,w21
71020b9fd8  add x10,x8,w9, SXTW  #0x4
71020b9fdc  ldrb w8,[x8, #0xa]
71020b9fe0  add x10,x10,#0x10
71020b9fe4  cmp w9,w8
71020b9fe8  csel x1,x1,x10,gt
71020b9fec  adrp x2,0x7104292000
71020b9ff0  add x2,x2,#0xd9f
71020b9ff4  mov x0,x19
71020b9ff8  bl 0x71038f4d40
71020b9ffc  ldr x23,[x19, #0x10]
71020ba000  ldur w8,[x23, #-0x8]
71020ba004  cmp w8,#0x3
71020ba008  b.ne 0x71020ba014
71020ba00c  ldur w8,[x23, #-0x10]
71020ba010  b 0x71020ba090
71020ba014  cmp w8,#0x13
71020ba018  b.ne 0x71020ba02c
71020ba01c  ldur x8,[x23, #-0x10]
71020ba020  scvtf s0,x8
71020ba024  fmov w8,s0
71020ba028  b 0x71020ba090
71020ba02c  and w8,w8,#0xf
71020ba030  cmp w8,#0x4
71020ba034  b.ne 0x71020ba08c
71020ba038  ldur x8,[x23, #-0x10]
71020ba03c  add x0,x8,#0x18
71020ba040  mov x1,sp
71020ba044  bl 0x7103907f00
71020ba048  ldur x8,[x23, #-0x10]
71020ba04c  ldrb w9,[x8, #0x8]
71020ba050  cmp w9,#0x4
71020ba054  b.ne 0x71020ba060
71020ba058  ldrb w8,[x8, #0xb]
71020ba05c  b 0x71020ba064
71020ba060  ldr x8,[x8, #0x10]
71020ba064  add x8,x8,#0x1
71020ba068  cmp x0,x8
71020ba06c  b.ne 0x71020ba08c
71020ba070  ldr x9,[sp]
71020ba074  scvtf s0,x9
71020ba078  ldr w8,[sp, #0x8]
71020ba07c  cmp w8,#0x13
71020ba080  fmov w10,s0
71020ba084  csel w8,w10,w9,eq
71020ba088  b 0x71020ba090
71020ba08c  mov w8,wzr
71020ba090  str w8,[x20, #0x94]
71020ba094  ldr x8,[x19, #0x10]
71020ba098  ldr x9,[x19, #0x20]
71020ba09c  sub x8,x8,#0x10
71020ba0a0  cmp w21,#0x1
71020ba0a4  str x8,[x19, #0x10]
71020ba0a8  b.lt 0x71020ba0c8
71020ba0ac  ldr x9,[x9]
71020ba0b0  add x9,x9,w21, SXTW  #0x4
71020ba0b4  adrp x10,0x7104862000
71020ba0b8  add x10,x10,#0x960
71020ba0bc  cmp x9,x8
71020ba0c0  csel x1,x9,x10,cc
71020ba0c4  b 0x71020ba124
71020ba0c8  add w10,w22,#0x1
71020ba0cc  cmp w21,w10
71020ba0d0  b.ge 0x71020ba0e8
71020ba0d4  cmp w21,w22
71020ba0d8  b.ne 0x71020ba0f0
71020ba0dc  ldr x8,[x19, #0x18]
71020ba0e0  add x1,x8,#0x40
71020ba0e4  b 0x71020ba124
71020ba0e8  add x1,x8,w21, SXTW  #0x4
71020ba0ec  b 0x71020ba124
71020ba0f0  ldr x8,[x9]
71020ba0f4  ldr w9,[x8, #0x8]
71020ba0f8  adrp x1,0x7104862000
71020ba0fc  add x1,x1,#0x960
71020ba100  cmp w9,#0x16
71020ba104  b.eq 0x71020ba124
71020ba108  ldr x8,[x8]
71020ba10c  sub w9,w22,w21
71020ba110  add x10,x8,w9, SXTW  #0x4
71020ba114  ldrb w8,[x8, #0xa]
71020ba118  add x10,x10,#0x10
71020ba11c  cmp w9,w8
71020ba120  csel x1,x1,x10,gt
71020ba124  adrp x2,0x71042e8000
71020ba128  add x2,x2,#0x3d4
71020ba12c  mov x0,x19
71020ba130  bl 0x71038f4d40
71020ba134  ldr x23,[x19, #0x10]
71020ba138  ldur w8,[x23, #-0x8]
71020ba13c  cmp w8,#0x3
71020ba140  b.ne 0x71020ba14c
71020ba144  ldur w8,[x23, #-0x10]
71020ba148  b 0x71020ba1c8
71020ba14c  cmp w8,#0x13
71020ba150  b.ne 0x71020ba164
71020ba154  ldur x8,[x23, #-0x10]
71020ba158  scvtf s0,x8
71020ba15c  fmov w8,s0
71020ba160  b 0x71020ba1c8
71020ba164  and w8,w8,#0xf
71020ba168  cmp w8,#0x4
71020ba16c  b.ne 0x71020ba1c4
71020ba170  ldur x8,[x23, #-0x10]
71020ba174  add x0,x8,#0x18
71020ba178  mov x1,sp
71020ba17c  bl 0x7103907f00
71020ba180  ldur x8,[x23, #-0x10]
71020ba184  ldrb w9,[x8, #0x8]
71020ba188  cmp w9,#0x4
71020ba18c  b.ne 0x71020ba198
71020ba190  ldrb w8,[x8, #0xb]
71020ba194  b 0x71020ba19c
71020ba198  ldr x8,[x8, #0x10]
71020ba19c  add x8,x8,#0x1
71020ba1a0  cmp x0,x8
71020ba1a4  b.ne 0x71020ba1c4
71020ba1a8  ldr x9,[sp]
71020ba1ac  scvtf s0,x9
71020ba1b0  ldr w8,[sp, #0x8]
71020ba1b4  cmp w8,#0x13
71020ba1b8  fmov w10,s0
71020ba1bc  csel w8,w10,w9,eq
71020ba1c0  b 0x71020ba1c8
71020ba1c4  mov w8,wzr
71020ba1c8  str w8,[x20, #0x98]
71020ba1cc  ldr x8,[x19, #0x10]
71020ba1d0  ldr x9,[x19, #0x20]
71020ba1d4  sub x8,x8,#0x10
71020ba1d8  cmp w21,#0x1
71020ba1dc  str x8,[x19, #0x10]
71020ba1e0  b.lt 0x71020ba200
71020ba1e4  ldr x9,[x9]
71020ba1e8  add x9,x9,w21, SXTW  #0x4
71020ba1ec  adrp x10,0x7104862000
71020ba1f0  add x10,x10,#0x960
71020ba1f4  cmp x9,x8
71020ba1f8  csel x1,x9,x10,cc
71020ba1fc  b 0x71020ba25c
71020ba200  add w10,w22,#0x1
71020ba204  cmp w21,w10
71020ba208  b.ge 0x71020ba220
71020ba20c  cmp w21,w22
71020ba210  b.ne 0x71020ba228
71020ba214  ldr x8,[x19, #0x18]
71020ba218  add x1,x8,#0x40
71020ba21c  b 0x71020ba25c
71020ba220  add x1,x8,w21, SXTW  #0x4
71020ba224  b 0x71020ba25c
71020ba228  ldr x8,[x9]
71020ba22c  ldr w9,[x8, #0x8]
71020ba230  adrp x1,0x7104862000
71020ba234  add x1,x1,#0x960
71020ba238  cmp w9,#0x16
71020ba23c  b.eq 0x71020ba25c
71020ba240  ldr x8,[x8]
71020ba244  sub w9,w22,w21
71020ba248  add x10,x8,w9, SXTW  #0x4
71020ba24c  ldrb w8,[x8, #0xa]
71020ba250  add x10,x10,#0x10
71020ba254  cmp w9,w8
71020ba258  csel x1,x1,x10,gt
71020ba25c  adrp x2,0x7104292000
71020ba260  add x2,x2,#0xdad
71020ba264  mov x0,x19
71020ba268  bl 0x71038f4d40
71020ba26c  ldr x23,[x19, #0x10]
71020ba270  ldur w8,[x23, #-0x8]
71020ba274  cmp w8,#0x3
71020ba278  b.ne 0x71020ba284
71020ba27c  ldur w8,[x23, #-0x10]
71020ba280  b 0x71020ba300
71020ba284  cmp w8,#0x13
71020ba288  b.ne 0x71020ba29c
71020ba28c  ldur x8,[x23, #-0x10]
71020ba290  scvtf s0,x8
71020ba294  fmov w8,s0
71020ba298  b 0x71020ba300
71020ba29c  and w8,w8,#0xf
71020ba2a0  cmp w8,#0x4
71020ba2a4  b.ne 0x71020ba2fc
71020ba2a8  ldur x8,[x23, #-0x10]
71020ba2ac  add x0,x8,#0x18
71020ba2b0  mov x1,sp
71020ba2b4  bl 0x7103907f00
71020ba2b8  ldur x8,[x23, #-0x10]
71020ba2bc  ldrb w9,[x8, #0x8]
71020ba2c0  cmp w9,#0x4
71020ba2c4  b.ne 0x71020ba2d0
71020ba2c8  ldrb w8,[x8, #0xb]
71020ba2cc  b 0x71020ba2d4
71020ba2d0  ldr x8,[x8, #0x10]
71020ba2d4  add x8,x8,#0x1
71020ba2d8  cmp x0,x8
71020ba2dc  b.ne 0x71020ba2fc
71020ba2e0  ldr x9,[sp]
71020ba2e4  scvtf s0,x9
71020ba2e8  ldr w8,[sp, #0x8]
71020ba2ec  cmp w8,#0x13
71020ba2f0  fmov w10,s0
71020ba2f4  csel w8,w10,w9,eq
71020ba2f8  b 0x71020ba300
71020ba2fc  mov w8,wzr
71020ba300  str w8,[x20, #0x9c]
71020ba304  ldr x8,[x19, #0x10]
71020ba308  ldr x9,[x19, #0x20]
71020ba30c  sub x8,x8,#0x10
71020ba310  cmp w21,#0x1
71020ba314  str x8,[x19, #0x10]
71020ba318  b.lt 0x71020ba338
71020ba31c  ldr x9,[x9]
71020ba320  add x9,x9,w21, SXTW  #0x4
71020ba324  adrp x10,0x7104862000
71020ba328  add x10,x10,#0x960
71020ba32c  cmp x9,x8
71020ba330  csel x1,x9,x10,cc
71020ba334  b 0x71020ba394
71020ba338  add w10,w22,#0x1
71020ba33c  cmp w21,w10
71020ba340  b.ge 0x71020ba358
71020ba344  cmp w21,w22
71020ba348  b.ne 0x71020ba360
71020ba34c  ldr x8,[x19, #0x18]
71020ba350  add x1,x8,#0x40
71020ba354  b 0x71020ba394
71020ba358  add x1,x8,w21, SXTW  #0x4
71020ba35c  b 0x71020ba394
71020ba360  ldr x8,[x9]
71020ba364  ldr w9,[x8, #0x8]
71020ba368  adrp x1,0x7104862000
71020ba36c  add x1,x1,#0x960
71020ba370  cmp w9,#0x16
71020ba374  b.eq 0x71020ba394
71020ba378  ldr x8,[x8]
71020ba37c  sub w9,w22,w21
71020ba380  add x10,x8,w9, SXTW  #0x4
71020ba384  ldrb w8,[x8, #0xa]
71020ba388  add x10,x10,#0x10
71020ba38c  cmp w9,w8
71020ba390  csel x1,x1,x10,gt
71020ba394  adrp x2,0x710438d000
71020ba398  add x2,x2,#0xc94
71020ba39c  mov x0,x19
71020ba3a0  bl 0x71038f4d40
71020ba3a4  ldr x23,[x19, #0x10]
71020ba3a8  ldur w8,[x23, #-0x8]
71020ba3ac  cmp w8,#0x3
71020ba3b0  b.ne 0x71020ba3bc
71020ba3b4  ldur w8,[x23, #-0x10]
71020ba3b8  b 0x71020ba438
71020ba3bc  cmp w8,#0x13
71020ba3c0  b.ne 0x71020ba3d4
71020ba3c4  ldur x8,[x23, #-0x10]
71020ba3c8  scvtf s0,x8
71020ba3cc  fmov w8,s0
71020ba3d0  b 0x71020ba438
71020ba3d4  and w8,w8,#0xf
71020ba3d8  cmp w8,#0x4
71020ba3dc  b.ne 0x71020ba434
71020ba3e0  ldur x8,[x23, #-0x10]
71020ba3e4  add x0,x8,#0x18
71020ba3e8  mov x1,sp
71020ba3ec  bl 0x7103907f00
71020ba3f0  ldur x8,[x23, #-0x10]
71020ba3f4  ldrb w9,[x8, #0x8]
71020ba3f8  cmp w9,#0x4
71020ba3fc  b.ne 0x71020ba408
71020ba400  ldrb w8,[x8, #0xb]
71020ba404  b 0x71020ba40c
71020ba408  ldr x8,[x8, #0x10]
71020ba40c  add x8,x8,#0x1
71020ba410  cmp x0,x8
71020ba414  b.ne 0x71020ba434
71020ba418  ldr x9,[sp]
71020ba41c  scvtf s0,x9
71020ba420  ldr w8,[sp, #0x8]
71020ba424  cmp w8,#0x13
71020ba428  fmov w10,s0
71020ba42c  csel w8,w10,w9,eq
71020ba430  b 0x71020ba438
71020ba434  mov w8,wzr
71020ba438  str w8,[x20, #0xa0]
71020ba43c  ldr x8,[x19, #0x10]
71020ba440  ldr x9,[x19, #0x20]
71020ba444  sub x8,x8,#0x10
71020ba448  cmp w21,#0x1
71020ba44c  str x8,[x19, #0x10]
71020ba450  b.lt 0x71020ba470
71020ba454  ldr x9,[x9]
71020ba458  add x9,x9,w21, SXTW  #0x4
71020ba45c  adrp x10,0x7104862000
71020ba460  add x10,x10,#0x960
71020ba464  cmp x9,x8
71020ba468  csel x1,x9,x10,cc
71020ba46c  b 0x71020ba4cc
71020ba470  add w10,w22,#0x1
71020ba474  cmp w21,w10
71020ba478  b.ge 0x71020ba490
71020ba47c  cmp w21,w22
71020ba480  b.ne 0x71020ba498
71020ba484  ldr x8,[x19, #0x18]
71020ba488  add x1,x8,#0x40
71020ba48c  b 0x71020ba4cc
71020ba490  add x1,x8,w21, SXTW  #0x4
71020ba494  b 0x71020ba4cc
71020ba498  ldr x8,[x9]
71020ba49c  ldr w9,[x8, #0x8]
71020ba4a0  adrp x1,0x7104862000
71020ba4a4  add x1,x1,#0x960
71020ba4a8  cmp w9,#0x16
71020ba4ac  b.eq 0x71020ba4cc
71020ba4b0  ldr x8,[x8]
71020ba4b4  sub w9,w22,w21
71020ba4b8  add x10,x8,w9, SXTW  #0x4
71020ba4bc  ldrb w8,[x8, #0xa]
71020ba4c0  add x10,x10,#0x10
71020ba4c4  cmp w9,w8
71020ba4c8  csel x1,x1,x10,gt
71020ba4cc  adrp x2,0x7104292000
71020ba4d0  add x2,x2,#0xdb8
71020ba4d4  mov x0,x19
71020ba4d8  bl 0x71038f4d40
71020ba4dc  ldr x23,[x19, #0x10]
71020ba4e0  ldur w8,[x23, #-0x8]
71020ba4e4  cmp w8,#0x3
71020ba4e8  b.ne 0x71020ba4f4
71020ba4ec  ldur w8,[x23, #-0x10]
71020ba4f0  b 0x71020ba570
71020ba4f4  cmp w8,#0x13
71020ba4f8  b.ne 0x71020ba50c
71020ba4fc  ldur x8,[x23, #-0x10]
71020ba500  scvtf s0,x8
71020ba504  fmov w8,s0
71020ba508  b 0x71020ba570
71020ba50c  and w8,w8,#0xf
71020ba510  cmp w8,#0x4
71020ba514  b.ne 0x71020ba56c
71020ba518  ldur x8,[x23, #-0x10]
71020ba51c  add x0,x8,#0x18
71020ba520  mov x1,sp
71020ba524  bl 0x7103907f00
71020ba528  ldur x8,[x23, #-0x10]
71020ba52c  ldrb w9,[x8, #0x8]
71020ba530  cmp w9,#0x4
71020ba534  b.ne 0x71020ba540
71020ba538  ldrb w8,[x8, #0xb]
71020ba53c  b 0x71020ba544
71020ba540  ldr x8,[x8, #0x10]
71020ba544  add x8,x8,#0x1
71020ba548  cmp x0,x8
71020ba54c  b.ne 0x71020ba56c
71020ba550  ldr x9,[sp]
71020ba554  scvtf s0,x9
71020ba558  ldr w8,[sp, #0x8]
71020ba55c  cmp w8,#0x13
71020ba560  fmov w10,s0
71020ba564  csel w8,w10,w9,eq
71020ba568  b 0x71020ba570
71020ba56c  mov w8,wzr
71020ba570  str w8,[x20, #0xa4]
71020ba574  ldr x8,[x19, #0x10]
71020ba578  ldr x9,[x19, #0x20]
71020ba57c  sub x8,x8,#0x10
71020ba580  cmp w21,#0x1
71020ba584  str x8,[x19, #0x10]
71020ba588  b.lt 0x71020ba5a8
71020ba58c  ldr x9,[x9]
71020ba590  add x9,x9,w21, SXTW  #0x4
71020ba594  adrp x10,0x7104862000
71020ba598  add x10,x10,#0x960
71020ba59c  cmp x9,x8
71020ba5a0  csel x1,x9,x10,cc
71020ba5a4  b 0x71020ba604
71020ba5a8  add w10,w22,#0x1
71020ba5ac  cmp w21,w10
71020ba5b0  b.ge 0x71020ba5c8
71020ba5b4  cmp w21,w22
71020ba5b8  b.ne 0x71020ba5d0
71020ba5bc  ldr x8,[x19, #0x18]
71020ba5c0  add x1,x8,#0x40
71020ba5c4  b 0x71020ba604
71020ba5c8  add x1,x8,w21, SXTW  #0x4
71020ba5cc  b 0x71020ba604
71020ba5d0  ldr x8,[x9]
71020ba5d4  ldr w9,[x8, #0x8]
71020ba5d8  adrp x1,0x7104862000
71020ba5dc  add x1,x1,#0x960
71020ba5e0  cmp w9,#0x16
71020ba5e4  b.eq 0x71020ba604
71020ba5e8  ldr x8,[x8]
71020ba5ec  sub w9,w22,w21
71020ba5f0  add x10,x8,w9, SXTW  #0x4
71020ba5f4  ldrb w8,[x8, #0xa]
71020ba5f8  add x10,x10,#0x10
71020ba5fc  cmp w9,w8
71020ba600  csel x1,x1,x10,gt
71020ba604  adrp x2,0x71043d0000
71020ba608  add x2,x2,#0x4fb
71020ba60c  mov x0,x19
71020ba610  bl 0x71038f4d40
71020ba614  ldr x8,[x19, #0x10]
71020ba618  sub x23,x8,#0x10
71020ba61c  ldur w8,[x8, #-0x8]
71020ba620  cmp w8,#0x13
71020ba624  b.ne 0x71020ba630
71020ba628  ldr x8,[x23]
71020ba62c  b 0x71020ba690
71020ba630  ldr w8,[x23, #0x8]
71020ba634  cmp w8,#0x13
71020ba638  b.eq 0x71020ba628
71020ba63c  cmp w8,#0x3
71020ba640  b.eq 0x71020ba798
71020ba644  and w8,w8,#0xf
71020ba648  cmp w8,#0x4
71020ba64c  b.ne 0x71020ba68c
71020ba650  ldr x8,[x23]
71020ba654  add x0,x8,#0x18
71020ba658  mov x1,sp
71020ba65c  bl 0x7103907f00
71020ba660  ldr x8,[x23]
71020ba664  ldrb w9,[x8, #0x8]
71020ba668  cmp w9,#0x4
71020ba66c  b.ne 0x71020ba678
71020ba670  ldrb w8,[x8, #0xb]
71020ba674  b 0x71020ba67c
71020ba678  ldr x8,[x8, #0x10]
71020ba67c  add x8,x8,#0x1
71020ba680  mov x23,sp
71020ba684  cmp x0,x8
71020ba688  b.eq 0x71020ba630
71020ba68c  mov x8,xzr
71020ba690  str w8,[x20, #0xa8]
71020ba694  ldr x8,[x19, #0x10]
71020ba698  ldr x9,[x19, #0x20]
71020ba69c  sub x8,x8,#0x10
71020ba6a0  cmp w21,#0x1
71020ba6a4  str x8,[x19, #0x10]
71020ba6a8  b.lt 0x71020ba6c8
71020ba6ac  ldr x9,[x9]
71020ba6b0  add x9,x9,w21, SXTW  #0x4
71020ba6b4  adrp x10,0x7104862000
71020ba6b8  add x10,x10,#0x960
71020ba6bc  cmp x9,x8
71020ba6c0  csel x1,x9,x10,cc
71020ba6c4  b 0x71020ba724
71020ba6c8  add w10,w22,#0x1
71020ba6cc  cmp w21,w10
71020ba6d0  b.ge 0x71020ba6e8
71020ba6d4  cmp w21,w22
71020ba6d8  b.ne 0x71020ba6f0
71020ba6dc  ldr x8,[x19, #0x18]
71020ba6e0  add x1,x8,#0x40
71020ba6e4  b 0x71020ba724
71020ba6e8  add x1,x8,w21, SXTW  #0x4
71020ba6ec  b 0x71020ba724
71020ba6f0  ldr x8,[x9]
71020ba6f4  ldr w9,[x8, #0x8]
71020ba6f8  adrp x1,0x7104862000
71020ba6fc  add x1,x1,#0x960
71020ba700  cmp w9,#0x16
71020ba704  b.eq 0x71020ba724
71020ba708  ldr x8,[x8]
71020ba70c  sub w9,w22,w21
71020ba710  add x10,x8,w9, SXTW  #0x4
71020ba714  ldrb w8,[x8, #0xa]
71020ba718  add x10,x10,#0x10
71020ba71c  cmp w9,w8
71020ba720  csel x1,x1,x10,gt
71020ba724  adrp x2,0x710433b000
71020ba728  add x2,x2,#0x3ac
71020ba72c  mov x0,x19
71020ba730  bl 0x71038f4d40
71020ba734  ldr x23,[x19, #0x10]
71020ba738  ldur w8,[x23, #-0x8]
71020ba73c  cmp w8,#0x3
71020ba740  b.ne 0x71020ba74c
71020ba744  ldur w8,[x23, #-0x10]
71020ba748  b 0x71020ba7f8
71020ba74c  cmp w8,#0x13
71020ba750  b.ne 0x71020ba764
71020ba754  ldur x8,[x23, #-0x10]
71020ba758  scvtf s0,x8
71020ba75c  fmov w8,s0
71020ba760  b 0x71020ba7f8
71020ba764  and w8,w8,#0xf
71020ba768  cmp w8,#0x4
71020ba76c  b.ne 0x71020ba7f4
71020ba770  ldur x8,[x23, #-0x10]
71020ba774  add x0,x8,#0x18
71020ba778  mov x1,sp
71020ba77c  bl 0x7103907f00
71020ba780  ldur x8,[x23, #-0x10]
71020ba784  ldrb w9,[x8, #0x8]
71020ba788  cmp w9,#0x4
71020ba78c  b.ne 0x71020ba7c8
71020ba790  ldrb w8,[x8, #0xb]
71020ba794  b 0x71020ba7cc
71020ba798  ldr s0,[x23]
71020ba79c  adrp x8,0x7104472000
71020ba7a0  ldr s1,[x8, #0x8f4]
71020ba7a4  frintm s0,s0
71020ba7a8  fcmp s0,s1
71020ba7ac  b.lt 0x71020ba68c
71020ba7b0  adrp x8,0x7104472000
71020ba7b4  ldr s1,[x8, #0xe68]
71020ba7b8  fcmp s0,s1
71020ba7bc  b.pl 0x71020ba68c
71020ba7c0  fcvtzs x8,s0
71020ba7c4  b 0x71020ba690
71020ba7c8  ldr x8,[x8, #0x10]
71020ba7cc  add x8,x8,#0x1
71020ba7d0  cmp x0,x8
71020ba7d4  b.ne 0x71020ba7f4
71020ba7d8  ldr x9,[sp]
71020ba7dc  scvtf s0,x9
71020ba7e0  ldr w8,[sp, #0x8]
71020ba7e4  cmp w8,#0x13
71020ba7e8  fmov w10,s0
71020ba7ec  csel w8,w10,w9,eq
71020ba7f0  b 0x71020ba7f8
71020ba7f4  mov w8,wzr
71020ba7f8  str w8,[x20, #0xac]
71020ba7fc  ldr x8,[x19, #0x10]
71020ba800  ldr x9,[x19, #0x20]
71020ba804  sub x8,x8,#0x10
71020ba808  cmp w21,#0x1
71020ba80c  str x8,[x19, #0x10]
71020ba810  b.lt 0x71020ba830
71020ba814  ldr x9,[x9]
71020ba818  add x9,x9,w21, SXTW  #0x4
71020ba81c  adrp x10,0x7104862000
71020ba820  add x10,x10,#0x960
71020ba824  cmp x9,x8
71020ba828  csel x1,x9,x10,cc
71020ba82c  b 0x71020ba88c
71020ba830  add w10,w22,#0x1
71020ba834  cmp w21,w10
71020ba838  b.ge 0x71020ba850
71020ba83c  cmp w21,w22
71020ba840  b.ne 0x71020ba858
71020ba844  ldr x8,[x19, #0x18]
71020ba848  add x1,x8,#0x40
71020ba84c  b 0x71020ba88c
71020ba850  add x1,x8,w21, SXTW  #0x4
71020ba854  b 0x71020ba88c
71020ba858  ldr x8,[x9]
71020ba85c  ldr w9,[x8, #0x8]
71020ba860  adrp x1,0x7104862000
71020ba864  add x1,x1,#0x960
71020ba868  cmp w9,#0x16
71020ba86c  b.eq 0x71020ba88c
71020ba870  ldr x8,[x8]
71020ba874  sub w9,w22,w21
71020ba878  add x10,x8,w9, SXTW  #0x4
71020ba87c  ldrb w8,[x8, #0xa]
71020ba880  add x10,x10,#0x10
71020ba884  cmp w9,w8
71020ba888  csel x1,x1,x10,gt
71020ba88c  adrp x2,0x710435c000
71020ba890  add x2,x2,#0x8cf
71020ba894  mov x0,x19
71020ba898  bl 0x71038f4d40
71020ba89c  ldr x23,[x19, #0x10]
71020ba8a0  ldur w8,[x23, #-0x8]
71020ba8a4  cmp w8,#0x3
71020ba8a8  b.ne 0x71020ba8b4
71020ba8ac  ldur w8,[x23, #-0x10]
71020ba8b0  b 0x71020ba930
71020ba8b4  cmp w8,#0x13
71020ba8b8  b.ne 0x71020ba8cc
71020ba8bc  ldur x8,[x23, #-0x10]
71020ba8c0  scvtf s0,x8
71020ba8c4  fmov w8,s0
71020ba8c8  b 0x71020ba930
71020ba8cc  and w8,w8,#0xf
71020ba8d0  cmp w8,#0x4
71020ba8d4  b.ne 0x71020ba92c
71020ba8d8  ldur x8,[x23, #-0x10]
71020ba8dc  add x0,x8,#0x18
71020ba8e0  mov x1,sp
71020ba8e4  bl 0x7103907f00
71020ba8e8  ldur x8,[x23, #-0x10]
71020ba8ec  ldrb w9,[x8, #0x8]
71020ba8f0  cmp w9,#0x4
71020ba8f4  b.ne 0x71020ba900
71020ba8f8  ldrb w8,[x8, #0xb]
71020ba8fc  b 0x71020ba904
71020ba900  ldr x8,[x8, #0x10]
71020ba904  add x8,x8,#0x1
71020ba908  cmp x0,x8
71020ba90c  b.ne 0x71020ba92c
71020ba910  ldr x9,[sp]
71020ba914  scvtf s0,x9
71020ba918  ldr w8,[sp, #0x8]
71020ba91c  cmp w8,#0x13
71020ba920  fmov w10,s0
71020ba924  csel w8,w10,w9,eq
71020ba928  b 0x71020ba930
71020ba92c  mov w8,wzr
71020ba930  str w8,[x20, #0xb0]
71020ba934  ldr x8,[x19, #0x10]
71020ba938  ldr x9,[x19, #0x20]
71020ba93c  sub x8,x8,#0x10
71020ba940  cmp w21,#0x1
71020ba944  str x8,[x19, #0x10]
71020ba948  b.lt 0x71020ba968
71020ba94c  ldr x9,[x9]
71020ba950  add x9,x9,w21, SXTW  #0x4
71020ba954  adrp x10,0x7104862000
71020ba958  add x10,x10,#0x960
71020ba95c  cmp x9,x8
71020ba960  csel x1,x9,x10,cc
71020ba964  b 0x71020ba9c4
71020ba968  add w10,w22,#0x1
71020ba96c  cmp w21,w10
71020ba970  b.ge 0x71020ba988
71020ba974  cmp w21,w22
71020ba978  b.ne 0x71020ba990
71020ba97c  ldr x8,[x19, #0x18]
71020ba980  add x1,x8,#0x40
71020ba984  b 0x71020ba9c4
71020ba988  add x1,x8,w21, SXTW  #0x4
71020ba98c  b 0x71020ba9c4
71020ba990  ldr x8,[x9]
71020ba994  ldr w9,[x8, #0x8]
71020ba998  adrp x1,0x7104862000
71020ba99c  add x1,x1,#0x960
71020ba9a0  cmp w9,#0x16
71020ba9a4  b.eq 0x71020ba9c4
71020ba9a8  ldr x8,[x8]
71020ba9ac  sub w9,w22,w21
71020ba9b0  add x10,x8,w9, SXTW  #0x4
71020ba9b4  ldrb w8,[x8, #0xa]
71020ba9b8  add x10,x10,#0x10
71020ba9bc  cmp w9,w8
71020ba9c0  csel x1,x1,x10,gt
71020ba9c4  adrp x2,0x7104455000
71020ba9c8  add x2,x2,#0xcc8
71020ba9cc  mov x0,x19
71020ba9d0  bl 0x71038f4d40
71020ba9d4  ldr x8,[x19, #0x10]
71020ba9d8  sub x21,x8,#0x10
71020ba9dc  ldur w8,[x8, #-0x8]
71020ba9e0  cmp w8,#0x13
71020ba9e4  b.ne 0x71020ba9f0
71020ba9e8  ldr x8,[x21]
71020ba9ec  b 0x71020baa50
71020ba9f0  ldr w8,[x21, #0x8]
71020ba9f4  cmp w8,#0x13
71020ba9f8  b.eq 0x71020ba9e8
71020ba9fc  cmp w8,#0x3
71020baa00  b.eq 0x71020baa78
71020baa04  and w8,w8,#0xf
71020baa08  cmp w8,#0x4
71020baa0c  b.ne 0x71020baa4c
71020baa10  ldr x8,[x21]
71020baa14  add x0,x8,#0x18
71020baa18  mov x1,sp
71020baa1c  bl 0x7103907f00
71020baa20  ldr x8,[x21]
71020baa24  ldrb w9,[x8, #0x8]
71020baa28  cmp w9,#0x4
71020baa2c  b.ne 0x71020baa38
71020baa30  ldrb w8,[x8, #0xb]
71020baa34  b 0x71020baa3c
71020baa38  ldr x8,[x8, #0x10]
71020baa3c  add x8,x8,#0x1
71020baa40  mov x21,sp
71020baa44  cmp x0,x8
71020baa48  b.eq 0x71020ba9f0
71020baa4c  mov x8,xzr
71020baa50  str w8,[x20, #0xb4]
71020baa54  ldr x8,[x19, #0x10]
71020baa58  sub x8,x8,#0x10
71020baa5c  str x8,[x19, #0x10]
71020baa60  ldp x29,x30,[sp, #0x40]
71020baa64  ldp x20,x19,[sp, #0x30]
71020baa68  ldr x23,[sp, #0x10]
71020baa6c  ldp x22,x21,[sp, #0x20]
71020baa70  add sp,sp,#0x50
71020baa74  ret
71020baa78  ldr s0,[x21]
71020baa7c  adrp x8,0x7104472000
71020baa80  ldr s1,[x8, #0x8f4]
71020baa84  frintm s0,s0
71020baa88  fcmp s0,s1
71020baa8c  b.lt 0x71020baa4c
71020baa90  adrp x8,0x7104472000
71020baa94  ldr s1,[x8, #0xe68]
71020baa98  fcmp s0,s1
71020baa9c  b.pl 0x71020baa4c
71020baaa0  fcvtzs x8,s0
71020baaa4  b 0x71020baa50
