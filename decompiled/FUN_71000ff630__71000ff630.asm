// addr:      71000ff630
// offset:    0xff630
// name:      FUN_71000ff630
// mangled:   
// size:      528

71000ff630  sub sp,sp,#0xc0
71000ff634  str x21,[sp, #0x90]
71000ff638  stp x20,x19,[sp, #0xa0]
71000ff63c  stp x29,x30,[sp, #0xb0]
71000ff640  add x29,sp,#0xb0
71000ff644  adrp x21,0x71052a5000
71000ff648  ldr x21,[x21, #0x80]
71000ff64c  mov x19,x0
71000ff650  ldr x0,[x21]
71000ff654  bl 0x7100146ba0
71000ff658  cmp w0,#0x7
71000ff65c  b.eq 0x71000ff680
71000ff660  cmp w0,#0x6
71000ff664  b.eq 0x71000ff690
71000ff668  cmp w0,#0x5
71000ff66c  b.ne 0x71000ff6a0
71000ff670  mov w8,#0x1
71000ff674  orr w9,wzr,#0x3
71000ff678  mov w10,#0xc406
71000ff67c  b 0x71000ff6b4
71000ff680  mov w8,#0x1
71000ff684  orr w9,wzr,#0x3
71000ff688  mov w10,#0xc420
71000ff68c  b 0x71000ff6b4
71000ff690  mov w8,#0x1
71000ff694  orr w9,wzr,#0x3
71000ff698  mov w10,#0xa471
71000ff69c  b 0x71000ff6b4
71000ff6a0  cmp w0,#0x8
71000ff6a4  b.ne 0x71000ff734
71000ff6a8  mov w8,#0x1
71000ff6ac  orr w9,wzr,#0x3
71000ff6b0  mov w10,#0xc421
71000ff6b4  strb w8,[x19, #0xfa]
71000ff6b8  add x8,sp,#0x10
71000ff6bc  orr x20,x8,#0x4
71000ff6c0  mov x0,x20
71000ff6c4  strb w9,[x19, #0x130]
71000ff6c8  str w10,[sp, #0x10]
71000ff6cc  bl 0x71039c0a80
71000ff6d0  mov x1,sp
71000ff6d4  mov x0,x20
71000ff6d8  str wzr,[sp]
71000ff6dc  bl 0x71039c0a90
71000ff6e0  add x0,x19,#0x220
71000ff6e4  add x1,sp,#0x10
71000ff6e8  bl 0x71000bcf30
71000ff6ec  ldr x8,[x21]
71000ff6f0  ldr x0,[x8, #0x8]
71000ff6f4  ldr x8,[x0]
71000ff6f8  ldr x8,[x8, #0x28]
71000ff6fc  blr x8
71000ff700  adrp x8,0x71052a5000
71000ff704  ldr x8,[x8, #0x240]
71000ff708  mov x20,xzr
71000ff70c  stp x8,xzr,[x19, #0x30]
71000ff710  adrp x8,0x71043ac000
71000ff714  add x8,x8,#0x982
71000ff718  str x8,[x19, #0x40]
71000ff71c  mov x0,x20
71000ff720  ldp x29,x30,[sp, #0xb0]
71000ff724  ldp x20,x19,[sp, #0xa0]
71000ff728  ldr x21,[sp, #0x90]
71000ff72c  add sp,sp,#0xc0
71000ff730  ret
71000ff734  ldrb w8,[x19, #0xfb]
71000ff738  cbz w8,0x71000ff770
71000ff73c  add x1,x19,#0x100
71000ff740  add x0,x19,#0x220
71000ff744  bl 0x71000bcf30
71000ff748  adrp x8,0x71052a5000
71000ff74c  ldr x8,[x8, #0x238]
71000ff750  orr w9,wzr,#0x6
71000ff754  strb w9,[x19, #0x130]
71000ff758  adrp x9,0x7104290000
71000ff75c  add x9,x9,#0xd05
71000ff760  stp x8,xzr,[x19, #0x30]
71000ff764  str x9,[x19, #0x40]
71000ff768  mov w20,#0x5
71000ff76c  b 0x71000ff71c
71000ff770  mov x0,x19
71000ff774  bl 0x7100140e30
71000ff778  ldr x8,[x21]
71000ff77c  ldrb w9,[x8, #0x162]
71000ff780  cmp x9,#0x0
71000ff784  cset w10,eq
71000ff788  tst w0,#0x1
71000ff78c  add x0,sp,#0x10
71000ff790  csel x9,x10,x9,ne
71000ff794  add x8,x8,x9, LSL #0x3
71000ff798  ldr x20,[x8, #0x168]
71000ff79c  bl 0x710015fd60
71000ff7a0  add x0,x19,#0x138
71000ff7a4  add x1,sp,#0x10
71000ff7a8  bl 0x710015fea0
71000ff7ac  ldr x8,[x20]
71000ff7b0  ldr w2,[x19, #0xf0]
71000ff7b4  add x1,x19,#0x60
71000ff7b8  ldr x9,[x8, #0xa0]
71000ff7bc  mov x8,sp
71000ff7c0  mov x0,x20
71000ff7c4  blr x9
71000ff7c8  ldr w8,[sp]
71000ff7cc  cbz w8,0x71000ff818
71000ff7d0  mov w8,#0x1d
71000ff7d4  add x0,x19,#0x220
71000ff7d8  mov x1,sp
71000ff7dc  strb w8,[x19, #0x130]
71000ff7e0  bl 0x71000bcf30
71000ff7e4  ldr x8,[x21]
71000ff7e8  ldrb w9,[x8, #0x162]
71000ff7ec  cmp w9,#0x0
71000ff7f0  cset w9,eq
71000ff7f4  add x8,x8,w9, UXTW  #0x3
71000ff7f8  ldr x0,[x8, #0x168]
71000ff7fc  bl 0x71000d8f90
71000ff800  adrp x8,0x71052a5000
71000ff804  ldr x8,[x8, #0x238]
71000ff808  mov w20,#0x5
71000ff80c  adrp x9,0x7104290000
71000ff810  add x9,x9,#0xd05
71000ff814  b 0x71000ff82c
71000ff818  adrp x8,0x71052a5000
71000ff81c  ldr x8,[x8, #0x3a8]
71000ff820  mov x20,xzr
71000ff824  adrp x9,0x710427f000
71000ff828  add x9,x9,#0xcde
71000ff82c  add x0,sp,#0x10
71000ff830  stp x8,xzr,[x19, #0x30]
71000ff834  str x9,[x19, #0x40]
71000ff838  bl 0x710015ff20
71000ff83c  b 0x71000ff71c
