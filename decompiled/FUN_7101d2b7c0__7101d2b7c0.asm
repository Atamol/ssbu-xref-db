// addr:      7101d2b7c0
// offset:    0x1d2b7c0
// name:      FUN_7101d2b7c0
// mangled:   
// size:      268

7101d2b7c0  sub sp,sp,#0xa0
7101d2b7c4  str d8,[sp, #0x60]
7101d2b7c8  stp x22,x21,[sp, #0x70]
7101d2b7cc  stp x20,x19,[sp, #0x80]
7101d2b7d0  stp x29,x30,[sp, #0x90]
7101d2b7d4  add x29,sp,#0x90
7101d2b7d8  mov w20,w1
7101d2b7dc  mov w21,w2
7101d2b7e0  mov x19,x0
7101d2b7e4  add x8,sp,#0x18
7101d2b7e8  adrp x1,0x71042c5000
7101d2b7ec  add x1,x1,#0x15
7101d2b7f0  add x0,sp,#0x18
7101d2b7f4  strb wzr,[sp, #0x20]
7101d2b7f8  str xzr,[sp, #0x18]
7101d2b7fc  mov w2,w20
7101d2b800  add x22,x8,#0x8
7101d2b804  bl 0x710062dc20
7101d2b808  ldr x8,[x19, #0x130]
7101d2b80c  ldr x8,[x8]
7101d2b810  add x0,x8,#0x8
7101d2b814  add x8,sp,#0x8
7101d2b818  mov x1,x22
7101d2b81c  bl 0x7103776640
7101d2b820  mov x0,x19
7101d2b824  mov w1,w20
7101d2b828  mov w2,wzr
7101d2b82c  bl 0x7101d2aaf0
7101d2b830  tbz w21,#0x0,0x7101d2b854
7101d2b834  orr w8,wzr,#0x30
7101d2b838  ldr x1,[x19, #0x128]
7101d2b83c  ldr x0,[x19, #0x560]
7101d2b840  smaddl x8,w20,w8,x19
7101d2b844  add x2,x8,#0x190
7101d2b848  add x3,sp,#0x8
7101d2b84c  bl 0x7103385ee0
7101d2b850  b 0x7101d2b880
7101d2b854  fmov s8,0x3f800000
7101d2b858  ldr x0,[sp, #0x10]
7101d2b85c  adrp x1,0x7104281000
7101d2b860  add x1,x1,#0x165
7101d2b864  mov v0.16B,v8.16B
7101d2b868  bl 0x7103778300
7101d2b86c  ldr x0,[sp, #0x10]
7101d2b870  mov v0.16B,v8.16B
7101d2b874  adrp x1,0x7104306000
7101d2b878  add x1,x1,#0xde4
7101d2b87c  bl 0x7103778300
7101d2b880  ldr x19,[sp, #0x10]
7101d2b884  adrp x8,0x710523d000
7101d2b888  add x8,x8,#0x988
7101d2b88c  stp x8,xzr,[sp, #0x8]
7101d2b890  cbz x19,0x7101d2b8b4
7101d2b894  ldr x0,[x19, #0x18]
7101d2b898  adrp x8,0x710523d000
7101d2b89c  add x8,x8,#0x9a8
7101d2b8a0  stp x8,xzr,[x19, #0x10]
7101d2b8a4  cbz x0,0x7101d2b8ac
7101d2b8a8  bl 0x710392eb40
7101d2b8ac  mov x0,x19
7101d2b8b0  bl 0x710392eb40
7101d2b8b4  ldr d8,[sp, #0x60]
7101d2b8b8  ldp x29,x30,[sp, #0x90]
7101d2b8bc  ldp x20,x19,[sp, #0x80]
7101d2b8c0  ldp x22,x21,[sp, #0x70]
7101d2b8c4  add sp,sp,#0xa0
7101d2b8c8  ret
