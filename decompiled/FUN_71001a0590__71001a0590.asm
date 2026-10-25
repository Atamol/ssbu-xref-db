// addr:      71001a0590
// offset:    0x1a0590
// name:      FUN_71001a0590
// mangled:   
// size:      208

71001a0590  sub sp,sp,#0x30
71001a0594  stp x20,x19,[sp, #0x10]
71001a0598  stp x29,x30,[sp, #0x20]
71001a059c  add x29,sp,#0x20
71001a05a0  ldr x8,[x0, #0x78]
71001a05a4  ldr w9,[x8]
71001a05a8  cmp w9,#0x1
71001a05ac  b.ne 0x71001a05c4
71001a05b0  mov w0,#0x5
71001a05b4  ldp x29,x30,[sp, #0x20]
71001a05b8  ldp x20,x19,[sp, #0x10]
71001a05bc  add sp,sp,#0x30
71001a05c0  ret
71001a05c4  sub w9,w9,#0x2
71001a05c8  mov x19,x0
71001a05cc  cmp w9,#0x2
71001a05d0  b.hi 0x71001a05fc
71001a05d4  add x1,x8,#0x4
71001a05d8  mov x0,sp
71001a05dc  bl 0x71000bce50
71001a05e0  ldr w8,[sp]
71001a05e4  cbz w8,0x71001a05fc
71001a05e8  mov w0,#0x1
71001a05ec  ldp x29,x30,[sp, #0x20]
71001a05f0  ldp x20,x19,[sp, #0x10]
71001a05f4  add sp,sp,#0x30
71001a05f8  ret
71001a05fc  ldr x8,[x19, #0x70]
71001a0600  ldr x8,[x8, #0xa0]
71001a0604  ldr x8,[x8, #0x58]
71001a0608  ldr x9,[x19, #0x58]
71001a060c  sub x20,x8,x9
71001a0610  bl 0x71000bb680
71001a0614  ldr x8,[x0]
71001a0618  sdiv x8,x20,x8
71001a061c  cmp x8,#0x1
71001a0620  b.lt 0x71001a0634
71001a0624  ldr x8,[x19, #0x70]
71001a0628  ldr x8,[x8, #0xa0]
71001a062c  ldr x8,[x8, #0x58]
71001a0630  str x8,[x19, #0x58]
71001a0634  adrp x8,0x71052a6000
71001a0638  ldr x8,[x8, #0x728]
71001a063c  mov x0,xzr
71001a0640  stp x8,xzr,[x19, #0x30]
71001a0644  adrp x8,0x71042d5000
71001a0648  add x8,x8,#0x759
71001a064c  str x8,[x19, #0x40]
71001a0650  ldp x29,x30,[sp, #0x20]
71001a0654  ldp x20,x19,[sp, #0x10]
71001a0658  add sp,sp,#0x30
71001a065c  ret
