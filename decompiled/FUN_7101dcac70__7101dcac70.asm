// addr:      7101dcac70
// offset:    0x1dcac70
// name:      FUN_7101dcac70
// mangled:   
// size:      1608

7101dcac70  sub sp,sp,#0x1a0
7101dcac74  str x28,[sp, #0x140]
7101dcac78  stp x26,x25,[sp, #0x150]
7101dcac7c  stp x24,x23,[sp, #0x160]
7101dcac80  stp x22,x21,[sp, #0x170]
7101dcac84  stp x20,x19,[sp, #0x180]
7101dcac88  stp x29,x30,[sp, #0x190]
7101dcac8c  add x29,sp,#0x190
7101dcac90  mov x21,x1
7101dcac94  mov x19,x0
7101dcac98  mov x8,sp
7101dcac9c  mov x0,x1
7101dcaca0  mov x1,x2
7101dcaca4  mov x22,x3
7101dcaca8  mov x23,sp
7101dcacac  bl 0x7103776640
7101dcacb0  add x20,x19,#0x8
7101dcacb4  cmp x20,x23
7101dcacb8  b.eq 0x7101dcacf0
7101dcacbc  ldr x8,[sp, #0x8]
7101dcacc0  str xzr,[sp, #0x8]
7101dcacc4  ldr x23,[x19, #0x10]
7101dcacc8  str x8,[x19, #0x10]
7101dcaccc  cbz x23,0x7101dcacf0
7101dcacd0  ldr x0,[x23, #0x18]
7101dcacd4  adrp x8,0x710523d000
7101dcacd8  add x8,x8,#0x9a8
7101dcacdc  stp x8,xzr,[x23, #0x10]
7101dcace0  cbz x0,0x7101dcace8
7101dcace4  bl 0x710392eb40
7101dcace8  mov x0,x23
7101dcacec  bl 0x710392eb40
7101dcacf0  ldr x23,[sp, #0x8]
7101dcacf4  adrp x25,0x710523d000
7101dcacf8  add x25,x25,#0x988
7101dcacfc  stp x25,xzr,[sp]
7101dcad00  cbz x23,0x7101dcad24
7101dcad04  ldr x0,[x23, #0x18]
7101dcad08  adrp x8,0x710523d000
7101dcad0c  add x8,x8,#0x9a8
7101dcad10  stp x8,xzr,[x23, #0x10]
7101dcad14  cbz x0,0x7101dcad1c
7101dcad18  bl 0x710392eb40
7101dcad1c  mov x0,x23
7101dcad20  bl 0x710392eb40
7101dcad24  mov x8,sp
7101dcad28  mov x0,x20
7101dcad2c  mov x1,x22
7101dcad30  mov x23,sp
7101dcad34  bl 0x7103776910
7101dcad38  add x8,x19,#0x18
7101dcad3c  cmp x8,x23
7101dcad40  b.eq 0x7101dcad5c
7101dcad44  ldr x8,[sp, #0x8]
7101dcad48  str xzr,[sp, #0x8]
7101dcad4c  ldr x0,[x19, #0x20]
7101dcad50  str x8,[x19, #0x20]
7101dcad54  cbz x0,0x7101dcad5c
7101dcad58  bl 0x710392eb40
7101dcad5c  ldr x0,[sp, #0x8]
7101dcad60  adrp x26,0x710523d000
7101dcad64  add x26,x26,#0x9a8
7101dcad68  stp x26,xzr,[sp]
7101dcad6c  cbz x0,0x7101dcad74
7101dcad70  bl 0x710392eb40
7101dcad74  ldr x8,[x19]
7101dcad78  ldr w1,[x19, #0x70]
7101dcad7c  mov x0,x19
7101dcad80  ldr x8,[x8, #0x18]
7101dcad84  blr x8
7101dcad88  mov x8,sp
7101dcad8c  add x22,x8,#0x8
7101dcad90  adrp x0,0x710439d000
7101dcad94  add x0,x0,#0x8ee
7101dcad98  mov x8,sp
7101dcad9c  mov w1,wzr
7101dcada0  bl 0x71003a4ca0
7101dcada4  sub x8,x29,#0x60
7101dcada8  mov x0,x21
7101dcadac  mov x1,x22
7101dcadb0  sub x24,x29,#0x60
7101dcadb4  bl 0x7103776640
7101dcadb8  add x23,x19,#0xd0
7101dcadbc  cmp x23,x24
7101dcadc0  b.eq 0x7101dcadf0
7101dcadc4  ldur x8,[x29, #-0x58]
7101dcadc8  stur xzr,[x29, #-0x58]
7101dcadcc  ldr x24,[x19, #0xd8]
7101dcadd0  str x8,[x19, #0xd8]
7101dcadd4  cbz x24,0x7101dcadf0
7101dcadd8  ldr x0,[x24, #0x18]
7101dcaddc  stp x26,xzr,[x24, #0x10]
7101dcade0  cbz x0,0x7101dcade8
7101dcade4  bl 0x710392eb40
7101dcade8  mov x0,x24
7101dcadec  bl 0x710392eb40
7101dcadf0  ldur x24,[x29, #-0x58]
7101dcadf4  stp x25,xzr,[x29, #-0x60]
7101dcadf8  cbz x24,0x7101dcae14
7101dcadfc  ldr x0,[x24, #0x18]
7101dcae00  stp x26,xzr,[x24, #0x10]
7101dcae04  cbz x0,0x7101dcae0c
7101dcae08  bl 0x710392eb40
7101dcae0c  mov x0,x24
7101dcae10  bl 0x710392eb40
7101dcae14  adrp x1,0x710436c000
7101dcae18  add x1,x1,#0x8c1
7101dcae1c  sub x8,x29,#0x60
7101dcae20  mov x0,x23
7101dcae24  sub x24,x29,#0x60
7101dcae28  bl 0x7103776910
7101dcae2c  add x8,x19,#0xe0
7101dcae30  cmp x8,x24
7101dcae34  b.eq 0x7101dcae50
7101dcae38  ldur x8,[x29, #-0x58]
7101dcae3c  stur xzr,[x29, #-0x58]
7101dcae40  ldr x0,[x19, #0xe8]
7101dcae44  str x8,[x19, #0xe8]
7101dcae48  cbz x0,0x7101dcae50
7101dcae4c  bl 0x710392eb40
7101dcae50  ldur x0,[x29, #-0x58]
7101dcae54  stp x26,xzr,[x29, #-0x60]
7101dcae58  cbz x0,0x7101dcae60
7101dcae5c  bl 0x710392eb40
7101dcae60  ldr x0,[x19, #0xf0]
7101dcae64  cbz x0,0x7101dcae78
7101dcae68  str xzr,[x19, #0xf0]
7101dcae6c  ldr x8,[x0]
7101dcae70  ldr x8,[x8, #0x8]
7101dcae74  blr x8
7101dcae78  ldr x0,[x19, #0xd8]
7101dcae7c  fmov s0,0x3f800000
7101dcae80  adrp x1,0x710438c000
7101dcae84  add x1,x1,#0xf5a
7101dcae88  bl 0x7103778300
7101dcae8c  adrp x0,0x710439d000
7101dcae90  add x0,x0,#0x8ee
7101dcae94  mov x8,sp
7101dcae98  mov w1,#0x1
7101dcae9c  strb wzr,[x19, #0xfa]
7101dcaea0  bl 0x71003a4ca0
7101dcaea4  sub x8,x29,#0x60
7101dcaea8  mov x0,x21
7101dcaeac  mov x1,x22
7101dcaeb0  sub x23,x29,#0x60
7101dcaeb4  bl 0x7103776640
7101dcaeb8  add x21,x19,#0x100
7101dcaebc  cmp x21,x23
7101dcaec0  b.eq 0x7101dcaef0
7101dcaec4  ldur x8,[x29, #-0x58]
7101dcaec8  stur xzr,[x29, #-0x58]
7101dcaecc  ldr x22,[x19, #0x108]
7101dcaed0  str x8,[x19, #0x108]
7101dcaed4  cbz x22,0x7101dcaef0
7101dcaed8  ldr x0,[x22, #0x18]
7101dcaedc  stp x26,xzr,[x22, #0x10]
7101dcaee0  cbz x0,0x7101dcaee8
7101dcaee4  bl 0x710392eb40
7101dcaee8  mov x0,x22
7101dcaeec  bl 0x710392eb40
7101dcaef0  ldur x22,[x29, #-0x58]
7101dcaef4  stp x25,xzr,[x29, #-0x60]
7101dcaef8  cbz x22,0x7101dcaf14
7101dcaefc  ldr x0,[x22, #0x18]
7101dcaf00  stp x26,xzr,[x22, #0x10]
7101dcaf04  cbz x0,0x7101dcaf0c
7101dcaf08  bl 0x710392eb40
7101dcaf0c  mov x0,x22
7101dcaf10  bl 0x710392eb40
7101dcaf14  adrp x1,0x710436c000
7101dcaf18  add x1,x1,#0x8c1
7101dcaf1c  sub x8,x29,#0x60
7101dcaf20  mov x0,x21
7101dcaf24  sub x22,x29,#0x60
7101dcaf28  bl 0x7103776910
7101dcaf2c  add x8,x19,#0x110
7101dcaf30  cmp x8,x22
7101dcaf34  b.eq 0x7101dcaf50
7101dcaf38  ldur x8,[x29, #-0x58]
7101dcaf3c  stur xzr,[x29, #-0x58]
7101dcaf40  ldr x0,[x19, #0x118]
7101dcaf44  str x8,[x19, #0x118]
7101dcaf48  cbz x0,0x7101dcaf50
7101dcaf4c  bl 0x710392eb40
7101dcaf50  ldur x0,[x29, #-0x58]
7101dcaf54  stp x26,xzr,[x29, #-0x60]
7101dcaf58  cbz x0,0x7101dcaf60
7101dcaf5c  bl 0x710392eb40
7101dcaf60  ldr x0,[x19, #0x120]
7101dcaf64  cbz x0,0x7101dcaf78
7101dcaf68  str xzr,[x19, #0x120]
7101dcaf6c  ldr x8,[x0]
7101dcaf70  ldr x8,[x8, #0x8]
7101dcaf74  blr x8
7101dcaf78  ldr x0,[x19, #0x108]
7101dcaf7c  fmov s0,0x3f800000
7101dcaf80  adrp x1,0x710438c000
7101dcaf84  add x1,x1,#0xf5a
7101dcaf88  bl 0x7103778300
7101dcaf8c  orr w8,wzr,#0x3
7101dcaf90  str w8,[x19, #0x130]
7101dcaf94  orr x8,xzr,#0x1000000000000
7101dcaf98  strb wzr,[x19, #0x12a]
7101dcaf9c  mov w9,#0x101
7101dcafa0  add x21,x19,#0x78
7101dcafa4  stur x8,[sp, #0xa]
7101dcafa8  mov w8,#0x100
7101dcafac  movk w8,#0x1, LSL #16
7101dcafb0  strh w9,[sp, #0x8]
7101dcafb4  stur w8,[sp, #0x12]
7101dcafb8  mov w8,#0x1
7101dcafbc  mov x9,#0x41f0000000000000
7101dcafc0  adrp x2,0x7104307000
7101dcafc4  add x2,x2,#0x72
7101dcafc8  mov x3,sp
7101dcafcc  mov x0,x21
7101dcafd0  mov x1,x20
7101dcafd4  strb w8,[sp, #0x16]
7101dcafd8  str x9,[sp, #0x18]
7101dcafdc  str wzr,[sp, #0x20]
7101dcafe0  str xzr,[sp, #0x50]
7101dcafe4  str xzr,[sp, #0x80]
7101dcafe8  str xzr,[sp, #0xb0]
7101dcafec  str xzr,[sp, #0xe0]
7101dcaff0  str xzr,[sp, #0x110]
7101dcaff4  str wzr,[sp, #0x120]
7101dcaff8  str xzr,[sp]
7101dcaffc  strb w8,[sp, #0xa]
7101dcb000  bl 0x7103770b30
7101dcb004  ldr w1,[x19, #0x130]
7101dcb008  adrp x2,0x7104292000
7101dcb00c  add x2,x2,#0x8d
7101dcb010  mov x0,x21
7101dcb014  bl 0x71037717d0
7101dcb018  ldr x0,[x19, #0x78]
7101dcb01c  ldr w1,[x19, #0x130]
7101dcb020  ldr x9,[x0, #0x1b8]
7101dcb024  cbz x9,0x7101dcb114
7101dcb028  add x8,x0,#0x1b8
7101dcb02c  mov x10,x8
7101dcb030  mov x11,x9
7101dcb034  ldr w12,[x11, #0x20]
7101dcb038  cmp w12,w1
7101dcb03c  cset w12,lt
7101dcb040  csel x10,x10,x11,lt
7101dcb044  ldr x11,[x11, w12, UXTW #0x3]
7101dcb048  cbnz x11,0x7101dcb034
7101dcb04c  cmp x10,x8
7101dcb050  b.eq 0x7101dcb0a4
7101dcb054  ldr w11,[x10, #0x20]
7101dcb058  cmp w11,w1
7101dcb05c  b.gt 0x7101dcb0a4
7101dcb060  ldr x22,[x10, #0x28]
7101dcb064  cbz x22,0x7101dcb0a4
7101dcb068  ldr x8,[x22]
7101dcb06c  ldr x8,[x8, #0x208]
7101dcb070  mov w1,#0x1
7101dcb074  mov x0,x22
7101dcb078  blr x8
7101dcb07c  ldr x8,[x22]
7101dcb080  ldr x8,[x8, #0x388]
7101dcb084  mov x0,x22
7101dcb088  mov w1,wzr
7101dcb08c  mov w2,wzr
7101dcb090  blr x8
7101dcb094  ldr x0,[x19, #0x78]
7101dcb098  ldr w1,[x19, #0x130]
7101dcb09c  add x8,x0,#0x1b8
7101dcb0a0  ldr x9,[x0, #0x1b8]
7101dcb0a4  cbz x9,0x7101dcb114
7101dcb0a8  mov x10,x8
7101dcb0ac  ldr w11,[x9, #0x20]
7101dcb0b0  cmp w11,w1
7101dcb0b4  cset w11,lt
7101dcb0b8  csel x10,x10,x9,lt
7101dcb0bc  ldr x9,[x9, w11, UXTW #0x3]
7101dcb0c0  cbnz x9,0x7101dcb0ac
7101dcb0c4  cmp x10,x8
7101dcb0c8  b.eq 0x7101dcb114
7101dcb0cc  ldr w8,[x10, #0x20]
7101dcb0d0  cmp w8,w1
7101dcb0d4  b.gt 0x7101dcb114
7101dcb0d8  ldr x22,[x10, #0x28]
7101dcb0dc  cbz x22,0x7101dcb114
7101dcb0e0  ldr x8,[x22]
7101dcb0e4  ldr x8,[x8, #0x1f8]
7101dcb0e8  mov w1,#0x1
7101dcb0ec  mov x0,x22
7101dcb0f0  blr x8
7101dcb0f4  ldr x8,[x22]
7101dcb0f8  ldr x8,[x8, #0x388]
7101dcb0fc  mov x0,x22
7101dcb100  mov w1,wzr
7101dcb104  mov w2,wzr
7101dcb108  blr x8
7101dcb10c  ldr w1,[x19, #0x130]
7101dcb110  ldr x0,[x19, #0x78]
7101dcb114  orr w2,wzr,#0x7
7101dcb118  mov w3,wzr
7101dcb11c  bl 0x7103771930
7101dcb120  adrp x1,0x7104292000
7101dcb124  add x1,x1,#0x8d
7101dcb128  sub x8,x29,#0x60
7101dcb12c  mov x0,x20
7101dcb130  sub x22,x29,#0x60
7101dcb134  bl 0x7103776640
7101dcb138  add x8,x19,#0x80
7101dcb13c  cmp x8,x22
7101dcb140  b.eq 0x7101dcb170
7101dcb144  ldur x8,[x29, #-0x58]
7101dcb148  stur xzr,[x29, #-0x58]
7101dcb14c  ldr x20,[x19, #0x88]
7101dcb150  str x8,[x19, #0x88]
7101dcb154  cbz x20,0x7101dcb170
7101dcb158  ldr x0,[x20, #0x18]
7101dcb15c  stp x26,xzr,[x20, #0x10]
7101dcb160  cbz x0,0x7101dcb168
7101dcb164  bl 0x710392eb40
7101dcb168  mov x0,x20
7101dcb16c  bl 0x710392eb40
7101dcb170  ldur x19,[x29, #-0x58]
7101dcb174  stp x25,xzr,[x29, #-0x60]
7101dcb178  cbz x19,0x7101dcb194
7101dcb17c  ldr x0,[x19, #0x18]
7101dcb180  stp x26,xzr,[x19, #0x10]
7101dcb184  cbz x0,0x7101dcb18c
7101dcb188  bl 0x710392eb40
7101dcb18c  mov x0,x19
7101dcb190  bl 0x710392eb40
7101dcb194  ldr x0,[x21]
7101dcb198  ldr x8,[x0]
7101dcb19c  ldr x8,[x8, #0x60]
7101dcb1a0  mov w1,wzr
7101dcb1a4  blr x8
7101dcb1a8  ldr x0,[sp, #0x110]
7101dcb1ac  mov x8,sp
7101dcb1b0  add x8,x8,#0xf0
7101dcb1b4  cmp x8,x0
7101dcb1b8  b.eq 0x7101dcb1cc
7101dcb1bc  cbz x0,0x7101dcb1d8
7101dcb1c0  ldr x8,[x0]
7101dcb1c4  ldr x8,[x8, #0x28]
7101dcb1c8  b 0x7101dcb1d4
7101dcb1cc  ldr x8,[x0]
7101dcb1d0  ldr x8,[x8, #0x20]
7101dcb1d4  blr x8
7101dcb1d8  ldr x0,[sp, #0xe0]
7101dcb1dc  mov x8,sp
7101dcb1e0  add x8,x8,#0xc0
7101dcb1e4  cmp x8,x0
7101dcb1e8  b.eq 0x7101dcb1fc
7101dcb1ec  cbz x0,0x7101dcb208
7101dcb1f0  ldr x8,[x0]
7101dcb1f4  ldr x8,[x8, #0x28]
7101dcb1f8  b 0x7101dcb204
7101dcb1fc  ldr x8,[x0]
7101dcb200  ldr x8,[x8, #0x20]
7101dcb204  blr x8
7101dcb208  ldr x0,[sp, #0xb0]
7101dcb20c  mov x8,sp
7101dcb210  add x8,x8,#0x90
7101dcb214  cmp x8,x0
7101dcb218  b.eq 0x7101dcb22c
7101dcb21c  cbz x0,0x7101dcb238
7101dcb220  ldr x8,[x0]
7101dcb224  ldr x8,[x8, #0x28]
7101dcb228  b 0x7101dcb234
7101dcb22c  ldr x8,[x0]
7101dcb230  ldr x8,[x8, #0x20]
7101dcb234  blr x8
7101dcb238  ldr x0,[sp, #0x80]
7101dcb23c  mov x8,sp
7101dcb240  add x8,x8,#0x60
7101dcb244  cmp x8,x0
7101dcb248  b.eq 0x7101dcb25c
7101dcb24c  cbz x0,0x7101dcb268
7101dcb250  ldr x8,[x0]
7101dcb254  ldr x8,[x8, #0x28]
7101dcb258  b 0x7101dcb264
7101dcb25c  ldr x8,[x0]
7101dcb260  ldr x8,[x8, #0x20]
7101dcb264  blr x8
7101dcb268  ldr x0,[sp, #0x50]
7101dcb26c  mov x8,sp
7101dcb270  add x8,x8,#0x30
7101dcb274  cmp x8,x0
7101dcb278  b.eq 0x7101dcb28c
7101dcb27c  cbz x0,0x7101dcb298
7101dcb280  ldr x8,[x0]
7101dcb284  ldr x8,[x8, #0x28]
7101dcb288  b 0x7101dcb294
7101dcb28c  ldr x8,[x0]
7101dcb290  ldr x8,[x8, #0x20]
7101dcb294  blr x8
7101dcb298  ldp x29,x30,[sp, #0x190]
7101dcb29c  ldr x28,[sp, #0x140]
7101dcb2a0  ldp x20,x19,[sp, #0x180]
7101dcb2a4  ldp x22,x21,[sp, #0x170]
7101dcb2a8  ldp x24,x23,[sp, #0x160]
7101dcb2ac  ldp x26,x25,[sp, #0x150]
7101dcb2b0  add sp,sp,#0x1a0
7101dcb2b4  ret
