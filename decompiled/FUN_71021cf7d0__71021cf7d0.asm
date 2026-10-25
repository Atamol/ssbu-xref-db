// addr:      71021cf7d0
// offset:    0x21cf7d0
// name:      FUN_71021cf7d0
// mangled:   
// size:      304

71021cf7d0  sub sp,sp,#0x50
71021cf7d4  stp x20,x19,[sp, #0x30]
71021cf7d8  stp x29,x30,[sp, #0x40]
71021cf7dc  add x29,sp,#0x40
71021cf7e0  ldr x8,[x0, #0x18]
71021cf7e4  ldr x8,[x8, #0x18]
71021cf7e8  mov x19,x0
71021cf7ec  cmp x8,#0x1
71021cf7f0  b.lt 0x71021cf7fc
71021cf7f4  mov x0,x19
71021cf7f8  bl 0x71038fec40
71021cf7fc  mov x0,x19
71021cf800  bl 0x710391e050
71021cf804  ldr x8,[x19, #0x10]
71021cf808  mov w9,#0x45
71021cf80c  str w9,[x8, #0x8]
71021cf810  str x0,[x8]
71021cf814  ldr x8,[x19, #0x10]
71021cf818  mov x1,x0
71021cf81c  mov w3,#0x2
71021cf820  mov x0,x19
71021cf824  mov w2,wzr
71021cf828  mov w20,#0x2
71021cf82c  add x8,x8,#0x10
71021cf830  str x8,[x19, #0x10]
71021cf834  bl 0x710391d4c0
71021cf838  mov w8,#0xa
71021cf83c  str w8,[sp, #0x8]
71021cf840  mov x8,#0x86bb
71021cf844  movk x8,#0xc478, LSL #16
71021cf848  movk x8,#0x24, LSL #32
71021cf84c  mov x0,sp
71021cf850  stp x8,xzr,[sp, #0x10]
71021cf854  mov x8,#-0x10000
71021cf858  movk x8,#0x5000, LSL #16
71021cf85c  str x8,[sp, #0x20]
71021cf860  adrp x8,0x71050b5000
71021cf864  add x8,x8,#0x688
71021cf868  str x8,[sp]
71021cf86c  mov w8,#0xffffffff
71021cf870  mov w2,#0x1
71021cf874  mov x1,x19
71021cf878  strb wzr,[sp, #0x28]
71021cf87c  str w8,[sp, #0x2c]
71021cf880  bl 0x7101ff91a0
71021cf884  ldr x8,[x19, #0x10]
71021cf888  adrp x9,0x71021cf000
71021cf88c  add x9,x9,#0x900
71021cf890  str x9,[x8]
71021cf894  str w20,[x8, #0x8]
71021cf898  ldr x8,[x19, #0x10]
71021cf89c  add x9,x8,#0x10
71021cf8a0  sub x1,x8,#0x10
71021cf8a4  adrp x2,0x710430c000
71021cf8a8  add x2,x2,#0x66a
71021cf8ac  mov x0,x19
71021cf8b0  str x9,[x19, #0x10]
71021cf8b4  bl 0x71038f5390
71021cf8b8  ldr x8,[x19, #0x10]
71021cf8bc  mov x9,#-0x1
71021cf8c0  str x9,[x8]
71021cf8c4  mov w9,#0x13
71021cf8c8  str w9,[x8, #0x8]
71021cf8cc  ldr x8,[x19, #0x10]
71021cf8d0  add x9,x8,#0x10
71021cf8d4  sub x1,x8,#0x10
71021cf8d8  adrp x2,0x7104323000
71021cf8dc  add x2,x2,#0xa14
71021cf8e0  mov x0,x19
71021cf8e4  str x9,[x19, #0x10]
71021cf8e8  bl 0x71038f5390
71021cf8ec  ldp x29,x30,[sp, #0x40]
71021cf8f0  mov w0,#0x1
71021cf8f4  ldp x20,x19,[sp, #0x30]
71021cf8f8  add sp,sp,#0x50
71021cf8fc  ret
