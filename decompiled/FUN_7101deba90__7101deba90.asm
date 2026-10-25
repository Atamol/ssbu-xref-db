// addr:      7101deba90
// offset:    0x1deba90
// name:      FUN_7101deba90
// mangled:   
// size:      500

7101deba90  sub sp,sp,#0xd0
7101deba94  stp x22,x21,[sp, #0xa0]
7101deba98  stp x20,x19,[sp, #0xb0]
7101deba9c  stp x29,x30,[sp, #0xc0]
7101debaa0  add x29,sp,#0xc0
7101debaa4  mov x20,x2
7101debaa8  mov w2,wzr
7101debaac  mov x21,x1
7101debab0  mov x19,x0
7101debab4  str w3,[x0, #0x5e4]
7101debab8  bl 0x7101de7f20
7101debabc  ldr w8,[x19, #0x5e4]
7101debac0  sub w8,w8,#0x1
7101debac4  cmp w8,#0x4
7101debac8  b.hi 0x7101debbfc
7101debacc  adrp x9,0x71044fb000
7101debad0  add x9,x9,#0x78c
7101debad4  ldrsw x8,[x9, x8, LSL #0x2]
7101debad8  add x8,x8,x9
7101debadc  br x8
7101debae0  adrp x8,0x710532f000
7101debae4  ldr x8,[x8, #0x730]
7101debae8  ldr x22,[x8, #0x8]
7101debaec  ldp x8,x9,[x21]
7101debaf0  sub x8,x9,x8
7101debaf4  and x20,x20,#0xffff
7101debaf8  add x0,x19,#0x10
7101debafc  adrp x1,0x7104338000
7101debb00  add x1,x1,#0xd31
7101debb04  cmp x8,#0x8
7101debb08  b.ne 0x7101debc10
7101debb0c  add x8,sp,#0x48
7101debb10  bl 0x7103776910
7101debb14  ldr x19,[x22, #0x1d8]
7101debb18  mov x0,x19
7101debb1c  mov x1,x20
7101debb20  bl 0x71032a9470
7101debb24  mov x2,x0
7101debb28  add x0,sp,#0x58
7101debb2c  mov x1,x19
7101debb30  add x20,sp,#0x58
7101debb34  bl 0x71032a9540
7101debb38  add x1,x20,#0x8
7101debb3c  adrp x0,0x7104464000
7101debb40  add x0,x0,#0x1d4
7101debb44  mov x8,sp
7101debb48  mov x19,sp
7101debb4c  bl 0x71003a4ca0
7101debb50  add x3,x19,#0x8
7101debb54  adrp x1,0x7104292000
7101debb58  add x1,x1,#0x10f
7101debb5c  b 0x7101debc60
7101debb60  add x0,x19,#0x10
7101debb64  adrp x1,0x7104338000
7101debb68  add x1,x1,#0xd31
7101debb6c  add x8,sp,#0x58
7101debb70  bl 0x7103776910
7101debb74  adrp x1,0x710438c000
7101debb78  add x1,x1,#0xfb1
7101debb7c  b 0x7101debbdc
7101debb80  add x0,x19,#0x10
7101debb84  adrp x1,0x7104338000
7101debb88  add x1,x1,#0xd31
7101debb8c  add x8,sp,#0x58
7101debb90  bl 0x7103776910
7101debb94  adrp x1,0x7104433000
7101debb98  add x1,x1,#0x5cc
7101debb9c  b 0x7101debbdc
7101debba0  add x0,x19,#0x10
7101debba4  adrp x1,0x7104338000
7101debba8  add x1,x1,#0xd31
7101debbac  add x8,sp,#0x58
7101debbb0  bl 0x7103776910
7101debbb4  adrp x1,0x7104292000
7101debbb8  add x1,x1,#0x136
7101debbbc  b 0x7101debbdc
7101debbc0  add x0,x19,#0x10
7101debbc4  adrp x1,0x7104338000
7101debbc8  add x1,x1,#0xd31
7101debbcc  add x8,sp,#0x58
7101debbd0  bl 0x7103776910
7101debbd4  adrp x1,0x710438c000
7101debbd8  add x1,x1,#0xf90
7101debbdc  add x0,sp,#0x58
7101debbe0  bl 0x710377a120
7101debbe4  ldr x0,[sp, #0x60]
7101debbe8  adrp x8,0x710523d000
7101debbec  add x8,x8,#0x9a8
7101debbf0  stp x8,xzr,[sp, #0x58]
7101debbf4  cbz x0,0x7101debbfc
7101debbf8  bl 0x710392eb40
7101debbfc  ldp x29,x30,[sp, #0xc0]
7101debc00  ldp x20,x19,[sp, #0xb0]
7101debc04  ldp x22,x21,[sp, #0xa0]
7101debc08  add sp,sp,#0xd0
7101debc0c  ret
7101debc10  add x8,sp,#0x48
7101debc14  bl 0x7103776910
7101debc18  ldr x19,[x22, #0x1d8]
7101debc1c  mov x0,x19
7101debc20  mov x1,x20
7101debc24  bl 0x71032a9470
7101debc28  mov x2,x0
7101debc2c  add x0,sp,#0x58
7101debc30  mov x1,x19
7101debc34  add x20,sp,#0x58
7101debc38  bl 0x71032a9540
7101debc3c  add x1,x20,#0x8
7101debc40  adrp x0,0x7104464000
7101debc44  add x0,x0,#0x1d4
7101debc48  mov x8,sp
7101debc4c  mov x19,sp
7101debc50  bl 0x71003a4ca0
7101debc54  add x3,x19,#0x8
7101debc58  adrp x1,0x71042a3000
7101debc5c  add x1,x1,#0x52e
7101debc60  add x0,sp,#0x48
7101debc64  mov w2,#0x1
7101debc68  bl 0x710377a280
7101debc6c  ldr x0,[sp, #0x50]
7101debc70  adrp x8,0x710523d000
7101debc74  add x8,x8,#0x9a8
7101debc78  stp x8,xzr,[sp, #0x48]
7101debc7c  cbnz x0,0x7101debbf8
7101debc80  b 0x7101debbfc
