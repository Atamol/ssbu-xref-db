// addr:      7101e35cb0
// offset:    0x1e35cb0
// name:      FUN_7101e35cb0
// mangled:   
// size:      3344

7101e35cb0  sub sp,sp,#0xc0
7101e35cb4  str x27,[sp, #0x60]
7101e35cb8  stp x26,x25,[sp, #0x70]
7101e35cbc  stp x24,x23,[sp, #0x80]
7101e35cc0  stp x22,x21,[sp, #0x90]
7101e35cc4  stp x20,x19,[sp, #0xa0]
7101e35cc8  stp x29,x30,[sp, #0xb0]
7101e35ccc  add x29,sp,#0xb0
7101e35cd0  adrp x8,0x71050b1000
7101e35cd4  add x8,x8,#0x738
7101e35cd8  mov x21,x1
7101e35cdc  stp x8,xzr,[x0]
7101e35ce0  orr x8,xzr,#0x1ffffffff
7101e35ce4  stp xzr,x8,[x0, #0x60]
7101e35ce8  mov w8,#0x1
7101e35cec  mov x22,x0
7101e35cf0  stp xzr,xzr,[x0, #0x10]
7101e35cf4  mov w19,w2
7101e35cf8  strb wzr,[x0, #0x58]
7101e35cfc  str x1,[x0, #0x78]
7101e35d00  mov w1,#0x1030
7101e35d04  strb w8,[x0, #0x70]
7101e35d08  stp xzr,xzr,[x0, #0x48]
7101e35d0c  mov w0,#0x10
7101e35d10  bl 0x710392e290
7101e35d14  mov x20,x0
7101e35d18  cbnz x0,0x7101e35d64
7101e35d1c  adrp x8,0x7105332000
7101e35d20  ldr x0,[x8, #0xf00]
7101e35d24  cbz x0,0x7101e35d60
7101e35d28  mov w8,#0x1030
7101e35d2c  str wzr,[sp, #0x50]
7101e35d30  add x1,sp,#0x50
7101e35d34  str x8,[sp, #0x8]
7101e35d38  ldr x8,[x0]
7101e35d3c  ldr x8,[x8, #0x30]
7101e35d40  add x2,sp,#0x8
7101e35d44  blr x8
7101e35d48  tbz w0,#0x0,0x7101e35d60
7101e35d4c  mov w1,#0x1030
7101e35d50  mov w0,#0x10
7101e35d54  bl 0x710392e290
7101e35d58  mov x20,x0
7101e35d5c  cbnz x0,0x7101e35d64
7101e35d60  mov x20,xzr
7101e35d64  mov w27,#0xffffffff
7101e35d68  add x0,x20,#0x28
7101e35d6c  mov w2,#0x10c
7101e35d70  mov w1,wzr
7101e35d74  str wzr,[x20, #0x134]
7101e35d78  str x20,[x20]
7101e35d7c  stp xzr,xzr,[x20, #0x18]
7101e35d80  str x27,[x20, #0x138]
7101e35d84  str w27,[x20, #0x140]
7101e35d88  strb wzr,[x20, #0x144]
7101e35d8c  stp xzr,xzr,[x20, #0x8]
7101e35d90  bl 0x71039c02a0
7101e35d94  mov w0,#0x10
7101e35d98  mov w1,#0x8
7101e35d9c  str x21,[x20, #0x148]
7101e35da0  bl 0x710392e290
7101e35da4  mov x23,x0
7101e35da8  cbnz x0,0x7101e35df4
7101e35dac  adrp x8,0x7105332000
7101e35db0  ldr x0,[x8, #0xf00]
7101e35db4  cbz x0,0x7101e35df0
7101e35db8  mov w8,#0x8
7101e35dbc  str wzr,[sp, #0x50]
7101e35dc0  add x1,sp,#0x50
7101e35dc4  str x8,[sp, #0x8]
7101e35dc8  ldr x8,[x0]
7101e35dcc  ldr x8,[x8, #0x30]
7101e35dd0  add x2,sp,#0x8
7101e35dd4  blr x8
7101e35dd8  tbz w0,#0x0,0x7101e35df0
7101e35ddc  mov w0,#0x10
7101e35de0  mov w1,#0x8
7101e35de4  bl 0x710392e290
7101e35de8  mov x23,x0
7101e35dec  cbnz x0,0x7101e35df4
7101e35df0  mov x23,xzr
7101e35df4  mov x0,x23
7101e35df8  bl 0x7103773200
7101e35dfc  mov w0,#0x10
7101e35e00  mov w1,#0x8
7101e35e04  str x23,[x20, #0x150]
7101e35e08  bl 0x710392e290
7101e35e0c  mov x23,x0
7101e35e10  cbnz x0,0x7101e35e5c
7101e35e14  adrp x8,0x7105332000
7101e35e18  ldr x0,[x8, #0xf00]
7101e35e1c  cbz x0,0x7101e35e58
7101e35e20  mov w8,#0x8
7101e35e24  str wzr,[sp, #0x50]
7101e35e28  add x1,sp,#0x50
7101e35e2c  str x8,[sp, #0x8]
7101e35e30  ldr x8,[x0]
7101e35e34  ldr x8,[x8, #0x30]
7101e35e38  add x2,sp,#0x8
7101e35e3c  blr x8
7101e35e40  tbz w0,#0x0,0x7101e35e58
7101e35e44  mov w0,#0x10
7101e35e48  mov w1,#0x8
7101e35e4c  bl 0x710392e290
7101e35e50  mov x23,x0
7101e35e54  cbnz x0,0x7101e35e5c
7101e35e58  mov x23,xzr
7101e35e5c  mov x0,x23
7101e35e60  bl 0x7103773200
7101e35e64  mov w0,#0x10
7101e35e68  mov w1,#0x8
7101e35e6c  str x23,[x20, #0x158]
7101e35e70  bl 0x710392e290
7101e35e74  mov x23,x0
7101e35e78  cbnz x0,0x7101e35ec4
7101e35e7c  adrp x8,0x7105332000
7101e35e80  ldr x0,[x8, #0xf00]
7101e35e84  cbz x0,0x7101e35ec0
7101e35e88  mov w8,#0x8
7101e35e8c  str wzr,[sp, #0x50]
7101e35e90  add x1,sp,#0x50
7101e35e94  str x8,[sp, #0x8]
7101e35e98  ldr x8,[x0]
7101e35e9c  ldr x8,[x8, #0x30]
7101e35ea0  add x2,sp,#0x8
7101e35ea4  blr x8
7101e35ea8  tbz w0,#0x0,0x7101e35ec0
7101e35eac  mov w0,#0x10
7101e35eb0  mov w1,#0x8
7101e35eb4  bl 0x710392e290
7101e35eb8  mov x23,x0
7101e35ebc  cbnz x0,0x7101e35ec4
7101e35ec0  mov x23,xzr
7101e35ec4  mov x0,x23
7101e35ec8  bl 0x7103773200
7101e35ecc  mov w0,#0x10
7101e35ed0  mov w1,#0x8
7101e35ed4  str x23,[x20, #0x160]
7101e35ed8  mov w24,#0x8
7101e35edc  bl 0x710392e290
7101e35ee0  mov x23,x0
7101e35ee4  cbnz x0,0x7101e35f30
7101e35ee8  adrp x8,0x7105332000
7101e35eec  ldr x0,[x8, #0xf00]
7101e35ef0  cbz x0,0x7101e35f2c
7101e35ef4  mov w8,#0x8
7101e35ef8  str wzr,[sp, #0x50]
7101e35efc  add x1,sp,#0x50
7101e35f00  str x8,[sp, #0x8]
7101e35f04  ldr x8,[x0]
7101e35f08  ldr x8,[x8, #0x30]
7101e35f0c  add x2,sp,#0x8
7101e35f10  blr x8
7101e35f14  tbz w0,#0x0,0x7101e35f2c
7101e35f18  mov w0,#0x10
7101e35f1c  mov w1,#0x8
7101e35f20  bl 0x710392e290
7101e35f24  mov x23,x0
7101e35f28  cbnz x0,0x7101e35f30
7101e35f2c  mov x23,xzr
7101e35f30  mov x0,x23
7101e35f34  bl 0x7103773200
7101e35f38  adrp x8,0x71050b1000
7101e35f3c  add x8,x8,#0x818
7101e35f40  add x0,x20,#0x1dc
7101e35f44  stp xzr,x8,[x20, #0x178]
7101e35f48  add x8,x20,#0x1cd
7101e35f4c  mov w2,#0x2f0
7101e35f50  mov w1,wzr
7101e35f54  str xzr,[x20, #0x188]
7101e35f58  stp x23,xzr,[x20, #0x168]
7101e35f5c  str xzr,[x8]
7101e35f60  str w27,[x20, #0x1d8]
7101e35f64  stp xzr,xzr,[x20, #0x1c0]
7101e35f68  stp xzr,xzr,[x20, #0x1b0]
7101e35f6c  stp xzr,xzr,[x20, #0x1a0]
7101e35f70  stp xzr,xzr,[x20, #0x190]
7101e35f74  bl 0x71039c02a0
7101e35f78  adrp x8,0x7105325000
7101e35f7c  add x8,x8,#0xdc0
7101e35f80  ldr x9,[x8]
7101e35f84  str x9,[x8, #0x8]
7101e35f88  adrp x9,0x7105325000
7101e35f8c  add x9,x9,#0xe38
7101e35f90  ldr x10,[x9]
7101e35f94  str x10,[x9, #0x8]
7101e35f98  ldr x10,[x8, #0x18]
7101e35f9c  str x10,[x8, #0x20]
7101e35fa0  ldr x10,[x9, #0x18]
7101e35fa4  str x10,[x9, #0x20]
7101e35fa8  ldr x10,[x8, #0x30]
7101e35fac  str x10,[x8, #0x38]
7101e35fb0  ldr x10,[x9, #0x30]
7101e35fb4  str x10,[x9, #0x38]
7101e35fb8  ldr x10,[x8, #0x48]
7101e35fbc  str x10,[x8, #0x50]
7101e35fc0  ldr x10,[x9, #0x48]
7101e35fc4  str x10,[x9, #0x50]
7101e35fc8  ldr x10,[x8, #0x60]
7101e35fcc  str x10,[x8, #0x68]
7101e35fd0  ldr x8,[x9, #0x60]
7101e35fd4  add x0,x20,#0x4d0
7101e35fd8  str x8,[x9, #0x68]
7101e35fdc  bl 0x71032cc410
7101e35fe0  adrp x8,0x71050b1000
7101e35fe4  add x8,x8,#0x930
7101e35fe8  str x8,[x20, #0x508]
7101e35fec  adrp x8,0x71050b0000
7101e35ff0  add x8,x8,#0xba0
7101e35ff4  str x8,[x20, #0x540]
7101e35ff8  adrp x8,0x71050b0000
7101e35ffc  add x8,x8,#0xf08
7101e36000  str x8,[x20, #0x580]
7101e36004  mov w8,#0xa
7101e36008  str w8,[x20, #0x5b8]
7101e3600c  str w8,[x20, #0x628]
7101e36010  str w8,[x20, #0x6a0]
7101e36014  mov w9,#0x64
7101e36018  mov w23,#0x2
7101e3601c  str w8,[x20, #0x710]
7101e36020  orr w8,wzr,#0x3f800000
7101e36024  add x0,x20,#0x828
7101e36028  str w8,[x20, #0x7d0]
7101e3602c  mov x8,#0xff0000000000
7101e36030  movk x8,#0x52ff, LSL #48
7101e36034  mov w2,#0x308
7101e36038  mov w1,wzr
7101e3603c  str xzr,[x20, #0x500]
7101e36040  str xzr,[x20, #0x4f8]
7101e36044  str xzr,[x20, #0x538]
7101e36048  str xzr,[x20, #0x530]
7101e3604c  str xzr,[x20, #0x528]
7101e36050  str xzr,[x20, #0x520]
7101e36054  str xzr,[x20, #0x518]
7101e36058  str xzr,[x20, #0x510]
7101e3605c  strb wzr,[x20, #0x560]
7101e36060  str xzr,[x20, #0x558]
7101e36064  str xzr,[x20, #0x550]
7101e36068  str xzr,[x20, #0x548]
7101e3606c  str xzr,[x20, #0x570]
7101e36070  str xzr,[x20, #0x568]
7101e36074  str xzr,[x20, #0x5b0]
7101e36078  str xzr,[x20, #0x5a8]
7101e3607c  str xzr,[x20, #0x5a0]
7101e36080  str xzr,[x20, #0x598]
7101e36084  str xzr,[x20, #0x590]
7101e36088  str xzr,[x20, #0x588]
7101e3608c  str xzr,[x20, #0x5e8]
7101e36090  str xzr,[x20, #0x5e0]
7101e36094  str xzr,[x20, #0x5d8]
7101e36098  str xzr,[x20, #0x5d0]
7101e3609c  str xzr,[x20, #0x5c8]
7101e360a0  str xzr,[x20, #0x5c0]
7101e360a4  str w9,[x20, #0x5f0]
7101e360a8  str xzr,[x20, #0x620]
7101e360ac  str xzr,[x20, #0x618]
7101e360b0  str xzr,[x20, #0x610]
7101e360b4  str xzr,[x20, #0x608]
7101e360b8  str xzr,[x20, #0x600]
7101e360bc  str xzr,[x20, #0x5f8]
7101e360c0  str xzr,[x20, #0x658]
7101e360c4  str xzr,[x20, #0x650]
7101e360c8  str xzr,[x20, #0x648]
7101e360cc  str xzr,[x20, #0x640]
7101e360d0  str xzr,[x20, #0x638]
7101e360d4  str xzr,[x20, #0x630]
7101e360d8  str w9,[x20, #0x660]
7101e360dc  str w23,[x20, #0x668]
7101e360e0  str xzr,[x20, #0x698]
7101e360e4  str xzr,[x20, #0x690]
7101e360e8  str xzr,[x20, #0x688]
7101e360ec  str xzr,[x20, #0x680]
7101e360f0  str xzr,[x20, #0x678]
7101e360f4  str xzr,[x20, #0x670]
7101e360f8  str xzr,[x20, #0x6d0]
7101e360fc  str xzr,[x20, #0x6c8]
7101e36100  str xzr,[x20, #0x6c0]
7101e36104  str xzr,[x20, #0x6b8]
7101e36108  str xzr,[x20, #0x6b0]
7101e3610c  str xzr,[x20, #0x6a8]
7101e36110  str w9,[x20, #0x6d8]
7101e36114  str xzr,[x20, #0x708]
7101e36118  str xzr,[x20, #0x700]
7101e3611c  str xzr,[x20, #0x6f8]
7101e36120  str xzr,[x20, #0x6f0]
7101e36124  str xzr,[x20, #0x6e8]
7101e36128  str xzr,[x20, #0x6e0]
7101e3612c  str xzr,[x20, #0x740]
7101e36130  str xzr,[x20, #0x738]
7101e36134  str xzr,[x20, #0x730]
7101e36138  str xzr,[x20, #0x728]
7101e3613c  str xzr,[x20, #0x720]
7101e36140  str xzr,[x20, #0x718]
7101e36144  str w9,[x20, #0x748]
7101e36148  str w24,[x20, #0x750]
7101e3614c  str x21,[x20, #0x758]
7101e36150  str xzr,[x20, #0x7c8]
7101e36154  str xzr,[x20, #0x7c0]
7101e36158  str xzr,[x20, #0x7b8]
7101e3615c  str xzr,[x20, #0x7b0]
7101e36160  str xzr,[x20, #0x7a8]
7101e36164  str xzr,[x20, #0x7a0]
7101e36168  str xzr,[x20, #0x798]
7101e3616c  str xzr,[x20, #0x790]
7101e36170  str xzr,[x20, #0x788]
7101e36174  str xzr,[x20, #0x780]
7101e36178  str xzr,[x20, #0x778]
7101e3617c  str xzr,[x20, #0x770]
7101e36180  str xzr,[x20, #0x768]
7101e36184  str xzr,[x20, #0x760]
7101e36188  str x8,[x20, #0x7d8]
7101e3618c  str wzr,[x20, #0x7e0]
7101e36190  str xzr,[x20, #0x7e8]
7101e36194  str xzr,[x20, #0x810]
7101e36198  strb wzr,[x20, #0x820]
7101e3619c  str w27,[x20, #0x824]
7101e361a0  bl 0x71039c02a0
7101e361a4  add x0,x20,#0xba0
7101e361a8  str w27,[x20, #0xb30]
7101e361ac  str xzr,[x20, #0xb78]
7101e361b0  str xzr,[x20, #0xb70]
7101e361b4  str xzr,[x20, #0xb68]
7101e361b8  str xzr,[x20, #0xb60]
7101e361bc  str wzr,[x20, #0xb58]
7101e361c0  str xzr,[x20, #0xb50]
7101e361c4  str xzr,[x20, #0xb48]
7101e361c8  str xzr,[x20, #0xb40]
7101e361cc  str xzr,[x20, #0xb38]
7101e361d0  str x27,[x20, #0xb80]
7101e361d4  str w27,[x20, #0xb88]
7101e361d8  strh wzr,[x20, #0xb96]
7101e361dc  strb wzr,[x20, #0xb98]
7101e361e0  bl 0x7103776290
7101e361e4  orr x8,xzr,#0x100000000
7101e361e8  str x8,[x20, #0xbd8]
7101e361ec  add x8,x20,#0xbe6
7101e361f0  strb wzr,[x20, #0xbb4]
7101e361f4  str wzr,[x20, #0xbb0]
7101e361f8  add x9,x20,#0xc24
7101e361fc  str xzr,[x20, #0xbd0]
7101e36200  orr w14,wzr,#0xffff
7101e36204  add x10,x20,#0xf32
7101e36208  str xzr,[x20, #0xbc8]
7101e3620c  add x11,x20,#0xf2a
7101e36210  add x13,x20,#0xf72
7101e36214  str xzr,[x20, #0xbc0]
7101e36218  add x12,x20,#0xf6a
7101e3621c  add x15,x20,#0xfb2
7101e36220  str xzr,[x20, #0xbb8]
7101e36224  add x16,x20,#0xff2
7101e36228  adrp x17,0x7101e19000
7101e3622c  add x17,x17,#0x480
7101e36230  str xzr,[x8]
7101e36234  mov x8,#-0x1
7101e36238  str xzr,[x20, #0xbe0]
7101e3623c  str wzr,[x20, #0xc00]
7101e36240  str xzr,[x20, #0xbf8]
7101e36244  str xzr,[x20, #0xbf0]
7101e36248  str x8,[x9]
7101e3624c  add x9,x20,#0xc64
7101e36250  str w27,[x20, #0xc2c]
7101e36254  str x8,[x9]
7101e36258  add x9,x20,#0xca4
7101e3625c  str w27,[x20, #0xc6c]
7101e36260  str x8,[x9]
7101e36264  add x9,x20,#0xce4
7101e36268  str w27,[x20, #0xcac]
7101e3626c  str x8,[x9]
7101e36270  mov w9,#0x6500
7101e36274  movk w9,#0x87, LSL #16
7101e36278  str w9,[x20, #0xd94]
7101e3627c  adrp x9,0x7104f73000
7101e36280  add x9,x9,#0xd30
7101e36284  str x9,[x20, #0xd80]
7101e36288  mov w9,#0x306
7101e3628c  movk w9,#0x504, LSL #16
7101e36290  str w9,[x20, #0xe70]
7101e36294  mov w9,#0x1
7101e36298  strb w9,[x20, #0xf00]
7101e3629c  add x9,x20,#0xf02
7101e362a0  str w27,[x20, #0xcec]
7101e362a4  strb wzr,[x20, #0xd24]
7101e362a8  str xzr,[x20, #0xd30]
7101e362ac  str xzr,[x20, #0xd28]
7101e362b0  str xzr,[x20, #0xd68]
7101e362b4  str xzr,[x20, #0xd60]
7101e362b8  str xzr,[x20, #0xd58]
7101e362bc  str xzr,[x20, #0xd50]
7101e362c0  str xzr,[x20, #0xd48]
7101e362c4  str xzr,[x20, #0xd40]
7101e362c8  strh w14,[x20, #0xd70]
7101e362cc  strh w14,[x20, #0xd72]
7101e362d0  str xzr,[x20, #0xd88]
7101e362d4  str wzr,[x20, #0xd90]
7101e362d8  strb wzr,[x20, #0xd98]
7101e362dc  str wzr,[x20, #0xd78]
7101e362e0  str w27,[x20, #0xda0]
7101e362e4  str w27,[x20, #0xda4]
7101e362e8  str wzr,[x20, #0xdd8]
7101e362ec  str xzr,[x20, #0xdd0]
7101e362f0  str xzr,[x20, #0xdc8]
7101e362f4  str xzr,[x20, #0xdc0]
7101e362f8  str xzr,[x20, #0xe68]
7101e362fc  str xzr,[x20, #0xe60]
7101e36300  str xzr,[x20, #0xe58]
7101e36304  str xzr,[x20, #0xe50]
7101e36308  str xzr,[x20, #0xe48]
7101e3630c  str xzr,[x20, #0xe40]
7101e36310  str xzr,[x20, #0xe38]
7101e36314  str xzr,[x20, #0xe30]
7101e36318  str xzr,[x20, #0xe28]
7101e3631c  str xzr,[x20, #0xe20]
7101e36320  str xzr,[x20, #0xe18]
7101e36324  str xzr,[x20, #0xe10]
7101e36328  str xzr,[x20, #0xe08]
7101e3632c  str xzr,[x20, #0xe00]
7101e36330  str xzr,[x20, #0xdf8]
7101e36334  str xzr,[x20, #0xdf0]
7101e36338  str xzr,[x20, #0xde8]
7101e3633c  str xzr,[x20, #0xde0]
7101e36340  str wzr,[x20, #0xdb8]
7101e36344  str xzr,[x20, #0xdb0]
7101e36348  str xzr,[x20, #0xda8]
7101e3634c  strh w23,[x20, #0xe74]
7101e36350  str xzr,[x20, #0xe00]
7101e36354  str xzr,[x20, #0xe18]
7101e36358  str xzr,[x20, #0xe30]
7101e3635c  str xzr,[x20, #0xe48]
7101e36360  str xzr,[x20, #0xe60]
7101e36364  strb wzr,[x20, #0xef0]
7101e36368  str xzr,[x20, #0xee8]
7101e3636c  str xzr,[x20, #0xee0]
7101e36370  str xzr,[x20, #0xed8]
7101e36374  str xzr,[x20, #0xed0]
7101e36378  str xzr,[x20, #0xec8]
7101e3637c  str xzr,[x20, #0xec0]
7101e36380  str xzr,[x20, #0xeb8]
7101e36384  str xzr,[x20, #0xeb0]
7101e36388  str xzr,[x20, #0xea8]
7101e3638c  str xzr,[x20, #0xea0]
7101e36390  str xzr,[x20, #0xe98]
7101e36394  str xzr,[x20, #0xe90]
7101e36398  str xzr,[x20, #0xe88]
7101e3639c  str xzr,[x20, #0xe80]
7101e363a0  str xzr,[x20, #0xe78]
7101e363a4  str x27,[x20, #0xef8]
7101e363a8  str xzr,[x20, #0xf10]
7101e363ac  str xzr,[x9]
7101e363b0  mov x9,#-0xfefe00000001
7101e363b4  movk x9,#0x101, LSL #48
7101e363b8  str x9,[x20, #0xf20]
7101e363bc  mov w9,#0x101
7101e363c0  strb wzr,[x20, #0xf0c]
7101e363c4  strh wzr,[x20, #0xf0a]
7101e363c8  str x8,[x20, #0xf18]
7101e363cc  strh w9,[x20, #0xf28]
7101e363d0  str w27,[x10]
7101e363d4  orr w10,wzr,#0x1010101
7101e363d8  str x8,[x11]
7101e363dc  str xzr,[x20, #0xf48]
7101e363e0  str xzr,[x20, #0xf40]
7101e363e4  str xzr,[x20, #0xf38]
7101e363e8  str wzr,[x20, #0xf54]
7101e363ec  str w27,[x20, #0xf60]
7101e363f0  str x8,[x20, #0xf58]
7101e363f4  strh w9,[x20, #0xf68]
7101e363f8  str w10,[x20, #0xf64]
7101e363fc  str w27,[x13]
7101e36400  add x13,x20,#0xfaa
7101e36404  str x8,[x12]
7101e36408  str xzr,[x20, #0xf88]
7101e3640c  str xzr,[x20, #0xf80]
7101e36410  str xzr,[x20, #0xf78]
7101e36414  str wzr,[x20, #0xf94]
7101e36418  str w27,[x20, #0xfa0]
7101e3641c  str x8,[x20, #0xf98]
7101e36420  strh w9,[x20, #0xfa8]
7101e36424  str w10,[x20, #0xfa4]
7101e36428  str w27,[x15]
7101e3642c  add x15,x20,#0xfea
7101e36430  str x8,[x13]
7101e36434  str xzr,[x20, #0xfc8]
7101e36438  str xzr,[x20, #0xfc0]
7101e3643c  str xzr,[x20, #0xfb8]
7101e36440  str wzr,[x20, #0xfd4]
7101e36444  str w27,[x20, #0xfe0]
7101e36448  str x8,[x20, #0xfd8]
7101e3644c  strh w9,[x20, #0xfe8]
7101e36450  str w10,[x20, #0xfe4]
7101e36454  str w27,[x16]
7101e36458  mov w16,#0x1018
7101e3645c  add x16,x20,x16
7101e36460  str x8,[x15]
7101e36464  str xzr,[x20, #0x1008]
7101e36468  str xzr,[x20, #0x1000]
7101e3646c  str xzr,[x20, #0xff8]
7101e36470  str wzr,[x20, #0x1014]
7101e36474  strb wzr,[x16]
7101e36478  strh w14,[x20, #0x101c]
7101e3647c  strh w14,[x20, #0x101e]
7101e36480  adrp x14,0x7101e18000
7101e36484  add x14,x14,#0x540
7101e36488  str xzr,[x20, #0x1020]
7101e3648c  str wzr,[x20, #0xc20]
7101e36490  stp x14,xzr,[x20, #0x28]
7101e36494  adrp x14,0x7101e18000
7101e36498  add x14,x14,#0x550
7101e3649c  stp x14,xzr,[x20, #0x38]
7101e364a0  adrp x14,0x7101e19000
7101e364a4  add x14,x14,#0x3e0
7101e364a8  stp x14,xzr,[x20, #0x48]
7101e364ac  adrp x14,0x7101e1b000
7101e364b0  add x14,x14,#0x760
7101e364b4  stp x14,xzr,[x20, #0x68]
7101e364b8  adrp x14,0x7101e1b000
7101e364bc  add x14,x14,#0x7f0
7101e364c0  stp x14,xzr,[x20, #0x78]
7101e364c4  adrp x14,0x7101e1f000
7101e364c8  add x14,x14,#0x0
7101e364cc  stp x14,xzr,[x20, #0xa8]
7101e364d0  adrp x14,0x7101e1f000
7101e364d4  add x14,x14,#0x60
7101e364d8  stp x14,xzr,[x20, #0xb8]
7101e364dc  mov w14,#0x4
7101e364e0  str w14,[x20, #0xc04]
7101e364e4  str w14,[x20, #0xc18]
7101e364e8  ldrsw x14,[x20, #0x134]
7101e364ec  cmp w14,#0x13
7101e364f0  stp x17,xzr,[x20, #0x58]
7101e364f4  adrp x17,0x7101e1e000
7101e364f8  add x17,x17,#0xfc0
7101e364fc  stp x17,xzr,[x20, #0x88]
7101e36500  adrp x17,0x7101e1f000
7101e36504  add x17,x17,#0x180
7101e36508  stp x17,xzr,[x20, #0xd8]
7101e3650c  orr w17,wzr,#0x6
7101e36510  str w17,[x20, #0xc08]
7101e36514  str w17,[x20, #0xc0c]
7101e36518  str w17,[x20, #0xc10]
7101e3651c  str w17,[x20, #0xc14]
7101e36520  str w17,[x20, #0xc1c]
7101e36524  b.cs 0x7101e369bc
7101e36528  add x14,x20,x14, LSL #0x2
7101e3652c  str wzr,[x14, #0xe8]
7101e36530  add x14,x20,#0xb8c
7101e36534  str xzr,[x14]
7101e36538  add x14,x20,#0xf18
7101e3653c  add x17,x20,#0xf24
7101e36540  strh wzr,[x20, #0xb94]
7101e36544  str w27,[x14, #0x8]
7101e36548  add x18,x20,#0xf38
7101e3654c  str x8,[x14]
7101e36550  add x14,x20,#0xf58
7101e36554  add x0,x20,#0xf64
7101e36558  strh w9,[x17, #0x4]
7101e3655c  add x1,x20,#0xf78
7101e36560  add x2,x20,#0xf98
7101e36564  str w10,[x17]
7101e36568  add x17,x20,#0xfa4
7101e3656c  add x3,x20,#0xfb8
7101e36570  str w27,[x11, #0x8]
7101e36574  add x4,x20,#0xfd8
7101e36578  add x5,x20,#0xfe4
7101e3657c  str x8,[x11]
7101e36580  add x11,x20,#0xff8
7101e36584  add x25,x20,#0x150
7101e36588  stp xzr,xzr,[x18, #0x8]
7101e3658c  add x26,x20,#0x158
7101e36590  add x23,x20,#0x160
7101e36594  add x24,x20,#0x168
7101e36598  str xzr,[x18]
7101e3659c  str wzr,[x20, #0xf54]
7101e365a0  str w27,[x14, #0x8]
7101e365a4  str x8,[x14]
7101e365a8  strh w9,[x0, #0x4]
7101e365ac  str w10,[x0]
7101e365b0  mov x0,x25
7101e365b4  str w27,[x12, #0x8]
7101e365b8  str x8,[x12]
7101e365bc  str xzr,[x1]
7101e365c0  stp xzr,xzr,[x1, #0x8]
7101e365c4  str wzr,[x20, #0xf94]
7101e365c8  str w27,[x2, #0x8]
7101e365cc  str x8,[x2]
7101e365d0  adrp x2,0x7104545000
7101e365d4  add x2,x2,#0x9f8
7101e365d8  strh w9,[x17, #0x4]
7101e365dc  str w10,[x17]
7101e365e0  str w27,[x13, #0x8]
7101e365e4  str x8,[x13]
7101e365e8  str xzr,[x3]
7101e365ec  stp xzr,xzr,[x3, #0x8]
7101e365f0  mov w3,#0x1
7101e365f4  str wzr,[x20, #0xfd4]
7101e365f8  str w27,[x4, #0x8]
7101e365fc  str x8,[x4]
7101e36600  strh w9,[x5, #0x4]
7101e36604  str w10,[x5]
7101e36608  str w27,[x15, #0x8]
7101e3660c  str x8,[x15]
7101e36610  str xzr,[x11]
7101e36614  stp xzr,xzr,[x11, #0x8]
7101e36618  str wzr,[x20, #0x1014]
7101e3661c  strb wzr,[x16]
7101e36620  strb wzr,[x20, #0xf01]
7101e36624  str x20,[x22, #0x80]
7101e36628  ldr x1,[x21]
7101e3662c  bl 0x71032cbf30
7101e36630  ldr x1,[x21]
7101e36634  adrp x2,0x7104545000
7101e36638  add x2,x2,#0xa00
7101e3663c  mov w3,#0x1
7101e36640  mov x0,x26
7101e36644  bl 0x71032cbf30
7101e36648  ldr x1,[x21]
7101e3664c  adrp x2,0x7104545000
7101e36650  add x2,x2,#0xa08
7101e36654  mov w3,#0x1
7101e36658  mov x0,x23
7101e3665c  bl 0x71032cbf30
7101e36660  ldr x1,[x21]
7101e36664  adrp x2,0x7104545000
7101e36668  add x2,x2,#0xa10
7101e3666c  mov w3,#0x1
7101e36670  mov x0,x24
7101e36674  bl 0x71032cbf30
7101e36678  adrp x8,0x710532f000
7101e3667c  ldr x22,[x8, #0x8b8]
7101e36680  adrp x8,0x710532f000
7101e36684  add x8,x8,#0x4d8
7101e36688  ldr x21,[x21]
7101e3668c  ldarb w8,[x8]
7101e36690  tbz w8,#0x0,0x7101e36970
7101e36694  ldr x10,[x21, #0x28]!
7101e36698  cbz x10,0x7101e366e0
7101e3669c  mov x9,#0xc8e6
7101e366a0  movk x9,#0x3608, LSL #16
7101e366a4  movk x9,#0x10, LSL #32
7101e366a8  mov x8,x21
7101e366ac  ldr x11,[x10, #0x20]
7101e366b0  and x11,x11,#0xfffffffffe
7101e366b4  cmp x11,x9
7101e366b8  cset w11,cc
7101e366bc  csel x8,x8,x10,cc
7101e366c0  ldr x10,[x10, w11, UXTW #0x3]
7101e366c4  cbnz x10,0x7101e366ac
7101e366c8  cmp x8,x21
7101e366cc  b.eq 0x7101e366e0
7101e366d0  ldr x10,[x8, #0x20]
7101e366d4  and x10,x10,#0xffffffffff
7101e366d8  cmp x10,x9
7101e366dc  b.ls 0x7101e36968
7101e366e0  adrp x21,0x710532f000
7101e366e4  add x21,x21,#0x4a4
7101e366e8  ldr w8,[x21]
7101e366ec  orr w9,wzr,#0xffffff
7101e366f0  cmp w8,w9
7101e366f4  b.eq 0x7101e36728
7101e366f8  ldr x0,[x22, #0x8]
7101e366fc  adrp x1,0x7104545000
7101e36700  add x1,x1,#0x9f0
7101e36704  mov w2,#0x9
7101e36708  bl 0x710330a8f0
7101e3670c  cbz w0,0x7101e36728
7101e36710  adrp x8,0x7105334000
7101e36714  ldr x8,[x8, #0x920]
7101e36718  mov w1,w0
7101e3671c  ldr x0,[x8]
7101e36720  mov x2,x21
7101e36724  bl 0x7103563a20
7101e36728  ldr x8,[x20, #0x160]
7101e3672c  ldr x8,[x8]
7101e36730  ldr x0,[x8]
7101e36734  mov w1,wzr
7101e36738  bl 0x71037760f0
7101e3673c  ldr x10,[x20, #0xde0]
7101e36740  adrp x9,0x710433a000
7101e36744  add x9,x9,#0x6a9
7101e36748  adrp x11,0x710424f000
7101e3674c  add x11,x11,#0xac6
7101e36750  tst w19,#0x1
7101e36754  mov x8,xzr
7101e36758  str wzr,[x20, #0xb58]
7101e3675c  str x10,[x20, #0xde8]
7101e36760  csel x9,x11,x9,ne
7101e36764  add x10,sp,#0x8
7101e36768  str xzr,[sp, #0x8]
7101e3676c  b 0x7101e36778
7101e36770  add x8,x8,#0x2
7101e36774  strb w11,[x12, #0x9]
7101e36778  add x11,x9,x8
7101e3677c  ldrb w13,[x11]
7101e36780  cbz w13,0x7101e367ac
7101e36784  add w14,w8,#0x1
7101e36788  add x12,x10,x8
7101e3678c  cmp w14,#0x3f
7101e36790  strb w13,[x12, #0x8]
7101e36794  b.cs 0x7101e367a8
7101e36798  ldrb w11,[x11, #0x1]
7101e3679c  cbnz w11,0x7101e36770
7101e367a0  add x8,x8,#0x1
7101e367a4  b 0x7101e367ac
7101e367a8  add w8,w8,#0x1
7101e367ac  add x11,sp,#0x8
7101e367b0  add x19,x11,#0x8
7101e367b4  mov w9,#0x9dc5
7101e367b8  movk w9,#0x811c, LSL #16
7101e367bc  strb wzr,[x19, w8, UXTW ]
7101e367c0  ldrb w10,[sp, #0x10]
7101e367c4  str w8,[sp, #0xc]
7101e367c8  cbz w10,0x7101e367e8
7101e367cc  add x8,x11,#0x9
7101e367d0  mov w11,#0x89
7101e367d4  mul w9,w9,w11
7101e367d8  and w10,w10,#0xff
7101e367dc  eor w9,w9,w10
7101e367e0  ldrb w10,[x8], #0x1
7101e367e4  cbnz w10,0x7101e367d4
7101e367e8  str w9,[sp, #0x8]
7101e367ec  ldr x8,[x25]
7101e367f0  ldr x8,[x8]
7101e367f4  add x1,x8,#0x8
7101e367f8  add x0,sp,#0x50
7101e367fc  bl 0x7103776390
7101e36800  ldr x0,[sp, #0x58]
7101e36804  adrp x1,0x710428f000
7101e36808  add x1,x1,#0xf7d
7101e3680c  bl 0x7103778760
7101e36810  ldr x0,[sp, #0x58]
7101e36814  fmov s0,0x3f800000
7101e36818  mov x1,x19
7101e3681c  bl 0x7103778300
7101e36820  ldr x20,[sp, #0x58]
7101e36824  adrp x21,0x710523d000
7101e36828  add x21,x21,#0x988
7101e3682c  stp x21,xzr,[sp, #0x50]
7101e36830  cbz x20,0x7101e36854
7101e36834  ldr x0,[x20, #0x18]
7101e36838  adrp x8,0x710523d000
7101e3683c  add x8,x8,#0x9a8
7101e36840  stp x8,xzr,[x20, #0x10]
7101e36844  cbz x0,0x7101e3684c
7101e36848  bl 0x710392eb40
7101e3684c  mov x0,x20
7101e36850  bl 0x710392eb40
7101e36854  ldr x8,[x24]
7101e36858  ldr x8,[x8]
7101e3685c  add x1,x8,#0x8
7101e36860  add x0,sp,#0x50
7101e36864  bl 0x7103776390
7101e36868  ldr x0,[sp, #0x58]
7101e3686c  adrp x1,0x710428f000
7101e36870  add x1,x1,#0xf7d
7101e36874  bl 0x7103778760
7101e36878  ldr x0,[sp, #0x58]
7101e3687c  fmov s0,0x3f800000
7101e36880  mov x1,x19
7101e36884  bl 0x7103778300
7101e36888  ldr x20,[sp, #0x58]
7101e3688c  stp x21,xzr,[sp, #0x50]
7101e36890  cbz x20,0x7101e368b4
7101e36894  ldr x0,[x20, #0x18]
7101e36898  adrp x8,0x710523d000
7101e3689c  add x8,x8,#0x9a8
7101e368a0  stp x8,xzr,[x20, #0x10]
7101e368a4  cbz x0,0x7101e368ac
7101e368a8  bl 0x710392eb40
7101e368ac  mov x0,x20
7101e368b0  bl 0x710392eb40
7101e368b4  ldr x8,[x23]
7101e368b8  ldr x8,[x8]
7101e368bc  add x1,x8,#0x8
7101e368c0  add x0,sp,#0x50
7101e368c4  bl 0x7103776390
7101e368c8  ldr x0,[sp, #0x58]
7101e368cc  adrp x1,0x710428f000
7101e368d0  add x1,x1,#0xf7d
7101e368d4  bl 0x7103778760
7101e368d8  ldr x0,[sp, #0x58]
7101e368dc  fmov s0,0x3f800000
7101e368e0  mov x1,x19
7101e368e4  bl 0x7103778300
7101e368e8  ldr x19,[sp, #0x58]
7101e368ec  stp x21,xzr,[sp, #0x50]
7101e368f0  cbz x19,0x7101e36914
7101e368f4  ldr x0,[x19, #0x18]
7101e368f8  adrp x8,0x710523d000
7101e368fc  add x8,x8,#0x9a8
7101e36900  stp x8,xzr,[x19, #0x10]
7101e36904  cbz x0,0x7101e3690c
7101e36908  bl 0x710392eb40
7101e3690c  mov x0,x19
7101e36910  bl 0x710392eb40
7101e36914  adrp x8,0x710532f000
7101e36918  ldr x8,[x8, #0x840]
7101e3691c  ldr x8,[x8, #0x8]
7101e36920  ldr x8,[x8, #0xb8]
7101e36924  ldr x8,[x8, #0x80]
7101e36928  mov w9,#0x1210
7101e3692c  strb wzr,[x8, x9, LSL ]
7101e36930  mov w9,#0x1250
7101e36934  add x0,x8,x9
7101e36938  mov w2,#0x1000
7101e3693c  mov w1,wzr
7101e36940  str xzr,[x8, #0x1208]
7101e36944  bl 0x71039c02a0
7101e36948  ldp x29,x30,[sp, #0xb0]
7101e3694c  ldr x27,[sp, #0x60]
7101e36950  ldp x20,x19,[sp, #0xa0]
7101e36954  ldp x22,x21,[sp, #0x90]
7101e36958  ldp x24,x23,[sp, #0x80]
7101e3695c  ldp x26,x25,[sp, #0x70]
7101e36960  add sp,sp,#0xc0
7101e36964  ret
7101e36968  add x21,x8,#0x28
7101e3696c  b 0x7101e366e8
7101e36970  adrp x0,0x710532f000
7101e36974  add x0,x0,#0x4d8
7101e36978  bl 0x71039c06b0
7101e3697c  cbz w0,0x7101e36694
7101e36980  adrp x1,0x710532f000
7101e36984  add x1,x1,#0x4a4
7101e36988  orr w8,wzr,#0xffffff
7101e3698c  adrp x0,0x710353e000
7101e36990  add x0,x0,#0x700
7101e36994  str w8,[x1]
7101e36998  adrp x2,0x7104f17000
7101e3699c  add x2,x2,#0x0
7101e369a0  bl 0x71000001c0
7101e369a4  adrp x0,0x710532f000
7101e369a8  add x0,x0,#0x4d8
7101e369ac  bl 0x71039c06c0
7101e369b0  ldr x10,[x21, #0x28]!
7101e369b4  cbnz x10,0x7101e3669c
7101e369b8  b 0x7101e366e0
7101e369bc  bl 0x71039c2650
