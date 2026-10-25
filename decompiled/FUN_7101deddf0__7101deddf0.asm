// addr:      7101deddf0
// offset:    0x1deddf0
// name:      FUN_7101deddf0
// mangled:   
// size:      10828

7101deddf0  stp x28,x27,[sp, #-0x60]!
7101deddf4  stp x26,x25,[sp, #0x10]
7101deddf8  stp x24,x23,[sp, #0x20]
7101deddfc  stp x22,x21,[sp, #0x30]
7101dede00  stp x20,x19,[sp, #0x40]
7101dede04  stp x29,x30,[sp, #0x50]
7101dede08  add x29,sp,#0x50
7101dede0c  sub sp,sp,#0x1b0
7101dede10  ldr x8,[x0]
7101dede14  ldr x22,[x8]
7101dede18  mov x28,x0
7101dede1c  mov x0,x22
7101dede20  str w2,[sp, #0x14]
7101dede24  mov x19,x1
7101dede28  bl 0x710323cb80
7101dede2c  tbnz w0,#0x0,0x7101dede4c
7101dede30  mov w23,#0x4240
7101dede34  movk w23,#0xf, LSL #16
7101dede38  mov x0,x23
7101dede3c  bl 0x71039c0d80
7101dede40  mov x0,x22
7101dede44  bl 0x710323cb80
7101dede48  tbz w0,#0x0,0x7101dede38
7101dede4c  str x19,[sp, #0x28]
7101dede50  mov x19,x28
7101dede54  add x0,x28,#0x8
7101dede58  ldr x8,[x19], #0x10
7101dede5c  str x0,[sp, #0x20]
7101dede60  ldr x1,[x8]
7101dede64  adrp x2,0x7104545000
7101dede68  add x2,x2,#0x9a0
7101dede6c  mov w3,#0x2
7101dede70  bl 0x71032cbf30
7101dede74  ldr x8,[x28, #0x8]
7101dede78  ldr x8,[x8]
7101dede7c  add x9,x8,#0x8
7101dede80  cmp x19,x9
7101dede84  b.eq 0x7101dedef8
7101dede88  ldr x9,[x8, #0x10]
7101dede8c  ldr x9,[x9]
7101dede90  ldr x10,[x28, #0x18]
7101dede94  str x9,[x10]
7101dede98  ldr x9,[x8, #0x10]
7101dede9c  ldr x9,[x9, #0x8]
7101dedea0  ldr x10,[x28, #0x18]
7101dedea4  str x9,[x10, #0x8]
7101dedea8  ldr x9,[x8, #0x10]
7101dedeac  ldr x8,[x28, #0x18]
7101dedeb0  cmp x8,x9
7101dedeb4  b.eq 0x7101dedef8
7101dedeb8  ldr x10,[x9, #0x18]
7101dedebc  ldr x10,[x10]
7101dedec0  ldr x11,[x8, #0x18]
7101dedec4  str x10,[x11]
7101dedec8  ldr x10,[x9, #0x18]
7101dedecc  ldr x10,[x10, #0x8]
7101deded0  ldr x11,[x8, #0x18]
7101deded4  str x10,[x11, #0x8]
7101deded8  ldr x10,[x9, #0x18]
7101dededc  ldr x10,[x10, #0x10]
7101dedee0  ldr x11,[x8, #0x18]
7101dedee4  str x10,[x11, #0x10]
7101dedee8  ldr x9,[x9, #0x18]
7101dedeec  ldr x9,[x9, #0x18]
7101dedef0  ldr x8,[x8, #0x18]
7101dedef4  str x9,[x8, #0x18]
7101dedef8  ldr x27,[x28]
7101dedefc  mov w1,#0x88
7101dedf00  mov w0,#0x10
7101dedf04  bl 0x710392e290
7101dedf08  mov x24,x0
7101dedf0c  cbnz x0,0x7101dedf58
7101dedf10  adrp x8,0x7105332000
7101dedf14  ldr x0,[x8, #0xf00]
7101dedf18  cbz x0,0x7101dedf54
7101dedf1c  mov w8,#0x88
7101dedf20  stur wzr,[x29, #-0x90]
7101dedf24  sub x1,x29,#0x90
7101dedf28  str x8,[sp, #0x40]
7101dedf2c  ldr x8,[x0]
7101dedf30  ldr x8,[x8, #0x30]
7101dedf34  add x2,sp,#0x40
7101dedf38  blr x8
7101dedf3c  tbz w0,#0x0,0x7101dedf54
7101dedf40  mov w1,#0x88
7101dedf44  mov w0,#0x10
7101dedf48  bl 0x710392e290
7101dedf4c  mov x24,x0
7101dedf50  cbnz x0,0x7101dedf58
7101dedf54  mov x24,xzr
7101dedf58  adrp x8,0x71050b1000
7101dedf5c  add x8,x8,#0x578
7101dedf60  mov w1,#0x518
7101dedf64  stp x8,xzr,[x24]
7101dedf68  orr x8,xzr,#0x1ffffffff
7101dedf6c  stp xzr,x8,[x24, #0x60]
7101dedf70  mov w8,#0x1
7101dedf74  mov w0,#0x10
7101dedf78  stp xzr,xzr,[x24, #0x10]
7101dedf7c  strb wzr,[x24, #0x58]
7101dedf80  str x27,[x24, #0x78]
7101dedf84  strb w8,[x24, #0x70]
7101dedf88  stp xzr,xzr,[x24, #0x48]
7101dedf8c  bl 0x710392e290
7101dedf90  mov x25,x0
7101dedf94  cbnz x0,0x7101dedfe0
7101dedf98  adrp x8,0x7105332000
7101dedf9c  ldr x0,[x8, #0xf00]
7101dedfa0  cbz x0,0x7101dedfdc
7101dedfa4  mov w8,#0x518
7101dedfa8  stur wzr,[x29, #-0x90]
7101dedfac  sub x1,x29,#0x90
7101dedfb0  str x8,[sp, #0x40]
7101dedfb4  ldr x8,[x0]
7101dedfb8  ldr x8,[x8, #0x30]
7101dedfbc  add x2,sp,#0x40
7101dedfc0  blr x8
7101dedfc4  tbz w0,#0x0,0x7101dedfdc
7101dedfc8  mov w1,#0x518
7101dedfcc  mov w0,#0x10
7101dedfd0  bl 0x710392e290
7101dedfd4  mov x25,x0
7101dedfd8  cbnz x0,0x7101dedfe0
7101dedfdc  mov x25,xzr
7101dedfe0  mov w26,#0xffffffff
7101dedfe4  mov w0,#0x10
7101dedfe8  mov w1,#0x8
7101dedfec  stp x27,x25,[x25]
7101dedff0  str w26,[x25, #0xe8]
7101dedff4  stp xzr,xzr,[x25, #0x10]
7101dedff8  strb wzr,[x25, #0xec]
7101dedffc  str xzr,[x25, #0x30]
7101dee000  stp xzr,xzr,[x25, #0x20]
7101dee004  stp xzr,x26,[x25, #0xd8]
7101dee008  stp xzr,xzr,[x25, #0xc8]
7101dee00c  stp xzr,xzr,[x25, #0xb8]
7101dee010  stp xzr,xzr,[x25, #0xa8]
7101dee014  stp xzr,xzr,[x25, #0x98]
7101dee018  stp xzr,xzr,[x25, #0x88]
7101dee01c  stp xzr,xzr,[x25, #0x78]
7101dee020  stp xzr,xzr,[x25, #0x68]
7101dee024  stp xzr,xzr,[x25, #0x58]
7101dee028  stp xzr,xzr,[x25, #0x48]
7101dee02c  stp xzr,xzr,[x25, #0x38]
7101dee030  bl 0x710392e290
7101dee034  mov x23,x0
7101dee038  cbnz x0,0x7101dee084
7101dee03c  adrp x8,0x7105332000
7101dee040  ldr x0,[x8, #0xf00]
7101dee044  cbz x0,0x7101dee080
7101dee048  mov w8,#0x8
7101dee04c  stur wzr,[x29, #-0x90]
7101dee050  sub x1,x29,#0x90
7101dee054  str x8,[sp, #0x40]
7101dee058  ldr x8,[x0]
7101dee05c  ldr x8,[x8, #0x30]
7101dee060  add x2,sp,#0x40
7101dee064  blr x8
7101dee068  tbz w0,#0x0,0x7101dee080
7101dee06c  mov w0,#0x10
7101dee070  mov w1,#0x8
7101dee074  bl 0x710392e290
7101dee078  mov x23,x0
7101dee07c  cbnz x0,0x7101dee084
7101dee080  mov x23,xzr
7101dee084  mov x0,x23
7101dee088  bl 0x7103773200
7101dee08c  str x23,[x25, #0xf0]
7101dee090  add x23,x25,#0xf8
7101dee094  mov w2,#0x258
7101dee098  mov x0,x23
7101dee09c  mov w1,wzr
7101dee0a0  bl 0x71039c02a0
7101dee0a4  mov x0,x23
7101dee0a8  bl 0x7103776290
7101dee0ac  adrp x23,0x710523d000
7101dee0b0  add x23,x23,#0x9a8
7101dee0b4  mov w0,#0x10
7101dee0b8  mov w1,#0x20
7101dee0bc  str x23,[x25, #0x108]
7101dee0c0  bl 0x710392e290
7101dee0c4  cbnz x0,0x7101dee10c
7101dee0c8  adrp x8,0x7105332000
7101dee0cc  ldr x0,[x8, #0xf00]
7101dee0d0  cbz x0,0x7101dee108
7101dee0d4  mov w8,#0x20
7101dee0d8  stur wzr,[x29, #-0x90]
7101dee0dc  sub x1,x29,#0x90
7101dee0e0  str x8,[sp, #0x40]
7101dee0e4  ldr x8,[x0]
7101dee0e8  ldr x8,[x8, #0x30]
7101dee0ec  add x2,sp,#0x40
7101dee0f0  blr x8
7101dee0f4  tbz w0,#0x0,0x7101dee108
7101dee0f8  mov w0,#0x10
7101dee0fc  mov w1,#0x20
7101dee100  bl 0x710392e290
7101dee104  cbnz x0,0x7101dee10c
7101dee108  mov x0,xzr
7101dee10c  mov x19,#0xff0000000000
7101dee110  movk x19,#0x52ff, LSL #48
7101dee114  add x8,x25,#0x120
7101dee118  stp xzr,xzr,[x0, #0x10]
7101dee11c  stp xzr,xzr,[x0]
7101dee120  stp x0,x19,[x25, #0x110]
7101dee124  mov x0,x8
7101dee128  bl 0x7103776290
7101dee12c  mov w0,#0x10
7101dee130  mov w1,#0x20
7101dee134  str x23,[x25, #0x130]
7101dee138  bl 0x710392e290
7101dee13c  cbnz x0,0x7101dee184
7101dee140  adrp x8,0x7105332000
7101dee144  ldr x0,[x8, #0xf00]
7101dee148  cbz x0,0x7101dee180
7101dee14c  mov w8,#0x20
7101dee150  stur wzr,[x29, #-0x90]
7101dee154  sub x1,x29,#0x90
7101dee158  str x8,[sp, #0x40]
7101dee15c  ldr x8,[x0]
7101dee160  ldr x8,[x8, #0x30]
7101dee164  add x2,sp,#0x40
7101dee168  blr x8
7101dee16c  tbz w0,#0x0,0x7101dee180
7101dee170  mov w0,#0x10
7101dee174  mov w1,#0x20
7101dee178  bl 0x710392e290
7101dee17c  cbnz x0,0x7101dee184
7101dee180  mov x0,xzr
7101dee184  add x8,x25,#0x148
7101dee188  stp xzr,xzr,[x0, #0x10]
7101dee18c  stp xzr,xzr,[x0]
7101dee190  stp x0,x19,[x25, #0x138]
7101dee194  mov x0,x8
7101dee198  bl 0x7103776290
7101dee19c  mov w0,#0x10
7101dee1a0  mov w1,#0x20
7101dee1a4  str x23,[x25, #0x158]
7101dee1a8  bl 0x710392e290
7101dee1ac  cbnz x0,0x7101dee1f4
7101dee1b0  adrp x8,0x7105332000
7101dee1b4  ldr x0,[x8, #0xf00]
7101dee1b8  cbz x0,0x7101dee1f0
7101dee1bc  mov w8,#0x20
7101dee1c0  stur wzr,[x29, #-0x90]
7101dee1c4  sub x1,x29,#0x90
7101dee1c8  str x8,[sp, #0x40]
7101dee1cc  ldr x8,[x0]
7101dee1d0  ldr x8,[x8, #0x30]
7101dee1d4  add x2,sp,#0x40
7101dee1d8  blr x8
7101dee1dc  tbz w0,#0x0,0x7101dee1f0
7101dee1e0  mov w0,#0x10
7101dee1e4  mov w1,#0x20
7101dee1e8  bl 0x710392e290
7101dee1ec  cbnz x0,0x7101dee1f4
7101dee1f0  mov x0,xzr
7101dee1f4  add x8,x25,#0x170
7101dee1f8  stp xzr,xzr,[x0, #0x10]
7101dee1fc  stp xzr,xzr,[x0]
7101dee200  stp x0,x19,[x25, #0x160]
7101dee204  mov x0,x8
7101dee208  bl 0x7103776290
7101dee20c  mov w0,#0x10
7101dee210  mov w1,#0x20
7101dee214  str x23,[x25, #0x180]
7101dee218  bl 0x710392e290
7101dee21c  cbnz x0,0x7101dee264
7101dee220  adrp x8,0x7105332000
7101dee224  ldr x0,[x8, #0xf00]
7101dee228  cbz x0,0x7101dee260
7101dee22c  mov w8,#0x20
7101dee230  stur wzr,[x29, #-0x90]
7101dee234  sub x1,x29,#0x90
7101dee238  str x8,[sp, #0x40]
7101dee23c  ldr x8,[x0]
7101dee240  ldr x8,[x8, #0x30]
7101dee244  add x2,sp,#0x40
7101dee248  blr x8
7101dee24c  tbz w0,#0x0,0x7101dee260
7101dee250  mov w0,#0x10
7101dee254  mov w1,#0x20
7101dee258  bl 0x710392e290
7101dee25c  cbnz x0,0x7101dee264
7101dee260  mov x0,xzr
7101dee264  add x8,x25,#0x198
7101dee268  stp xzr,xzr,[x0, #0x10]
7101dee26c  stp xzr,xzr,[x0]
7101dee270  stp x0,x19,[x25, #0x188]
7101dee274  mov x0,x8
7101dee278  bl 0x7103776290
7101dee27c  mov w0,#0x10
7101dee280  mov w1,#0x20
7101dee284  str x23,[x25, #0x1a8]
7101dee288  bl 0x710392e290
7101dee28c  cbnz x0,0x7101dee2d4
7101dee290  adrp x8,0x7105332000
7101dee294  ldr x0,[x8, #0xf00]
7101dee298  cbz x0,0x7101dee2d0
7101dee29c  mov w8,#0x20
7101dee2a0  stur wzr,[x29, #-0x90]
7101dee2a4  sub x1,x29,#0x90
7101dee2a8  str x8,[sp, #0x40]
7101dee2ac  ldr x8,[x0]
7101dee2b0  ldr x8,[x8, #0x30]
7101dee2b4  add x2,sp,#0x40
7101dee2b8  blr x8
7101dee2bc  tbz w0,#0x0,0x7101dee2d0
7101dee2c0  mov w0,#0x10
7101dee2c4  mov w1,#0x20
7101dee2c8  bl 0x710392e290
7101dee2cc  cbnz x0,0x7101dee2d4
7101dee2d0  mov x0,xzr
7101dee2d4  add x8,x25,#0x1c0
7101dee2d8  stp xzr,xzr,[x0, #0x10]
7101dee2dc  stp xzr,xzr,[x0]
7101dee2e0  stp x0,x19,[x25, #0x1b0]
7101dee2e4  mov x0,x8
7101dee2e8  bl 0x7103776290
7101dee2ec  mov w0,#0x10
7101dee2f0  mov w1,#0x20
7101dee2f4  str x23,[x25, #0x1d0]
7101dee2f8  bl 0x710392e290
7101dee2fc  cbnz x0,0x7101dee344
7101dee300  adrp x8,0x7105332000
7101dee304  ldr x0,[x8, #0xf00]
7101dee308  cbz x0,0x7101dee340
7101dee30c  mov w8,#0x20
7101dee310  stur wzr,[x29, #-0x90]
7101dee314  sub x1,x29,#0x90
7101dee318  str x8,[sp, #0x40]
7101dee31c  ldr x8,[x0]
7101dee320  ldr x8,[x8, #0x30]
7101dee324  add x2,sp,#0x40
7101dee328  blr x8
7101dee32c  tbz w0,#0x0,0x7101dee340
7101dee330  mov w0,#0x10
7101dee334  mov w1,#0x20
7101dee338  bl 0x710392e290
7101dee33c  cbnz x0,0x7101dee344
7101dee340  mov x0,xzr
7101dee344  add x8,x25,#0x1e8
7101dee348  stp xzr,xzr,[x0, #0x10]
7101dee34c  stp xzr,xzr,[x0]
7101dee350  stp x0,x19,[x25, #0x1d8]
7101dee354  mov x0,x8
7101dee358  bl 0x7103776290
7101dee35c  mov w0,#0x10
7101dee360  mov w1,#0x20
7101dee364  str x23,[x25, #0x1f8]
7101dee368  bl 0x710392e290
7101dee36c  cbnz x0,0x7101dee3b4
7101dee370  adrp x8,0x7105332000
7101dee374  ldr x0,[x8, #0xf00]
7101dee378  cbz x0,0x7101dee3b0
7101dee37c  mov w8,#0x20
7101dee380  stur wzr,[x29, #-0x90]
7101dee384  sub x1,x29,#0x90
7101dee388  str x8,[sp, #0x40]
7101dee38c  ldr x8,[x0]
7101dee390  ldr x8,[x8, #0x30]
7101dee394  add x2,sp,#0x40
7101dee398  blr x8
7101dee39c  tbz w0,#0x0,0x7101dee3b0
7101dee3a0  mov w0,#0x10
7101dee3a4  mov w1,#0x20
7101dee3a8  bl 0x710392e290
7101dee3ac  cbnz x0,0x7101dee3b4
7101dee3b0  mov x0,xzr
7101dee3b4  stp xzr,xzr,[x0, #0x10]
7101dee3b8  stp xzr,xzr,[x0]
7101dee3bc  str x0,[x25, #0x200]
7101dee3c0  add x0,x25,#0x210
7101dee3c4  str x19,[x25, #0x208]
7101dee3c8  bl 0x7103776290
7101dee3cc  mov w0,#0x10
7101dee3d0  mov w1,#0x20
7101dee3d4  str x23,[x25, #0x220]
7101dee3d8  bl 0x710392e290
7101dee3dc  cbnz x0,0x7101dee424
7101dee3e0  adrp x8,0x7105332000
7101dee3e4  ldr x0,[x8, #0xf00]
7101dee3e8  cbz x0,0x7101dee420
7101dee3ec  mov w8,#0x20
7101dee3f0  stur wzr,[x29, #-0x90]
7101dee3f4  sub x1,x29,#0x90
7101dee3f8  str x8,[sp, #0x40]
7101dee3fc  ldr x8,[x0]
7101dee400  ldr x8,[x8, #0x30]
7101dee404  add x2,sp,#0x40
7101dee408  blr x8
7101dee40c  tbz w0,#0x0,0x7101dee420
7101dee410  mov w0,#0x10
7101dee414  mov w1,#0x20
7101dee418  bl 0x710392e290
7101dee41c  cbnz x0,0x7101dee424
7101dee420  mov x0,xzr
7101dee424  stp xzr,xzr,[x0, #0x10]
7101dee428  stp xzr,xzr,[x0]
7101dee42c  str x0,[x25, #0x228]
7101dee430  add x0,x25,#0x238
7101dee434  str x19,[x25, #0x230]
7101dee438  bl 0x7103776290
7101dee43c  mov w0,#0x10
7101dee440  mov w1,#0x20
7101dee444  str x23,[x25, #0x248]
7101dee448  bl 0x710392e290
7101dee44c  cbnz x0,0x7101dee494
7101dee450  adrp x8,0x7105332000
7101dee454  ldr x0,[x8, #0xf00]
7101dee458  cbz x0,0x7101dee490
7101dee45c  mov w8,#0x20
7101dee460  stur wzr,[x29, #-0x90]
7101dee464  sub x1,x29,#0x90
7101dee468  str x8,[sp, #0x40]
7101dee46c  ldr x8,[x0]
7101dee470  ldr x8,[x8, #0x30]
7101dee474  add x2,sp,#0x40
7101dee478  blr x8
7101dee47c  tbz w0,#0x0,0x7101dee490
7101dee480  mov w0,#0x10
7101dee484  mov w1,#0x20
7101dee488  bl 0x710392e290
7101dee48c  cbnz x0,0x7101dee494
7101dee490  mov x0,xzr
7101dee494  stp xzr,xzr,[x0, #0x10]
7101dee498  stp xzr,xzr,[x0]
7101dee49c  str x0,[x25, #0x250]
7101dee4a0  add x0,x25,#0x260
7101dee4a4  str x19,[x25, #0x258]
7101dee4a8  bl 0x7103776290
7101dee4ac  mov w0,#0x10
7101dee4b0  mov w1,#0x20
7101dee4b4  str x23,[x25, #0x270]
7101dee4b8  bl 0x710392e290
7101dee4bc  cbnz x0,0x7101dee504
7101dee4c0  adrp x8,0x7105332000
7101dee4c4  ldr x0,[x8, #0xf00]
7101dee4c8  cbz x0,0x7101dee500
7101dee4cc  mov w8,#0x20
7101dee4d0  stur wzr,[x29, #-0x90]
7101dee4d4  sub x1,x29,#0x90
7101dee4d8  str x8,[sp, #0x40]
7101dee4dc  ldr x8,[x0]
7101dee4e0  ldr x8,[x8, #0x30]
7101dee4e4  add x2,sp,#0x40
7101dee4e8  blr x8
7101dee4ec  tbz w0,#0x0,0x7101dee500
7101dee4f0  mov w0,#0x10
7101dee4f4  mov w1,#0x20
7101dee4f8  bl 0x710392e290
7101dee4fc  cbnz x0,0x7101dee504
7101dee500  mov x0,xzr
7101dee504  stp xzr,xzr,[x0, #0x10]
7101dee508  stp xzr,xzr,[x0]
7101dee50c  str x0,[x25, #0x278]
7101dee510  add x0,x25,#0x288
7101dee514  str x19,[x25, #0x280]
7101dee518  bl 0x7103776290
7101dee51c  mov w0,#0x10
7101dee520  mov w1,#0x20
7101dee524  str x23,[x25, #0x298]
7101dee528  bl 0x710392e290
7101dee52c  cbnz x0,0x7101dee574
7101dee530  adrp x8,0x7105332000
7101dee534  ldr x0,[x8, #0xf00]
7101dee538  cbz x0,0x7101dee570
7101dee53c  mov w8,#0x20
7101dee540  stur wzr,[x29, #-0x90]
7101dee544  sub x1,x29,#0x90
7101dee548  str x8,[sp, #0x40]
7101dee54c  ldr x8,[x0]
7101dee550  ldr x8,[x8, #0x30]
7101dee554  add x2,sp,#0x40
7101dee558  blr x8
7101dee55c  tbz w0,#0x0,0x7101dee570
7101dee560  mov w0,#0x10
7101dee564  mov w1,#0x20
7101dee568  bl 0x710392e290
7101dee56c  cbnz x0,0x7101dee574
7101dee570  mov x0,xzr
7101dee574  stp xzr,xzr,[x0, #0x10]
7101dee578  stp xzr,xzr,[x0]
7101dee57c  str x0,[x25, #0x2a0]
7101dee580  add x0,x25,#0x2b0
7101dee584  str x19,[x25, #0x2a8]
7101dee588  bl 0x7103776290
7101dee58c  mov w0,#0x10
7101dee590  mov w1,#0x20
7101dee594  str x23,[x25, #0x2c0]
7101dee598  bl 0x710392e290
7101dee59c  cbnz x0,0x7101dee5e4
7101dee5a0  adrp x8,0x7105332000
7101dee5a4  ldr x0,[x8, #0xf00]
7101dee5a8  cbz x0,0x7101dee5e0
7101dee5ac  mov w8,#0x20
7101dee5b0  stur wzr,[x29, #-0x90]
7101dee5b4  sub x1,x29,#0x90
7101dee5b8  str x8,[sp, #0x40]
7101dee5bc  ldr x8,[x0]
7101dee5c0  ldr x8,[x8, #0x30]
7101dee5c4  add x2,sp,#0x40
7101dee5c8  blr x8
7101dee5cc  tbz w0,#0x0,0x7101dee5e0
7101dee5d0  mov w0,#0x10
7101dee5d4  mov w1,#0x20
7101dee5d8  bl 0x710392e290
7101dee5dc  cbnz x0,0x7101dee5e4
7101dee5e0  mov x0,xzr
7101dee5e4  stp xzr,xzr,[x0, #0x10]
7101dee5e8  stp xzr,xzr,[x0]
7101dee5ec  str x0,[x25, #0x2c8]
7101dee5f0  add x0,x25,#0x2d8
7101dee5f4  str x19,[x25, #0x2d0]
7101dee5f8  bl 0x7103776290
7101dee5fc  mov w0,#0x10
7101dee600  mov w1,#0x20
7101dee604  str x23,[x25, #0x2e8]
7101dee608  bl 0x710392e290
7101dee60c  cbnz x0,0x7101dee654
7101dee610  adrp x8,0x7105332000
7101dee614  ldr x0,[x8, #0xf00]
7101dee618  cbz x0,0x7101dee650
7101dee61c  mov w8,#0x20
7101dee620  stur wzr,[x29, #-0x90]
7101dee624  sub x1,x29,#0x90
7101dee628  str x8,[sp, #0x40]
7101dee62c  ldr x8,[x0]
7101dee630  ldr x8,[x8, #0x30]
7101dee634  add x2,sp,#0x40
7101dee638  blr x8
7101dee63c  tbz w0,#0x0,0x7101dee650
7101dee640  mov w0,#0x10
7101dee644  mov w1,#0x20
7101dee648  bl 0x710392e290
7101dee64c  cbnz x0,0x7101dee654
7101dee650  mov x0,xzr
7101dee654  stp xzr,xzr,[x0, #0x10]
7101dee658  stp xzr,xzr,[x0]
7101dee65c  str x0,[x25, #0x2f0]
7101dee660  add x0,x25,#0x300
7101dee664  str x19,[x25, #0x2f8]
7101dee668  bl 0x7103776290
7101dee66c  mov w0,#0x10
7101dee670  mov w1,#0x20
7101dee674  str x23,[x25, #0x310]
7101dee678  bl 0x710392e290
7101dee67c  cbnz x0,0x7101dee6c4
7101dee680  adrp x8,0x7105332000
7101dee684  ldr x0,[x8, #0xf00]
7101dee688  cbz x0,0x7101dee6c0
7101dee68c  mov w8,#0x20
7101dee690  stur wzr,[x29, #-0x90]
7101dee694  sub x1,x29,#0x90
7101dee698  str x8,[sp, #0x40]
7101dee69c  ldr x8,[x0]
7101dee6a0  ldr x8,[x8, #0x30]
7101dee6a4  add x2,sp,#0x40
7101dee6a8  blr x8
7101dee6ac  tbz w0,#0x0,0x7101dee6c0
7101dee6b0  mov w0,#0x10
7101dee6b4  mov w1,#0x20
7101dee6b8  bl 0x710392e290
7101dee6bc  cbnz x0,0x7101dee6c4
7101dee6c0  mov x0,xzr
7101dee6c4  stp xzr,xzr,[x0, #0x10]
7101dee6c8  stp xzr,xzr,[x0]
7101dee6cc  str x0,[x25, #0x318]
7101dee6d0  add x0,x25,#0x328
7101dee6d4  str x19,[x25, #0x320]
7101dee6d8  bl 0x7103776290
7101dee6dc  mov w0,#0x10
7101dee6e0  mov w1,#0x20
7101dee6e4  str x23,[x25, #0x338]
7101dee6e8  bl 0x710392e290
7101dee6ec  cbnz x0,0x7101dee734
7101dee6f0  adrp x8,0x7105332000
7101dee6f4  ldr x0,[x8, #0xf00]
7101dee6f8  cbz x0,0x7101dee730
7101dee6fc  mov w8,#0x20
7101dee700  stur wzr,[x29, #-0x90]
7101dee704  sub x1,x29,#0x90
7101dee708  str x8,[sp, #0x40]
7101dee70c  ldr x8,[x0]
7101dee710  ldr x8,[x8, #0x30]
7101dee714  add x2,sp,#0x40
7101dee718  blr x8
7101dee71c  tbz w0,#0x0,0x7101dee730
7101dee720  mov w0,#0x10
7101dee724  mov w1,#0x20
7101dee728  bl 0x710392e290
7101dee72c  cbnz x0,0x7101dee734
7101dee730  mov x0,xzr
7101dee734  stp xzr,xzr,[x0, #0x10]
7101dee738  stp xzr,xzr,[x0]
7101dee73c  str x0,[x25, #0x340]
7101dee740  add x0,x25,#0x360
7101dee744  str x19,[x25, #0x348]
7101dee748  str xzr,[x25, #0x350]
7101dee74c  strb wzr,[x25, #0x358]
7101dee750  strb wzr,[x25, #0x35a]
7101dee754  bl 0x7103776290
7101dee758  mov w0,#0x10
7101dee75c  mov w1,#0x20
7101dee760  str x23,[x25, #0x370]
7101dee764  bl 0x710392e290
7101dee768  cbnz x0,0x7101dee7b0
7101dee76c  adrp x8,0x7105332000
7101dee770  ldr x0,[x8, #0xf00]
7101dee774  cbz x0,0x7101dee7ac
7101dee778  mov w8,#0x20
7101dee77c  stur wzr,[x29, #-0x90]
7101dee780  sub x1,x29,#0x90
7101dee784  str x8,[sp, #0x40]
7101dee788  ldr x8,[x0]
7101dee78c  ldr x8,[x8, #0x30]
7101dee790  add x2,sp,#0x40
7101dee794  blr x8
7101dee798  tbz w0,#0x0,0x7101dee7ac
7101dee79c  mov w0,#0x10
7101dee7a0  mov w1,#0x20
7101dee7a4  bl 0x710392e290
7101dee7a8  cbnz x0,0x7101dee7b0
7101dee7ac  mov x0,xzr
7101dee7b0  stp xzr,xzr,[x0, #0x10]
7101dee7b4  mov w1,#0x20
7101dee7b8  stp xzr,xzr,[x0]
7101dee7bc  str x0,[x25, #0x378]
7101dee7c0  mov w0,#0x10
7101dee7c4  str x23,[x25, #0x380]
7101dee7c8  bl 0x710392e290
7101dee7cc  cbnz x0,0x7101dee814
7101dee7d0  adrp x8,0x7105332000
7101dee7d4  ldr x0,[x8, #0xf00]
7101dee7d8  cbz x0,0x7101dee810
7101dee7dc  mov w8,#0x20
7101dee7e0  stur wzr,[x29, #-0x90]
7101dee7e4  sub x1,x29,#0x90
7101dee7e8  str x8,[sp, #0x40]
7101dee7ec  ldr x8,[x0]
7101dee7f0  ldr x8,[x8, #0x30]
7101dee7f4  add x2,sp,#0x40
7101dee7f8  blr x8
7101dee7fc  tbz w0,#0x0,0x7101dee810
7101dee800  mov w0,#0x10
7101dee804  mov w1,#0x20
7101dee808  bl 0x710392e290
7101dee80c  cbnz x0,0x7101dee814
7101dee810  mov x0,xzr
7101dee814  stp xzr,xzr,[x0, #0x10]
7101dee818  mov w1,#0x20
7101dee81c  stp xzr,xzr,[x0]
7101dee820  str x0,[x25, #0x388]
7101dee824  mov w0,#0x10
7101dee828  str x23,[x25, #0x390]
7101dee82c  bl 0x710392e290
7101dee830  cbnz x0,0x7101dee878
7101dee834  adrp x8,0x7105332000
7101dee838  ldr x0,[x8, #0xf00]
7101dee83c  cbz x0,0x7101dee874
7101dee840  mov w8,#0x20
7101dee844  stur wzr,[x29, #-0x90]
7101dee848  sub x1,x29,#0x90
7101dee84c  str x8,[sp, #0x40]
7101dee850  ldr x8,[x0]
7101dee854  ldr x8,[x8, #0x30]
7101dee858  add x2,sp,#0x40
7101dee85c  blr x8
7101dee860  tbz w0,#0x0,0x7101dee874
7101dee864  mov w0,#0x10
7101dee868  mov w1,#0x20
7101dee86c  bl 0x710392e290
7101dee870  cbnz x0,0x7101dee878
7101dee874  mov x0,xzr
7101dee878  stp xzr,xzr,[x0, #0x10]
7101dee87c  mov w1,#0x20
7101dee880  stp xzr,xzr,[x0]
7101dee884  str x0,[x25, #0x398]
7101dee888  mov w0,#0x10
7101dee88c  str xzr,[x25, #0x3c8]
7101dee890  str xzr,[x25, #0x3c0]
7101dee894  str xzr,[x25, #0x3b8]
7101dee898  str xzr,[x25, #0x3b0]
7101dee89c  str xzr,[x25, #0x3a8]
7101dee8a0  str x23,[x25, #0x3a0]
7101dee8a4  bl 0x710392e290
7101dee8a8  cbnz x0,0x7101dee8f0
7101dee8ac  adrp x8,0x7105332000
7101dee8b0  ldr x0,[x8, #0xf00]
7101dee8b4  cbz x0,0x7101dee8ec
7101dee8b8  mov w8,#0x20
7101dee8bc  stur wzr,[x29, #-0x90]
7101dee8c0  sub x1,x29,#0x90
7101dee8c4  str x8,[sp, #0x40]
7101dee8c8  ldr x8,[x0]
7101dee8cc  ldr x8,[x8, #0x30]
7101dee8d0  add x2,sp,#0x40
7101dee8d4  blr x8
7101dee8d8  tbz w0,#0x0,0x7101dee8ec
7101dee8dc  mov w0,#0x10
7101dee8e0  mov w1,#0x20
7101dee8e4  bl 0x710392e290
7101dee8e8  cbnz x0,0x7101dee8f0
7101dee8ec  mov x0,xzr
7101dee8f0  stp xzr,xzr,[x0, #0x10]
7101dee8f4  mov w1,#0x20
7101dee8f8  stp xzr,xzr,[x0]
7101dee8fc  str x0,[x25, #0x3a8]
7101dee900  mov w0,#0x10
7101dee904  str x23,[x25, #0x3b0]
7101dee908  bl 0x710392e290
7101dee90c  cbnz x0,0x7101dee954
7101dee910  adrp x8,0x7105332000
7101dee914  ldr x0,[x8, #0xf00]
7101dee918  cbz x0,0x7101dee950
7101dee91c  mov w8,#0x20
7101dee920  stur wzr,[x29, #-0x90]
7101dee924  sub x1,x29,#0x90
7101dee928  str x8,[sp, #0x40]
7101dee92c  ldr x8,[x0]
7101dee930  ldr x8,[x8, #0x30]
7101dee934  add x2,sp,#0x40
7101dee938  blr x8
7101dee93c  tbz w0,#0x0,0x7101dee950
7101dee940  mov w0,#0x10
7101dee944  mov w1,#0x20
7101dee948  bl 0x710392e290
7101dee94c  cbnz x0,0x7101dee954
7101dee950  mov x0,xzr
7101dee954  stp xzr,xzr,[x0, #0x10]
7101dee958  mov w1,#0x20
7101dee95c  stp xzr,xzr,[x0]
7101dee960  str x0,[x25, #0x3b8]
7101dee964  mov w0,#0x10
7101dee968  str x23,[x25, #0x3c0]
7101dee96c  bl 0x710392e290
7101dee970  cbnz x0,0x7101dee9b8
7101dee974  adrp x8,0x7105332000
7101dee978  ldr x0,[x8, #0xf00]
7101dee97c  cbz x0,0x7101dee9b4
7101dee980  mov w8,#0x20
7101dee984  stur wzr,[x29, #-0x90]
7101dee988  sub x1,x29,#0x90
7101dee98c  str x8,[sp, #0x40]
7101dee990  ldr x8,[x0]
7101dee994  ldr x8,[x8, #0x30]
7101dee998  add x2,sp,#0x40
7101dee99c  blr x8
7101dee9a0  tbz w0,#0x0,0x7101dee9b4
7101dee9a4  mov w0,#0x10
7101dee9a8  mov w1,#0x20
7101dee9ac  bl 0x710392e290
7101dee9b0  cbnz x0,0x7101dee9b8
7101dee9b4  mov x0,xzr
7101dee9b8  stp xzr,xzr,[x0, #0x10]
7101dee9bc  mov w1,#0x20
7101dee9c0  stp xzr,xzr,[x0]
7101dee9c4  str x0,[x25, #0x3c8]
7101dee9c8  mov w0,#0x10
7101dee9cc  str xzr,[x25, #0x3f8]
7101dee9d0  str xzr,[x25, #0x3f0]
7101dee9d4  str xzr,[x25, #0x3e8]
7101dee9d8  str xzr,[x25, #0x3e0]
7101dee9dc  str xzr,[x25, #0x3d8]
7101dee9e0  str x23,[x25, #0x3d0]
7101dee9e4  bl 0x710392e290
7101dee9e8  cbnz x0,0x7101deea30
7101dee9ec  adrp x8,0x7105332000
7101dee9f0  ldr x0,[x8, #0xf00]
7101dee9f4  cbz x0,0x7101deea2c
7101dee9f8  mov w8,#0x20
7101dee9fc  stur wzr,[x29, #-0x90]
7101deea00  sub x1,x29,#0x90
7101deea04  str x8,[sp, #0x40]
7101deea08  ldr x8,[x0]
7101deea0c  ldr x8,[x8, #0x30]
7101deea10  add x2,sp,#0x40
7101deea14  blr x8
7101deea18  tbz w0,#0x0,0x7101deea2c
7101deea1c  mov w0,#0x10
7101deea20  mov w1,#0x20
7101deea24  bl 0x710392e290
7101deea28  cbnz x0,0x7101deea30
7101deea2c  mov x0,xzr
7101deea30  stp xzr,xzr,[x0, #0x10]
7101deea34  mov w1,#0x20
7101deea38  stp xzr,xzr,[x0]
7101deea3c  str x0,[x25, #0x3d8]
7101deea40  mov w0,#0x10
7101deea44  str x23,[x25, #0x3e0]
7101deea48  bl 0x710392e290
7101deea4c  cbnz x0,0x7101deea94
7101deea50  adrp x8,0x7105332000
7101deea54  ldr x0,[x8, #0xf00]
7101deea58  cbz x0,0x7101deea90
7101deea5c  mov w8,#0x20
7101deea60  stur wzr,[x29, #-0x90]
7101deea64  sub x1,x29,#0x90
7101deea68  str x8,[sp, #0x40]
7101deea6c  ldr x8,[x0]
7101deea70  ldr x8,[x8, #0x30]
7101deea74  add x2,sp,#0x40
7101deea78  blr x8
7101deea7c  tbz w0,#0x0,0x7101deea90
7101deea80  mov w0,#0x10
7101deea84  mov w1,#0x20
7101deea88  bl 0x710392e290
7101deea8c  cbnz x0,0x7101deea94
7101deea90  mov x0,xzr
7101deea94  stp xzr,xzr,[x0, #0x10]
7101deea98  mov w1,#0x20
7101deea9c  stp xzr,xzr,[x0]
7101deeaa0  str x0,[x25, #0x3e8]
7101deeaa4  mov w0,#0x10
7101deeaa8  str x23,[x25, #0x3f0]
7101deeaac  bl 0x710392e290
7101deeab0  cbnz x0,0x7101deeaf8
7101deeab4  adrp x8,0x7105332000
7101deeab8  ldr x0,[x8, #0xf00]
7101deeabc  cbz x0,0x7101deeaf4
7101deeac0  mov w8,#0x20
7101deeac4  stur wzr,[x29, #-0x90]
7101deeac8  sub x1,x29,#0x90
7101deeacc  str x8,[sp, #0x40]
7101deead0  ldr x8,[x0]
7101deead4  ldr x8,[x8, #0x30]
7101deead8  add x2,sp,#0x40
7101deeadc  blr x8
7101deeae0  tbz w0,#0x0,0x7101deeaf4
7101deeae4  mov w0,#0x10
7101deeae8  mov w1,#0x20
7101deeaec  bl 0x710392e290
7101deeaf0  cbnz x0,0x7101deeaf8
7101deeaf4  mov x0,xzr
7101deeaf8  orr w8,wzr,#0xffff
7101deeafc  stp xzr,xzr,[x0, #0x10]
7101deeb00  stp xzr,xzr,[x0]
7101deeb04  strh w8,[x25, #0x400]
7101deeb08  mov x8,#0xff0000000000
7101deeb0c  movk x8,#0x71ff, LSL #48
7101deeb10  str x0,[x25, #0x3f8]
7101deeb14  add x0,x25,#0x438
7101deeb18  str x8,[x25, #0x408]
7101deeb1c  strb wzr,[x25, #0x410]
7101deeb20  str x27,[x25, #0x418]
7101deeb24  str xzr,[x25, #0x430]
7101deeb28  str xzr,[x25, #0x428]
7101deeb2c  str xzr,[x25, #0x420]
7101deeb30  bl 0x7103776290
7101deeb34  mov w0,#0x10
7101deeb38  mov w1,#0x20
7101deeb3c  str x23,[x25, #0x448]
7101deeb40  bl 0x710392e290
7101deeb44  cbnz x0,0x7101deeb8c
7101deeb48  adrp x8,0x7105332000
7101deeb4c  ldr x0,[x8, #0xf00]
7101deeb50  cbz x0,0x7101deeb88
7101deeb54  mov w8,#0x20
7101deeb58  stur wzr,[x29, #-0x90]
7101deeb5c  sub x1,x29,#0x90
7101deeb60  str x8,[sp, #0x40]
7101deeb64  ldr x8,[x0]
7101deeb68  ldr x8,[x8, #0x30]
7101deeb6c  add x2,sp,#0x40
7101deeb70  blr x8
7101deeb74  tbz w0,#0x0,0x7101deeb88
7101deeb78  mov w0,#0x10
7101deeb7c  mov w1,#0x20
7101deeb80  bl 0x710392e290
7101deeb84  cbnz x0,0x7101deeb8c
7101deeb88  mov x0,xzr
7101deeb8c  stp xzr,xzr,[x0, #0x10]
7101deeb90  mov w1,#0x20
7101deeb94  stp xzr,xzr,[x0]
7101deeb98  str x0,[x25, #0x450]
7101deeb9c  mov w0,#0x10
7101deeba0  str xzr,[x25, #0x4a0]
7101deeba4  str xzr,[x25, #0x498]
7101deeba8  str xzr,[x25, #0x490]
7101deebac  str xzr,[x25, #0x488]
7101deebb0  str xzr,[x25, #0x480]
7101deebb4  str xzr,[x25, #0x478]
7101deebb8  str xzr,[x25, #0x470]
7101deebbc  str xzr,[x25, #0x468]
7101deebc0  str xzr,[x25, #0x460]
7101deebc4  str x23,[x25, #0x458]
7101deebc8  bl 0x710392e290
7101deebcc  cbnz x0,0x7101deec14
7101deebd0  adrp x8,0x7105332000
7101deebd4  ldr x0,[x8, #0xf00]
7101deebd8  cbz x0,0x7101deec10
7101deebdc  mov w8,#0x20
7101deebe0  stur wzr,[x29, #-0x90]
7101deebe4  sub x1,x29,#0x90
7101deebe8  str x8,[sp, #0x40]
7101deebec  ldr x8,[x0]
7101deebf0  ldr x8,[x8, #0x30]
7101deebf4  add x2,sp,#0x40
7101deebf8  blr x8
7101deebfc  tbz w0,#0x0,0x7101deec10
7101deec00  mov w0,#0x10
7101deec04  mov w1,#0x20
7101deec08  bl 0x710392e290
7101deec0c  cbnz x0,0x7101deec14
7101deec10  mov x0,xzr
7101deec14  stp xzr,xzr,[x0, #0x10]
7101deec18  mov w1,#0x20
7101deec1c  stp xzr,xzr,[x0]
7101deec20  str x0,[x25, #0x460]
7101deec24  mov w0,#0x10
7101deec28  str x23,[x25, #0x468]
7101deec2c  bl 0x710392e290
7101deec30  cbnz x0,0x7101deec78
7101deec34  adrp x8,0x7105332000
7101deec38  ldr x0,[x8, #0xf00]
7101deec3c  cbz x0,0x7101deec74
7101deec40  mov w8,#0x20
7101deec44  stur wzr,[x29, #-0x90]
7101deec48  sub x1,x29,#0x90
7101deec4c  str x8,[sp, #0x40]
7101deec50  ldr x8,[x0]
7101deec54  ldr x8,[x8, #0x30]
7101deec58  add x2,sp,#0x40
7101deec5c  blr x8
7101deec60  tbz w0,#0x0,0x7101deec74
7101deec64  mov w0,#0x10
7101deec68  mov w1,#0x20
7101deec6c  bl 0x710392e290
7101deec70  cbnz x0,0x7101deec78
7101deec74  mov x0,xzr
7101deec78  stp xzr,xzr,[x0, #0x10]
7101deec7c  mov w1,#0x20
7101deec80  stp xzr,xzr,[x0]
7101deec84  str x0,[x25, #0x470]
7101deec88  mov w0,#0x10
7101deec8c  str x23,[x25, #0x478]
7101deec90  bl 0x710392e290
7101deec94  cbnz x0,0x7101deecdc
7101deec98  adrp x8,0x7105332000
7101deec9c  ldr x0,[x8, #0xf00]
7101deeca0  cbz x0,0x7101deecd8
7101deeca4  mov w8,#0x20
7101deeca8  stur wzr,[x29, #-0x90]
7101deecac  sub x1,x29,#0x90
7101deecb0  str x8,[sp, #0x40]
7101deecb4  ldr x8,[x0]
7101deecb8  ldr x8,[x8, #0x30]
7101deecbc  add x2,sp,#0x40
7101deecc0  blr x8
7101deecc4  tbz w0,#0x0,0x7101deecd8
7101deecc8  mov w0,#0x10
7101deeccc  mov w1,#0x20
7101deecd0  bl 0x710392e290
7101deecd4  cbnz x0,0x7101deecdc
7101deecd8  mov x0,xzr
7101deecdc  stp xzr,xzr,[x0, #0x10]
7101deece0  mov w1,#0x20
7101deece4  stp xzr,xzr,[x0]
7101deece8  str x0,[x25, #0x480]
7101deecec  mov w0,#0x10
7101deecf0  str x23,[x25, #0x488]
7101deecf4  bl 0x710392e290
7101deecf8  cbnz x0,0x7101deed40
7101deecfc  adrp x8,0x7105332000
7101deed00  ldr x0,[x8, #0xf00]
7101deed04  cbz x0,0x7101deed3c
7101deed08  mov w8,#0x20
7101deed0c  stur wzr,[x29, #-0x90]
7101deed10  sub x1,x29,#0x90
7101deed14  str x8,[sp, #0x40]
7101deed18  ldr x8,[x0]
7101deed1c  ldr x8,[x8, #0x30]
7101deed20  add x2,sp,#0x40
7101deed24  blr x8
7101deed28  tbz w0,#0x0,0x7101deed3c
7101deed2c  mov w0,#0x10
7101deed30  mov w1,#0x20
7101deed34  bl 0x710392e290
7101deed38  cbnz x0,0x7101deed40
7101deed3c  mov x0,xzr
7101deed40  stp xzr,xzr,[x0, #0x10]
7101deed44  mov w1,#0x20
7101deed48  stp xzr,xzr,[x0]
7101deed4c  str x0,[x25, #0x490]
7101deed50  mov w0,#0x10
7101deed54  str x23,[x25, #0x498]
7101deed58  bl 0x710392e290
7101deed5c  cbnz x0,0x7101deeda4
7101deed60  adrp x8,0x7105332000
7101deed64  ldr x0,[x8, #0xf00]
7101deed68  cbz x0,0x7101deeda0
7101deed6c  mov w8,#0x20
7101deed70  stur wzr,[x29, #-0x90]
7101deed74  sub x1,x29,#0x90
7101deed78  str x8,[sp, #0x40]
7101deed7c  ldr x8,[x0]
7101deed80  ldr x8,[x8, #0x30]
7101deed84  add x2,sp,#0x40
7101deed88  blr x8
7101deed8c  tbz w0,#0x0,0x7101deeda0
7101deed90  mov w0,#0x10
7101deed94  mov w1,#0x20
7101deed98  bl 0x710392e290
7101deed9c  cbnz x0,0x7101deeda4
7101deeda0  mov x0,xzr
7101deeda4  stp xzr,xzr,[x0, #0x10]
7101deeda8  mov w1,#0x20
7101deedac  stp xzr,xzr,[x0]
7101deedb0  str x0,[x25, #0x4a0]
7101deedb4  mov w0,#0x10
7101deedb8  str xzr,[x25, #0x4f0]
7101deedbc  str xzr,[x25, #0x4e8]
7101deedc0  str xzr,[x25, #0x4e0]
7101deedc4  str xzr,[x25, #0x4d8]
7101deedc8  str xzr,[x25, #0x4d0]
7101deedcc  str xzr,[x25, #0x4c8]
7101deedd0  str xzr,[x25, #0x4c0]
7101deedd4  str xzr,[x25, #0x4b8]
7101deedd8  str xzr,[x25, #0x4b0]
7101deeddc  str x23,[x25, #0x4a8]
7101deede0  bl 0x710392e290
7101deede4  cbnz x0,0x7101deee2c
7101deede8  adrp x8,0x7105332000
7101deedec  ldr x0,[x8, #0xf00]
7101deedf0  cbz x0,0x7101deee28
7101deedf4  mov w8,#0x20
7101deedf8  stur wzr,[x29, #-0x90]
7101deedfc  sub x1,x29,#0x90
7101deee00  str x8,[sp, #0x40]
7101deee04  ldr x8,[x0]
7101deee08  ldr x8,[x8, #0x30]
7101deee0c  add x2,sp,#0x40
7101deee10  blr x8
7101deee14  tbz w0,#0x0,0x7101deee28
7101deee18  mov w0,#0x10
7101deee1c  mov w1,#0x20
7101deee20  bl 0x710392e290
7101deee24  cbnz x0,0x7101deee2c
7101deee28  mov x0,xzr
7101deee2c  stp xzr,xzr,[x0, #0x10]
7101deee30  mov w1,#0x20
7101deee34  stp xzr,xzr,[x0]
7101deee38  str x0,[x25, #0x4b0]
7101deee3c  mov w0,#0x10
7101deee40  str x23,[x25, #0x4b8]
7101deee44  bl 0x710392e290
7101deee48  cbnz x0,0x7101deee90
7101deee4c  adrp x8,0x7105332000
7101deee50  ldr x0,[x8, #0xf00]
7101deee54  cbz x0,0x7101deee8c
7101deee58  mov w8,#0x20
7101deee5c  stur wzr,[x29, #-0x90]
7101deee60  sub x1,x29,#0x90
7101deee64  str x8,[sp, #0x40]
7101deee68  ldr x8,[x0]
7101deee6c  ldr x8,[x8, #0x30]
7101deee70  add x2,sp,#0x40
7101deee74  blr x8
7101deee78  tbz w0,#0x0,0x7101deee8c
7101deee7c  mov w0,#0x10
7101deee80  mov w1,#0x20
7101deee84  bl 0x710392e290
7101deee88  cbnz x0,0x7101deee90
7101deee8c  mov x0,xzr
7101deee90  stp xzr,xzr,[x0, #0x10]
7101deee94  mov w1,#0x20
7101deee98  stp xzr,xzr,[x0]
7101deee9c  str x0,[x25, #0x4c0]
7101deeea0  mov w0,#0x10
7101deeea4  str x23,[x25, #0x4c8]
7101deeea8  bl 0x710392e290
7101deeeac  cbnz x0,0x7101deeef4
7101deeeb0  adrp x8,0x7105332000
7101deeeb4  ldr x0,[x8, #0xf00]
7101deeeb8  cbz x0,0x7101deeef0
7101deeebc  mov w8,#0x20
7101deeec0  stur wzr,[x29, #-0x90]
7101deeec4  sub x1,x29,#0x90
7101deeec8  str x8,[sp, #0x40]
7101deeecc  ldr x8,[x0]
7101deeed0  ldr x8,[x8, #0x30]
7101deeed4  add x2,sp,#0x40
7101deeed8  blr x8
7101deeedc  tbz w0,#0x0,0x7101deeef0
7101deeee0  mov w0,#0x10
7101deeee4  mov w1,#0x20
7101deeee8  bl 0x710392e290
7101deeeec  cbnz x0,0x7101deeef4
7101deeef0  mov x0,xzr
7101deeef4  stp xzr,xzr,[x0, #0x10]
7101deeef8  mov w1,#0x20
7101deeefc  stp xzr,xzr,[x0]
7101deef00  str x0,[x25, #0x4d0]
7101deef04  mov w0,#0x10
7101deef08  str x23,[x25, #0x4d8]
7101deef0c  bl 0x710392e290
7101deef10  cbnz x0,0x7101deef58
7101deef14  adrp x8,0x7105332000
7101deef18  ldr x0,[x8, #0xf00]
7101deef1c  cbz x0,0x7101deef54
7101deef20  mov w8,#0x20
7101deef24  stur wzr,[x29, #-0x90]
7101deef28  sub x1,x29,#0x90
7101deef2c  str x8,[sp, #0x40]
7101deef30  ldr x8,[x0]
7101deef34  ldr x8,[x8, #0x30]
7101deef38  add x2,sp,#0x40
7101deef3c  blr x8
7101deef40  tbz w0,#0x0,0x7101deef54
7101deef44  mov w0,#0x10
7101deef48  mov w1,#0x20
7101deef4c  bl 0x710392e290
7101deef50  cbnz x0,0x7101deef58
7101deef54  mov x0,xzr
7101deef58  stp xzr,xzr,[x0, #0x10]
7101deef5c  mov w1,#0x20
7101deef60  stp xzr,xzr,[x0]
7101deef64  str x0,[x25, #0x4e0]
7101deef68  mov w0,#0x10
7101deef6c  str x23,[x25, #0x4e8]
7101deef70  bl 0x710392e290
7101deef74  cbnz x0,0x7101deefbc
7101deef78  adrp x8,0x7105332000
7101deef7c  ldr x0,[x8, #0xf00]
7101deef80  cbz x0,0x7101deefb8
7101deef84  mov w8,#0x20
7101deef88  stur wzr,[x29, #-0x90]
7101deef8c  sub x1,x29,#0x90
7101deef90  str x8,[sp, #0x40]
7101deef94  ldr x8,[x0]
7101deef98  ldr x8,[x8, #0x30]
7101deef9c  add x2,sp,#0x40
7101deefa0  blr x8
7101deefa4  tbz w0,#0x0,0x7101deefb8
7101deefa8  mov w0,#0x10
7101deefac  mov w1,#0x20
7101deefb0  bl 0x710392e290
7101deefb4  cbnz x0,0x7101deefbc
7101deefb8  mov x0,xzr
7101deefbc  stp xzr,xzr,[x0, #0x10]
7101deefc0  stp xzr,xzr,[x0]
7101deefc4  str x0,[x25, #0x4f0]
7101deefc8  add x0,x25,#0x500
7101deefcc  str xzr,[x25, #0x4f8]
7101deefd0  bl 0x7103776290
7101deefd4  orr w8,wzr,#0xffff
7101deefd8  strh w8,[x25, #0x510]
7101deefdc  adrp x8,0x7101e03000
7101deefe0  add x8,x8,#0x1b0
7101deefe4  stp x8,xzr,[x25, #0x50]
7101deefe8  adrp x8,0x7101e03000
7101deefec  add x8,x8,#0x3d0
7101deeff0  adrp x9,0x7101e03000
7101deeff4  add x9,x9,#0x110
7101deeff8  stp x8,xzr,[x25, #0x60]
7101deeffc  adrp x8,0x7101e03000
7101def000  add x8,x8,#0x530
7101def004  adrp x10,0x7101e03000
7101def008  add x10,x10,#0x120
7101def00c  stp x8,xzr,[x25, #0x70]
7101def010  ldrsw x8,[x25, #0xdc]
7101def014  cmp w8,#0x13
7101def018  stp x9,xzr,[x25, #0x30]
7101def01c  stp x10,xzr,[x25, #0x40]
7101def020  stp x9,xzr,[x25, #0x80]
7101def024  b.cs 0x7101df0830
7101def028  add x8,x25,x8, LSL #0x2
7101def02c  adrp x22,0x7105333000
7101def030  add x22,x22,#0x600
7101def034  str wzr,[x8, #0x90]
7101def038  str x25,[x24, #0x80]
7101def03c  str x22,[x24, #0x10]
7101def040  ldr w8,[x22, #0x60]
7101def044  str w8,[x24, #0x68]
7101def048  ldr w8,[x22, #0x64]
7101def04c  str w8,[x24, #0x6c]
7101def050  adrp x21,0x7105333000
7101def054  add x21,x21,#0x650
7101def058  mov w8,#0x1
7101def05c  ldaxrb w9,[x21]
7101def060  stxrb w10,w8,[x21]
7101def064  and w9,w9,#0x1
7101def068  cmp w10,#0x0
7101def06c  ccmp w9,#0x0,#0x0,eq
7101def070  b.ne 0x7101def05c
7101def074  adrp x27,0x7105333000
7101def078  add x27,x27,#0x648
7101def07c  ldr x8,[x27]
7101def080  mov x9,x27
7101def084  str x8,[x24, #0x48]
7101def088  mov x0,x24
7101def08c  str x24,[x9], #0x8
7101def090  stlrb wzr,[x9]
7101def094  bl 0x71032caea0
7101def098  ldr x0,[x28, #0x28]
7101def09c  str x24,[x28, #0x28]
7101def0a0  cbz x0,0x7101def0a8
7101def0a4  bl 0x71032cad20
7101def0a8  ldr x20,[x28]
7101def0ac  mov w1,#0x88
7101def0b0  mov w0,#0x10
7101def0b4  bl 0x710392e290
7101def0b8  mov x24,x0
7101def0bc  cbnz x0,0x7101def108
7101def0c0  adrp x8,0x7105332000
7101def0c4  ldr x0,[x8, #0xf00]
7101def0c8  cbz x0,0x7101def104
7101def0cc  mov w8,#0x88
7101def0d0  stur wzr,[x29, #-0x90]
7101def0d4  sub x1,x29,#0x90
7101def0d8  str x8,[sp, #0x40]
7101def0dc  ldr x8,[x0]
7101def0e0  ldr x8,[x8, #0x30]
7101def0e4  add x2,sp,#0x40
7101def0e8  blr x8
7101def0ec  tbz w0,#0x0,0x7101def104
7101def0f0  mov w1,#0x88
7101def0f4  mov w0,#0x10
7101def0f8  bl 0x710392e290
7101def0fc  mov x24,x0
7101def100  cbnz x0,0x7101def108
7101def104  mov x24,xzr
7101def108  adrp x8,0x71050b0000
7101def10c  add x8,x8,#0xe88
7101def110  mov w1,#0x250
7101def114  stp x8,xzr,[x24]
7101def118  orr x8,xzr,#0x1ffffffff
7101def11c  stp xzr,x8,[x24, #0x60]
7101def120  mov w8,#0x1
7101def124  mov w0,#0x10
7101def128  stp xzr,xzr,[x24, #0x10]
7101def12c  strb wzr,[x24, #0x58]
7101def130  str x20,[x24, #0x78]
7101def134  strb w8,[x24, #0x70]
7101def138  stp xzr,xzr,[x24, #0x48]
7101def13c  bl 0x710392e290
7101def140  mov x25,x0
7101def144  cbnz x0,0x7101def190
7101def148  adrp x8,0x7105332000
7101def14c  ldr x0,[x8, #0xf00]
7101def150  cbz x0,0x7101def18c
7101def154  mov w8,#0x250
7101def158  stur wzr,[x29, #-0x90]
7101def15c  sub x1,x29,#0x90
7101def160  str x8,[sp, #0x40]
7101def164  ldr x8,[x0]
7101def168  ldr x8,[x8, #0x30]
7101def16c  add x2,sp,#0x40
7101def170  blr x8
7101def174  tbz w0,#0x0,0x7101def18c
7101def178  mov w1,#0x250
7101def17c  mov w0,#0x10
7101def180  bl 0x710392e290
7101def184  mov x25,x0
7101def188  cbnz x0,0x7101def190
7101def18c  mov x25,xzr
7101def190  mov w0,#0x10
7101def194  mov w1,#0x8
7101def198  str w26,[x25, #0xe8]
7101def19c  stp x20,x25,[x25]
7101def1a0  strb wzr,[x25, #0xec]
7101def1a4  str xzr,[x25, #0x30]
7101def1a8  stp xzr,xzr,[x25, #0x10]
7101def1ac  stp xzr,xzr,[x25, #0x20]
7101def1b0  stp xzr,x26,[x25, #0xd8]
7101def1b4  stp xzr,xzr,[x25, #0xc8]
7101def1b8  stp xzr,xzr,[x25, #0xb8]
7101def1bc  stp xzr,xzr,[x25, #0xa8]
7101def1c0  stp xzr,xzr,[x25, #0x98]
7101def1c4  stp xzr,xzr,[x25, #0x88]
7101def1c8  stp xzr,xzr,[x25, #0x78]
7101def1cc  stp xzr,xzr,[x25, #0x68]
7101def1d0  stp xzr,xzr,[x25, #0x58]
7101def1d4  stp xzr,xzr,[x25, #0x48]
7101def1d8  stp xzr,xzr,[x25, #0x38]
7101def1dc  bl 0x710392e290
7101def1e0  mov x26,x0
7101def1e4  cbnz x0,0x7101def230
7101def1e8  adrp x8,0x7105332000
7101def1ec  ldr x0,[x8, #0xf00]
7101def1f0  cbz x0,0x7101def22c
7101def1f4  mov w8,#0x8
7101def1f8  stur wzr,[x29, #-0x90]
7101def1fc  sub x1,x29,#0x90
7101def200  str x8,[sp, #0x40]
7101def204  ldr x8,[x0]
7101def208  ldr x8,[x8, #0x30]
7101def20c  add x2,sp,#0x40
7101def210  blr x8
7101def214  tbz w0,#0x0,0x7101def22c
7101def218  mov w0,#0x10
7101def21c  mov w1,#0x8
7101def220  bl 0x710392e290
7101def224  mov x26,x0
7101def228  cbnz x0,0x7101def230
7101def22c  mov x26,xzr
7101def230  mov x0,x26
7101def234  bl 0x7103773200
7101def238  mov w8,#0x900
7101def23c  strh w8,[x25, #0x108]
7101def240  mov w8,#0x1
7101def244  add x0,x25,#0x118
7101def248  mov w1,#0x9
7101def24c  str x26,[x25, #0xf0]
7101def250  str x20,[x25, #0x100]
7101def254  stp xzr,xzr,[x25, #0x138]
7101def258  str xzr,[x25, #0x110]
7101def25c  strh w8,[x25, #0x148]
7101def260  strb wzr,[x25, #0x14a]
7101def264  strb wzr,[x25, #0x170]
7101def268  stp xzr,xzr,[x25, #0x128]
7101def26c  stp xzr,xzr,[x25, #0x118]
7101def270  stp xzr,xzr,[x25, #0x160]
7101def274  stp xzr,xzr,[x25, #0x150]
7101def278  bl 0x7101df1a60
7101def27c  ldp x9,x26,[x25, #0x130]
7101def280  ldrb w8,[x25, #0x109]
7101def284  sub x10,x26,x9
7101def288  asr x10,x10,#0x4
7101def28c  cmp x10,x8
7101def290  b.cs 0x7101def2a4
7101def294  add x0,x25,#0x130
7101def298  sub x1,x8,x10
7101def29c  bl 0x7101bb9cd0
7101def2a0  b 0x7101def2d0
7101def2a4  b.ls 0x7101def2d0
7101def2a8  add x19,x9,x8, LSL #0x4
7101def2ac  cmp x19,x26
7101def2b0  b.eq 0x7101def2cc
7101def2b4  ldr x8,[x26, #-0x10]!
7101def2b8  ldr x8,[x8]
7101def2bc  mov x0,x26
7101def2c0  blr x8
7101def2c4  cmp x19,x26
7101def2c8  b.ne 0x7101def2b4
7101def2cc  str x19,[x25, #0x138]
7101def2d0  mov w8,#0x1009
7101def2d4  strh w8,[x25, #0x198]
7101def2d8  mov w8,#0x1
7101def2dc  add x0,x25,#0x1a8
7101def2e0  mov w1,#0x10
7101def2e4  str x20,[x25, #0x190]
7101def2e8  stp xzr,xzr,[x25, #0x1c8]
7101def2ec  str xzr,[x25, #0x1a0]
7101def2f0  strh w8,[x25, #0x1d8]
7101def2f4  strb wzr,[x25, #0x1da]
7101def2f8  strb wzr,[x25, #0x200]
7101def2fc  stp xzr,xzr,[x25, #0x1b8]
7101def300  stp xzr,xzr,[x25, #0x1a8]
7101def304  stp xzr,xzr,[x25, #0x1f0]
7101def308  stp xzr,xzr,[x25, #0x1e0]
7101def30c  bl 0x7101df1a60
7101def310  ldp x9,x26,[x25, #0x1c0]
7101def314  ldrb w8,[x25, #0x199]
7101def318  sub x10,x26,x9
7101def31c  asr x10,x10,#0x4
7101def320  cmp x10,x8
7101def324  b.cs 0x7101def338
7101def328  add x0,x25,#0x1c0
7101def32c  sub x1,x8,x10
7101def330  bl 0x7101bb9cd0
7101def334  b 0x7101def364
7101def338  b.ls 0x7101def364
7101def33c  add x19,x9,x8, LSL #0x4
7101def340  cmp x19,x26
7101def344  b.eq 0x7101def360
7101def348  ldr x8,[x26, #-0x10]!
7101def34c  ldr x8,[x8]
7101def350  mov x0,x26
7101def354  blr x8
7101def358  cmp x19,x26
7101def35c  b.ne 0x7101def348
7101def360  str x19,[x25, #0x1c8]
7101def364  add x0,x25,#0x238
7101def368  str xzr,[x25, #0x230]
7101def36c  str xzr,[x25, #0x228]
7101def370  str xzr,[x25, #0x220]
7101def374  bl 0x7103776290
7101def378  mov w8,#0x1
7101def37c  strb w8,[x25, #0x24a]
7101def380  adrp x8,0x7101df1000
7101def384  add x8,x8,#0xc60
7101def388  stp x8,xzr,[x25, #0x40]
7101def38c  adrp x8,0x7101df1000
7101def390  add x8,x8,#0xee0
7101def394  adrp x9,0x7101df1000
7101def398  add x9,x9,#0xc50
7101def39c  stp x8,xzr,[x25, #0x60]
7101def3a0  adrp x8,0x7101df2000
7101def3a4  add x8,x8,#0x2f0
7101def3a8  adrp x10,0x7101df1000
7101def3ac  add x10,x10,#0xcc0
7101def3b0  stp x8,xzr,[x25, #0x70]
7101def3b4  ldrsw x8,[x25, #0xdc]
7101def3b8  cmp w8,#0x13
7101def3bc  strh wzr,[x25, #0x248]
7101def3c0  stp x9,xzr,[x25, #0x30]
7101def3c4  stp x10,xzr,[x25, #0x50]
7101def3c8  stp x9,xzr,[x25, #0x80]
7101def3cc  b.cs 0x7101df0830
7101def3d0  add x8,x25,x8, LSL #0x2
7101def3d4  str wzr,[x8, #0x90]
7101def3d8  str x25,[x24, #0x80]
7101def3dc  str x22,[x24, #0x10]
7101def3e0  ldr w8,[x22, #0x60]
7101def3e4  str w8,[x24, #0x68]
7101def3e8  ldr w8,[x22, #0x64]
7101def3ec  str w8,[x24, #0x6c]
7101def3f0  mov w8,#0x1
7101def3f4  ldaxrb w9,[x21]
7101def3f8  stxrb w10,w8,[x21]
7101def3fc  and w9,w9,#0x1
7101def400  cmp w10,#0x0
7101def404  ccmp w9,#0x0,#0x0,eq
7101def408  b.ne 0x7101def3f4
7101def40c  ldr x8,[x27]
7101def410  str x8,[x24, #0x48]
7101def414  mov x0,x24
7101def418  str x24,[x27], #0x8
7101def41c  stlrb wzr,[x27]
7101def420  bl 0x71032caea0
7101def424  ldr x0,[x28, #0x30]
7101def428  str x24,[x28, #0x30]
7101def42c  cbz x0,0x7101def434
7101def430  bl 0x71032cad20
7101def434  ldp x8,x12,[sp, #0x20]
7101def438  ldr x8,[x8]
7101def43c  ldr x8,[x8]
7101def440  ldr x9,[x8]
7101def444  ldr w8,[x12]
7101def448  cmp w8,#0xd
7101def44c  b.hi 0x7101df07e8
7101def450  adrp x10,0x71044fb000
7101def454  add x10,x10,#0x7b0
7101def458  ldrsw x8,[x10, x8, LSL #0x2]
7101def45c  add x8,x8,x10
7101def460  br x8
7101def464  ldr x10,[x9, #0x600]
7101def468  mov w11,#0x80
7101def46c  str w11,[x10, #0xdc]
7101def470  add x8,x9,#0x600
7101def474  ldr x9,[x9, #0x600]
7101def478  mov w10,#0x10
7101def47c  str w10,[x9, #0xe0]
7101def480  ldr x9,[x8]
7101def484  mov w10,#0x10
7101def488  str w10,[x9, #0x20]
7101def48c  ldr x9,[x8]
7101def490  mov w10,#0x80
7101def494  str w10,[x9, #0x1c]
7101def498  ldr x9,[x8]
7101def49c  mov w10,#0x500
7101def4a0  str w10,[x9, #0x18]
7101def4a4  ldr x8,[x8]
7101def4a8  mov w9,#0x200
7101def4ac  str w9,[x8, #0x24]
7101def4b0  ldr x8,[x28, #0x28]
7101def4b4  ldr x22,[x8, #0x80]
7101def4b8  mov x24,x22
7101def4bc  ldrb w19,[x12, #0x12]
7101def4c0  ldr x8,[x24], #0xf0
7101def4c4  ldr x1,[x8]
7101def4c8  adrp x2,0x7104545000
7101def4cc  add x2,x2,#0x9c0
7101def4d0  mov w3,#0x1
7101def4d4  mov x0,x24
7101def4d8  bl 0x71032cbf30
7101def4dc  ldr x8,[x24]
7101def4e0  ldr x8,[x8]
7101def4e4  ldr x0,[x8]
7101def4e8  mov w1,wzr
7101def4ec  bl 0x71037760f0
7101def4f0  ldr x8,[x24]
7101def4f4  ldr x8,[x8]
7101def4f8  ldr x9,[x8]
7101def4fc  ldr x8,[x9, #0x600]
7101def500  mov w10,#0x2
7101def504  str w10,[x8, #0x494]
7101def508  ldr x8,[x9, #0x608]
7101def50c  ldr x9,[x9, #0x610]
7101def510  cmp x8,x9
7101def514  b.eq 0x7101def584
7101def518  sub x10,x9,#0x10
7101def51c  sub x10,x10,x8
7101def520  ubfx x11,x10,#0x4,#0x1c
7101def524  add w11,w11,#0x1
7101def528  ands x11,x11,#0x3
7101def52c  b.eq 0x7101def54c
7101def530  neg x11,x11
7101def534  mov w12,#0x2
7101def538  ldr x13,[x8, #0x8]
7101def53c  add x8,x8,#0x10
7101def540  adds x11,x11,#0x1
7101def544  str w12,[x13, #0x494]
7101def548  b.ne 0x7101def538
7101def54c  cmp x10,#0x30
7101def550  b.cc 0x7101def584
7101def554  mov w10,#0x2
7101def558  ldr x11,[x8, #0x8]
7101def55c  str w10,[x11, #0x494]
7101def560  ldr x11,[x8, #0x18]
7101def564  str w10,[x11, #0x494]
7101def568  ldr x11,[x8, #0x28]
7101def56c  str w10,[x11, #0x494]
7101def570  ldr x11,[x8, #0x38]
7101def574  add x8,x8,#0x40
7101def578  cmp x9,x8
7101def57c  str w10,[x11, #0x494]
7101def580  b.ne 0x7101def558
7101def584  ldr x8,[x22, #0xf0]
7101def588  ldr x8,[x8]
7101def58c  add x9,x8,#0x8
7101def590  add x24,x22,#0x500
7101def594  cmp x24,x9
7101def598  str w19,[sp, #0x10]
7101def59c  b.eq 0x7101def61c
7101def5a0  ldr x9,[x8, #0x10]
7101def5a4  add x10,x22,#0x508
7101def5a8  str x10,[sp, #0x8]
7101def5ac  ldr x10,[x22, #0x508]
7101def5b0  ldr x9,[x9]
7101def5b4  str x9,[x10]
7101def5b8  ldr x9,[x8, #0x10]
7101def5bc  ldr x9,[x9, #0x8]
7101def5c0  ldr x10,[x22, #0x508]
7101def5c4  str x9,[x10, #0x8]
7101def5c8  ldr x9,[x8, #0x10]
7101def5cc  ldr x8,[x22, #0x508]
7101def5d0  cmp x8,x9
7101def5d4  b.eq 0x7101def624
7101def5d8  ldr x10,[x9, #0x18]
7101def5dc  ldr x10,[x10]
7101def5e0  ldr x11,[x8, #0x18]
7101def5e4  str x10,[x11]
7101def5e8  ldr x10,[x9, #0x18]
7101def5ec  ldr x10,[x10, #0x8]
7101def5f0  ldr x11,[x8, #0x18]
7101def5f4  str x10,[x11, #0x8]
7101def5f8  ldr x10,[x9, #0x18]
7101def5fc  ldr x10,[x10, #0x10]
7101def600  ldr x11,[x8, #0x18]
7101def604  str x10,[x11, #0x10]
7101def608  ldr x9,[x9, #0x18]
7101def60c  ldr x9,[x9, #0x18]
7101def610  ldr x8,[x8, #0x18]
7101def614  str x9,[x8, #0x18]
7101def618  b 0x7101def624
7101def61c  add x8,x22,#0x508
7101def620  str x8,[sp, #0x8]
7101def624  ldr x8,[x22, #0xf0]
7101def628  ldr x8,[x8]
7101def62c  ldr x8,[x8]
7101def630  ldr x9,[x8, #0x600]
7101def634  mov w10,#0x220
7101def638  str w10,[x9, #0x10]
7101def63c  ldr x8,[x8, #0x600]
7101def640  mov w9,#0x140
7101def644  str w9,[x8, #0x14]
7101def648  ldr x8,[x22, #0x508]
7101def64c  ldr x8,[x8]
7101def650  ldr x9,[x22, #0x368]
7101def654  str x8,[x9]
7101def658  ldr x8,[x22, #0x508]
7101def65c  ldr x8,[x8, #0x8]
7101def660  ldr x9,[x22, #0x368]
7101def664  str x8,[x9, #0x8]
7101def668  ldr x9,[x22, #0x508]
7101def66c  ldr x8,[x22, #0x368]
7101def670  add x25,x22,#0x360
7101def674  cmp x8,x9
7101def678  b.eq 0x7101def6bc
7101def67c  ldr x10,[x9, #0x18]
7101def680  ldr x10,[x10]
7101def684  ldr x11,[x8, #0x18]
7101def688  str x10,[x11]
7101def68c  ldr x10,[x9, #0x18]
7101def690  ldr x10,[x10, #0x8]
7101def694  ldr x11,[x8, #0x18]
7101def698  str x10,[x11, #0x8]
7101def69c  ldr x10,[x9, #0x18]
7101def6a0  ldr x10,[x10, #0x10]
7101def6a4  ldr x11,[x8, #0x18]
7101def6a8  str x10,[x11, #0x10]
7101def6ac  ldr x9,[x9, #0x18]
7101def6b0  ldr x9,[x9, #0x18]
7101def6b4  ldr x8,[x8, #0x18]
7101def6b8  str x9,[x8, #0x18]
7101def6bc  adrp x1,0x7104292000
7101def6c0  add x1,x1,#0x204
7101def6c4  add x8,sp,#0x40
7101def6c8  mov x0,x25
7101def6cc  add x19,sp,#0x40
7101def6d0  bl 0x7103776910
7101def6d4  add x8,x22,#0x370
7101def6d8  cmp x8,x19
7101def6dc  b.eq 0x7101def6f8
7101def6e0  ldr x8,[sp, #0x48]
7101def6e4  str xzr,[sp, #0x48]
7101def6e8  ldr x0,[x22, #0x378]
7101def6ec  str x8,[x22, #0x378]
7101def6f0  cbz x0,0x7101def6f8
7101def6f4  bl 0x710392eb40
7101def6f8  ldr x0,[sp, #0x48]
7101def6fc  stp x23,xzr,[sp, #0x40]
7101def700  cbz x0,0x7101def708
7101def704  bl 0x710392eb40
7101def708  adrp x1,0x710436a000
7101def70c  add x1,x1,#0xc4b
7101def710  add x8,sp,#0x40
7101def714  mov x0,x25
7101def718  add x19,sp,#0x40
7101def71c  bl 0x7103776910
7101def720  add x8,x22,#0x380
7101def724  cmp x8,x19
7101def728  b.eq 0x7101def744
7101def72c  ldr x8,[sp, #0x48]
7101def730  str xzr,[sp, #0x48]
7101def734  ldr x0,[x22, #0x388]
7101def738  str x8,[x22, #0x388]
7101def73c  cbz x0,0x7101def744
7101def740  bl 0x710392eb40
7101def744  ldr x0,[sp, #0x48]
7101def748  stp x23,xzr,[sp, #0x40]
7101def74c  cbz x0,0x7101def754
7101def750  bl 0x710392eb40
7101def754  adrp x1,0x7104328000
7101def758  add x1,x1,#0x77e
7101def75c  add x8,sp,#0x40
7101def760  mov x0,x25
7101def764  add x19,sp,#0x40
7101def768  bl 0x7103776910
7101def76c  add x8,x22,#0x390
7101def770  cmp x8,x19
7101def774  b.eq 0x7101def790
7101def778  ldr x8,[sp, #0x48]
7101def77c  str xzr,[sp, #0x48]
7101def780  ldr x0,[x22, #0x398]
7101def784  str x8,[x22, #0x398]
7101def788  cbz x0,0x7101def790
7101def78c  bl 0x710392eb40
7101def790  ldr x0,[sp, #0x48]
7101def794  stp x23,xzr,[sp, #0x40]
7101def798  cbz x0,0x7101def7a0
7101def79c  bl 0x710392eb40
7101def7a0  adrp x1,0x7104401000
7101def7a4  add x1,x1,#0xa51
7101def7a8  add x8,sp,#0x40
7101def7ac  mov x0,x25
7101def7b0  bl 0x7103776640
7101def7b4  adrp x1,0x7104338000
7101def7b8  add x1,x1,#0xd31
7101def7bc  sub x8,x29,#0x90
7101def7c0  add x0,sp,#0x40
7101def7c4  sub x19,x29,#0x90
7101def7c8  bl 0x7103776910
7101def7cc  add x8,x22,#0x3a0
7101def7d0  cmp x8,x19
7101def7d4  b.eq 0x7101def7f0
7101def7d8  ldur x8,[x29, #-0x88]
7101def7dc  stur xzr,[x29, #-0x88]
7101def7e0  ldr x0,[x22, #0x3a8]
7101def7e4  str x8,[x22, #0x3a8]
7101def7e8  cbz x0,0x7101def7f0
7101def7ec  bl 0x710392eb40
7101def7f0  ldur x0,[x29, #-0x88]
7101def7f4  stp x23,xzr,[x29, #-0x90]
7101def7f8  cbz x0,0x7101def800
7101def7fc  bl 0x710392eb40
7101def800  adrp x1,0x71043ef000
7101def804  add x1,x1,#0x356
7101def808  sub x8,x29,#0x90
7101def80c  add x0,sp,#0x40
7101def810  sub x19,x29,#0x90
7101def814  bl 0x7103776910
7101def818  add x8,x22,#0x3b0
7101def81c  cmp x8,x19
7101def820  b.eq 0x7101def83c
7101def824  ldur x8,[x29, #-0x88]
7101def828  stur xzr,[x29, #-0x88]
7101def82c  ldr x0,[x22, #0x3b8]
7101def830  str x8,[x22, #0x3b8]
7101def834  cbz x0,0x7101def83c
7101def838  bl 0x710392eb40
7101def83c  ldur x0,[x29, #-0x88]
7101def840  stp x23,xzr,[x29, #-0x90]
7101def844  cbz x0,0x7101def84c
7101def848  bl 0x710392eb40
7101def84c  adrp x1,0x71042a3000
7101def850  add x1,x1,#0x553
7101def854  sub x8,x29,#0x90
7101def858  mov x0,x25
7101def85c  sub x19,x29,#0x90
7101def860  bl 0x7103776910
7101def864  add x8,x22,#0x3c0
7101def868  cmp x8,x19
7101def86c  b.eq 0x7101def888
7101def870  ldur x8,[x29, #-0x88]
7101def874  stur xzr,[x29, #-0x88]
7101def878  ldr x0,[x22, #0x3c8]
7101def87c  str x8,[x22, #0x3c8]
7101def880  cbz x0,0x7101def888
7101def884  bl 0x710392eb40
7101def888  ldur x0,[x29, #-0x88]
7101def88c  stp x23,xzr,[x29, #-0x90]
7101def890  cbz x0,0x7101def898
7101def894  bl 0x710392eb40
7101def898  ldr x26,[sp, #0x48]
7101def89c  adrp x20,0x710523d000
7101def8a0  add x20,x20,#0x988
7101def8a4  stp x20,xzr,[sp, #0x40]
7101def8a8  cbz x26,0x7101def8c4
7101def8ac  ldr x0,[x26, #0x18]
7101def8b0  stp x23,xzr,[x26, #0x10]
7101def8b4  cbz x0,0x7101def8bc
7101def8b8  bl 0x710392eb40
7101def8bc  mov x0,x26
7101def8c0  bl 0x710392eb40
7101def8c4  adrp x1,0x71042f8000
7101def8c8  add x1,x1,#0x7f7
7101def8cc  add x8,sp,#0x40
7101def8d0  mov x0,x25
7101def8d4  bl 0x7103776640
7101def8d8  adrp x1,0x7104338000
7101def8dc  add x1,x1,#0xd31
7101def8e0  sub x8,x29,#0x90
7101def8e4  add x0,sp,#0x40
7101def8e8  sub x19,x29,#0x90
7101def8ec  bl 0x7103776910
7101def8f0  add x8,x22,#0x3d0
7101def8f4  cmp x8,x19
7101def8f8  b.eq 0x7101def914
7101def8fc  ldur x8,[x29, #-0x88]
7101def900  stur xzr,[x29, #-0x88]
7101def904  ldr x0,[x22, #0x3d8]
7101def908  str x8,[x22, #0x3d8]
7101def90c  cbz x0,0x7101def914
7101def910  bl 0x710392eb40
7101def914  ldur x0,[x29, #-0x88]
7101def918  stp x23,xzr,[x29, #-0x90]
7101def91c  cbz x0,0x7101def924
7101def920  bl 0x710392eb40
7101def924  adrp x1,0x71043ef000
7101def928  add x1,x1,#0x356
7101def92c  sub x8,x29,#0x90
7101def930  add x0,sp,#0x40
7101def934  sub x19,x29,#0x90
7101def938  bl 0x7103776910
7101def93c  add x8,x22,#0x3e0
7101def940  cmp x8,x19
7101def944  b.eq 0x7101def960
7101def948  ldur x8,[x29, #-0x88]
7101def94c  stur xzr,[x29, #-0x88]
7101def950  ldr x0,[x22, #0x3e8]
7101def954  str x8,[x22, #0x3e8]
7101def958  cbz x0,0x7101def960
7101def95c  bl 0x710392eb40
7101def960  ldur x0,[x29, #-0x88]
7101def964  stp x23,xzr,[x29, #-0x90]
7101def968  cbz x0,0x7101def970
7101def96c  bl 0x710392eb40
7101def970  adrp x1,0x71042f8000
7101def974  add x1,x1,#0x80a
7101def978  sub x8,x29,#0x90
7101def97c  mov x0,x25
7101def980  sub x19,x29,#0x90
7101def984  bl 0x7103776910
7101def988  add x8,x22,#0x3f0
7101def98c  cmp x8,x19
7101def990  b.eq 0x7101def9ac
7101def994  ldur x8,[x29, #-0x88]
7101def998  stur xzr,[x29, #-0x88]
7101def99c  ldr x0,[x22, #0x3f8]
7101def9a0  str x8,[x22, #0x3f8]
7101def9a4  cbz x0,0x7101def9ac
7101def9a8  bl 0x710392eb40
7101def9ac  ldur x0,[x29, #-0x88]
7101def9b0  stp x23,xzr,[x29, #-0x90]
7101def9b4  cbz x0,0x7101def9bc
7101def9b8  bl 0x710392eb40
7101def9bc  ldr x25,[sp, #0x48]
7101def9c0  stp x20,xzr,[sp, #0x40]
7101def9c4  cbz x25,0x7101def9e0
7101def9c8  ldr x0,[x25, #0x18]
7101def9cc  stp x23,xzr,[x25, #0x10]
7101def9d0  cbz x0,0x7101def9d8
7101def9d4  bl 0x710392eb40
7101def9d8  mov x0,x25
7101def9dc  bl 0x710392eb40
7101def9e0  ldr x8,[x22, #0x508]
7101def9e4  ldr x8,[x8]
7101def9e8  ldr x9,[x22, #0x440]
7101def9ec  str x8,[x9]
7101def9f0  ldr x8,[x22, #0x508]
7101def9f4  ldr x8,[x8, #0x8]
7101def9f8  ldr x9,[x22, #0x440]
7101def9fc  str x8,[x9, #0x8]
7101defa00  ldr x9,[x22, #0x508]
7101defa04  ldr x8,[x22, #0x440]
7101defa08  add x25,x22,#0x438
7101defa0c  cmp x8,x9
7101defa10  b.eq 0x7101defa54
7101defa14  ldr x10,[x9, #0x18]
7101defa18  ldr x10,[x10]
7101defa1c  ldr x11,[x8, #0x18]
7101defa20  str x10,[x11]
7101defa24  ldr x10,[x9, #0x18]
7101defa28  ldr x10,[x10, #0x8]
7101defa2c  ldr x11,[x8, #0x18]
7101defa30  str x10,[x11, #0x8]
7101defa34  ldr x10,[x9, #0x18]
7101defa38  ldr x10,[x10, #0x10]
7101defa3c  ldr x11,[x8, #0x18]
7101defa40  str x10,[x11, #0x10]
7101defa44  ldr x9,[x9, #0x18]
7101defa48  ldr x9,[x9, #0x18]
7101defa4c  ldr x8,[x8, #0x18]
7101defa50  str x9,[x8, #0x18]
7101defa54  adrp x1,0x71042c5000
7101defa58  add x1,x1,#0x2fe
7101defa5c  add x8,sp,#0x40
7101defa60  mov x0,x25
7101defa64  add x19,sp,#0x40
7101defa68  bl 0x7103776910
7101defa6c  add x8,x22,#0x448
7101defa70  cmp x8,x19
7101defa74  b.eq 0x7101defa90
7101defa78  ldr x8,[sp, #0x48]
7101defa7c  str xzr,[sp, #0x48]
7101defa80  ldr x0,[x22, #0x450]
7101defa84  str x8,[x22, #0x450]
7101defa88  cbz x0,0x7101defa90
7101defa8c  bl 0x710392eb40
7101defa90  ldr x0,[sp, #0x48]
7101defa94  str x28,[sp, #0x18]
7101defa98  stp x23,xzr,[sp, #0x40]
7101defa9c  cbz x0,0x7101defaa4
7101defaa0  bl 0x710392eb40
7101defaa4  add x2,x22,#0x458
7101defaa8  adrp x1,0x7104270000
7101defaac  add x1,x1,#0x588
7101defab0  mov x0,x25
7101defab4  bl 0x7101e03c80
7101defab8  add x2,x22,#0x4a8
7101defabc  adrp x1,0x710438d000
7101defac0  add x1,x1,#0xd2
7101defac4  mov x0,x25
7101defac8  bl 0x7101e03c80
7101defacc  adrp x20,0x710532f000
7101defad0  ldr x8,[x20, #0x730]
7101defad4  ldr x21,[x8, #0x8]
7101defad8  mov w26,wzr
7101defadc  mov w25,wzr
7101defae0  adrp x19,0x7105329000
7101defae4  mov w23,#0xcccd
7101defae8  movk w23,#0xcccc, LSL #16
7101defaec  mov w28,#0x24
7101defaf0  ldr x0,[x21, #0x208]
7101defaf4  mov w1,w26
7101defaf8  bl 0x71032a3bd0
7101defafc  mov x27,x0
7101defb00  ldr x0,[x21, #0x208]
7101defb04  mov x1,x27
7101defb08  bl 0x71032a5750
7101defb0c  mvn w8,w0
7101defb10  tst w8,#0xffff
7101defb14  b.eq 0x7101defba4
7101defb18  sxth w8,w0
7101defb1c  cmp w8,#0x7cf
7101defb20  b.gt 0x7101defba4
7101defb24  ldr x8,[x20, #0x730]
7101defb28  ldr x8,[x8, #0x8]
7101defb2c  ldr x8,[x8, #0x1d8]
7101defb30  lsl x9,x0,#0x30
7101defb34  add x9,x8,x9, ASR #0x2f
7101defb38  ldrh w9,[x9, #0x60]
7101defb3c  ldp x10,x8,[x8, #0x20]
7101defb40  sub x8,x8,x10
7101defb44  lsr x8,x8,#0x6
7101defb48  mul w8,w8,w23
7101defb4c  cmp w8,w9
7101defb50  b.ls 0x7101defba4
7101defb54  ldr x8,[x19, #0xf98]
7101defb58  ldr x8,[x8]
7101defb5c  ldr x8,[x8, #0x30]
7101defb60  sxth x9,w0
7101defb64  madd x8,x9,x28,x8
7101defb68  ldrh w8,[x8, #0x20]
7101defb6c  cbz w8,0x7101defba4
7101defb70  and w8,w25,#0xff
7101defb74  cmp w8,#0xf
7101defb78  b.cs 0x7101df0830
7101defb7c  and x8,x25,#0xff
7101defb80  mov w9,#0x28
7101defb84  madd x8,x8,x9,x22
7101defb88  ldr x4,[x22]
7101defb8c  mov w1,w25
7101defb90  add x0,x8,#0xf8
7101defb94  mov x2,x27
7101defb98  mov x3,x24
7101defb9c  bl 0x7101e03e40
7101defba0  add w25,w25,#0x1
7101defba4  add w26,w26,#0x1
7101defba8  cmp w26,#0xf
7101defbac  b.cc 0x7101defaf0
7101defbb0  ldr x28,[sp, #0x18]
7101defbb4  and w8,w25,#0xff
7101defbb8  cmp w8,#0xe
7101defbbc  b.hi 0x7101defc14
7101defbc0  and x26,x25,#0xff
7101defbc4  mov w8,#0x28
7101defbc8  madd x8,x26,x8,x22
7101defbcc  mov x19,#0xff0000000000
7101defbd0  movk x19,#0x52ff, LSL #48
7101defbd4  add x27,x8,#0xf8
7101defbd8  ldr x4,[x22]
7101defbdc  mov x0,x27
7101defbe0  mov w1,w26
7101defbe4  mov x2,x19
7101defbe8  mov x3,x24
7101defbec  bl 0x7101e03e40
7101defbf0  add x26,x26,#0x1
7101defbf4  add x27,x27,#0x28
7101defbf8  cmp x26,#0xf
7101defbfc  b.ne 0x7101defbd8
7101defc00  tst w25,#0xff
7101defc04  b.eq 0x7101defc28
7101defc08  and w8,w25,#0xff
7101defc0c  cmp w8,#0xa
7101defc10  b.cc 0x7101defc3c
7101defc14  ldr x19,[sp, #0x8]
7101defc18  ldr x0,[x19]
7101defc1c  adrp x1,0x710434a000
7101defc20  add x1,x1,#0x893
7101defc24  b 0x7101defc4c
7101defc28  ldr x19,[sp, #0x8]
7101defc2c  ldr x0,[x19]
7101defc30  adrp x1,0x7104308000
7101defc34  add x1,x1,#0x97e
7101defc38  b 0x7101defc4c
7101defc3c  ldr x19,[sp, #0x8]
7101defc40  ldr x0,[x19]
7101defc44  adrp x1,0x710435b000
7101defc48  add x1,x1,#0xcda
7101defc4c  fmov s0,0x3f800000
7101defc50  bl 0x7103778300
7101defc54  ldr w9,[sp, #0x10]
7101defc58  ldr x0,[x19]
7101defc5c  fmov s0,0x3f800000
7101defc60  adrp x26,0x710424f000
7101defc64  add x26,x26,#0xac6
7101defc68  adrp x8,0x710433a000
7101defc6c  add x8,x8,#0x6a9
7101defc70  cmp w9,#0x0
7101defc74  csel x1,x8,x26,eq
7101defc78  bl 0x7103778300
7101defc7c  adrp x1,0x7104421000
7101defc80  add x1,x1,#0x55
7101defc84  add x8,sp,#0x40
7101defc88  mov x0,x24
7101defc8c  bl 0x71037780e0
7101defc90  ldr x23,[sp, #0x48]
7101defc94  ldr x24,[x23, #0x8]
7101defc98  cbz x24,0x7101defd88
7101defc9c  ldrb w8,[x23, #0x10]
7101defca0  cbz w8,0x7101defd68
7101defca4  ldr x8,[x23]
7101defca8  ldr x20,[x8, #0x80]
7101defcac  add x19,x8,#0x88
7101defcb0  cmp x20,x19
7101defcb4  b.eq 0x7101defd68
7101defcb8  ldr x0,[x20, #0x68]
7101defcbc  ldr x8,[x0]
7101defcc0  ldr x8,[x8, #0x148]
7101defcc4  blr x8
7101defcc8  tbz w0,#0x0,0x7101defd08
7101defccc  ldr x8,[x24]
7101defcd0  ldr x1,[x20, #0x68]
7101defcd4  mov x0,x24
7101defcd8  ldr x8,[x8, #0x120]
7101defcdc  blr x8
7101defce0  tbz w0,#0x0,0x7101defd08
7101defce4  ldr x0,[x20, #0x68]
7101defce8  ldr x8,[x0]
7101defcec  ldr x8,[x8, #0x178]
7101defcf0  blr x8
7101defcf4  ldr x0,[x20, #0x68]
7101defcf8  ldr x8,[x0]
7101defcfc  ldr x8,[x8, #0x140]
7101defd00  mov w1,wzr
7101defd04  blr x8
7101defd08  ldr x8,[x20, #0x8]
7101defd0c  cbz x8,0x7101defd20
7101defd10  mov x20,x8
7101defd14  ldr x8,[x8]
7101defd18  cbnz x8,0x7101defd10
7101defd1c  b 0x7101defd4c
7101defd20  mov x8,x20
7101defd24  ldr x9,[x8, #0x10]!
7101defd28  ldr x10,[x9]
7101defd2c  cmp x10,x20
7101defd30  b.eq 0x7101defd58
7101defd34  ldr x9,[x8]
7101defd38  mov x8,x9
7101defd3c  ldr x20,[x8, #0x10]!
7101defd40  ldr x10,[x20]
7101defd44  cmp x10,x9
7101defd48  b.ne 0x7101defd34
7101defd4c  cmp x20,x19
7101defd50  b.ne 0x7101defcb8
7101defd54  b 0x7101defd64
7101defd58  mov x20,x9
7101defd5c  cmp x20,x19
7101defd60  b.ne 0x7101defcb8
7101defd64  ldr x24,[x23, #0x8]
7101defd68  ldr x8,[x24]
7101defd6c  ldr x8,[x8, #0x188]
7101defd70  mov x0,x24
7101defd74  blr x8
7101defd78  adrp x8,0x710523d000
7101defd7c  add x8,x8,#0x9e8
7101defd80  stp x8,xzr,[sp, #0x40]
7101defd84  b 0x7101defd98
7101defd88  adrp x8,0x710523d000
7101defd8c  add x8,x8,#0x9e8
7101defd90  stp x8,xzr,[sp, #0x40]
7101defd94  cbz x23,0x7101defda0
7101defd98  mov x0,x23
7101defd9c  bl 0x710392eb40
7101defda0  ldr x8,[x28, #0x30]
7101defda4  ldr x23,[x8, #0x80]
7101defda8  ldr x9,[sp, #0x28]
7101defdac  ldrb w27,[x9, #0x12]
7101defdb0  adrp x2,0x7104545000
7101defdb4  add x2,x2,#0x9a8
7101defdb8  mov w19,#0x1
7101defdbc  mov x24,x23
7101defdc0  mov w3,#0x1
7101defdc4  ldr x8,[x24], #0xf0
7101defdc8  ldr x1,[x8]
7101defdcc  mov x0,x24
7101defdd0  bl 0x71032cbf30
7101defdd4  ldr x8,[x24]
7101defdd8  ldr x8,[x8]
7101defddc  ldr x0,[x8]
7101defde0  mov w1,wzr
7101defde4  bl 0x71037760f0
7101defde8  ldr x8,[x24]
7101defdec  add x24,x23,#0x238
7101defdf0  ldr x8,[x8]
7101defdf4  add x9,x8,#0x8
7101defdf8  cmp x24,x9
7101defdfc  b.eq 0x7101defe70
7101defe00  ldr x9,[x8, #0x10]
7101defe04  ldr x9,[x9]
7101defe08  ldr x10,[x23, #0x240]
7101defe0c  str x9,[x10]
7101defe10  ldr x9,[x8, #0x10]
7101defe14  ldr x9,[x9, #0x8]
7101defe18  ldr x10,[x23, #0x240]
7101defe1c  str x9,[x10, #0x8]
7101defe20  ldr x9,[x8, #0x10]
7101defe24  ldr x8,[x23, #0x240]
7101defe28  cmp x8,x9
7101defe2c  b.eq 0x7101defe70
7101defe30  ldr x10,[x9, #0x18]
7101defe34  ldr x10,[x10]
7101defe38  ldr x11,[x8, #0x18]
7101defe3c  str x10,[x11]
7101defe40  ldr x10,[x9, #0x18]
7101defe44  ldr x10,[x10, #0x8]
7101defe48  ldr x11,[x8, #0x18]
7101defe4c  str x10,[x11, #0x8]
7101defe50  ldr x10,[x9, #0x18]
7101defe54  ldr x10,[x10, #0x10]
7101defe58  ldr x11,[x8, #0x18]
7101defe5c  str x10,[x11, #0x10]
7101defe60  ldr x9,[x9, #0x18]
7101defe64  ldr x9,[x9, #0x18]
7101defe68  ldr x8,[x8, #0x18]
7101defe6c  str x9,[x8, #0x18]
7101defe70  ldr x8,[x23, #0xf0]
7101defe74  ldr x8,[x8]
7101defe78  ldr x8,[x8]
7101defe7c  ldr x9,[x8, #0x600]
7101defe80  mov w10,#0x20
7101defe84  str w10,[x9, #0x10]
7101defe88  ldr x9,[x8, #0x600]
7101defe8c  mov w10,#0x40
7101defe90  str w10,[x9, #0x14]
7101defe94  ldr x9,[x8, #0x600]
7101defe98  mov w10,#0x40000
7101defe9c  str w10,[x9, #0x18]
7101defea0  ldr x8,[x8, #0x600]
7101defea4  mov w9,#0x10
7101defea8  add x0,x23,#0x100
7101defeac  adrp x2,0x7104401000
7101defeb0  add x2,x2,#0xbc0
7101defeb4  mov x1,x24
7101defeb8  str w9,[x8, #0x1c]
7101defebc  bl 0x7101df2720
7101defec0  add x0,x23,#0x190
7101defec4  adrp x2,0x710437c000
7101defec8  add x2,x2,#0xb65
7101defecc  mov x1,x24
7101defed0  bl 0x7101df2720
7101defed4  orr x8,xzr,#0x1000000000000
7101defed8  stur x8,[sp, #0x4a]
7101defedc  mov w8,#0x10000
7101defee0  stur w8,[sp, #0x52]
7101defee4  add x8,sp,#0x40
7101defee8  mov w21,#0x101
7101defeec  strb w19,[sp, #0x56]
7101defef0  mov x22,#0x41f0000000000000
7101defef4  sub x19,x29,#0x90
7101defef8  add x1,x8,#0x60
7101defefc  adrp x8,0x7105186000
7101deff00  add x8,x8,#0x40
7101deff04  sub x0,x29,#0x90
7101deff08  str xzr,[sp, #0x40]
7101deff0c  strh w21,[sp, #0x48]
7101deff10  str x22,[sp, #0x58]
7101deff14  str wzr,[sp, #0x60]
7101deff18  str xzr,[sp, #0x90]
7101deff1c  str xzr,[sp, #0xc0]
7101deff20  str xzr,[sp, #0xf0]
7101deff24  str xzr,[sp, #0x120]
7101deff28  str xzr,[sp, #0x150]
7101deff2c  str wzr,[sp, #0x160]
7101deff30  strb wzr,[sp, #0x4a]
7101deff34  stur x8,[x29, #-0x90]
7101deff38  stur x19,[x29, #-0x70]
7101deff3c  bl 0x7101989a30
7101deff40  ldur x0,[x29, #-0x70]
7101deff44  cmp x19,x0
7101deff48  b.eq 0x7101deff5c
7101deff4c  cbz x0,0x7101deff68
7101deff50  ldr x8,[x0]
7101deff54  ldr x8,[x8, #0x28]
7101deff58  b 0x7101deff64
7101deff5c  ldr x8,[x0]
7101deff60  ldr x8,[x8, #0x20]
7101deff64  blr x8
7101deff68  add x8,sp,#0x40
7101deff6c  add x1,x8,#0xc0
7101deff70  adrp x8,0x7105186000
7101deff74  add x8,x8,#0xd0
7101deff78  sub x19,x29,#0x90
7101deff7c  stur x19,[x29, #-0x70]
7101deff80  sub x0,x29,#0x90
7101deff84  stur x8,[x29, #-0x90]
7101deff88  bl 0x7101989a30
7101deff8c  ldur x0,[x29, #-0x70]
7101deff90  cmp x19,x0
7101deff94  b.eq 0x7101deffa8
7101deff98  cbz x0,0x7101deffb4
7101deff9c  ldr x8,[x0]
7101deffa0  ldr x8,[x8, #0x28]
7101deffa4  b 0x7101deffb0
7101deffa8  ldr x8,[x0]
7101deffac  ldr x8,[x8, #0x20]
7101deffb0  blr x8
7101deffb4  add x25,x23,#0x220
7101deffb8  adrp x2,0x7104433000
7101deffbc  add x2,x2,#0x952
7101deffc0  add x3,sp,#0x40
7101deffc4  mov x0,x25
7101deffc8  mov x1,x24
7101deffcc  add x20,sp,#0x40
7101deffd0  bl 0x7103770b30
7101deffd4  adrp x2,0x710424f000
7101deffd8  add x2,x2,#0xc67
7101deffdc  mov w1,#0x19
7101deffe0  mov x0,x25
7101deffe4  bl 0x71037717d0
7101deffe8  ldr x0,[x23, #0x220]
7101deffec  ldr x8,[x0, #0x1b8]
7101defff0  cbz x8,0x7101df00e0
7101defff4  add x9,x0,#0x1b8
7101defff8  mov x10,x9
7101defffc  mov x11,x8
7101df0000  ldr w12,[x11, #0x20]
7101df0004  cmp w12,#0x19
7101df0008  cset w12,lt
7101df000c  csel x10,x10,x11,lt
7101df0010  ldr x11,[x11, w12, UXTW #0x3]
7101df0014  cbnz x11,0x7101df0000
7101df0018  mov x19,x26
7101df001c  cmp x10,x9
7101df0020  b.eq 0x7101df0070
7101df0024  ldr w11,[x10, #0x20]
7101df0028  cmp w11,#0x19
7101df002c  b.gt 0x7101df0070
7101df0030  ldr x26,[x10, #0x28]
7101df0034  cbz x26,0x7101df0070
7101df0038  ldr x8,[x26]
7101df003c  ldr x8,[x8, #0x208]
7101df0040  mov w1,#0x1
7101df0044  mov x0,x26
7101df0048  blr x8
7101df004c  ldr x8,[x26]
7101df0050  ldr x8,[x8, #0x388]
7101df0054  mov x0,x26
7101df0058  mov w1,wzr
7101df005c  mov w2,wzr
7101df0060  blr x8
7101df0064  ldr x0,[x25]
7101df0068  ldr x8,[x0, #0x1b8]
7101df006c  add x9,x0,#0x1b8
7101df0070  cbz x8,0x7101df00e4
7101df0074  mov x10,x9
7101df0078  ldr w11,[x8, #0x20]
7101df007c  cmp w11,#0x19
7101df0080  cset w11,lt
7101df0084  csel x10,x10,x8,lt
7101df0088  ldr x8,[x8, w11, UXTW #0x3]
7101df008c  cbnz x8,0x7101df0078
7101df0090  cmp x10,x9
7101df0094  b.eq 0x7101df00e4
7101df0098  ldr w8,[x10, #0x20]
7101df009c  cmp w8,#0x19
7101df00a0  b.gt 0x7101df00e4
7101df00a4  ldr x26,[x10, #0x28]
7101df00a8  cbz x26,0x7101df00e4
7101df00ac  ldr x8,[x26]
7101df00b0  ldr x8,[x8, #0x1f8]
7101df00b4  mov w1,#0x1
7101df00b8  mov x0,x26
7101df00bc  blr x8
7101df00c0  ldr x8,[x26]
7101df00c4  ldr x8,[x8, #0x388]
7101df00c8  mov x0,x26
7101df00cc  mov w1,wzr
7101df00d0  mov w2,wzr
7101df00d4  blr x8
7101df00d8  ldr x0,[x25]
7101df00dc  b 0x7101df00e4
7101df00e0  mov x19,x26
7101df00e4  mov w1,#0x19
7101df00e8  orr w2,wzr,#0x6
7101df00ec  mov w3,wzr
7101df00f0  bl 0x7103771930
7101df00f4  ldr x0,[sp, #0x150]
7101df00f8  add x8,x20,#0xf0
7101df00fc  cmp x8,x0
7101df0100  b.eq 0x7101df0120
7101df0104  adrp x20,0x710523d000
7101df0108  add x20,x20,#0x988
7101df010c  cbz x0,0x7101df0134
7101df0110  ldr x8,[x0]
7101df0114  ldr x8,[x8, #0x28]
7101df0118  blr x8
7101df011c  b 0x7101df0134
7101df0120  ldr x8,[x0]
7101df0124  ldr x8,[x8, #0x20]
7101df0128  blr x8
7101df012c  adrp x20,0x710523d000
7101df0130  add x20,x20,#0x988
7101df0134  ldr x0,[sp, #0x120]
7101df0138  add x8,sp,#0x40
7101df013c  add x8,x8,#0xc0
7101df0140  cmp x8,x0
7101df0144  b.eq 0x7101df0158
7101df0148  cbz x0,0x7101df0164
7101df014c  ldr x8,[x0]
7101df0150  ldr x8,[x8, #0x28]
7101df0154  b 0x7101df0160
7101df0158  ldr x8,[x0]
7101df015c  ldr x8,[x8, #0x20]
7101df0160  blr x8
7101df0164  ldr x0,[sp, #0xf0]
7101df0168  add x8,sp,#0x40
7101df016c  add x8,x8,#0x90
7101df0170  cmp x8,x0
7101df0174  b.eq 0x7101df0188
7101df0178  cbz x0,0x7101df0194
7101df017c  ldr x8,[x0]
7101df0180  ldr x8,[x8, #0x28]
7101df0184  b 0x7101df0190
7101df0188  ldr x8,[x0]
7101df018c  ldr x8,[x8, #0x20]
7101df0190  blr x8
7101df0194  ldr x0,[sp, #0xc0]
7101df0198  add x8,sp,#0x40
7101df019c  add x8,x8,#0x60
7101df01a0  cmp x8,x0
7101df01a4  b.eq 0x7101df01b8
7101df01a8  cbz x0,0x7101df01c4
7101df01ac  ldr x8,[x0]
7101df01b0  ldr x8,[x8, #0x28]
7101df01b4  b 0x7101df01c0
7101df01b8  ldr x8,[x0]
7101df01bc  ldr x8,[x8, #0x20]
7101df01c0  blr x8
7101df01c4  ldr x0,[sp, #0x90]
7101df01c8  add x8,sp,#0x40
7101df01cc  add x8,x8,#0x30
7101df01d0  cmp x8,x0
7101df01d4  b.eq 0x7101df01e8
7101df01d8  cbz x0,0x7101df01f4
7101df01dc  ldr x8,[x0]
7101df01e0  ldr x8,[x8, #0x28]
7101df01e4  b 0x7101df01f0
7101df01e8  ldr x8,[x0]
7101df01ec  ldr x8,[x8, #0x20]
7101df01f0  blr x8
7101df01f4  adrp x1,0x710424f000
7101df01f8  add x1,x1,#0xc67
7101df01fc  sub x8,x29,#0x90
7101df0200  mov x0,x24
7101df0204  bl 0x7103776640
7101df0208  sub x0,x29,#0x90
7101df020c  bl 0x710337d360
7101df0210  ldur x25,[x29, #-0x88]
7101df0214  stp x20,xzr,[x29, #-0x90]
7101df0218  cbz x25,0x7101df023c
7101df021c  ldr x0,[x25, #0x18]
7101df0220  adrp x8,0x710523d000
7101df0224  add x8,x8,#0x9a8
7101df0228  stp x8,xzr,[x25, #0x10]
7101df022c  cbz x0,0x7101df0234
7101df0230  bl 0x710392eb40
7101df0234  mov x0,x25
7101df0238  bl 0x710392eb40
7101df023c  orr x8,xzr,#0x1000000000000
7101df0240  stur x8,[sp, #0x4a]
7101df0244  mov w8,#0x100
7101df0248  movk w8,#0x1, LSL #16
7101df024c  add x25,x23,#0x228
7101df0250  adrp x2,0x7104270000
7101df0254  add x2,x2,#0x5bf
7101df0258  stur w8,[sp, #0x52]
7101df025c  mov w8,#0x1
7101df0260  add x3,sp,#0x40
7101df0264  mov x0,x25
7101df0268  str xzr,[sp, #0x40]
7101df026c  mov x1,x24
7101df0270  strh w21,[sp, #0x48]
7101df0274  strb w8,[sp, #0x56]
7101df0278  str x22,[sp, #0x58]
7101df027c  str wzr,[sp, #0x60]
7101df0280  add x20,sp,#0x40
7101df0284  str xzr,[sp, #0x90]
7101df0288  str xzr,[sp, #0xc0]
7101df028c  str xzr,[sp, #0xf0]
7101df0290  str xzr,[sp, #0x120]
7101df0294  str xzr,[sp, #0x150]
7101df0298  str wzr,[sp, #0x160]
7101df029c  strb w8,[sp, #0x4a]
7101df02a0  bl 0x7103770b30
7101df02a4  adrp x2,0x7104281000
7101df02a8  add x2,x2,#0x30f
7101df02ac  mov w1,#0x1a
7101df02b0  mov x0,x25
7101df02b4  bl 0x71037717d0
7101df02b8  ldr x0,[x23, #0x228]
7101df02bc  ldr x8,[x0, #0x1b8]
7101df02c0  cbz x8,0x7101df03b4
7101df02c4  add x9,x0,#0x1b8
7101df02c8  mov x10,x9
7101df02cc  mov x11,x8
7101df02d0  adrp x22,0x710433a000
7101df02d4  add x22,x22,#0x6a9
7101df02d8  ldr w12,[x11, #0x20]
7101df02dc  cmp w12,#0x1a
7101df02e0  cset w12,lt
7101df02e4  csel x10,x10,x11,lt
7101df02e8  ldr x11,[x11, w12, UXTW #0x3]
7101df02ec  cbnz x11,0x7101df02d8
7101df02f0  cmp x10,x9
7101df02f4  b.eq 0x7101df0344
7101df02f8  ldr w11,[x10, #0x20]
7101df02fc  cmp w11,#0x1a
7101df0300  b.gt 0x7101df0344
7101df0304  ldr x26,[x10, #0x28]
7101df0308  cbz x26,0x7101df0344
7101df030c  ldr x8,[x26]
7101df0310  ldr x8,[x8, #0x208]
7101df0314  mov w1,#0x1
7101df0318  mov x0,x26
7101df031c  blr x8
7101df0320  ldr x8,[x26]
7101df0324  ldr x8,[x8, #0x388]
7101df0328  mov x0,x26
7101df032c  mov w1,wzr
7101df0330  mov w2,wzr
7101df0334  blr x8
7101df0338  ldr x0,[x25]
7101df033c  ldr x8,[x0, #0x1b8]
7101df0340  add x9,x0,#0x1b8
7101df0344  cbz x8,0x7101df03bc
7101df0348  mov x10,x9
7101df034c  ldr w11,[x8, #0x20]
7101df0350  cmp w11,#0x1a
7101df0354  cset w11,lt
7101df0358  csel x10,x10,x8,lt
7101df035c  ldr x8,[x8, w11, UXTW #0x3]
7101df0360  cbnz x8,0x7101df034c
7101df0364  cmp x10,x9
7101df0368  b.eq 0x7101df03bc
7101df036c  ldr w8,[x10, #0x20]
7101df0370  cmp w8,#0x1a
7101df0374  b.gt 0x7101df03bc
7101df0378  ldr x26,[x10, #0x28]
7101df037c  cbz x26,0x7101df03bc
7101df0380  ldr x8,[x26]
7101df0384  ldr x8,[x8, #0x1f8]
7101df0388  mov w1,#0x1
7101df038c  mov x0,x26
7101df0390  blr x8
7101df0394  ldr x8,[x26]
7101df0398  ldr x8,[x8, #0x388]
7101df039c  mov x0,x26
7101df03a0  mov w1,wzr
7101df03a4  mov w2,wzr
7101df03a8  blr x8
7101df03ac  ldr x0,[x25]
7101df03b0  b 0x7101df03bc
7101df03b4  adrp x22,0x710433a000
7101df03b8  add x22,x22,#0x6a9
7101df03bc  mov w1,#0x1a
7101df03c0  orr w2,wzr,#0x7
7101df03c4  mov w3,wzr
7101df03c8  bl 0x7103771930
7101df03cc  ldr x0,[sp, #0x150]
7101df03d0  add x8,x20,#0xf0
7101df03d4  cmp x8,x0
7101df03d8  b.eq 0x7101df03f4
7101df03dc  mov x21,x19
7101df03e0  cbz x0,0x7101df0404
7101df03e4  ldr x8,[x0]
7101df03e8  ldr x8,[x8, #0x28]
7101df03ec  blr x8
7101df03f0  b 0x7101df0404
7101df03f4  ldr x8,[x0]
7101df03f8  ldr x8,[x8, #0x20]
7101df03fc  blr x8
7101df0400  mov x21,x19
7101df0404  ldr x0,[sp, #0x120]
7101df0408  add x8,sp,#0x40
7101df040c  add x8,x8,#0xc0
7101df0410  cmp x8,x0
7101df0414  b.eq 0x7101df0428
7101df0418  cbz x0,0x7101df0434
7101df041c  ldr x8,[x0]
7101df0420  ldr x8,[x8, #0x28]
7101df0424  b 0x7101df0430
7101df0428  ldr x8,[x0]
7101df042c  ldr x8,[x8, #0x20]
7101df0430  blr x8
7101df0434  ldr x0,[sp, #0xf0]
7101df0438  add x8,sp,#0x40
7101df043c  add x8,x8,#0x90
7101df0440  cmp x8,x0
7101df0444  b.eq 0x7101df0458
7101df0448  cbz x0,0x7101df0464
7101df044c  ldr x8,[x0]
7101df0450  ldr x8,[x8, #0x28]
7101df0454  b 0x7101df0460
7101df0458  ldr x8,[x0]
7101df045c  ldr x8,[x8, #0x20]
7101df0460  blr x8
7101df0464  ldr x0,[sp, #0xc0]
7101df0468  add x8,sp,#0x40
7101df046c  add x8,x8,#0x60
7101df0470  cmp x8,x0
7101df0474  b.eq 0x7101df0488
7101df0478  cbz x0,0x7101df0494
7101df047c  ldr x8,[x0]
7101df0480  ldr x8,[x8, #0x28]
7101df0484  b 0x7101df0490
7101df0488  ldr x8,[x0]
7101df048c  ldr x8,[x8, #0x20]
7101df0490  blr x8
7101df0494  ldr x0,[sp, #0x90]
7101df0498  add x8,sp,#0x40
7101df049c  add x8,x8,#0x30
7101df04a0  cmp x8,x0
7101df04a4  b.eq 0x7101df04b8
7101df04a8  cbz x0,0x7101df04c4
7101df04ac  ldr x8,[x0]
7101df04b0  ldr x8,[x8, #0x28]
7101df04b4  b 0x7101df04c0
7101df04b8  ldr x8,[x0]
7101df04bc  ldr x8,[x8, #0x20]
7101df04c0  blr x8
7101df04c4  adrp x1,0x7104421000
7101df04c8  add x1,x1,#0x55
7101df04cc  add x8,sp,#0x40
7101df04d0  mov x0,x24
7101df04d4  bl 0x71037780e0
7101df04d8  ldr x24,[sp, #0x48]
7101df04dc  ldr x25,[x24, #0x8]
7101df04e0  cbz x25,0x7101df05d0
7101df04e4  ldrb w8,[x24, #0x10]
7101df04e8  cbz w8,0x7101df05b0
7101df04ec  ldr x8,[x24]
7101df04f0  ldr x20,[x8, #0x80]
7101df04f4  add x19,x8,#0x88
7101df04f8  cmp x20,x19
7101df04fc  b.eq 0x7101df05b0
7101df0500  ldr x0,[x20, #0x68]
7101df0504  ldr x8,[x0]
7101df0508  ldr x8,[x8, #0x148]
7101df050c  blr x8
7101df0510  tbz w0,#0x0,0x7101df0550
7101df0514  ldr x8,[x25]
7101df0518  ldr x1,[x20, #0x68]
7101df051c  mov x0,x25
7101df0520  ldr x8,[x8, #0x120]
7101df0524  blr x8
7101df0528  tbz w0,#0x0,0x7101df0550
7101df052c  ldr x0,[x20, #0x68]
7101df0530  ldr x8,[x0]
7101df0534  ldr x8,[x8, #0x178]
7101df0538  blr x8
7101df053c  ldr x0,[x20, #0x68]
7101df0540  ldr x8,[x0]
7101df0544  ldr x8,[x8, #0x140]
7101df0548  mov w1,wzr
7101df054c  blr x8
7101df0550  ldr x8,[x20, #0x8]
7101df0554  cbz x8,0x7101df0568
7101df0558  mov x20,x8
7101df055c  ldr x8,[x8]
7101df0560  cbnz x8,0x7101df0558
7101df0564  b 0x7101df0594
7101df0568  mov x8,x20
7101df056c  ldr x9,[x8, #0x10]!
7101df0570  ldr x10,[x9]
7101df0574  cmp x10,x20
7101df0578  b.eq 0x7101df05a0
7101df057c  ldr x9,[x8]
7101df0580  mov x8,x9
7101df0584  ldr x20,[x8, #0x10]!
7101df0588  ldr x10,[x20]
7101df058c  cmp x10,x9
7101df0590  b.ne 0x7101df057c
7101df0594  cmp x20,x19
7101df0598  b.ne 0x7101df0500
7101df059c  b 0x7101df05ac
7101df05a0  mov x20,x9
7101df05a4  cmp x20,x19
7101df05a8  b.ne 0x7101df0500
7101df05ac  ldr x25,[x24, #0x8]
7101df05b0  ldr x8,[x25]
7101df05b4  ldr x8,[x8, #0x188]
7101df05b8  mov x0,x25
7101df05bc  blr x8
7101df05c0  adrp x8,0x710523d000
7101df05c4  add x8,x8,#0x9e8
7101df05c8  stp x8,xzr,[sp, #0x40]
7101df05cc  b 0x7101df05e0
7101df05d0  adrp x8,0x710523d000
7101df05d4  add x8,x8,#0x9e8
7101df05d8  stp x8,xzr,[sp, #0x40]
7101df05dc  cbz x24,0x7101df05e8
7101df05e0  mov x0,x24
7101df05e4  bl 0x710392eb40
7101df05e8  ldr x0,[x23, #0x240]
7101df05ec  fmov s0,0x3f800000
7101df05f0  cmp w27,#0x0
7101df05f4  csel x1,x22,x21,eq
7101df05f8  bl 0x7103778300
7101df05fc  ldrb w1,[x23, #0x248]
7101df0600  mov x0,x23
7101df0604  bl 0x7101df2d40
7101df0608  ldr x0,[x23, #0x220]
7101df060c  ldr x8,[x0]
7101df0610  ldr x8,[x8, #0x60]
7101df0614  mov w1,#0x1
7101df0618  mov w19,#0x1
7101df061c  blr x8
7101df0620  ldr x0,[x23, #0x228]
7101df0624  ldr x8,[x0]
7101df0628  ldr x8,[x8, #0x60]
7101df062c  mov w1,#0x1
7101df0630  blr x8
7101df0634  ldr x8,[sp, #0x20]
7101df0638  ldr x8,[x8]
7101df063c  ldr x8,[x8]
7101df0640  ldr x9,[x8]
7101df0644  ldr x10,[x9, #0x610]
7101df0648  ldr x8,[x9, #0x608]
7101df064c  cmp x10,x8
7101df0650  b.eq 0x7101df0834
7101df0654  ldr x9,[x8, #0x8]
7101df0658  orr w10,wzr,#0x60
7101df065c  str w10,[x9, #0x40]
7101df0660  ldr x8,[x8, #0x8]
7101df0664  strb wzr,[x8, #0x4aa]
7101df0668  mov x8,#0x7
7101df066c  movk x8,#0x6, LSL #32
7101df0670  stur x8,[x29, #-0x90]
7101df0674  mov x8,#0x9
7101df0678  movk x8,#0x80, LSL #32
7101df067c  sturb w19,[x29, #-0x80]
7101df0680  stur x8,[x29, #-0x88]
7101df0684  adrp x8,0x7105314000
7101df0688  add x8,x8,#0x4d8
7101df068c  ldarb w8,[x8]
7101df0690  ldr x19,[sp, #0x28]
7101df0694  tbz w8,#0x0,0x7101df07f0
7101df0698  adrp x8,0x7105307000
7101df069c  ldr w8,[x8, #0xb6c]
7101df06a0  sub w8,w8,#0x3
7101df06a4  mov w9,#0x10000
7101df06a8  lsl w11,w8,#0x3
7101df06ac  cmp w8,#0x4
7101df06b0  lsr w8,w9,w11
7101df06b4  csinc w8,w8,wzr,cc
7101df06b8  sturb w8,[x29, #-0x80]
7101df06bc  ldr w9,[x19]
7101df06c0  ldrb w8,[x19, #0x10]
7101df06c4  ldrb w11,[x19, #0x11]
7101df06c8  ldrb w12,[x19, #0x13]
7101df06cc  ldr x13,[x19, #0x8]
7101df06d0  strb wzr,[sp, #0x50]
7101df06d4  bfm x9,x8,#0x20,#0x7
7101df06d8  mov w8,#0x9dc5
7101df06dc  movk w8,#0x811c, LSL #16
7101df06e0  bfm x9,x11,#0x18,#0x7
7101df06e4  orr x10,xzr,#0x800000000
7101df06e8  bfm x9,x12,#0x10,#0x7
7101df06ec  stp x13,x10,[sp, #0x38]
7101df06f0  mov x10,#0x6373
7101df06f4  movk x10,#0x5f72, LSL #16
7101df06f8  movk x10,#0x6f73, LSL #32
7101df06fc  movk x10,#0x7472, LSL #48
7101df0700  str x10,[sp, #0x48]
7101df0704  mov w10,#0x73
7101df0708  add x12,sp,#0x40
7101df070c  str x9,[sp, #0x30]
7101df0710  mov w9,#0x9
7101df0714  mov w11,#0x89
7101df0718  mul w8,w8,w11
7101df071c  and w10,w10,#0xff
7101df0720  eor w8,w8,w10
7101df0724  ldrb w10,[x12, x9, LSL ]
7101df0728  add x9,x9,#0x1
7101df072c  cbnz w10,0x7101df0718
7101df0730  str w8,[sp, #0x40]
7101df0734  ldr w8,[sp, #0x14]
7101df0738  ldr x0,[x28, #0x20]
7101df073c  and w4,w8,#0x1
7101df0740  add x1,sp,#0x30
7101df0744  sub x2,x29,#0x90
7101df0748  add x3,sp,#0x40
7101df074c  bl 0x7101df9480
7101df0750  ldr w1,[x19]
7101df0754  mov x0,x28
7101df0758  bl 0x7101df0840
7101df075c  ldr x8,[x19, #0x18]
7101df0760  ldr x0,[x28, #0x18]
7101df0764  cbz x8,0x7101df0788
7101df0768  fmov s0,0x3f800000
7101df076c  adrp x1,0x710434a000
7101df0770  add x1,x1,#0x889
7101df0774  bl 0x7103778300
7101df0778  ldr x1,[x19, #0x18]
7101df077c  mov x0,x28
7101df0780  bl 0x7101df0960
7101df0784  b 0x7101df0798
7101df0788  fmov s0,0x3f800000
7101df078c  adrp x1,0x710433a000
7101df0790  add x1,x1,#0x647
7101df0794  bl 0x7103778300
7101df0798  ldr x0,[x28, #0x18]
7101df079c  adrp x1,0x710428f000
7101df07a0  add x1,x1,#0xf7d
7101df07a4  bl 0x7103778760
7101df07a8  ldrb w8,[x19, #0x12]
7101df07ac  ldr x0,[x28, #0x18]
7101df07b0  fmov s0,0x3f800000
7101df07b4  cmp w8,#0x0
7101df07b8  csel x1,x22,x21,eq
7101df07bc  bl 0x7103778300
7101df07c0  ldr w8,[x19]
7101df07c4  str w8,[x28, #0x144]
7101df07c8  add sp,sp,#0x1b0
7101df07cc  ldp x29,x30,[sp, #0x50]
7101df07d0  ldp x20,x19,[sp, #0x40]
7101df07d4  ldp x22,x21,[sp, #0x30]
7101df07d8  ldp x24,x23,[sp, #0x20]
7101df07dc  ldp x26,x25,[sp, #0x10]
7101df07e0  ldp x28,x27,[sp], #0x60
7101df07e4  ret
7101df07e8  add x8,x9,#0x600
7101df07ec  b 0x7101def480
7101df07f0  adrp x0,0x7105314000
7101df07f4  add x0,x0,#0x4d8
7101df07f8  bl 0x71039c06b0
7101df07fc  cbz w0,0x7101df0698
7101df0800  bl 0x7101764000
7101df0804  adrp x0,0x7101763000
7101df0808  add x0,x0,#0xc40
7101df080c  adrp x1,0x71052c5000
7101df0810  add x1,x1,#0x180
7101df0814  adrp x2,0x7104f17000
7101df0818  add x2,x2,#0x0
7101df081c  bl 0x71000001c0
7101df0820  adrp x0,0x7105314000
7101df0824  add x0,x0,#0x4d8
7101df0828  bl 0x71039c06c0
7101df082c  b 0x7101df0698
7101df0830  bl 0x71039c2650
7101df0834  add x0,x9,#0x608
7101df0838  bl 0x71039c1330
