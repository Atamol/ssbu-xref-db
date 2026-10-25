// addr:      7101c7a7e0
// offset:    0x1c7a7e0
// name:      FUN_7101c7a7e0
// mangled:   
// size:      316

7101c7a7e0  sub sp,sp,#0x40
7101c7a7e4  stp x20,x19,[sp, #0x20]
7101c7a7e8  stp x29,x30,[sp, #0x30]
7101c7a7ec  add x29,sp,#0x30
7101c7a7f0  ldr w8,[x0, #0xec]
7101c7a7f4  mov x19,x0
7101c7a7f8  cbnz w8,0x7101c7a824
7101c7a7fc  ldr x0,[x19, #0x118]
7101c7a800  ldr x8,[x0]
7101c7a804  ldr x8,[x8, #0x70]
7101c7a808  mov w1,wzr
7101c7a80c  blr x8
7101c7a810  ldr x0,[x19, #0x120]
7101c7a814  ldr x8,[x0]
7101c7a818  ldr x8,[x8, #0x70]
7101c7a81c  mov w1,wzr
7101c7a820  blr x8
7101c7a824  add x0,x19,#0x108
7101c7a828  adrp x1,0x7104401000
7101c7a82c  add x1,x1,#0x66c
7101c7a830  add x8,sp,#0x10
7101c7a834  bl 0x7103776640
7101c7a838  adrp x1,0x710438c000
7101c7a83c  add x1,x1,#0xb0e
7101c7a840  mov x8,sp
7101c7a844  add x0,sp,#0x10
7101c7a848  bl 0x7103776910
7101c7a84c  ldr x0,[sp, #0x8]
7101c7a850  ldr x8,[x0, #0x10]
7101c7a854  cbz x8,0x7101c7a868
7101c7a858  ldrb w9,[x8, #0x27c]
7101c7a85c  cbz w9,0x7101c7a868
7101c7a860  ldrb w9,[x8, #0x27d]
7101c7a864  cbz w9,0x7101c7a8e4
7101c7a868  adrp x8,0x710523d000
7101c7a86c  add x8,x8,#0x9a8
7101c7a870  stp x8,xzr,[sp]
7101c7a874  cbz x0,0x7101c7a87c
7101c7a878  bl 0x710392eb40
7101c7a87c  ldr x20,[sp, #0x18]
7101c7a880  fmov s0,0x3f800000
7101c7a884  adrp x1,0x7104421000
7101c7a888  add x1,x1,#0x55
7101c7a88c  mov x0,x20
7101c7a890  bl 0x7103778300
7101c7a894  ldr w8,[x19, #0xe4]
7101c7a898  subs w8,w8,#0x1
7101c7a89c  b.lt 0x7101c7a8a4
7101c7a8a0  str w8,[x19, #0xe4]
7101c7a8a4  adrp x8,0x710523d000
7101c7a8a8  add x8,x8,#0x988
7101c7a8ac  stp x8,xzr,[sp, #0x10]
7101c7a8b0  cbz x20,0x7101c7a8d4
7101c7a8b4  ldr x0,[x20, #0x18]
7101c7a8b8  adrp x8,0x710523d000
7101c7a8bc  add x8,x8,#0x9a8
7101c7a8c0  stp x8,xzr,[x20, #0x10]
7101c7a8c4  cbz x0,0x7101c7a8cc
7101c7a8c8  bl 0x710392eb40
7101c7a8cc  mov x0,x20
7101c7a8d0  bl 0x710392eb40
7101c7a8d4  ldp x29,x30,[sp, #0x30]
7101c7a8d8  ldp x20,x19,[sp, #0x20]
7101c7a8dc  add sp,sp,#0x40
7101c7a8e0  ret
7101c7a8e4  ldrb w9,[x8, #0x27e]
7101c7a8e8  cbnz w9,0x7101c7a8f4
7101c7a8ec  ldrb w8,[x8, #0x280]
7101c7a8f0  cbz w8,0x7101c7a868
7101c7a8f4  ldr w20,[x19, #0xec]
7101c7a8f8  adrp x8,0x710523d000
7101c7a8fc  add x8,x8,#0x9a8
7101c7a900  stp x8,xzr,[sp]
7101c7a904  cbz x0,0x7101c7a90c
7101c7a908  bl 0x710392eb40
7101c7a90c  cmp w20,#0xa
7101c7a910  b.gt 0x7101c7a87c
7101c7a914  ldr x20,[sp, #0x18]
7101c7a918  b 0x7101c7a8a4
