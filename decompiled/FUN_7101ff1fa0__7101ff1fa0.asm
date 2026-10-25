// addr:      7101ff1fa0
// offset:    0x1ff1fa0
// name:      FUN_7101ff1fa0
// mangled:   
// size:      436

7101ff1fa0  stp x24,x23,[sp, #-0x40]!
7101ff1fa4  stp x22,x21,[sp, #0x10]
7101ff1fa8  stp x20,x19,[sp, #0x20]
7101ff1fac  stp x29,x30,[sp, #0x30]
7101ff1fb0  add x29,sp,#0x30
7101ff1fb4  ldur x8,[x0, #-0x8]
7101ff1fb8  cbz x8,0x7101ff213c
7101ff1fbc  ldr x20,[x8, #0x48]
7101ff1fc0  cbz x20,0x7101ff213c
7101ff1fc4  ldr x9,[x0, #0x20]
7101ff1fc8  ldr x9,[x9]
7101ff1fcc  ldr x8,[x0, #0x10]
7101ff1fd0  adrp x23,0x7104862000
7101ff1fd4  add x23,x23,#0x960
7101ff1fd8  adrp x2,0x710430c000
7101ff1fdc  add x2,x2,#0x66a
7101ff1fe0  add x9,x9,#0x10
7101ff1fe4  cmp x9,x8
7101ff1fe8  sub x22,x8,x9
7101ff1fec  csel x1,x9,x23,cc
7101ff1ff0  mov x19,x0
7101ff1ff4  lsr x24,x22,#0x4
7101ff1ff8  bl 0x71038f4d40
7101ff1ffc  ldr x9,[x19, #0x10]
7101ff2000  sub x8,x9,#0x10
7101ff2004  ldur w9,[x9, #-0x8]
7101ff2008  and w9,w9,#0xf
7101ff200c  cmp w9,#0x2
7101ff2010  b.eq 0x7101ff2028
7101ff2014  cmp w9,#0x7
7101ff2018  b.ne 0x7101ff2030
7101ff201c  ldr x9,[x8]
7101ff2020  add x9,x9,#0x28
7101ff2024  b 0x7101ff2034
7101ff2028  ldr x9,[x8]
7101ff202c  b 0x7101ff2034
7101ff2030  mov x9,xzr
7101ff2034  str x8,[x19, #0x10]
7101ff2038  blr x9
7101ff203c  mov w2,#0x1
7101ff2040  mov x1,x19
7101ff2044  mov x21,x0
7101ff2048  bl 0x7101ff2160
7101ff204c  cmp w24,#0x2
7101ff2050  b.lt 0x7101ff20ac
7101ff2054  mov w1,#0x2
7101ff2058  mov x0,x19
7101ff205c  mov x2,xzr
7101ff2060  bl 0x71038f45b0
7101ff2064  mov x2,x0
7101ff2068  cmp w24,#0x2
7101ff206c  b.eq 0x7101ff210c
7101ff2070  ldr x8,[x19, #0x20]
7101ff2074  ldr x8,[x8]
7101ff2078  ldr x9,[x19, #0x10]
7101ff207c  add x8,x8,#0x30
7101ff2080  cmp x8,x9
7101ff2084  csel x8,x8,x23,cc
7101ff2088  ldr w9,[x8, #0x8]
7101ff208c  and w9,w9,#0xf
7101ff2090  cmp w9,#0x2
7101ff2094  b.eq 0x7101ff20fc
7101ff2098  cmp w9,#0x7
7101ff209c  b.ne 0x7101ff2104
7101ff20a0  ldr x8,[x8]
7101ff20a4  add x8,x8,#0x28
7101ff20a8  b 0x7101ff2108
7101ff20ac  tbnz w24,#0x1f,0x7101ff20b8
7101ff20b0  mov w2,wzr
7101ff20b4  b 0x7101ff210c
7101ff20b8  ldr x8,[x19, #0x20]
7101ff20bc  ldr x8,[x8]
7101ff20c0  lsl x10,x22,#0x1c
7101ff20c4  ldr x9,[x19, #0x10]
7101ff20c8  eor x10,x10,#-0x100000000
7101ff20cc  add x8,x8,x10, ASR #0x1c
7101ff20d0  add x8,x8,#0x10
7101ff20d4  cmp x9,x8
7101ff20d8  b.cs 0x7101ff20f4
7101ff20dc  add x10,x9,#0x10
7101ff20e0  str x10,[x19, #0x10]
7101ff20e4  str wzr,[x9, #0x8]
7101ff20e8  ldr x9,[x19, #0x10]
7101ff20ec  cmp x9,x8
7101ff20f0  b.cc 0x7101ff20dc
7101ff20f4  mov w2,wzr
7101ff20f8  b 0x7101ff2118
7101ff20fc  ldr x8,[x8]
7101ff2100  b 0x7101ff2108
7101ff2104  mov x8,xzr
7101ff2108  ldr x20,[x8, #0x60]
7101ff210c  ldr x8,[x19, #0x10]
7101ff2110  neg x9,x22, LSL #0x1c
7101ff2114  add x8,x8,x9, ASR #0x1c
7101ff2118  str x8,[x19, #0x10]
7101ff211c  ldr x8,[x20]
7101ff2120  ldr x8,[x8, #0xd0]
7101ff2124  mov x0,x20
7101ff2128  mov x1,x21
7101ff212c  blr x8
7101ff2130  cbz x21,0x7101ff213c
7101ff2134  mov x0,x21
7101ff2138  bl 0x710392eb40
7101ff213c  ldp x29,x30,[sp, #0x30]
7101ff2140  mov w0,wzr
7101ff2144  ldp x20,x19,[sp, #0x20]
7101ff2148  ldp x22,x21,[sp, #0x10]
7101ff214c  ldp x24,x23,[sp], #0x40
7101ff2150  ret
