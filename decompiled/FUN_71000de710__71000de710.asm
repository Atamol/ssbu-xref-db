// addr:      71000de710
// offset:    0xde710
// name:      FUN_71000de710
// mangled:   
// size:      1248

71000de710  sub sp,sp,#0xd0
71000de714  stp x28,x27,[sp, #0x70]
71000de718  stp x26,x25,[sp, #0x80]
71000de71c  stp x24,x23,[sp, #0x90]
71000de720  stp x22,x21,[sp, #0xa0]
71000de724  stp x20,x19,[sp, #0xb0]
71000de728  stp x29,x30,[sp, #0xc0]
71000de72c  add x29,sp,#0xc0
71000de730  mov x19,x8
71000de734  cbz x1,0x71000de748
71000de738  ldr w8,[x1]
71000de73c  mov x21,x1
71000de740  cmp w8,#0x1
71000de744  b.ne 0x71000de754
71000de748  mov w8,#0xc07
71000de74c  movk w8,#0x1, LSL #16
71000de750  b 0x71000de778
71000de754  ldr x8,[x0, #0x2c0]
71000de758  mov x20,x0
71000de75c  cbnz x8,0x71000de76c
71000de760  ldr w8,[x20, #0x154]
71000de764  cmp w8,#0x1
71000de768  b.ne 0x71000de7c8
71000de76c  mov w8,#0xc07
71000de770  movk w8,#0x1, LSL #16
71000de774  add w8,w8,#0x1
71000de778  str w8,[sp, #0x28]
71000de77c  add x8,sp,#0x28
71000de780  orr x20,x8,#0x4
71000de784  mov x0,x20
71000de788  bl 0x71039c0a80
71000de78c  mov x1,sp
71000de790  mov x0,x20
71000de794  str wzr,[sp]
71000de798  bl 0x71039c0a90
71000de79c  add x1,sp,#0x28
71000de7a0  mov x0,x19
71000de7a4  bl 0x71000bce50
71000de7a8  ldp x29,x30,[sp, #0xc0]
71000de7ac  ldp x20,x19,[sp, #0xb0]
71000de7b0  ldp x22,x21,[sp, #0xa0]
71000de7b4  ldp x24,x23,[sp, #0x90]
71000de7b8  ldp x26,x25,[sp, #0x80]
71000de7bc  ldp x28,x27,[sp, #0x70]
71000de7c0  add sp,sp,#0xd0
71000de7c4  ret
71000de7c8  ldr x8,[x20, #0xc8]
71000de7cc  str x21,[x20, #0x2c0]
71000de7d0  str w2,[x8, #0xc]
71000de7d4  adrp x23,0x71052a5000
71000de7d8  ldr x23,[x23, #0x80]
71000de7dc  ldr x0,[x23]
71000de7e0  add x22,x20,#0x140
71000de7e4  cbz x0,0x71000deb9c
71000de7e8  bl 0x7100148da0
71000de7ec  and w8,w0,#0xff
71000de7f0  cmp w8,#0x2
71000de7f4  b.cc 0x71000deb9c
71000de7f8  ldr x0,[x23]
71000de7fc  bl 0x7100148d80
71000de800  tbz w0,#0x0,0x71000deb9c
71000de804  ldr x0,[x23]
71000de808  bl 0x7100148da0
71000de80c  mov w23,w0
71000de810  ldr x0,[x20, #0x60]
71000de814  cbz x0,0x71000de840
71000de818  ldr x8,[x0]
71000de81c  ldr x8,[x8, #0x18]
71000de820  blr x8
71000de824  adrp x8,0x71052a4000
71000de828  ldr x8,[x8, #0xd88]
71000de82c  mov x24,x0
71000de830  ldr x0,[x8]
71000de834  bl 0x71000c36b0
71000de838  cmp x24,x0
71000de83c  b.ne 0x71000de850
71000de840  mov w25,wzr
71000de844  ldr x0,[x20, #0x68]
71000de848  cbnz x0,0x71000de88c
71000de84c  b 0x71000de8e8
71000de850  ldr x25,[x20, #0x128]
71000de854  orr w0,wzr,#0x18
71000de858  bl 0x71001b1820
71000de85c  stp x25,x24,[x0, #0x8]
71000de860  str xzr,[x0]
71000de864  ldr x8,[x25]
71000de868  str x8,[x0]
71000de86c  str x0,[x8, #0x8]
71000de870  ldr x8,[x25, #0x10]
71000de874  add x8,x8,#0x1
71000de878  str x0,[x25]
71000de87c  str x8,[x25, #0x10]
71000de880  mov w25,#0x1
71000de884  ldr x0,[x20, #0x68]
71000de888  cbz x0,0x71000de8e8
71000de88c  ldr x8,[x0]
71000de890  ldr x8,[x8, #0x18]
71000de894  blr x8
71000de898  adrp x8,0x71052a4000
71000de89c  ldr x8,[x8, #0xd88]
71000de8a0  mov x24,x0
71000de8a4  ldr x0,[x8]
71000de8a8  bl 0x71000c36b0
71000de8ac  cmp x24,x0
71000de8b0  b.eq 0x71000de8e8
71000de8b4  ldr x26,[x20, #0x128]
71000de8b8  orr w0,wzr,#0x18
71000de8bc  bl 0x71001b1820
71000de8c0  stp x26,x24,[x0, #0x8]
71000de8c4  add w25,w25,#0x1
71000de8c8  str xzr,[x0]
71000de8cc  ldr x8,[x26]
71000de8d0  str x8,[x0]
71000de8d4  str x0,[x8, #0x8]
71000de8d8  ldr x8,[x26, #0x10]
71000de8dc  add x8,x8,#0x1
71000de8e0  str x0,[x26]
71000de8e4  str x8,[x26, #0x10]
71000de8e8  ldr x0,[x20, #0x70]
71000de8ec  cbz x0,0x71000de94c
71000de8f0  ldr x8,[x0]
71000de8f4  ldr x8,[x8, #0x18]
71000de8f8  blr x8
71000de8fc  adrp x8,0x71052a4000
71000de900  ldr x8,[x8, #0xd88]
71000de904  mov x24,x0
71000de908  ldr x0,[x8]
71000de90c  bl 0x71000c36b0
71000de910  cmp x24,x0
71000de914  b.eq 0x71000de94c
71000de918  ldr x26,[x20, #0x128]
71000de91c  orr w0,wzr,#0x18
71000de920  bl 0x71001b1820
71000de924  stp x26,x24,[x0, #0x8]
71000de928  add w25,w25,#0x1
71000de92c  str xzr,[x0]
71000de930  ldr x8,[x26]
71000de934  str x8,[x0]
71000de938  str x0,[x8, #0x8]
71000de93c  ldr x8,[x26, #0x10]
71000de940  add x8,x8,#0x1
71000de944  str x0,[x26]
71000de948  str x8,[x26, #0x10]
71000de94c  ldr x0,[x20, #0x78]
71000de950  cbz x0,0x71000de9b0
71000de954  ldr x8,[x0]
71000de958  ldr x8,[x8, #0x18]
71000de95c  blr x8
71000de960  adrp x8,0x71052a4000
71000de964  ldr x8,[x8, #0xd88]
71000de968  mov x24,x0
71000de96c  ldr x0,[x8]
71000de970  bl 0x71000c36b0
71000de974  cmp x24,x0
71000de978  b.eq 0x71000de9b0
71000de97c  ldr x26,[x20, #0x128]
71000de980  orr w0,wzr,#0x18
71000de984  bl 0x71001b1820
71000de988  stp x26,x24,[x0, #0x8]
71000de98c  add w25,w25,#0x1
71000de990  str xzr,[x0]
71000de994  ldr x8,[x26]
71000de998  str x8,[x0]
71000de99c  str x0,[x8, #0x8]
71000de9a0  ldr x8,[x26, #0x10]
71000de9a4  add x8,x8,#0x1
71000de9a8  str x0,[x26]
71000de9ac  str x8,[x26, #0x10]
71000de9b0  ldr x8,[x20, #0xc8]
71000de9b4  ldr x2,[x20, #0x128]
71000de9b8  add x0,x8,#0x10
71000de9bc  cmp x0,x2
71000de9c0  b.eq 0x71000de9d0
71000de9c4  ldr x1,[x2, #0x8]
71000de9c8  mov x3,xzr
71000de9cc  bl 0x71000eba40
71000de9d0  sub w8,w23,w25
71000de9d4  cbnz w25,0x71000de9e4
71000de9d8  ldr x9,[x20, #0xc8]
71000de9dc  and w10,w8,#0xff
71000de9e0  strh w10,[x9, #0xb0]
71000de9e4  mov w23,#0x47
71000de9e8  and w3,w8,#0xff
71000de9ec  adrp x2,0x710424e000
71000de9f0  add x2,x2,#0x707
71000de9f4  add x0,sp,#0x28
71000de9f8  mov x1,x23
71000de9fc  add x25,sp,#0x28
71000dea00  bl 0x71039c0770
71000dea04  mov w24,w0
71000dea08  ldr x0,[x20, #0x60]
71000dea0c  cbz x0,0x71000dea24
71000dea10  ldr x8,[x0]
71000dea14  ldr x8,[x8, #0x18]
71000dea18  blr x8
71000dea1c  mov x3,x0
71000dea20  b 0x71000dea28
71000dea24  mov x3,xzr
71000dea28  sxtw x8,w24
71000dea2c  mov w26,#0x20
71000dea30  add x27,x8,#0x1
71000dea34  strb w26,[x25, x8, LSL ]
71000dea38  add x0,x25,x27
71000dea3c  mov w25,#0x46
71000dea40  sub w8,w25,w24
71000dea44  sxtw x1,w8
71000dea48  adrp x2,0x710425e000
71000dea4c  add x2,x2,#0x550
71000dea50  bl 0x71039c0770
71000dea54  sxtw x8,w0
71000dea58  ldr x0,[x20, #0x68]
71000dea5c  add x27,x8,w27, SXTW 
71000dea60  cbz x0,0x71000dea78
71000dea64  ldr x8,[x0]
71000dea68  ldr x8,[x8, #0x18]
71000dea6c  blr x8
71000dea70  mov x3,x0
71000dea74  b 0x71000dea7c
71000dea78  mov x3,xzr
71000dea7c  add x24,sp,#0x28
71000dea80  add x28,x27,#0x1
71000dea84  sub w8,w25,w27
71000dea88  add x0,x24,x28
71000dea8c  sxtw x1,w8
71000dea90  adrp x2,0x710425e000
71000dea94  add x2,x2,#0x550
71000dea98  strb w26,[x24, x27, LSL ]
71000dea9c  bl 0x71039c0770
71000deaa0  sxtw x8,w0
71000deaa4  ldr x0,[x20, #0x70]
71000deaa8  add x27,x8,w28, SXTW 
71000deaac  cbz x0,0x71000deac4
71000deab0  ldr x8,[x0]
71000deab4  ldr x8,[x8, #0x18]
71000deab8  blr x8
71000deabc  mov x3,x0
71000deac0  b 0x71000deac8
71000deac4  mov x3,xzr
71000deac8  add x28,x27,#0x1
71000deacc  sub w8,w25,w27
71000dead0  mov w26,#0x20
71000dead4  add x0,x24,x28
71000dead8  sxtw x1,w8
71000deadc  adrp x2,0x710425e000
71000deae0  add x2,x2,#0x550
71000deae4  strb w26,[x24, x27, LSL ]
71000deae8  bl 0x71039c0770
71000deaec  sxtw x8,w0
71000deaf0  ldr x0,[x20, #0x78]
71000deaf4  add x24,x8,w28, SXTW 
71000deaf8  cbz x0,0x71000deb10
71000deafc  ldr x8,[x0]
71000deb00  ldr x8,[x8, #0x18]
71000deb04  blr x8
71000deb08  mov x3,x0
71000deb0c  b 0x71000deb14
71000deb10  mov x3,xzr
71000deb14  add x27,sp,#0x28
71000deb18  add x28,x24,#0x1
71000deb1c  sub w8,w25,w24
71000deb20  add x0,x27,x28
71000deb24  sxtw x1,w8
71000deb28  adrp x2,0x710425e000
71000deb2c  add x2,x2,#0x550
71000deb30  strb w26,[x27, x24, LSL ]
71000deb34  bl 0x71039c0770
71000deb38  add w8,w0,w28
71000deb3c  mov x0,sp
71000deb40  cmp w8,#0x47
71000deb44  csel w8,w8,w23,lt
71000deb48  strb wzr,[x27, w8, SXTW ]
71000deb4c  adrp x8,0x71052a4000
71000deb50  ldr x8,[x8, #0xd80]
71000deb54  ldr x23,[x20, #0xc8]
71000deb58  strb wzr,[sp, #0x8]
71000deb5c  add x24,x8,#0x10
71000deb60  mov x8,sp
71000deb64  add x8,x8,#0x8
71000deb68  str x8,[sp, #0x18]
71000deb6c  mov w8,#0x10
71000deb70  mov x2,#-0x1
71000deb74  add x1,sp,#0x28
71000deb78  str x24,[sp]
71000deb7c  str x8,[sp, #0x20]
71000deb80  bl 0x71001b47e0
71000deb84  add x0,x23,#0x88
71000deb88  mov x1,sp
71000deb8c  bl 0x71001b2f70
71000deb90  mov x0,sp
71000deb94  str x24,[sp]
71000deb98  bl 0x71001b4910
71000deb9c  ldr x0,[x20, #0x58]
71000deba0  ldr x2,[x20, #0xc8]
71000deba4  mov x1,x22
71000deba8  ldr x3,[x20, #0xa8]
71000debac  bl 0x710024e600
71000debb0  tbz w0,#0x0,0x71000debe4
71000debb4  mov w8,#0x1
71000debb8  mov x0,x21
71000debbc  str wzr,[x20, #0x558]
71000debc0  strb w8,[x20, #0x555]
71000debc4  str xzr,[x20, #0x560]
71000debc8  bl 0x71000b4160
71000debcc  ldr x0,[x20, #0xa0]
71000debd0  ldr x8,[x0]
71000debd4  ldr x8,[x8, #0x40]
71000debd8  blr x8
71000debdc  str wzr,[sp, #0x28]
71000debe0  b 0x71000de77c
71000debe4  mov w8,#0xac5a
71000debe8  str xzr,[x20, #0x2c0]
71000debec  b 0x71000de778
