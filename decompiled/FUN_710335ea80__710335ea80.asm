// addr:      710335ea80
// offset:    0x335ea80
// name:      FUN_710335ea80
// mangled:   
// size:      1588

710335ea80  sub sp,sp,#0x160
710335ea84  stp x28,x21,[sp, #0x130]
710335ea88  stp x20,x19,[sp, #0x140]
710335ea8c  stp x29,x30,[sp, #0x150]
710335ea90  add x29,sp,#0x150
710335ea94  mov w8,#0x101
710335ea98  strh w8,[sp, #0x8]
710335ea9c  mov w20,#0x1
710335eaa0  mov x8,#0x41f0000000000000
710335eaa4  str xzr,[sp]
710335eaa8  strh wzr,[sp, #0xe]
710335eaac  stur wzr,[sp, #0xa]
710335eab0  mov x19,x0
710335eab4  str w20,[sp, #0x10]
710335eab8  strh w20,[sp, #0x14]
710335eabc  strb w20,[sp, #0x16]
710335eac0  str x8,[sp, #0x18]
710335eac4  str wzr,[sp, #0x20]
710335eac8  str xzr,[sp, #0x50]
710335eacc  str xzr,[sp, #0x80]
710335ead0  str xzr,[sp, #0xb0]
710335ead4  str xzr,[sp, #0xe0]
710335ead8  str xzr,[sp, #0x110]
710335eadc  str wzr,[sp, #0x120]
710335eae0  ldr x8,[x0, #0x18]
710335eae4  ldr x8,[x8, #0x18]
710335eae8  cmp x8,#0x1
710335eaec  b.lt 0x710335eaf8
710335eaf0  mov x0,x19
710335eaf4  bl 0x71038fec40
710335eaf8  mov x0,x19
710335eafc  bl 0x710391e050
710335eb00  ldr x8,[x19, #0x10]
710335eb04  mov w9,#0x45
710335eb08  str w9,[x8, #0x8]
710335eb0c  str x0,[x8]
710335eb10  ldr x8,[x19, #0x10]
710335eb14  add x9,x8,#0x10
710335eb18  str x9,[x19, #0x10]
710335eb1c  ldrsw x9,[sp]
710335eb20  mov w21,#0x13
710335eb24  str w21,[x8, #0x18]
710335eb28  mov x0,x19
710335eb2c  str x9,[x8, #0x10]
710335eb30  ldr x8,[x19, #0x10]
710335eb34  add x9,x8,#0x10
710335eb38  sub x1,x8,#0x10
710335eb3c  adrp x2,0x7104452000
710335eb40  add x2,x2,#0xff4
710335eb44  str x9,[x19, #0x10]
710335eb48  bl 0x71038f5390
710335eb4c  ldrsw x8,[sp, #0x4]
710335eb50  ldr x9,[x19, #0x10]
710335eb54  str x8,[x9]
710335eb58  str w21,[x9, #0x8]
710335eb5c  ldr x8,[x19, #0x10]
710335eb60  add x9,x8,#0x10
710335eb64  sub x1,x8,#0x10
710335eb68  adrp x2,0x710427f000
710335eb6c  add x2,x2,#0x176
710335eb70  mov x0,x19
710335eb74  str x9,[x19, #0x10]
710335eb78  bl 0x71038f5390
710335eb7c  ldrb w8,[sp, #0x8]
710335eb80  ldr x9,[x19, #0x10]
710335eb84  str w8,[x9]
710335eb88  str w20,[x9, #0x8]
710335eb8c  ldr x8,[x19, #0x10]
710335eb90  add x9,x8,#0x10
710335eb94  sub x1,x8,#0x10
710335eb98  adrp x2,0x71042f6000
710335eb9c  add x2,x2,#0x401
710335eba0  mov x0,x19
710335eba4  str x9,[x19, #0x10]
710335eba8  bl 0x71038f5390
710335ebac  ldrb w8,[sp, #0x9]
710335ebb0  ldr x9,[x19, #0x10]
710335ebb4  str w8,[x9]
710335ebb8  str w20,[x9, #0x8]
710335ebbc  ldr x8,[x19, #0x10]
710335ebc0  add x9,x8,#0x10
710335ebc4  sub x1,x8,#0x10
710335ebc8  adrp x2,0x710426e000
710335ebcc  add x2,x2,#0x4d4
710335ebd0  mov x0,x19
710335ebd4  str x9,[x19, #0x10]
710335ebd8  bl 0x71038f5390
710335ebdc  ldrb w8,[sp, #0xa]
710335ebe0  ldr x9,[x19, #0x10]
710335ebe4  str w8,[x9]
710335ebe8  str w20,[x9, #0x8]
710335ebec  ldr x8,[x19, #0x10]
710335ebf0  add x9,x8,#0x10
710335ebf4  sub x1,x8,#0x10
710335ebf8  adrp x2,0x7104306000
710335ebfc  add x2,x2,#0xc8f
710335ec00  mov x0,x19
710335ec04  str x9,[x19, #0x10]
710335ec08  bl 0x71038f5390
710335ec0c  ldrb w8,[sp, #0xb]
710335ec10  ldr x9,[x19, #0x10]
710335ec14  str w8,[x9]
710335ec18  str w20,[x9, #0x8]
710335ec1c  ldr x8,[x19, #0x10]
710335ec20  add x9,x8,#0x10
710335ec24  sub x1,x8,#0x10
710335ec28  adrp x2,0x71042d4000
710335ec2c  add x2,x2,#0xb36
710335ec30  mov x0,x19
710335ec34  str x9,[x19, #0x10]
710335ec38  bl 0x71038f5390
710335ec3c  ldrb w8,[sp, #0xc]
710335ec40  ldr x9,[x19, #0x10]
710335ec44  str w8,[x9]
710335ec48  str w20,[x9, #0x8]
710335ec4c  ldr x8,[x19, #0x10]
710335ec50  add x9,x8,#0x10
710335ec54  sub x1,x8,#0x10
710335ec58  adrp x2,0x71043ab000
710335ec5c  add x2,x2,#0xfce
710335ec60  mov x0,x19
710335ec64  str x9,[x19, #0x10]
710335ec68  bl 0x71038f5390
710335ec6c  ldrb w8,[sp, #0xd]
710335ec70  ldr x9,[x19, #0x10]
710335ec74  str w8,[x9]
710335ec78  str w20,[x9, #0x8]
710335ec7c  ldr x8,[x19, #0x10]
710335ec80  add x9,x8,#0x10
710335ec84  sub x1,x8,#0x10
710335ec88  adrp x2,0x710436a000
710335ec8c  add x2,x2,#0xb19
710335ec90  mov x0,x19
710335ec94  str x9,[x19, #0x10]
710335ec98  bl 0x71038f5390
710335ec9c  ldrb w8,[sp, #0xe]
710335eca0  ldr x9,[x19, #0x10]
710335eca4  str w8,[x9]
710335eca8  str w20,[x9, #0x8]
710335ecac  ldr x8,[x19, #0x10]
710335ecb0  add x9,x8,#0x10
710335ecb4  sub x1,x8,#0x10
710335ecb8  adrp x2,0x7104348000
710335ecbc  add x2,x2,#0x951
710335ecc0  mov x0,x19
710335ecc4  str x9,[x19, #0x10]
710335ecc8  bl 0x71038f5390
710335eccc  ldrb w8,[sp, #0xf]
710335ecd0  ldr x9,[x19, #0x10]
710335ecd4  str w8,[x9]
710335ecd8  str w20,[x9, #0x8]
710335ecdc  ldr x8,[x19, #0x10]
710335ece0  add x9,x8,#0x10
710335ece4  sub x1,x8,#0x10
710335ece8  adrp x2,0x710439b000
710335ecec  add x2,x2,#0x8ea
710335ecf0  mov x0,x19
710335ecf4  str x9,[x19, #0x10]
710335ecf8  bl 0x71038f5390
710335ecfc  ldrb w8,[sp, #0x10]
710335ed00  ldr x9,[x19, #0x10]
710335ed04  str w8,[x9]
710335ed08  str w20,[x9, #0x8]
710335ed0c  ldr x8,[x19, #0x10]
710335ed10  add x9,x8,#0x10
710335ed14  sub x1,x8,#0x10
710335ed18  adrp x2,0x7104431000
710335ed1c  add x2,x2,#0x780
710335ed20  mov x0,x19
710335ed24  str x9,[x19, #0x10]
710335ed28  bl 0x71038f5390
710335ed2c  ldrb w8,[sp, #0x11]
710335ed30  ldr x9,[x19, #0x10]
710335ed34  str w8,[x9]
710335ed38  str w20,[x9, #0x8]
710335ed3c  ldr x8,[x19, #0x10]
710335ed40  add x9,x8,#0x10
710335ed44  sub x1,x8,#0x10
710335ed48  adrp x2,0x71042f6000
710335ed4c  add x2,x2,#0x414
710335ed50  mov x0,x19
710335ed54  str x9,[x19, #0x10]
710335ed58  bl 0x71038f5390
710335ed5c  ldrb w8,[sp, #0x12]
710335ed60  ldr x9,[x19, #0x10]
710335ed64  str w8,[x9]
710335ed68  str w20,[x9, #0x8]
710335ed6c  ldr x8,[x19, #0x10]
710335ed70  add x9,x8,#0x10
710335ed74  sub x1,x8,#0x10
710335ed78  adrp x2,0x7104306000
710335ed7c  add x2,x2,#0xca1
710335ed80  mov x0,x19
710335ed84  str x9,[x19, #0x10]
710335ed88  bl 0x71038f5390
710335ed8c  ldrb w8,[sp, #0x13]
710335ed90  ldr x9,[x19, #0x10]
710335ed94  str w8,[x9]
710335ed98  str w20,[x9, #0x8]
710335ed9c  ldr x8,[x19, #0x10]
710335eda0  add x9,x8,#0x10
710335eda4  sub x1,x8,#0x10
710335eda8  adrp x2,0x71042b2000
710335edac  add x2,x2,#0x817
710335edb0  mov x0,x19
710335edb4  str x9,[x19, #0x10]
710335edb8  bl 0x71038f5390
710335edbc  ldrb w8,[sp, #0x14]
710335edc0  ldr x9,[x19, #0x10]
710335edc4  str w8,[x9]
710335edc8  str w20,[x9, #0x8]
710335edcc  ldr x8,[x19, #0x10]
710335edd0  add x9,x8,#0x10
710335edd4  sub x1,x8,#0x10
710335edd8  adrp x2,0x7104306000
710335eddc  add x2,x2,#0xcb3
710335ede0  mov x0,x19
710335ede4  str x9,[x19, #0x10]
710335ede8  bl 0x71038f5390
710335edec  ldrb w8,[sp, #0x15]
710335edf0  ldr x9,[x19, #0x10]
710335edf4  str w8,[x9]
710335edf8  str w20,[x9, #0x8]
710335edfc  ldr x8,[x19, #0x10]
710335ee00  add x9,x8,#0x10
710335ee04  sub x1,x8,#0x10
710335ee08  adrp x2,0x71042d4000
710335ee0c  add x2,x2,#0xb4d
710335ee10  mov x0,x19
710335ee14  str x9,[x19, #0x10]
710335ee18  bl 0x71038f5390
710335ee1c  ldrb w8,[sp, #0x16]
710335ee20  ldr x9,[x19, #0x10]
710335ee24  str w8,[x9]
710335ee28  str w20,[x9, #0x8]
710335ee2c  ldr x8,[x19, #0x10]
710335ee30  add x9,x8,#0x10
710335ee34  sub x1,x8,#0x10
710335ee38  adrp x2,0x7104431000
710335ee3c  add x2,x2,#0x793
710335ee40  mov x0,x19
710335ee44  str x9,[x19, #0x10]
710335ee48  bl 0x71038f5390
710335ee4c  ldrsw x8,[sp, #0x18]
710335ee50  ldr x9,[x19, #0x10]
710335ee54  str x8,[x9]
710335ee58  str w21,[x9, #0x8]
710335ee5c  ldr x8,[x19, #0x10]
710335ee60  add x9,x8,#0x10
710335ee64  sub x1,x8,#0x10
710335ee68  adrp x2,0x7104338000
710335ee6c  add x2,x2,#0x9b6
710335ee70  mov x0,x19
710335ee74  str x9,[x19, #0x10]
710335ee78  bl 0x71038f5390
710335ee7c  ldr w8,[sp, #0x1c]
710335ee80  ldr x9,[x19, #0x10]
710335ee84  str w8,[x9]
710335ee88  orr w8,wzr,#0x3
710335ee8c  str w8,[x9, #0x8]
710335ee90  ldr x8,[x19, #0x10]
710335ee94  add x9,x8,#0x10
710335ee98  sub x1,x8,#0x10
710335ee9c  adrp x2,0x71042b2000
710335eea0  add x2,x2,#0x82c
710335eea4  mov x0,x19
710335eea8  str x9,[x19, #0x10]
710335eeac  bl 0x71038f5390
710335eeb0  ldrsw x8,[sp, #0x20]
710335eeb4  ldr x9,[x19, #0x10]
710335eeb8  str x8,[x9]
710335eebc  str w21,[x9, #0x8]
710335eec0  ldr x8,[x19, #0x10]
710335eec4  add x9,x8,#0x10
710335eec8  sub x1,x8,#0x10
710335eecc  adrp x2,0x71043ab000
710335eed0  add x2,x2,#0xfe5
710335eed4  mov x0,x19
710335eed8  str x9,[x19, #0x10]
710335eedc  bl 0x71038f5390
710335eee0  ldr x8,[x19, #0x10]
710335eee4  str wzr,[x8]
710335eee8  str w20,[x8, #0x8]
710335eeec  ldr x8,[x19, #0x10]
710335eef0  add x9,x8,#0x10
710335eef4  sub x1,x8,#0x10
710335eef8  adrp x2,0x71043bc000
710335eefc  add x2,x2,#0xc7f
710335ef00  mov x0,x19
710335ef04  str x9,[x19, #0x10]
710335ef08  bl 0x71038f5390
710335ef0c  ldr x8,[x19, #0x10]
710335ef10  str wzr,[x8, #0x8]
710335ef14  ldr x8,[x19, #0x10]
710335ef18  add x9,x8,#0x10
710335ef1c  sub x1,x8,#0x10
710335ef20  adrp x2,0x71042f6000
710335ef24  add x2,x2,#0x429
710335ef28  mov x0,x19
710335ef2c  str x9,[x19, #0x10]
710335ef30  bl 0x71038f5390
710335ef34  ldr x8,[x19, #0x10]
710335ef38  str wzr,[x8, #0x8]
710335ef3c  ldr x8,[x19, #0x10]
710335ef40  add x9,x8,#0x10
710335ef44  sub x1,x8,#0x10
710335ef48  adrp x2,0x7104338000
710335ef4c  add x2,x2,#0x9c9
710335ef50  mov x0,x19
710335ef54  str x9,[x19, #0x10]
710335ef58  bl 0x71038f5390
710335ef5c  ldr x8,[x19, #0x10]
710335ef60  str wzr,[x8, #0x8]
710335ef64  ldr x8,[x19, #0x10]
710335ef68  add x9,x8,#0x10
710335ef6c  sub x1,x8,#0x10
710335ef70  adrp x2,0x71043de000
710335ef74  add x2,x2,#0x765
710335ef78  mov x0,x19
710335ef7c  str x9,[x19, #0x10]
710335ef80  bl 0x71038f5390
710335ef84  ldr x8,[x19, #0x10]
710335ef88  str wzr,[x8, #0x8]
710335ef8c  ldr x8,[x19, #0x10]
710335ef90  add x9,x8,#0x10
710335ef94  sub x1,x8,#0x10
710335ef98  adrp x2,0x71042b2000
710335ef9c  add x2,x2,#0x83f
710335efa0  mov x0,x19
710335efa4  str x9,[x19, #0x10]
710335efa8  bl 0x71038f5390
710335efac  ldr x0,[sp, #0x110]
710335efb0  mov x8,sp
710335efb4  add x8,x8,#0xf0
710335efb8  cmp x8,x0
710335efbc  b.eq 0x710335efd0
710335efc0  cbz x0,0x710335efdc
710335efc4  ldr x8,[x0]
710335efc8  ldr x8,[x8, #0x28]
710335efcc  b 0x710335efd8
710335efd0  ldr x8,[x0]
710335efd4  ldr x8,[x8, #0x20]
710335efd8  blr x8
710335efdc  ldr x0,[sp, #0xe0]
710335efe0  mov x8,sp
710335efe4  add x8,x8,#0xc0
710335efe8  cmp x8,x0
710335efec  b.eq 0x710335f000
710335eff0  cbz x0,0x710335f00c
710335eff4  ldr x8,[x0]
710335eff8  ldr x8,[x8, #0x28]
710335effc  b 0x710335f008
710335f000  ldr x8,[x0]
710335f004  ldr x8,[x8, #0x20]
710335f008  blr x8
710335f00c  ldr x0,[sp, #0xb0]
710335f010  mov x8,sp
710335f014  add x8,x8,#0x90
710335f018  cmp x8,x0
710335f01c  b.eq 0x710335f030
710335f020  cbz x0,0x710335f03c
710335f024  ldr x8,[x0]
710335f028  ldr x8,[x8, #0x28]
710335f02c  b 0x710335f038
710335f030  ldr x8,[x0]
710335f034  ldr x8,[x8, #0x20]
710335f038  blr x8
710335f03c  ldr x0,[sp, #0x80]
710335f040  mov x8,sp
710335f044  add x8,x8,#0x60
710335f048  cmp x8,x0
710335f04c  b.eq 0x710335f060
710335f050  cbz x0,0x710335f06c
710335f054  ldr x8,[x0]
710335f058  ldr x8,[x8, #0x28]
710335f05c  b 0x710335f068
710335f060  ldr x8,[x0]
710335f064  ldr x8,[x8, #0x20]
710335f068  blr x8
710335f06c  ldr x0,[sp, #0x50]
710335f070  mov x8,sp
710335f074  add x8,x8,#0x30
710335f078  cmp x8,x0
710335f07c  b.eq 0x710335f090
710335f080  cbz x0,0x710335f09c
710335f084  ldr x8,[x0]
710335f088  ldr x8,[x8, #0x28]
710335f08c  b 0x710335f098
710335f090  ldr x8,[x0]
710335f094  ldr x8,[x8, #0x20]
710335f098  blr x8
710335f09c  ldp x29,x30,[sp, #0x150]
710335f0a0  mov w0,#0x1
710335f0a4  ldp x20,x19,[sp, #0x140]
710335f0a8  ldp x28,x21,[sp, #0x130]
710335f0ac  add sp,sp,#0x160
710335f0b0  ret
