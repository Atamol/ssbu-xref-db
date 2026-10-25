// addr:      71018bef50
// offset:    0x18bef50
// name:      FUN_71018bef50
// mangled:   
// size:      9596

71018bef50  stp x28,x27,[sp, #-0x60]!
71018bef54  stp x26,x25,[sp, #0x10]
71018bef58  stp x24,x23,[sp, #0x20]
71018bef5c  stp x22,x21,[sp, #0x30]
71018bef60  stp x20,x19,[sp, #0x40]
71018bef64  stp x29,x30,[sp, #0x50]
71018bef68  add x29,sp,#0x50
71018bef6c  sub sp,sp,#0x270
71018bef70  adrp x8,0x710532f000
71018bef74  ldr x8,[x8, #0x830]
71018bef78  mov x25,x0
71018bef7c  ldr x0,[x8, #0x8]
71018bef80  mov w20,#0x4240
71018bef84  movk w20,#0xf, LSL #16
71018bef88  bl 0x71032f4150
71018bef8c  mov x26,x25
71018bef90  ldr x0,[x26, #0xe8]!
71018bef94  ldrsw x2,[x0, #0x70]
71018bef98  ldr w3,[x0, #0x68]
71018bef9c  adrp x22,0x7104545000
71018befa0  add x22,x22,#0x5a8
71018befa4  mov x1,x22
71018befa8  mov w4,wzr
71018befac  bl 0x710323beb0
71018befb0  ldr x0,[x26]
71018befb4  ldrsw x2,[x0, #0x70]
71018befb8  ldr w3,[x0, #0x68]
71018befbc  add x1,x22,#0x8
71018befc0  mov w4,wzr
71018befc4  bl 0x710323beb0
71018befc8  ldr x0,[x26]
71018befcc  ldrsw x2,[x0, #0x70]
71018befd0  ldr w3,[x0, #0x68]
71018befd4  adrp x1,0x7104545000
71018befd8  add x1,x1,#0x5b8
71018befdc  bl 0x710323c1c0
71018befe0  ldr x21,[x26]
71018befe4  b 0x71018beff0
71018befe8  mov x0,x20
71018befec  bl 0x71039c0d80
71018beff0  mov x0,x21
71018beff4  bl 0x710323cb80
71018beff8  tbz w0,#0x0,0x71018befe8
71018beffc  adrp x8,0x7105329000
71018bf000  ldr x8,[x8, #0xf98]
71018bf004  ldr x8,[x8]
71018bf008  ldr x8,[x8, #0x20]
71018bf00c  ldr x21,[x8, #0x8]
71018bf010  b 0x71018bf01c
71018bf014  mov x0,x20
71018bf018  bl 0x71039c0d80
71018bf01c  mov x0,x21
71018bf020  bl 0x710323cb80
71018bf024  tbz w0,#0x0,0x71018bf014
71018bf028  mov w1,#0x88
71018bf02c  mov w0,#0x10
71018bf030  bl 0x710392e290
71018bf034  mov x21,x0
71018bf038  cbnz x0,0x71018bf084
71018bf03c  adrp x8,0x7105332000
71018bf040  ldr x0,[x8, #0xf00]
71018bf044  cbz x0,0x71018bf080
71018bf048  mov w8,#0x88
71018bf04c  str wzr,[sp, #0x20]
71018bf050  add x1,sp,#0x20
71018bf054  str x8,[sp, #0x80]
71018bf058  ldr x8,[x0]
71018bf05c  ldr x8,[x8, #0x30]
71018bf060  add x2,sp,#0x80
71018bf064  blr x8
71018bf068  tbz w0,#0x0,0x71018bf080
71018bf06c  mov w1,#0x88
71018bf070  mov w0,#0x10
71018bf074  bl 0x710392e290
71018bf078  mov x21,x0
71018bf07c  cbnz x0,0x71018bf084
71018bf080  mov x21,xzr
71018bf084  adrp x8,0x71050ae000
71018bf088  add x8,x8,#0xbf8
71018bf08c  mov w1,#0x578
71018bf090  stp x8,xzr,[x21]
71018bf094  orr x8,xzr,#0x1ffffffff
71018bf098  stp xzr,x8,[x21, #0x60]
71018bf09c  mov w8,#0x1
71018bf0a0  mov w0,#0x10
71018bf0a4  stp xzr,xzr,[x21, #0x10]
71018bf0a8  strb wzr,[x21, #0x58]
71018bf0ac  str x26,[x21, #0x78]
71018bf0b0  strb w8,[x21, #0x70]
71018bf0b4  stp xzr,xzr,[x21, #0x48]
71018bf0b8  bl 0x710392e290
71018bf0bc  mov x23,x0
71018bf0c0  cbnz x0,0x71018bf10c
71018bf0c4  adrp x8,0x7105332000
71018bf0c8  ldr x0,[x8, #0xf00]
71018bf0cc  cbz x0,0x71018bf108
71018bf0d0  mov w8,#0x578
71018bf0d4  str wzr,[sp, #0x20]
71018bf0d8  add x1,sp,#0x20
71018bf0dc  str x8,[sp, #0x80]
71018bf0e0  ldr x8,[x0]
71018bf0e4  ldr x8,[x8, #0x30]
71018bf0e8  add x2,sp,#0x80
71018bf0ec  blr x8
71018bf0f0  tbz w0,#0x0,0x71018bf108
71018bf0f4  mov w1,#0x578
71018bf0f8  mov w0,#0x10
71018bf0fc  bl 0x710392e290
71018bf100  mov x23,x0
71018bf104  cbnz x0,0x71018bf10c
71018bf108  mov x23,xzr
71018bf10c  mov w19,#0xffffffff
71018bf110  mov w0,#0x10
71018bf114  mov w1,#0x8
71018bf118  stp xzr,xzr,[x23, #0x10]
71018bf11c  str w19,[x23, #0x120]
71018bf120  stp x23,xzr,[x23]
71018bf124  strb wzr,[x23, #0x124]
71018bf128  str x26,[x23, #0x128]
71018bf12c  stp xzr,x19,[x23, #0x110]
71018bf130  stp xzr,xzr,[x23, #0x100]
71018bf134  stp xzr,xzr,[x23, #0xf0]
71018bf138  stp xzr,xzr,[x23, #0xe0]
71018bf13c  stp xzr,xzr,[x23, #0xd0]
71018bf140  stp xzr,xzr,[x23, #0xc0]
71018bf144  stp xzr,xzr,[x23, #0xb0]
71018bf148  stp xzr,xzr,[x23, #0xa0]
71018bf14c  stp xzr,xzr,[x23, #0x90]
71018bf150  stp xzr,xzr,[x23, #0x80]
71018bf154  stp xzr,xzr,[x23, #0x70]
71018bf158  stp xzr,xzr,[x23, #0x60]
71018bf15c  stp xzr,xzr,[x23, #0x50]
71018bf160  stp xzr,xzr,[x23, #0x40]
71018bf164  stp xzr,xzr,[x23, #0x30]
71018bf168  stp xzr,xzr,[x23, #0x20]
71018bf16c  bl 0x710392e290
71018bf170  mov x24,x0
71018bf174  cbnz x0,0x71018bf1c0
71018bf178  adrp x8,0x7105332000
71018bf17c  ldr x0,[x8, #0xf00]
71018bf180  cbz x0,0x71018bf1bc
71018bf184  mov w8,#0x8
71018bf188  str wzr,[sp, #0x20]
71018bf18c  add x1,sp,#0x20
71018bf190  str x8,[sp, #0x80]
71018bf194  ldr x8,[x0]
71018bf198  ldr x8,[x8, #0x30]
71018bf19c  add x2,sp,#0x80
71018bf1a0  blr x8
71018bf1a4  tbz w0,#0x0,0x71018bf1bc
71018bf1a8  mov w0,#0x10
71018bf1ac  mov w1,#0x8
71018bf1b0  bl 0x710392e290
71018bf1b4  mov x24,x0
71018bf1b8  cbnz x0,0x71018bf1c0
71018bf1bc  mov x24,xzr
71018bf1c0  mov x0,x24
71018bf1c4  str x25,[sp, #0x8]
71018bf1c8  bl 0x7103773200
71018bf1cc  mov w8,#0x100
71018bf1d0  strh w8,[x23, #0x140]
71018bf1d4  ldr x25,[x23, #0x128]
71018bf1d8  mov w8,#0x4001
71018bf1dc  str w8,[x23, #0x144]
71018bf1e0  mov w8,#0x1
71018bf1e4  strb w8,[x23, #0x148]
71018bf1e8  str w8,[x23, #0x14c]
71018bf1ec  adrp x8,0x71050ae000
71018bf1f0  add x8,x8,#0xbb8
71018bf1f4  mov w1,#0x270
71018bf1f8  mov w0,#0x10
71018bf1fc  strb wzr,[x23, #0x150]
71018bf200  stp x24,x8,[x23, #0x130]
71018bf204  bl 0x710392e290
71018bf208  mov x24,x0
71018bf20c  cbnz x0,0x71018bf258
71018bf210  adrp x8,0x7105332000
71018bf214  ldr x0,[x8, #0xf00]
71018bf218  cbz x0,0x71018bf254
71018bf21c  mov w8,#0x270
71018bf220  str wzr,[sp, #0x20]
71018bf224  add x1,sp,#0x20
71018bf228  str x8,[sp, #0x80]
71018bf22c  ldr x8,[x0]
71018bf230  ldr x8,[x8, #0x30]
71018bf234  add x2,sp,#0x80
71018bf238  blr x8
71018bf23c  tbz w0,#0x0,0x71018bf254
71018bf240  mov w1,#0x270
71018bf244  mov w0,#0x10
71018bf248  bl 0x710392e290
71018bf24c  mov x24,x0
71018bf250  cbnz x0,0x71018bf258
71018bf254  mov x24,xzr
71018bf258  mov x27,#0xff0000000000
71018bf25c  add x0,x24,#0x100
71018bf260  str w19,[x24, #0xf0]
71018bf264  movk x27,#0xc1ff, LSL #48
71018bf268  mov w28,#0x9dc5
71018bf26c  movk w28,#0x811c, LSL #16
71018bf270  stp xzr,xzr,[x24, #0x10]
71018bf274  strb wzr,[x24, #0xf4]
71018bf278  stp x24,xzr,[x24]
71018bf27c  str x25,[x24, #0xf8]
71018bf280  stp xzr,x19,[x24, #0xe0]
71018bf284  stp xzr,xzr,[x24, #0xd0]
71018bf288  stp xzr,xzr,[x24, #0xc0]
71018bf28c  stp xzr,xzr,[x24, #0xb0]
71018bf290  stp xzr,xzr,[x24, #0xa0]
71018bf294  stp xzr,xzr,[x24, #0x90]
71018bf298  stp xzr,xzr,[x24, #0x80]
71018bf29c  stp xzr,xzr,[x24, #0x70]
71018bf2a0  stp xzr,xzr,[x24, #0x60]
71018bf2a4  stp xzr,xzr,[x24, #0x50]
71018bf2a8  stp xzr,xzr,[x24, #0x40]
71018bf2ac  stp xzr,xzr,[x24, #0x30]
71018bf2b0  stp xzr,xzr,[x24, #0x20]
71018bf2b4  bl 0x7103776290
71018bf2b8  orr w8,wzr,#0xff
71018bf2bc  stp xzr,xzr,[x24, #0x120]
71018bf2c0  strb w8,[x24, #0x120]
71018bf2c4  add x8,x24,#0x194
71018bf2c8  orr x9,xzr,#-0x100000000
71018bf2cc  stp xzr,xzr,[x24, #0x130]
71018bf2d0  mov w0,#0x10
71018bf2d4  mov w1,#0x8
71018bf2d8  add x19,x24,#0x1f0
71018bf2dc  str wzr,[x24, #0x1d8]
71018bf2e0  str xzr,[x24, #0x150]
71018bf2e4  stp xzr,x27,[x24, #0x110]
71018bf2e8  stp xzr,xzr,[x24, #0x140]
71018bf2ec  strb wzr,[x24, #0x140]
71018bf2f0  str w28,[x24, #0x14c]
71018bf2f4  stp xzr,xzr,[x24, #0x1c8]
71018bf2f8  stp xzr,xzr,[x24, #0x1b8]
71018bf2fc  stp xzr,xzr,[x24, #0x1a8]
71018bf300  stp xzr,xzr,[x24, #0x198]
71018bf304  strb wzr,[x24, #0x19c]
71018bf308  stp xzr,xzr,[x24, #0x188]
71018bf30c  stp xzr,xzr,[x24, #0x178]
71018bf310  stp xzr,xzr,[x24, #0x168]
71018bf314  stp xzr,xzr,[x24, #0x158]
71018bf318  str x28,[x8]
71018bf31c  add x8,x24,#0x1dc
71018bf320  str x9,[x8]
71018bf324  bl 0x710392e290
71018bf328  cbnz x0,0x71018bf360
71018bf32c  adrp x8,0x7105332000
71018bf330  ldr x0,[x8, #0xf00]
71018bf334  mov w8,#0x8
71018bf338  str wzr,[sp, #0x20]
71018bf33c  add x1,sp,#0x20
71018bf340  str x8,[sp, #0x80]
71018bf344  ldr x8,[x0]
71018bf348  ldr x8,[x8, #0x30]
71018bf34c  add x2,sp,#0x80
71018bf350  blr x8
71018bf354  mov w0,#0x10
71018bf358  mov w1,#0x8
71018bf35c  bl 0x710392e290
71018bf360  str x19,[x0]
71018bf364  str x0,[x24, #0x1e8]
71018bf368  mov w0,#0x10
71018bf36c  mov w1,#0x1
71018bf370  bl 0x710392e290
71018bf374  cbnz x0,0x71018bf3bc
71018bf378  adrp x8,0x7105332000
71018bf37c  ldr x0,[x8, #0xf00]
71018bf380  cbz x0,0x71018bf3b8
71018bf384  mov w8,#0x1
71018bf388  str wzr,[sp, #0x20]
71018bf38c  add x1,sp,#0x20
71018bf390  str x8,[sp, #0x80]
71018bf394  ldr x8,[x0]
71018bf398  ldr x8,[x8, #0x30]
71018bf39c  add x2,sp,#0x80
71018bf3a0  blr x8
71018bf3a4  tbz w0,#0x0,0x71018bf3b8
71018bf3a8  mov w0,#0x10
71018bf3ac  mov w1,#0x1
71018bf3b0  bl 0x710392e290
71018bf3b4  cbnz x0,0x71018bf3bc
71018bf3b8  mov x0,xzr
71018bf3bc  stp x0,xzr,[x24, #0x1f0]
71018bf3c0  mov w1,#0xb8
71018bf3c4  mov w0,#0x10
71018bf3c8  strb wzr,[x24, #0x200]
71018bf3cc  bl 0x710392e290
71018bf3d0  mov x25,x0
71018bf3d4  cbnz x0,0x71018bf420
71018bf3d8  adrp x8,0x7105332000
71018bf3dc  ldr x0,[x8, #0xf00]
71018bf3e0  cbz x0,0x71018bf41c
71018bf3e4  mov w8,#0xb8
71018bf3e8  str wzr,[sp, #0x20]
71018bf3ec  add x1,sp,#0x20
71018bf3f0  str x8,[sp, #0x80]
71018bf3f4  ldr x8,[x0]
71018bf3f8  ldr x8,[x8, #0x30]
71018bf3fc  add x2,sp,#0x80
71018bf400  blr x8
71018bf404  tbz w0,#0x0,0x71018bf41c
71018bf408  mov w1,#0xb8
71018bf40c  mov w0,#0x10
71018bf410  bl 0x710392e290
71018bf414  mov x25,x0
71018bf418  cbnz x0,0x71018bf420
71018bf41c  mov x25,xzr
71018bf420  adrp x8,0x710523d000
71018bf424  add x8,x8,#0x9a8
71018bf428  mov w0,#0x10
71018bf42c  mov w1,#0x20
71018bf430  str x8,[x25]
71018bf434  bl 0x710392e290
71018bf438  cbnz x0,0x71018bf480
71018bf43c  adrp x8,0x7105332000
71018bf440  ldr x0,[x8, #0xf00]
71018bf444  cbz x0,0x71018bf47c
71018bf448  mov w8,#0x20
71018bf44c  str wzr,[sp, #0x20]
71018bf450  add x1,sp,#0x20
71018bf454  str x8,[sp, #0x80]
71018bf458  ldr x8,[x0]
71018bf45c  ldr x8,[x8, #0x30]
71018bf460  add x2,sp,#0x80
71018bf464  blr x8
71018bf468  tbz w0,#0x0,0x71018bf47c
71018bf46c  mov w0,#0x10
71018bf470  mov w1,#0x20
71018bf474  bl 0x710392e290
71018bf478  cbnz x0,0x71018bf480
71018bf47c  mov x0,xzr
71018bf480  mov w9,#0x100
71018bf484  stp xzr,xzr,[x0, #0x10]
71018bf488  stp xzr,xzr,[x0]
71018bf48c  mov w8,#0x1
71018bf490  strh w9,[x25, #0xb0]
71018bf494  orr w9,wzr,#0x3f800000
71018bf498  strb wzr,[x25, #0x18]
71018bf49c  strh wzr,[x25, #0x90]
71018bf4a0  str xzr,[x25, #0x58]
71018bf4a4  stur xzr,[x25, #0x9c]
71018bf4a8  stur xzr,[x25, #0x94]
71018bf4ac  str w8,[x25, #0xa4]
71018bf4b0  str xzr,[x25, #0xa8]
71018bf4b4  str w9,[x25, #0xb4]
71018bf4b8  adrp x9,0x7101d26000
71018bf4bc  add x9,x9,#0xe0
71018bf4c0  stp x0,xzr,[x25, #0x8]
71018bf4c4  stp xzr,xzr,[x25, #0x80]
71018bf4c8  stp xzr,xzr,[x25, #0x70]
71018bf4cc  stp xzr,xzr,[x25, #0x60]
71018bf4d0  strh w8,[x24, #0x24c]
71018bf4d4  adrp x8,0x7101d25000
71018bf4d8  add x8,x8,#0xfe0
71018bf4dc  str x25,[x24, #0x240]
71018bf4e0  str wzr,[x24, #0x248]
71018bf4e4  strb wzr,[x24, #0x24e]
71018bf4e8  str wzr,[x24, #0x250]
71018bf4ec  strb wzr,[x24, #0x254]
71018bf4f0  str wzr,[x24, #0x264]
71018bf4f4  strh wzr,[x24, #0x268]
71018bf4f8  strb wzr,[x24, #0x260]
71018bf4fc  str xzr,[x24, #0x258]
71018bf500  stp x8,xzr,[x24, #0x28]
71018bf504  adrp x8,0x7101d26000
71018bf508  add x8,x8,#0x0
71018bf50c  stp x8,xzr,[x24, #0x38]
71018bf510  adrp x8,0x7101d26000
71018bf514  add x8,x8,#0x720
71018bf518  stp x8,xzr,[x24, #0x58]
71018bf51c  adrp x8,0x7101d26000
71018bf520  add x8,x8,#0xfe0
71018bf524  stp x8,xzr,[x24, #0x68]
71018bf528  ldrsw x8,[x24, #0xe4]
71018bf52c  cmp w8,#0x13
71018bf530  stp x9,xzr,[x24, #0x48]
71018bf534  adrp x9,0x7101d27000
71018bf538  add x9,x9,#0x80
71018bf53c  stp x9,xzr,[x24, #0x78]
71018bf540  adrp x9,0x7101d27000
71018bf544  add x9,x9,#0x1e0
71018bf548  stp x9,xzr,[x24, #0x88]
71018bf54c  b.cs 0x71018c14c8
71018bf550  add x8,x24,x8, LSL #0x2
71018bf554  mov w0,#0x10
71018bf558  mov w1,#0x8
71018bf55c  str wzr,[x8, #0x98]
71018bf560  str x24,[x23, #0x158]
71018bf564  strb wzr,[x23, #0x160]
71018bf568  str wzr,[x23, #0x164]
71018bf56c  strh wzr,[x23, #0x168]
71018bf570  bl 0x710392e290
71018bf574  mov x24,x0
71018bf578  cbnz x0,0x71018bf5c4
71018bf57c  adrp x8,0x7105332000
71018bf580  ldr x0,[x8, #0xf00]
71018bf584  cbz x0,0x71018bf5c0
71018bf588  mov w8,#0x8
71018bf58c  str wzr,[sp, #0x20]
71018bf590  add x1,sp,#0x20
71018bf594  str x8,[sp, #0x80]
71018bf598  ldr x8,[x0]
71018bf59c  ldr x8,[x8, #0x30]
71018bf5a0  add x2,sp,#0x80
71018bf5a4  blr x8
71018bf5a8  tbz w0,#0x0,0x71018bf5c0
71018bf5ac  mov w0,#0x10
71018bf5b0  mov w1,#0x8
71018bf5b4  bl 0x710392e290
71018bf5b8  mov x24,x0
71018bf5bc  cbnz x0,0x71018bf5c4
71018bf5c0  mov x24,xzr
71018bf5c4  mov x0,x24
71018bf5c8  bl 0x7103773200
71018bf5cc  mov w27,#0xffffffff
71018bf5d0  mov w1,#0xb8
71018bf5d4  mov w0,#0x10
71018bf5d8  stp x24,xzr,[x23, #0x170]
71018bf5dc  str x27,[x23, #0x180]
71018bf5e0  bl 0x710392e290
71018bf5e4  mov x24,x0
71018bf5e8  cbnz x0,0x71018bf634
71018bf5ec  adrp x8,0x7105332000
71018bf5f0  ldr x0,[x8, #0xf00]
71018bf5f4  cbz x0,0x71018bf630
71018bf5f8  mov w8,#0xb8
71018bf5fc  str wzr,[sp, #0x20]
71018bf600  add x1,sp,#0x20
71018bf604  str x8,[sp, #0x80]
71018bf608  ldr x8,[x0]
71018bf60c  ldr x8,[x8, #0x30]
71018bf610  add x2,sp,#0x80
71018bf614  blr x8
71018bf618  tbz w0,#0x0,0x71018bf630
71018bf61c  mov w1,#0xb8
71018bf620  mov w0,#0x10
71018bf624  bl 0x710392e290
71018bf628  mov x24,x0
71018bf62c  cbnz x0,0x71018bf634
71018bf630  mov x24,xzr
71018bf634  adrp x8,0x710523d000
71018bf638  add x8,x8,#0x9a8
71018bf63c  mov w0,#0x10
71018bf640  mov w1,#0x20
71018bf644  str x8,[x24]
71018bf648  bl 0x710392e290
71018bf64c  cbnz x0,0x71018bf694
71018bf650  adrp x8,0x7105332000
71018bf654  ldr x0,[x8, #0xf00]
71018bf658  cbz x0,0x71018bf690
71018bf65c  mov w8,#0x20
71018bf660  str wzr,[sp, #0x20]
71018bf664  add x1,sp,#0x20
71018bf668  str x8,[sp, #0x80]
71018bf66c  ldr x8,[x0]
71018bf670  ldr x8,[x8, #0x30]
71018bf674  add x2,sp,#0x80
71018bf678  blr x8
71018bf67c  tbz w0,#0x0,0x71018bf690
71018bf680  mov w0,#0x10
71018bf684  mov w1,#0x20
71018bf688  bl 0x710392e290
71018bf68c  cbnz x0,0x71018bf694
71018bf690  mov x0,xzr
71018bf694  mov w8,#0x1
71018bf698  stp xzr,xzr,[x0, #0x10]
71018bf69c  stp xzr,xzr,[x0]
71018bf6a0  add x25,x23,#0x190
71018bf6a4  orr w2,wzr,#0x1e0
71018bf6a8  mov w1,wzr
71018bf6ac  str w8,[x24, #0xa4]
71018bf6b0  mov w8,#0x100
71018bf6b4  strh w8,[x24, #0xb0]
71018bf6b8  orr w8,wzr,#0x3f800000
71018bf6bc  strb wzr,[x24, #0x18]
71018bf6c0  strh wzr,[x24, #0x90]
71018bf6c4  str xzr,[x24, #0x58]
71018bf6c8  stur xzr,[x24, #0x9c]
71018bf6cc  stur xzr,[x24, #0x94]
71018bf6d0  str xzr,[x24, #0xa8]
71018bf6d4  str w8,[x24, #0xb4]
71018bf6d8  stp x0,xzr,[x24, #0x8]
71018bf6dc  mov x0,x25
71018bf6e0  stp xzr,xzr,[x24, #0x80]
71018bf6e4  stp xzr,xzr,[x24, #0x70]
71018bf6e8  stp xzr,xzr,[x24, #0x60]
71018bf6ec  str x24,[x23, #0x188]
71018bf6f0  bl 0x71039c02a0
71018bf6f4  mov x0,x25
71018bf6f8  bl 0x71017abc20
71018bf6fc  add x24,x23,#0x370
71018bf700  orr w2,wzr,#0x1e0
71018bf704  mov x0,x24
71018bf708  mov w1,wzr
71018bf70c  bl 0x71039c02a0
71018bf710  mov x0,x24
71018bf714  bl 0x71017abc20
71018bf718  mov w0,#0x10
71018bf71c  mov w1,#0x8
71018bf720  strh wzr,[x23, #0x558]
71018bf724  str xzr,[x23, #0x550]
71018bf728  add x19,x23,#0x568
71018bf72c  str wzr,[x23, #0x55c]
71018bf730  bl 0x710392e290
71018bf734  cbnz x0,0x71018bf76c
71018bf738  adrp x8,0x7105332000
71018bf73c  ldr x0,[x8, #0xf00]
71018bf740  mov w8,#0x8
71018bf744  str wzr,[sp, #0x20]
71018bf748  add x1,sp,#0x20
71018bf74c  str x8,[sp, #0x80]
71018bf750  ldr x8,[x0]
71018bf754  ldr x8,[x8, #0x30]
71018bf758  add x2,sp,#0x80
71018bf75c  blr x8
71018bf760  mov w0,#0x10
71018bf764  mov w1,#0x8
71018bf768  bl 0x710392e290
71018bf76c  str x19,[x0]
71018bf770  str x0,[x23, #0x560]
71018bf774  mov w0,#0x10
71018bf778  mov w1,#0x1
71018bf77c  bl 0x710392e290
71018bf780  cbnz x0,0x71018bf7c8
71018bf784  adrp x8,0x7105332000
71018bf788  ldr x0,[x8, #0xf00]
71018bf78c  cbz x0,0x71018bf7c4
71018bf790  mov w8,#0x1
71018bf794  str wzr,[sp, #0x20]
71018bf798  add x1,sp,#0x20
71018bf79c  str x8,[sp, #0x80]
71018bf7a0  ldr x8,[x0]
71018bf7a4  ldr x8,[x8, #0x30]
71018bf7a8  add x2,sp,#0x80
71018bf7ac  blr x8
71018bf7b0  tbz w0,#0x0,0x71018bf7c4
71018bf7b4  mov w0,#0x10
71018bf7b8  mov w1,#0x1
71018bf7bc  bl 0x710392e290
71018bf7c0  cbnz x0,0x71018bf7c8
71018bf7c4  mov x0,xzr
71018bf7c8  adrp x8,0x7101d27000
71018bf7cc  add x8,x8,#0xce0
71018bf7d0  adrp x9,0x7101d27000
71018bf7d4  add x9,x9,#0xd00
71018bf7d8  stp x8,xzr,[x23, #0x28]
71018bf7dc  adrp x8,0x7101d27000
71018bf7e0  add x8,x8,#0xcf0
71018bf7e4  str x0,[x23, #0x568]
71018bf7e8  stp x8,xzr,[x23, #0x38]
71018bf7ec  adrp x8,0x7101d27000
71018bf7f0  add x8,x8,#0xd10
71018bf7f4  stp x8,xzr,[x23, #0x58]
71018bf7f8  adrp x8,0x7101d27000
71018bf7fc  add x8,x8,#0xf90
71018bf800  strb wzr,[x23, #0x570]
71018bf804  stp x8,xzr,[x23, #0x68]
71018bf808  adrp x8,0x7101d28000
71018bf80c  add x8,x8,#0x770
71018bf810  stp x8,xzr,[x23, #0x88]
71018bf814  adrp x8,0x7101d28000
71018bf818  add x8,x8,#0xaf0
71018bf81c  stp x8,xzr,[x23, #0x98]
71018bf820  ldrsw x8,[x23, #0x114]
71018bf824  cmp w8,#0x13
71018bf828  stp x9,xzr,[x23, #0x48]
71018bf82c  adrp x9,0x7101d28000
71018bf830  add x9,x9,#0x100
71018bf834  stp x9,xzr,[x23, #0x78]
71018bf838  adrp x9,0x7101d2a000
71018bf83c  add x9,x9,#0xa50
71018bf840  stp x9,xzr,[x23, #0xa8]
71018bf844  adrp x9,0x7101d2a000
71018bf848  add x9,x9,#0xae0
71018bf84c  stp x9,xzr,[x23, #0xb8]
71018bf850  b.cs 0x71018c14c8
71018bf854  add x8,x23,x8, LSL #0x2
71018bf858  add x9,x23,#0x550
71018bf85c  mov w24,#0x101
71018bf860  str wzr,[x8, #0xc8]
71018bf864  orr x8,xzr,#0x101010101010101
71018bf868  strh w24,[x9, #0x8]
71018bf86c  str x8,[x9]
71018bf870  str x23,[x21, #0x80]
71018bf874  adrp x8,0x710532f000
71018bf878  ldr x19,[x8, #0x8b8]
71018bf87c  adrp x8,0x710532f000
71018bf880  add x8,x8,#0x4d8
71018bf884  ldr x23,[x26]
71018bf888  ldarb w8,[x8]
71018bf88c  tbz w8,#0x0,0x71018c1378
71018bf890  ldr x10,[x23, #0x28]!
71018bf894  cbz x10,0x71018bf8dc
71018bf898  mov x9,#0xf41c
71018bf89c  movk x9,#0xe908, LSL #16
71018bf8a0  movk x9,#0x10, LSL #32
71018bf8a4  mov x8,x23
71018bf8a8  ldr x11,[x10, #0x20]
71018bf8ac  and x11,x11,#0xfffffffffc
71018bf8b0  cmp x11,x9
71018bf8b4  cset w11,cc
71018bf8b8  csel x8,x8,x10,cc
71018bf8bc  ldr x10,[x10, w11, UXTW #0x3]
71018bf8c0  cbnz x10,0x71018bf8a8
71018bf8c4  cmp x8,x23
71018bf8c8  b.eq 0x71018bf8dc
71018bf8cc  ldr x10,[x8, #0x20]
71018bf8d0  and x10,x10,#0xffffffffff
71018bf8d4  cmp x10,x9
71018bf8d8  b.ls 0x71018c0a5c
71018bf8dc  adrp x23,0x710532f000
71018bf8e0  add x23,x23,#0x4a4
71018bf8e4  ldr w8,[x23]
71018bf8e8  orr w9,wzr,#0xffffff
71018bf8ec  cmp w8,w9
71018bf8f0  b.eq 0x71018bf924
71018bf8f4  ldr x0,[x19, #0x8]
71018bf8f8  adrp x1,0x7104545000
71018bf8fc  add x1,x1,#0x5b8
71018bf900  orr w2,wzr,#0x6
71018bf904  bl 0x710330a8f0
71018bf908  cbz w0,0x71018bf924
71018bf90c  adrp x8,0x7105334000
71018bf910  ldr x8,[x8, #0x920]
71018bf914  mov w1,w0
71018bf918  ldr x0,[x8]
71018bf91c  mov x2,x23
71018bf920  bl 0x7103563a20
71018bf924  ldr x23,[x21, #0x80]
71018bf928  ldr x8,[x23, #0x128]
71018bf92c  ldr x1,[x8]
71018bf930  add x0,x23,#0x130
71018bf934  mov w3,#0x1
71018bf938  mov x2,x22
71018bf93c  mov w19,#0x1
71018bf940  bl 0x71032cbf30
71018bf944  ldr x8,[x23, #0x128]
71018bf948  ldr x1,[x8]
71018bf94c  add x0,x23,#0x170
71018bf950  add x2,x22,#0x8
71018bf954  mov w3,#0x1
71018bf958  bl 0x71032cbf30
71018bf95c  ldr x8,[x23, #0x130]
71018bf960  ldr x8,[x8]
71018bf964  ldr x8,[x8]
71018bf968  ldr x9,[x8, #0x600]
71018bf96c  mov w10,#0xf
71018bf970  movk w10,#0xf0, LSL #16
71018bf974  str w10,[x9, #0xdc]
71018bf978  ldr x9,[x8, #0x600]
71018bf97c  mov w10,#0x20
71018bf980  str w10,[x9, #0xcc]
71018bf984  ldr x9,[x8, #0x600]
71018bf988  str w10,[x9, #0xd0]
71018bf98c  ldr x9,[x8, #0x600]
71018bf990  str w10,[x9, #0xd4]
71018bf994  ldr x8,[x8, #0x600]
71018bf998  str w10,[x8, #0xd8]
71018bf99c  mov w8,#0x1000
71018bf9a0  movk w8,#0x1, LSL #16
71018bf9a4  str w8,[x23, #0x144]
71018bf9a8  ldr x8,[x23, #0x170]
71018bf9ac  strh w24,[x23, #0x140]
71018bf9b0  strb w19,[x23, #0x148]
71018bf9b4  str w19,[x23, #0x14c]
71018bf9b8  strb wzr,[x23, #0x150]
71018bf9bc  ldr x8,[x8]
71018bf9c0  ldr x9,[x8]
71018bf9c4  ldr x8,[x9, #0x600]
71018bf9c8  str w19,[x8, #0x494]
71018bf9cc  ldr x8,[x9, #0x608]
71018bf9d0  ldr x9,[x9, #0x610]
71018bf9d4  cmp x8,x9
71018bf9d8  b.eq 0x71018bfa48
71018bf9dc  sub x10,x9,#0x10
71018bf9e0  sub x10,x10,x8
71018bf9e4  ubfx x11,x10,#0x4,#0x1c
71018bf9e8  add w11,w11,#0x1
71018bf9ec  ands x11,x11,#0x3
71018bf9f0  b.eq 0x71018bfa10
71018bf9f4  neg x11,x11
71018bf9f8  mov w12,#0x1
71018bf9fc  ldr x13,[x8, #0x8]
71018bfa00  add x8,x8,#0x10
71018bfa04  adds x11,x11,#0x1
71018bfa08  str w12,[x13, #0x494]
71018bfa0c  b.ne 0x71018bf9fc
71018bfa10  cmp x10,#0x30
71018bfa14  b.cc 0x71018bfa48
71018bfa18  mov w10,#0x1
71018bfa1c  ldr x11,[x8, #0x8]
71018bfa20  str w10,[x11, #0x494]
71018bfa24  ldr x11,[x8, #0x18]
71018bfa28  str w10,[x11, #0x494]
71018bfa2c  ldr x11,[x8, #0x28]
71018bfa30  str w10,[x11, #0x494]
71018bfa34  ldr x11,[x8, #0x38]
71018bfa38  add x8,x8,#0x40
71018bfa3c  cmp x9,x8
71018bfa40  str w10,[x11, #0x494]
71018bfa44  b.ne 0x71018bfa1c
71018bfa48  ldr x8,[x23, #0x170]
71018bfa4c  str x26,[sp]
71018bfa50  ldr x26,[x23, #0x158]
71018bfa54  ldr x9,[x8]
71018bfa58  add x10,x9,#0x8
71018bfa5c  add x22,x26,#0x100
71018bfa60  cmp x22,x10
71018bfa64  b.eq 0x71018bfad8
71018bfa68  ldr x10,[x9, #0x10]
71018bfa6c  ldr x10,[x10]
71018bfa70  ldr x11,[x26, #0x108]
71018bfa74  str x10,[x11]
71018bfa78  ldr x10,[x9, #0x10]
71018bfa7c  ldr x10,[x10, #0x8]
71018bfa80  ldr x11,[x26, #0x108]
71018bfa84  str x10,[x11, #0x8]
71018bfa88  ldr x10,[x9, #0x10]
71018bfa8c  ldr x9,[x26, #0x108]
71018bfa90  cmp x9,x10
71018bfa94  b.eq 0x71018bfad8
71018bfa98  ldr x11,[x10, #0x18]
71018bfa9c  ldr x11,[x11]
71018bfaa0  ldr x12,[x9, #0x18]
71018bfaa4  str x11,[x12]
71018bfaa8  ldr x11,[x10, #0x18]
71018bfaac  ldr x11,[x11, #0x8]
71018bfab0  ldr x12,[x9, #0x18]
71018bfab4  str x11,[x12, #0x8]
71018bfab8  ldr x11,[x10, #0x18]
71018bfabc  ldr x11,[x11, #0x10]
71018bfac0  ldr x12,[x9, #0x18]
71018bfac4  str x11,[x12, #0x10]
71018bfac8  ldr x10,[x10, #0x18]
71018bfacc  ldr x10,[x10, #0x18]
71018bfad0  ldr x9,[x9, #0x18]
71018bfad4  str x10,[x9, #0x18]
71018bfad8  ldr x8,[x8]
71018bfadc  ldr x8,[x8]
71018bfae0  ldr x8,[x8, #0x600]
71018bfae4  mov w9,#0x10
71018bfae8  str w9,[x8, #0x18]
71018bfaec  mov w19,#0x1
71018bfaf0  mov x8,#0x41f0000000000000
71018bfaf4  add x9,sp,#0x80
71018bfaf8  add x0,sp,#0x80
71018bfafc  str w27,[x26, #0x1e0]
71018bfb00  str xzr,[sp, #0x80]
71018bfb04  strh w24,[sp, #0x88]
71018bfb08  strh wzr,[sp, #0x8e]
71018bfb0c  stur wzr,[sp, #0x8a]
71018bfb10  str w19,[sp, #0x90]
71018bfb14  strh w19,[sp, #0x94]
71018bfb18  strb w19,[sp, #0x96]
71018bfb1c  str x8,[sp, #0x98]
71018bfb20  add x27,x9,#0x60
71018bfb24  str wzr,[sp, #0xa0]
71018bfb28  str xzr,[sp, #0xd0]
71018bfb2c  str xzr,[sp, #0x100]
71018bfb30  str xzr,[sp, #0x130]
71018bfb34  str xzr,[sp, #0x160]
71018bfb38  str xzr,[sp, #0x190]
71018bfb3c  str wzr,[sp, #0x1a0]
71018bfb40  bl 0x710337df20
71018bfb44  ldr x0,[sp, #0x100]
71018bfb48  str xzr,[sp, #0x100]
71018bfb4c  cmp x27,x0
71018bfb50  strb w19,[sp, #0x89]
71018bfb54  b.eq 0x71018bfb68
71018bfb58  cbz x0,0x71018bfb74
71018bfb5c  ldr x8,[x0]
71018bfb60  ldr x8,[x8, #0x28]
71018bfb64  b 0x71018bfb70
71018bfb68  ldr x8,[x0]
71018bfb6c  ldr x8,[x8, #0x20]
71018bfb70  blr x8
71018bfb74  ldr x0,[sp, #0x130]
71018bfb78  add x8,sp,#0x80
71018bfb7c  add x19,x8,#0x90
71018bfb80  cmp x19,x0
71018bfb84  str xzr,[sp, #0x130]
71018bfb88  b.eq 0x71018bfb9c
71018bfb8c  cbz x0,0x71018bfba8
71018bfb90  ldr x8,[x0]
71018bfb94  ldr x8,[x8, #0x28]
71018bfb98  b 0x71018bfba4
71018bfb9c  ldr x8,[x0]
71018bfba0  ldr x8,[x8, #0x20]
71018bfba4  blr x8
71018bfba8  add x24,x26,#0x110
71018bfbac  adrp x2,0x7104307000
71018bfbb0  add x2,x2,#0x72
71018bfbb4  add x3,sp,#0x80
71018bfbb8  mov x0,x24
71018bfbbc  mov x1,x22
71018bfbc0  bl 0x7103770b30
71018bfbc4  adrp x2,0x7104308000
71018bfbc8  add x2,x2,#0xc5c
71018bfbcc  mov x0,x24
71018bfbd0  mov w1,wzr
71018bfbd4  bl 0x71037717d0
71018bfbd8  adrp x2,0x7104401000
71018bfbdc  add x2,x2,#0xdad
71018bfbe0  mov w1,#0x1
71018bfbe4  mov x0,x24
71018bfbe8  bl 0x71037717d0
71018bfbec  ldr x9,[x26, #0x110]
71018bfbf0  ldr x8,[x9, #0x1b8]
71018bfbf4  cbz x8,0x71018bfcd8
71018bfbf8  add x9,x9,#0x1b8
71018bfbfc  mov x10,x9
71018bfc00  mov x11,x8
71018bfc04  ldr w12,[x11, #0x20]
71018bfc08  cmp w12,#0x1
71018bfc0c  cset w12,lt
71018bfc10  csel x10,x10,x11,lt
71018bfc14  ldr x11,[x11, w12, UXTW #0x3]
71018bfc18  cbnz x11,0x71018bfc04
71018bfc1c  cmp x10,x9
71018bfc20  b.eq 0x71018bfc70
71018bfc24  ldr w11,[x10, #0x20]
71018bfc28  cmp w11,#0x1
71018bfc2c  b.gt 0x71018bfc70
71018bfc30  ldr x25,[x10, #0x28]
71018bfc34  cbz x25,0x71018bfc70
71018bfc38  ldr x8,[x25]
71018bfc3c  ldr x8,[x8, #0x1f8]
71018bfc40  mov w1,#0x1
71018bfc44  mov x0,x25
71018bfc48  blr x8
71018bfc4c  ldr x8,[x25]
71018bfc50  ldr x8,[x8, #0x388]
71018bfc54  mov x0,x25
71018bfc58  mov w1,wzr
71018bfc5c  mov w2,wzr
71018bfc60  blr x8
71018bfc64  ldr x8,[x24]
71018bfc68  add x9,x8,#0x1b8
71018bfc6c  ldr x8,[x8, #0x1b8]
71018bfc70  cbz x8,0x71018bfcd8
71018bfc74  mov x10,x9
71018bfc78  ldr w11,[x8, #0x20]
71018bfc7c  cmp w11,#0x0
71018bfc80  cset w11,lt
71018bfc84  csel x10,x10,x8,lt
71018bfc88  ldr x8,[x8, w11, UXTW #0x3]
71018bfc8c  cbnz x8,0x71018bfc78
71018bfc90  cmp x10,x9
71018bfc94  b.eq 0x71018bfcd8
71018bfc98  ldr w8,[x10, #0x20]
71018bfc9c  cmp w8,#0x0
71018bfca0  b.gt 0x71018bfcd8
71018bfca4  ldr x25,[x10, #0x28]
71018bfca8  cbz x25,0x71018bfcd8
71018bfcac  ldr x8,[x25]
71018bfcb0  ldr x8,[x8, #0x1f8]
71018bfcb4  mov w1,#0x1
71018bfcb8  mov x0,x25
71018bfcbc  blr x8
71018bfcc0  ldr x8,[x25]
71018bfcc4  ldr x8,[x8, #0x388]
71018bfcc8  mov x0,x25
71018bfccc  mov w1,wzr
71018bfcd0  mov w2,wzr
71018bfcd4  blr x8
71018bfcd8  mov x0,x24
71018bfcdc  mov w1,wzr
71018bfce0  mov w2,wzr
71018bfce4  bl 0x7103771a80
71018bfce8  adrp x1,0x7104401000
71018bfcec  add x1,x1,#0x7f0
71018bfcf0  add x8,sp,#0x70
71018bfcf4  mov x0,x22
71018bfcf8  add x24,sp,#0x70
71018bfcfc  bl 0x7103776640
71018bfd00  adrp x1,0x710433a000
71018bfd04  add x1,x1,#0x393
71018bfd08  add x8,sp,#0x20
71018bfd0c  add x0,sp,#0x70
71018bfd10  bl 0x7103776640
71018bfd14  ldr x22,[sp, #0x78]
71018bfd18  adrp x8,0x710523d000
71018bfd1c  add x8,x8,#0x988
71018bfd20  stp x8,xzr,[sp, #0x70]
71018bfd24  cbz x22,0x71018bfd48
71018bfd28  ldr x0,[x22, #0x18]
71018bfd2c  adrp x8,0x710523d000
71018bfd30  add x8,x8,#0x9a8
71018bfd34  stp x8,xzr,[x22, #0x10]
71018bfd38  cbz x0,0x71018bfd40
71018bfd3c  bl 0x710392eb40
71018bfd40  mov x0,x22
71018bfd44  bl 0x710392eb40
71018bfd48  adrp x1,0x71042b2000
71018bfd4c  add x1,x1,#0x92e
71018bfd50  add x8,sp,#0x70
71018bfd54  add x0,sp,#0x20
71018bfd58  bl 0x7103776910
71018bfd5c  ldr x0,[x26, #0x240]
71018bfd60  cmp x0,x24
71018bfd64  b.eq 0x71018bfda4
71018bfd68  ldr x8,[sp, #0x78]
71018bfd6c  ldr x8,[x8]
71018bfd70  ldr x9,[x0, #0x8]
71018bfd74  str x8,[x9]
71018bfd78  ldr x8,[sp, #0x78]
71018bfd7c  ldr x8,[x8, #0x8]
71018bfd80  ldr x9,[x0, #0x8]
71018bfd84  str x8,[x9, #0x8]
71018bfd88  ldr x8,[sp, #0x78]
71018bfd8c  ldr x9,[x8, #0x10]
71018bfd90  ldr x10,[x0, #0x8]
71018bfd94  str x9,[x10, #0x10]
71018bfd98  ldr x8,[x8, #0x18]
71018bfd9c  ldr x9,[x0, #0x8]
71018bfda0  str x8,[x9, #0x18]
71018bfda4  mov x8,xzr
71018bfda8  adrp x24,0x710439b000
71018bfdac  add x24,x24,#0x9ef
71018bfdb0  b 0x71018bfdbc
71018bfdb4  add x8,x8,#0x2
71018bfdb8  strb w10,[x9, #0x19]
71018bfdbc  add x10,x24,x8
71018bfdc0  ldrb w11,[x10]
71018bfdc4  cbz w11,0x71018bfddc
71018bfdc8  add x9,x0,x8
71018bfdcc  strb w11,[x9, #0x18]
71018bfdd0  ldrb w10,[x10, #0x1]
71018bfdd4  cbnz w10,0x71018bfdb4
71018bfdd8  add x8,x8,#0x1
71018bfddc  add x1,x0,#0x18
71018bfde0  strb wzr,[x1, w8, UXTW ]
71018bfde4  str w8,[x0, #0x14]
71018bfde8  ldrb w8,[x0, #0x18]
71018bfdec  mov w9,w28
71018bfdf0  cbz w8,0x71018bfe14
71018bfdf4  add x10,x0,#0x19
71018bfdf8  mov w11,#0x89
71018bfdfc  mov w9,w28
71018bfe00  mul w9,w9,w11
71018bfe04  and w8,w8,#0xff
71018bfe08  eor w9,w9,w8
71018bfe0c  ldrb w8,[x10], #0x1
71018bfe10  cbnz w8,0x71018bfe00
71018bfe14  ldr w3,[x0, #0x94]
71018bfe18  mov x22,#0xa9ed
71018bfe1c  movk x22,#0x5906, LSL #16
71018bfe20  mov x25,#0xa2b5
71018bfe24  movk x25,#0x410f, LSL #16
71018bfe28  mov w2,#0x1
71018bfe2c  movk x22,#0x1a, LSL #32
71018bfe30  movk x25,#0x1a, LSL #32
71018bfe34  str w9,[x0, #0x10]
71018bfe38  bl 0x710377a280
71018bfe3c  ldr x0,[x26, #0x240]
71018bfe40  adrp x2,0x7104464000
71018bfe44  add x2,x2,#0x38d
71018bfe48  adrp x3,0x7104348000
71018bfe4c  add x3,x3,#0xacf
71018bfe50  add x1,sp,#0x20
71018bfe54  bl 0x7103399a70
71018bfe58  ldr x8,[x26, #0x240]
71018bfe5c  stp x25,x22,[x8, #0x68]
71018bfe60  ldr x0,[sp, #0x78]
71018bfe64  adrp x8,0x710523d000
71018bfe68  add x8,x8,#0x9a8
71018bfe6c  stp x8,xzr,[sp, #0x70]
71018bfe70  cbz x0,0x71018bfe78
71018bfe74  bl 0x710392eb40
71018bfe78  ldr x22,[sp, #0x28]
71018bfe7c  adrp x8,0x710523d000
71018bfe80  add x8,x8,#0x988
71018bfe84  stp x8,xzr,[sp, #0x20]
71018bfe88  cbz x22,0x71018bfeac
71018bfe8c  ldr x0,[x22, #0x18]
71018bfe90  adrp x8,0x710523d000
71018bfe94  add x8,x8,#0x9a8
71018bfe98  stp x8,xzr,[x22, #0x10]
71018bfe9c  cbz x0,0x71018bfea4
71018bfea0  bl 0x710392eb40
71018bfea4  mov x0,x22
71018bfea8  bl 0x710392eb40
71018bfeac  ldr x0,[sp, #0x190]
71018bfeb0  add x8,sp,#0x80
71018bfeb4  add x8,x8,#0xf0
71018bfeb8  cmp x8,x0
71018bfebc  b.eq 0x71018bfed0
71018bfec0  cbz x0,0x71018bfedc
71018bfec4  ldr x8,[x0]
71018bfec8  ldr x8,[x8, #0x28]
71018bfecc  b 0x71018bfed8
71018bfed0  ldr x8,[x0]
71018bfed4  ldr x8,[x8, #0x20]
71018bfed8  blr x8
71018bfedc  ldr x0,[sp, #0x160]
71018bfee0  add x8,sp,#0x80
71018bfee4  add x8,x8,#0xc0
71018bfee8  cmp x8,x0
71018bfeec  b.eq 0x71018bff00
71018bfef0  cbz x0,0x71018bff0c
71018bfef4  ldr x8,[x0]
71018bfef8  ldr x8,[x8, #0x28]
71018bfefc  b 0x71018bff08
71018bff00  ldr x8,[x0]
71018bff04  ldr x8,[x8, #0x20]
71018bff08  blr x8
71018bff0c  ldr x0,[sp, #0x130]
71018bff10  cmp x19,x0
71018bff14  b.eq 0x71018bff28
71018bff18  cbz x0,0x71018bff34
71018bff1c  ldr x8,[x0]
71018bff20  ldr x8,[x8, #0x28]
71018bff24  b 0x71018bff30
71018bff28  ldr x8,[x0]
71018bff2c  ldr x8,[x8, #0x20]
71018bff30  blr x8
71018bff34  ldr x0,[sp, #0x100]
71018bff38  cmp x27,x0
71018bff3c  b.eq 0x71018bff50
71018bff40  cbz x0,0x71018bff5c
71018bff44  ldr x8,[x0]
71018bff48  ldr x8,[x8, #0x28]
71018bff4c  b 0x71018bff58
71018bff50  ldr x8,[x0]
71018bff54  ldr x8,[x8, #0x20]
71018bff58  blr x8
71018bff5c  ldr x0,[sp, #0xd0]
71018bff60  add x8,sp,#0x80
71018bff64  add x8,x8,#0x30
71018bff68  cmp x8,x0
71018bff6c  b.eq 0x71018bff80
71018bff70  cbz x0,0x71018bff8c
71018bff74  ldr x8,[x0]
71018bff78  ldr x8,[x8, #0x28]
71018bff7c  b 0x71018bff88
71018bff80  ldr x8,[x0]
71018bff84  ldr x8,[x8, #0x20]
71018bff88  blr x8
71018bff8c  mov x0,x23
71018bff90  mov w1,wzr
71018bff94  mov w2,wzr
71018bff98  bl 0x7101d2aaf0
71018bff9c  mov w1,#0x1
71018bffa0  mov x0,x23
71018bffa4  mov w2,wzr
71018bffa8  mov w19,#0x1
71018bffac  bl 0x7101d2aaf0
71018bffb0  mov w1,#0x2
71018bffb4  mov x0,x23
71018bffb8  mov w2,wzr
71018bffbc  bl 0x7101d2aaf0
71018bffc0  orr w1,wzr,#0x3
71018bffc4  mov x0,x23
71018bffc8  mov w2,wzr
71018bffcc  bl 0x7101d2aaf0
71018bffd0  mov w1,#0x4
71018bffd4  mov x0,x23
71018bffd8  mov w2,wzr
71018bffdc  bl 0x7101d2aaf0
71018bffe0  mov w1,#0x5
71018bffe4  mov x0,x23
71018bffe8  mov w2,wzr
71018bffec  bl 0x7101d2aaf0
71018bfff0  orr w1,wzr,#0x6
71018bfff4  mov x0,x23
71018bfff8  mov w2,wzr
71018bfffc  bl 0x7101d2aaf0
71018c0000  orr w1,wzr,#0x7
71018c0004  mov x0,x23
71018c0008  mov w2,wzr
71018c000c  bl 0x7101d2aaf0
71018c0010  mov w1,#0x8
71018c0014  mov x0,x23
71018c0018  mov w2,wzr
71018c001c  bl 0x7101d2aaf0
71018c0020  mov w1,#0x9
71018c0024  mov x0,x23
71018c0028  mov w2,wzr
71018c002c  bl 0x7101d2aaf0
71018c0030  ldr x8,[x23, #0x130]
71018c0034  ldr x8,[x8]
71018c0038  ldr x0,[x8, #0x10]
71018c003c  fmov s0,0x3f800000
71018c0040  adrp x1,0x7104270000
71018c0044  add x1,x1,#0x166
71018c0048  bl 0x7103778300
71018c004c  mov w8,#0x101
71018c0050  strh w8,[sp, #0x88]
71018c0054  add x8,sp,#0x80
71018c0058  str w19,[sp, #0x90]
71018c005c  strh w19,[sp, #0x94]
71018c0060  add x1,x8,#0xc0
71018c0064  strb w19,[sp, #0x96]
71018c0068  adrp x8,0x7105186000
71018c006c  add x8,x8,#0xd0
71018c0070  add x19,sp,#0x20
71018c0074  add x0,sp,#0x20
71018c0078  str xzr,[sp, #0x80]
71018c007c  strh wzr,[sp, #0x8e]
71018c0080  stur wzr,[sp, #0x8a]
71018c0084  str xzr,[sp, #0x98]
71018c0088  str wzr,[sp, #0xa0]
71018c008c  str xzr,[sp, #0xd0]
71018c0090  str xzr,[sp, #0x100]
71018c0094  str xzr,[sp, #0x130]
71018c0098  str xzr,[sp, #0x160]
71018c009c  str xzr,[sp, #0x190]
71018c00a0  str wzr,[sp, #0x1a0]
71018c00a4  str x8,[sp, #0x20]
71018c00a8  str x19,[sp, #0x40]
71018c00ac  bl 0x7101989a30
71018c00b0  ldr x0,[sp, #0x40]
71018c00b4  cmp x19,x0
71018c00b8  b.eq 0x71018c00cc
71018c00bc  cbz x0,0x71018c00d8
71018c00c0  ldr x8,[x0]
71018c00c4  ldr x8,[x8, #0x28]
71018c00c8  b 0x71018c00d4
71018c00cc  ldr x8,[x0]
71018c00d0  ldr x8,[x8, #0x20]
71018c00d4  blr x8
71018c00d8  add x8,sp,#0x80
71018c00dc  add x1,x8,#0xf0
71018c00e0  adrp x8,0x7105186000
71018c00e4  add x8,x8,#0x118
71018c00e8  add x19,sp,#0x20
71018c00ec  str x19,[sp, #0x40]
71018c00f0  add x0,sp,#0x20
71018c00f4  str x8,[sp, #0x20]
71018c00f8  bl 0x7101989a30
71018c00fc  ldr x0,[sp, #0x40]
71018c0100  cmp x19,x0
71018c0104  b.eq 0x71018c0118
71018c0108  cbz x0,0x71018c0124
71018c010c  ldr x8,[x0]
71018c0110  ldr x8,[x8, #0x28]
71018c0114  b 0x71018c0120
71018c0118  ldr x8,[x0]
71018c011c  ldr x8,[x8, #0x20]
71018c0120  blr x8
71018c0124  ldr x8,[x23, #0x130]
71018c0128  ldr x8,[x8]
71018c012c  add x22,x23,#0x178
71018c0130  adrp x2,0x7104307000
71018c0134  add x2,x2,#0x72
71018c0138  add x3,sp,#0x80
71018c013c  mov x0,x22
71018c0140  add x1,x8,#0x8
71018c0144  bl 0x7103770b30
71018c0148  adrp x26,0x71042c5000
71018c014c  add x26,x26,#0x15
71018c0150  add x8,sp,#0x20
71018c0154  add x0,sp,#0x20
71018c0158  mov x1,x26
71018c015c  strb wzr,[sp, #0x28]
71018c0160  mov w2,wzr
71018c0164  str xzr,[sp, #0x20]
71018c0168  add x25,x8,#0x8
71018c016c  bl 0x710062dc20
71018c0170  mov x0,x22
71018c0174  mov w1,wzr
71018c0178  mov x2,x25
71018c017c  bl 0x71037717d0
71018c0180  add x0,sp,#0x20
71018c0184  mov w2,#0x1
71018c0188  mov x1,x26
71018c018c  bl 0x710062dc20
71018c0190  mov w1,#0x1
71018c0194  mov x0,x22
71018c0198  mov x2,x25
71018c019c  bl 0x71037717d0
71018c01a0  add x0,sp,#0x20
71018c01a4  mov w2,#0x2
71018c01a8  mov x1,x26
71018c01ac  bl 0x710062dc20
71018c01b0  mov w1,#0x2
71018c01b4  mov x0,x22
71018c01b8  mov x2,x25
71018c01bc  bl 0x71037717d0
71018c01c0  add x0,sp,#0x20
71018c01c4  orr w2,wzr,#0x3
71018c01c8  mov x1,x26
71018c01cc  bl 0x710062dc20
71018c01d0  orr w1,wzr,#0x3
71018c01d4  mov x0,x22
71018c01d8  mov x2,x25
71018c01dc  bl 0x71037717d0
71018c01e0  add x0,sp,#0x20
71018c01e4  mov w2,#0x4
71018c01e8  mov x1,x26
71018c01ec  bl 0x710062dc20
71018c01f0  mov w1,#0x4
71018c01f4  mov x0,x22
71018c01f8  mov x2,x25
71018c01fc  bl 0x71037717d0
71018c0200  mov w19,#0x5
71018c0204  add x0,sp,#0x20
71018c0208  mov x1,x26
71018c020c  mov w2,w19
71018c0210  bl 0x710062dc20
71018c0214  mov x0,x22
71018c0218  mov w1,w19
71018c021c  mov x2,x25
71018c0220  bl 0x71037717d0
71018c0224  add x0,sp,#0x20
71018c0228  orr w2,wzr,#0x6
71018c022c  mov x1,x26
71018c0230  bl 0x710062dc20
71018c0234  orr w1,wzr,#0x6
71018c0238  mov x0,x22
71018c023c  mov x2,x25
71018c0240  bl 0x71037717d0
71018c0244  add x0,sp,#0x20
71018c0248  orr w2,wzr,#0x7
71018c024c  mov x1,x26
71018c0250  bl 0x710062dc20
71018c0254  orr w1,wzr,#0x7
71018c0258  mov x0,x22
71018c025c  mov x2,x25
71018c0260  bl 0x71037717d0
71018c0264  add x0,sp,#0x20
71018c0268  mov w2,#0x8
71018c026c  mov x1,x26
71018c0270  bl 0x710062dc20
71018c0274  mov w1,#0x8
71018c0278  mov x0,x22
71018c027c  mov x2,x25
71018c0280  bl 0x71037717d0
71018c0284  mov w27,#0x9
71018c0288  add x0,sp,#0x20
71018c028c  mov x1,x26
71018c0290  mov w2,w27
71018c0294  bl 0x710062dc20
71018c0298  mov x0,x22
71018c029c  mov w1,w27
71018c02a0  mov x2,x25
71018c02a4  bl 0x71037717d0
71018c02a8  ldr x0,[x23, #0x178]
71018c02ac  ldr x8,[x0]
71018c02b0  ldr x8,[x8, #0x60]
71018c02b4  mov w1,wzr
71018c02b8  blr x8
71018c02bc  ldr x8,[x23, #0x130]
71018c02c0  mov w25,#0xffffffff
71018c02c4  str x25,[x23, #0x180]
71018c02c8  ldr x8,[x8]
71018c02cc  add x0,x8,#0x8
71018c02d0  adrp x1,0x7104401000
71018c02d4  add x1,x1,#0x7f0
71018c02d8  add x8,sp,#0x10
71018c02dc  add x19,sp,#0x10
71018c02e0  bl 0x7103776640
71018c02e4  adrp x1,0x710433a000
71018c02e8  add x1,x1,#0x393
71018c02ec  add x8,sp,#0x70
71018c02f0  add x0,sp,#0x10
71018c02f4  bl 0x7103776640
71018c02f8  ldr x22,[sp, #0x18]
71018c02fc  adrp x8,0x710523d000
71018c0300  add x8,x8,#0x988
71018c0304  stp x8,xzr,[sp, #0x10]
71018c0308  cbz x22,0x71018c032c
71018c030c  ldr x0,[x22, #0x18]
71018c0310  adrp x8,0x710523d000
71018c0314  add x8,x8,#0x9a8
71018c0318  stp x8,xzr,[x22, #0x10]
71018c031c  cbz x0,0x71018c0324
71018c0320  bl 0x710392eb40
71018c0324  mov x0,x22
71018c0328  bl 0x710392eb40
71018c032c  adrp x1,0x71042b2000
71018c0330  add x1,x1,#0x92e
71018c0334  add x8,sp,#0x10
71018c0338  add x0,sp,#0x70
71018c033c  bl 0x7103776910
71018c0340  ldr x0,[x23, #0x188]
71018c0344  cmp x0,x19
71018c0348  b.eq 0x71018c0388
71018c034c  ldr x8,[sp, #0x18]
71018c0350  ldr x8,[x8]
71018c0354  ldr x9,[x0, #0x8]
71018c0358  str x8,[x9]
71018c035c  ldr x8,[sp, #0x18]
71018c0360  ldr x8,[x8, #0x8]
71018c0364  ldr x9,[x0, #0x8]
71018c0368  str x8,[x9, #0x8]
71018c036c  ldr x8,[sp, #0x18]
71018c0370  ldr x9,[x8, #0x10]
71018c0374  ldr x10,[x0, #0x8]
71018c0378  str x9,[x10, #0x10]
71018c037c  ldr x8,[x8, #0x18]
71018c0380  ldr x9,[x0, #0x8]
71018c0384  str x8,[x9, #0x18]
71018c0388  mov x8,xzr
71018c038c  b 0x71018c0398
71018c0390  add x8,x8,#0x2
71018c0394  strb w10,[x9, #0x19]
71018c0398  add x10,x24,x8
71018c039c  ldrb w11,[x10]
71018c03a0  cbz w11,0x71018c03b8
71018c03a4  add x9,x0,x8
71018c03a8  strb w11,[x9, #0x18]
71018c03ac  ldrb w10,[x10, #0x1]
71018c03b0  cbnz w10,0x71018c0390
71018c03b4  add x8,x8,#0x1
71018c03b8  add x1,x0,#0x18
71018c03bc  strb wzr,[x1, w8, UXTW ]
71018c03c0  ldrb w9,[x0, #0x18]
71018c03c4  str w8,[x0, #0x14]
71018c03c8  cbz w9,0x71018c03e8
71018c03cc  add x8,x0,#0x19
71018c03d0  mov w10,#0x89
71018c03d4  mul w11,w28,w10
71018c03d8  and w9,w9,#0xff
71018c03dc  eor w28,w11,w9
71018c03e0  ldrb w9,[x8], #0x1
71018c03e4  cbnz w9,0x71018c03d4
71018c03e8  ldr w3,[x0, #0x94]
71018c03ec  mov w2,#0x1
71018c03f0  str w28,[x0, #0x10]
71018c03f4  bl 0x710377a280
71018c03f8  ldr x0,[x23, #0x188]
71018c03fc  adrp x2,0x7104464000
71018c0400  add x2,x2,#0x38d
71018c0404  adrp x3,0x7104348000
71018c0408  add x3,x3,#0xacf
71018c040c  add x1,sp,#0x70
71018c0410  bl 0x7103399a70
71018c0414  ldr x8,[x23, #0x188]
71018c0418  mov x9,#0xa2b5
71018c041c  movk x9,#0x410f, LSL #16
71018c0420  movk x9,#0x1a, LSL #32
71018c0424  str x9,[x8, #0x68]
71018c0428  mov x9,#0xa9ed
71018c042c  movk x9,#0x5906, LSL #16
71018c0430  movk x9,#0x1a, LSL #32
71018c0434  str x9,[x8, #0x70]
71018c0438  ldr x8,[x23, #0x130]
71018c043c  ldr x0,[x8]
71018c0440  mov w2,#0x1000
71018c0444  mov w1,wzr
71018c0448  bl 0x7103775dc0
71018c044c  ldr x0,[sp, #0x18]
71018c0450  adrp x8,0x710523d000
71018c0454  add x8,x8,#0x9a8
71018c0458  stp x8,xzr,[sp, #0x10]
71018c045c  cbz x0,0x71018c0464
71018c0460  bl 0x710392eb40
71018c0464  ldr x22,[sp, #0x78]
71018c0468  ldr x28,[sp, #0x8]
71018c046c  adrp x8,0x710523d000
71018c0470  add x8,x8,#0x988
71018c0474  stp x8,xzr,[sp, #0x70]
71018c0478  cbz x22,0x71018c049c
71018c047c  ldr x0,[x22, #0x18]
71018c0480  adrp x8,0x710523d000
71018c0484  add x8,x8,#0x9a8
71018c0488  stp x8,xzr,[x22, #0x10]
71018c048c  cbz x0,0x71018c0494
71018c0490  bl 0x710392eb40
71018c0494  mov x0,x22
71018c0498  bl 0x710392eb40
71018c049c  ldr x0,[sp, #0x190]
71018c04a0  add x8,sp,#0x80
71018c04a4  add x8,x8,#0xf0
71018c04a8  cmp x8,x0
71018c04ac  b.eq 0x71018c04c0
71018c04b0  cbz x0,0x71018c04cc
71018c04b4  ldr x8,[x0]
71018c04b8  ldr x8,[x8, #0x28]
71018c04bc  b 0x71018c04c8
71018c04c0  ldr x8,[x0]
71018c04c4  ldr x8,[x8, #0x20]
71018c04c8  blr x8
71018c04cc  ldr x0,[sp, #0x160]
71018c04d0  add x8,sp,#0x80
71018c04d4  add x8,x8,#0xc0
71018c04d8  cmp x8,x0
71018c04dc  b.eq 0x71018c04f0
71018c04e0  cbz x0,0x71018c04fc
71018c04e4  ldr x8,[x0]
71018c04e8  ldr x8,[x8, #0x28]
71018c04ec  b 0x71018c04f8
71018c04f0  ldr x8,[x0]
71018c04f4  ldr x8,[x8, #0x20]
71018c04f8  blr x8
71018c04fc  ldr x0,[sp, #0x130]
71018c0500  add x8,sp,#0x80
71018c0504  add x8,x8,#0x90
71018c0508  cmp x8,x0
71018c050c  b.eq 0x71018c0520
71018c0510  cbz x0,0x71018c052c
71018c0514  ldr x8,[x0]
71018c0518  ldr x8,[x8, #0x28]
71018c051c  b 0x71018c0528
71018c0520  ldr x8,[x0]
71018c0524  ldr x8,[x8, #0x20]
71018c0528  blr x8
71018c052c  ldr x0,[sp, #0x100]
71018c0530  add x8,sp,#0x80
71018c0534  add x8,x8,#0x60
71018c0538  cmp x8,x0
71018c053c  b.eq 0x71018c0550
71018c0540  cbz x0,0x71018c055c
71018c0544  ldr x8,[x0]
71018c0548  ldr x8,[x8, #0x28]
71018c054c  b 0x71018c0558
71018c0550  ldr x8,[x0]
71018c0554  ldr x8,[x8, #0x20]
71018c0558  blr x8
71018c055c  ldr x0,[sp, #0xd0]
71018c0560  add x8,sp,#0x80
71018c0564  add x8,x8,#0x30
71018c0568  cmp x8,x0
71018c056c  b.eq 0x71018c0580
71018c0570  cbz x0,0x71018c058c
71018c0574  ldr x8,[x0]
71018c0578  ldr x8,[x8, #0x28]
71018c057c  b 0x71018c0588
71018c0580  ldr x8,[x0]
71018c0584  ldr x8,[x8, #0x20]
71018c0588  blr x8
71018c058c  adrp x8,0x7105333000
71018c0590  add x8,x8,#0x600
71018c0594  str x8,[x21, #0x10]
71018c0598  ldp w9,w8,[x8, #0x60]
71018c059c  stp w9,w8,[x21, #0x68]
71018c05a0  adrp x8,0x7105333000
71018c05a4  add x8,x8,#0x650
71018c05a8  mov w9,#0x1
71018c05ac  ldaxrb w10,[x8]
71018c05b0  stxrb w11,w9,[x8]
71018c05b4  and w10,w10,#0x1
71018c05b8  cmp w11,#0x0
71018c05bc  ccmp w10,#0x0,#0x0,eq
71018c05c0  b.ne 0x71018c05ac
71018c05c4  adrp x8,0x7105333000
71018c05c8  add x8,x8,#0x648
71018c05cc  ldr x9,[x8]
71018c05d0  str x9,[x21, #0x48]
71018c05d4  mov x0,x21
71018c05d8  str x21,[x8], #0x8
71018c05dc  stlrb wzr,[x8]
71018c05e0  bl 0x71032caea0
71018c05e4  ldr x0,[x28, #0x100]
71018c05e8  str x21,[x28, #0x100]
71018c05ec  cbz x0,0x71018c05f8
71018c05f0  bl 0x71032cad20
71018c05f4  ldr x21,[x28, #0x100]
71018c05f8  adrp x26,0x7105314000
71018c05fc  add x26,x26,#0x4d8
71018c0600  ldr x21,[x21, #0x80]
71018c0604  ldarb w8,[x26]
71018c0608  tbz w8,#0x0,0x71018c13c4
71018c060c  adrp x1,0x7105308000
71018c0610  add x1,x1,#0x570
71018c0614  add x0,sp,#0x80
71018c0618  orr w2,wzr,#0x1e0
71018c061c  mov x27,#-0x3f00000000000000
71018c0620  bl 0x71039c00e0
71018c0624  ldr x8,[sp, #0x80]
71018c0628  and x9,x8,#-0x100000000000000
71018c062c  cmp x9,x27
71018c0630  b.ne 0x71018c063c
71018c0634  and x8,x8,#0xffffffffff
71018c0638  cbnz x8,0x71018c0648
71018c063c  add x0,sp,#0x80
71018c0640  mov w1,#0x1
71018c0644  bl 0x7103384c30
71018c0648  add x22,x21,#0x190
71018c064c  add x1,sp,#0x80
71018c0650  orr w2,wzr,#0x1e0
71018c0654  mov x0,x22
71018c0658  bl 0x71039c00e0
71018c065c  ldarb w8,[x26]
71018c0660  tbz w8,#0x0,0x71018c1404
71018c0664  adrp x19,0x7105308000
71018c0668  ldr x24,[x19, #0x750]
71018c066c  cbz x24,0x71018c09c4
71018c0670  adrp x8,0x710532f000
71018c0674  ldr x8,[x8, #0x730]
71018c0678  ldr x8,[x8, #0x8]
71018c067c  ldr x23,[x8, #0x368]
71018c0680  mov x1,#0x98a0
71018c0684  movk x1,#0x8e9, LSL #16
71018c0688  movk x1,#0xe, LSL #32
71018c068c  mov x0,x23
71018c0690  bl 0x710329eed0
71018c0694  mov x1,x0
71018c0698  mov x0,x23
71018c069c  bl 0x710329c430
71018c06a0  mov w23,w0
71018c06a4  bl 0x71039c6170
71018c06a8  sub x8,x0,x24
71018c06ac  mov w9,#0xca00
71018c06b0  movk w9,#0x3b9a, LSL #16
71018c06b4  mul x8,x8,x9
71018c06b8  and x9,x8,#0xfffffe00
71018c06bc  asr x10,x8,#0x20
71018c06c0  mov w11,#0x94b3
71018c06c4  movk w11,#0x26d6, LSL #16
71018c06c8  mul x12,x10,x11
71018c06cc  mul x11,x9,x11
71018c06d0  add x11,x12,x11, LSR #0x20
71018c06d4  mov w12,#0xbe8
71018c06d8  movk w12,#0x112e, LSL #16
71018c06dc  mul x10,x10,x12
71018c06e0  mul x9,x9,x12
71018c06e4  add x9,x9,w11, UXTW 
71018c06e8  add x10,x10,x11, ASR #0x20
71018c06ec  add x9,x10,x9, LSR #0x20
71018c06f0  asr x9,x9,#0x1a
71018c06f4  add x8,x9,x8, LSR #0x3f
71018c06f8  cmp x8,w23, UXTW 
71018c06fc  b.lt 0x71018c09d8
71018c0700  add x23,x21,#0x370
71018c0704  orr w2,wzr,#0x1e0
71018c0708  mov x0,x23
71018c070c  mov x1,x22
71018c0710  bl 0x71039c00e0
71018c0714  add x0,sp,#0x80
71018c0718  mov w1,#0x1
71018c071c  bl 0x7103384c30
71018c0720  add x1,sp,#0x80
71018c0724  orr w2,wzr,#0x1e0
71018c0728  mov x0,x22
71018c072c  bl 0x71039c00e0
71018c0730  mov x25,#0xff0000000000
71018c0734  movk x25,#0xc1ff, LSL #48
71018c0738  orr w24,wzr,#0xff
71018c073c  ldr x1,[x21, #0x128]
71018c0740  str x25,[sp, #0x80]
71018c0744  strb w24,[sp, #0x88]
71018c0748  stp xzr,xzr,[sp, #0x90]
71018c074c  ldr x0,[x21, #0x560]
71018c0750  add x2,sp,#0x80
71018c0754  bl 0x7103385da0
71018c0758  bl 0x7103385190
71018c075c  mov x0,x21
71018c0760  mov x1,x23
71018c0764  mov x2,x22
71018c0768  bl 0x7101d2ad80
71018c076c  mov x8,xzr
71018c0770  add x9,x21,#0x379
71018c0774  add x10,x21,#0x3a9
71018c0778  add x11,x21,#0x3d9
71018c077c  add x12,x21,#0x409
71018c0780  add x13,x21,#0x439
71018c0784  add x14,x21,#0x469
71018c0788  add x15,x21,#0x499
71018c078c  add x16,x21,#0x4c9
71018c0790  add x17,x21,#0x4f9
71018c0794  add x18,x21,#0x529
71018c0798  add x0,x21,#0x1a0
71018c079c  ldr x1,[x0, x8, LSL #0x0]
71018c07a0  ldr x2,[x21, #0x380]
71018c07a4  eor x2,x2,x1
71018c07a8  tst x2,#0xffffffffff
71018c07ac  b.ne 0x71018c07c4
71018c07b0  str x25,[x21, #0x370]
71018c07b4  strb w24,[x21, #0x378]
71018c07b8  stp xzr,xzr,[x9, #0x10]
71018c07bc  stp xzr,xzr,[x9]
71018c07c0  ldr x1,[x0, x8, LSL #0x0]
71018c07c4  ldr x2,[x21, #0x3b0]
71018c07c8  eor x2,x2,x1
71018c07cc  tst x2,#0xffffffffff
71018c07d0  b.ne 0x71018c07e8
71018c07d4  str x25,[x21, #0x3a0]
71018c07d8  strb w24,[x21, #0x3a8]
71018c07dc  stp xzr,xzr,[x10, #0x10]
71018c07e0  stp xzr,xzr,[x10]
71018c07e4  ldr x1,[x0, x8, LSL #0x0]
71018c07e8  ldr x2,[x21, #0x3e0]
71018c07ec  eor x2,x2,x1
71018c07f0  tst x2,#0xffffffffff
71018c07f4  b.ne 0x71018c080c
71018c07f8  str x25,[x21, #0x3d0]
71018c07fc  strb w24,[x21, #0x3d8]
71018c0800  stp xzr,xzr,[x11, #0x10]
71018c0804  stp xzr,xzr,[x11]
71018c0808  ldr x1,[x0, x8, LSL #0x0]
71018c080c  ldr x2,[x21, #0x410]
71018c0810  eor x2,x2,x1
71018c0814  tst x2,#0xffffffffff
71018c0818  b.ne 0x71018c0830
71018c081c  str x25,[x21, #0x400]
71018c0820  strb w24,[x21, #0x408]
71018c0824  stp xzr,xzr,[x12, #0x10]
71018c0828  stp xzr,xzr,[x12]
71018c082c  ldr x1,[x0, x8, LSL #0x0]
71018c0830  ldr x2,[x21, #0x440]
71018c0834  eor x2,x2,x1
71018c0838  tst x2,#0xffffffffff
71018c083c  b.ne 0x71018c0854
71018c0840  str x25,[x21, #0x430]
71018c0844  strb w24,[x21, #0x438]
71018c0848  stp xzr,xzr,[x13, #0x10]
71018c084c  stp xzr,xzr,[x13]
71018c0850  ldr x1,[x0, x8, LSL #0x0]
71018c0854  ldr x2,[x21, #0x470]
71018c0858  eor x2,x2,x1
71018c085c  tst x2,#0xffffffffff
71018c0860  b.ne 0x71018c0878
71018c0864  str x25,[x21, #0x460]
71018c0868  strb w24,[x21, #0x468]
71018c086c  stp xzr,xzr,[x14, #0x10]
71018c0870  stp xzr,xzr,[x14]
71018c0874  ldr x1,[x0, x8, LSL #0x0]
71018c0878  ldr x2,[x21, #0x4a0]
71018c087c  eor x2,x2,x1
71018c0880  tst x2,#0xffffffffff
71018c0884  b.ne 0x71018c089c
71018c0888  str x25,[x21, #0x490]
71018c088c  strb w24,[x21, #0x498]
71018c0890  stp xzr,xzr,[x15, #0x10]
71018c0894  stp xzr,xzr,[x15]
71018c0898  ldr x1,[x0, x8, LSL #0x0]
71018c089c  ldr x2,[x21, #0x4d0]
71018c08a0  eor x2,x2,x1
71018c08a4  tst x2,#0xffffffffff
71018c08a8  b.ne 0x71018c08c0
71018c08ac  str x25,[x21, #0x4c0]
71018c08b0  strb w24,[x21, #0x4c8]
71018c08b4  stp xzr,xzr,[x16, #0x10]
71018c08b8  stp xzr,xzr,[x16]
71018c08bc  ldr x1,[x0, x8, LSL #0x0]
71018c08c0  ldr x2,[x21, #0x500]
71018c08c4  eor x2,x2,x1
71018c08c8  tst x2,#0xffffffffff
71018c08cc  b.ne 0x71018c08e4
71018c08d0  str x25,[x21, #0x4f0]
71018c08d4  strb w24,[x21, #0x4f8]
71018c08d8  stp xzr,xzr,[x17, #0x10]
71018c08dc  stp xzr,xzr,[x17]
71018c08e0  ldr x1,[x0, x8, LSL #0x0]
71018c08e4  ldr x2,[x21, #0x530]
71018c08e8  eor x1,x2,x1
71018c08ec  tst x1,#0xffffffffff
71018c08f0  b.ne 0x71018c0904
71018c08f4  str x25,[x21, #0x520]
71018c08f8  strb w24,[x21, #0x528]
71018c08fc  stp xzr,xzr,[x18, #0x10]
71018c0900  stp xzr,xzr,[x18]
71018c0904  add x8,x8,#0x30
71018c0908  cmp x8,#0x1e0
71018c090c  b.ne 0x71018c079c
71018c0910  mov w8,#0x1
71018c0914  strb w8,[x21, #0x570]
71018c0918  ldr w8,[x21, #0x114]
71018c091c  cmp w8,#0x11
71018c0920  mov w25,#0xffffffff
71018c0924  b.gt 0x71018c096c
71018c0928  add w8,w8,#0x1
71018c092c  cmp w8,#0x13
71018c0930  str w8,[x21, #0x114]
71018c0934  b.cs 0x71018c14c8
71018c0938  add x8,x21,w8, SXTW  #0x2
71018c093c  mov w9,#0x5
71018c0940  str w9,[x8, #0xc8]
71018c0944  ldr w8,[x21, #0x114]
71018c0948  cmp w8,#0x11
71018c094c  b.gt 0x71018c096c
71018c0950  add w8,w8,#0x1
71018c0954  cmp w8,#0x13
71018c0958  str w8,[x21, #0x114]
71018c095c  b.cs 0x71018c14c8
71018c0960  add x8,x21,w8, SXTW  #0x2
71018c0964  orr w9,wzr,#0x3
71018c0968  str w9,[x8, #0xc8]
71018c096c  bl 0x71039c6170
71018c0970  ldarb w8,[x26]
71018c0974  mov x23,x0
71018c0978  tbnz w8,#0x0,0x71018c09d4
71018c097c  adrp x0,0x7105314000
71018c0980  add x0,x0,#0x4d8
71018c0984  bl 0x71039c06b0
71018c0988  cbz w0,0x71018c09b8
71018c098c  bl 0x7101764000
71018c0990  adrp x0,0x7101763000
71018c0994  add x0,x0,#0xc40
71018c0998  adrp x1,0x71052c5000
71018c099c  add x1,x1,#0x180
71018c09a0  adrp x2,0x7104f17000
71018c09a4  add x2,x2,#0x0
71018c09a8  bl 0x71000001c0
71018c09ac  adrp x0,0x7105314000
71018c09b0  add x0,x0,#0x4d8
71018c09b4  bl 0x71039c06c0
71018c09b8  ldr x28,[sp, #0x8]
71018c09bc  mov w25,#0xffffffff
71018c09c0  b 0x71018c09d4
71018c09c4  bl 0x71039c6170
71018c09c8  ldarb w8,[x26]
71018c09cc  mov x23,x0
71018c09d0  tbz w8,#0x0,0x71018c1484
71018c09d4  str x23,[x19, #0x750]
71018c09d8  ldr x8,[x22]
71018c09dc  and x9,x8,#-0x100000000000000
71018c09e0  mov w24,wzr
71018c09e4  cmp x9,x27
71018c09e8  b.ne 0x71018c0ac0
71018c09ec  and x8,x8,#0xffffffffff
71018c09f0  cbz x8,0x71018c0ac0
71018c09f4  ldrb w8,[x21, #0x198]
71018c09f8  cmp w8,#0x4
71018c09fc  b.ne 0x71018c0abc
71018c0a00  adrp x8,0x710532f000
71018c0a04  ldr x8,[x8, #0x730]
71018c0a08  ldr x8,[x8, #0x8]
71018c0a0c  ldr x23,[x8, #0x1d8]
71018c0a10  ldr x1,[x21, #0x1a0]
71018c0a14  mov x0,x23
71018c0a18  bl 0x71032a7800
71018c0a1c  ldp x8,x9,[x23, #0x20]
71018c0a20  sub x9,x9,x8
71018c0a24  orr x10,xzr,#-0x3333333333333334
71018c0a28  movk x10,#0xcccd
71018c0a2c  asr x9,x9,#0x6
71018c0a30  mul x9,x9,x10
71018c0a34  cmp w0,w9
71018c0a38  b.cs 0x71018c0a64
71018c0a3c  mov w10,#0x140
71018c0a40  umull x10,w0,w10
71018c0a44  ldrsh x10,[x8, x10, LSL #0x0]
71018c0a48  cmn x10,#0x1
71018c0a4c  b.eq 0x71018c0a68
71018c0a50  add x10,x23,x10, LSL #0x1
71018c0a54  ldrh w10,[x10, #0x60]
71018c0a58  b 0x71018c0a68
71018c0a5c  add x23,x8,#0x28
71018c0a60  b 0x71018bf8e4
71018c0a64  mov w10,#0xffffffff
71018c0a68  mov w11,#0x140
71018c0a6c  madd x8,x10,x11,x8
71018c0a70  adrp x11,0x7105182000
71018c0a74  add x11,x11,#0xb08
71018c0a78  cmp x9,x10
71018c0a7c  csel x8,x8,x11,hi
71018c0a80  ldrb w8,[x8, #0x5e]
71018c0a84  cmp w8,#0x3
71018c0a88  b.ne 0x71018c0abc
71018c0a8c  ldr x8,[x21, #0x1a0]
71018c0a90  tst x8,#0xffffffffff
71018c0a94  b.eq 0x71018c0ab0
71018c0a98  mov x0,x22
71018c0a9c  bl 0x7101782120
71018c0aa0  cbz w0,0x71018c0abc
71018c0aa4  mov w24,#0x1
71018c0aa8  strb w24,[x21, #0x1b8]
71018c0aac  b 0x71018c0ac0
71018c0ab0  ldr w8,[x21, #0x1a8]
71018c0ab4  cmp w8,#0x0
71018c0ab8  b.le 0x71018c0a98
71018c0abc  mov w24,wzr
71018c0ac0  ldr x8,[x21, #0x1c0]
71018c0ac4  and x9,x8,#-0x100000000000000
71018c0ac8  cmp x9,x27
71018c0acc  b.ne 0x71018c0b98
71018c0ad0  and x8,x8,#0xffffffffff
71018c0ad4  cbz x8,0x71018c0b98
71018c0ad8  ldrb w8,[x21, #0x1c8]
71018c0adc  cmp w8,#0x4
71018c0ae0  b.ne 0x71018c0b98
71018c0ae4  adrp x8,0x710532f000
71018c0ae8  ldr x8,[x8, #0x730]
71018c0aec  ldr x8,[x8, #0x8]
71018c0af0  ldr x23,[x8, #0x1d8]
71018c0af4  ldr x1,[x21, #0x1d0]
71018c0af8  mov x0,x23
71018c0afc  bl 0x71032a7800
71018c0b00  ldp x8,x9,[x23, #0x20]
71018c0b04  sub x9,x9,x8
71018c0b08  orr x10,xzr,#-0x3333333333333334
71018c0b0c  movk x10,#0xcccd
71018c0b10  asr x9,x9,#0x6
71018c0b14  mul x9,x9,x10
71018c0b18  cmp w0,w9
71018c0b1c  b.cs 0x71018c0b40
71018c0b20  mov w10,#0x140
71018c0b24  umull x10,w0,w10
71018c0b28  ldrsh x10,[x8, x10, LSL #0x0]
71018c0b2c  cmn x10,#0x1
71018c0b30  b.eq 0x71018c0b44
71018c0b34  add x10,x23,x10, LSL #0x1
71018c0b38  ldrh w10,[x10, #0x60]
71018c0b3c  b 0x71018c0b44
71018c0b40  mov w10,#0xffffffff
71018c0b44  mov w11,#0x140
71018c0b48  madd x8,x10,x11,x8
71018c0b4c  adrp x11,0x7105182000
71018c0b50  add x11,x11,#0xb08
71018c0b54  cmp x9,x10
71018c0b58  csel x8,x8,x11,hi
71018c0b5c  ldrb w8,[x8, #0x5e]
71018c0b60  cmp w8,#0x3
71018c0b64  b.ne 0x71018c0b98
71018c0b68  ldr x8,[x21, #0x1d0]
71018c0b6c  tst x8,#0xffffffffff
71018c0b70  b.eq 0x71018c0b8c
71018c0b74  add x0,x21,#0x1c0
71018c0b78  bl 0x7101782120
71018c0b7c  cbz w0,0x71018c0b98
71018c0b80  mov w24,#0x1
71018c0b84  strb w24,[x21, #0x1e8]
71018c0b88  b 0x71018c0b98
71018c0b8c  ldr w8,[x21, #0x1d8]
71018c0b90  cmp w8,#0x0
71018c0b94  b.le 0x71018c0b74
71018c0b98  ldr x8,[x21, #0x1f0]
71018c0b9c  and x9,x8,#-0x100000000000000
71018c0ba0  cmp x9,x27
71018c0ba4  b.ne 0x71018c0c70
71018c0ba8  and x8,x8,#0xffffffffff
71018c0bac  cbz x8,0x71018c0c70
71018c0bb0  ldrb w8,[x21, #0x1f8]
71018c0bb4  cmp w8,#0x4
71018c0bb8  b.ne 0x71018c0c70
71018c0bbc  adrp x8,0x710532f000
71018c0bc0  ldr x8,[x8, #0x730]
71018c0bc4  ldr x8,[x8, #0x8]
71018c0bc8  ldr x23,[x8, #0x1d8]
71018c0bcc  ldr x1,[x21, #0x200]
71018c0bd0  mov x0,x23
71018c0bd4  bl 0x71032a7800
71018c0bd8  ldp x8,x9,[x23, #0x20]
71018c0bdc  sub x9,x9,x8
71018c0be0  orr x10,xzr,#-0x3333333333333334
71018c0be4  movk x10,#0xcccd
71018c0be8  asr x9,x9,#0x6
71018c0bec  mul x9,x9,x10
71018c0bf0  cmp w0,w9
71018c0bf4  b.cs 0x71018c0c18
71018c0bf8  mov w10,#0x140
71018c0bfc  umull x10,w0,w10
71018c0c00  ldrsh x10,[x8, x10, LSL #0x0]
71018c0c04  cmn x10,#0x1
71018c0c08  b.eq 0x71018c0c1c
71018c0c0c  add x10,x23,x10, LSL #0x1
71018c0c10  ldrh w10,[x10, #0x60]
71018c0c14  b 0x71018c0c1c
71018c0c18  mov w10,#0xffffffff
71018c0c1c  mov w11,#0x140
71018c0c20  madd x8,x10,x11,x8
71018c0c24  adrp x11,0x7105182000
71018c0c28  add x11,x11,#0xb08
71018c0c2c  cmp x9,x10
71018c0c30  csel x8,x8,x11,hi
71018c0c34  ldrb w8,[x8, #0x5e]
71018c0c38  cmp w8,#0x3
71018c0c3c  b.ne 0x71018c0c70
71018c0c40  ldr x8,[x21, #0x200]
71018c0c44  tst x8,#0xffffffffff
71018c0c48  b.eq 0x71018c0c64
71018c0c4c  add x0,x21,#0x1f0
71018c0c50  bl 0x7101782120
71018c0c54  cbz w0,0x71018c0c70
71018c0c58  mov w24,#0x1
71018c0c5c  strb w24,[x21, #0x218]
71018c0c60  b 0x71018c0c70
71018c0c64  ldr w8,[x21, #0x208]
71018c0c68  cmp w8,#0x0
71018c0c6c  b.le 0x71018c0c4c
71018c0c70  ldr x8,[x21, #0x220]
71018c0c74  and x9,x8,#-0x100000000000000
71018c0c78  cmp x9,x27
71018c0c7c  b.ne 0x71018c0d48
71018c0c80  and x8,x8,#0xffffffffff
71018c0c84  cbz x8,0x71018c0d48
71018c0c88  ldrb w8,[x21, #0x228]
71018c0c8c  cmp w8,#0x4
71018c0c90  b.ne 0x71018c0d48
71018c0c94  adrp x8,0x710532f000
71018c0c98  ldr x8,[x8, #0x730]
71018c0c9c  ldr x8,[x8, #0x8]
71018c0ca0  ldr x23,[x8, #0x1d8]
71018c0ca4  ldr x1,[x21, #0x230]
71018c0ca8  mov x0,x23
71018c0cac  bl 0x71032a7800
71018c0cb0  ldp x8,x9,[x23, #0x20]
71018c0cb4  sub x9,x9,x8
71018c0cb8  orr x10,xzr,#-0x3333333333333334
71018c0cbc  movk x10,#0xcccd
71018c0cc0  asr x9,x9,#0x6
71018c0cc4  mul x9,x9,x10
71018c0cc8  cmp w0,w9
71018c0ccc  b.cs 0x71018c0cf0
71018c0cd0  mov w10,#0x140
71018c0cd4  umull x10,w0,w10
71018c0cd8  ldrsh x10,[x8, x10, LSL #0x0]
71018c0cdc  cmn x10,#0x1
71018c0ce0  b.eq 0x71018c0cf4
71018c0ce4  add x10,x23,x10, LSL #0x1
71018c0ce8  ldrh w10,[x10, #0x60]
71018c0cec  b 0x71018c0cf4
71018c0cf0  mov w10,#0xffffffff
71018c0cf4  mov w11,#0x140
71018c0cf8  madd x8,x10,x11,x8
71018c0cfc  adrp x11,0x7105182000
71018c0d00  add x11,x11,#0xb08
71018c0d04  cmp x9,x10
71018c0d08  csel x8,x8,x11,hi
71018c0d0c  ldrb w8,[x8, #0x5e]
71018c0d10  cmp w8,#0x3
71018c0d14  b.ne 0x71018c0d48
71018c0d18  ldr x8,[x21, #0x230]
71018c0d1c  tst x8,#0xffffffffff
71018c0d20  b.eq 0x71018c0d3c
71018c0d24  add x0,x21,#0x220
71018c0d28  bl 0x7101782120
71018c0d2c  cbz w0,0x71018c0d48
71018c0d30  mov w24,#0x1
71018c0d34  strb w24,[x21, #0x248]
71018c0d38  b 0x71018c0d48
71018c0d3c  ldr w8,[x21, #0x238]
71018c0d40  cmp w8,#0x0
71018c0d44  b.le 0x71018c0d24
71018c0d48  ldr x8,[x21, #0x250]
71018c0d4c  and x9,x8,#-0x100000000000000
71018c0d50  cmp x9,x27
71018c0d54  b.ne 0x71018c0e20
71018c0d58  and x8,x8,#0xffffffffff
71018c0d5c  cbz x8,0x71018c0e20
71018c0d60  ldrb w8,[x21, #0x258]
71018c0d64  cmp w8,#0x4
71018c0d68  b.ne 0x71018c0e20
71018c0d6c  adrp x8,0x710532f000
71018c0d70  ldr x8,[x8, #0x730]
71018c0d74  ldr x8,[x8, #0x8]
71018c0d78  ldr x23,[x8, #0x1d8]
71018c0d7c  ldr x1,[x21, #0x260]
71018c0d80  mov x0,x23
71018c0d84  bl 0x71032a7800
71018c0d88  ldp x8,x9,[x23, #0x20]
71018c0d8c  sub x9,x9,x8
71018c0d90  orr x10,xzr,#-0x3333333333333334
71018c0d94  movk x10,#0xcccd
71018c0d98  asr x9,x9,#0x6
71018c0d9c  mul x9,x9,x10
71018c0da0  cmp w0,w9
71018c0da4  b.cs 0x71018c0dc8
71018c0da8  mov w10,#0x140
71018c0dac  umull x10,w0,w10
71018c0db0  ldrsh x10,[x8, x10, LSL #0x0]
71018c0db4  cmn x10,#0x1
71018c0db8  b.eq 0x71018c0dcc
71018c0dbc  add x10,x23,x10, LSL #0x1
71018c0dc0  ldrh w10,[x10, #0x60]
71018c0dc4  b 0x71018c0dcc
71018c0dc8  mov w10,#0xffffffff
71018c0dcc  mov w11,#0x140
71018c0dd0  madd x8,x10,x11,x8
71018c0dd4  adrp x11,0x7105182000
71018c0dd8  add x11,x11,#0xb08
71018c0ddc  cmp x9,x10
71018c0de0  csel x8,x8,x11,hi
71018c0de4  ldrb w8,[x8, #0x5e]
71018c0de8  cmp w8,#0x3
71018c0dec  b.ne 0x71018c0e20
71018c0df0  ldr x8,[x21, #0x260]
71018c0df4  tst x8,#0xffffffffff
71018c0df8  b.eq 0x71018c0e14
71018c0dfc  add x0,x21,#0x250
71018c0e00  bl 0x7101782120
71018c0e04  cbz w0,0x71018c0e20
71018c0e08  mov w24,#0x1
71018c0e0c  strb w24,[x21, #0x278]
71018c0e10  b 0x71018c0e20
71018c0e14  ldr w8,[x21, #0x268]
71018c0e18  cmp w8,#0x0
71018c0e1c  b.le 0x71018c0dfc
71018c0e20  ldr x8,[x21, #0x280]
71018c0e24  and x9,x8,#-0x100000000000000
71018c0e28  cmp x9,x27
71018c0e2c  b.ne 0x71018c0ef8
71018c0e30  and x8,x8,#0xffffffffff
71018c0e34  cbz x8,0x71018c0ef8
71018c0e38  ldrb w8,[x21, #0x288]
71018c0e3c  cmp w8,#0x4
71018c0e40  b.ne 0x71018c0ef8
71018c0e44  adrp x8,0x710532f000
71018c0e48  ldr x8,[x8, #0x730]
71018c0e4c  ldr x8,[x8, #0x8]
71018c0e50  ldr x23,[x8, #0x1d8]
71018c0e54  ldr x1,[x21, #0x290]
71018c0e58  mov x0,x23
71018c0e5c  bl 0x71032a7800
71018c0e60  ldp x8,x9,[x23, #0x20]
71018c0e64  sub x9,x9,x8
71018c0e68  orr x10,xzr,#-0x3333333333333334
71018c0e6c  movk x10,#0xcccd
71018c0e70  asr x9,x9,#0x6
71018c0e74  mul x9,x9,x10
71018c0e78  cmp w0,w9
71018c0e7c  b.cs 0x71018c0ea0
71018c0e80  mov w10,#0x140
71018c0e84  umull x10,w0,w10
71018c0e88  ldrsh x10,[x8, x10, LSL #0x0]
71018c0e8c  cmn x10,#0x1
71018c0e90  b.eq 0x71018c0ea4
71018c0e94  add x10,x23,x10, LSL #0x1
71018c0e98  ldrh w10,[x10, #0x60]
71018c0e9c  b 0x71018c0ea4
71018c0ea0  mov w10,#0xffffffff
71018c0ea4  mov w11,#0x140
71018c0ea8  madd x8,x10,x11,x8
71018c0eac  adrp x11,0x7105182000
71018c0eb0  add x11,x11,#0xb08
71018c0eb4  cmp x9,x10
71018c0eb8  csel x8,x8,x11,hi
71018c0ebc  ldrb w8,[x8, #0x5e]
71018c0ec0  cmp w8,#0x3
71018c0ec4  b.ne 0x71018c0ef8
71018c0ec8  ldr x8,[x21, #0x290]
71018c0ecc  tst x8,#0xffffffffff
71018c0ed0  b.eq 0x71018c0eec
71018c0ed4  add x0,x21,#0x280
71018c0ed8  bl 0x7101782120
71018c0edc  cbz w0,0x71018c0ef8
71018c0ee0  mov w24,#0x1
71018c0ee4  strb w24,[x21, #0x2a8]
71018c0ee8  b 0x71018c0ef8
71018c0eec  ldr w8,[x21, #0x298]
71018c0ef0  cmp w8,#0x0
71018c0ef4  b.le 0x71018c0ed4
71018c0ef8  ldr x8,[x21, #0x2b0]
71018c0efc  and x9,x8,#-0x100000000000000
71018c0f00  cmp x9,x27
71018c0f04  b.ne 0x71018c0fd0
71018c0f08  and x8,x8,#0xffffffffff
71018c0f0c  cbz x8,0x71018c0fd0
71018c0f10  ldrb w8,[x21, #0x2b8]
71018c0f14  cmp w8,#0x4
71018c0f18  b.ne 0x71018c0fd0
71018c0f1c  adrp x8,0x710532f000
71018c0f20  ldr x8,[x8, #0x730]
71018c0f24  ldr x8,[x8, #0x8]
71018c0f28  ldr x23,[x8, #0x1d8]
71018c0f2c  ldr x1,[x21, #0x2c0]
71018c0f30  mov x0,x23
71018c0f34  bl 0x71032a7800
71018c0f38  ldp x8,x9,[x23, #0x20]
71018c0f3c  sub x9,x9,x8
71018c0f40  orr x10,xzr,#-0x3333333333333334
71018c0f44  movk x10,#0xcccd
71018c0f48  asr x9,x9,#0x6
71018c0f4c  mul x9,x9,x10
71018c0f50  cmp w0,w9
71018c0f54  b.cs 0x71018c0f78
71018c0f58  mov w10,#0x140
71018c0f5c  umull x10,w0,w10
71018c0f60  ldrsh x10,[x8, x10, LSL #0x0]
71018c0f64  cmn x10,#0x1
71018c0f68  b.eq 0x71018c0f7c
71018c0f6c  add x10,x23,x10, LSL #0x1
71018c0f70  ldrh w10,[x10, #0x60]
71018c0f74  b 0x71018c0f7c
71018c0f78  mov w10,#0xffffffff
71018c0f7c  mov w11,#0x140
71018c0f80  madd x8,x10,x11,x8
71018c0f84  adrp x11,0x7105182000
71018c0f88  add x11,x11,#0xb08
71018c0f8c  cmp x9,x10
71018c0f90  csel x8,x8,x11,hi
71018c0f94  ldrb w8,[x8, #0x5e]
71018c0f98  cmp w8,#0x3
71018c0f9c  b.ne 0x71018c0fd0
71018c0fa0  ldr x8,[x21, #0x2c0]
71018c0fa4  tst x8,#0xffffffffff
71018c0fa8  b.eq 0x71018c0fc4
71018c0fac  add x0,x21,#0x2b0
71018c0fb0  bl 0x7101782120
71018c0fb4  cbz w0,0x71018c0fd0
71018c0fb8  mov w24,#0x1
71018c0fbc  strb w24,[x21, #0x2d8]
71018c0fc0  b 0x71018c0fd0
71018c0fc4  ldr w8,[x21, #0x2c8]
71018c0fc8  cmp w8,#0x0
71018c0fcc  b.le 0x71018c0fac
71018c0fd0  ldr x8,[x21, #0x2e0]
71018c0fd4  and x9,x8,#-0x100000000000000
71018c0fd8  cmp x9,x27
71018c0fdc  b.ne 0x71018c10a8
71018c0fe0  and x8,x8,#0xffffffffff
71018c0fe4  cbz x8,0x71018c10a8
71018c0fe8  ldrb w8,[x21, #0x2e8]
71018c0fec  cmp w8,#0x4
71018c0ff0  b.ne 0x71018c10a8
71018c0ff4  adrp x8,0x710532f000
71018c0ff8  ldr x8,[x8, #0x730]
71018c0ffc  ldr x8,[x8, #0x8]
71018c1000  ldr x23,[x8, #0x1d8]
71018c1004  ldr x1,[x21, #0x2f0]
71018c1008  mov x0,x23
71018c100c  bl 0x71032a7800
71018c1010  ldp x8,x9,[x23, #0x20]
71018c1014  sub x9,x9,x8
71018c1018  orr x10,xzr,#-0x3333333333333334
71018c101c  movk x10,#0xcccd
71018c1020  asr x9,x9,#0x6
71018c1024  mul x9,x9,x10
71018c1028  cmp w0,w9
71018c102c  b.cs 0x71018c1050
71018c1030  mov w10,#0x140
71018c1034  umull x10,w0,w10
71018c1038  ldrsh x10,[x8, x10, LSL #0x0]
71018c103c  cmn x10,#0x1
71018c1040  b.eq 0x71018c1054
71018c1044  add x10,x23,x10, LSL #0x1
71018c1048  ldrh w10,[x10, #0x60]
71018c104c  b 0x71018c1054
71018c1050  mov w10,#0xffffffff
71018c1054  mov w11,#0x140
71018c1058  madd x8,x10,x11,x8
71018c105c  adrp x11,0x7105182000
71018c1060  add x11,x11,#0xb08
71018c1064  cmp x9,x10
71018c1068  csel x8,x8,x11,hi
71018c106c  ldrb w8,[x8, #0x5e]
71018c1070  cmp w8,#0x3
71018c1074  b.ne 0x71018c10a8
71018c1078  ldr x8,[x21, #0x2f0]
71018c107c  tst x8,#0xffffffffff
71018c1080  b.eq 0x71018c109c
71018c1084  add x0,x21,#0x2e0
71018c1088  bl 0x7101782120
71018c108c  cbz w0,0x71018c10a8
71018c1090  mov w24,#0x1
71018c1094  strb w24,[x21, #0x308]
71018c1098  b 0x71018c10a8
71018c109c  ldr w8,[x21, #0x2f8]
71018c10a0  cmp w8,#0x0
71018c10a4  b.le 0x71018c1084
71018c10a8  ldr x8,[x21, #0x310]
71018c10ac  and x9,x8,#-0x100000000000000
71018c10b0  cmp x9,x27
71018c10b4  b.ne 0x71018c1180
71018c10b8  and x8,x8,#0xffffffffff
71018c10bc  cbz x8,0x71018c1180
71018c10c0  ldrb w8,[x21, #0x318]
71018c10c4  cmp w8,#0x4
71018c10c8  b.ne 0x71018c1180
71018c10cc  adrp x8,0x710532f000
71018c10d0  ldr x8,[x8, #0x730]
71018c10d4  ldr x8,[x8, #0x8]
71018c10d8  ldr x23,[x8, #0x1d8]
71018c10dc  ldr x1,[x21, #0x320]
71018c10e0  mov x0,x23
71018c10e4  bl 0x71032a7800
71018c10e8  ldp x8,x9,[x23, #0x20]
71018c10ec  sub x9,x9,x8
71018c10f0  orr x10,xzr,#-0x3333333333333334
71018c10f4  movk x10,#0xcccd
71018c10f8  asr x9,x9,#0x6
71018c10fc  mul x9,x9,x10
71018c1100  cmp w0,w9
71018c1104  b.cs 0x71018c1128
71018c1108  mov w10,#0x140
71018c110c  umull x10,w0,w10
71018c1110  ldrsh x10,[x8, x10, LSL #0x0]
71018c1114  cmn x10,#0x1
71018c1118  b.eq 0x71018c112c
71018c111c  add x10,x23,x10, LSL #0x1
71018c1120  ldrh w10,[x10, #0x60]
71018c1124  b 0x71018c112c
71018c1128  mov w10,#0xffffffff
71018c112c  mov w11,#0x140
71018c1130  madd x8,x10,x11,x8
71018c1134  adrp x11,0x7105182000
71018c1138  add x11,x11,#0xb08
71018c113c  cmp x9,x10
71018c1140  csel x8,x8,x11,hi
71018c1144  ldrb w8,[x8, #0x5e]
71018c1148  cmp w8,#0x3
71018c114c  b.ne 0x71018c1180
71018c1150  ldr x8,[x21, #0x320]
71018c1154  tst x8,#0xffffffffff
71018c1158  b.eq 0x71018c1174
71018c115c  add x0,x21,#0x310
71018c1160  bl 0x7101782120
71018c1164  cbz w0,0x71018c1180
71018c1168  mov w24,#0x1
71018c116c  strb w24,[x21, #0x338]
71018c1170  b 0x71018c1180
71018c1174  ldr w8,[x21, #0x328]
71018c1178  cmp w8,#0x0
71018c117c  b.le 0x71018c115c
71018c1180  ldr x8,[x21, #0x340]
71018c1184  and x9,x8,#-0x100000000000000
71018c1188  cmp x9,x27
71018c118c  adrp x19,0x7105329000
71018c1190  b.ne 0x71018c1264
71018c1194  and x8,x8,#0xffffffffff
71018c1198  cbz x8,0x71018c1264
71018c119c  ldrb w8,[x21, #0x348]
71018c11a0  cmp w8,#0x4
71018c11a4  b.ne 0x71018c1264
71018c11a8  adrp x8,0x710532f000
71018c11ac  ldr x8,[x8, #0x730]
71018c11b0  ldr x8,[x8, #0x8]
71018c11b4  ldr x23,[x8, #0x1d8]
71018c11b8  ldr x1,[x21, #0x350]
71018c11bc  mov x0,x23
71018c11c0  bl 0x71032a7800
71018c11c4  ldp x8,x9,[x23, #0x20]
71018c11c8  sub x9,x9,x8
71018c11cc  orr x10,xzr,#-0x3333333333333334
71018c11d0  movk x10,#0xcccd
71018c11d4  asr x9,x9,#0x6
71018c11d8  mul x9,x9,x10
71018c11dc  cmp w0,w9
71018c11e0  b.cs 0x71018c1204
71018c11e4  mov w10,#0x140
71018c11e8  umull x10,w0,w10
71018c11ec  ldrsh x10,[x8, x10, LSL #0x0]
71018c11f0  cmn x10,#0x1
71018c11f4  b.eq 0x71018c1208
71018c11f8  add x10,x23,x10, LSL #0x1
71018c11fc  ldrh w10,[x10, #0x60]
71018c1200  b 0x71018c1208
71018c1204  mov w10,#0xffffffff
71018c1208  mov w11,#0x140
71018c120c  madd x8,x10,x11,x8
71018c1210  adrp x11,0x7105182000
71018c1214  add x11,x11,#0xb08
71018c1218  cmp x9,x10
71018c121c  csel x8,x8,x11,hi
71018c1220  ldrb w8,[x8, #0x5e]
71018c1224  cmp w8,#0x3
71018c1228  b.ne 0x71018c1264
71018c122c  ldr x8,[x21, #0x350]
71018c1230  tst x8,#0xffffffffff
71018c1234  b.eq 0x71018c1258
71018c1238  add x0,x21,#0x340
71018c123c  bl 0x7101782120
71018c1240  cbz w0,0x71018c1264
71018c1244  mov w8,#0x1
71018c1248  strb w8,[x21, #0x368]
71018c124c  ldarb w8,[x26]
71018c1250  tbnz w8,#0x0,0x71018c1270
71018c1254  b 0x71018c1444
71018c1258  ldr w8,[x21, #0x358]
71018c125c  cmp w8,#0x0
71018c1260  b.le 0x71018c1238
71018c1264  tbz w24,#0x0,0x71018c1284
71018c1268  ldarb w8,[x26]
71018c126c  tbz w8,#0x0,0x71018c1444
71018c1270  adrp x0,0x7105308000
71018c1274  add x0,x0,#0x570
71018c1278  orr w2,wzr,#0x1e0
71018c127c  mov x1,x22
71018c1280  bl 0x71039c00e0
71018c1284  mov x0,x21
71018c1288  bl 0x7101d2b290
71018c128c  mov x8,#0xff0000000000
71018c1290  movk x8,#0xc1ff, LSL #48
71018c1294  ldr x1,[x21, #0x128]
71018c1298  str x8,[sp, #0x80]
71018c129c  orr w8,wzr,#0xff
71018c12a0  strb w8,[sp, #0x88]
71018c12a4  stp xzr,xzr,[sp, #0x90]
71018c12a8  ldr x0,[x21, #0x560]
71018c12ac  add x2,sp,#0x80
71018c12b0  bl 0x7103385da0
71018c12b4  add x8,x21,#0x10c
71018c12b8  stp xzr,xzr,[x21, #0x8]
71018c12bc  str xzr,[x8]
71018c12c0  add x8,x21,#0x104
71018c12c4  str xzr,[x8]
71018c12c8  ldr x8,[sp]
71018c12cc  str wzr,[x21, #0x114]
71018c12d0  stur xzr,[x21, #0xfc]
71018c12d4  stur xzr,[x21, #0xf4]
71018c12d8  stur xzr,[x21, #0xec]
71018c12dc  stur xzr,[x21, #0xe4]
71018c12e0  stur xzr,[x21, #0xdc]
71018c12e4  stur xzr,[x21, #0xd4]
71018c12e8  stur xzr,[x21, #0xcc]
71018c12ec  str x25,[x21, #0x118]
71018c12f0  str w25,[x21, #0x120]
71018c12f4  strb wzr,[x21, #0x124]
71018c12f8  str wzr,[x21, #0xc8]
71018c12fc  ldr x21,[x8]
71018c1300  b 0x71018c130c
71018c1304  mov x0,x20
71018c1308  bl 0x71039c0d80
71018c130c  mov x0,x21
71018c1310  bl 0x710323cb80
71018c1314  tbz w0,#0x0,0x71018c1304
71018c1318  ldr x8,[x19, #0xf98]
71018c131c  ldr x8,[x8]
71018c1320  ldr x8,[x8, #0x20]
71018c1324  ldr x21,[x8, #0x8]
71018c1328  b 0x71018c1334
71018c132c  mov x0,x20
71018c1330  bl 0x71039c0d80
71018c1334  mov x0,x21
71018c1338  bl 0x710323cb80
71018c133c  tbz w0,#0x0,0x71018c132c
71018c1340  ldrsw x8,[x28, #0xd4]
71018c1344  cmp w8,#0x13
71018c1348  b.cs 0x71018c14c8
71018c134c  add x8,x28,x8, LSL #0x2
71018c1350  mov w9,#0x1
71018c1354  str w9,[x8, #0x88]
71018c1358  add sp,sp,#0x270
71018c135c  ldp x29,x30,[sp, #0x50]
71018c1360  ldp x20,x19,[sp, #0x40]
71018c1364  ldp x22,x21,[sp, #0x30]
71018c1368  ldp x24,x23,[sp, #0x20]
71018c136c  ldp x26,x25,[sp, #0x10]
71018c1370  ldp x28,x27,[sp], #0x60
71018c1374  ret
71018c1378  adrp x0,0x710532f000
71018c137c  add x0,x0,#0x4d8
71018c1380  bl 0x71039c06b0
71018c1384  cbz w0,0x71018bf890
71018c1388  adrp x1,0x710532f000
71018c138c  add x1,x1,#0x4a4
71018c1390  orr w8,wzr,#0xffffff
71018c1394  adrp x0,0x710353e000
71018c1398  add x0,x0,#0x700
71018c139c  str w8,[x1]
71018c13a0  adrp x2,0x7104f17000
71018c13a4  add x2,x2,#0x0
71018c13a8  bl 0x71000001c0
71018c13ac  adrp x0,0x710532f000
71018c13b0  add x0,x0,#0x4d8
71018c13b4  bl 0x71039c06c0
71018c13b8  ldr x10,[x23, #0x28]!
71018c13bc  cbnz x10,0x71018bf898
71018c13c0  b 0x71018bf8dc
71018c13c4  adrp x0,0x7105314000
71018c13c8  add x0,x0,#0x4d8
71018c13cc  bl 0x71039c06b0
71018c13d0  cbz w0,0x71018c060c
71018c13d4  bl 0x7101764000
71018c13d8  adrp x0,0x7101763000
71018c13dc  add x0,x0,#0xc40
71018c13e0  adrp x1,0x71052c5000
71018c13e4  add x1,x1,#0x180
71018c13e8  adrp x2,0x7104f17000
71018c13ec  add x2,x2,#0x0
71018c13f0  bl 0x71000001c0
71018c13f4  adrp x0,0x7105314000
71018c13f8  add x0,x0,#0x4d8
71018c13fc  bl 0x71039c06c0
71018c1400  b 0x71018c060c
71018c1404  adrp x0,0x7105314000
71018c1408  add x0,x0,#0x4d8
71018c140c  bl 0x71039c06b0
71018c1410  cbz w0,0x71018c0664
71018c1414  bl 0x7101764000
71018c1418  adrp x0,0x7101763000
71018c141c  add x0,x0,#0xc40
71018c1420  adrp x1,0x71052c5000
71018c1424  add x1,x1,#0x180
71018c1428  adrp x2,0x7104f17000
71018c142c  add x2,x2,#0x0
71018c1430  bl 0x71000001c0
71018c1434  adrp x0,0x7105314000
71018c1438  add x0,x0,#0x4d8
71018c143c  bl 0x71039c06c0
71018c1440  b 0x71018c0664
71018c1444  adrp x0,0x7105314000
71018c1448  add x0,x0,#0x4d8
71018c144c  bl 0x71039c06b0
71018c1450  cbz w0,0x71018c1270
71018c1454  bl 0x7101764000
71018c1458  adrp x0,0x7101763000
71018c145c  add x0,x0,#0xc40
71018c1460  adrp x1,0x71052c5000
71018c1464  add x1,x1,#0x180
71018c1468  adrp x2,0x7104f17000
71018c146c  add x2,x2,#0x0
71018c1470  bl 0x71000001c0
71018c1474  adrp x0,0x7105314000
71018c1478  add x0,x0,#0x4d8
71018c147c  bl 0x71039c06c0
71018c1480  b 0x71018c1270
71018c1484  adrp x0,0x7105314000
71018c1488  add x0,x0,#0x4d8
71018c148c  bl 0x71039c06b0
71018c1490  cbz w0,0x71018c14c0
71018c1494  bl 0x7101764000
71018c1498  adrp x0,0x7101763000
71018c149c  add x0,x0,#0xc40
71018c14a0  adrp x1,0x71052c5000
71018c14a4  add x1,x1,#0x180
71018c14a8  adrp x2,0x7104f17000
71018c14ac  add x2,x2,#0x0
71018c14b0  bl 0x71000001c0
71018c14b4  adrp x0,0x7105314000
71018c14b8  add x0,x0,#0x4d8
71018c14bc  bl 0x71039c06c0
71018c14c0  ldr x28,[sp, #0x8]
71018c14c4  b 0x71018c09d4
71018c14c8  bl 0x71039c2650
