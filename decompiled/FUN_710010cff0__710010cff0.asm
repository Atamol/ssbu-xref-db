// addr:      710010cff0
// offset:    0x10cff0
// name:      FUN_710010cff0
// mangled:   
// size:      160

710010cff0  sub sp,sp,#0x40
710010cff4  stp x20,x19,[sp, #0x20]
710010cff8  stp x29,x30,[sp, #0x30]
710010cffc  add x29,sp,#0x30
710010d000  mov x19,x8
710010d004  adrp x8,0x71052a5000
710010d008  ldr x8,[x8, #0x80]
710010d00c  ldr x8,[x8]
710010d010  ldrb w9,[x8, #0x162]
710010d014  add x8,x8,x9, LSL #0x3
710010d018  ldr x8,[x8, #0x168]
710010d01c  str x8,[x0, #0x90]
710010d020  cbz x8,0x710010d048
710010d024  adrp x8,0x71052a5000
710010d028  ldr x8,[x8, #0x6b8]
710010d02c  adrp x9,0x71042f6000
710010d030  add x9,x9,#0xf94
710010d034  str w1,[x0, #0x98]
710010d038  str x8,[x0, #0x30]
710010d03c  stp xzr,x9,[x0, #0x38]
710010d040  str wzr,[sp, #0x8]
710010d044  b 0x710010d054
710010d048  mov w8,#0xc08
710010d04c  movk w8,#0x1, LSL #16
710010d050  str w8,[sp, #0x8]
710010d054  add x8,sp,#0x8
710010d058  orr x20,x8,#0x4
710010d05c  mov x0,x20
710010d060  bl 0x71039c0a80
710010d064  add x1,sp,#0x18
710010d068  mov x0,x20
710010d06c  str wzr,[sp, #0x18]
710010d070  bl 0x71039c0a90
710010d074  add x1,sp,#0x8
710010d078  mov x0,x19
710010d07c  bl 0x71000bce50
710010d080  ldp x29,x30,[sp, #0x30]
710010d084  ldp x20,x19,[sp, #0x20]
710010d088  add sp,sp,#0x40
710010d08c  ret
