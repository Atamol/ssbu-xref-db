// addr:      7101c7ad10
// offset:    0x1c7ad10
// name:      FUN_7101c7ad10
// mangled:   
// size:      4780

7101c7ad10  stp x28,x27,[sp, #-0x60]!
7101c7ad14  stp x26,x25,[sp, #0x10]
7101c7ad18  stp x24,x23,[sp, #0x20]
7101c7ad1c  stp x22,x21,[sp, #0x30]
7101c7ad20  stp x20,x19,[sp, #0x40]
7101c7ad24  stp x29,x30,[sp, #0x50]
7101c7ad28  add x29,sp,#0x50
7101c7ad2c  sub sp,sp,#0x1e0
7101c7ad30  ldr x8,[x2]
7101c7ad34  ldr x8,[x8]
7101c7ad38  mov x20,x0
7101c7ad3c  add x0,x0,#0xf8
7101c7ad40  add x9,x8,#0x8
7101c7ad44  mov x22,x2
7101c7ad48  mov x24,x1
7101c7ad4c  cmp x0,x9
7101c7ad50  b.eq 0x7101c7adc4
7101c7ad54  ldr x9,[x8, #0x10]
7101c7ad58  ldr x9,[x9]
7101c7ad5c  ldr x10,[x20, #0x100]
7101c7ad60  str x9,[x10]
7101c7ad64  ldr x9,[x8, #0x10]
7101c7ad68  ldr x9,[x9, #0x8]
7101c7ad6c  ldr x10,[x20, #0x100]
7101c7ad70  str x9,[x10, #0x8]
7101c7ad74  ldr x9,[x8, #0x10]
7101c7ad78  ldr x8,[x20, #0x100]
7101c7ad7c  cmp x8,x9
7101c7ad80  b.eq 0x7101c7adc4
7101c7ad84  ldr x10,[x9, #0x18]
7101c7ad88  ldr x10,[x10]
7101c7ad8c  ldr x11,[x8, #0x18]
7101c7ad90  str x10,[x11]
7101c7ad94  ldr x10,[x9, #0x18]
7101c7ad98  ldr x10,[x10, #0x8]
7101c7ad9c  ldr x11,[x8, #0x18]
7101c7ada0  str x10,[x11, #0x8]
7101c7ada4  ldr x10,[x9, #0x18]
7101c7ada8  ldr x10,[x10, #0x10]
7101c7adac  ldr x11,[x8, #0x18]
7101c7adb0  str x10,[x11, #0x10]
7101c7adb4  ldr x9,[x9, #0x18]
7101c7adb8  ldr x9,[x9, #0x18]
7101c7adbc  ldr x8,[x8, #0x18]
7101c7adc0  str x9,[x8, #0x18]
7101c7adc4  adrp x1,0x71042f8000
7101c7adc8  add x1,x1,#0x36b
7101c7adcc  add x8,sp,#0x60
7101c7add0  add x19,sp,#0x60
7101c7add4  bl 0x7103776640
7101c7add8  add x21,x20,#0x108
7101c7addc  cmp x21,x19
7101c7ade0  b.eq 0x7101c7ae18
7101c7ade4  ldr x8,[sp, #0x68]
7101c7ade8  str xzr,[sp, #0x68]
7101c7adec  ldr x23,[x20, #0x110]
7101c7adf0  str x8,[x20, #0x110]
7101c7adf4  cbz x23,0x7101c7ae18
7101c7adf8  ldr x0,[x23, #0x18]
7101c7adfc  adrp x8,0x710523d000
7101c7ae00  add x8,x8,#0x9a8
7101c7ae04  stp x8,xzr,[x23, #0x10]
7101c7ae08  cbz x0,0x7101c7ae10
7101c7ae0c  bl 0x710392eb40
7101c7ae10  mov x0,x23
7101c7ae14  bl 0x710392eb40
7101c7ae18  ldr x23,[sp, #0x68]
7101c7ae1c  adrp x8,0x710523d000
7101c7ae20  add x8,x8,#0x988
7101c7ae24  stp x8,xzr,[sp, #0x60]
7101c7ae28  cbz x23,0x7101c7ae4c
7101c7ae2c  ldr x0,[x23, #0x18]
7101c7ae30  adrp x8,0x710523d000
7101c7ae34  add x8,x8,#0x9a8
7101c7ae38  stp x8,xzr,[x23, #0x10]
7101c7ae3c  cbz x0,0x7101c7ae44
7101c7ae40  bl 0x710392eb40
7101c7ae44  mov x0,x23
7101c7ae48  bl 0x710392eb40
7101c7ae4c  mov w8,#0x101
7101c7ae50  strh w8,[sp, #0x68]
7101c7ae54  mov w8,#0x1
7101c7ae58  str w8,[sp, #0x70]
7101c7ae5c  strh w8,[sp, #0x74]
7101c7ae60  strb w8,[sp, #0x76]
7101c7ae64  mov x8,#0x41f0000000000000
7101c7ae68  sub x19,x29,#0xa0
7101c7ae6c  sub x0,x29,#0xa0
7101c7ae70  str x8,[sp, #0x78]
7101c7ae74  add x8,sp,#0x60
7101c7ae78  add x1,x8,#0x60
7101c7ae7c  adrp x8,0x7105186000
7101c7ae80  add x8,x8,#0x40
7101c7ae84  str xzr,[sp, #0x60]
7101c7ae88  strh wzr,[sp, #0x6e]
7101c7ae8c  stur wzr,[sp, #0x6a]
7101c7ae90  str wzr,[sp, #0x80]
7101c7ae94  str xzr,[sp, #0xb0]
7101c7ae98  str xzr,[sp, #0xe0]
7101c7ae9c  str xzr,[sp, #0x110]
7101c7aea0  str xzr,[sp, #0x140]
7101c7aea4  str xzr,[sp, #0x170]
7101c7aea8  str wzr,[sp, #0x180]
7101c7aeac  stur x8,[x29, #-0xa0]
7101c7aeb0  stur x19,[x29, #-0x80]
7101c7aeb4  bl 0x7101989a30
7101c7aeb8  ldur x0,[x29, #-0x80]
7101c7aebc  cmp x19,x0
7101c7aec0  b.eq 0x7101c7aed4
7101c7aec4  cbz x0,0x7101c7aee0
7101c7aec8  ldr x8,[x0]
7101c7aecc  ldr x8,[x8, #0x28]
7101c7aed0  b 0x7101c7aedc
7101c7aed4  ldr x8,[x0]
7101c7aed8  ldr x8,[x8, #0x20]
7101c7aedc  blr x8
7101c7aee0  add x8,sp,#0x60
7101c7aee4  add x1,x8,#0xc0
7101c7aee8  adrp x8,0x7105186000
7101c7aeec  add x8,x8,#0xd0
7101c7aef0  sub x19,x29,#0xa0
7101c7aef4  stur x19,[x29, #-0x80]
7101c7aef8  sub x0,x29,#0xa0
7101c7aefc  stur x8,[x29, #-0xa0]
7101c7af00  bl 0x7101989a30
7101c7af04  ldur x0,[x29, #-0x80]
7101c7af08  cmp x19,x0
7101c7af0c  str x24,[sp]
7101c7af10  b.eq 0x7101c7af24
7101c7af14  cbz x0,0x7101c7af30
7101c7af18  ldr x8,[x0]
7101c7af1c  ldr x8,[x8, #0x28]
7101c7af20  b 0x7101c7af2c
7101c7af24  ldr x8,[x0]
7101c7af28  ldr x8,[x8, #0x20]
7101c7af2c  blr x8
7101c7af30  add x24,x20,#0x118
7101c7af34  adrp x2,0x7104401000
7101c7af38  add x2,x2,#0xbc0
7101c7af3c  add x3,sp,#0x60
7101c7af40  mov x0,x24
7101c7af44  mov x1,x21
7101c7af48  add x19,sp,#0x60
7101c7af4c  bl 0x7103770b30
7101c7af50  adrp x2,0x7104291000
7101c7af54  add x2,x2,#0xce1
7101c7af58  mov x0,x24
7101c7af5c  mov w1,wzr
7101c7af60  bl 0x71037717d0
7101c7af64  adrp x2,0x71042c4000
7101c7af68  add x2,x2,#0xe85
7101c7af6c  mov w1,#0x1
7101c7af70  mov x0,x24
7101c7af74  bl 0x71037717d0
7101c7af78  adrp x2,0x71042d6000
7101c7af7c  add x2,x2,#0x2fa
7101c7af80  mov w1,#0x2
7101c7af84  mov x0,x24
7101c7af88  bl 0x71037717d0
7101c7af8c  adrp x2,0x71042f8000
7101c7af90  add x2,x2,#0x37e
7101c7af94  orr w1,wzr,#0x3
7101c7af98  mov x0,x24
7101c7af9c  bl 0x71037717d0
7101c7afa0  adrp x2,0x710436c000
7101c7afa4  add x2,x2,#0x428
7101c7afa8  mov w1,#0x4
7101c7afac  mov x0,x24
7101c7afb0  bl 0x71037717d0
7101c7afb4  mov w23,#0x5
7101c7afb8  adrp x2,0x710424f000
7101c7afbc  add x2,x2,#0x5b5
7101c7afc0  mov x0,x24
7101c7afc4  mov w1,w23
7101c7afc8  bl 0x71037717d0
7101c7afcc  mov w1,#0x1
7101c7afd0  mov w2,#0x1
7101c7afd4  mov x0,x24
7101c7afd8  bl 0x7103771a80
7101c7afdc  ldr x0,[x20, #0x118]
7101c7afe0  ldr x8,[x0]
7101c7afe4  ldr x8,[x8, #0x70]
7101c7afe8  mov w1,wzr
7101c7afec  blr x8
7101c7aff0  ldr x0,[x20, #0x118]
7101c7aff4  ldr x8,[x0]
7101c7aff8  ldr x8,[x8, #0x60]
7101c7affc  mov w1,#0x1
7101c7b000  blr x8
7101c7b004  ldr x0,[sp, #0x170]
7101c7b008  add x8,x19,#0xf0
7101c7b00c  cmp x8,x0
7101c7b010  b.eq 0x7101c7b024
7101c7b014  cbz x0,0x7101c7b030
7101c7b018  ldr x8,[x0]
7101c7b01c  ldr x8,[x8, #0x28]
7101c7b020  b 0x7101c7b02c
7101c7b024  ldr x8,[x0]
7101c7b028  ldr x8,[x8, #0x20]
7101c7b02c  blr x8
7101c7b030  ldr x0,[sp, #0x140]
7101c7b034  add x8,sp,#0x60
7101c7b038  add x8,x8,#0xc0
7101c7b03c  cmp x8,x0
7101c7b040  b.eq 0x7101c7b054
7101c7b044  cbz x0,0x7101c7b060
7101c7b048  ldr x8,[x0]
7101c7b04c  ldr x8,[x8, #0x28]
7101c7b050  b 0x7101c7b05c
7101c7b054  ldr x8,[x0]
7101c7b058  ldr x8,[x8, #0x20]
7101c7b05c  blr x8
7101c7b060  ldr x0,[sp, #0x110]
7101c7b064  add x8,sp,#0x60
7101c7b068  add x8,x8,#0x90
7101c7b06c  cmp x8,x0
7101c7b070  b.eq 0x7101c7b084
7101c7b074  cbz x0,0x7101c7b090
7101c7b078  ldr x8,[x0]
7101c7b07c  ldr x8,[x8, #0x28]
7101c7b080  b 0x7101c7b08c
7101c7b084  ldr x8,[x0]
7101c7b088  ldr x8,[x8, #0x20]
7101c7b08c  blr x8
7101c7b090  ldr x0,[sp, #0xe0]
7101c7b094  add x8,sp,#0x60
7101c7b098  add x8,x8,#0x60
7101c7b09c  cmp x8,x0
7101c7b0a0  b.eq 0x7101c7b0b4
7101c7b0a4  cbz x0,0x7101c7b0c0
7101c7b0a8  ldr x8,[x0]
7101c7b0ac  ldr x8,[x8, #0x28]
7101c7b0b0  b 0x7101c7b0bc
7101c7b0b4  ldr x8,[x0]
7101c7b0b8  ldr x8,[x8, #0x20]
7101c7b0bc  blr x8
7101c7b0c0  ldr x0,[sp, #0xb0]
7101c7b0c4  add x8,sp,#0x60
7101c7b0c8  add x8,x8,#0x30
7101c7b0cc  cmp x8,x0
7101c7b0d0  b.eq 0x7101c7b0e4
7101c7b0d4  cbz x0,0x7101c7b0f0
7101c7b0d8  ldr x8,[x0]
7101c7b0dc  ldr x8,[x8, #0x28]
7101c7b0e0  b 0x7101c7b0ec
7101c7b0e4  ldr x8,[x0]
7101c7b0e8  ldr x8,[x8, #0x20]
7101c7b0ec  blr x8
7101c7b0f0  mov x8,#0x41800000
7101c7b0f4  movk x8,#0x4248, LSL #48
7101c7b0f8  mov x9,#0x3f800000
7101c7b0fc  stp xzr,x8,[sp, #0x60]
7101c7b100  mov w8,#0x1
7101c7b104  strb w8,[sp, #0x7a]
7101c7b108  add x8,sp,#0x60
7101c7b10c  movk x9,#0x101, LSL #32
7101c7b110  movk x9,#0x1, LSL #48
7101c7b114  str x9,[sp, #0x70]
7101c7b118  add x1,x8,#0x90
7101c7b11c  adrp x8,0x7105186000
7101c7b120  add x8,x8,#0x1f0
7101c7b124  sub x19,x29,#0xa0
7101c7b128  sub x0,x29,#0xa0
7101c7b12c  strh wzr,[sp, #0x78]
7101c7b130  str xzr,[sp, #0xb0]
7101c7b134  str xzr,[sp, #0xe0]
7101c7b138  str xzr,[sp, #0x110]
7101c7b13c  str xzr,[sp, #0x140]
7101c7b140  str xzr,[sp, #0x170]
7101c7b144  strb wzr,[sp, #0x81]
7101c7b148  sturh wzr,[sp, #0x7f]
7101c7b14c  stur wzr,[sp, #0x7b]
7101c7b150  stur x8,[x29, #-0xa0]
7101c7b154  stur x19,[x29, #-0x80]
7101c7b158  bl 0x71003cb050
7101c7b15c  ldur x0,[x29, #-0x80]
7101c7b160  cmp x19,x0
7101c7b164  b.eq 0x7101c7b178
7101c7b168  cbz x0,0x7101c7b184
7101c7b16c  ldr x8,[x0]
7101c7b170  ldr x8,[x8, #0x28]
7101c7b174  b 0x7101c7b180
7101c7b178  ldr x8,[x0]
7101c7b17c  ldr x8,[x8, #0x20]
7101c7b180  blr x8
7101c7b184  add x8,sp,#0x60
7101c7b188  add x1,x8,#0xc0
7101c7b18c  adrp x8,0x7105186000
7101c7b190  add x8,x8,#0x238
7101c7b194  sub x19,x29,#0xa0
7101c7b198  stur x19,[x29, #-0x80]
7101c7b19c  sub x0,x29,#0xa0
7101c7b1a0  stur x8,[x29, #-0xa0]
7101c7b1a4  bl 0x71003cb050
7101c7b1a8  ldur x0,[x29, #-0x80]
7101c7b1ac  cmp x19,x0
7101c7b1b0  b.eq 0x7101c7b1c4
7101c7b1b4  cbz x0,0x7101c7b1d0
7101c7b1b8  ldr x8,[x0]
7101c7b1bc  ldr x8,[x8, #0x28]
7101c7b1c0  b 0x7101c7b1cc
7101c7b1c4  ldr x8,[x0]
7101c7b1c8  ldr x8,[x8, #0x20]
7101c7b1cc  blr x8
7101c7b1d0  add x8,sp,#0x60
7101c7b1d4  add x1,x8,#0x30
7101c7b1d8  adrp x8,0x7105186000
7101c7b1dc  add x8,x8,#0x160
7101c7b1e0  sub x19,x29,#0xa0
7101c7b1e4  stur x19,[x29, #-0x80]
7101c7b1e8  sub x0,x29,#0xa0
7101c7b1ec  stur x8,[x29, #-0xa0]
7101c7b1f0  bl 0x71003cb050
7101c7b1f4  ldur x0,[x29, #-0x80]
7101c7b1f8  cmp x19,x0
7101c7b1fc  b.eq 0x7101c7b210
7101c7b200  cbz x0,0x7101c7b21c
7101c7b204  ldr x8,[x0]
7101c7b208  ldr x8,[x8, #0x28]
7101c7b20c  b 0x7101c7b218
7101c7b210  ldr x8,[x0]
7101c7b214  ldr x8,[x8, #0x20]
7101c7b218  blr x8
7101c7b21c  add x8,sp,#0x60
7101c7b220  add x1,x8,#0x60
7101c7b224  adrp x8,0x7105186000
7101c7b228  add x8,x8,#0x1a8
7101c7b22c  sub x19,x29,#0xa0
7101c7b230  stur x19,[x29, #-0x80]
7101c7b234  sub x0,x29,#0xa0
7101c7b238  stur x8,[x29, #-0xa0]
7101c7b23c  bl 0x71003cb050
7101c7b240  ldur x0,[x29, #-0x80]
7101c7b244  cmp x19,x0
7101c7b248  b.eq 0x7101c7b25c
7101c7b24c  cbz x0,0x7101c7b268
7101c7b250  ldr x8,[x0]
7101c7b254  ldr x8,[x8, #0x28]
7101c7b258  b 0x7101c7b264
7101c7b25c  ldr x8,[x0]
7101c7b260  ldr x8,[x8, #0x20]
7101c7b264  blr x8
7101c7b268  ldp x8,x9,[x20, #0x18]
7101c7b26c  sub x8,x9,x8
7101c7b270  lsr x8,x8,#0x3
7101c7b274  add x0,x20,#0x120
7101c7b278  adrp x2,0x710424f000
7101c7b27c  add x2,x2,#0xc05
7101c7b280  add x3,sp,#0x60
7101c7b284  mov x1,x21
7101c7b288  mov x4,x20
7101c7b28c  str w8,[sp, #0x64]
7101c7b290  add x19,sp,#0x60
7101c7b294  bl 0x7103781a20
7101c7b298  ldr x0,[x20, #0x120]
7101c7b29c  ldr x8,[x0]
7101c7b2a0  ldr x8,[x8, #0x70]
7101c7b2a4  mov w1,wzr
7101c7b2a8  blr x8
7101c7b2ac  ldr x0,[x20, #0x120]
7101c7b2b0  ldr x8,[x0]
7101c7b2b4  ldr x8,[x8, #0x60]
7101c7b2b8  mov w1,#0x1
7101c7b2bc  blr x8
7101c7b2c0  ldr x0,[sp, #0x170]
7101c7b2c4  add x8,x19,#0xf0
7101c7b2c8  cmp x8,x0
7101c7b2cc  b.eq 0x7101c7b2e0
7101c7b2d0  cbz x0,0x7101c7b2ec
7101c7b2d4  ldr x8,[x0]
7101c7b2d8  ldr x8,[x8, #0x28]
7101c7b2dc  b 0x7101c7b2e8
7101c7b2e0  ldr x8,[x0]
7101c7b2e4  ldr x8,[x8, #0x20]
7101c7b2e8  blr x8
7101c7b2ec  ldr x0,[sp, #0x140]
7101c7b2f0  add x8,sp,#0x60
7101c7b2f4  add x8,x8,#0xc0
7101c7b2f8  cmp x8,x0
7101c7b2fc  b.eq 0x7101c7b310
7101c7b300  cbz x0,0x7101c7b31c
7101c7b304  ldr x8,[x0]
7101c7b308  ldr x8,[x8, #0x28]
7101c7b30c  b 0x7101c7b318
7101c7b310  ldr x8,[x0]
7101c7b314  ldr x8,[x8, #0x20]
7101c7b318  blr x8
7101c7b31c  ldr x0,[sp, #0x110]
7101c7b320  add x8,sp,#0x60
7101c7b324  add x8,x8,#0x90
7101c7b328  cmp x8,x0
7101c7b32c  b.eq 0x7101c7b340
7101c7b330  cbz x0,0x7101c7b34c
7101c7b334  ldr x8,[x0]
7101c7b338  ldr x8,[x8, #0x28]
7101c7b33c  b 0x7101c7b348
7101c7b340  ldr x8,[x0]
7101c7b344  ldr x8,[x8, #0x20]
7101c7b348  blr x8
7101c7b34c  ldr x0,[sp, #0xe0]
7101c7b350  add x8,sp,#0x60
7101c7b354  add x8,x8,#0x60
7101c7b358  cmp x8,x0
7101c7b35c  b.eq 0x7101c7b370
7101c7b360  cbz x0,0x7101c7b37c
7101c7b364  ldr x8,[x0]
7101c7b368  ldr x8,[x8, #0x28]
7101c7b36c  b 0x7101c7b378
7101c7b370  ldr x8,[x0]
7101c7b374  ldr x8,[x8, #0x20]
7101c7b378  blr x8
7101c7b37c  ldr x0,[sp, #0xb0]
7101c7b380  add x8,sp,#0x60
7101c7b384  add x8,x8,#0x30
7101c7b388  cmp x8,x0
7101c7b38c  b.eq 0x7101c7b3a0
7101c7b390  cbz x0,0x7101c7b3ac
7101c7b394  ldr x8,[x0]
7101c7b398  ldr x8,[x8, #0x28]
7101c7b39c  b 0x7101c7b3a8
7101c7b3a0  ldr x8,[x0]
7101c7b3a4  ldr x8,[x8, #0x20]
7101c7b3a8  blr x8
7101c7b3ac  str x21,[sp, #0x20]
7101c7b3b0  ldp x9,x8,[x20, #0x160]
7101c7b3b4  add x24,x20,#0x158
7101c7b3b8  cmp x9,x8
7101c7b3bc  b.cs 0x7101c7b3d4
7101c7b3c0  str wzr,[x9]
7101c7b3c4  ldr x8,[x20, #0x160]
7101c7b3c8  add x19,x8,#0x4
7101c7b3cc  str x19,[x20, #0x160]
7101c7b3d0  b 0x7101c7b4c0
7101c7b3d4  ldr x25,[x24]
7101c7b3d8  sub x26,x9,x25
7101c7b3dc  asr x19,x26,#0x2
7101c7b3e0  add x9,x19,#0x1
7101c7b3e4  lsr x10,x9,#0x3e
7101c7b3e8  cbnz x10,0x7101c7bfac
7101c7b3ec  sub x8,x8,x25
7101c7b3f0  asr x10,x8,#0x2
7101c7b3f4  orr x11,xzr,#0x1ffffffffffffffe
7101c7b3f8  cmp x10,x11
7101c7b3fc  b.hi 0x7101c7b41c
7101c7b400  asr x8,x8,#0x1
7101c7b404  cmp x8,x9
7101c7b408  csel x21,x9,x8,cc
7101c7b40c  cbz x21,0x7101c7b480
7101c7b410  lsr x8,x21,#0x3e
7101c7b414  cbz x8,0x7101c7b420
7101c7b418  b 0x7101c7b974
7101c7b41c  orr x21,xzr,#0x3fffffffffffffff
7101c7b420  lsl x8,x21,#0x2
7101c7b424  cmp x8,#0x0
7101c7b428  csinc x28,x8,xzr,ne
7101c7b42c  mov w0,#0x10
7101c7b430  mov x1,x28
7101c7b434  bl 0x710392e290
7101c7b438  mov x27,x0
7101c7b43c  cbnz x0,0x7101c7b484
7101c7b440  adrp x8,0x7105332000
7101c7b444  ldr x0,[x8, #0xf00]
7101c7b448  cbz x0,0x7101c7b480
7101c7b44c  stur wzr,[x29, #-0xa0]
7101c7b450  str x28,[sp, #0x60]
7101c7b454  ldr x8,[x0]
7101c7b458  ldr x8,[x8, #0x30]
7101c7b45c  sub x1,x29,#0xa0
7101c7b460  add x2,sp,#0x60
7101c7b464  blr x8
7101c7b468  tbz w0,#0x0,0x7101c7b480
7101c7b46c  mov w0,#0x10
7101c7b470  mov x1,x28
7101c7b474  bl 0x710392e290
7101c7b478  mov x27,x0
7101c7b47c  cbnz x0,0x7101c7b484
7101c7b480  mov x27,xzr
7101c7b484  add x19,x27,x19, LSL #0x2
7101c7b488  add x21,x27,x21, LSL #0x2
7101c7b48c  cmp x26,#0x1
7101c7b490  str wzr,[x19], #0x4
7101c7b494  b.lt 0x7101c7b4a8
7101c7b498  mov x0,x27
7101c7b49c  mov x1,x25
7101c7b4a0  mov x2,x26
7101c7b4a4  bl 0x71039c00e0
7101c7b4a8  stp x27,x19,[x20, #0x158]
7101c7b4ac  str x21,[x20, #0x168]
7101c7b4b0  cbz x25,0x7101c7b4c0
7101c7b4b4  mov x0,x25
7101c7b4b8  bl 0x710392eb40
7101c7b4bc  ldr x19,[x20, #0x160]
7101c7b4c0  ldr x8,[x20, #0x168]
7101c7b4c4  cmp x19,x8
7101c7b4c8  b.cs 0x7101c7b4e4
7101c7b4cc  mov w8,#0x1
7101c7b4d0  str w8,[x19]
7101c7b4d4  ldr x8,[x20, #0x160]
7101c7b4d8  add x19,x8,#0x4
7101c7b4dc  str x19,[x20, #0x160]
7101c7b4e0  b 0x7101c7b5d4
7101c7b4e4  ldr x25,[x24]
7101c7b4e8  sub x26,x19,x25
7101c7b4ec  asr x19,x26,#0x2
7101c7b4f0  add x9,x19,#0x1
7101c7b4f4  lsr x10,x9,#0x3e
7101c7b4f8  cbnz x10,0x7101c7bfac
7101c7b4fc  sub x8,x8,x25
7101c7b500  asr x10,x8,#0x2
7101c7b504  orr x11,xzr,#0x1ffffffffffffffe
7101c7b508  cmp x10,x11
7101c7b50c  b.hi 0x7101c7b52c
7101c7b510  asr x8,x8,#0x1
7101c7b514  cmp x8,x9
7101c7b518  csel x21,x9,x8,cc
7101c7b51c  cbz x21,0x7101c7b590
7101c7b520  lsr x8,x21,#0x3e
7101c7b524  cbz x8,0x7101c7b530
7101c7b528  b 0x7101c7b974
7101c7b52c  orr x21,xzr,#0x3fffffffffffffff
7101c7b530  lsl x8,x21,#0x2
7101c7b534  cmp x8,#0x0
7101c7b538  csinc x28,x8,xzr,ne
7101c7b53c  mov w0,#0x10
7101c7b540  mov x1,x28
7101c7b544  bl 0x710392e290
7101c7b548  mov x27,x0
7101c7b54c  cbnz x0,0x7101c7b594
7101c7b550  adrp x8,0x7105332000
7101c7b554  ldr x0,[x8, #0xf00]
7101c7b558  cbz x0,0x7101c7b590
7101c7b55c  stur wzr,[x29, #-0xa0]
7101c7b560  str x28,[sp, #0x60]
7101c7b564  ldr x8,[x0]
7101c7b568  ldr x8,[x8, #0x30]
7101c7b56c  sub x1,x29,#0xa0
7101c7b570  add x2,sp,#0x60
7101c7b574  blr x8
7101c7b578  tbz w0,#0x0,0x7101c7b590
7101c7b57c  mov w0,#0x10
7101c7b580  mov x1,x28
7101c7b584  bl 0x710392e290
7101c7b588  mov x27,x0
7101c7b58c  cbnz x0,0x7101c7b594
7101c7b590  mov x27,xzr
7101c7b594  add x19,x27,x19, LSL #0x2
7101c7b598  mov w8,#0x1
7101c7b59c  add x21,x27,x21, LSL #0x2
7101c7b5a0  str w8,[x19], #0x4
7101c7b5a4  cmp x26,#0x1
7101c7b5a8  b.lt 0x7101c7b5bc
7101c7b5ac  mov x0,x27
7101c7b5b0  mov x1,x25
7101c7b5b4  mov x2,x26
7101c7b5b8  bl 0x71039c00e0
7101c7b5bc  stp x27,x19,[x20, #0x158]
7101c7b5c0  str x21,[x20, #0x168]
7101c7b5c4  cbz x25,0x7101c7b5d4
7101c7b5c8  mov x0,x25
7101c7b5cc  bl 0x710392eb40
7101c7b5d0  ldr x19,[x20, #0x160]
7101c7b5d4  ldr x8,[x20, #0x168]
7101c7b5d8  cmp x19,x8
7101c7b5dc  b.cs 0x7101c7b5f8
7101c7b5e0  mov w8,#0x2
7101c7b5e4  str w8,[x19]
7101c7b5e8  ldr x8,[x20, #0x160]
7101c7b5ec  add x19,x8,#0x4
7101c7b5f0  str x19,[x20, #0x160]
7101c7b5f4  b 0x7101c7b6e8
7101c7b5f8  ldr x25,[x24]
7101c7b5fc  sub x26,x19,x25
7101c7b600  asr x19,x26,#0x2
7101c7b604  add x9,x19,#0x1
7101c7b608  lsr x10,x9,#0x3e
7101c7b60c  cbnz x10,0x7101c7bfac
7101c7b610  sub x8,x8,x25
7101c7b614  asr x10,x8,#0x2
7101c7b618  orr x11,xzr,#0x1ffffffffffffffe
7101c7b61c  cmp x10,x11
7101c7b620  b.hi 0x7101c7b640
7101c7b624  asr x8,x8,#0x1
7101c7b628  cmp x8,x9
7101c7b62c  csel x21,x9,x8,cc
7101c7b630  cbz x21,0x7101c7b6a4
7101c7b634  lsr x8,x21,#0x3e
7101c7b638  cbz x8,0x7101c7b644
7101c7b63c  b 0x7101c7b974
7101c7b640  orr x21,xzr,#0x3fffffffffffffff
7101c7b644  lsl x8,x21,#0x2
7101c7b648  cmp x8,#0x0
7101c7b64c  csinc x28,x8,xzr,ne
7101c7b650  mov w0,#0x10
7101c7b654  mov x1,x28
7101c7b658  bl 0x710392e290
7101c7b65c  mov x27,x0
7101c7b660  cbnz x0,0x7101c7b6a8
7101c7b664  adrp x8,0x7105332000
7101c7b668  ldr x0,[x8, #0xf00]
7101c7b66c  cbz x0,0x7101c7b6a4
7101c7b670  stur wzr,[x29, #-0xa0]
7101c7b674  str x28,[sp, #0x60]
7101c7b678  ldr x8,[x0]
7101c7b67c  ldr x8,[x8, #0x30]
7101c7b680  sub x1,x29,#0xa0
7101c7b684  add x2,sp,#0x60
7101c7b688  blr x8
7101c7b68c  tbz w0,#0x0,0x7101c7b6a4
7101c7b690  mov w0,#0x10
7101c7b694  mov x1,x28
7101c7b698  bl 0x710392e290
7101c7b69c  mov x27,x0
7101c7b6a0  cbnz x0,0x7101c7b6a8
7101c7b6a4  mov x27,xzr
7101c7b6a8  add x19,x27,x19, LSL #0x2
7101c7b6ac  mov w8,#0x2
7101c7b6b0  add x21,x27,x21, LSL #0x2
7101c7b6b4  str w8,[x19], #0x4
7101c7b6b8  cmp x26,#0x1
7101c7b6bc  b.lt 0x7101c7b6d0
7101c7b6c0  mov x0,x27
7101c7b6c4  mov x1,x25
7101c7b6c8  mov x2,x26
7101c7b6cc  bl 0x71039c00e0
7101c7b6d0  stp x27,x19,[x20, #0x158]
7101c7b6d4  str x21,[x20, #0x168]
7101c7b6d8  cbz x25,0x7101c7b6e8
7101c7b6dc  mov x0,x25
7101c7b6e0  bl 0x710392eb40
7101c7b6e4  ldr x19,[x20, #0x160]
7101c7b6e8  ldr x8,[x20, #0x168]
7101c7b6ec  cmp x19,x8
7101c7b6f0  b.cs 0x7101c7b70c
7101c7b6f4  orr w8,wzr,#0x3
7101c7b6f8  str w8,[x19]
7101c7b6fc  ldr x8,[x20, #0x160]
7101c7b700  add x19,x8,#0x4
7101c7b704  str x19,[x20, #0x160]
7101c7b708  b 0x7101c7b7fc
7101c7b70c  ldr x25,[x24]
7101c7b710  sub x26,x19,x25
7101c7b714  asr x19,x26,#0x2
7101c7b718  add x9,x19,#0x1
7101c7b71c  lsr x10,x9,#0x3e
7101c7b720  cbnz x10,0x7101c7bfac
7101c7b724  sub x8,x8,x25
7101c7b728  asr x10,x8,#0x2
7101c7b72c  orr x11,xzr,#0x1ffffffffffffffe
7101c7b730  cmp x10,x11
7101c7b734  b.hi 0x7101c7b754
7101c7b738  asr x8,x8,#0x1
7101c7b73c  cmp x8,x9
7101c7b740  csel x21,x9,x8,cc
7101c7b744  cbz x21,0x7101c7b7b8
7101c7b748  lsr x8,x21,#0x3e
7101c7b74c  cbz x8,0x7101c7b758
7101c7b750  b 0x7101c7b974
7101c7b754  orr x21,xzr,#0x3fffffffffffffff
7101c7b758  lsl x8,x21,#0x2
7101c7b75c  cmp x8,#0x0
7101c7b760  csinc x28,x8,xzr,ne
7101c7b764  mov w0,#0x10
7101c7b768  mov x1,x28
7101c7b76c  bl 0x710392e290
7101c7b770  mov x27,x0
7101c7b774  cbnz x0,0x7101c7b7bc
7101c7b778  adrp x8,0x7105332000
7101c7b77c  ldr x0,[x8, #0xf00]
7101c7b780  cbz x0,0x7101c7b7b8
7101c7b784  stur wzr,[x29, #-0xa0]
7101c7b788  str x28,[sp, #0x60]
7101c7b78c  ldr x8,[x0]
7101c7b790  ldr x8,[x8, #0x30]
7101c7b794  sub x1,x29,#0xa0
7101c7b798  add x2,sp,#0x60
7101c7b79c  blr x8
7101c7b7a0  tbz w0,#0x0,0x7101c7b7b8
7101c7b7a4  mov w0,#0x10
7101c7b7a8  mov x1,x28
7101c7b7ac  bl 0x710392e290
7101c7b7b0  mov x27,x0
7101c7b7b4  cbnz x0,0x7101c7b7bc
7101c7b7b8  mov x27,xzr
7101c7b7bc  add x19,x27,x19, LSL #0x2
7101c7b7c0  orr w8,wzr,#0x3
7101c7b7c4  add x21,x27,x21, LSL #0x2
7101c7b7c8  str w8,[x19], #0x4
7101c7b7cc  cmp x26,#0x1
7101c7b7d0  b.lt 0x7101c7b7e4
7101c7b7d4  mov x0,x27
7101c7b7d8  mov x1,x25
7101c7b7dc  mov x2,x26
7101c7b7e0  bl 0x71039c00e0
7101c7b7e4  stp x27,x19,[x20, #0x158]
7101c7b7e8  str x21,[x20, #0x168]
7101c7b7ec  cbz x25,0x7101c7b7fc
7101c7b7f0  mov x0,x25
7101c7b7f4  bl 0x710392eb40
7101c7b7f8  ldr x19,[x20, #0x160]
7101c7b7fc  ldr x8,[x20, #0x168]
7101c7b800  cmp x19,x8
7101c7b804  b.cs 0x7101c7b820
7101c7b808  mov w8,#0x4
7101c7b80c  str w8,[x19]
7101c7b810  ldr x8,[x20, #0x160]
7101c7b814  add x19,x8,#0x4
7101c7b818  str x19,[x20, #0x160]
7101c7b81c  b 0x7101c7b910
7101c7b820  ldr x25,[x24]
7101c7b824  sub x26,x19,x25
7101c7b828  asr x19,x26,#0x2
7101c7b82c  add x9,x19,#0x1
7101c7b830  lsr x10,x9,#0x3e
7101c7b834  cbnz x10,0x7101c7bfac
7101c7b838  sub x8,x8,x25
7101c7b83c  asr x10,x8,#0x2
7101c7b840  orr x11,xzr,#0x1ffffffffffffffe
7101c7b844  cmp x10,x11
7101c7b848  b.hi 0x7101c7b868
7101c7b84c  asr x8,x8,#0x1
7101c7b850  cmp x8,x9
7101c7b854  csel x21,x9,x8,cc
7101c7b858  cbz x21,0x7101c7b8cc
7101c7b85c  lsr x8,x21,#0x3e
7101c7b860  cbz x8,0x7101c7b86c
7101c7b864  b 0x7101c7b974
7101c7b868  orr x21,xzr,#0x3fffffffffffffff
7101c7b86c  lsl x8,x21,#0x2
7101c7b870  cmp x8,#0x0
7101c7b874  csinc x28,x8,xzr,ne
7101c7b878  mov w0,#0x10
7101c7b87c  mov x1,x28
7101c7b880  bl 0x710392e290
7101c7b884  mov x27,x0
7101c7b888  cbnz x0,0x7101c7b8d0
7101c7b88c  adrp x8,0x7105332000
7101c7b890  ldr x0,[x8, #0xf00]
7101c7b894  cbz x0,0x7101c7b8cc
7101c7b898  stur wzr,[x29, #-0xa0]
7101c7b89c  str x28,[sp, #0x60]
7101c7b8a0  ldr x8,[x0]
7101c7b8a4  ldr x8,[x8, #0x30]
7101c7b8a8  sub x1,x29,#0xa0
7101c7b8ac  add x2,sp,#0x60
7101c7b8b0  blr x8
7101c7b8b4  tbz w0,#0x0,0x7101c7b8cc
7101c7b8b8  mov w0,#0x10
7101c7b8bc  mov x1,x28
7101c7b8c0  bl 0x710392e290
7101c7b8c4  mov x27,x0
7101c7b8c8  cbnz x0,0x7101c7b8d0
7101c7b8cc  mov x27,xzr
7101c7b8d0  add x19,x27,x19, LSL #0x2
7101c7b8d4  mov w8,#0x4
7101c7b8d8  add x21,x27,x21, LSL #0x2
7101c7b8dc  str w8,[x19], #0x4
7101c7b8e0  cmp x26,#0x1
7101c7b8e4  b.lt 0x7101c7b8f8
7101c7b8e8  mov x0,x27
7101c7b8ec  mov x1,x25
7101c7b8f0  mov x2,x26
7101c7b8f4  bl 0x71039c00e0
7101c7b8f8  stp x27,x19,[x20, #0x158]
7101c7b8fc  str x21,[x20, #0x168]
7101c7b900  cbz x25,0x7101c7b910
7101c7b904  mov x0,x25
7101c7b908  bl 0x710392eb40
7101c7b90c  ldr x19,[x20, #0x160]
7101c7b910  ldr x8,[x20, #0x168]
7101c7b914  cmp x19,x8
7101c7b918  b.cs 0x7101c7b930
7101c7b91c  str w23,[x19]
7101c7b920  ldr x8,[x20, #0x160]
7101c7b924  add x28,x8,#0x4
7101c7b928  str x28,[x20, #0x160]
7101c7b92c  b 0x7101c7ba1c
7101c7b930  ldr x25,[x24]
7101c7b934  sub x26,x19,x25
7101c7b938  asr x19,x26,#0x2
7101c7b93c  add x9,x19,#0x1
7101c7b940  lsr x10,x9,#0x3e
7101c7b944  cbnz x10,0x7101c7bfac
7101c7b948  sub x8,x8,x25
7101c7b94c  asr x10,x8,#0x2
7101c7b950  orr x11,xzr,#0x1ffffffffffffffe
7101c7b954  cmp x10,x11
7101c7b958  b.hi 0x7101c7b978
7101c7b95c  asr x8,x8,#0x1
7101c7b960  cmp x8,x9
7101c7b964  csel x21,x9,x8,cc
7101c7b968  cbz x21,0x7101c7b9dc
7101c7b96c  lsr x8,x21,#0x3e
7101c7b970  cbz x8,0x7101c7b97c
7101c7b974  bl 0x71039c2650
7101c7b978  orr x21,xzr,#0x3fffffffffffffff
7101c7b97c  lsl x8,x21,#0x2
7101c7b980  cmp x8,#0x0
7101c7b984  csinc x24,x8,xzr,ne
7101c7b988  mov w0,#0x10
7101c7b98c  mov x1,x24
7101c7b990  bl 0x710392e290
7101c7b994  mov x27,x0
7101c7b998  cbnz x0,0x7101c7b9e0
7101c7b99c  adrp x8,0x7105332000
7101c7b9a0  ldr x0,[x8, #0xf00]
7101c7b9a4  cbz x0,0x7101c7b9dc
7101c7b9a8  stur wzr,[x29, #-0xa0]
7101c7b9ac  str x24,[sp, #0x60]
7101c7b9b0  ldr x8,[x0]
7101c7b9b4  ldr x8,[x8, #0x30]
7101c7b9b8  sub x1,x29,#0xa0
7101c7b9bc  add x2,sp,#0x60
7101c7b9c0  blr x8
7101c7b9c4  tbz w0,#0x0,0x7101c7b9dc
7101c7b9c8  mov w0,#0x10
7101c7b9cc  mov x1,x24
7101c7b9d0  bl 0x710392e290
7101c7b9d4  mov x27,x0
7101c7b9d8  cbnz x0,0x7101c7b9e0
7101c7b9dc  mov x27,xzr
7101c7b9e0  add x28,x27,x19, LSL #0x2
7101c7b9e4  add x19,x27,x21, LSL #0x2
7101c7b9e8  cmp x26,#0x1
7101c7b9ec  str w23,[x28], #0x4
7101c7b9f0  b.lt 0x7101c7ba04
7101c7b9f4  mov x0,x27
7101c7b9f8  mov x1,x25
7101c7b9fc  mov x2,x26
7101c7ba00  bl 0x71039c00e0
7101c7ba04  stp x27,x28,[x20, #0x158]
7101c7ba08  str x19,[x20, #0x168]
7101c7ba0c  cbz x25,0x7101c7ba1c
7101c7ba10  mov x0,x25
7101c7ba14  bl 0x710392eb40
7101c7ba18  ldr x28,[x20, #0x160]
7101c7ba1c  stp xzr,xzr,[x29, #-0x98]
7101c7ba20  mov w25,#0x9dc5
7101c7ba24  movk w25,#0x811c, LSL #16
7101c7ba28  stur xzr,[x29, #-0xa0]
7101c7ba2c  ldr x23,[x20, #0x158]
7101c7ba30  sub x8,x29,#0xa0
7101c7ba34  cmp x23,x28
7101c7ba38  str x22,[sp, #0x18]
7101c7ba3c  b.eq 0x7101c7bbe0
7101c7ba40  add x26,sp,#0x60
7101c7ba44  add x24,x8,#0x8
7101c7ba48  adrp x22,0x71042b4000
7101c7ba4c  add x22,x22,#0x47c
7101c7ba50  add x27,x26,#0x9
7101c7ba54  mov w19,#0x89
7101c7ba58  adrp x21,0x71050ad000
7101c7ba5c  add x21,x21,#0x8d0
7101c7ba60  ldr w8,[x23]
7101c7ba64  sub w8,w8,#0x1
7101c7ba68  cmp w8,#0x4
7101c7ba6c  mov x9,x22
7101c7ba70  b.hi 0x7101c7ba78
7101c7ba74  ldr x9,[x21, w8, SXTW #0x3]
7101c7ba78  mov x8,xzr
7101c7ba7c  str xzr,[sp, #0x60]
7101c7ba80  add x10,x9,x8
7101c7ba84  ldrb w12,[x10]
7101c7ba88  cbz w12,0x7101c7bac8
7101c7ba8c  add x11,x26,x8
7101c7ba90  strb w12,[x11, #0x8]
7101c7ba94  ldrb w12,[x10, #0x1]
7101c7ba98  cbz w12,0x7101c7babc
7101c7ba9c  strb w12,[x11, #0x9]
7101c7baa0  ldrb w10,[x10, #0x2]
7101c7baa4  cbz w10,0x7101c7bac4
7101c7baa8  add x8,x8,#0x3
7101c7baac  cmp w8,#0x3f
7101c7bab0  strb w10,[x11, #0xa]
7101c7bab4  b.cc 0x7101c7ba80
7101c7bab8  b 0x7101c7bac8
7101c7babc  add x8,x8,#0x1
7101c7bac0  b 0x7101c7bac8
7101c7bac4  add x8,x8,#0x2
7101c7bac8  add x9,x26,#0x8
7101c7bacc  strb wzr,[x9, w8, UXTW ]
7101c7bad0  ldrb w10,[sp, #0x68]
7101c7bad4  str w8,[sp, #0x64]
7101c7bad8  mov w8,w25
7101c7badc  cbz w10,0x7101c7bb00
7101c7bae0  mov x9,x27
7101c7bae4  mov w11,w10
7101c7bae8  mov w8,w25
7101c7baec  mul w8,w8,w19
7101c7baf0  and w11,w11,#0xff
7101c7baf4  eor w8,w8,w11
7101c7baf8  ldrb w11,[x9], #0x1
7101c7bafc  cbnz w11,0x7101c7baec
7101c7bb00  str w8,[sp, #0x60]
7101c7bb04  ldp x8,x9,[x29, #-0x98]
7101c7bb08  cmp x8,x9
7101c7bb0c  b.cs 0x7101c7bb70
7101c7bb10  mov x11,x8
7101c7bb14  mov x9,xzr
7101c7bb18  str wzr,[x11], #0xa
7101c7bb1c  tst w10,#0xff
7101c7bb20  b.ne 0x7101c7bb38
7101c7bb24  b 0x7101c7bb8c
7101c7bb28  ldrb w10,[x10, #0x2]
7101c7bb2c  add x9,x9,#0x3
7101c7bb30  tst w10,#0xff
7101c7bb34  b.eq 0x7101c7bb8c
7101c7bb38  add x12,x11,x9
7101c7bb3c  sturb w10,[x12, #-0x2]
7101c7bb40  ldrb w13,[x27, x9, LSL ]
7101c7bb44  cbz w13,0x7101c7bb80
7101c7bb48  add x10,x27,x9
7101c7bb4c  sturb w13,[x12, #-0x1]
7101c7bb50  ldrb w12,[x10, #0x1]
7101c7bb54  cbz w12,0x7101c7bb88
7101c7bb58  add w13,w9,#0x3
7101c7bb5c  cmp w13,#0x3e
7101c7bb60  strb w12,[x11, x9, LSL ]
7101c7bb64  b.ls 0x7101c7bb28
7101c7bb68  add w9,w9,#0x3
7101c7bb6c  b 0x7101c7bb8c
7101c7bb70  sub x0,x29,#0xa0
7101c7bb74  add x1,sp,#0x60
7101c7bb78  bl 0x71019c1c50
7101c7bb7c  b 0x7101c7bbd0
7101c7bb80  add x9,x9,#0x1
7101c7bb84  b 0x7101c7bb8c
7101c7bb88  add x9,x9,#0x2
7101c7bb8c  add x10,x8,#0x8
7101c7bb90  strb wzr,[x10, w9, UXTW ]
7101c7bb94  str w9,[x8, #0x4]
7101c7bb98  ldrb w9,[x8, #0x8]
7101c7bb9c  mov w11,w25
7101c7bba0  cbz w9,0x7101c7bbc0
7101c7bba4  add x10,x8,#0x9
7101c7bba8  mov w11,w25
7101c7bbac  mul w11,w11,w19
7101c7bbb0  and w9,w9,#0xff
7101c7bbb4  eor w11,w11,w9
7101c7bbb8  ldrb w9,[x10], #0x1
7101c7bbbc  cbnz w9,0x7101c7bbac
7101c7bbc0  str w11,[x8]
7101c7bbc4  ldur x8,[x29, #-0x98]
7101c7bbc8  add x8,x8,#0x48
7101c7bbcc  stur x8,[x29, #-0x98]
7101c7bbd0  add x23,x23,#0x4
7101c7bbd4  cmp x23,x28
7101c7bbd8  b.ne 0x7101c7ba60
7101c7bbdc  b 0x7101c7bbe4
7101c7bbe0  add x24,x8,#0x8
7101c7bbe4  ldr x8,[x20, #0x10]
7101c7bbe8  ldrb w1,[x8, #0xd14]
7101c7bbec  mov x0,x20
7101c7bbf0  bl 0x7101c79d10
7101c7bbf4  ldr x8,[sp]
7101c7bbf8  ldr x1,[x8]
7101c7bbfc  add x23,x20,#0x128
7101c7bc00  adrp x2,0x7104545000
7101c7bc04  add x2,x2,#0x258
7101c7bc08  mov w3,#0x1
7101c7bc0c  mov x0,x23
7101c7bc10  bl 0x71032cbf30
7101c7bc14  ldr x8,[x20, #0x128]
7101c7bc18  ldr x8,[x8]
7101c7bc1c  ldr x0,[x8]
7101c7bc20  mov w1,wzr
7101c7bc24  bl 0x71037760f0
7101c7bc28  add x8,sp,#0x60
7101c7bc2c  add x0,x8,#0x20
7101c7bc30  stp xzr,xzr,[sp, #0x70]
7101c7bc34  bl 0x7103776290
7101c7bc38  str wzr,[sp, #0x68]
7101c7bc3c  adrp x19,0x71052a8000
7101c7bc40  ldr x19,[x19, #0xa80]
7101c7bc44  ldr x0,[sp, #0x20]
7101c7bc48  ldr q0,[x19]
7101c7bc4c  ldr x8,[sp, #0x88]
7101c7bc50  str q0,[sp, #0x70]
7101c7bc54  str xzr,[x8, #0x8]
7101c7bc58  mov w8,#0xb
7101c7bc5c  str x8,[sp, #0x60]
7101c7bc60  adrp x1,0x7104281000
7101c7bc64  add x1,x1,#0x205
7101c7bc68  add x8,sp,#0x50
7101c7bc6c  bl 0x7103776640
7101c7bc70  ldr x22,[sp, #0x58]
7101c7bc74  ldr x8,[x22]
7101c7bc78  ldr x9,[sp, #0x88]
7101c7bc7c  str x8,[x9]
7101c7bc80  ldr x8,[x22, #0x8]
7101c7bc84  ldr x9,[sp, #0x88]
7101c7bc88  str x8,[x9, #0x8]
7101c7bc8c  ldr x8,[sp, #0x88]
7101c7bc90  cmp x8,x22
7101c7bc94  b.eq 0x7101c7bcd8
7101c7bc98  ldr x9,[x22, #0x18]
7101c7bc9c  ldr x9,[x9]
7101c7bca0  ldr x10,[x8, #0x18]
7101c7bca4  str x9,[x10]
7101c7bca8  ldr x9,[x22, #0x18]
7101c7bcac  ldr x9,[x9, #0x8]
7101c7bcb0  ldr x10,[x8, #0x18]
7101c7bcb4  str x9,[x10, #0x8]
7101c7bcb8  ldr x9,[x22, #0x18]
7101c7bcbc  ldr x9,[x9, #0x10]
7101c7bcc0  ldr x10,[x8, #0x18]
7101c7bcc4  str x9,[x10, #0x10]
7101c7bcc8  ldr x9,[x22, #0x18]
7101c7bccc  ldr x9,[x9, #0x18]
7101c7bcd0  ldr x8,[x8, #0x18]
7101c7bcd4  str x9,[x8, #0x18]
7101c7bcd8  ldr x8,[x22, #0x18]
7101c7bcdc  ldr x8,[x8]
7101c7bce0  cbz x8,0x7101c7bcfc
7101c7bce4  movi v0.2D,#0x0
7101c7bce8  add x9,x8,#0x30
7101c7bcec  add x8,x8,#0x34
7101c7bcf0  ld1 {v0.S}[0],[x9]
7101c7bcf4  ld1 {v0.S}[1],[x8]
7101c7bcf8  b 0x7101c7bd00
7101c7bcfc  ldr q0,[x19]
7101c7bd00  ldr x0,[sp, #0x20]
7101c7bd04  adrp x1,0x710436c000
7101c7bd08  add x1,x1,#0x6bc
7101c7bd0c  add x8,sp,#0x28
7101c7bd10  str q0,[sp]
7101c7bd14  bl 0x7103776910
7101c7bd18  ldr x0,[sp, #0x30]
7101c7bd1c  ldr x8,[x0]
7101c7bd20  cbz x8,0x7101c7bd3c
7101c7bd24  movi v0.2D,#0x0
7101c7bd28  add x9,x8,#0x30
7101c7bd2c  add x8,x8,#0x34
7101c7bd30  ld1 {v0.S}[0],[x9]
7101c7bd34  ld1 {v0.S}[1],[x8]
7101c7bd38  b 0x7101c7bd40
7101c7bd3c  ldr q0,[x19]
7101c7bd40  ldr q1,[sp]
7101c7bd44  fadd v0.4S,v1.4S,v0.4S
7101c7bd48  adrp x26,0x710523d000
7101c7bd4c  add x26,x26,#0x9a8
7101c7bd50  stp x26,xzr,[sp, #0x28]
7101c7bd54  str q0,[sp, #0x70]
7101c7bd58  cbz x0,0x7101c7bd60
7101c7bd5c  bl 0x710392eb40
7101c7bd60  ldr x0,[sp, #0x20]
7101c7bd64  adrp x1,0x710436c000
7101c7bd68  add x1,x1,#0xc09
7101c7bd6c  add x8,sp,#0x40
7101c7bd70  bl 0x7103776640
7101c7bd74  ldr x19,[x24]
7101c7bd78  ldur x27,[x29, #-0xa0]
7101c7bd7c  str xzr,[sp, #0x28]
7101c7bd80  stp xzr,xzr,[sp, #0x30]
7101c7bd84  subs x21,x19,x27
7101c7bd88  b.eq 0x7101c7bec8
7101c7bd8c  mov x9,#0x8e39
7101c7bd90  movk x9,#0x38e3, LSL #16
7101c7bd94  asr x8,x21,#0x3
7101c7bd98  movk x9,#0xe38e, LSL #32
7101c7bd9c  movk x9,#0x8e38, LSL #48
7101c7bda0  mul x28,x8,x9
7101c7bda4  mov x8,#0xe38f
7101c7bda8  movk x8,#0x8e38, LSL #16
7101c7bdac  movk x8,#0x38e3, LSL #32
7101c7bdb0  movk x8,#0x38e, LSL #48
7101c7bdb4  cmp x28,x8
7101c7bdb8  b.cs 0x7101c7bfb4
7101c7bdbc  mov w0,#0x10
7101c7bdc0  mov x1,x21
7101c7bdc4  bl 0x710392e290
7101c7bdc8  cbnz x0,0x7101c7be0c
7101c7bdcc  adrp x8,0x7105332000
7101c7bdd0  ldr x0,[x8, #0xf00]
7101c7bdd4  cbz x0,0x7101c7be08
7101c7bdd8  stur wzr,[x29, #-0x5c]
7101c7bddc  stur x21,[x29, #-0x68]
7101c7bde0  ldr x8,[x0]
7101c7bde4  ldr x8,[x8, #0x30]
7101c7bde8  sub x1,x29,#0x5c
7101c7bdec  sub x2,x29,#0x68
7101c7bdf0  blr x8
7101c7bdf4  tbz w0,#0x0,0x7101c7be08
7101c7bdf8  mov w0,#0x10
7101c7bdfc  mov x1,x21
7101c7be00  bl 0x710392e290
7101c7be04  cbnz x0,0x7101c7be0c
7101c7be08  mov x0,xzr
7101c7be0c  mov w8,#0x48
7101c7be10  madd x8,x28,x8,x0
7101c7be14  cmp x27,x19
7101c7be18  stp x0,x0,[sp, #0x28]
7101c7be1c  str x8,[sp, #0x38]
7101c7be20  b.eq 0x7101c7bec8
7101c7be24  mov w8,#0x89
7101c7be28  mov x9,xzr
7101c7be2c  str wzr,[x0]
7101c7be30  add x10,x27,x9
7101c7be34  ldrb w12,[x10, #0x8]
7101c7be38  cbz w12,0x7101c7be78
7101c7be3c  add x11,x0,x9
7101c7be40  strb w12,[x11, #0x8]
7101c7be44  ldrb w12,[x10, #0x9]
7101c7be48  cbz w12,0x7101c7be6c
7101c7be4c  strb w12,[x11, #0x9]
7101c7be50  ldrb w10,[x10, #0xa]
7101c7be54  cbz w10,0x7101c7be74
7101c7be58  add x9,x9,#0x3
7101c7be5c  cmp w9,#0x3f
7101c7be60  strb w10,[x11, #0xa]
7101c7be64  b.cc 0x7101c7be30
7101c7be68  b 0x7101c7be78
7101c7be6c  add x9,x9,#0x1
7101c7be70  b 0x7101c7be78
7101c7be74  add x9,x9,#0x2
7101c7be78  add x10,x0,#0x8
7101c7be7c  strb wzr,[x10, w9, UXTW ]
7101c7be80  str w9,[x0, #0x4]
7101c7be84  ldrb w9,[x0, #0x8]
7101c7be88  mov w11,w25
7101c7be8c  cbz w9,0x7101c7beac
7101c7be90  add x10,x0,#0x9
7101c7be94  mov w11,w25
7101c7be98  mul w11,w11,w8
7101c7be9c  and w9,w9,#0xff
7101c7bea0  eor w11,w11,w9
7101c7bea4  ldrb w9,[x10], #0x1
7101c7bea8  cbnz w9,0x7101c7be98
7101c7beac  str w11,[x0]
7101c7beb0  ldr x9,[sp, #0x30]
7101c7beb4  add x27,x27,#0x48
7101c7beb8  cmp x27,x19
7101c7bebc  add x0,x9,#0x48
7101c7bec0  str x0,[sp, #0x30]
7101c7bec4  b.ne 0x7101c7be28
7101c7bec8  add x0,x20,#0x130
7101c7becc  add x2,sp,#0x28
7101c7bed0  add x3,sp,#0x60
7101c7bed4  add x4,sp,#0x40
7101c7bed8  mov x1,x23
7101c7bedc  bl 0x71032ccb70
7101c7bee0  ldr x0,[sp, #0x28]
7101c7bee4  cbz x0,0x7101c7bef0
7101c7bee8  str x0,[sp, #0x30]
7101c7beec  bl 0x710392eb40
7101c7bef0  ldr x8,[sp, #0x18]
7101c7bef4  ldr x8,[x8]
7101c7bef8  ldr x8,[x8]
7101c7befc  ldr x8,[x8]
7101c7bf00  ldr x8,[x8, #0x600]
7101c7bf04  mov w9,#0xa00
7101c7bf08  str w9,[x8, #0x68]
7101c7bf0c  ldr x19,[sp, #0x48]
7101c7bf10  adrp x20,0x710523d000
7101c7bf14  add x20,x20,#0x988
7101c7bf18  stp x20,xzr,[sp, #0x40]
7101c7bf1c  cbz x19,0x7101c7bf38
7101c7bf20  ldr x0,[x19, #0x18]
7101c7bf24  stp x26,xzr,[x19, #0x10]
7101c7bf28  cbz x0,0x7101c7bf30
7101c7bf2c  bl 0x710392eb40
7101c7bf30  mov x0,x19
7101c7bf34  bl 0x710392eb40
7101c7bf38  stp x20,xzr,[sp, #0x50]
7101c7bf3c  cbz x22,0x7101c7bf58
7101c7bf40  ldr x0,[x22, #0x18]
7101c7bf44  stp x26,xzr,[x22, #0x10]
7101c7bf48  cbz x0,0x7101c7bf50
7101c7bf4c  bl 0x710392eb40
7101c7bf50  mov x0,x22
7101c7bf54  bl 0x710392eb40
7101c7bf58  ldr x19,[sp, #0x88]
7101c7bf5c  stp x20,xzr,[sp, #0x80]
7101c7bf60  cbz x19,0x7101c7bf7c
7101c7bf64  ldr x0,[x19, #0x18]
7101c7bf68  stp x26,xzr,[x19, #0x10]
7101c7bf6c  cbz x0,0x7101c7bf74
7101c7bf70  bl 0x710392eb40
7101c7bf74  mov x0,x19
7101c7bf78  bl 0x710392eb40
7101c7bf7c  ldur x0,[x29, #-0xa0]
7101c7bf80  cbz x0,0x7101c7bf8c
7101c7bf84  str x0,[x24]
7101c7bf88  bl 0x710392eb40
7101c7bf8c  add sp,sp,#0x1e0
7101c7bf90  ldp x29,x30,[sp, #0x50]
7101c7bf94  ldp x20,x19,[sp, #0x40]
7101c7bf98  ldp x22,x21,[sp, #0x30]
7101c7bf9c  ldp x24,x23,[sp, #0x20]
7101c7bfa0  ldp x26,x25,[sp, #0x10]
7101c7bfa4  ldp x28,x27,[sp], #0x60
7101c7bfa8  ret
7101c7bfac  mov x0,x24
7101c7bfb0  bl 0x71039c0c00
7101c7bfb4  add x0,sp,#0x28
7101c7bfb8  bl 0x71039c0c00
