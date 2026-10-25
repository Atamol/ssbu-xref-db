// addr:      7101dacc40
// offset:    0x1dacc40
// name:      FUN_7101dacc40
// mangled:   
// size:      9564

7101dacc40  str d8,[sp, #-0x70]!
7101dacc44  stp x28,x27,[sp, #0x10]
7101dacc48  stp x26,x25,[sp, #0x20]
7101dacc4c  stp x24,x23,[sp, #0x30]
7101dacc50  stp x22,x21,[sp, #0x40]
7101dacc54  stp x20,x19,[sp, #0x50]
7101dacc58  stp x29,x30,[sp, #0x60]
7101dacc5c  add x29,sp,#0x60
7101dacc60  sub sp,sp,#0x700
7101dacc64  mov x19,x0
7101dacc68  add x0,x0,#0xe8
7101dacc6c  mov x21,x1
7101dacc70  cmp x0,x1
7101dacc74  str x0,[sp, #0x28]
7101dacc78  b.eq 0x7101dacd80
7101dacc7c  mov x1,x21
7101dacc80  bl 0x71024976d0
7101dacc84  ldr x8,[x21, #0x178]
7101dacc88  str x8,[x19, #0x260]
7101dacc8c  ldr x8,[x21, #0x180]
7101dacc90  ldrh w9,[x21, #0x188]
7101dacc94  add x0,x19,#0x274
7101dacc98  add x1,x21,#0x194
7101dacc9c  strh w9,[x19, #0x270]
7101dacca0  str x8,[x19, #0x268]
7101dacca4  bl 0x7101696040
7101dacca8  add x9,x21,#0x1c4
7101daccac  add x10,x21,#0x1c9
7101daccb0  ldr x10,[x10]
7101daccb4  ldr x9,[x9]
7101daccb8  add x8,x19,#0x2ac
7101daccbc  add x11,x19,#0x2b1
7101daccc0  str x10,[x11]
7101daccc4  add x11,x21,#0x1d4
7101daccc8  str x9,[x8]
7101dacccc  ldr x8,[x11]
7101daccd0  ldrh w9,[x21, #0x1dc]
7101daccd4  add x10,x19,#0x2bc
7101daccd8  add x0,x19,#0x2c8
7101daccdc  add x1,x21,#0x1e8
7101dacce0  strh w9,[x19, #0x2c4]
7101dacce4  str x8,[x10]
7101dacce8  bl 0x7101696040
7101daccec  add x9,x21,#0x21d
7101daccf0  ldr x8,[x21, #0x218]
7101daccf4  add x10,x19,#0x305
7101daccf8  ldr x9,[x9]
7101daccfc  str x9,[x10]
7101dacd00  str x8,[x19, #0x300]
7101dacd04  ldr x8,[x21, #0x228]
7101dacd08  ldrh w9,[x21, #0x230]
7101dacd0c  add x0,x19,#0x31c
7101dacd10  add x1,x21,#0x23c
7101dacd14  strh w9,[x19, #0x318]
7101dacd18  str x8,[x19, #0x310]
7101dacd1c  bl 0x7101696040
7101dacd20  add x9,x21,#0x26c
7101dacd24  add x10,x21,#0x271
7101dacd28  ldr x10,[x10]
7101dacd2c  ldr x9,[x9]
7101dacd30  add x8,x19,#0x354
7101dacd34  add x11,x19,#0x359
7101dacd38  str x10,[x11]
7101dacd3c  add x11,x21,#0x27c
7101dacd40  str x9,[x8]
7101dacd44  ldr x8,[x11]
7101dacd48  ldrh w9,[x21, #0x284]
7101dacd4c  add x10,x19,#0x364
7101dacd50  add x0,x19,#0x370
7101dacd54  add x1,x21,#0x290
7101dacd58  strh w9,[x19, #0x36c]
7101dacd5c  str x8,[x10]
7101dacd60  bl 0x7101696040
7101dacd64  add x9,x21,#0x2c5
7101dacd68  ldr x8,[x21, #0x2c0]
7101dacd6c  add x10,x19,#0x3ad
7101dacd70  ldr x9,[x9]
7101dacd74  str x9,[x10]
7101dacd78  str x8,[x19, #0x3a8]
7101dacd7c  b 0x7101dacd88
7101dacd80  ldr x8,[x21, #0x178]
7101dacd84  str x8,[x19, #0x260]
7101dacd88  ldr x8,[x21, #0x2d0]
7101dacd8c  ldr x9,[x21, #0x2d8]
7101dacd90  mov w20,#0x101
7101dacd94  ldr x10,[x21, #0x2e0]
7101dacd98  str x10,[x19, #0x3c8]
7101dacd9c  str x9,[x19, #0x3c0]
7101dacda0  str x8,[x19, #0x3b8]
7101dacda4  ldr x8,[x21, #0x2e8]
7101dacda8  ldr x9,[x21, #0x2f0]
7101dacdac  ldr x10,[x21, #0x2f8]
7101dacdb0  ldr x11,[x21, #0x300]
7101dacdb4  str x11,[x19, #0x3e8]
7101dacdb8  str x10,[x19, #0x3e0]
7101dacdbc  str x9,[x19, #0x3d8]
7101dacdc0  str x8,[x19, #0x3d0]
7101dacdc4  ldr x8,[x21, #0x308]
7101dacdc8  ldr x9,[x21, #0x310]
7101dacdcc  ldr x10,[x21, #0x318]
7101dacdd0  ldr x11,[x21, #0x320]
7101dacdd4  str x11,[x19, #0x408]
7101dacdd8  str x10,[x19, #0x400]
7101dacddc  str x9,[x19, #0x3f8]
7101dacde0  str x8,[x19, #0x3f0]
7101dacde4  add x8,x21,#0x33d
7101dacde8  ldr x8,[x8]
7101dacdec  ldr x10,[x21, #0x328]
7101dacdf0  ldr x11,[x21, #0x330]
7101dacdf4  ldr x12,[x21, #0x338]
7101dacdf8  add x9,x19,#0x425
7101dacdfc  str x8,[x9]
7101dace00  mov w8,#0x1
7101dace04  str x12,[x19, #0x420]
7101dace08  str x11,[x19, #0x418]
7101dace0c  str x10,[x19, #0x410]
7101dace10  str wzr,[x19, #0xe0]
7101dace14  str xzr,[sp, #0x30]
7101dace18  strh w20,[sp, #0x38]
7101dace1c  strh wzr,[sp, #0x3e]
7101dace20  stur wzr,[sp, #0x3a]
7101dace24  str w8,[sp, #0x40]
7101dace28  strh w8,[sp, #0x44]
7101dace2c  mov x21,#0x41f0000000000000
7101dace30  add x0,sp,#0x30
7101dace34  strb w8,[sp, #0x46]
7101dace38  add x8,sp,#0x30
7101dace3c  add x24,x8,#0x60
7101dace40  str x21,[sp, #0x48]
7101dace44  str wzr,[sp, #0x50]
7101dace48  str xzr,[sp, #0x80]
7101dace4c  str xzr,[sp, #0xb0]
7101dace50  str xzr,[sp, #0xe0]
7101dace54  str xzr,[sp, #0x110]
7101dace58  str xzr,[sp, #0x140]
7101dace5c  str wzr,[sp, #0x150]
7101dace60  bl 0x710337df20
7101dace64  ldr x0,[sp, #0xb0]
7101dace68  str xzr,[sp, #0xb0]
7101dace6c  cmp x24,x0
7101dace70  strb wzr,[sp, #0x38]
7101dace74  b.eq 0x7101dace88
7101dace78  cbz x0,0x7101dace94
7101dace7c  ldr x8,[x0]
7101dace80  ldr x8,[x8, #0x28]
7101dace84  b 0x7101dace90
7101dace88  ldr x8,[x0]
7101dace8c  ldr x8,[x8, #0x20]
7101dace90  blr x8
7101dace94  add x8,sp,#0x44b
7101dace98  str xzr,[sp, #0x540]
7101dace9c  strh w20,[sp, #0x548]
7101dacea0  stur wzr,[x8, #0xff]
7101dacea4  mov w8,#0x1
7101dacea8  add x0,sp,#0x540
7101daceac  str w8,[sp, #0x550]
7101daceb0  strh w8,[sp, #0x554]
7101daceb4  strb w8,[sp, #0x556]
7101daceb8  add x8,sp,#0x540
7101dacebc  add x25,x8,#0x60
7101dacec0  strh wzr,[sp, #0x54e]
7101dacec4  str x21,[sp, #0x558]
7101dacec8  str wzr,[sp, #0x560]
7101dacecc  str xzr,[sp, #0x590]
7101daced0  str xzr,[sp, #0x5c0]
7101daced4  str xzr,[sp, #0x5f0]
7101daced8  str xzr,[sp, #0x620]
7101dacedc  str xzr,[sp, #0x650]
7101dacee0  str wzr,[sp, #0x660]
7101dacee4  bl 0x710337df20
7101dacee8  ldr x0,[sp, #0x5c0]
7101daceec  str xzr,[sp, #0x5c0]
7101dacef0  cmp x25,x0
7101dacef4  b.eq 0x7101dacf08
7101dacef8  cbz x0,0x7101dacf14
7101dacefc  ldr x8,[x0]
7101dacf00  ldr x8,[x8, #0x28]
7101dacf04  b 0x7101dacf10
7101dacf08  ldr x8,[x0]
7101dacf0c  ldr x8,[x8, #0x20]
7101dacf10  blr x8
7101dacf14  add x8,sp,#0x31b
7101dacf18  str xzr,[sp, #0x410]
7101dacf1c  strh w20,[sp, #0x418]
7101dacf20  stur wzr,[x8, #0xff]
7101dacf24  mov w8,#0x1
7101dacf28  add x0,sp,#0x410
7101dacf2c  str w8,[sp, #0x420]
7101dacf30  strh w8,[sp, #0x424]
7101dacf34  strb w8,[sp, #0x426]
7101dacf38  add x8,sp,#0x410
7101dacf3c  add x26,x8,#0x60
7101dacf40  strh wzr,[sp, #0x41e]
7101dacf44  str x21,[sp, #0x428]
7101dacf48  str wzr,[sp, #0x430]
7101dacf4c  str xzr,[sp, #0x460]
7101dacf50  str xzr,[sp, #0x490]
7101dacf54  str xzr,[sp, #0x4c0]
7101dacf58  str xzr,[sp, #0x4f0]
7101dacf5c  str xzr,[sp, #0x520]
7101dacf60  str wzr,[sp, #0x530]
7101dacf64  bl 0x710337df20
7101dacf68  ldr x0,[sp, #0x490]
7101dacf6c  str xzr,[sp, #0x490]
7101dacf70  cmp x26,x0
7101dacf74  strb wzr,[sp, #0x418]
7101dacf78  b.eq 0x7101dacf8c
7101dacf7c  cbz x0,0x7101dacf98
7101dacf80  ldr x8,[x0]
7101dacf84  ldr x8,[x8, #0x28]
7101dacf88  b 0x7101dacf94
7101dacf8c  ldr x8,[x0]
7101dacf90  ldr x8,[x8, #0x20]
7101dacf94  blr x8
7101dacf98  add x8,sp,#0x1eb
7101dacf9c  str xzr,[sp, #0x2e0]
7101dacfa0  strh w20,[sp, #0x2e8]
7101dacfa4  stur wzr,[x8, #0xff]
7101dacfa8  mov w8,#0x1
7101dacfac  add x0,sp,#0x2e0
7101dacfb0  str w8,[sp, #0x2f0]
7101dacfb4  strh w8,[sp, #0x2f4]
7101dacfb8  strb w8,[sp, #0x2f6]
7101dacfbc  add x8,sp,#0x2e0
7101dacfc0  add x27,x8,#0x60
7101dacfc4  strh wzr,[sp, #0x2ee]
7101dacfc8  str x21,[sp, #0x2f8]
7101dacfcc  str wzr,[sp, #0x300]
7101dacfd0  str xzr,[sp, #0x330]
7101dacfd4  str xzr,[sp, #0x360]
7101dacfd8  str xzr,[sp, #0x390]
7101dacfdc  str xzr,[sp, #0x3c0]
7101dacfe0  str xzr,[sp, #0x3f0]
7101dacfe4  str wzr,[sp, #0x400]
7101dacfe8  bl 0x710337df20
7101dacfec  ldr x0,[sp, #0x360]
7101dacff0  str xzr,[sp, #0x360]
7101dacff4  cmp x27,x0
7101dacff8  strb wzr,[sp, #0x2e8]
7101dacffc  b.eq 0x7101dad010
7101dad000  cbz x0,0x7101dad01c
7101dad004  ldr x8,[x0]
7101dad008  ldr x8,[x8, #0x28]
7101dad00c  b 0x7101dad018
7101dad010  ldr x8,[x0]
7101dad014  ldr x8,[x8, #0x20]
7101dad018  blr x8
7101dad01c  add x8,sp,#0xbb
7101dad020  str xzr,[sp, #0x1b0]
7101dad024  strh w20,[sp, #0x1b8]
7101dad028  stur wzr,[x8, #0xff]
7101dad02c  mov w8,#0x1
7101dad030  add x0,sp,#0x1b0
7101dad034  str w8,[sp, #0x1c0]
7101dad038  strh w8,[sp, #0x1c4]
7101dad03c  strb w8,[sp, #0x1c6]
7101dad040  add x8,sp,#0x1b0
7101dad044  add x28,x8,#0x60
7101dad048  strh wzr,[sp, #0x1be]
7101dad04c  str x21,[sp, #0x1c8]
7101dad050  str wzr,[sp, #0x1d0]
7101dad054  str xzr,[sp, #0x200]
7101dad058  str xzr,[sp, #0x230]
7101dad05c  str xzr,[sp, #0x260]
7101dad060  str xzr,[sp, #0x290]
7101dad064  str xzr,[sp, #0x2c0]
7101dad068  str wzr,[sp, #0x2d0]
7101dad06c  bl 0x710337df20
7101dad070  ldr x0,[sp, #0x230]
7101dad074  str xzr,[sp, #0x230]
7101dad078  cmp x28,x0
7101dad07c  strb wzr,[sp, #0x1b8]
7101dad080  b.eq 0x7101dad094
7101dad084  cbz x0,0x7101dad0a0
7101dad088  ldr x8,[x0]
7101dad08c  ldr x8,[x8, #0x28]
7101dad090  b 0x7101dad09c
7101dad094  ldr x8,[x0]
7101dad098  ldr x8,[x8, #0x20]
7101dad09c  blr x8
7101dad0a0  add x22,x19,#0x70
7101dad0a4  add x21,x19,#0x50
7101dad0a8  adrp x2,0x7104307000
7101dad0ac  add x2,x2,#0x72
7101dad0b0  add x3,sp,#0x30
7101dad0b4  mov x0,x22
7101dad0b8  mov x1,x21
7101dad0bc  bl 0x7103770b30
7101dad0c0  adrp x2,0x7104270000
7101dad0c4  add x2,x2,#0x384
7101dad0c8  mov x0,x22
7101dad0cc  mov w1,wzr
7101dad0d0  bl 0x71037717d0
7101dad0d4  adrp x2,0x71043f0000
7101dad0d8  add x2,x2,#0xd67
7101dad0dc  mov w1,#0x1
7101dad0e0  mov x0,x22
7101dad0e4  bl 0x71037717d0
7101dad0e8  adrp x2,0x710438d000
7101dad0ec  add x2,x2,#0x7
7101dad0f0  orr w1,wzr,#0x3
7101dad0f4  mov x0,x22
7101dad0f8  bl 0x71037717d0
7101dad0fc  ldr w8,[x19, #0x428]
7101dad100  cbnz w8,0x7101dad118
7101dad104  adrp x2,0x7104308000
7101dad108  add x2,x2,#0x8c5
7101dad10c  mov w1,#0x2
7101dad110  mov x0,x22
7101dad114  bl 0x71037717d0
7101dad118  mov x8,#0xce8
7101dad11c  movk x8,#0xfc42, LSL #16
7101dad120  movk x8,#0x7, LSL #32
7101dad124  stur x8,[x29, #-0x78]
7101dad128  ldr x0,[x19, #0x70]
7101dad12c  mov w1,#0x2
7101dad130  sub x2,x29,#0x78
7101dad134  sub x20,x29,#0x78
7101dad138  bl 0x7103772070
7101dad13c  ldr x0,[x19, #0x70]
7101dad140  ldr x8,[x0]
7101dad144  ldr x8,[x8, #0x60]
7101dad148  mov w1,#0x1
7101dad14c  blr x8
7101dad150  ldr x0,[x19, #0x70]
7101dad154  ldr x8,[x0]
7101dad158  ldr x8,[x8, #0x70]
7101dad15c  mov w1,wzr
7101dad160  blr x8
7101dad164  add x22,x19,#0x78
7101dad168  adrp x2,0x710424f000
7101dad16c  add x2,x2,#0xd71
7101dad170  add x3,sp,#0x2e0
7101dad174  mov x0,x22
7101dad178  mov x1,x21
7101dad17c  bl 0x7103770b30
7101dad180  adrp x2,0x7104412000
7101dad184  add x2,x2,#0xd90
7101dad188  mov w1,#0xa
7101dad18c  mov x0,x22
7101dad190  bl 0x71037717d0
7101dad194  adrp x23,0x7104454000
7101dad198  add x23,x23,#0xee4
7101dad19c  mov w1,#0xb
7101dad1a0  mov x0,x22
7101dad1a4  mov x2,x23
7101dad1a8  bl 0x71037717d0
7101dad1ac  ldr x0,[x19, #0x78]
7101dad1b0  ldr x8,[x0]
7101dad1b4  ldr x8,[x8, #0x60]
7101dad1b8  mov w1,wzr
7101dad1bc  blr x8
7101dad1c0  ldr x0,[x19, #0x78]
7101dad1c4  ldr x8,[x0]
7101dad1c8  ldr x8,[x8, #0x70]
7101dad1cc  mov w1,wzr
7101dad1d0  blr x8
7101dad1d4  sub x8,x29,#0x78
7101dad1d8  mov x0,x21
7101dad1dc  mov x1,x23
7101dad1e0  bl 0x7103776910
7101dad1e4  add x8,x19,#0x60
7101dad1e8  cmp x8,x20
7101dad1ec  b.eq 0x7101dad208
7101dad1f0  ldur x8,[x29, #-0x70]
7101dad1f4  stur xzr,[x29, #-0x70]
7101dad1f8  ldr x0,[x19, #0x68]
7101dad1fc  str x8,[x19, #0x68]
7101dad200  cbz x0,0x7101dad208
7101dad204  bl 0x710392eb40
7101dad208  ldur x0,[x29, #-0x70]
7101dad20c  adrp x20,0x710523d000
7101dad210  add x20,x20,#0x9a8
7101dad214  stp x20,xzr,[x29, #-0x78]
7101dad218  cbz x0,0x7101dad220
7101dad21c  bl 0x710392eb40
7101dad220  adrp x1,0x7104433000
7101dad224  add x1,x1,#0x603
7101dad228  sub x8,x29,#0x78
7101dad22c  mov x0,x21
7101dad230  bl 0x7103776640
7101dad234  add x22,x19,#0x80
7101dad238  adrp x2,0x7104307000
7101dad23c  add x2,x2,#0x72
7101dad240  sub x1,x29,#0x78
7101dad244  add x3,sp,#0x410
7101dad248  mov x0,x22
7101dad24c  bl 0x7103770b30
7101dad250  adrp x2,0x7104292000
7101dad254  add x2,x2,#0x1bb
7101dad258  mov w1,#0x14
7101dad25c  mov x0,x22
7101dad260  bl 0x71037717d0
7101dad264  adrp x2,0x710432a000
7101dad268  add x2,x2,#0x5d7
7101dad26c  mov w1,#0x15
7101dad270  mov x0,x22
7101dad274  bl 0x71037717d0
7101dad278  adrp x2,0x7104270000
7101dad27c  add x2,x2,#0x503
7101dad280  mov w1,#0x16
7101dad284  mov x0,x22
7101dad288  bl 0x71037717d0
7101dad28c  ldr x0,[x19, #0x80]
7101dad290  ldr x8,[x0]
7101dad294  ldr x8,[x8, #0x60]
7101dad298  mov w1,wzr
7101dad29c  blr x8
7101dad2a0  ldr x0,[x19, #0x80]
7101dad2a4  ldr x8,[x0]
7101dad2a8  ldr x8,[x8, #0x70]
7101dad2ac  mov w1,wzr
7101dad2b0  blr x8
7101dad2b4  add x22,x19,#0x88
7101dad2b8  adrp x2,0x71043e0000
7101dad2bc  add x2,x2,#0xa56
7101dad2c0  add x3,sp,#0x1b0
7101dad2c4  mov x0,x22
7101dad2c8  mov x1,x21
7101dad2cc  add x23,sp,#0x1b0
7101dad2d0  bl 0x7103770b30
7101dad2d4  adrp x2,0x710433a000
7101dad2d8  add x2,x2,#0x587
7101dad2dc  orr w1,wzr,#0x1e
7101dad2e0  mov x0,x22
7101dad2e4  bl 0x71037717d0
7101dad2e8  ldr x0,[x19, #0x88]
7101dad2ec  ldr x8,[x0]
7101dad2f0  ldr x8,[x8, #0x60]
7101dad2f4  mov w1,wzr
7101dad2f8  blr x8
7101dad2fc  ldr x0,[x19, #0x88]
7101dad300  ldr x8,[x0]
7101dad304  ldr x8,[x8, #0x70]
7101dad308  mov w1,wzr
7101dad30c  blr x8
7101dad310  ldr x8,[x19, #0x20]
7101dad314  ldr x8,[x8]
7101dad318  ldr x8,[x8]
7101dad31c  ldr x9,[x8, #0x600]
7101dad320  mov w10,#0x20
7101dad324  movk w10,#0x4, LSL #16
7101dad328  str w10,[x9, #0x10]
7101dad32c  ldr x9,[x8, #0x600]
7101dad330  mov w10,#0x40
7101dad334  str w10,[x9, #0x14]
7101dad338  ldr x9,[x8, #0x600]
7101dad33c  mov w10,#0xa
7101dad340  movk w10,#0xa0, LSL #16
7101dad344  str w10,[x9, #0x18]
7101dad348  ldr x9,[x8, #0x600]
7101dad34c  mov w10,#0x5
7101dad350  movk w10,#0x50, LSL #16
7101dad354  str w10,[x9, #0x1c]
7101dad358  ldr x9,[x8, #0x600]
7101dad35c  mov w10,#0x8
7101dad360  movk w10,#0x80, LSL #16
7101dad364  str w10,[x9, #0x24]
7101dad368  ldr x9,[x8, #0x600]
7101dad36c  mov w10,#0x2
7101dad370  movk w10,#0x20, LSL #16
7101dad374  str w10,[x9, #0x20]
7101dad378  ldr x9,[x8, #0x600]
7101dad37c  mov w10,#0x10
7101dad380  str w10,[x9, #0x28]
7101dad384  ldr x9,[x8, #0x600]
7101dad388  mov w10,#0xa00
7101dad38c  str w10,[x9, #0x2c]
7101dad390  ldr x9,[x8, #0x600]
7101dad394  mov w10,#0x80
7101dad398  str w10,[x9, #0x30]
7101dad39c  ldr x9,[x8, #0x600]
7101dad3a0  mov w10,#0x100
7101dad3a4  str w10,[x9, #0x34]
7101dad3a8  ldr x9,[x8, #0x600]
7101dad3ac  mov w10,#0x200
7101dad3b0  str w10,[x9, #0x38]
7101dad3b4  ldr x9,[x8, #0x600]
7101dad3b8  mov w10,#0x1
7101dad3bc  movk w10,#0x10, LSL #16
7101dad3c0  str w10,[x9, #0x3c]
7101dad3c4  ldr x9,[x8, #0x600]
7101dad3c8  mov w10,#0x4
7101dad3cc  movk w10,#0x40, LSL #16
7101dad3d0  str w10,[x9, #0x40]
7101dad3d4  ldr x8,[x8, #0x600]
7101dad3d8  mov w9,#0x500
7101dad3dc  str w9,[x8, #0x44]
7101dad3e0  ldur x22,[x29, #-0x70]
7101dad3e4  adrp x8,0x710523d000
7101dad3e8  add x8,x8,#0x988
7101dad3ec  stp x8,xzr,[x29, #-0x78]
7101dad3f0  cbz x22,0x7101dad40c
7101dad3f4  ldr x0,[x22, #0x18]
7101dad3f8  stp x20,xzr,[x22, #0x10]
7101dad3fc  cbz x0,0x7101dad404
7101dad400  bl 0x710392eb40
7101dad404  mov x0,x22
7101dad408  bl 0x710392eb40
7101dad40c  ldr x0,[sp, #0x2c0]
7101dad410  add x8,x23,#0xf0
7101dad414  cmp x8,x0
7101dad418  b.eq 0x7101dad42c
7101dad41c  cbz x0,0x7101dad438
7101dad420  ldr x8,[x0]
7101dad424  ldr x8,[x8, #0x28]
7101dad428  b 0x7101dad434
7101dad42c  ldr x8,[x0]
7101dad430  ldr x8,[x8, #0x20]
7101dad434  blr x8
7101dad438  ldr x0,[sp, #0x290]
7101dad43c  add x8,sp,#0x1b0
7101dad440  add x8,x8,#0xc0
7101dad444  cmp x8,x0
7101dad448  b.eq 0x7101dad45c
7101dad44c  cbz x0,0x7101dad468
7101dad450  ldr x8,[x0]
7101dad454  ldr x8,[x8, #0x28]
7101dad458  b 0x7101dad464
7101dad45c  ldr x8,[x0]
7101dad460  ldr x8,[x8, #0x20]
7101dad464  blr x8
7101dad468  ldr x0,[sp, #0x260]
7101dad46c  add x8,sp,#0x1b0
7101dad470  add x8,x8,#0x90
7101dad474  cmp x8,x0
7101dad478  b.eq 0x7101dad48c
7101dad47c  cbz x0,0x7101dad498
7101dad480  ldr x8,[x0]
7101dad484  ldr x8,[x8, #0x28]
7101dad488  b 0x7101dad494
7101dad48c  ldr x8,[x0]
7101dad490  ldr x8,[x8, #0x20]
7101dad494  blr x8
7101dad498  ldr x0,[sp, #0x230]
7101dad49c  cmp x28,x0
7101dad4a0  b.eq 0x7101dad4b4
7101dad4a4  cbz x0,0x7101dad4c0
7101dad4a8  ldr x8,[x0]
7101dad4ac  ldr x8,[x8, #0x28]
7101dad4b0  b 0x7101dad4bc
7101dad4b4  ldr x8,[x0]
7101dad4b8  ldr x8,[x8, #0x20]
7101dad4bc  blr x8
7101dad4c0  ldr x0,[sp, #0x200]
7101dad4c4  add x8,sp,#0x1b0
7101dad4c8  add x8,x8,#0x30
7101dad4cc  cmp x8,x0
7101dad4d0  b.eq 0x7101dad4e4
7101dad4d4  cbz x0,0x7101dad4f0
7101dad4d8  ldr x8,[x0]
7101dad4dc  ldr x8,[x8, #0x28]
7101dad4e0  b 0x7101dad4ec
7101dad4e4  ldr x8,[x0]
7101dad4e8  ldr x8,[x8, #0x20]
7101dad4ec  blr x8
7101dad4f0  ldr x0,[sp, #0x3f0]
7101dad4f4  add x8,sp,#0x2e0
7101dad4f8  add x8,x8,#0xf0
7101dad4fc  cmp x8,x0
7101dad500  b.eq 0x7101dad514
7101dad504  cbz x0,0x7101dad520
7101dad508  ldr x8,[x0]
7101dad50c  ldr x8,[x8, #0x28]
7101dad510  b 0x7101dad51c
7101dad514  ldr x8,[x0]
7101dad518  ldr x8,[x8, #0x20]
7101dad51c  blr x8
7101dad520  ldr x0,[sp, #0x3c0]
7101dad524  add x8,sp,#0x2e0
7101dad528  add x8,x8,#0xc0
7101dad52c  cmp x8,x0
7101dad530  b.eq 0x7101dad544
7101dad534  cbz x0,0x7101dad550
7101dad538  ldr x8,[x0]
7101dad53c  ldr x8,[x8, #0x28]
7101dad540  b 0x7101dad54c
7101dad544  ldr x8,[x0]
7101dad548  ldr x8,[x8, #0x20]
7101dad54c  blr x8
7101dad550  ldr x0,[sp, #0x390]
7101dad554  add x8,sp,#0x2e0
7101dad558  add x8,x8,#0x90
7101dad55c  cmp x8,x0
7101dad560  b.eq 0x7101dad574
7101dad564  cbz x0,0x7101dad580
7101dad568  ldr x8,[x0]
7101dad56c  ldr x8,[x8, #0x28]
7101dad570  b 0x7101dad57c
7101dad574  ldr x8,[x0]
7101dad578  ldr x8,[x8, #0x20]
7101dad57c  blr x8
7101dad580  ldr x0,[sp, #0x360]
7101dad584  cmp x27,x0
7101dad588  b.eq 0x7101dad59c
7101dad58c  cbz x0,0x7101dad5a8
7101dad590  ldr x8,[x0]
7101dad594  ldr x8,[x8, #0x28]
7101dad598  b 0x7101dad5a4
7101dad59c  ldr x8,[x0]
7101dad5a0  ldr x8,[x8, #0x20]
7101dad5a4  blr x8
7101dad5a8  ldr x0,[sp, #0x330]
7101dad5ac  add x8,sp,#0x2e0
7101dad5b0  add x8,x8,#0x30
7101dad5b4  cmp x8,x0
7101dad5b8  b.eq 0x7101dad5cc
7101dad5bc  cbz x0,0x7101dad5d8
7101dad5c0  ldr x8,[x0]
7101dad5c4  ldr x8,[x8, #0x28]
7101dad5c8  b 0x7101dad5d4
7101dad5cc  ldr x8,[x0]
7101dad5d0  ldr x8,[x8, #0x20]
7101dad5d4  blr x8
7101dad5d8  ldr x0,[sp, #0x520]
7101dad5dc  add x8,sp,#0x410
7101dad5e0  add x8,x8,#0xf0
7101dad5e4  cmp x8,x0
7101dad5e8  b.eq 0x7101dad5fc
7101dad5ec  cbz x0,0x7101dad608
7101dad5f0  ldr x8,[x0]
7101dad5f4  ldr x8,[x8, #0x28]
7101dad5f8  b 0x7101dad604
7101dad5fc  ldr x8,[x0]
7101dad600  ldr x8,[x8, #0x20]
7101dad604  blr x8
7101dad608  ldr x0,[sp, #0x4f0]
7101dad60c  add x8,sp,#0x410
7101dad610  add x8,x8,#0xc0
7101dad614  cmp x8,x0
7101dad618  b.eq 0x7101dad62c
7101dad61c  cbz x0,0x7101dad638
7101dad620  ldr x8,[x0]
7101dad624  ldr x8,[x8, #0x28]
7101dad628  b 0x7101dad634
7101dad62c  ldr x8,[x0]
7101dad630  ldr x8,[x8, #0x20]
7101dad634  blr x8
7101dad638  ldr x0,[sp, #0x4c0]
7101dad63c  add x8,sp,#0x410
7101dad640  add x8,x8,#0x90
7101dad644  cmp x8,x0
7101dad648  b.eq 0x7101dad65c
7101dad64c  cbz x0,0x7101dad668
7101dad650  ldr x8,[x0]
7101dad654  ldr x8,[x8, #0x28]
7101dad658  b 0x7101dad664
7101dad65c  ldr x8,[x0]
7101dad660  ldr x8,[x8, #0x20]
7101dad664  blr x8
7101dad668  ldr x0,[sp, #0x490]
7101dad66c  cmp x26,x0
7101dad670  b.eq 0x7101dad684
7101dad674  cbz x0,0x7101dad690
7101dad678  ldr x8,[x0]
7101dad67c  ldr x8,[x8, #0x28]
7101dad680  b 0x7101dad68c
7101dad684  ldr x8,[x0]
7101dad688  ldr x8,[x8, #0x20]
7101dad68c  blr x8
7101dad690  ldr x0,[sp, #0x460]
7101dad694  add x8,sp,#0x410
7101dad698  add x8,x8,#0x30
7101dad69c  cmp x8,x0
7101dad6a0  b.eq 0x7101dad6b4
7101dad6a4  cbz x0,0x7101dad6c0
7101dad6a8  ldr x8,[x0]
7101dad6ac  ldr x8,[x8, #0x28]
7101dad6b0  b 0x7101dad6bc
7101dad6b4  ldr x8,[x0]
7101dad6b8  ldr x8,[x8, #0x20]
7101dad6bc  blr x8
7101dad6c0  ldr x0,[sp, #0x650]
7101dad6c4  add x8,sp,#0x540
7101dad6c8  add x8,x8,#0xf0
7101dad6cc  cmp x8,x0
7101dad6d0  b.eq 0x7101dad6e4
7101dad6d4  cbz x0,0x7101dad6f0
7101dad6d8  ldr x8,[x0]
7101dad6dc  ldr x8,[x8, #0x28]
7101dad6e0  b 0x7101dad6ec
7101dad6e4  ldr x8,[x0]
7101dad6e8  ldr x8,[x8, #0x20]
7101dad6ec  blr x8
7101dad6f0  ldr x0,[sp, #0x620]
7101dad6f4  add x8,sp,#0x540
7101dad6f8  add x8,x8,#0xc0
7101dad6fc  cmp x8,x0
7101dad700  b.eq 0x7101dad714
7101dad704  cbz x0,0x7101dad720
7101dad708  ldr x8,[x0]
7101dad70c  ldr x8,[x8, #0x28]
7101dad710  b 0x7101dad71c
7101dad714  ldr x8,[x0]
7101dad718  ldr x8,[x8, #0x20]
7101dad71c  blr x8
7101dad720  ldr x0,[sp, #0x5f0]
7101dad724  add x8,sp,#0x540
7101dad728  add x8,x8,#0x90
7101dad72c  cmp x8,x0
7101dad730  b.eq 0x7101dad744
7101dad734  cbz x0,0x7101dad750
7101dad738  ldr x8,[x0]
7101dad73c  ldr x8,[x8, #0x28]
7101dad740  b 0x7101dad74c
7101dad744  ldr x8,[x0]
7101dad748  ldr x8,[x8, #0x20]
7101dad74c  blr x8
7101dad750  ldr x0,[sp, #0x5c0]
7101dad754  cmp x25,x0
7101dad758  b.eq 0x7101dad76c
7101dad75c  cbz x0,0x7101dad778
7101dad760  ldr x8,[x0]
7101dad764  ldr x8,[x8, #0x28]
7101dad768  b 0x7101dad774
7101dad76c  ldr x8,[x0]
7101dad770  ldr x8,[x8, #0x20]
7101dad774  blr x8
7101dad778  ldr x0,[sp, #0x590]
7101dad77c  add x8,sp,#0x540
7101dad780  add x8,x8,#0x30
7101dad784  cmp x8,x0
7101dad788  b.eq 0x7101dad79c
7101dad78c  cbz x0,0x7101dad7a8
7101dad790  ldr x8,[x0]
7101dad794  ldr x8,[x8, #0x28]
7101dad798  b 0x7101dad7a4
7101dad79c  ldr x8,[x0]
7101dad7a0  ldr x8,[x8, #0x20]
7101dad7a4  blr x8
7101dad7a8  ldr x0,[sp, #0x140]
7101dad7ac  add x8,sp,#0x30
7101dad7b0  add x8,x8,#0xf0
7101dad7b4  cmp x8,x0
7101dad7b8  b.eq 0x7101dad7cc
7101dad7bc  cbz x0,0x7101dad7d8
7101dad7c0  ldr x8,[x0]
7101dad7c4  ldr x8,[x8, #0x28]
7101dad7c8  b 0x7101dad7d4
7101dad7cc  ldr x8,[x0]
7101dad7d0  ldr x8,[x8, #0x20]
7101dad7d4  blr x8
7101dad7d8  ldr x0,[sp, #0x110]
7101dad7dc  add x8,sp,#0x30
7101dad7e0  add x8,x8,#0xc0
7101dad7e4  cmp x8,x0
7101dad7e8  b.eq 0x7101dad7fc
7101dad7ec  cbz x0,0x7101dad808
7101dad7f0  ldr x8,[x0]
7101dad7f4  ldr x8,[x8, #0x28]
7101dad7f8  b 0x7101dad804
7101dad7fc  ldr x8,[x0]
7101dad800  ldr x8,[x8, #0x20]
7101dad804  blr x8
7101dad808  ldr x0,[sp, #0xe0]
7101dad80c  add x8,sp,#0x30
7101dad810  add x8,x8,#0x90
7101dad814  cmp x8,x0
7101dad818  b.eq 0x7101dad82c
7101dad81c  cbz x0,0x7101dad838
7101dad820  ldr x8,[x0]
7101dad824  ldr x8,[x8, #0x28]
7101dad828  b 0x7101dad834
7101dad82c  ldr x8,[x0]
7101dad830  ldr x8,[x8, #0x20]
7101dad834  blr x8
7101dad838  ldr x0,[sp, #0xb0]
7101dad83c  cmp x24,x0
7101dad840  b.eq 0x7101dad860
7101dad844  adrp x24,0x710523d000
7101dad848  add x24,x24,#0x988
7101dad84c  cbz x0,0x7101dad874
7101dad850  ldr x8,[x0]
7101dad854  ldr x8,[x8, #0x28]
7101dad858  blr x8
7101dad85c  b 0x7101dad874
7101dad860  ldr x8,[x0]
7101dad864  ldr x8,[x8, #0x20]
7101dad868  blr x8
7101dad86c  adrp x24,0x710523d000
7101dad870  add x24,x24,#0x988
7101dad874  ldr x0,[sp, #0x80]
7101dad878  add x8,sp,#0x30
7101dad87c  add x8,x8,#0x30
7101dad880  cmp x8,x0
7101dad884  b.eq 0x7101dad898
7101dad888  cbz x0,0x7101dad8a4
7101dad88c  ldr x8,[x0]
7101dad890  ldr x8,[x8, #0x28]
7101dad894  b 0x7101dad8a0
7101dad898  ldr x8,[x0]
7101dad89c  ldr x8,[x8, #0x20]
7101dad8a0  blr x8
7101dad8a4  ldr w8,[x19, #0xe0]
7101dad8a8  cmp w8,#0x4
7101dad8ac  b.cs 0x7101daf198
7101dad8b0  mov w9,#0x54
7101dad8b4  madd x8,x8,x9,x19
7101dad8b8  add x0,x19,#0x98
7101dad8bc  add x1,x8,#0x268
7101dad8c0  bl 0x71025cae70
7101dad8c4  ldr w8,[x19, #0x428]
7101dad8c8  cmp w8,#0x2
7101dad8cc  b.eq 0x7101dad9a0
7101dad8d0  ldr x0,[x19, #0x58]
7101dad8d4  adrp x1,0x7104401000
7101dad8d8  add x1,x1,#0x98e
7101dad8dc  bl 0x7103778760
7101dad8e0  ldr x0,[x19, #0x48]
7101dad8e4  adrp x1,0x7104443000
7101dad8e8  add x1,x1,#0xc2a
7101dad8ec  bl 0x7103778760
7101dad8f0  fmov s8,0x3f800000
7101dad8f4  ldr x0,[x19, #0x48]
7101dad8f8  adrp x1,0x710432a000
7101dad8fc  add x1,x1,#0x4fc
7101dad900  mov v0.16B,v8.16B
7101dad904  bl 0x7103778300
7101dad908  adrp x1,0x71043e0000
7101dad90c  add x1,x1,#0x56e
7101dad910  add x8,sp,#0x30
7101dad914  mov x0,x21
7101dad918  bl 0x7103776640
7101dad91c  ldr x22,[sp, #0x38]
7101dad920  mov v0.16B,v8.16B
7101dad924  adrp x1,0x71043f0000
7101dad928  add x1,x1,#0xfa9
7101dad92c  mov x0,x22
7101dad930  bl 0x7103778300
7101dad934  stp x24,xzr,[sp, #0x30]
7101dad938  cbz x22,0x7101dad954
7101dad93c  ldr x0,[x22, #0x18]
7101dad940  stp x20,xzr,[x22, #0x10]
7101dad944  cbz x0,0x7101dad94c
7101dad948  bl 0x710392eb40
7101dad94c  mov x0,x22
7101dad950  bl 0x710392eb40
7101dad954  adrp x1,0x71042f8000
7101dad958  add x1,x1,#0x758
7101dad95c  add x8,sp,#0x30
7101dad960  mov x0,x21
7101dad964  bl 0x7103776640
7101dad968  ldr x22,[sp, #0x38]
7101dad96c  fmov s0,0x3f800000
7101dad970  adrp x1,0x71043f0000
7101dad974  add x1,x1,#0xfa9
7101dad978  mov x0,x22
7101dad97c  bl 0x7103778300
7101dad980  stp x24,xzr,[sp, #0x30]
7101dad984  cbz x22,0x7101dad9a0
7101dad988  ldr x0,[x22, #0x18]
7101dad98c  stp x20,xzr,[x22, #0x10]
7101dad990  cbz x0,0x7101dad998
7101dad994  bl 0x710392eb40
7101dad998  mov x0,x22
7101dad99c  bl 0x710392eb40
7101dad9a0  mov x0,x19
7101dad9a4  bl 0x7101da8880
7101dad9a8  mov w1,#0x1
7101dad9ac  mov x0,x19
7101dad9b0  bl 0x7101daf1a0
7101dad9b4  adrp x1,0x7104270000
7101dad9b8  add x1,x1,#0x384
7101dad9bc  add x8,sp,#0x1b0
7101dad9c0  mov x0,x21
7101dad9c4  bl 0x7103776640
7101dad9c8  ldr w8,[x19, #0x428]
7101dad9cc  ldr x22,[sp, #0x1b8]
7101dad9d0  cbz w8,0x7101dad9e0
7101dad9d4  adrp x1,0x7104422000
7101dad9d8  add x1,x1,#0x7a9
7101dad9dc  b 0x7101dad9e8
7101dad9e0  adrp x1,0x71043e0000
7101dad9e4  add x1,x1,#0x582
7101dad9e8  fmov s0,0x3f800000
7101dad9ec  mov x0,x22
7101dad9f0  bl 0x7103778300
7101dad9f4  ldr w8,[x19, #0x264]
7101dad9f8  sub w9,w8,#0x1
7101dad9fc  cmp w9,#0x3
7101dada00  csinc w1,w8,wzr,ls
7101dada04  adrp x0,0x71042d6000
7101dada08  add x0,x0,#0x6d3
7101dada0c  add x8,sp,#0x540
7101dada10  add x23,sp,#0x540
7101dada14  bl 0x71003a4ca0
7101dada18  ldr x0,[x19, #0x58]
7101dada1c  fmov s0,0x3f800000
7101dada20  add x1,x23,#0x8
7101dada24  bl 0x7103778300
7101dada28  ldr w8,[x19, #0xe0]
7101dada2c  cmp w8,#0x4
7101dada30  b.cs 0x7101daf198
7101dada34  add x8,x19,x8, LSL #0x4
7101dada38  ldr x8,[x8, #0x3b8]
7101dada3c  mov x26,#-0x3f00000000000000
7101dada40  and x9,x8,#-0x100000000000000
7101dada44  cmp x9,x26
7101dada48  b.ne 0x7101dae300
7101dada4c  and x8,x8,#0xffffffffff
7101dada50  cbz x8,0x7101dae300
7101dada54  adrp x1,0x7104308000
7101dada58  add x1,x1,#0xa92
7101dada5c  add x8,sp,#0x30
7101dada60  mov x0,x21
7101dada64  bl 0x7103776910
7101dada68  ldr x0,[sp, #0x38]
7101dada6c  ldr x8,[x0]
7101dada70  cbz x8,0x7101dada80
7101dada74  ldrb w9,[x8, #0x58]
7101dada78  orr w9,w9,#0x1
7101dada7c  strb w9,[x8, #0x58]
7101dada80  stp x20,xzr,[sp, #0x30]
7101dada84  cbz x0,0x7101dada8c
7101dada88  bl 0x710392eb40
7101dada8c  adrp x1,0x7104401000
7101dada90  add x1,x1,#0xd32
7101dada94  add x8,sp,#0x30
7101dada98  mov x0,x21
7101dada9c  bl 0x7103776910
7101dadaa0  ldr x0,[sp, #0x38]
7101dadaa4  ldr x8,[x0]
7101dadaa8  cbz x8,0x7101dadab8
7101dadaac  ldrb w9,[x8, #0x58]
7101dadab0  orr w9,w9,#0x1
7101dadab4  strb w9,[x8, #0x58]
7101dadab8  stp x20,xzr,[sp, #0x30]
7101dadabc  cbz x0,0x7101dadac4
7101dadac0  bl 0x710392eb40
7101dadac4  adrp x1,0x7104308000
7101dadac8  add x1,x1,#0x8da
7101dadacc  add x8,sp,#0x30
7101dadad0  mov x0,x21
7101dadad4  bl 0x7103776910
7101dadad8  ldr x0,[sp, #0x38]
7101dadadc  ldr x8,[x0]
7101dadae0  cbz x8,0x7101dadaf0
7101dadae4  ldrb w9,[x8, #0x58]
7101dadae8  orr w9,w9,#0x1
7101dadaec  strb w9,[x8, #0x58]
7101dadaf0  stp x20,xzr,[sp, #0x30]
7101dadaf4  cbz x0,0x7101dadafc
7101dadaf8  bl 0x710392eb40
7101dadafc  adrp x1,0x710439d000
7101dadb00  add x1,x1,#0x85b
7101dadb04  add x8,sp,#0x30
7101dadb08  mov x0,x21
7101dadb0c  bl 0x7103776910
7101dadb10  ldr x0,[sp, #0x38]
7101dadb14  ldr x8,[x0]
7101dadb18  cbz x8,0x7101dadb28
7101dadb1c  ldrb w9,[x8, #0x58]
7101dadb20  orr w9,w9,#0x1
7101dadb24  strb w9,[x8, #0x58]
7101dadb28  stp x20,xzr,[sp, #0x30]
7101dadb2c  cbz x0,0x7101dadb34
7101dadb30  bl 0x710392eb40
7101dadb34  adrp x1,0x710439d000
7101dadb38  add x1,x1,#0x86e
7101dadb3c  add x8,sp,#0x30
7101dadb40  mov x0,x21
7101dadb44  bl 0x7103776910
7101dadb48  ldr x0,[sp, #0x38]
7101dadb4c  ldr x8,[x0]
7101dadb50  cbz x8,0x7101dadb60
7101dadb54  ldrb w9,[x8, #0x58]
7101dadb58  orr w9,w9,#0x1
7101dadb5c  strb w9,[x8, #0x58]
7101dadb60  stp x20,xzr,[sp, #0x30]
7101dadb64  cbz x0,0x7101dadb6c
7101dadb68  bl 0x710392eb40
7101dadb6c  adrp x1,0x71042d4000
7101dadb70  add x1,x1,#0x25c
7101dadb74  add x8,sp,#0x30
7101dadb78  mov x0,x21
7101dadb7c  bl 0x7103776910
7101dadb80  ldr x0,[sp, #0x38]
7101dadb84  ldr x8,[x0]
7101dadb88  cbz x8,0x7101dadb98
7101dadb8c  ldrb w9,[x8, #0x58]
7101dadb90  orr w9,w9,#0x1
7101dadb94  strb w9,[x8, #0x58]
7101dadb98  stp x20,xzr,[sp, #0x30]
7101dadb9c  cbz x0,0x7101dadba4
7101dadba0  bl 0x710392eb40
7101dadba4  adrp x1,0x71042e7000
7101dadba8  add x1,x1,#0x665
7101dadbac  add x8,sp,#0x30
7101dadbb0  mov x0,x21
7101dadbb4  bl 0x7103776910
7101dadbb8  ldr x0,[sp, #0x38]
7101dadbbc  ldr x8,[x0]
7101dadbc0  cbz x8,0x7101dadbd0
7101dadbc4  ldrb w9,[x8, #0x58]
7101dadbc8  orr w9,w9,#0x1
7101dadbcc  strb w9,[x8, #0x58]
7101dadbd0  stp x20,xzr,[sp, #0x30]
7101dadbd4  cbz x0,0x7101dadbdc
7101dadbd8  bl 0x710392eb40
7101dadbdc  adrp x1,0x7104280000
7101dadbe0  add x1,x1,#0xee1
7101dadbe4  add x8,sp,#0x30
7101dadbe8  mov x0,x21
7101dadbec  bl 0x7103776910
7101dadbf0  ldr x0,[sp, #0x38]
7101dadbf4  ldr x8,[x0]
7101dadbf8  cbz x8,0x7101dadc08
7101dadbfc  ldrb w9,[x8, #0x58]
7101dadc00  orr w9,w9,#0x1
7101dadc04  strb w9,[x8, #0x58]
7101dadc08  stp x20,xzr,[sp, #0x30]
7101dadc0c  cbz x0,0x7101dadc14
7101dadc10  bl 0x710392eb40
7101dadc14  adrp x1,0x710433a000
7101dadc18  add x1,x1,#0x59a
7101dadc1c  add x8,sp,#0x30
7101dadc20  mov x0,x21
7101dadc24  bl 0x7103776910
7101dadc28  ldr x0,[sp, #0x38]
7101dadc2c  ldr x8,[x0]
7101dadc30  cbz x8,0x7101dadc40
7101dadc34  ldrb w9,[x8, #0x58]
7101dadc38  orr w9,w9,#0x1
7101dadc3c  strb w9,[x8, #0x58]
7101dadc40  stp x20,xzr,[sp, #0x30]
7101dadc44  cbz x0,0x7101dadc4c
7101dadc48  bl 0x710392eb40
7101dadc4c  adrp x1,0x7104433000
7101dadc50  add x1,x1,#0x8a1
7101dadc54  add x8,sp,#0x30
7101dadc58  mov x0,x21
7101dadc5c  bl 0x7103776910
7101dadc60  ldr x0,[sp, #0x38]
7101dadc64  ldr x8,[x0]
7101dadc68  cbz x8,0x7101dadc78
7101dadc6c  ldrb w9,[x8, #0x58]
7101dadc70  orr w9,w9,#0x1
7101dadc74  strb w9,[x8, #0x58]
7101dadc78  stp x20,xzr,[sp, #0x30]
7101dadc7c  cbz x0,0x7101dadc84
7101dadc80  bl 0x710392eb40
7101dadc84  adrp x1,0x71043cf000
7101dadc88  add x1,x1,#0x899
7101dadc8c  add x8,sp,#0x30
7101dadc90  mov x0,x21
7101dadc94  bl 0x7103776910
7101dadc98  ldr x0,[sp, #0x38]
7101dadc9c  ldr x8,[x0]
7101dadca0  cbz x8,0x7101dadcb0
7101dadca4  ldrb w9,[x8, #0x58]
7101dadca8  orr w9,w9,#0x1
7101dadcac  strb w9,[x8, #0x58]
7101dadcb0  stp x20,xzr,[sp, #0x30]
7101dadcb4  cbz x0,0x7101dadcbc
7101dadcb8  bl 0x710392eb40
7101dadcbc  adrp x1,0x7104270000
7101dadcc0  add x1,x1,#0x39a
7101dadcc4  add x8,sp,#0x30
7101dadcc8  mov x0,x21
7101dadccc  bl 0x7103776910
7101dadcd0  ldr x0,[sp, #0x38]
7101dadcd4  ldr x8,[x0]
7101dadcd8  cbz x8,0x7101dadce8
7101dadcdc  ldrb w9,[x8, #0x58]
7101dadce0  orr w9,w9,#0x1
7101dadce4  strb w9,[x8, #0x58]
7101dadce8  stp x20,xzr,[sp, #0x30]
7101dadcec  cbz x0,0x7101dadcf4
7101dadcf0  bl 0x710392eb40
7101dadcf4  adrp x1,0x71042d6000
7101dadcf8  add x1,x1,#0x6e3
7101dadcfc  add x8,sp,#0x30
7101dadd00  mov x0,x21
7101dadd04  bl 0x7103776910
7101dadd08  ldr x0,[sp, #0x38]
7101dadd0c  ldr x8,[x0]
7101dadd10  cbz x8,0x7101dadd20
7101dadd14  ldrb w9,[x8, #0x58]
7101dadd18  orr w9,w9,#0x1
7101dadd1c  strb w9,[x8, #0x58]
7101dadd20  stp x20,xzr,[sp, #0x30]
7101dadd24  cbz x0,0x7101dadd2c
7101dadd28  bl 0x710392eb40
7101dadd2c  fmov s0,0x3f800000
7101dadd30  adrp x1,0x710424f000
7101dadd34  add x1,x1,#0x98c
7101dadd38  mov x0,x22
7101dadd3c  bl 0x7103778300
7101dadd40  ldr w8,[x19, #0xe0]
7101dadd44  cmp w8,#0x4
7101dadd48  b.cs 0x7101daf198
7101dadd4c  adrp x28,0x710532f000
7101dadd50  ldr x9,[x28, #0x730]
7101dadd54  ldr x9,[x9, #0x8]
7101dadd58  add x25,x19,x8, LSL #0x4
7101dadd5c  ldr x23,[x25, #0x3b8]
7101dadd60  mov x1,x23
7101dadd64  ldr x24,[x9, #0x168]
7101dadd68  mov x0,x24
7101dadd6c  stur x9,[x29, #-0x58]
7101dadd70  bl 0x71032632a0
7101dadd74  tbz w0,#0x0,0x7101dadd90
7101dadd78  mov x1,#0xb807
7101dadd7c  movk x1,#0xb1cc, LSL #16
7101dadd80  mov x0,x24
7101dadd84  movk x1,#0x11, LSL #32
7101dadd88  bl 0x71032631a0
7101dadd8c  mov x23,x0
7101dadd90  ldrb w24,[x25, #0x3c0]
7101dadd94  orr w2,wzr,#0x3
7101dadd98  mov x0,x23
7101dadd9c  add x25,x19,#0x28
7101dadda0  mov w1,w24
7101dadda4  bl 0x7103238a70
7101dadda8  tst x0,#0xffffffffff
7101daddac  str x0,[sp, #0x30]
7101daddb0  b.eq 0x7101daddc8
7101daddb4  ldr x0,[x25]
7101daddb8  ldrsw x2,[x0, #0x70]
7101daddbc  ldr w3,[x0, #0x68]
7101daddc0  add x1,sp,#0x30
7101daddc4  bl 0x710323c4e0
7101daddc8  orr w3,wzr,#0x3
7101daddcc  mov x0,x25
7101daddd0  mov x1,x23
7101daddd4  mov w2,w24
7101daddd8  bl 0x710323f330
7101dadddc  mov x27,x0
7101dadde0  adrp x1,0x7104401000
7101dadde4  add x1,x1,#0xd32
7101dadde8  sub x8,x29,#0x78
7101daddec  mov x0,x21
7101daddf0  bl 0x7103776910
7101daddf4  adrp x1,0x7104308000
7101daddf8  add x1,x1,#0xa92
7101daddfc  sub x8,x29,#0x88
7101dade00  mov x0,x21
7101dade04  bl 0x7103776910
7101dade08  ldur x0,[x29, #-0x70]
7101dade0c  mov x1,x27
7101dade10  bl 0x7103778b80
7101dade14  ldur x0,[x29, #-0x80]
7101dade18  mov x1,x27
7101dade1c  bl 0x7103778b80
7101dade20  ldr x8,[x19, #0x3b8]
7101dade24  and x9,x8,#-0x100000000000000
7101dade28  mov w27,wzr
7101dade2c  cmp x9,x26
7101dade30  b.ne 0x7101dadebc
7101dade34  and x8,x8,#0xffffffffff
7101dade38  cbz x8,0x7101dadebc
7101dade3c  adrp x1,0x710433a000
7101dade40  add x1,x1,#0x5a7
7101dade44  add x8,sp,#0x30
7101dade48  mov w2,#0x1
7101dade4c  mov x0,x21
7101dade50  bl 0x7103776910
7101dade54  ldr x0,[x19, #0x3b8]
7101dade58  ldrb w1,[x19, #0x3c0]
7101dade5c  mov w2,#0x2
7101dade60  bl 0x7103238a70
7101dade64  tst x0,#0xffffffffff
7101dade68  str x0,[sp, #0x410]
7101dade6c  b.eq 0x7101dade84
7101dade70  ldr x0,[x25]
7101dade74  ldrsw x2,[x0, #0x70]
7101dade78  ldr w3,[x0, #0x68]
7101dade7c  add x1,sp,#0x410
7101dade80  bl 0x710323c4e0
7101dade84  ldr x1,[x19, #0x3b8]
7101dade88  ldrb w2,[x19, #0x3c0]
7101dade8c  mov w3,#0x2
7101dade90  mov x0,x25
7101dade94  bl 0x710323f330
7101dade98  ldr x27,[sp, #0x38]
7101dade9c  mov x1,x0
7101dadea0  mov x0,x27
7101dadea4  bl 0x7103778b80
7101dadea8  stp x20,xzr,[sp, #0x30]
7101dadeac  cbz x27,0x7101dadeb8
7101dadeb0  mov x0,x27
7101dadeb4  bl 0x710392eb40
7101dadeb8  mov w27,#0x1
7101dadebc  ldr x8,[x19, #0x3c8]
7101dadec0  and x9,x8,#-0x100000000000000
7101dadec4  cmp x9,x26
7101dadec8  b.ne 0x7101dadf60
7101dadecc  and x8,x8,#0xffffffffff
7101daded0  cbz x8,0x7101dadf60
7101daded4  add w27,w27,#0x1
7101daded8  adrp x1,0x710433a000
7101dadedc  add x1,x1,#0x5a7
7101dadee0  add x8,sp,#0x30
7101dadee4  mov x0,x21
7101dadee8  mov w2,w27
7101dadeec  mov x26,x28
7101dadef0  bl 0x7103776910
7101dadef4  ldr x0,[x19, #0x3c8]
7101dadef8  ldrb w1,[x19, #0x3d0]
7101dadefc  mov w2,#0x2
7101dadf00  bl 0x7103238a70
7101dadf04  tst x0,#0xffffffffff
7101dadf08  str x0,[sp, #0x410]
7101dadf0c  b.eq 0x7101dadf24
7101dadf10  ldr x0,[x25]
7101dadf14  ldrsw x2,[x0, #0x70]
7101dadf18  ldr w3,[x0, #0x68]
7101dadf1c  add x1,sp,#0x410
7101dadf20  bl 0x710323c4e0
7101dadf24  ldr x1,[x19, #0x3c8]
7101dadf28  ldrb w2,[x19, #0x3d0]
7101dadf2c  mov w3,#0x2
7101dadf30  mov x0,x25
7101dadf34  bl 0x710323f330
7101dadf38  ldr x28,[sp, #0x38]
7101dadf3c  mov x1,x0
7101dadf40  mov x0,x28
7101dadf44  bl 0x7103778b80
7101dadf48  stp x20,xzr,[sp, #0x30]
7101dadf4c  cbz x28,0x7101dadf58
7101dadf50  mov x0,x28
7101dadf54  bl 0x710392eb40
7101dadf58  mov x28,x26
7101dadf5c  mov x26,#-0x3f00000000000000
7101dadf60  ldr x8,[x19, #0x3d8]
7101dadf64  and x9,x8,#-0x100000000000000
7101dadf68  cmp x9,x26
7101dadf6c  b.ne 0x7101dae020
7101dadf70  and x8,x8,#0xffffffffff
7101dadf74  cbz x8,0x7101dae020
7101dadf78  add w27,w27,#0x1
7101dadf7c  adrp x1,0x710433a000
7101dadf80  add x1,x1,#0x5a7
7101dadf84  add x8,sp,#0x30
7101dadf88  mov x0,x21
7101dadf8c  mov w2,w27
7101dadf90  mov w20,w24
7101dadf94  mov x24,x26
7101dadf98  mov x26,x28
7101dadf9c  bl 0x7103776910
7101dadfa0  ldr x0,[x19, #0x3d8]
7101dadfa4  ldrb w1,[x19, #0x3e0]
7101dadfa8  mov w2,#0x2
7101dadfac  bl 0x7103238a70
7101dadfb0  tst x0,#0xffffffffff
7101dadfb4  str x0,[sp, #0x410]
7101dadfb8  b.eq 0x7101dadfd0
7101dadfbc  ldr x0,[x25]
7101dadfc0  ldrsw x2,[x0, #0x70]
7101dadfc4  ldr w3,[x0, #0x68]
7101dadfc8  add x1,sp,#0x410
7101dadfcc  bl 0x710323c4e0
7101dadfd0  ldr x1,[x19, #0x3d8]
7101dadfd4  ldrb w2,[x19, #0x3e0]
7101dadfd8  mov w3,#0x2
7101dadfdc  mov x0,x25
7101dadfe0  bl 0x710323f330
7101dadfe4  ldr x28,[sp, #0x38]
7101dadfe8  mov x1,x0
7101dadfec  mov x0,x28
7101dadff0  bl 0x7103778b80
7101dadff4  adrp x8,0x710523d000
7101dadff8  add x8,x8,#0x9a8
7101dadffc  stp x8,xzr,[sp, #0x30]
7101dae000  cbz x28,0x7101dae00c
7101dae004  mov x0,x28
7101dae008  bl 0x710392eb40
7101dae00c  mov x28,x26
7101dae010  mov x26,x24
7101dae014  mov w24,w20
7101dae018  adrp x20,0x710523d000
7101dae01c  add x20,x20,#0x9a8
7101dae020  ldr x8,[x19, #0x3e8]
7101dae024  and x9,x8,#-0x100000000000000
7101dae028  cmp x9,x26
7101dae02c  b.ne 0x7101dae0b4
7101dae030  and x8,x8,#0xffffffffff
7101dae034  cbz x8,0x7101dae0b4
7101dae038  add w2,w27,#0x1
7101dae03c  adrp x1,0x710433a000
7101dae040  add x1,x1,#0x5a7
7101dae044  add x8,sp,#0x30
7101dae048  mov x0,x21
7101dae04c  bl 0x7103776910
7101dae050  ldr x0,[x19, #0x3e8]
7101dae054  ldrb w1,[x19, #0x3f0]
7101dae058  mov w2,#0x2
7101dae05c  bl 0x7103238a70
7101dae060  tst x0,#0xffffffffff
7101dae064  str x0,[sp, #0x410]
7101dae068  b.eq 0x7101dae080
7101dae06c  ldr x0,[x25]
7101dae070  ldrsw x2,[x0, #0x70]
7101dae074  ldr w3,[x0, #0x68]
7101dae078  add x1,sp,#0x410
7101dae07c  bl 0x710323c4e0
7101dae080  ldr x1,[x19, #0x3e8]
7101dae084  ldrb w2,[x19, #0x3f0]
7101dae088  mov w3,#0x2
7101dae08c  mov x0,x25
7101dae090  bl 0x710323f330
7101dae094  ldr x27,[sp, #0x38]
7101dae098  mov x1,x0
7101dae09c  mov x0,x27
7101dae0a0  bl 0x7103778b80
7101dae0a4  stp x20,xzr,[sp, #0x30]
7101dae0a8  cbz x27,0x7101dae0b4
7101dae0ac  mov x0,x27
7101dae0b0  bl 0x710392eb40
7101dae0b4  ldr x8,[x28, #0x730]
7101dae0b8  ldr x28,[x8, #0x8]
7101dae0bc  ldr w8,[x19, #0x428]
7101dae0c0  cmp w8,#0x3
7101dae0c4  b.ne 0x7101dae5f8
7101dae0c8  fmov s0,0x3f800000
7101dae0cc  adrp x1,0x71042d6000
7101dae0d0  add x1,x1,#0x6f8
7101dae0d4  mov x0,x22
7101dae0d8  bl 0x7103778300
7101dae0dc  ldur x8,[x29, #-0x58]
7101dae0e0  ldr x22,[x19, #0x3b8]
7101dae0e4  mov x1,x22
7101dae0e8  ldr x27,[x8, #0x168]
7101dae0ec  mov x0,x27
7101dae0f0  bl 0x71032632a0
7101dae0f4  tbz w0,#0x0,0x7101dae110
7101dae0f8  mov x1,#0xb807
7101dae0fc  movk x1,#0xb1cc, LSL #16
7101dae100  mov x0,x27
7101dae104  movk x1,#0x11, LSL #32
7101dae108  bl 0x71032631a0
7101dae10c  mov x22,x0
7101dae110  ldrb w27,[x19, #0x3c0]
7101dae114  mov x0,x22
7101dae118  mov w1,w27
7101dae11c  mov w2,wzr
7101dae120  bl 0x7103238a70
7101dae124  tst x0,#0xffffffffff
7101dae128  str x0,[sp, #0x30]
7101dae12c  b.eq 0x7101dae144
7101dae130  ldr x0,[x25]
7101dae134  ldrsw x2,[x0, #0x70]
7101dae138  ldr w3,[x0, #0x68]
7101dae13c  add x1,sp,#0x30
7101dae140  bl 0x710323c4e0
7101dae144  mov x0,x25
7101dae148  mov x1,x22
7101dae14c  mov w2,w27
7101dae150  mov w3,wzr
7101dae154  bl 0x710323f330
7101dae158  mov x27,x0
7101dae15c  adrp x1,0x71042e7000
7101dae160  add x1,x1,#0x67e
7101dae164  add x8,sp,#0x30
7101dae168  add x0,sp,#0x1b0
7101dae16c  bl 0x7103776910
7101dae170  ldr x22,[sp, #0x38]
7101dae174  mov x0,x22
7101dae178  mov x1,x27
7101dae17c  bl 0x7103778b80
7101dae180  stp x20,xzr,[sp, #0x30]
7101dae184  cbz x22,0x7101dae190
7101dae188  mov x0,x22
7101dae18c  bl 0x710392eb40
7101dae190  ldur x8,[x29, #-0x58]
7101dae194  ldr x22,[x19, #0x3c8]
7101dae198  mov x1,x22
7101dae19c  ldr x27,[x8, #0x168]
7101dae1a0  mov x0,x27
7101dae1a4  bl 0x71032632a0
7101dae1a8  tbz w0,#0x0,0x7101dae1c4
7101dae1ac  mov x1,#0xb807
7101dae1b0  movk x1,#0xb1cc, LSL #16
7101dae1b4  mov x0,x27
7101dae1b8  movk x1,#0x11, LSL #32
7101dae1bc  bl 0x71032631a0
7101dae1c0  mov x22,x0
7101dae1c4  ldrb w27,[x19, #0x3d0]
7101dae1c8  mov x0,x22
7101dae1cc  mov w1,w27
7101dae1d0  mov w2,wzr
7101dae1d4  bl 0x7103238a70
7101dae1d8  tst x0,#0xffffffffff
7101dae1dc  str x0,[sp, #0x30]
7101dae1e0  b.eq 0x7101dae1f8
7101dae1e4  ldr x0,[x25]
7101dae1e8  ldrsw x2,[x0, #0x70]
7101dae1ec  ldr w3,[x0, #0x68]
7101dae1f0  add x1,sp,#0x30
7101dae1f4  bl 0x710323c4e0
7101dae1f8  mov x0,x25
7101dae1fc  mov x1,x22
7101dae200  mov w2,w27
7101dae204  mov w3,wzr
7101dae208  bl 0x710323f330
7101dae20c  mov x27,x0
7101dae210  adrp x1,0x7104280000
7101dae214  add x1,x1,#0xef6
7101dae218  add x8,sp,#0x30
7101dae21c  add x0,sp,#0x1b0
7101dae220  bl 0x7103776910
7101dae224  ldr x22,[sp, #0x38]
7101dae228  mov x0,x22
7101dae22c  mov x1,x27
7101dae230  bl 0x7103778b80
7101dae234  stp x20,xzr,[sp, #0x30]
7101dae238  cbz x22,0x7101dae244
7101dae23c  mov x0,x22
7101dae240  bl 0x710392eb40
7101dae244  ldur x8,[x29, #-0x58]
7101dae248  ldr x22,[x19, #0x3d8]
7101dae24c  mov x1,x22
7101dae250  ldr x27,[x8, #0x168]
7101dae254  mov x0,x27
7101dae258  bl 0x71032632a0
7101dae25c  tbz w0,#0x0,0x7101dae278
7101dae260  mov x1,#0xb807
7101dae264  movk x1,#0xb1cc, LSL #16
7101dae268  mov x0,x27
7101dae26c  movk x1,#0x11, LSL #32
7101dae270  bl 0x71032631a0
7101dae274  mov x22,x0
7101dae278  ldrb w26,[x19, #0x3e0]
7101dae27c  mov x0,x22
7101dae280  mov w1,w26
7101dae284  mov w2,wzr
7101dae288  bl 0x7103238a70
7101dae28c  tst x0,#0xffffffffff
7101dae290  str x0,[sp, #0x30]
7101dae294  b.eq 0x7101dae2ac
7101dae298  ldr x0,[x25]
7101dae29c  ldrsw x2,[x0, #0x70]
7101dae2a0  ldr w3,[x0, #0x68]
7101dae2a4  add x1,sp,#0x30
7101dae2a8  bl 0x710323c4e0
7101dae2ac  mov x0,x25
7101dae2b0  mov x1,x22
7101dae2b4  mov w2,w26
7101dae2b8  mov w3,wzr
7101dae2bc  bl 0x710323f330
7101dae2c0  mov x26,x0
7101dae2c4  adrp x1,0x7104319000
7101dae2c8  add x1,x1,#0x303
7101dae2cc  add x8,sp,#0x30
7101dae2d0  add x0,sp,#0x1b0
7101dae2d4  bl 0x7103776910
7101dae2d8  ldr x22,[sp, #0x38]
7101dae2dc  mov x0,x22
7101dae2e0  mov x1,x26
7101dae2e4  bl 0x7103778b80
7101dae2e8  stp x20,xzr,[sp, #0x30]
7101dae2ec  cbz x22,0x7101dae2f8
7101dae2f0  mov x0,x22
7101dae2f4  bl 0x710392eb40
7101dae2f8  add x26,x28,#0x2a8
7101dae2fc  b 0x7101dae7cc
7101dae300  adrp x1,0x7104308000
7101dae304  add x1,x1,#0xa92
7101dae308  add x8,sp,#0x30
7101dae30c  mov x0,x21
7101dae310  bl 0x7103776910
7101dae314  ldr x0,[sp, #0x38]
7101dae318  ldr x8,[x0]
7101dae31c  cbz x8,0x7101dae32c
7101dae320  ldrb w9,[x8, #0x58]
7101dae324  and w9,w9,#0xfe
7101dae328  strb w9,[x8, #0x58]
7101dae32c  stp x20,xzr,[sp, #0x30]
7101dae330  cbz x0,0x7101dae338
7101dae334  bl 0x710392eb40
7101dae338  adrp x1,0x7104401000
7101dae33c  add x1,x1,#0xd32
7101dae340  add x8,sp,#0x30
7101dae344  mov x0,x21
7101dae348  bl 0x7103776910
7101dae34c  ldr x0,[sp, #0x38]
7101dae350  ldr x8,[x0]
7101dae354  cbz x8,0x7101dae364
7101dae358  ldrb w9,[x8, #0x58]
7101dae35c  and w9,w9,#0xfe
7101dae360  strb w9,[x8, #0x58]
7101dae364  stp x20,xzr,[sp, #0x30]
7101dae368  cbz x0,0x7101dae370
7101dae36c  bl 0x710392eb40
7101dae370  adrp x1,0x7104308000
7101dae374  add x1,x1,#0x8da
7101dae378  add x8,sp,#0x30
7101dae37c  mov x0,x21
7101dae380  bl 0x7103776910
7101dae384  ldr x0,[sp, #0x38]
7101dae388  ldr x8,[x0]
7101dae38c  cbz x8,0x7101dae39c
7101dae390  ldrb w9,[x8, #0x58]
7101dae394  and w9,w9,#0xfe
7101dae398  strb w9,[x8, #0x58]
7101dae39c  stp x20,xzr,[sp, #0x30]
7101dae3a0  cbz x0,0x7101dae3a8
7101dae3a4  bl 0x710392eb40
7101dae3a8  adrp x1,0x710439d000
7101dae3ac  add x1,x1,#0x85b
7101dae3b0  add x8,sp,#0x30
7101dae3b4  mov x0,x21
7101dae3b8  bl 0x7103776910
7101dae3bc  ldr x0,[sp, #0x38]
7101dae3c0  ldr x8,[x0]
7101dae3c4  cbz x8,0x7101dae3d4
7101dae3c8  ldrb w9,[x8, #0x58]
7101dae3cc  and w9,w9,#0xfe
7101dae3d0  strb w9,[x8, #0x58]
7101dae3d4  stp x20,xzr,[sp, #0x30]
7101dae3d8  cbz x0,0x7101dae3e0
7101dae3dc  bl 0x710392eb40
7101dae3e0  adrp x1,0x710439d000
7101dae3e4  add x1,x1,#0x86e
7101dae3e8  add x8,sp,#0x30
7101dae3ec  mov x0,x21
7101dae3f0  bl 0x7103776910
7101dae3f4  ldr x0,[sp, #0x38]
7101dae3f8  ldr x8,[x0]
7101dae3fc  cbz x8,0x7101dae40c
7101dae400  ldrb w9,[x8, #0x58]
7101dae404  and w9,w9,#0xfe
7101dae408  strb w9,[x8, #0x58]
7101dae40c  stp x20,xzr,[sp, #0x30]
7101dae410  cbz x0,0x7101dae418
7101dae414  bl 0x710392eb40
7101dae418  adrp x1,0x71042d4000
7101dae41c  add x1,x1,#0x25c
7101dae420  add x8,sp,#0x30
7101dae424  mov x0,x21
7101dae428  bl 0x7103776910
7101dae42c  ldr x0,[sp, #0x38]
7101dae430  ldr x8,[x0]
7101dae434  cbz x8,0x7101dae444
7101dae438  ldrb w9,[x8, #0x58]
7101dae43c  and w9,w9,#0xfe
7101dae440  strb w9,[x8, #0x58]
7101dae444  stp x20,xzr,[sp, #0x30]
7101dae448  cbz x0,0x7101dae450
7101dae44c  bl 0x710392eb40
7101dae450  adrp x1,0x71042e7000
7101dae454  add x1,x1,#0x665
7101dae458  add x8,sp,#0x30
7101dae45c  mov x0,x21
7101dae460  bl 0x7103776910
7101dae464  ldr x0,[sp, #0x38]
7101dae468  ldr x8,[x0]
7101dae46c  cbz x8,0x7101dae47c
7101dae470  ldrb w9,[x8, #0x58]
7101dae474  and w9,w9,#0xfe
7101dae478  strb w9,[x8, #0x58]
7101dae47c  stp x20,xzr,[sp, #0x30]
7101dae480  cbz x0,0x7101dae488
7101dae484  bl 0x710392eb40
7101dae488  adrp x1,0x7104280000
7101dae48c  add x1,x1,#0xee1
7101dae490  add x8,sp,#0x30
7101dae494  mov x0,x21
7101dae498  bl 0x7103776910
7101dae49c  ldr x0,[sp, #0x38]
7101dae4a0  ldr x8,[x0]
7101dae4a4  cbz x8,0x7101dae4b4
7101dae4a8  ldrb w9,[x8, #0x58]
7101dae4ac  and w9,w9,#0xfe
7101dae4b0  strb w9,[x8, #0x58]
7101dae4b4  stp x20,xzr,[sp, #0x30]
7101dae4b8  cbz x0,0x7101dae4c0
7101dae4bc  bl 0x710392eb40
7101dae4c0  adrp x1,0x710433a000
7101dae4c4  add x1,x1,#0x59a
7101dae4c8  add x8,sp,#0x30
7101dae4cc  mov x0,x21
7101dae4d0  bl 0x7103776910
7101dae4d4  ldr x0,[sp, #0x38]
7101dae4d8  ldr x8,[x0]
7101dae4dc  cbz x8,0x7101dae4ec
7101dae4e0  ldrb w9,[x8, #0x58]
7101dae4e4  and w9,w9,#0xfe
7101dae4e8  strb w9,[x8, #0x58]
7101dae4ec  stp x20,xzr,[sp, #0x30]
7101dae4f0  cbz x0,0x7101dae4f8
7101dae4f4  bl 0x710392eb40
7101dae4f8  adrp x1,0x7104433000
7101dae4fc  add x1,x1,#0x8a1
7101dae500  add x8,sp,#0x30
7101dae504  mov x0,x21
7101dae508  bl 0x7103776910
7101dae50c  ldr x0,[sp, #0x38]
7101dae510  ldr x8,[x0]
7101dae514  cbz x8,0x7101dae524
7101dae518  ldrb w9,[x8, #0x58]
7101dae51c  and w9,w9,#0xfe
7101dae520  strb w9,[x8, #0x58]
7101dae524  stp x20,xzr,[sp, #0x30]
7101dae528  cbz x0,0x7101dae530
7101dae52c  bl 0x710392eb40
7101dae530  adrp x1,0x71043cf000
7101dae534  add x1,x1,#0x899
7101dae538  add x8,sp,#0x30
7101dae53c  mov x0,x21
7101dae540  bl 0x7103776910
7101dae544  ldr x0,[sp, #0x38]
7101dae548  ldr x8,[x0]
7101dae54c  cbz x8,0x7101dae55c
7101dae550  ldrb w9,[x8, #0x58]
7101dae554  and w9,w9,#0xfe
7101dae558  strb w9,[x8, #0x58]
7101dae55c  stp x20,xzr,[sp, #0x30]
7101dae560  cbz x0,0x7101dae568
7101dae564  bl 0x710392eb40
7101dae568  adrp x1,0x7104270000
7101dae56c  add x1,x1,#0x39a
7101dae570  add x8,sp,#0x30
7101dae574  mov x0,x21
7101dae578  bl 0x7103776910
7101dae57c  ldr x0,[sp, #0x38]
7101dae580  ldr x8,[x0]
7101dae584  cbz x8,0x7101dae594
7101dae588  ldrb w9,[x8, #0x58]
7101dae58c  and w9,w9,#0xfe
7101dae590  strb w9,[x8, #0x58]
7101dae594  stp x20,xzr,[sp, #0x30]
7101dae598  cbz x0,0x7101dae5a0
7101dae59c  bl 0x710392eb40
7101dae5a0  adrp x1,0x71042d6000
7101dae5a4  add x1,x1,#0x6e3
7101dae5a8  add x8,sp,#0x30
7101dae5ac  mov x0,x21
7101dae5b0  bl 0x7103776910
7101dae5b4  ldr x0,[sp, #0x38]
7101dae5b8  ldr x8,[x0]
7101dae5bc  cbz x8,0x7101dae5cc
7101dae5c0  ldrb w9,[x8, #0x58]
7101dae5c4  and w9,w9,#0xfe
7101dae5c8  strb w9,[x8, #0x58]
7101dae5cc  stp x20,xzr,[sp, #0x30]
7101dae5d0  cbz x0,0x7101dae5d8
7101dae5d4  bl 0x710392eb40
7101dae5d8  fmov s0,0x3f800000
7101dae5dc  adrp x1,0x7104443000
7101dae5e0  add x1,x1,#0xc1f
7101dae5e4  mov x0,x22
7101dae5e8  bl 0x7103778300
7101dae5ec  stp x24,xzr,[sp, #0x1b0]
7101dae5f0  cbnz x22,0x7101daedc0
7101dae5f4  b 0x7101daedd8
7101dae5f8  fmov s0,0x3f800000
7101dae5fc  adrp x1,0x7104422000
7101dae600  add x1,x1,#0x7b0
7101dae604  mov x0,x22
7101dae608  bl 0x7103778300
7101dae60c  mov x0,x23
7101dae610  mov w1,w24
7101dae614  mov w2,wzr
7101dae618  bl 0x7103238a70
7101dae61c  tst x0,#0xffffffffff
7101dae620  str x0,[sp, #0x30]
7101dae624  b.eq 0x7101dae63c
7101dae628  ldr x0,[x25]
7101dae62c  ldrsw x2,[x0, #0x70]
7101dae630  ldr w3,[x0, #0x68]
7101dae634  add x1,sp,#0x30
7101dae638  bl 0x710323c4e0
7101dae63c  mov x0,x25
7101dae640  mov x1,x23
7101dae644  mov w2,w24
7101dae648  mov w3,wzr
7101dae64c  bl 0x710323f330
7101dae650  mov x26,x0
7101dae654  adrp x1,0x7104401000
7101dae658  add x1,x1,#0xd32
7101dae65c  add x8,sp,#0x410
7101dae660  add x0,sp,#0x1b0
7101dae664  bl 0x7103776910
7101dae668  ldr x22,[sp, #0x418]
7101dae66c  mov x0,x22
7101dae670  mov x1,x26
7101dae674  bl 0x7103778b80
7101dae678  ldr x0,[x28, #0x2a8]
7101dae67c  mov x1,x23
7101dae680  mov w2,w24
7101dae684  bl 0x7103280ec0
7101dae688  ldr x8,[x28, #0x2a8]
7101dae68c  fmov s8,wzr
7101dae690  mov v0.16B,v8.16B
7101dae694  mov x2,#0x9b76
7101dae698  movk x2,#0x9ad9, LSL #16
7101dae69c  movk x2,#0x10, LSL #32
7101dae6a0  ldr x27,[x8, #0x8]
7101dae6a4  mov w26,w0
7101dae6a8  mov x0,x27
7101dae6ac  mov w1,w26
7101dae6b0  bl 0x710326ad60
7101dae6b4  str d0,[sp, #0x10]
7101dae6b8  mov v0.16B,v8.16B
7101dae6bc  mov x2,#0xabe0
7101dae6c0  movk x2,#0xedde, LSL #16
7101dae6c4  movk x2,#0x10, LSL #32
7101dae6c8  mov x0,x27
7101dae6cc  mov w1,w26
7101dae6d0  bl 0x710326ad60
7101dae6d4  str d0,[sp]
7101dae6d8  fmov s0,0x3f800000
7101dae6dc  mov x2,#0x4fdd
7101dae6e0  movk x2,#0x4934, LSL #16
7101dae6e4  movk x2,#0xd, LSL #32
7101dae6e8  mov x0,x27
7101dae6ec  mov w1,w26
7101dae6f0  bl 0x710326ad60
7101dae6f4  mov w0,#0x10
7101dae6f8  mov w1,#0x20
7101dae6fc  mov v8.16B,v0.16B
7101dae700  bl 0x710392e290
7101dae704  mov x26,x0
7101dae708  cbnz x0,0x7101dae754
7101dae70c  adrp x8,0x7105332000
7101dae710  ldr x0,[x8, #0xf00]
7101dae714  cbz x0,0x7101dae750
7101dae718  mov w8,#0x20
7101dae71c  str wzr,[sp, #0x2e0]
7101dae720  add x1,sp,#0x2e0
7101dae724  str x8,[sp, #0x30]
7101dae728  ldr x8,[x0]
7101dae72c  ldr x8,[x8, #0x30]
7101dae730  add x2,sp,#0x30
7101dae734  blr x8
7101dae738  tbz w0,#0x0,0x7101dae750
7101dae73c  mov w0,#0x10
7101dae740  mov w1,#0x20
7101dae744  bl 0x710392e290
7101dae748  mov x26,x0
7101dae74c  cbnz x0,0x7101dae754
7101dae750  mov x26,xzr
7101dae754  stp xzr,xzr,[x26, #0x10]
7101dae758  movi v0.2D,#0x0
7101dae75c  stp xzr,xzr,[x26]
7101dae760  ldr x8,[x22]
7101dae764  ldr q1,[sp, #0x10]
7101dae768  mov v0.S[0x0],v1.S[0x0]
7101dae76c  str x8,[x26]
7101dae770  ldr x8,[x22, #0x8]
7101dae774  str x8,[x26, #0x8]
7101dae778  ldr x22,[sp, #0x418]
7101dae77c  ldr q1,[sp]
7101dae780  ldr x8,[x22, #0x10]
7101dae784  mov v0.S[0x1],v1.S[0x0]
7101dae788  str x8,[x26, #0x10]
7101dae78c  ldr x8,[x22, #0x18]
7101dae790  str x8,[x26, #0x18]
7101dae794  add x1,sp,#0x30
7101dae798  str q0,[sp, #0x30]
7101dae79c  mov v0.16B,v8.16B
7101dae7a0  mov x0,x26
7101dae7a4  bl 0x7103779770
7101dae7a8  cbz x26,0x7101dae7b4
7101dae7ac  mov x0,x26
7101dae7b0  bl 0x710392eb40
7101dae7b4  add x26,x28,#0x2a8
7101dae7b8  str x20,[sp, #0x410]
7101dae7bc  str xzr,[sp, #0x418]
7101dae7c0  cbz x22,0x7101dae7cc
7101dae7c4  mov x0,x22
7101dae7c8  bl 0x710392eb40
7101dae7cc  ldr x0,[x26]
7101dae7d0  mov x1,x23
7101dae7d4  mov w2,w24
7101dae7d8  bl 0x7103280ec0
7101dae7dc  ldr x8,[x26]
7101dae7e0  fmov s8,wzr
7101dae7e4  mov v0.16B,v8.16B
7101dae7e8  mov x2,#0x3aee
7101dae7ec  movk x2,#0x91e, LSL #16
7101dae7f0  movk x2,#0x12, LSL #32
7101dae7f4  ldr x26,[x8, #0x8]
7101dae7f8  mov w22,w0
7101dae7fc  mov x0,x26
7101dae800  mov w1,w22
7101dae804  bl 0x710326ad60
7101dae808  str d0,[sp, #0x10]
7101dae80c  mov v0.16B,v8.16B
7101dae810  mov x2,#0xa78
7101dae814  movk x2,#0x7e19, LSL #16
7101dae818  movk x2,#0x12, LSL #32
7101dae81c  mov x0,x26
7101dae820  mov w1,w22
7101dae824  bl 0x710326ad60
7101dae828  str d0,[sp]
7101dae82c  fmov s0,0x3f800000
7101dae830  mov x2,#0xe57b
7101dae834  movk x2,#0x1d20, LSL #16
7101dae838  movk x2,#0xf, LSL #32
7101dae83c  mov x0,x26
7101dae840  mov w1,w22
7101dae844  bl 0x710326ad60
7101dae848  mov w0,#0x10
7101dae84c  mov w1,#0x20
7101dae850  mov v8.16B,v0.16B
7101dae854  bl 0x710392e290
7101dae858  mov x22,x0
7101dae85c  cbnz x0,0x7101dae8a8
7101dae860  adrp x8,0x7105332000
7101dae864  ldr x0,[x8, #0xf00]
7101dae868  cbz x0,0x7101dae8a4
7101dae86c  mov w8,#0x20
7101dae870  str wzr,[sp, #0x410]
7101dae874  add x1,sp,#0x410
7101dae878  str x8,[sp, #0x30]
7101dae87c  ldr x8,[x0]
7101dae880  ldr x8,[x8, #0x30]
7101dae884  add x2,sp,#0x30
7101dae888  blr x8
7101dae88c  tbz w0,#0x0,0x7101dae8a4
7101dae890  mov w0,#0x10
7101dae894  mov w1,#0x20
7101dae898  bl 0x710392e290
7101dae89c  mov x22,x0
7101dae8a0  cbnz x0,0x7101dae8a8
7101dae8a4  mov x22,xzr
7101dae8a8  stp xzr,xzr,[x22, #0x10]
7101dae8ac  movi v1.2D,#0x0
7101dae8b0  stp xzr,xzr,[x22]
7101dae8b4  ldur x8,[x29, #-0x70]
7101dae8b8  ldr x9,[x8]
7101dae8bc  ldr q0,[sp, #0x10]
7101dae8c0  str x9,[x22]
7101dae8c4  mov v1.S[0x0],v0.S[0x0]
7101dae8c8  ldr q0,[sp]
7101dae8cc  ldr x8,[x8, #0x8]
7101dae8d0  str x8,[x22, #0x8]
7101dae8d4  ldur x8,[x29, #-0x70]
7101dae8d8  mov v1.S[0x1],v0.S[0x0]
7101dae8dc  mov v0.16B,v8.16B
7101dae8e0  ldr x9,[x8, #0x10]
7101dae8e4  str x9,[x22, #0x10]
7101dae8e8  ldr x8,[x8, #0x18]
7101dae8ec  add x1,sp,#0x30
7101dae8f0  mov x0,x22
7101dae8f4  str x8,[x22, #0x18]
7101dae8f8  str q1,[sp, #0x10]
7101dae8fc  str q1,[sp, #0x30]
7101dae900  bl 0x7103779770
7101dae904  cbz x22,0x7101dae910
7101dae908  mov x0,x22
7101dae90c  bl 0x710392eb40
7101dae910  mov w0,#0x10
7101dae914  mov w1,#0x20
7101dae918  bl 0x710392e290
7101dae91c  mov x26,x0
7101dae920  cbnz x0,0x7101dae96c
7101dae924  adrp x8,0x7105332000
7101dae928  ldr x0,[x8, #0xf00]
7101dae92c  cbz x0,0x7101dae968
7101dae930  mov w8,#0x20
7101dae934  str wzr,[sp, #0x410]
7101dae938  add x1,sp,#0x410
7101dae93c  str x8,[sp, #0x30]
7101dae940  ldr x8,[x0]
7101dae944  ldr x8,[x8, #0x30]
7101dae948  add x2,sp,#0x30
7101dae94c  blr x8
7101dae950  tbz w0,#0x0,0x7101dae968
7101dae954  mov w0,#0x10
7101dae958  mov w1,#0x20
7101dae95c  bl 0x710392e290
7101dae960  mov x26,x0
7101dae964  cbnz x0,0x7101dae96c
7101dae968  mov x26,xzr
7101dae96c  stp xzr,xzr,[x26, #0x10]
7101dae970  add x1,sp,#0x30
7101dae974  stp xzr,xzr,[x26]
7101dae978  ldur x8,[x29, #-0x80]
7101dae97c  ldr x9,[x8]
7101dae980  str x9,[x26]
7101dae984  ldr x8,[x8, #0x8]
7101dae988  str x8,[x26, #0x8]
7101dae98c  ldur x22,[x29, #-0x80]
7101dae990  ldr x8,[x22, #0x10]
7101dae994  str x8,[x26, #0x10]
7101dae998  ldr q0,[sp, #0x10]
7101dae99c  ldr x8,[x22, #0x18]
7101dae9a0  str x8,[x26, #0x18]
7101dae9a4  mov x0,x26
7101dae9a8  str q0,[sp, #0x30]
7101dae9ac  mov v0.16B,v8.16B
7101dae9b0  bl 0x7103779770
7101dae9b4  cbz x26,0x7101dae9c0
7101dae9b8  mov x0,x26
7101dae9bc  bl 0x710392eb40
7101dae9c0  ldur x8,[x29, #-0x58]
7101dae9c4  ldr x0,[x8, #0x168]
7101dae9c8  mov x1,x23
7101dae9cc  bl 0x7103263f80
7101dae9d0  mov x26,x0
7101dae9d4  adrp x1,0x71042d4000
7101dae9d8  add x1,x1,#0x25c
7101dae9dc  sub x8,x29,#0x98
7101dae9e0  mov x0,x21
7101dae9e4  bl 0x7103776910
7101dae9e8  adrp x1,0x710439d000
7101dae9ec  add x1,x1,#0x86e
7101dae9f0  sub x8,x29,#0xa8
7101dae9f4  mov x0,x21
7101dae9f8  bl 0x7103776910
7101dae9fc  mov w1,#0x11
7101daea00  mov x0,x26
7101daea04  bl 0x7103238d60
7101daea08  tst x0,#0xffffffffff
7101daea0c  str x0,[sp, #0x30]
7101daea10  b.eq 0x7101daea28
7101daea14  ldr x0,[x25]
7101daea18  ldrsw x2,[x0, #0x70]
7101daea1c  ldr w3,[x0, #0x68]
7101daea20  add x1,sp,#0x30
7101daea24  bl 0x710323c4e0
7101daea28  mov w2,#0x11
7101daea2c  mov x0,x25
7101daea30  mov x1,x26
7101daea34  bl 0x710323f600
7101daea38  ldur x25,[x29, #-0x90]
7101daea3c  mov x27,x0
7101daea40  mov x1,x27
7101daea44  mov x0,x25
7101daea48  bl 0x7103778b80
7101daea4c  ldur x26,[x29, #-0xa0]
7101daea50  mov x0,x26
7101daea54  mov x1,x27
7101daea58  bl 0x7103778b80
7101daea5c  ldur x27,[x29, #-0x58]
7101daea60  ldr x0,[x27, #0x168]
7101daea64  mov x1,x23
7101daea68  mov w2,w24
7101daea6c  bl 0x7103263540
7101daea70  ldr x1,[x27, #0x168]
7101daea74  mov w24,w0
7101daea78  add x0,sp,#0x30
7101daea7c  mov x2,x23
7101daea80  add x27,sp,#0x30
7101daea84  bl 0x7103262310
7101daea88  add x2,x27,#0x8
7101daea8c  adrp x0,0x710439b000
7101daea90  add x0,x0,#0x815
7101daea94  add x8,sp,#0x410
7101daea98  mov w1,w24
7101daea9c  add x23,sp,#0x410
7101daeaa0  bl 0x71003a4ca0
7101daeaa4  adrp x1,0x7104280000
7101daeaa8  add x1,x1,#0xee1
7101daeaac  sub x8,x29,#0xb8
7101daeab0  mov x0,x21
7101daeab4  bl 0x7103776910
7101daeab8  adrp x1,0x71042e7000
7101daeabc  add x1,x1,#0x665
7101daeac0  sub x8,x29,#0xc8
7101daeac4  mov x0,x21
7101daeac8  bl 0x7103776910
7101daeacc  add x23,x23,#0x8
7101daead0  sub x0,x29,#0xb8
7101daead4  mov x1,x23
7101daead8  bl 0x710377a120
7101daeadc  sub x0,x29,#0xc8
7101daeae0  mov x1,x23
7101daeae4  bl 0x710377a120
7101daeae8  adrp x1,0x71042d6000
7101daeaec  add x1,x1,#0x6e3
7101daeaf0  sub x8,x29,#0xd8
7101daeaf4  mov x0,x21
7101daeaf8  bl 0x7103776640
7101daeafc  ldr w8,[x19, #0xe0]
7101daeb00  cmp w8,#0x4
7101daeb04  b.cs 0x7101daf198
7101daeb08  orr w9,wzr,#0xc
7101daeb0c  madd x8,x8,x9,x19
7101daeb10  ldrsw x24,[x8, #0x400]
7101daeb14  cmn w24,#0x1
7101daeb18  b.eq 0x7101daeb70
7101daeb1c  cmp w24,#0x9
7101daeb20  adrp x8,0x7105339000
7101daeb24  add x8,x8,#0x830
7101daeb28  b.hi 0x7101daeb4c
7101daeb2c  adrp x9,0x7105339000
7101daeb30  ldr x9,[x9, #0x8b0]
7101daeb34  ldrb w9,[x9, #0x8]
7101daeb38  cbz w9,0x7101daeb4c
7101daeb3c  adrp x8,0x7105339000
7101daeb40  add x8,x8,#0x860
7101daeb44  ldr x8,[x8, x24, LSL #0x3]
7101daeb48  cbz x8,0x7101daeb70
7101daeb4c  ldr x8,[x8, #0x10]
7101daeb50  ldr w8,[x8, #0x9c]
7101daeb54  sub w8,w8,#0x1
7101daeb58  cmp w8,#0x6
7101daeb5c  b.hi 0x7101daeb70
7101daeb60  adrp x9,0x7104753000
7101daeb64  add x9,x9,#0xde0
7101daeb68  ldr w1,[x9, w8, SXTW #0x2]
7101daeb6c  b 0x7101daeb74
7101daeb70  mov w1,wzr
7101daeb74  add x0,sp,#0x30
7101daeb78  add x23,sp,#0x30
7101daeb7c  bl 0x710339d9f0
7101daeb80  add x1,x23,#0x8
7101daeb84  ldur x23,[x29, #-0xd0]
7101daeb88  fmov s0,0x3f800000
7101daeb8c  mov x0,x23
7101daeb90  bl 0x7103778300
7101daeb94  cmn w24,#0x1
7101daeb98  b.eq 0x7101daec54
7101daeb9c  cmp w24,#0x9
7101daeba0  adrp x8,0x7105339000
7101daeba4  add x8,x8,#0x830
7101daeba8  b.hi 0x7101daebcc
7101daebac  adrp x9,0x7105339000
7101daebb0  ldr x9,[x9, #0x8b0]
7101daebb4  ldrb w9,[x9, #0x8]
7101daebb8  cbz w9,0x7101daebcc
7101daebbc  adrp x8,0x7105339000
7101daebc0  add x8,x8,#0x860
7101daebc4  ldr x8,[x8, x24, LSL #0x3]
7101daebc8  cbz x8,0x7101daec44
7101daebcc  ldr x0,[x8, #0x10]
7101daebd0  ldrb w8,[x0, #0xb8]
7101daebd4  cbz w8,0x7101daec44
7101daebd8  ldr x8,[x0]
7101daebdc  ldr x8,[x8, #0x20]
7101daebe0  blr x8
7101daebe4  sub w8,w0,#0x1
7101daebe8  and w9,w8,#0xff
7101daebec  cmp w9,#0xe
7101daebf0  b.hi 0x7101daec44
7101daebf4  sxtb x8,w8
7101daebf8  mov w9,#0x2e8a
7101daebfc  lsr x9,x9,x8
7101daec00  tbnz w9,#0x0,0x7101daec44
7101daec04  adrp x9,0x7104753000
7101daec08  add x9,x9,#0xe00
7101daec0c  adrp x0,0x71042b2000
7101daec10  add x0,x0,#0x952
7101daec14  ldr w8,[x9, x8, LSL #0x2]
7101daec18  add w1,w8,#0x1
7101daec1c  add x8,sp,#0x2e0
7101daec20  add x24,sp,#0x2e0
7101daec24  bl 0x71003a4ca0
7101daec28  ldr w8,[sp, #0x2e4]
7101daec2c  cbz w8,0x7101daec54
7101daec30  fmov s0,0x3f800000
7101daec34  add x1,x24,#0x8
7101daec38  mov x0,x23
7101daec3c  bl 0x7103778300
7101daec40  b 0x7101daec54
7101daec44  mov w8,#0x9dc5
7101daec48  movk w8,#0x811c, LSL #16
7101daec4c  strb wzr,[sp, #0x2e8]
7101daec50  str x8,[sp, #0x2e0]
7101daec54  adrp x1,0x7104270000
7101daec58  add x1,x1,#0x39a
7101daec5c  add x8,sp,#0x2e0
7101daec60  mov x0,x21
7101daec64  bl 0x7103776910
7101daec68  ldr w8,[x19, #0xe0]
7101daec6c  add w2,w8,#0x1
7101daec70  adrp x1,0x71042b2000
7101daec74  add x1,x1,#0x93a
7101daec78  add x0,sp,#0x2e0
7101daec7c  bl 0x710377a120
7101daec80  adrp x1,0x7104433000
7101daec84  add x1,x1,#0x8a1
7101daec88  sub x8,x29,#0xe8
7101daec8c  mov x0,x21
7101daec90  bl 0x7103776910
7101daec94  ldr w8,[x19, #0xe0]
7101daec98  cmp w8,#0x4
7101daec9c  b.cs 0x7101daf198
7101daeca0  orr w9,wzr,#0xc
7101daeca4  madd x9,x8,x9,x19
7101daeca8  ldr w10,[x9, #0x3fc]
7101daecac  adrp x9,0x7105314000
7101daecb0  add x9,x9,#0x518
7101daecb4  cmp w10,#0x3c
7101daecb8  b.hi 0x7101daece4
7101daecbc  adrp x11,0x7105314000
7101daecc0  ldr x11,[x11, #0x510]
7101daecc4  ldr x11,[x11]
7101daecc8  ldrb w12,[x11]
7101daeccc  cbnz w12,0x7101daece4
7101daecd0  ldr x9,[x11, #0x58]
7101daecd4  mov w11,#0xf7d8
7101daecd8  ldr x9,[x9]
7101daecdc  ldr x9,[x9]
7101daece0  madd x9,x10,x11,x9
7101daece4  ldr w10,[x9, #0x8]
7101daece8  cbz w10,0x7101daef84
7101daecec  ldur x24,[x29, #-0xe0]
7101daecf0  ldr x0,[x24, #0x10]
7101daecf4  cbz x0,0x7101daed08
7101daecf8  add x1,x9,#0xc
7101daecfc  mov w2,#0xffffffff
7101daed00  mov w3,#0x1
7101daed04  bl 0x71037a2270
7101daed08  stp x20,xzr,[x29, #-0xe8]
7101daed0c  cbz x24,0x7101daed18
7101daed10  mov x0,x24
7101daed14  bl 0x710392eb40
7101daed18  ldr x0,[sp, #0x2e8]
7101daed1c  str x20,[sp, #0x2e0]
7101daed20  str xzr,[sp, #0x2e8]
7101daed24  cbz x0,0x7101daed2c
7101daed28  bl 0x710392eb40
7101daed2c  adrp x24,0x710523d000
7101daed30  add x24,x24,#0x988
7101daed34  stp x24,xzr,[x29, #-0xd8]
7101daed38  cbz x23,0x7101daed54
7101daed3c  ldr x0,[x23, #0x18]
7101daed40  stp x20,xzr,[x23, #0x10]
7101daed44  cbz x0,0x7101daed4c
7101daed48  bl 0x710392eb40
7101daed4c  mov x0,x23
7101daed50  bl 0x710392eb40
7101daed54  ldur x0,[x29, #-0xc0]
7101daed58  stp x20,xzr,[x29, #-0xc8]
7101daed5c  cbz x0,0x7101daed64
7101daed60  bl 0x710392eb40
7101daed64  ldur x0,[x29, #-0xb0]
7101daed68  stp x20,xzr,[x29, #-0xb8]
7101daed6c  cbz x0,0x7101daed74
7101daed70  bl 0x710392eb40
7101daed74  stp x20,xzr,[x29, #-0xa8]
7101daed78  cbz x26,0x7101daed84
7101daed7c  mov x0,x26
7101daed80  bl 0x710392eb40
7101daed84  stp x20,xzr,[x29, #-0x98]
7101daed88  cbz x25,0x7101daed94
7101daed8c  mov x0,x25
7101daed90  bl 0x710392eb40
7101daed94  stp x20,xzr,[x29, #-0x88]
7101daed98  cbz x22,0x7101daeda4
7101daed9c  mov x0,x22
7101daeda0  bl 0x710392eb40
7101daeda4  ldur x0,[x29, #-0x70]
7101daeda8  stp x20,xzr,[x29, #-0x78]
7101daedac  cbz x0,0x7101daedb4
7101daedb0  bl 0x710392eb40
7101daedb4  ldr x22,[sp, #0x1b8]
7101daedb8  stp x24,xzr,[sp, #0x1b0]
7101daedbc  cbz x22,0x7101daedd8
7101daedc0  ldr x0,[x22, #0x18]
7101daedc4  stp x20,xzr,[x22, #0x10]
7101daedc8  cbz x0,0x7101daedd0
7101daedcc  bl 0x710392eb40
7101daedd0  mov x0,x22
7101daedd4  bl 0x710392eb40
7101daedd8  ldr w1,[x19, #0xe0]
7101daeddc  cmp w1,#0x4
7101daede0  b.cs 0x7101daf198
7101daede4  mov w8,#0x54
7101daede8  madd x8,x1,x8,x19
7101daedec  add x2,x8,#0x268
7101daedf0  mov x0,x19
7101daedf4  mov w3,wzr
7101daedf8  bl 0x7101da9e30
7101daedfc  mov x0,x19
7101daee00  bl 0x7101dac850
7101daee04  mov x0,x19
7101daee08  mov w1,wzr
7101daee0c  bl 0x7101da6780
7101daee10  mov x0,x19
7101daee14  mov w1,wzr
7101daee18  bl 0x7101da73b0
7101daee1c  ldr w8,[x19, #0x428]
7101daee20  cbz w8,0x7101daee50
7101daee24  adrp x1,0x7104308000
7101daee28  add x1,x1,#0x8c5
7101daee2c  add x8,sp,#0x30
7101daee30  mov x0,x21
7101daee34  bl 0x7103776910
7101daee38  ldr x0,[sp, #0x38]
7101daee3c  ldr x8,[x0]
7101daee40  cbz x8,0x7101daee7c
7101daee44  ldrb w9,[x8, #0x58]
7101daee48  and w9,w9,#0xfe
7101daee4c  b 0x7101daee78
7101daee50  adrp x1,0x7104308000
7101daee54  add x1,x1,#0x8c5
7101daee58  add x8,sp,#0x30
7101daee5c  mov x0,x21
7101daee60  bl 0x7103776910
7101daee64  ldr x0,[sp, #0x38]
7101daee68  ldr x8,[x0]
7101daee6c  cbz x8,0x7101daee7c
7101daee70  ldrb w9,[x8, #0x58]
7101daee74  orr w9,w9,#0x1
7101daee78  strb w9,[x8, #0x58]
7101daee7c  stp x20,xzr,[sp, #0x30]
7101daee80  cbz x0,0x7101daee88
7101daee84  bl 0x710392eb40
7101daee88  ldr w8,[x19, #0x428]
7101daee8c  adrp x1,0x710433a000
7101daee90  add x1,x1,#0x587
7101daee94  cmp w8,#0x3
7101daee98  b.ne 0x7101daeec0
7101daee9c  add x8,sp,#0x30
7101daeea0  mov x0,x21
7101daeea4  bl 0x7103776910
7101daeea8  ldr x0,[sp, #0x38]
7101daeeac  ldr x8,[x0]
7101daeeb0  cbz x8,0x7101daeee4
7101daeeb4  ldrb w9,[x8, #0x58]
7101daeeb8  and w9,w9,#0xfe
7101daeebc  b 0x7101daeee0
7101daeec0  add x8,sp,#0x30
7101daeec4  mov x0,x21
7101daeec8  bl 0x7103776910
7101daeecc  ldr x0,[sp, #0x38]
7101daeed0  ldr x8,[x0]
7101daeed4  cbz x8,0x7101daeee4
7101daeed8  ldrb w9,[x8, #0x58]
7101daeedc  orr w9,w9,#0x1
7101daeee0  strb w9,[x8, #0x58]
7101daeee4  stp x20,xzr,[sp, #0x30]
7101daeee8  cbz x0,0x7101daeef0
7101daeeec  bl 0x710392eb40
7101daeef0  ldr w8,[x19, #0x428]
7101daeef4  cmp w8,#0x3
7101daeef8  b.ne 0x7101daef60
7101daeefc  mov x1,#0xc1cf
7101daef00  movk x1,#0x477e, LSL #16
7101daef04  movk x1,#0xc, LSL #32
7101daef08  add x0,sp,#0x30
7101daef0c  bl 0x7102499b60
7101daef10  ldr x1,[sp, #0x30]
7101daef14  add x20,x19,#0x458
7101daef18  cmp x20,x1
7101daef1c  b.eq 0x7101daef28
7101daef20  mov x0,x20
7101daef24  bl 0x71024976d0
7101daef28  adrp x8,0x7105329000
7101daef2c  ldr x8,[x8, #0xf98]
7101daef30  ldr x8,[x8]
7101daef34  ldr x1,[x19, #0x3b8]
7101daef38  ldr x0,[x8, #0x30]
7101daef3c  mov x2,x20
7101daef40  bl 0x71025298e0
7101daef44  ldr x0,[sp, #0x30]
7101daef48  str xzr,[sp, #0x30]
7101daef4c  cbz x0,0x7101daf174
7101daef50  ldr x8,[x0]
7101daef54  ldr x8,[x8, #0x8]
7101daef58  blr x8
7101daef5c  b 0x7101daf174
7101daef60  ldrb w8,[x19, #0xf0]
7101daef64  cbz w8,0x7101daefac
7101daef68  ldrb w8,[x19, #0x1d4]
7101daef6c  cbz w8,0x7101daefc0
7101daef70  adrp x8,0x7105329000
7101daef74  ldr x8,[x8, #0xf98]
7101daef78  ldr x8,[x8]
7101daef7c  ldr x1,[x19, #0x3b8]
7101daef80  b 0x7101daf03c
7101daef84  add w3,w8,#0x1
7101daef88  adrp x1,0x710434a000
7101daef8c  add x1,x1,#0x7a8
7101daef90  sub x0,x29,#0xe8
7101daef94  mov w2,#0x1
7101daef98  bl 0x710377a280
7101daef9c  ldur x24,[x29, #-0xe0]
7101daefa0  stp x20,xzr,[x29, #-0xe8]
7101daefa4  cbnz x24,0x7101daed10
7101daefa8  b 0x7101daed18
7101daefac  adrp x8,0x7105329000
7101daefb0  ldr x8,[x8, #0xf98]
7101daefb4  ldr x8,[x8]
7101daefb8  ldr x1,[x19, #0x3b8]
7101daefbc  b 0x7101daefdc
7101daefc0  adrp x8,0x7105329000
7101daefc4  ldr x8,[x8, #0xf98]
7101daefc8  ldr x1,[x19, #0x3b8]
7101daefcc  ldp x9,x10,[x19, #0x158]
7101daefd0  cmp x10,x9
7101daefd4  ldr x8,[x8]
7101daefd8  b.ne 0x7101daf03c
7101daefdc  ldr x8,[x8, #0x30]
7101daefe0  mov w9,#0xac20
7101daefe4  movk w9,#0x8, LSL #16
7101daefe8  ldr x20,[x8, x9, LSL #0x0]
7101daefec  ldr w8,[x20, #0x10]
7101daeff0  cmp w8,#0x0
7101daeff4  b.gt 0x7101daf070
7101daeff8  add x8,x20,#0x40
7101daeffc  adrp x9,0x71050c5000
7101daf000  add x9,x9,#0x300
7101daf004  strb wzr,[x20, #0x70]
7101daf008  stp x9,x1,[sp, #0x30]
7101daf00c  add x21,sp,#0x30
7101daf010  add x0,sp,#0x30
7101daf014  mov x1,x8
7101daf018  str x21,[sp, #0x50]
7101daf01c  bl 0x71003cb050
7101daf020  ldr x0,[sp, #0x50]
7101daf024  cmp x21,x0
7101daf028  b.eq 0x7101daf04c
7101daf02c  cbz x0,0x7101daf058
7101daf030  ldr x8,[x0]
7101daf034  ldr x8,[x8, #0x28]
7101daf038  b 0x7101daf054
7101daf03c  ldr x0,[x8, #0x30]
7101daf040  ldr x2,[sp, #0x28]
7101daf044  bl 0x71025298e0
7101daf048  b 0x7101daf070
7101daf04c  ldr x8,[x0]
7101daf050  ldr x8,[x8, #0x20]
7101daf054  blr x8
7101daf058  adrp x1,0x710259f000
7101daf05c  add x1,x1,#0x170
7101daf060  mov w2,#0xffffffff
7101daf064  mov w3,#0x1
7101daf068  mov x0,x20
7101daf06c  bl 0x7103549720
7101daf070  mov w9,#0x100
7101daf074  stp xzr,x9,[sp, #0x40]
7101daf078  strh w9,[sp, #0x60]
7101daf07c  mov w9,#0x2
7101daf080  mov w10,#0xffffffff
7101daf084  mov x11,#0xff0000000000
7101daf088  strh w9,[sp, #0x78]
7101daf08c  orr w9,wzr,#0xffff
7101daf090  adrp x8,0x71050bf000
7101daf094  add x8,x8,#0xb0
7101daf098  str w10,[sp, #0x54]
7101daf09c  movk x11,#0xd9ff, LSL #48
7101daf0a0  strh w9,[sp, #0xb8]
7101daf0a4  orr w9,wzr,#0x3f800000
7101daf0a8  stp w10,w10,[sp, #0xe0]
7101daf0ac  mov x10,#0xff0000000000
7101daf0b0  movk x10,#0xc1ff, LSL #48
7101daf0b4  str x8,[sp, #0x30]
7101daf0b8  mov w8,#0x1
7101daf0bc  add x0,x19,#0x458
7101daf0c0  str x11,[sp, #0x58]
7101daf0c4  orr w11,wzr,#0xff
7101daf0c8  stp w9,w9,[sp, #0xbc]
7101daf0cc  stp w9,w9,[sp, #0xc4]
7101daf0d0  stp w9,w9,[sp, #0xcc]
7101daf0d4  stp w9,w9,[sp, #0xd4]
7101daf0d8  str w9,[sp, #0x110]
7101daf0dc  add x9,sp,#0x15
7101daf0e0  strb wzr,[sp, #0x38]
7101daf0e4  strb w8,[sp, #0x50]
7101daf0e8  strb wzr,[sp, #0x62]
7101daf0ec  str xzr,[sp, #0x80]
7101daf0f0  str xzr,[sp, #0xa0]
7101daf0f4  strh wzr,[sp, #0xba]
7101daf0f8  strb wzr,[sp, #0xdc]
7101daf0fc  strh wzr,[sp, #0xe8]
7101daf100  str x10,[sp, #0xf0]
7101daf104  strb w11,[sp, #0xf8]
7101daf108  strb wzr,[sp, #0x11c]
7101daf10c  stp xzr,xzr,[sp, #0x68]
7101daf110  stp xzr,xzr,[sp, #0x88]
7101daf114  stp xzr,xzr,[sp, #0xa8]
7101daf118  stp xzr,xzr,[sp, #0x100]
7101daf11c  stur xzr,[x9, #0xff]
7101daf120  add x9,sp,#0x30
7101daf124  cmp x0,x9
7101daf128  str x10,[sp, #0x120]
7101daf12c  strb wzr,[sp, #0x128]
7101daf130  str wzr,[sp, #0x180]
7101daf134  strh wzr,[sp, #0x1a0]
7101daf138  str xzr,[sp, #0x188]
7101daf13c  strb w8,[sp, #0x98]
7101daf140  strb w8,[sp, #0x99]
7101daf144  strb w8,[sp, #0x9a]
7101daf148  stp xzr,xzr,[sp, #0x170]
7101daf14c  stp xzr,xzr,[sp, #0x160]
7101daf150  stp xzr,xzr,[sp, #0x150]
7101daf154  stp xzr,xzr,[sp, #0x140]
7101daf158  stp xzr,xzr,[sp, #0x130]
7101daf15c  stp xzr,xzr,[sp, #0x190]
7101daf160  b.eq 0x7101daf16c
7101daf164  add x1,sp,#0x30
7101daf168  bl 0x71024976d0
7101daf16c  add x0,sp,#0x30
7101daf170  bl 0x7102497520
7101daf174  add sp,sp,#0x700
7101daf178  ldp x29,x30,[sp, #0x60]
7101daf17c  ldp x20,x19,[sp, #0x50]
7101daf180  ldp x22,x21,[sp, #0x40]
7101daf184  ldp x24,x23,[sp, #0x30]
7101daf188  ldp x26,x25,[sp, #0x20]
7101daf18c  ldp x28,x27,[sp, #0x10]
7101daf190  ldr d8,[sp], #0x70
7101daf194  ret
7101daf198  bl 0x71039c2650
