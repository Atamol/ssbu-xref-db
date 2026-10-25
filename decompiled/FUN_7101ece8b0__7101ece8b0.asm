// addr:      7101ece8b0
// offset:    0x1ece8b0
// name:      FUN_7101ece8b0
// mangled:   
// size:      2336

7101ece8b0  sub sp,sp,#0xa0
7101ece8b4  stp x28,x27,[sp, #0x40]
7101ece8b8  stp x26,x25,[sp, #0x50]
7101ece8bc  stp x24,x23,[sp, #0x60]
7101ece8c0  stp x22,x21,[sp, #0x70]
7101ece8c4  stp x20,x19,[sp, #0x80]
7101ece8c8  stp x29,x30,[sp, #0x90]
7101ece8cc  add x29,sp,#0x90
7101ece8d0  mov x21,x1
7101ece8d4  mov x23,x0
7101ece8d8  mov w1,#0x1b8
7101ece8dc  mov w0,#0x10
7101ece8e0  bl 0x710392e290
7101ece8e4  mov x19,x0
7101ece8e8  cbnz x0,0x7101ece934
7101ece8ec  adrp x8,0x7105332000
7101ece8f0  ldr x0,[x8, #0xf00]
7101ece8f4  cbz x0,0x7101ece930
7101ece8f8  mov w8,#0x1b8
7101ece8fc  str wzr,[sp, #0x2c]
7101ece900  add x1,sp,#0x2c
7101ece904  str x8,[sp, #0x30]
7101ece908  ldr x8,[x0]
7101ece90c  ldr x8,[x8, #0x30]
7101ece910  add x2,sp,#0x30
7101ece914  blr x8
7101ece918  tbz w0,#0x0,0x7101ece930
7101ece91c  mov w1,#0x1b8
7101ece920  mov w0,#0x10
7101ece924  bl 0x710392e290
7101ece928  mov x19,x0
7101ece92c  cbnz x0,0x7101ece934
7101ece930  mov x19,xzr
7101ece934  add x22,x19,#0x8
7101ece938  mov x20,x19
7101ece93c  mov x0,x22
7101ece940  str x21,[x20], #0x18
7101ece944  bl 0x7103776290
7101ece948  mov x0,x20
7101ece94c  bl 0x7103776290
7101ece950  adrp x24,0x710523d000
7101ece954  add x24,x24,#0x9e8
7101ece958  mov x8,x19
7101ece95c  str x24,[x8, #0x28]!
7101ece960  mov w0,#0x10
7101ece964  orr w1,wzr,#0x18
7101ece968  str x8,[sp, #0x18]
7101ece96c  bl 0x710392e290
7101ece970  cbnz x0,0x7101ece9b8
7101ece974  adrp x8,0x7105332000
7101ece978  ldr x0,[x8, #0xf00]
7101ece97c  cbz x0,0x7101ece9b4
7101ece980  orr w8,wzr,#0x18
7101ece984  str wzr,[sp, #0x2c]
7101ece988  add x1,sp,#0x2c
7101ece98c  str x8,[sp, #0x30]
7101ece990  ldr x8,[x0]
7101ece994  ldr x8,[x8, #0x30]
7101ece998  add x2,sp,#0x30
7101ece99c  blr x8
7101ece9a0  tbz w0,#0x0,0x7101ece9b4
7101ece9a4  mov w0,#0x10
7101ece9a8  orr w1,wzr,#0x18
7101ece9ac  bl 0x710392e290
7101ece9b0  cbnz x0,0x7101ece9b8
7101ece9b4  mov x0,xzr
7101ece9b8  mov w21,#0x1
7101ece9bc  mov x8,x19
7101ece9c0  orr w1,wzr,#0x18
7101ece9c4  stp xzr,xzr,[x0]
7101ece9c8  strb w21,[x0, #0x10]
7101ece9cc  str x24,[x8, #0x38]!
7101ece9d0  stur x0,[x8, #-0x8]
7101ece9d4  mov w0,#0x10
7101ece9d8  str x8,[sp, #0x8]
7101ece9dc  bl 0x710392e290
7101ece9e0  cbnz x0,0x7101ecea28
7101ece9e4  adrp x8,0x7105332000
7101ece9e8  ldr x0,[x8, #0xf00]
7101ece9ec  cbz x0,0x7101ecea24
7101ece9f0  orr w8,wzr,#0x18
7101ece9f4  str wzr,[sp, #0x2c]
7101ece9f8  add x1,sp,#0x2c
7101ece9fc  str x8,[sp, #0x30]
7101ecea00  ldr x8,[x0]
7101ecea04  ldr x8,[x8, #0x30]
7101ecea08  add x2,sp,#0x30
7101ecea0c  blr x8
7101ecea10  tbz w0,#0x0,0x7101ecea24
7101ecea14  mov w0,#0x10
7101ecea18  orr w1,wzr,#0x18
7101ecea1c  bl 0x710392e290
7101ecea20  cbnz x0,0x7101ecea28
7101ecea24  mov x0,xzr
7101ecea28  mov x8,x19
7101ecea2c  stp xzr,xzr,[x0]
7101ecea30  strb w21,[x0, #0x10]
7101ecea34  orr w1,wzr,#0x18
7101ecea38  str x24,[x8, #0x48]!
7101ecea3c  stur x0,[x8, #-0x8]
7101ecea40  mov w0,#0x10
7101ecea44  str x8,[sp]
7101ecea48  bl 0x710392e290
7101ecea4c  cbnz x0,0x7101ecea94
7101ecea50  adrp x8,0x7105332000
7101ecea54  ldr x0,[x8, #0xf00]
7101ecea58  cbz x0,0x7101ecea90
7101ecea5c  orr w8,wzr,#0x18
7101ecea60  str wzr,[sp, #0x2c]
7101ecea64  add x1,sp,#0x2c
7101ecea68  str x8,[sp, #0x30]
7101ecea6c  ldr x8,[x0]
7101ecea70  ldr x8,[x8, #0x30]
7101ecea74  add x2,sp,#0x30
7101ecea78  blr x8
7101ecea7c  tbz w0,#0x0,0x7101ecea90
7101ecea80  mov w0,#0x10
7101ecea84  orr w1,wzr,#0x18
7101ecea88  bl 0x710392e290
7101ecea8c  cbnz x0,0x7101ecea94
7101ecea90  mov x0,xzr
7101ecea94  mov w21,#0x1
7101ecea98  mov x8,x19
7101ecea9c  orr w1,wzr,#0x18
7101eceaa0  stp xzr,xzr,[x0]
7101eceaa4  strb w21,[x0, #0x10]
7101eceaa8  str x24,[x8, #0x58]!
7101eceaac  stur x0,[x8, #-0x8]
7101eceab0  mov w0,#0x10
7101eceab4  str x8,[sp, #0x10]
7101eceab8  bl 0x710392e290
7101eceabc  cbnz x0,0x7101eceb04
7101eceac0  adrp x8,0x7105332000
7101eceac4  ldr x0,[x8, #0xf00]
7101eceac8  cbz x0,0x7101eceb00
7101eceacc  orr w8,wzr,#0x18
7101ecead0  str wzr,[sp, #0x2c]
7101ecead4  add x1,sp,#0x2c
7101ecead8  str x8,[sp, #0x30]
7101eceadc  ldr x8,[x0]
7101eceae0  ldr x8,[x8, #0x30]
7101eceae4  add x2,sp,#0x30
7101eceae8  blr x8
7101eceaec  tbz w0,#0x0,0x7101eceb00
7101eceaf0  mov w0,#0x10
7101eceaf4  orr w1,wzr,#0x18
7101eceaf8  bl 0x710392e290
7101eceafc  cbnz x0,0x7101eceb04
7101eceb00  mov x0,xzr
7101eceb04  mov x8,x19
7101eceb08  stp xzr,xzr,[x0]
7101eceb0c  strb w21,[x0, #0x10]
7101eceb10  orr w1,wzr,#0x18
7101eceb14  str x24,[x8, #0x68]!
7101eceb18  stur x0,[x8, #-0x8]
7101eceb1c  mov w0,#0x10
7101eceb20  str x8,[sp, #0x20]
7101eceb24  bl 0x710392e290
7101eceb28  cbnz x0,0x7101eceb70
7101eceb2c  adrp x8,0x7105332000
7101eceb30  ldr x0,[x8, #0xf00]
7101eceb34  cbz x0,0x7101eceb6c
7101eceb38  orr w8,wzr,#0x18
7101eceb3c  str wzr,[sp, #0x2c]
7101eceb40  add x1,sp,#0x2c
7101eceb44  str x8,[sp, #0x30]
7101eceb48  ldr x8,[x0]
7101eceb4c  ldr x8,[x8, #0x30]
7101eceb50  add x2,sp,#0x30
7101eceb54  blr x8
7101eceb58  tbz w0,#0x0,0x7101eceb6c
7101eceb5c  mov w0,#0x10
7101eceb60  orr w1,wzr,#0x18
7101eceb64  bl 0x710392e290
7101eceb68  cbnz x0,0x7101eceb70
7101eceb6c  mov x0,xzr
7101eceb70  mov w21,#0x1
7101eceb74  mov x25,x19
7101eceb78  orr w1,wzr,#0x18
7101eceb7c  stp xzr,xzr,[x0]
7101eceb80  strb w21,[x0, #0x10]
7101eceb84  str x24,[x25, #0x78]!
7101eceb88  stur x0,[x25, #-0x8]
7101eceb8c  mov w0,#0x10
7101eceb90  bl 0x710392e290
7101eceb94  cbnz x0,0x7101ecebdc
7101eceb98  adrp x8,0x7105332000
7101eceb9c  ldr x0,[x8, #0xf00]
7101eceba0  cbz x0,0x7101ecebd8
7101eceba4  orr w8,wzr,#0x18
7101eceba8  str wzr,[sp, #0x2c]
7101ecebac  add x1,sp,#0x2c
7101ecebb0  str x8,[sp, #0x30]
7101ecebb4  ldr x8,[x0]
7101ecebb8  ldr x8,[x8, #0x30]
7101ecebbc  add x2,sp,#0x30
7101ecebc0  blr x8
7101ecebc4  tbz w0,#0x0,0x7101ecebd8
7101ecebc8  mov w0,#0x10
7101ecebcc  orr w1,wzr,#0x18
7101ecebd0  bl 0x710392e290
7101ecebd4  cbnz x0,0x7101ecebdc
7101ecebd8  mov x0,xzr
7101ecebdc  strb w21,[x0, #0x10]
7101ecebe0  mov x21,x19
7101ecebe4  orr w1,wzr,#0x18
7101ecebe8  stp xzr,xzr,[x0]
7101ecebec  str x24,[x21, #0x88]!
7101ecebf0  stur x0,[x21, #-0x8]
7101ecebf4  mov w0,#0x10
7101ecebf8  bl 0x710392e290
7101ecebfc  cbnz x0,0x7101ecec44
7101ecec00  adrp x8,0x7105332000
7101ecec04  ldr x0,[x8, #0xf00]
7101ecec08  cbz x0,0x7101ecec40
7101ecec0c  orr w8,wzr,#0x18
7101ecec10  str wzr,[sp, #0x2c]
7101ecec14  add x1,sp,#0x2c
7101ecec18  str x8,[sp, #0x30]
7101ecec1c  ldr x8,[x0]
7101ecec20  ldr x8,[x8, #0x30]
7101ecec24  add x2,sp,#0x30
7101ecec28  blr x8
7101ecec2c  tbz w0,#0x0,0x7101ecec40
7101ecec30  mov w0,#0x10
7101ecec34  orr w1,wzr,#0x18
7101ecec38  bl 0x710392e290
7101ecec3c  cbnz x0,0x7101ecec44
7101ecec40  mov x0,xzr
7101ecec44  mov w27,#0x1
7101ecec48  mov x26,x19
7101ecec4c  orr w1,wzr,#0x18
7101ecec50  stp xzr,xzr,[x0]
7101ecec54  strb w27,[x0, #0x10]
7101ecec58  str x24,[x26, #0x98]!
7101ecec5c  stur x0,[x26, #-0x8]
7101ecec60  mov w0,#0x10
7101ecec64  bl 0x710392e290
7101ecec68  cbnz x0,0x7101ececb0
7101ecec6c  adrp x8,0x7105332000
7101ecec70  ldr x0,[x8, #0xf00]
7101ecec74  cbz x0,0x7101ececac
7101ecec78  orr w8,wzr,#0x18
7101ecec7c  str wzr,[sp, #0x2c]
7101ecec80  add x1,sp,#0x2c
7101ecec84  str x8,[sp, #0x30]
7101ecec88  ldr x8,[x0]
7101ecec8c  ldr x8,[x8, #0x30]
7101ecec90  add x2,sp,#0x30
7101ecec94  blr x8
7101ecec98  tbz w0,#0x0,0x7101ececac
7101ecec9c  mov w0,#0x10
7101ececa0  orr w1,wzr,#0x18
7101ececa4  bl 0x710392e290
7101ececa8  cbnz x0,0x7101ececb0
7101ececac  mov x0,xzr
7101ececb0  strb w27,[x0, #0x10]
7101ececb4  mov x27,x19
7101ececb8  orr w1,wzr,#0x18
7101ececbc  stp xzr,xzr,[x0]
7101ececc0  str x24,[x27, #0xa8]!
7101ececc4  stur x0,[x27, #-0x8]
7101ececc8  mov w0,#0x10
7101ececcc  bl 0x710392e290
7101ececd0  cbnz x0,0x7101eced18
7101ececd4  adrp x8,0x7105332000
7101ececd8  ldr x0,[x8, #0xf00]
7101ececdc  cbz x0,0x7101eced14
7101ecece0  orr w8,wzr,#0x18
7101ecece4  str wzr,[sp, #0x2c]
7101ecece8  add x1,sp,#0x2c
7101ececec  str x8,[sp, #0x30]
7101ececf0  ldr x8,[x0]
7101ececf4  ldr x8,[x8, #0x30]
7101ececf8  add x2,sp,#0x30
7101ececfc  blr x8
7101eced00  tbz w0,#0x0,0x7101eced14
7101eced04  mov w0,#0x10
7101eced08  orr w1,wzr,#0x18
7101eced0c  bl 0x710392e290
7101eced10  cbnz x0,0x7101eced18
7101eced14  mov x0,xzr
7101eced18  mov w9,#0x1
7101eced1c  mov x10,#0x8e
7101eced20  add x8,x19,#0xd0
7101eced24  stp xzr,xzr,[x0]
7101eced28  strb w9,[x0, #0x10]
7101eced2c  movk x10,#0x42c8, LSL #48
7101eced30  strh w9,[x19, #0x1b4]
7101eced34  adrp x9,0x7101ecd000
7101eced38  add x9,x9,#0xe80
7101eced3c  str x10,[x19, #0x1a8]
7101eced40  mov w10,#0x42c60000
7101eced44  stp xzr,x9,[x19, #0xf0]
7101eced48  adrp x9,0x7101ecd000
7101eced4c  add x9,x9,#0xec0
7101eced50  str w10,[x19, #0x1b0]
7101eced54  adrp x10,0x7101ecd000
7101eced58  add x10,x10,#0xf50
7101eced5c  str wzr,[x19, #0xc8]
7101eced60  str x0,[x19, #0xb0]
7101eced64  mov x0,x8
7101eced68  str xzr,[x19, #0x140]
7101eced6c  str wzr,[x19, #0x194]
7101eced70  stp xzr,x9,[x19, #0x100]
7101eced74  adrp x9,0x7101ecd000
7101eced78  add x9,x9,#0xfe0
7101eced7c  stp xzr,x10,[x19, #0x110]
7101eced80  add x10,x19,#0x18c
7101eced84  stp xzr,x9,[x19, #0x120]
7101eced88  adrp x9,0x7101ece000
7101eced8c  add x9,x9,#0x20
7101eced90  stp xzr,xzr,[x19, #0xb8]
7101eced94  stp xzr,xzr,[x19, #0xe0]
7101eced98  stp xzr,x9,[x19, #0x130]
7101eced9c  add x9,x19,#0x14c
7101eceda0  stp x19,xzr,[x19, #0xd0]
7101eceda4  str xzr,[x10]
7101eceda8  add x10,x19,#0x184
7101ecedac  str xzr,[x10]
7101ecedb0  add x10,x19,#0x17c
7101ecedb4  str xzr,[x10]
7101ecedb8  add x10,x19,#0x174
7101ecedbc  str xzr,[x10]
7101ecedc0  add x10,x19,#0x16c
7101ecedc4  str xzr,[x10]
7101ecedc8  add x10,x19,#0x164
7101ecedcc  str xzr,[x10]
7101ecedd0  add x10,x19,#0x15c
7101ecedd4  str xzr,[x10]
7101ecedd8  add x10,x19,#0x154
7101eceddc  str xzr,[x9]
7101ecede0  mov w9,#0xffffffff
7101ecede4  str xzr,[x10]
7101ecede8  str w9,[x19, #0x198]
7101ecedec  str wzr,[x19, #0x19c]
7101ecedf0  str w9,[x19, #0x1a0]
7101ecedf4  strb wzr,[x19, #0x1a4]
7101ecedf8  str wzr,[x19, #0x148]
7101ecedfc  bl 0x7101ece090
7101ecee00  str x19,[x23]
7101ecee04  ldr x0,[x19]
7101ecee08  adrp x1,0x710435b000
7101ecee0c  add x1,x1,#0xf60
7101ecee10  add x8,sp,#0x30
7101ecee14  add x23,sp,#0x30
7101ecee18  bl 0x7103776640
7101ecee1c  cmp x23,x22
7101ecee20  b.eq 0x7101ecee58
7101ecee24  ldr x8,[sp, #0x38]
7101ecee28  str xzr,[sp, #0x38]
7101ecee2c  ldr x23,[x19, #0x10]
7101ecee30  str x8,[x19, #0x10]
7101ecee34  cbz x23,0x7101ecee58
7101ecee38  ldr x0,[x23, #0x18]
7101ecee3c  adrp x8,0x710523d000
7101ecee40  add x8,x8,#0x9a8
7101ecee44  stp x8,xzr,[x23, #0x10]
7101ecee48  cbz x0,0x7101ecee50
7101ecee4c  bl 0x710392eb40
7101ecee50  mov x0,x23
7101ecee54  bl 0x710392eb40
7101ecee58  ldr x23,[sp, #0x38]
7101ecee5c  adrp x28,0x710523d000
7101ecee60  add x28,x28,#0x988
7101ecee64  stp x28,xzr,[sp, #0x30]
7101ecee68  cbz x23,0x7101ecee8c
7101ecee6c  ldr x0,[x23, #0x18]
7101ecee70  adrp x8,0x710523d000
7101ecee74  add x8,x8,#0x9a8
7101ecee78  stp x8,xzr,[x23, #0x10]
7101ecee7c  cbz x0,0x7101ecee84
7101ecee80  bl 0x710392eb40
7101ecee84  mov x0,x23
7101ecee88  bl 0x710392eb40
7101ecee8c  adrp x1,0x7104413000
7101ecee90  add x1,x1,#0x106
7101ecee94  add x8,sp,#0x30
7101ecee98  mov x0,x22
7101ecee9c  add x23,sp,#0x30
7101eceea0  bl 0x71037780e0
7101eceea4  ldr x8,[sp, #0x18]
7101eceea8  cmp x23,x8
7101eceeac  b.eq 0x7101eceec8
7101eceeb0  ldr x8,[sp, #0x38]
7101eceeb4  str xzr,[sp, #0x38]
7101eceeb8  ldr x0,[x19, #0x30]
7101eceebc  str x8,[x19, #0x30]
7101eceec0  cbz x0,0x7101eceec8
7101eceec4  bl 0x710392eb40
7101eceec8  ldr x0,[sp, #0x38]
7101eceecc  stp x24,xzr,[sp, #0x30]
7101eceed0  cbz x0,0x7101eceed8
7101eceed4  bl 0x710392eb40
7101eceed8  adrp x1,0x71042d6000
7101eceedc  add x1,x1,#0xad9
7101eceee0  add x8,sp,#0x30
7101eceee4  mov x0,x22
7101eceee8  add x23,sp,#0x30
7101eceeec  bl 0x71037780e0
7101eceef0  ldr x8,[sp, #0x8]
7101eceef4  cmp x23,x8
7101eceef8  b.eq 0x7101ecef14
7101eceefc  ldr x8,[sp, #0x38]
7101ecef00  str xzr,[sp, #0x38]
7101ecef04  ldr x0,[x19, #0x40]
7101ecef08  str x8,[x19, #0x40]
7101ecef0c  cbz x0,0x7101ecef14
7101ecef10  bl 0x710392eb40
7101ecef14  ldr x0,[sp, #0x38]
7101ecef18  stp x24,xzr,[sp, #0x30]
7101ecef1c  cbz x0,0x7101ecef24
7101ecef20  bl 0x710392eb40
7101ecef24  adrp x1,0x71042f8000
7101ecef28  add x1,x1,#0xb52
7101ecef2c  add x8,sp,#0x30
7101ecef30  mov x0,x22
7101ecef34  add x23,sp,#0x30
7101ecef38  bl 0x71037780e0
7101ecef3c  ldr x8,[sp]
7101ecef40  cmp x23,x8
7101ecef44  b.eq 0x7101ecef60
7101ecef48  ldr x8,[sp, #0x38]
7101ecef4c  str xzr,[sp, #0x38]
7101ecef50  ldr x0,[x19, #0x50]
7101ecef54  str x8,[x19, #0x50]
7101ecef58  cbz x0,0x7101ecef60
7101ecef5c  bl 0x710392eb40
7101ecef60  ldr x0,[sp, #0x38]
7101ecef64  ldr x23,[sp, #0x20]
7101ecef68  stp x24,xzr,[sp, #0x30]
7101ecef6c  cbz x0,0x7101ecef74
7101ecef70  bl 0x710392eb40
7101ecef74  ldr x0,[x19]
7101ecef78  adrp x1,0x7104443000
7101ecef7c  add x1,x1,#0xeb4
7101ecef80  add x8,sp,#0x30
7101ecef84  add x22,sp,#0x30
7101ecef88  bl 0x7103776640
7101ecef8c  cmp x22,x20
7101ecef90  b.eq 0x7101ecefc8
7101ecef94  ldr x8,[sp, #0x38]
7101ecef98  str xzr,[sp, #0x38]
7101ecef9c  ldr x22,[x19, #0x20]
7101ecefa0  str x8,[x19, #0x20]
7101ecefa4  cbz x22,0x7101ecefc8
7101ecefa8  ldr x0,[x22, #0x18]
7101ecefac  adrp x8,0x710523d000
7101ecefb0  add x8,x8,#0x9a8
7101ecefb4  stp x8,xzr,[x22, #0x10]
7101ecefb8  cbz x0,0x7101ecefc0
7101ecefbc  bl 0x710392eb40
7101ecefc0  mov x0,x22
7101ecefc4  bl 0x710392eb40
7101ecefc8  ldr x22,[sp, #0x38]
7101ecefcc  stp x28,xzr,[sp, #0x30]
7101ecefd0  cbz x22,0x7101eceff4
7101ecefd4  ldr x0,[x22, #0x18]
7101ecefd8  adrp x8,0x710523d000
7101ecefdc  add x8,x8,#0x9a8
7101ecefe0  stp x8,xzr,[x22, #0x10]
7101ecefe4  cbz x0,0x7101ecefec
7101ecefe8  bl 0x710392eb40
7101ecefec  mov x0,x22
7101eceff0  bl 0x710392eb40
7101eceff4  adrp x1,0x7104319000
7101eceff8  add x1,x1,#0x64d
7101eceffc  add x8,sp,#0x30
7101ecf000  mov x0,x20
7101ecf004  add x22,sp,#0x30
7101ecf008  bl 0x71037780e0
7101ecf00c  ldr x8,[sp, #0x10]
7101ecf010  cmp x22,x8
7101ecf014  b.eq 0x7101ecf030
7101ecf018  ldr x8,[sp, #0x38]
7101ecf01c  str xzr,[sp, #0x38]
7101ecf020  ldr x0,[x19, #0x60]
7101ecf024  str x8,[x19, #0x60]
7101ecf028  cbz x0,0x7101ecf030
7101ecf02c  bl 0x710392eb40
7101ecf030  ldr x0,[sp, #0x38]
7101ecf034  stp x24,xzr,[sp, #0x30]
7101ecf038  cbz x0,0x7101ecf040
7101ecf03c  bl 0x710392eb40
7101ecf040  adrp x1,0x710439d000
7101ecf044  add x1,x1,#0xbb6
7101ecf048  add x8,sp,#0x30
7101ecf04c  mov x0,x20
7101ecf050  add x22,sp,#0x30
7101ecf054  bl 0x71037780e0
7101ecf058  cmp x22,x23
7101ecf05c  b.eq 0x7101ecf078
7101ecf060  ldr x8,[sp, #0x38]
7101ecf064  str xzr,[sp, #0x38]
7101ecf068  ldr x0,[x19, #0x70]
7101ecf06c  str x8,[x19, #0x70]
7101ecf070  cbz x0,0x7101ecf078
7101ecf074  bl 0x710392eb40
7101ecf078  ldr x0,[sp, #0x38]
7101ecf07c  stp x24,xzr,[sp, #0x30]
7101ecf080  cbz x0,0x7101ecf088
7101ecf084  bl 0x710392eb40
7101ecf088  adrp x1,0x710435b000
7101ecf08c  add x1,x1,#0xf6d
7101ecf090  add x8,sp,#0x30
7101ecf094  mov x0,x20
7101ecf098  add x22,sp,#0x30
7101ecf09c  bl 0x71037780e0
7101ecf0a0  cmp x22,x25
7101ecf0a4  b.eq 0x7101ecf0c0
7101ecf0a8  ldr x8,[sp, #0x38]
7101ecf0ac  str xzr,[sp, #0x38]
7101ecf0b0  ldr x0,[x19, #0x80]
7101ecf0b4  str x8,[x19, #0x80]
7101ecf0b8  cbz x0,0x7101ecf0c0
7101ecf0bc  bl 0x710392eb40
7101ecf0c0  ldr x0,[sp, #0x38]
7101ecf0c4  stp x24,xzr,[sp, #0x30]
7101ecf0c8  cbz x0,0x7101ecf0d0
7101ecf0cc  bl 0x710392eb40
7101ecf0d0  adrp x1,0x7104422000
7101ecf0d4  add x1,x1,#0xb48
7101ecf0d8  add x8,sp,#0x30
7101ecf0dc  mov x0,x20
7101ecf0e0  add x22,sp,#0x30
7101ecf0e4  bl 0x71037780e0
7101ecf0e8  cmp x22,x21
7101ecf0ec  b.eq 0x7101ecf108
7101ecf0f0  ldr x8,[sp, #0x38]
7101ecf0f4  str xzr,[sp, #0x38]
7101ecf0f8  ldr x0,[x19, #0x90]
7101ecf0fc  str x8,[x19, #0x90]
7101ecf100  cbz x0,0x7101ecf108
7101ecf104  bl 0x710392eb40
7101ecf108  ldr x0,[sp, #0x38]
7101ecf10c  stp x24,xzr,[sp, #0x30]
7101ecf110  cbz x0,0x7101ecf118
7101ecf114  bl 0x710392eb40
7101ecf118  adrp x1,0x710437c000
7101ecf11c  add x1,x1,#0xc87
7101ecf120  add x8,sp,#0x30
7101ecf124  mov x0,x20
7101ecf128  add x21,sp,#0x30
7101ecf12c  bl 0x71037780e0
7101ecf130  cmp x21,x26
7101ecf134  b.eq 0x7101ecf150
7101ecf138  ldr x8,[sp, #0x38]
7101ecf13c  str xzr,[sp, #0x38]
7101ecf140  ldr x0,[x19, #0xa0]
7101ecf144  str x8,[x19, #0xa0]
7101ecf148  cbz x0,0x7101ecf150
7101ecf14c  bl 0x710392eb40
7101ecf150  ldr x0,[sp, #0x38]
7101ecf154  stp x24,xzr,[sp, #0x30]
7101ecf158  cbz x0,0x7101ecf160
7101ecf15c  bl 0x710392eb40
7101ecf160  adrp x1,0x710437c000
7101ecf164  add x1,x1,#0xc97
7101ecf168  add x8,sp,#0x30
7101ecf16c  mov x0,x20
7101ecf170  add x21,sp,#0x30
7101ecf174  bl 0x71037780e0
7101ecf178  cmp x21,x27
7101ecf17c  b.eq 0x7101ecf198
7101ecf180  ldr x8,[sp, #0x38]
7101ecf184  str xzr,[sp, #0x38]
7101ecf188  ldr x0,[x19, #0xb0]
7101ecf18c  str x8,[x19, #0xb0]
7101ecf190  cbz x0,0x7101ecf198
7101ecf194  bl 0x710392eb40
7101ecf198  ldr x0,[sp, #0x38]
7101ecf19c  stp x24,xzr,[sp, #0x30]
7101ecf1a0  cbz x0,0x7101ecf1a8
7101ecf1a4  bl 0x710392eb40
7101ecf1a8  mov x0,x23
7101ecf1ac  bl 0x710377b140
7101ecf1b0  ldp x29,x30,[sp, #0x90]
7101ecf1b4  ldp x20,x19,[sp, #0x80]
7101ecf1b8  ldp x22,x21,[sp, #0x70]
7101ecf1bc  ldp x24,x23,[sp, #0x60]
7101ecf1c0  ldp x26,x25,[sp, #0x50]
7101ecf1c4  ldp x28,x27,[sp, #0x40]
7101ecf1c8  add sp,sp,#0xa0
7101ecf1cc  ret
