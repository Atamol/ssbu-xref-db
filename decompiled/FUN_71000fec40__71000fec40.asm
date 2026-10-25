// addr:      71000fec40
// offset:    0xfec40
// name:      FUN_71000fec40
// mangled:   
// size:      1944

71000fec40  sub sp,sp,#0x70
71000fec44  str x25,[sp, #0x20]
71000fec48  stp x24,x23,[sp, #0x30]
71000fec4c  stp x22,x21,[sp, #0x40]
71000fec50  stp x20,x19,[sp, #0x50]
71000fec54  stp x29,x30,[sp, #0x60]
71000fec58  add x29,sp,#0x60
71000fec5c  adrp x8,0x71052a4000
71000fec60  ldr x8,[x8, #0xdf0]
71000fec64  mov x19,x0
71000fec68  ldr x0,[x8]
71000fec6c  bl 0x71001902d0
71000fec70  adrp x22,0x71052a5000
71000fec74  ldr x22,[x22, #0x80]
71000fec78  ldr x0,[x22]
71000fec7c  bl 0x7100146ba0
71000fec80  cmp w0,#0x7
71000fec84  b.eq 0x71000feca8
71000fec88  cmp w0,#0x6
71000fec8c  b.eq 0x71000fecb8
71000fec90  cmp w0,#0x5
71000fec94  b.ne 0x71000fecc8
71000fec98  mov w8,#0x1
71000fec9c  orr w9,wzr,#0x3
71000feca0  mov w10,#0xc406
71000feca4  b 0x71000fecdc
71000feca8  mov w8,#0x1
71000fecac  orr w9,wzr,#0x3
71000fecb0  mov w10,#0xc420
71000fecb4  b 0x71000fecdc
71000fecb8  mov w8,#0x1
71000fecbc  orr w9,wzr,#0x3
71000fecc0  mov w10,#0xa471
71000fecc4  b 0x71000fecdc
71000fecc8  cmp w0,#0x8
71000feccc  b.ne 0x71000fed60
71000fecd0  mov w8,#0x1
71000fecd4  orr w9,wzr,#0x3
71000fecd8  mov w10,#0xc421
71000fecdc  strb w8,[x19, #0xfa]
71000fece0  add x8,sp,#0x10
71000fece4  orr x20,x8,#0x4
71000fece8  mov x0,x20
71000fecec  strb w9,[x19, #0x130]
71000fecf0  str w10,[sp, #0x10]
71000fecf4  bl 0x71039c0a80
71000fecf8  mov x1,sp
71000fecfc  mov x0,x20
71000fed00  str wzr,[sp]
71000fed04  bl 0x71039c0a90
71000fed08  add x0,x19,#0x220
71000fed0c  add x1,sp,#0x10
71000fed10  bl 0x71000bcf30
71000fed14  ldr x8,[x22]
71000fed18  ldr x0,[x8, #0x8]
71000fed1c  ldr x8,[x0]
71000fed20  ldr x8,[x8, #0x28]
71000fed24  blr x8
71000fed28  adrp x8,0x71052a5000
71000fed2c  ldr x8,[x8, #0x240]
71000fed30  mov x0,xzr
71000fed34  stp x8,xzr,[x19, #0x30]
71000fed38  adrp x8,0x71043ac000
71000fed3c  add x8,x8,#0x982
71000fed40  str x8,[x19, #0x40]
71000fed44  ldp x29,x30,[sp, #0x60]
71000fed48  ldr x25,[sp, #0x20]
71000fed4c  ldp x20,x19,[sp, #0x50]
71000fed50  ldp x22,x21,[sp, #0x40]
71000fed54  ldp x24,x23,[sp, #0x30]
71000fed58  add sp,sp,#0x70
71000fed5c  ret
71000fed60  ldrb w8,[x19, #0xfb]
71000fed64  cbz w8,0x71000fed88
71000fed68  add x1,x19,#0x100
71000fed6c  add x0,x19,#0x220
71000fed70  bl 0x71000bcf30
71000fed74  adrp x8,0x71052a5000
71000fed78  ldr x8,[x8, #0x238]
71000fed7c  orr w9,wzr,#0x6
71000fed80  strb w9,[x19, #0x130]
71000fed84  b 0x71000ff0f0
71000fed88  ldr x23,[x22]
71000fed8c  add x8,sp,#0x10
71000fed90  orr x20,x8,#0x4
71000fed94  mov x0,x20
71000fed98  str wzr,[sp, #0x10]
71000fed9c  bl 0x71039c0a80
71000feda0  mov x1,sp
71000feda4  mov x0,x20
71000feda8  str wzr,[sp]
71000fedac  bl 0x71039c0a90
71000fedb0  mov x0,x19
71000fedb4  bl 0x71001405b0
71000fedb8  ldr x20,[x22]
71000fedbc  mov x0,x19
71000fedc0  bl 0x7100140e30
71000fedc4  ldrb w8,[x20, #0x162]
71000fedc8  cmp x8,#0x0
71000fedcc  cset w9,eq
71000fedd0  tst w0,#0x1
71000fedd4  ldr x0,[x20, #0x8]
71000fedd8  csel x8,x9,x8,ne
71000feddc  add x8,x20,x8, LSL #0x2
71000fede0  ldr w1,[x8, #0x180]
71000fede4  bl 0x71000ee2e0
71000fede8  cbz x0,0x71000fee64
71000fedec  ldr x9,[x0, #0x10]
71000fedf0  add x8,x0,#0x8
71000fedf4  cmp x9,x8
71000fedf8  b.eq 0x71000fee6c
71000fedfc  ldr x11,[x19, #0xb0]
71000fee00  add x10,x19,#0xa8
71000fee04  cmp x11,x10
71000fee08  b.eq 0x71000fee50
71000fee0c  mov w12,wzr
71000fee10  ldr x13,[x9, #0x10]
71000fee14  mov x14,x11
71000fee18  ldr x15,[x14, #0x10]
71000fee1c  cmp x13,x15
71000fee20  b.ne 0x71000fee30
71000fee24  ldrsh w15,[x9, #0x22]
71000fee28  cmp w15,#0x0
71000fee2c  b.gt 0x71000fee40
71000fee30  ldr x14,[x14, #0x8]
71000fee34  cmp x14,x10
71000fee38  b.ne 0x71000fee18
71000fee3c  mov w12,#0x1
71000fee40  ldr x9,[x9, #0x8]
71000fee44  cmp x9,x8
71000fee48  b.ne 0x71000fee10
71000fee4c  b 0x71000fee70
71000fee50  ldr x9,[x9, #0x8]
71000fee54  cmp x9,x8
71000fee58  b.ne 0x71000fee50
71000fee5c  mov w12,#0x1
71000fee60  b 0x71000fee70
71000fee64  mov w8,wzr
71000fee68  b 0x71000fee78
71000fee6c  mov w12,wzr
71000fee70  mvn w8,w12
71000fee74  and w8,w8,#0x1
71000fee78  strb w8,[x19, #0x265]
71000fee7c  ldr x0,[x23, #0xb8]
71000fee80  bl 0x7100150590
71000fee84  ldr x0,[x23, #0xb8]
71000fee88  bl 0x7100150840
71000fee8c  adrp x25,0x71052a4000
71000fee90  ldr x25,[x25, #0xc70]
71000fee94  ldr x8,[x25]
71000fee98  ldr x8,[x8, #0x30]
71000fee9c  mov x0,x19
71000feea0  str x8,[x19, #0x1c8]
71000feea4  bl 0x7100140e30
71000feea8  adrp x9,0x71052a4000
71000feeac  ldr x9,[x9, #0xd88]
71000feeb0  mov w8,w0
71000feeb4  ldr x0,[x9]
71000feeb8  ldrb w9,[x23, #0x162]
71000feebc  tbz w8,#0x0,0x71000fef58
71000feec0  cmp w9,#0x0
71000feec4  cset w8,eq
71000feec8  add x21,x23,#0x180
71000feecc  ldr w1,[x21, w8, UXTW #0x2]
71000feed0  bl 0x71000c4cc0
71000feed4  mov x24,x23
71000feed8  ldr x20,[x24, #0x8]!
71000feedc  mov x0,x20
71000feee0  ldrb w8,[x24, #0x15a]
71000feee4  ldr w1,[x21, x8, LSL #0x2]
71000feee8  bl 0x71000edff0
71000feeec  tbz w0,#0x0,0x71000ff048
71000feef0  ldrb w8,[x23, #0x162]
71000feef4  cmp w8,#0x0
71000feef8  cset w8,eq
71000feefc  add x8,x23,w8, UXTW  #0x2
71000fef00  ldr w1,[x8, #0x180]
71000fef04  mov x0,x20
71000fef08  bl 0x71000edff0
71000fef0c  tbz w0,#0x0,0x71000ff048
71000fef10  ldrb w8,[x23, #0x162]
71000fef14  cmp w8,#0x0
71000fef18  cset w8,eq
71000fef1c  add x8,x23,w8, UXTW  #0x3
71000fef20  ldr x20,[x8, #0x168]
71000fef24  ldr x8,[x20]
71000fef28  ldr x8,[x8, #0xe0]
71000fef2c  mov x0,x20
71000fef30  blr x8
71000fef34  tbz w0,#0x0,0x71000ff13c
71000fef38  ldrb w8,[x23, #0x162]
71000fef3c  add x8,x23,x8, LSL #0x3
71000fef40  ldr x0,[x8, #0x168]
71000fef44  ldr x8,[x0]
71000fef48  ldr x8,[x8, #0xe0]
71000fef4c  blr x8
71000fef50  and w8,w0,#0x1
71000fef54  b 0x71000ff140
71000fef58  add x20,x23,#0x180
71000fef5c  ldr w1,[x20, x9, LSL #0x2]
71000fef60  bl 0x71000c4cc0
71000fef64  strb wzr,[x19, #0x240]
71000fef68  mov x24,x23
71000fef6c  ldr x0,[x24, #0x8]!
71000fef70  ldrb w8,[x24, #0x15a]
71000fef74  ldr w1,[x20, x8, LSL #0x2]
71000fef78  bl 0x71000edff0
71000fef7c  tbz w0,#0x0,0x71000ff048
71000fef80  ldrb w8,[x23, #0x162]
71000fef84  add x8,x23,x8, LSL #0x3
71000fef88  ldr x20,[x8, #0x168]
71000fef8c  ldr x8,[x20]
71000fef90  ldr x8,[x8, #0xe0]
71000fef94  mov x0,x20
71000fef98  blr x8
71000fef9c  and w8,w0,#0x1
71000fefa0  strb w8,[x19, #0xf5]
71000fefa4  tbz w0,#0x0,0x71000ff084
71000fefa8  ldrb w8,[x19, #0xf4]
71000fefac  cbnz w8,0x71000ff08c
71000fefb0  ldr x9,[x19, #0xb0]
71000fefb4  add x8,x19,#0xa8
71000fefb8  cmp x9,x8
71000fefbc  b.eq 0x71000fefdc
71000fefc0  ldr x10,[x19, #0xa0]
71000fefc4  ldr x11,[x9, #0x10]
71000fefc8  cmp x10,x11
71000fefcc  b.eq 0x71000ff2e0
71000fefd0  ldr x9,[x9, #0x8]
71000fefd4  cmp x9,x8
71000fefd8  b.ne 0x71000fefc4
71000fefdc  mov w8,#0x1
71000fefe0  strb w8,[x19, #0xf4]
71000fefe4  ldr x8,[x23, #0xf0]
71000fefe8  mov x0,x20
71000fefec  str x8,[x19, #0xa0]
71000feff0  bl 0x71000d7ea0
71000feff4  tbnz w0,#0x0,0x71000ff08c
71000feff8  ldrb w8,[x23, #0x162]
71000feffc  add x8,x23,x8, LSL #0x2
71000ff000  ldr w1,[x8, #0x180]
71000ff004  ldr x8,[x20]
71000ff008  ldr x9,[x8, #0xd8]
71000ff00c  mov x8,sp
71000ff010  mov x0,x20
71000ff014  mov x21,sp
71000ff018  blr x9
71000ff01c  add x0,sp,#0x10
71000ff020  mov x1,sp
71000ff024  bl 0x71000bcf30
71000ff028  ldr w8,[sp, #0x10]
71000ff02c  cbz w8,0x71000ff08c
71000ff030  mov w8,#0x17
71000ff034  strb w8,[x19, #0x130]
71000ff038  mov w8,#0xac5a
71000ff03c  str w8,[sp]
71000ff040  orr x20,x21,#0x4
71000ff044  b 0x71000ff060
71000ff048  orr w8,wzr,#0x18
71000ff04c  mov w9,#0x6c59
71000ff050  strb w8,[x19, #0x130]
71000ff054  str w9,[sp]
71000ff058  mov x8,sp
71000ff05c  orr x20,x8,#0x4
71000ff060  mov x0,x20
71000ff064  bl 0x71039c0a80
71000ff068  add x1,sp,#0x28
71000ff06c  mov x0,x20
71000ff070  str wzr,[sp, #0x28]
71000ff074  bl 0x71039c0a90
71000ff078  add x0,x19,#0x220
71000ff07c  mov x1,sp
71000ff080  b 0x71000ff0c8
71000ff084  strb wzr,[x19, #0xf4]
71000ff088  str xzr,[x19, #0xa0]
71000ff08c  ldr x0,[x24]
71000ff090  ldr x8,[x0]
71000ff094  ldr x9,[x8, #0x20]
71000ff098  mov x8,sp
71000ff09c  mov x1,x20
71000ff0a0  blr x9
71000ff0a4  add x0,sp,#0x10
71000ff0a8  mov x1,sp
71000ff0ac  bl 0x71000bcf30
71000ff0b0  ldr w8,[sp, #0x10]
71000ff0b4  cbz w8,0x71000ff108
71000ff0b8  mov w8,#0x1a
71000ff0bc  add x0,x19,#0x220
71000ff0c0  add x1,sp,#0x10
71000ff0c4  strb w8,[x19, #0x130]
71000ff0c8  bl 0x71000bcf30
71000ff0cc  ldr x8,[x22]
71000ff0d0  ldrb w9,[x8, #0x162]
71000ff0d4  cmp w9,#0x0
71000ff0d8  cset w9,eq
71000ff0dc  add x8,x8,w9, UXTW  #0x3
71000ff0e0  ldr x0,[x8, #0x168]
71000ff0e4  bl 0x71000d8f90
71000ff0e8  adrp x8,0x71052a5000
71000ff0ec  ldr x8,[x8, #0x238]
71000ff0f0  adrp x9,0x7104290000
71000ff0f4  add x9,x9,#0xd05
71000ff0f8  str x9,[x19, #0x40]
71000ff0fc  stp x8,xzr,[x19, #0x30]
71000ff100  mov w0,#0x5
71000ff104  b 0x71000fed44
71000ff108  ldrb w8,[x19, #0xf5]
71000ff10c  mov x0,xzr
71000ff110  strb wzr,[x19, #0x262]
71000ff114  strh wzr,[x19, #0x110]
71000ff118  cbz w8,0x71000ff26c
71000ff11c  adrp x9,0x71052a5000
71000ff120  ldr x9,[x9, #0x390]
71000ff124  orr w8,wzr,#0xf
71000ff128  str w8,[x19, #0x230]
71000ff12c  adrp x8,0x710427f000
71000ff130  add x8,x8,#0xcb1
71000ff134  stp x9,xzr,[x19, #0x30]
71000ff138  b 0x71000fed40
71000ff13c  mov w8,wzr
71000ff140  strb w8,[x19, #0xf5]
71000ff144  ldr x8,[x20]
71000ff148  ldr x8,[x8, #0xe0]
71000ff14c  mov x0,x20
71000ff150  blr x8
71000ff154  tbz w0,#0x0,0x71000ff1b8
71000ff158  ldrb w8,[x19, #0x265]
71000ff15c  strb wzr,[x19, #0x250]
71000ff160  cbz w8,0x71000ff284
71000ff164  ldrb w8,[x23, #0x162]
71000ff168  add x8,x23,x8, LSL #0x3
71000ff16c  ldr x0,[x8, #0x168]
71000ff170  ldr x8,[x0]
71000ff174  ldr x8,[x8, #0xe0]
71000ff178  blr x8
71000ff17c  tbz w0,#0x0,0x71000ff284
71000ff180  mov x0,x20
71000ff184  bl 0x71000d7ea0
71000ff188  tbnz w0,#0x0,0x71000ff08c
71000ff18c  ldrb w8,[x23, #0x162]
71000ff190  cmp w8,#0x0
71000ff194  cset w8,eq
71000ff198  add x8,x23,w8, UXTW  #0x2
71000ff19c  ldr w1,[x8, #0x180]
71000ff1a0  ldr x8,[x20]
71000ff1a4  ldr x9,[x8, #0xd8]
71000ff1a8  mov x8,sp
71000ff1ac  mov x0,x20
71000ff1b0  blr x9
71000ff1b4  b 0x71000ff08c
71000ff1b8  ldr x8,[x20]
71000ff1bc  ldr x8,[x8, #0xf0]
71000ff1c0  mov x0,x20
71000ff1c4  blr x8
71000ff1c8  strb wzr,[x19, #0x250]
71000ff1cc  mov x21,x0
71000ff1d0  ldr x0,[x23, #0xb8]
71000ff1d4  add x2,sp,#0x2c
71000ff1d8  mov x1,x21
71000ff1dc  bl 0x7100150d50
71000ff1e0  tbz w0,#0x0,0x71000ff08c
71000ff1e4  ldrb w8,[x23, #0x162]
71000ff1e8  add x8,x23,x8, LSL #0x3
71000ff1ec  ldr x0,[x8, #0x168]
71000ff1f0  ldr x8,[x0]
71000ff1f4  ldr x8,[x8, #0xe0]
71000ff1f8  blr x8
71000ff1fc  tbz w0,#0x0,0x71000ff08c
71000ff200  ldrb w8,[x23, #0x162]
71000ff204  add x8,x23,x8, LSL #0x2
71000ff208  ldr w1,[sp, #0x2c]
71000ff20c  ldr w8,[x8, #0x180]
71000ff210  cmp w1,w8
71000ff214  b.ne 0x71000ff08c
71000ff218  ldr x0,[x24]
71000ff21c  ldr x8,[x0]
71000ff220  ldr x8,[x8, #0x60]
71000ff224  mov x2,x21
71000ff228  blr x8
71000ff22c  tbz w0,#0x0,0x71000ff2e8
71000ff230  ldrb w8,[x19, #0x265]
71000ff234  cbz w8,0x71000ff378
71000ff238  ldrb w8,[x23, #0x162]
71000ff23c  cmp w8,#0x0
71000ff240  cset w8,eq
71000ff244  add x8,x23,w8, UXTW  #0x2
71000ff248  ldr w1,[x8, #0x180]
71000ff24c  ldr x8,[x20]
71000ff250  ldr x9,[x8, #0xd8]
71000ff254  mov x8,sp
71000ff258  mov x0,x20
71000ff25c  blr x9
71000ff260  mov w8,#0x1
71000ff264  strb w8,[x19, #0xf5]
71000ff268  b 0x71000ff08c
71000ff26c  adrp x8,0x71052a5000
71000ff270  ldr x8,[x8, #0x398]
71000ff274  stp x8,xzr,[x19, #0x30]
71000ff278  adrp x8,0x7104329000
71000ff27c  add x8,x8,#0x2ae
71000ff280  b 0x71000fed40
71000ff284  ldr x20,[x25]
71000ff288  bl 0x71000bb680
71000ff28c  ldr x8,[x20, #0x30]
71000ff290  ldr x9,[x0]
71000ff294  mov w11,#0x2ee0
71000ff298  ldrb w10,[x19, #0x261]
71000ff29c  madd x8,x9,x11,x8
71000ff2a0  add w9,w10,#0x1
71000ff2a4  strb w9,[x19, #0x261]
71000ff2a8  str x8,[x19, #0x1e8]
71000ff2ac  and w8,w9,#0xff
71000ff2b0  cmp w8,#0x3
71000ff2b4  b.cc 0x71000ff2c4
71000ff2b8  mov w8,#0x6c59
71000ff2bc  str w8,[sp]
71000ff2c0  b 0x71000ff058
71000ff2c4  adrp x8,0x71052a5000
71000ff2c8  ldr x8,[x8, #0x3a0]
71000ff2cc  mov x0,xzr
71000ff2d0  stp x8,xzr,[x19, #0x30]
71000ff2d4  adrp x8,0x7104329000
71000ff2d8  add x8,x8,#0x27e
71000ff2dc  b 0x71000fed40
71000ff2e0  strb wzr,[x19, #0xf5]
71000ff2e4  b 0x71000ff08c
71000ff2e8  ldr x0,[x24]
71000ff2ec  orr x8,xzr,#0x2000000000000
71000ff2f0  str x8,[sp]
71000ff2f4  str wzr,[sp, #0x8]
71000ff2f8  ldr x8,[x0]
71000ff2fc  ldr x8,[x8, #0x38]
71000ff300  mov x1,sp
71000ff304  mov x20,sp
71000ff308  blr x8
71000ff30c  mov w8,#0x6c59
71000ff310  str w8,[sp]
71000ff314  orr x20,x20,#0x4
71000ff318  mov x0,x20
71000ff31c  bl 0x71039c0a80
71000ff320  add x1,sp,#0x28
71000ff324  mov x0,x20
71000ff328  str wzr,[sp, #0x28]
71000ff32c  bl 0x71039c0a90
71000ff330  add x0,x19,#0x220
71000ff334  mov x1,sp
71000ff338  bl 0x71000bcf30
71000ff33c  ldr x8,[x22]
71000ff340  ldrb w9,[x8, #0x162]
71000ff344  cmp w9,#0x0
71000ff348  cset w9,eq
71000ff34c  add x8,x8,w9, UXTW  #0x3
71000ff350  ldr x0,[x8, #0x168]
71000ff354  bl 0x71000d8f90
71000ff358  adrp x8,0x71052a5000
71000ff35c  ldr x8,[x8, #0x238]
71000ff360  mov w0,#0x5
71000ff364  adrp x9,0x7104290000
71000ff368  add x9,x9,#0xd05
71000ff36c  stp x8,xzr,[x19, #0x30]
71000ff370  str x9,[x19, #0x40]
71000ff374  b 0x71000fed44
71000ff378  ldr x20,[x25]
71000ff37c  bl 0x71000bb680
71000ff380  ldr x8,[x20, #0x30]
71000ff384  ldr x9,[x0]
71000ff388  mov w11,#0x2ee0
71000ff38c  ldrb w10,[x19, #0x261]
71000ff390  madd x8,x9,x11,x8
71000ff394  add w9,w10,#0x1
71000ff398  strb w9,[x19, #0x261]
71000ff39c  str x8,[x19, #0x1e8]
71000ff3a0  and w8,w9,#0xff
71000ff3a4  cmp w8,#0x3
71000ff3a8  b.cc 0x71000ff3c0
71000ff3ac  mov w8,#0x6c59
71000ff3b0  str w8,[sp]
71000ff3b4  mov x8,sp
71000ff3b8  orr x20,x8,#0x4
71000ff3bc  b 0x71000ff318
71000ff3c0  adrp x8,0x71052a5000
71000ff3c4  ldr x8,[x8, #0x3a0]
71000ff3c8  mov x0,xzr
71000ff3cc  adrp x9,0x7104329000
71000ff3d0  add x9,x9,#0x27e
71000ff3d4  b 0x71000ff36c
