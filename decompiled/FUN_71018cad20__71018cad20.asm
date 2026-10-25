// addr:      71018cad20
// offset:    0x18cad20
// name:      FUN_71018cad20
// mangled:   
// size:      3944

71018cad20  stp x28,x27,[sp, #-0x60]!
71018cad24  stp x26,x25,[sp, #0x10]
71018cad28  stp x24,x23,[sp, #0x20]
71018cad2c  stp x22,x21,[sp, #0x30]
71018cad30  stp x20,x19,[sp, #0x40]
71018cad34  stp x29,x30,[sp, #0x50]
71018cad38  add x29,sp,#0x50
71018cad3c  sub sp,sp,#0x2, LSL #12
71018cad40  sub sp,sp,#0x200
71018cad44  adrp x8,0x7105314000
71018cad48  add x8,x8,#0x4d8
71018cad4c  ldarb w8,[x8]
71018cad50  mov x22,x0
71018cad54  add x19,sp,#0x68
71018cad58  tbz w8,#0x0,0x71018cbc3c
71018cad5c  adrp x8,0x7105305000
71018cad60  ldr w20,[x8, #0xf0]
71018cad64  mov w8,#0x100
71018cad68  strh w8,[sp, #0x70]
71018cad6c  orr x8,xzr,#0x100000000
71018cad70  add x0,x19,#0xec
71018cad74  mov w2,#0x1000
71018cad78  mov w1,wzr
71018cad7c  str xzr,[sp, #0x68]
71018cad80  stur x8,[sp, #0x74]
71018cad84  strb wzr,[sp, #0x84]
71018cad88  stur xzr,[sp, #0x7c]
71018cad8c  strb wzr,[sp, #0xcc]
71018cad90  stur xzr,[x19, #0x5c]
71018cad94  strb wzr,[sp, #0x114]
71018cad98  stur xzr,[x19, #0xa4]
71018cad9c  bl 0x71039c02a0
71018cada0  mov w8,#0x10ec
71018cada4  mov w21,#0x1
71018cada8  mov w9,#0x10f4
71018cadac  strb w21,[x19, x8, LSL ]
71018cadb0  str wzr,[sp, #0x1158]
71018cadb4  strb w21,[x19, x9, LSL ]
71018cadb8  mov w8,#0x1100
71018cadbc  mov w9,#0x1190
71018cadc0  strb wzr,[x19, x8, LSL ]
71018cadc4  mov w8,#0x20
71018cadc8  add x0,x19,x9
71018cadcc  mov w2,#0x1000
71018cadd0  mov w1,wzr
71018cadd4  str xzr,[sp, #0x1160]
71018cadd8  str w8,[sp, #0x11a8]
71018caddc  bl 0x71039c02a0
71018cade0  mov w8,#0x1149
71018cade4  str xzr,[x19, x8, LSL #0x0]
71018cade8  mov w8,#0x1144
71018cadec  add x0,sp,#0x68
71018cadf0  mov w1,w20
71018cadf4  str xzr,[x19, x8, LSL #0x0]
71018cadf8  bl 0x7101af73b0
71018cadfc  mov x9,#0x6e6d
71018cae00  movk x9,#0x5f75, LSL #16
71018cae04  mov x10,#0x616c
71018cae08  movk x10,#0x676e, LSL #16
71018cae0c  mov x8,#0x1200000000
71018cae10  strb w21,[sp, #0x70]
71018cae14  movk x9,#0x706f, LSL #32
71018cae18  movk x9,#0x5f74, LSL #48
71018cae1c  strb wzr,[sp, #0x3a]
71018cae20  movk x10,#0x745f, LSL #32
71018cae24  movk x10,#0x7469, LSL #48
71018cae28  str x10,[sp, #0x30]
71018cae2c  mov w11,#0x656c
71018cae30  stp x8,x9,[sp, #0x20]
71018cae34  mov w8,#0x9dc5
71018cae38  movk w8,#0x811c, LSL #16
71018cae3c  mov w9,#0x6d
71018cae40  mov w12,#0x9
71018cae44  strh w11,[sp, #0x38]
71018cae48  mov w10,#0x89
71018cae4c  add x11,sp,#0x20
71018cae50  mul w8,w8,w10
71018cae54  and w9,w9,#0xff
71018cae58  eor w8,w8,w9
71018cae5c  ldrb w9,[x11, x12, LSL ]
71018cae60  add x12,x12,#0x1
71018cae64  cbnz w9,0x71018cae50
71018cae68  add x0,sp,#0x68
71018cae6c  add x1,sp,#0x20
71018cae70  add x2,sp,#0x8
71018cae74  str w8,[sp, #0x20]
71018cae78  stp xzr,xzr,[sp, #0x10]
71018cae7c  str xzr,[sp, #0x8]
71018cae80  bl 0x7101af7560
71018cae84  ldr x0,[sp, #0x8]
71018cae88  cbz x0,0x71018cae94
71018cae8c  str x0,[sp, #0x10]
71018cae90  bl 0x710392eb40
71018cae94  adrp x8,0x710532f000
71018cae98  ldr x8,[x8, #0x7c8]
71018cae9c  ldr x8,[x8, #0x8]
71018caea0  ldrb w8,[x8, #0x69]
71018caea4  ldr x0,[x22, #0xf8]
71018caea8  add x1,sp,#0x68
71018caeac  mov w2,#0x1
71018caeb0  cbz w8,0x71018caebc
71018caeb4  mov w3,#0x2
71018caeb8  b 0x71018caec0
71018caebc  mov w3,#0x1
71018caec0  bl 0x7101af8570
71018caec4  ldr x8,[x22, #0x100]
71018caec8  and w9,w20,#0x7f000000
71018caecc  orr w10,wzr,#0xfe000000
71018caed0  add w9,w9,w10
71018caed4  lsr w9,w9,#0x18
71018caed8  cmp w9,#0x6
71018caedc  b.hi 0x71018caef4
71018caee0  adrp x10,0x7104544000
71018caee4  add x10,x10,#0x710
71018caee8  sxtb x9,w9
71018caeec  ldr w1,[x10, x9, LSL #0x2]
71018caef0  b 0x71018caef8
71018caef4  mov w1,#0xffffffff
71018caef8  ldr x0,[x8, #0x80]
71018caefc  bl 0x7101af2070
71018caf00  bl 0x7103741ad0
71018caf04  cmp w0,#0xd
71018caf08  b.hi 0x71018caf1c
71018caf0c  adrp x8,0x7104742000
71018caf10  add x8,x8,#0xe40
71018caf14  ldr w8,[x8, w0, SXTW #0x2]
71018caf18  b 0x71018caf20
71018caf1c  mov w8,#0x1
71018caf20  str w8,[x22, #0x10c]
71018caf24  adrp x9,0x710523d000
71018caf28  ldrsw x9,[x9, #0xc]
71018caf2c  cmp w9,#0xd
71018caf30  b.hi 0x71018caf44
71018caf34  adrp x10,0x7104742000
71018caf38  add x10,x10,#0xe80
71018caf3c  ldr w9,[x10, x9, LSL #0x2]
71018caf40  b 0x71018caf48
71018caf44  mov w9,#0x1
71018caf48  ldr x10,[x22, #0xf0]
71018caf4c  str w9,[x22, #0x110]
71018caf50  str wzr,[x22, #0x108]
71018caf54  ldr x25,[x10, #0x80]
71018caf58  str x22,[sp]
71018caf5c  strb wzr,[x10, #0x70]
71018caf60  stp w8,w9,[x25, #0x50]
71018caf64  mov x20,x25
71018caf68  mov x27,x25
71018caf6c  ldr x21,[x20, #0x58]!
71018caf70  str x21,[x25, #0x60]
71018caf74  ldr x8,[x27, #0x68]!
71018caf78  add x26,x25,#0x60
71018caf7c  subs x8,x8,x21
71018caf80  b.ls 0x71018caf98
71018caf84  str wzr,[x21]
71018caf88  ldr x8,[x26]
71018caf8c  add x8,x8,#0x4
71018caf90  str x8,[x26]
71018caf94  b 0x71018cb048
71018caf98  asr x9,x8,#0x2
71018caf9c  orr x10,xzr,#0x1ffffffffffffffe
71018cafa0  cmp x9,x10
71018cafa4  b.hi 0x71018cafc0
71018cafa8  asr x9,x8,#0x1
71018cafac  cmp x8,#0x0
71018cafb0  csinc x19,x9,xzr,ne
71018cafb4  lsr x8,x19,#0x3e
71018cafb8  cbz x8,0x71018cafc4
71018cafbc  b 0x71018cbc84
71018cafc0  orr x19,xzr,#0x3fffffffffffffff
71018cafc4  lsl x8,x19,#0x2
71018cafc8  cmp x8,#0x0
71018cafcc  csinc x22,x8,xzr,ne
71018cafd0  mov w0,#0x10
71018cafd4  mov x1,x22
71018cafd8  bl 0x710392e290
71018cafdc  cbnz x0,0x71018cb020
71018cafe0  adrp x8,0x7105332000
71018cafe4  ldr x0,[x8, #0xf00]
71018cafe8  cbz x0,0x71018cb01c
71018cafec  str wzr,[sp, #0x8]
71018caff0  str x22,[sp, #0x20]
71018caff4  ldr x8,[x0]
71018caff8  ldr x8,[x8, #0x30]
71018caffc  add x1,sp,#0x8
71018cb000  add x2,sp,#0x20
71018cb004  blr x8
71018cb008  tbz w0,#0x0,0x71018cb01c
71018cb00c  mov w0,#0x10
71018cb010  mov x1,x22
71018cb014  bl 0x710392e290
71018cb018  cbnz x0,0x71018cb020
71018cb01c  mov x0,xzr
71018cb020  mov x8,x0
71018cb024  add x9,x0,x19, LSL #0x2
71018cb028  str wzr,[x8], #0x4
71018cb02c  str x0,[x20]
71018cb030  str x8,[x26]
71018cb034  str x9,[x27]
71018cb038  cbz x21,0x71018cb048
71018cb03c  mov x0,x21
71018cb040  bl 0x710392eb40
71018cb044  ldr x8,[x26]
71018cb048  ldr x9,[x27]
71018cb04c  cmp x8,x9
71018cb050  b.cs 0x71018cb06c
71018cb054  mov w9,#0x1
71018cb058  str w9,[x8]
71018cb05c  ldr x8,[x26]
71018cb060  add x24,x8,#0x4
71018cb064  str x24,[x26]
71018cb068  b 0x71018cb160
71018cb06c  ldr x21,[x20]
71018cb070  sub x22,x8,x21
71018cb074  asr x28,x22,#0x2
71018cb078  add x8,x28,#0x1
71018cb07c  lsr x10,x8,#0x3e
71018cb080  cbnz x10,0x71018cbc7c
71018cb084  sub x9,x9,x21
71018cb088  asr x10,x9,#0x2
71018cb08c  orr x11,xzr,#0x1ffffffffffffffe
71018cb090  cmp x10,x11
71018cb094  b.hi 0x71018cb0b4
71018cb098  asr x9,x9,#0x1
71018cb09c  cmp x9,x8
71018cb0a0  csel x19,x8,x9,cc
71018cb0a4  cbz x19,0x71018cb118
71018cb0a8  lsr x8,x19,#0x3e
71018cb0ac  cbz x8,0x71018cb0b8
71018cb0b0  b 0x71018cbc84
71018cb0b4  orr x19,xzr,#0x3fffffffffffffff
71018cb0b8  lsl x8,x19,#0x2
71018cb0bc  cmp x8,#0x0
71018cb0c0  csinc x24,x8,xzr,ne
71018cb0c4  mov w0,#0x10
71018cb0c8  mov x1,x24
71018cb0cc  bl 0x710392e290
71018cb0d0  mov x23,x0
71018cb0d4  cbnz x0,0x71018cb11c
71018cb0d8  adrp x8,0x7105332000
71018cb0dc  ldr x0,[x8, #0xf00]
71018cb0e0  cbz x0,0x71018cb118
71018cb0e4  str wzr,[sp, #0x8]
71018cb0e8  str x24,[sp, #0x20]
71018cb0ec  ldr x8,[x0]
71018cb0f0  ldr x8,[x8, #0x30]
71018cb0f4  add x1,sp,#0x8
71018cb0f8  add x2,sp,#0x20
71018cb0fc  blr x8
71018cb100  tbz w0,#0x0,0x71018cb118
71018cb104  mov w0,#0x10
71018cb108  mov x1,x24
71018cb10c  bl 0x710392e290
71018cb110  mov x23,x0
71018cb114  cbnz x0,0x71018cb11c
71018cb118  mov x23,xzr
71018cb11c  add x24,x23,x28, LSL #0x2
71018cb120  mov w8,#0x1
71018cb124  add x19,x23,x19, LSL #0x2
71018cb128  str w8,[x24], #0x4
71018cb12c  cmp x22,#0x1
71018cb130  b.lt 0x71018cb144
71018cb134  mov x0,x23
71018cb138  mov x1,x21
71018cb13c  mov x2,x22
71018cb140  bl 0x71039c00e0
71018cb144  str x23,[x20]
71018cb148  str x24,[x26]
71018cb14c  str x19,[x27]
71018cb150  cbz x21,0x71018cb160
71018cb154  mov x0,x21
71018cb158  bl 0x710392eb40
71018cb15c  ldr x24,[x26]
71018cb160  ldr x8,[x27]
71018cb164  cmp x24,x8
71018cb168  b.cs 0x71018cb184
71018cb16c  mov w8,#0x2
71018cb170  str w8,[x24]
71018cb174  ldr x8,[x26]
71018cb178  add x24,x8,#0x4
71018cb17c  str x24,[x26]
71018cb180  b 0x71018cb278
71018cb184  ldr x21,[x20]
71018cb188  sub x22,x24,x21
71018cb18c  asr x28,x22,#0x2
71018cb190  add x9,x28,#0x1
71018cb194  lsr x10,x9,#0x3e
71018cb198  cbnz x10,0x71018cbc7c
71018cb19c  sub x8,x8,x21
71018cb1a0  asr x10,x8,#0x2
71018cb1a4  orr x11,xzr,#0x1ffffffffffffffe
71018cb1a8  cmp x10,x11
71018cb1ac  b.hi 0x71018cb1cc
71018cb1b0  asr x8,x8,#0x1
71018cb1b4  cmp x8,x9
71018cb1b8  csel x19,x9,x8,cc
71018cb1bc  cbz x19,0x71018cb230
71018cb1c0  lsr x8,x19,#0x3e
71018cb1c4  cbz x8,0x71018cb1d0
71018cb1c8  b 0x71018cbc84
71018cb1cc  orr x19,xzr,#0x3fffffffffffffff
71018cb1d0  lsl x8,x19,#0x2
71018cb1d4  cmp x8,#0x0
71018cb1d8  csinc x24,x8,xzr,ne
71018cb1dc  mov w0,#0x10
71018cb1e0  mov x1,x24
71018cb1e4  bl 0x710392e290
71018cb1e8  mov x23,x0
71018cb1ec  cbnz x0,0x71018cb234
71018cb1f0  adrp x8,0x7105332000
71018cb1f4  ldr x0,[x8, #0xf00]
71018cb1f8  cbz x0,0x71018cb230
71018cb1fc  str wzr,[sp, #0x8]
71018cb200  str x24,[sp, #0x20]
71018cb204  ldr x8,[x0]
71018cb208  ldr x8,[x8, #0x30]
71018cb20c  add x1,sp,#0x8
71018cb210  add x2,sp,#0x20
71018cb214  blr x8
71018cb218  tbz w0,#0x0,0x71018cb230
71018cb21c  mov w0,#0x10
71018cb220  mov x1,x24
71018cb224  bl 0x710392e290
71018cb228  mov x23,x0
71018cb22c  cbnz x0,0x71018cb234
71018cb230  mov x23,xzr
71018cb234  add x24,x23,x28, LSL #0x2
71018cb238  mov w8,#0x2
71018cb23c  add x19,x23,x19, LSL #0x2
71018cb240  str w8,[x24], #0x4
71018cb244  cmp x22,#0x1
71018cb248  b.lt 0x71018cb25c
71018cb24c  mov x0,x23
71018cb250  mov x1,x21
71018cb254  mov x2,x22
71018cb258  bl 0x71039c00e0
71018cb25c  str x23,[x20]
71018cb260  str x24,[x26]
71018cb264  str x19,[x27]
71018cb268  cbz x21,0x71018cb278
71018cb26c  mov x0,x21
71018cb270  bl 0x710392eb40
71018cb274  ldr x24,[x26]
71018cb278  ldr x8,[x27]
71018cb27c  cmp x24,x8
71018cb280  b.cs 0x71018cb29c
71018cb284  orr w8,wzr,#0x3
71018cb288  str w8,[x24]
71018cb28c  ldr x8,[x26]
71018cb290  add x24,x8,#0x4
71018cb294  str x24,[x26]
71018cb298  b 0x71018cb390
71018cb29c  ldr x21,[x20]
71018cb2a0  sub x22,x24,x21
71018cb2a4  asr x28,x22,#0x2
71018cb2a8  add x9,x28,#0x1
71018cb2ac  lsr x10,x9,#0x3e
71018cb2b0  cbnz x10,0x71018cbc7c
71018cb2b4  sub x8,x8,x21
71018cb2b8  asr x10,x8,#0x2
71018cb2bc  orr x11,xzr,#0x1ffffffffffffffe
71018cb2c0  cmp x10,x11
71018cb2c4  b.hi 0x71018cb2e4
71018cb2c8  asr x8,x8,#0x1
71018cb2cc  cmp x8,x9
71018cb2d0  csel x19,x9,x8,cc
71018cb2d4  cbz x19,0x71018cb348
71018cb2d8  lsr x8,x19,#0x3e
71018cb2dc  cbz x8,0x71018cb2e8
71018cb2e0  b 0x71018cbc84
71018cb2e4  orr x19,xzr,#0x3fffffffffffffff
71018cb2e8  lsl x8,x19,#0x2
71018cb2ec  cmp x8,#0x0
71018cb2f0  csinc x24,x8,xzr,ne
71018cb2f4  mov w0,#0x10
71018cb2f8  mov x1,x24
71018cb2fc  bl 0x710392e290
71018cb300  mov x23,x0
71018cb304  cbnz x0,0x71018cb34c
71018cb308  adrp x8,0x7105332000
71018cb30c  ldr x0,[x8, #0xf00]
71018cb310  cbz x0,0x71018cb348
71018cb314  str wzr,[sp, #0x8]
71018cb318  str x24,[sp, #0x20]
71018cb31c  ldr x8,[x0]
71018cb320  ldr x8,[x8, #0x30]
71018cb324  add x1,sp,#0x8
71018cb328  add x2,sp,#0x20
71018cb32c  blr x8
71018cb330  tbz w0,#0x0,0x71018cb348
71018cb334  mov w0,#0x10
71018cb338  mov x1,x24
71018cb33c  bl 0x710392e290
71018cb340  mov x23,x0
71018cb344  cbnz x0,0x71018cb34c
71018cb348  mov x23,xzr
71018cb34c  add x24,x23,x28, LSL #0x2
71018cb350  orr w8,wzr,#0x3
71018cb354  add x19,x23,x19, LSL #0x2
71018cb358  str w8,[x24], #0x4
71018cb35c  cmp x22,#0x1
71018cb360  b.lt 0x71018cb374
71018cb364  mov x0,x23
71018cb368  mov x1,x21
71018cb36c  mov x2,x22
71018cb370  bl 0x71039c00e0
71018cb374  str x23,[x20]
71018cb378  str x24,[x26]
71018cb37c  str x19,[x27]
71018cb380  cbz x21,0x71018cb390
71018cb384  mov x0,x21
71018cb388  bl 0x710392eb40
71018cb38c  ldr x24,[x26]
71018cb390  ldr x8,[x27]
71018cb394  cmp x24,x8
71018cb398  b.cs 0x71018cb3b4
71018cb39c  mov w8,#0x4
71018cb3a0  str w8,[x24]
71018cb3a4  ldr x8,[x26]
71018cb3a8  add x24,x8,#0x4
71018cb3ac  str x24,[x26]
71018cb3b0  b 0x71018cb4a8
71018cb3b4  ldr x21,[x20]
71018cb3b8  sub x22,x24,x21
71018cb3bc  asr x28,x22,#0x2
71018cb3c0  add x9,x28,#0x1
71018cb3c4  lsr x10,x9,#0x3e
71018cb3c8  cbnz x10,0x71018cbc7c
71018cb3cc  sub x8,x8,x21
71018cb3d0  asr x10,x8,#0x2
71018cb3d4  orr x11,xzr,#0x1ffffffffffffffe
71018cb3d8  cmp x10,x11
71018cb3dc  b.hi 0x71018cb3fc
71018cb3e0  asr x8,x8,#0x1
71018cb3e4  cmp x8,x9
71018cb3e8  csel x19,x9,x8,cc
71018cb3ec  cbz x19,0x71018cb460
71018cb3f0  lsr x8,x19,#0x3e
71018cb3f4  cbz x8,0x71018cb400
71018cb3f8  b 0x71018cbc84
71018cb3fc  orr x19,xzr,#0x3fffffffffffffff
71018cb400  lsl x8,x19,#0x2
71018cb404  cmp x8,#0x0
71018cb408  csinc x24,x8,xzr,ne
71018cb40c  mov w0,#0x10
71018cb410  mov x1,x24
71018cb414  bl 0x710392e290
71018cb418  mov x23,x0
71018cb41c  cbnz x0,0x71018cb464
71018cb420  adrp x8,0x7105332000
71018cb424  ldr x0,[x8, #0xf00]
71018cb428  cbz x0,0x71018cb460
71018cb42c  str wzr,[sp, #0x8]
71018cb430  str x24,[sp, #0x20]
71018cb434  ldr x8,[x0]
71018cb438  ldr x8,[x8, #0x30]
71018cb43c  add x1,sp,#0x8
71018cb440  add x2,sp,#0x20
71018cb444  blr x8
71018cb448  tbz w0,#0x0,0x71018cb460
71018cb44c  mov w0,#0x10
71018cb450  mov x1,x24
71018cb454  bl 0x710392e290
71018cb458  mov x23,x0
71018cb45c  cbnz x0,0x71018cb464
71018cb460  mov x23,xzr
71018cb464  add x24,x23,x28, LSL #0x2
71018cb468  mov w8,#0x4
71018cb46c  add x19,x23,x19, LSL #0x2
71018cb470  str w8,[x24], #0x4
71018cb474  cmp x22,#0x1
71018cb478  b.lt 0x71018cb48c
71018cb47c  mov x0,x23
71018cb480  mov x1,x21
71018cb484  mov x2,x22
71018cb488  bl 0x71039c00e0
71018cb48c  str x23,[x20]
71018cb490  str x24,[x26]
71018cb494  str x19,[x27]
71018cb498  cbz x21,0x71018cb4a8
71018cb49c  mov x0,x21
71018cb4a0  bl 0x710392eb40
71018cb4a4  ldr x24,[x26]
71018cb4a8  ldr x8,[x27]
71018cb4ac  cmp x24,x8
71018cb4b0  b.cs 0x71018cb4cc
71018cb4b4  mov w8,#0x5
71018cb4b8  str w8,[x24]
71018cb4bc  ldr x8,[x26]
71018cb4c0  add x24,x8,#0x4
71018cb4c4  str x24,[x26]
71018cb4c8  b 0x71018cb5c0
71018cb4cc  ldr x21,[x20]
71018cb4d0  sub x22,x24,x21
71018cb4d4  asr x28,x22,#0x2
71018cb4d8  add x9,x28,#0x1
71018cb4dc  lsr x10,x9,#0x3e
71018cb4e0  cbnz x10,0x71018cbc7c
71018cb4e4  sub x8,x8,x21
71018cb4e8  asr x10,x8,#0x2
71018cb4ec  orr x11,xzr,#0x1ffffffffffffffe
71018cb4f0  cmp x10,x11
71018cb4f4  b.hi 0x71018cb514
71018cb4f8  asr x8,x8,#0x1
71018cb4fc  cmp x8,x9
71018cb500  csel x19,x9,x8,cc
71018cb504  cbz x19,0x71018cb578
71018cb508  lsr x8,x19,#0x3e
71018cb50c  cbz x8,0x71018cb518
71018cb510  b 0x71018cbc84
71018cb514  orr x19,xzr,#0x3fffffffffffffff
71018cb518  lsl x8,x19,#0x2
71018cb51c  cmp x8,#0x0
71018cb520  csinc x24,x8,xzr,ne
71018cb524  mov w0,#0x10
71018cb528  mov x1,x24
71018cb52c  bl 0x710392e290
71018cb530  mov x23,x0
71018cb534  cbnz x0,0x71018cb57c
71018cb538  adrp x8,0x7105332000
71018cb53c  ldr x0,[x8, #0xf00]
71018cb540  cbz x0,0x71018cb578
71018cb544  str wzr,[sp, #0x8]
71018cb548  str x24,[sp, #0x20]
71018cb54c  ldr x8,[x0]
71018cb550  ldr x8,[x8, #0x30]
71018cb554  add x1,sp,#0x8
71018cb558  add x2,sp,#0x20
71018cb55c  blr x8
71018cb560  tbz w0,#0x0,0x71018cb578
71018cb564  mov w0,#0x10
71018cb568  mov x1,x24
71018cb56c  bl 0x710392e290
71018cb570  mov x23,x0
71018cb574  cbnz x0,0x71018cb57c
71018cb578  mov x23,xzr
71018cb57c  add x24,x23,x28, LSL #0x2
71018cb580  mov w8,#0x5
71018cb584  add x19,x23,x19, LSL #0x2
71018cb588  str w8,[x24], #0x4
71018cb58c  cmp x22,#0x1
71018cb590  b.lt 0x71018cb5a4
71018cb594  mov x0,x23
71018cb598  mov x1,x21
71018cb59c  mov x2,x22
71018cb5a0  bl 0x71039c00e0
71018cb5a4  str x23,[x20]
71018cb5a8  str x24,[x26]
71018cb5ac  str x19,[x27]
71018cb5b0  cbz x21,0x71018cb5c0
71018cb5b4  mov x0,x21
71018cb5b8  bl 0x710392eb40
71018cb5bc  ldr x24,[x26]
71018cb5c0  ldr x8,[x27]
71018cb5c4  cmp x24,x8
71018cb5c8  b.cs 0x71018cb5e4
71018cb5cc  orr w8,wzr,#0x6
71018cb5d0  str w8,[x24]
71018cb5d4  ldr x8,[x26]
71018cb5d8  add x24,x8,#0x4
71018cb5dc  str x24,[x26]
71018cb5e0  b 0x71018cb6d8
71018cb5e4  ldr x21,[x20]
71018cb5e8  sub x22,x24,x21
71018cb5ec  asr x28,x22,#0x2
71018cb5f0  add x9,x28,#0x1
71018cb5f4  lsr x10,x9,#0x3e
71018cb5f8  cbnz x10,0x71018cbc7c
71018cb5fc  sub x8,x8,x21
71018cb600  asr x10,x8,#0x2
71018cb604  orr x11,xzr,#0x1ffffffffffffffe
71018cb608  cmp x10,x11
71018cb60c  b.hi 0x71018cb62c
71018cb610  asr x8,x8,#0x1
71018cb614  cmp x8,x9
71018cb618  csel x19,x9,x8,cc
71018cb61c  cbz x19,0x71018cb690
71018cb620  lsr x8,x19,#0x3e
71018cb624  cbz x8,0x71018cb630
71018cb628  b 0x71018cbc84
71018cb62c  orr x19,xzr,#0x3fffffffffffffff
71018cb630  lsl x8,x19,#0x2
71018cb634  cmp x8,#0x0
71018cb638  csinc x24,x8,xzr,ne
71018cb63c  mov w0,#0x10
71018cb640  mov x1,x24
71018cb644  bl 0x710392e290
71018cb648  mov x23,x0
71018cb64c  cbnz x0,0x71018cb694
71018cb650  adrp x8,0x7105332000
71018cb654  ldr x0,[x8, #0xf00]
71018cb658  cbz x0,0x71018cb690
71018cb65c  str wzr,[sp, #0x8]
71018cb660  str x24,[sp, #0x20]
71018cb664  ldr x8,[x0]
71018cb668  ldr x8,[x8, #0x30]
71018cb66c  add x1,sp,#0x8
71018cb670  add x2,sp,#0x20
71018cb674  blr x8
71018cb678  tbz w0,#0x0,0x71018cb690
71018cb67c  mov w0,#0x10
71018cb680  mov x1,x24
71018cb684  bl 0x710392e290
71018cb688  mov x23,x0
71018cb68c  cbnz x0,0x71018cb694
71018cb690  mov x23,xzr
71018cb694  add x24,x23,x28, LSL #0x2
71018cb698  orr w8,wzr,#0x6
71018cb69c  add x19,x23,x19, LSL #0x2
71018cb6a0  str w8,[x24], #0x4
71018cb6a4  cmp x22,#0x1
71018cb6a8  b.lt 0x71018cb6bc
71018cb6ac  mov x0,x23
71018cb6b0  mov x1,x21
71018cb6b4  mov x2,x22
71018cb6b8  bl 0x71039c00e0
71018cb6bc  str x23,[x20]
71018cb6c0  str x24,[x26]
71018cb6c4  str x19,[x27]
71018cb6c8  cbz x21,0x71018cb6d8
71018cb6cc  mov x0,x21
71018cb6d0  bl 0x710392eb40
71018cb6d4  ldr x24,[x26]
71018cb6d8  ldr x8,[x27]
71018cb6dc  cmp x24,x8
71018cb6e0  b.cs 0x71018cb6fc
71018cb6e4  orr w8,wzr,#0x7
71018cb6e8  str w8,[x24]
71018cb6ec  ldr x8,[x26]
71018cb6f0  add x24,x8,#0x4
71018cb6f4  str x24,[x26]
71018cb6f8  b 0x71018cb7f0
71018cb6fc  ldr x21,[x20]
71018cb700  sub x22,x24,x21
71018cb704  asr x28,x22,#0x2
71018cb708  add x9,x28,#0x1
71018cb70c  lsr x10,x9,#0x3e
71018cb710  cbnz x10,0x71018cbc7c
71018cb714  sub x8,x8,x21
71018cb718  asr x10,x8,#0x2
71018cb71c  orr x11,xzr,#0x1ffffffffffffffe
71018cb720  cmp x10,x11
71018cb724  b.hi 0x71018cb744
71018cb728  asr x8,x8,#0x1
71018cb72c  cmp x8,x9
71018cb730  csel x19,x9,x8,cc
71018cb734  cbz x19,0x71018cb7a8
71018cb738  lsr x8,x19,#0x3e
71018cb73c  cbz x8,0x71018cb748
71018cb740  b 0x71018cbc84
71018cb744  orr x19,xzr,#0x3fffffffffffffff
71018cb748  lsl x8,x19,#0x2
71018cb74c  cmp x8,#0x0
71018cb750  csinc x24,x8,xzr,ne
71018cb754  mov w0,#0x10
71018cb758  mov x1,x24
71018cb75c  bl 0x710392e290
71018cb760  mov x23,x0
71018cb764  cbnz x0,0x71018cb7ac
71018cb768  adrp x8,0x7105332000
71018cb76c  ldr x0,[x8, #0xf00]
71018cb770  cbz x0,0x71018cb7a8
71018cb774  str wzr,[sp, #0x8]
71018cb778  str x24,[sp, #0x20]
71018cb77c  ldr x8,[x0]
71018cb780  ldr x8,[x8, #0x30]
71018cb784  add x1,sp,#0x8
71018cb788  add x2,sp,#0x20
71018cb78c  blr x8
71018cb790  tbz w0,#0x0,0x71018cb7a8
71018cb794  mov w0,#0x10
71018cb798  mov x1,x24
71018cb79c  bl 0x710392e290
71018cb7a0  mov x23,x0
71018cb7a4  cbnz x0,0x71018cb7ac
71018cb7a8  mov x23,xzr
71018cb7ac  add x24,x23,x28, LSL #0x2
71018cb7b0  orr w8,wzr,#0x7
71018cb7b4  add x19,x23,x19, LSL #0x2
71018cb7b8  str w8,[x24], #0x4
71018cb7bc  cmp x22,#0x1
71018cb7c0  b.lt 0x71018cb7d4
71018cb7c4  mov x0,x23
71018cb7c8  mov x1,x21
71018cb7cc  mov x2,x22
71018cb7d0  bl 0x71039c00e0
71018cb7d4  str x23,[x20]
71018cb7d8  str x24,[x26]
71018cb7dc  str x19,[x27]
71018cb7e0  cbz x21,0x71018cb7f0
71018cb7e4  mov x0,x21
71018cb7e8  bl 0x710392eb40
71018cb7ec  ldr x24,[x26]
71018cb7f0  ldr x8,[x27]
71018cb7f4  cmp x24,x8
71018cb7f8  b.cs 0x71018cb814
71018cb7fc  mov w8,#0x8
71018cb800  str w8,[x24]
71018cb804  ldr x8,[x26]
71018cb808  add x24,x8,#0x4
71018cb80c  str x24,[x26]
71018cb810  b 0x71018cb908
71018cb814  ldr x21,[x20]
71018cb818  sub x22,x24,x21
71018cb81c  asr x28,x22,#0x2
71018cb820  add x9,x28,#0x1
71018cb824  lsr x10,x9,#0x3e
71018cb828  cbnz x10,0x71018cbc7c
71018cb82c  sub x8,x8,x21
71018cb830  asr x10,x8,#0x2
71018cb834  orr x11,xzr,#0x1ffffffffffffffe
71018cb838  cmp x10,x11
71018cb83c  b.hi 0x71018cb85c
71018cb840  asr x8,x8,#0x1
71018cb844  cmp x8,x9
71018cb848  csel x19,x9,x8,cc
71018cb84c  cbz x19,0x71018cb8c0
71018cb850  lsr x8,x19,#0x3e
71018cb854  cbz x8,0x71018cb860
71018cb858  b 0x71018cbc84
71018cb85c  orr x19,xzr,#0x3fffffffffffffff
71018cb860  lsl x8,x19,#0x2
71018cb864  cmp x8,#0x0
71018cb868  csinc x24,x8,xzr,ne
71018cb86c  mov w0,#0x10
71018cb870  mov x1,x24
71018cb874  bl 0x710392e290
71018cb878  mov x23,x0
71018cb87c  cbnz x0,0x71018cb8c4
71018cb880  adrp x8,0x7105332000
71018cb884  ldr x0,[x8, #0xf00]
71018cb888  cbz x0,0x71018cb8c0
71018cb88c  str wzr,[sp, #0x8]
71018cb890  str x24,[sp, #0x20]
71018cb894  ldr x8,[x0]
71018cb898  ldr x8,[x8, #0x30]
71018cb89c  add x1,sp,#0x8
71018cb8a0  add x2,sp,#0x20
71018cb8a4  blr x8
71018cb8a8  tbz w0,#0x0,0x71018cb8c0
71018cb8ac  mov w0,#0x10
71018cb8b0  mov x1,x24
71018cb8b4  bl 0x710392e290
71018cb8b8  mov x23,x0
71018cb8bc  cbnz x0,0x71018cb8c4
71018cb8c0  mov x23,xzr
71018cb8c4  add x24,x23,x28, LSL #0x2
71018cb8c8  mov w8,#0x8
71018cb8cc  add x19,x23,x19, LSL #0x2
71018cb8d0  str w8,[x24], #0x4
71018cb8d4  cmp x22,#0x1
71018cb8d8  b.lt 0x71018cb8ec
71018cb8dc  mov x0,x23
71018cb8e0  mov x1,x21
71018cb8e4  mov x2,x22
71018cb8e8  bl 0x71039c00e0
71018cb8ec  str x23,[x20]
71018cb8f0  str x24,[x26]
71018cb8f4  str x19,[x27]
71018cb8f8  cbz x21,0x71018cb908
71018cb8fc  mov x0,x21
71018cb900  bl 0x710392eb40
71018cb904  ldr x24,[x26]
71018cb908  ldr x8,[x27]
71018cb90c  cmp x24,x8
71018cb910  b.cs 0x71018cb92c
71018cb914  mov w8,#0x9
71018cb918  str w8,[x24]
71018cb91c  ldr x8,[x26]
71018cb920  add x23,x8,#0x4
71018cb924  str x23,[x26]
71018cb928  b 0x71018cba20
71018cb92c  ldr x21,[x20]
71018cb930  sub x22,x24,x21
71018cb934  asr x28,x22,#0x2
71018cb938  add x9,x28,#0x1
71018cb93c  lsr x10,x9,#0x3e
71018cb940  cbnz x10,0x71018cbc7c
71018cb944  sub x8,x8,x21
71018cb948  asr x10,x8,#0x2
71018cb94c  orr x11,xzr,#0x1ffffffffffffffe
71018cb950  cmp x10,x11
71018cb954  b.hi 0x71018cb974
71018cb958  asr x8,x8,#0x1
71018cb95c  cmp x8,x9
71018cb960  csel x19,x9,x8,cc
71018cb964  cbz x19,0x71018cb9d8
71018cb968  lsr x8,x19,#0x3e
71018cb96c  cbz x8,0x71018cb978
71018cb970  b 0x71018cbc84
71018cb974  orr x19,xzr,#0x3fffffffffffffff
71018cb978  lsl x8,x19,#0x2
71018cb97c  cmp x8,#0x0
71018cb980  csinc x23,x8,xzr,ne
71018cb984  mov w0,#0x10
71018cb988  mov x1,x23
71018cb98c  bl 0x710392e290
71018cb990  mov x24,x0
71018cb994  cbnz x0,0x71018cb9dc
71018cb998  adrp x8,0x7105332000
71018cb99c  ldr x0,[x8, #0xf00]
71018cb9a0  cbz x0,0x71018cb9d8
71018cb9a4  str wzr,[sp, #0x8]
71018cb9a8  str x23,[sp, #0x20]
71018cb9ac  ldr x8,[x0]
71018cb9b0  ldr x8,[x8, #0x30]
71018cb9b4  add x1,sp,#0x8
71018cb9b8  add x2,sp,#0x20
71018cb9bc  blr x8
71018cb9c0  tbz w0,#0x0,0x71018cb9d8
71018cb9c4  mov w0,#0x10
71018cb9c8  mov x1,x23
71018cb9cc  bl 0x710392e290
71018cb9d0  mov x24,x0
71018cb9d4  cbnz x0,0x71018cb9dc
71018cb9d8  mov x24,xzr
71018cb9dc  add x23,x24,x28, LSL #0x2
71018cb9e0  mov w8,#0x9
71018cb9e4  add x19,x24,x19, LSL #0x2
71018cb9e8  str w8,[x23], #0x4
71018cb9ec  cmp x22,#0x1
71018cb9f0  b.lt 0x71018cba04
71018cb9f4  mov x0,x24
71018cb9f8  mov x1,x21
71018cb9fc  mov x2,x22
71018cba00  bl 0x71039c00e0
71018cba04  str x24,[x20]
71018cba08  str x23,[x26]
71018cba0c  str x19,[x27]
71018cba10  cbz x21,0x71018cba20
71018cba14  mov x0,x21
71018cba18  bl 0x710392eb40
71018cba1c  ldr x23,[x26]
71018cba20  ldr x8,[x27]
71018cba24  cmp x23,x8
71018cba28  b.cs 0x71018cba4c
71018cba2c  mov w8,#0xa
71018cba30  str w8,[x23]
71018cba34  ldr x8,[x26]
71018cba38  add x8,x8,#0x4
71018cba3c  str x8,[x26]
71018cba40  ldr x8,[x25, #0x40]
71018cba44  cbnz x8,0x71018cbb44
71018cba48  b 0x71018cbb9c
71018cba4c  ldr x21,[x20]
71018cba50  sub x22,x23,x21
71018cba54  asr x28,x22,#0x2
71018cba58  add x9,x28,#0x1
71018cba5c  lsr x10,x9,#0x3e
71018cba60  cbnz x10,0x71018cbc7c
71018cba64  sub x8,x8,x21
71018cba68  asr x10,x8,#0x2
71018cba6c  orr x11,xzr,#0x1ffffffffffffffe
71018cba70  cmp x10,x11
71018cba74  b.hi 0x71018cba94
71018cba78  asr x8,x8,#0x1
71018cba7c  cmp x8,x9
71018cba80  csel x19,x9,x8,cc
71018cba84  cbz x19,0x71018cbaf8
71018cba88  lsr x8,x19,#0x3e
71018cba8c  cbz x8,0x71018cba98
71018cba90  b 0x71018cbc84
71018cba94  orr x19,xzr,#0x3fffffffffffffff
71018cba98  lsl x8,x19,#0x2
71018cba9c  cmp x8,#0x0
71018cbaa0  csinc x24,x8,xzr,ne
71018cbaa4  mov w0,#0x10
71018cbaa8  mov x1,x24
71018cbaac  bl 0x710392e290
71018cbab0  mov x23,x0
71018cbab4  cbnz x0,0x71018cbafc
71018cbab8  adrp x8,0x7105332000
71018cbabc  ldr x0,[x8, #0xf00]
71018cbac0  cbz x0,0x71018cbaf8
71018cbac4  str wzr,[sp, #0x8]
71018cbac8  str x24,[sp, #0x20]
71018cbacc  ldr x8,[x0]
71018cbad0  ldr x8,[x8, #0x30]
71018cbad4  add x1,sp,#0x8
71018cbad8  add x2,sp,#0x20
71018cbadc  blr x8
71018cbae0  tbz w0,#0x0,0x71018cbaf8
71018cbae4  mov w0,#0x10
71018cbae8  mov x1,x24
71018cbaec  bl 0x710392e290
71018cbaf0  mov x23,x0
71018cbaf4  cbnz x0,0x71018cbafc
71018cbaf8  mov x23,xzr
71018cbafc  add x24,x23,x28, LSL #0x2
71018cbb00  mov w8,#0xa
71018cbb04  add x19,x23,x19, LSL #0x2
71018cbb08  str w8,[x24], #0x4
71018cbb0c  cmp x22,#0x1
71018cbb10  b.lt 0x71018cbb24
71018cbb14  mov x0,x23
71018cbb18  mov x1,x21
71018cbb1c  mov x2,x22
71018cbb20  bl 0x71039c00e0
71018cbb24  str x23,[x20]
71018cbb28  str x24,[x26]
71018cbb2c  str x19,[x27]
71018cbb30  cbz x21,0x71018cbb3c
71018cbb34  mov x0,x21
71018cbb38  bl 0x710392eb40
71018cbb3c  ldr x8,[x25, #0x40]
71018cbb40  cbz x8,0x71018cbb9c
71018cbb44  ldr x0,[x8]
71018cbb48  cbz x0,0x71018cbb98
71018cbb4c  ldr w3,[x25, #0x54]
71018cbb50  adrp x1,0x710432a000
71018cbb54  add x1,x1,#0x32f
71018cbb58  adrp x2,0x71042b2000
71018cbb5c  add x2,x2,#0xa84
71018cbb60  bl 0x7103375650
71018cbb64  ldr x8,[x25, #0x40]
71018cbb68  ldr x0,[x8]
71018cbb6c  cbz x0,0x71018cbb98
71018cbb70  ldp x8,x9,[x25, #0x58]
71018cbb74  sub x8,x9,x8
71018cbb78  lsr x3,x8,#0x2
71018cbb7c  adrp x1,0x710433a000
71018cbb80  add x1,x1,#0x3db
71018cbb84  adrp x2,0x71042b2000
71018cbb88  add x2,x2,#0xa84
71018cbb8c  bl 0x7103375650
71018cbb90  ldr x8,[x25, #0x40]
71018cbb94  ldr x0,[x8]
71018cbb98  bl 0x7103376980
71018cbb9c  adrp x8,0x710532f000
71018cbba0  ldr x20,[x8, #0x8d0]
71018cbba4  ldr x0,[x20, #0x8]
71018cbba8  bl 0x7103313c50
71018cbbac  ldr x19,[x20, #0x8]
71018cbbb0  ldrb w8,[x19, #0x22]
71018cbbb4  cbz w8,0x71018cbbd8
71018cbbb8  adrp x8,0x7105329000
71018cbbbc  ldr x0,[x8, #0xf38]
71018cbbc0  fmov s0,0x3f800000
71018cbbc4  mov w1,#0x2
71018cbbc8  mov w2,wzr
71018cbbcc  bl 0x71023eea60
71018cbbd0  strb wzr,[x19, #0x22]
71018cbbd4  ldr x19,[x20, #0x8]
71018cbbd8  ldr x20,[sp]
71018cbbdc  ldrb w8,[x19, #0x23]
71018cbbe0  cbz w8,0x71018cbc00
71018cbbe4  strb wzr,[x19, #0x23]
71018cbbe8  adrp x8,0x7105329000
71018cbbec  ldr x0,[x8, #0xf38]
71018cbbf0  fmov s0,0x3f800000
71018cbbf4  mov w1,#0x2
71018cbbf8  mov w2,wzr
71018cbbfc  bl 0x71023eea60
71018cbc00  ldrsw x8,[x20, #0xd4]
71018cbc04  cmp w8,#0x13
71018cbc08  b.cs 0x71018cbc84
71018cbc0c  add x8,x20,x8, LSL #0x2
71018cbc10  mov w9,#0x1
71018cbc14  str w9,[x8, #0x88]
71018cbc18  add sp,sp,#0x2, LSL #12
71018cbc1c  add sp,sp,#0x200
71018cbc20  ldp x29,x30,[sp, #0x50]
71018cbc24  ldp x20,x19,[sp, #0x40]
71018cbc28  ldp x22,x21,[sp, #0x30]
71018cbc2c  ldp x24,x23,[sp, #0x20]
71018cbc30  ldp x26,x25,[sp, #0x10]
71018cbc34  ldp x28,x27,[sp], #0x60
71018cbc38  ret
71018cbc3c  adrp x0,0x7105314000
71018cbc40  add x0,x0,#0x4d8
71018cbc44  bl 0x71039c06b0
71018cbc48  cbz w0,0x71018cad5c
71018cbc4c  bl 0x7101764000
71018cbc50  adrp x0,0x7101763000
71018cbc54  add x0,x0,#0xc40
71018cbc58  adrp x1,0x71052c5000
71018cbc5c  add x1,x1,#0x180
71018cbc60  adrp x2,0x7104f17000
71018cbc64  add x2,x2,#0x0
71018cbc68  bl 0x71000001c0
71018cbc6c  adrp x0,0x7105314000
71018cbc70  add x0,x0,#0x4d8
71018cbc74  bl 0x71039c06c0
71018cbc78  b 0x71018cad5c
71018cbc7c  mov x0,x20
71018cbc80  bl 0x71039c0c00
71018cbc84  bl 0x71039c2650
