// addr:      710317ed70
// offset:    0x317ed70
// name:      FUN_710317ed70
// mangled:   
// size:      792

710317ed70  sub sp,sp,#0x110
710317ed74  str x28,[sp, #0xd0]
710317ed78  stp x22,x21,[sp, #0xe0]
710317ed7c  stp x20,x19,[sp, #0xf0]
710317ed80  stp x29,x30,[sp, #0x100]
710317ed84  add x29,sp,#0x100
710317ed88  mov x19,x0
710317ed8c  ldr x0,[x1, #0x20]
710317ed90  cbz x0,0x710317edd0
710317ed94  cmp x1,x0
710317ed98  b.eq 0x710317edec
710317ed9c  str x0,[sp, #0x20]
710317eda0  str xzr,[x1, #0x20]
710317eda4  str x19,[sp, #0x60]
710317eda8  cbz x0,0x710317eddc
710317edac  mov x8,sp
710317edb0  cmp x8,x0
710317edb4  b.eq 0x710317ee14
710317edb8  ldr x8,[x0]
710317edbc  ldr x8,[x8, #0x10]
710317edc0  blr x8
710317edc4  mov x20,x0
710317edc8  str x0,[sp, #0x90]
710317edcc  b 0x710317ede4
710317edd0  str xzr,[sp, #0x20]
710317edd4  str x19,[sp, #0x60]
710317edd8  cbnz x0,0x710317edac
710317eddc  mov x20,xzr
710317ede0  str xzr,[sp, #0x90]
710317ede4  mov x22,x19
710317ede8  b 0x710317ee34
710317edec  mov x8,sp
710317edf0  str x8,[sp, #0x20]
710317edf4  ldr x8,[x0]
710317edf8  ldr x8,[x8, #0x18]
710317edfc  mov x1,sp
710317ee00  blr x8
710317ee04  ldr x0,[sp, #0x20]
710317ee08  str x19,[sp, #0x60]
710317ee0c  cbnz x0,0x710317edac
710317ee10  b 0x710317eddc
710317ee14  add x8,sp,#0x60
710317ee18  add x1,x8,#0x10
710317ee1c  str x1,[sp, #0x90]
710317ee20  ldr x8,[x0]
710317ee24  ldr x8,[x8, #0x18]
710317ee28  blr x8
710317ee2c  ldr x22,[sp, #0x60]
710317ee30  ldr x20,[sp, #0x90]
710317ee34  mov w1,#0x50
710317ee38  mov w0,#0x10
710317ee3c  stur xzr,[x29, #-0x40]
710317ee40  bl 0x710392e290
710317ee44  mov x21,x0
710317ee48  cbnz x0,0x710317ee94
710317ee4c  adrp x8,0x7105332000
710317ee50  ldr x0,[x8, #0xf00]
710317ee54  cbz x0,0x710317ee90
710317ee58  mov w8,#0x50
710317ee5c  stur wzr,[x29, #-0x24]
710317ee60  sub x1,x29,#0x24
710317ee64  str x8,[sp, #0x30]
710317ee68  ldr x8,[x0]
710317ee6c  ldr x8,[x8, #0x30]
710317ee70  add x2,sp,#0x30
710317ee74  blr x8
710317ee78  tbz w0,#0x0,0x710317ee90
710317ee7c  mov w1,#0x50
710317ee80  mov w0,#0x10
710317ee84  bl 0x710392e290
710317ee88  mov x21,x0
710317ee8c  cbnz x0,0x710317ee94
710317ee90  mov x21,xzr
710317ee94  adrp x8,0x710517d000
710317ee98  add x8,x8,#0x200
710317ee9c  str x8,[x21]
710317eea0  str x22,[x21, #0x10]
710317eea4  cbz x20,0x710317eec8
710317eea8  add x8,sp,#0x60
710317eeac  add x8,x8,#0x10
710317eeb0  cmp x8,x20
710317eeb4  b.eq 0x710317eed8
710317eeb8  str x20,[x21, #0x40]
710317eebc  str xzr,[sp, #0x90]
710317eec0  stur x21,[x29, #-0x40]
710317eec4  b 0x710317ef1c
710317eec8  add x8,sp,#0x60
710317eecc  str xzr,[x21, #0x40]
710317eed0  add x20,x8,#0x10
710317eed4  b 0x710317eef0
710317eed8  add x1,x21,#0x20
710317eedc  str x1,[x21, #0x40]
710317eee0  ldr x8,[x20]
710317eee4  ldr x8,[x8, #0x18]
710317eee8  mov x0,x20
710317eeec  blr x8
710317eef0  ldr x0,[sp, #0x90]
710317eef4  cmp x20,x0
710317eef8  stur x21,[x29, #-0x40]
710317eefc  b.eq 0x710317ef10
710317ef00  cbz x0,0x710317ef1c
710317ef04  ldr x8,[x0]
710317ef08  ldr x8,[x8, #0x28]
710317ef0c  b 0x710317ef18
710317ef10  ldr x8,[x0]
710317ef14  ldr x8,[x8, #0x20]
710317ef18  blr x8
710317ef1c  mov w0,#0x10
710317ef20  mov w1,#0x8
710317ef24  bl 0x710392e290
710317ef28  mov x20,x0
710317ef2c  cbnz x0,0x710317ef68
710317ef30  adrp x8,0x7105332000
710317ef34  ldr x0,[x8, #0xf00]
710317ef38  mov w8,#0x8
710317ef3c  stur wzr,[x29, #-0x24]
710317ef40  sub x1,x29,#0x24
710317ef44  str x8,[sp, #0x30]
710317ef48  ldr x8,[x0]
710317ef4c  ldr x8,[x8, #0x30]
710317ef50  add x2,sp,#0x30
710317ef54  blr x8
710317ef58  mov w0,#0x10
710317ef5c  mov w1,#0x8
710317ef60  bl 0x710392e290
710317ef64  mov x20,x0
710317ef68  str xzr,[x20]
710317ef6c  ldr x21,[x19, #0x8]
710317ef70  str x20,[x19, #0x8]
710317ef74  cbz x21,0x710317ef8c
710317ef78  mov x0,x21
710317ef7c  bl 0x710353c7c0
710317ef80  mov x0,x21
710317ef84  bl 0x710392eb40
710317ef88  ldr x20,[x19, #0x8]
710317ef8c  ldur x0,[x29, #-0x40]
710317ef90  cbz x0,0x710317efac
710317ef94  sub x8,x29,#0x60
710317ef98  cmp x8,x0
710317ef9c  b.eq 0x710317efb4
710317efa0  str x0,[sp, #0x50]
710317efa4  stur xzr,[x29, #-0x40]
710317efa8  b 0x710317efcc
710317efac  str xzr,[sp, #0x50]
710317efb0  b 0x710317efcc
710317efb4  add x8,sp,#0x30
710317efb8  str x8,[sp, #0x50]
710317efbc  ldr x8,[x0]
710317efc0  ldr x8,[x8, #0x18]
710317efc4  add x1,sp,#0x30
710317efc8  blr x8
710317efcc  adrp x2,0x710427f000
710317efd0  add x2,x2,#0xb0
710317efd4  add x1,sp,#0x30
710317efd8  mov w3,#0x10000
710317efdc  mov x0,x20
710317efe0  add x21,sp,#0x30
710317efe4  bl 0x710353cb60
710317efe8  ldr x0,[sp, #0x50]
710317efec  cmp x21,x0
710317eff0  b.eq 0x710317f004
710317eff4  cbz x0,0x710317f010
710317eff8  ldr x8,[x0]
710317effc  ldr x8,[x8, #0x28]
710317f000  b 0x710317f00c
710317f004  ldr x8,[x0]
710317f008  ldr x8,[x8, #0x20]
710317f00c  blr x8
710317f010  mov w8,#0x1
710317f014  str w8,[x19]
710317f018  ldur x0,[x29, #-0x40]
710317f01c  sub x8,x29,#0x60
710317f020  cmp x8,x0
710317f024  b.eq 0x710317f038
710317f028  cbz x0,0x710317f044
710317f02c  ldr x8,[x0]
710317f030  ldr x8,[x8, #0x28]
710317f034  b 0x710317f040
710317f038  ldr x8,[x0]
710317f03c  ldr x8,[x8, #0x20]
710317f040  blr x8
710317f044  ldr x0,[sp, #0x20]
710317f048  mov x8,sp
710317f04c  cmp x8,x0
710317f050  b.eq 0x710317f064
710317f054  cbz x0,0x710317f070
710317f058  ldr x8,[x0]
710317f05c  ldr x8,[x8, #0x28]
710317f060  b 0x710317f06c
710317f064  ldr x8,[x0]
710317f068  ldr x8,[x8, #0x20]
710317f06c  blr x8
710317f070  ldp x29,x30,[sp, #0x100]
710317f074  ldr x28,[sp, #0xd0]
710317f078  ldp x20,x19,[sp, #0xf0]
710317f07c  ldp x22,x21,[sp, #0xe0]
710317f080  add sp,sp,#0x110
710317f084  ret
