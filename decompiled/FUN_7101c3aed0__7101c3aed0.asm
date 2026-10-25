// addr:      7101c3aed0
// offset:    0x1c3aed0
// name:      FUN_7101c3aed0
// mangled:   
// size:      7708

7101c3aed0  stp d9,d8,[sp, #-0x70]!
7101c3aed4  stp x28,x27,[sp, #0x10]
7101c3aed8  stp x26,x25,[sp, #0x20]
7101c3aedc  stp x24,x23,[sp, #0x30]
7101c3aee0  stp x22,x21,[sp, #0x40]
7101c3aee4  stp x20,x19,[sp, #0x50]
7101c3aee8  stp x29,x30,[sp, #0x60]
7101c3aeec  add x29,sp,#0x60
7101c3aef0  sub sp,sp,#0x3, LSL #12
7101c3aef4  sub sp,sp,#0x3e0
7101c3aef8  adrp x8,0x71050ad000
7101c3aefc  add x8,x8,#0x3c8
7101c3af00  mov w19,#0x1
7101c3af04  stp x2,x3,[sp, #0x78]
7101c3af08  strb wzr,[x0, #0x58]
7101c3af0c  stp x8,xzr,[x0]
7101c3af10  orr x8,xzr,#0x1ffffffff
7101c3af14  stp xzr,xzr,[x0, #0x10]
7101c3af18  stp xzr,xzr,[x0, #0x48]
7101c3af1c  stp xzr,x8,[x0, #0x60]
7101c3af20  stp x0,x1,[sp, #0x28]
7101c3af24  str x1,[x0, #0x78]
7101c3af28  mov w1,#0x2298
7101c3af2c  strb w19,[x0, #0x70]
7101c3af30  mov w0,#0x10
7101c3af34  bl 0x710392e290
7101c3af38  mov x21,x0
7101c3af3c  cbnz x0,0x7101c3af8c
7101c3af40  adrp x8,0x7105332000
7101c3af44  ldr x0,[x8, #0xf00]
7101c3af48  cbz x0,0x7101c3af88
7101c3af4c  mov w8,#0x2298
7101c3af50  str wzr,[sp, #0x3220]
7101c3af54  add x1,sp,#0x3, LSL #12
7101c3af58  str x8,[sp, #0xd0]
7101c3af5c  ldr x8,[x0]
7101c3af60  ldr x8,[x8, #0x30]
7101c3af64  add x1,x1,#0x220
7101c3af68  add x2,sp,#0xd0
7101c3af6c  blr x8
7101c3af70  tbz w0,#0x0,0x7101c3af88
7101c3af74  mov w1,#0x2298
7101c3af78  mov w0,#0x10
7101c3af7c  bl 0x710392e290
7101c3af80  mov x21,x0
7101c3af84  cbnz x0,0x7101c3af8c
7101c3af88  mov x21,xzr
7101c3af8c  adrp x8,0x71050ad000
7101c3af90  add x8,x8,#0x3a8
7101c3af94  add x0,x21,#0x8
7101c3af98  str x8,[x21]
7101c3af9c  bl 0x7101c2e760
7101c3afa0  add x0,x21,#0x408
7101c3afa4  bl 0x7101c2e760
7101c3afa8  add x0,x21,#0x808
7101c3afac  bl 0x7101c2e980
7101c3afb0  add x0,x21,#0xc08
7101c3afb4  bl 0x7101c2e980
7101c3afb8  mov w8,#0x1008
7101c3afbc  add x0,x21,x8
7101c3afc0  bl 0x7101c2e980
7101c3afc4  mov w8,#0x1408
7101c3afc8  add x0,x21,x8
7101c3afcc  bl 0x7101c2e980
7101c3afd0  mov w8,#0x1808
7101c3afd4  add x0,x21,x8
7101c3afd8  bl 0x7101c2e760
7101c3afdc  mov w8,#0x1c08
7101c3afe0  add x0,x21,x8
7101c3afe4  bl 0x7101c2e760
7101c3afe8  mov w8,#0x2008
7101c3afec  mov w9,#0x200c
7101c3aff0  strb wzr,[x21, x8, LSL ]
7101c3aff4  mov w8,#0x2
7101c3aff8  str x8,[x21, x9, LSL #0x0]
7101c3affc  mov w8,#0x2014
7101c3b000  strh w19,[x21, x8, LSL #0x0]
7101c3b004  mov w8,#0x2016
7101c3b008  strb wzr,[x21, x8, LSL ]
7101c3b00c  mov w8,#0x2030
7101c3b010  add x0,x21,x8
7101c3b014  str xzr,[x21, #0x2028]
7101c3b018  str xzr,[x21, #0x2020]
7101c3b01c  str xzr,[x21, #0x2018]
7101c3b020  bl 0x7103391a80
7101c3b024  mov w9,#0xffffffff
7101c3b028  str x9,[x21, #0x21b0]
7101c3b02c  str w9,[x21, #0x21b8]
7101c3b030  mov w9,#0x2060
7101c3b034  mov w8,#0x21bc
7101c3b038  mov w2,#0x14c
7101c3b03c  add x0,x21,x9
7101c3b040  mov w1,wzr
7101c3b044  str x21,[x21, #0x2038]
7101c3b048  str wzr,[x21, #0x21ac]
7101c3b04c  str xzr,[x21, #0x2058]
7101c3b050  str xzr,[x21, #0x2050]
7101c3b054  str xzr,[x21, #0x2048]
7101c3b058  str xzr,[x21, #0x2040]
7101c3b05c  strb wzr,[x21, x8, LSL ]
7101c3b060  bl 0x71039c02a0
7101c3b064  mov w0,#0x10
7101c3b068  mov w1,#0x8
7101c3b06c  bl 0x710392e290
7101c3b070  mov x19,x0
7101c3b074  cbnz x0,0x7101c3b0c4
7101c3b078  adrp x8,0x7105332000
7101c3b07c  ldr x0,[x8, #0xf00]
7101c3b080  cbz x0,0x7101c3b0c0
7101c3b084  mov w8,#0x8
7101c3b088  str wzr,[sp, #0x3220]
7101c3b08c  add x1,sp,#0x3, LSL #12
7101c3b090  str x8,[sp, #0xd0]
7101c3b094  ldr x8,[x0]
7101c3b098  ldr x8,[x8, #0x30]
7101c3b09c  add x1,x1,#0x220
7101c3b0a0  add x2,sp,#0xd0
7101c3b0a4  blr x8
7101c3b0a8  tbz w0,#0x0,0x7101c3b0c0
7101c3b0ac  mov w0,#0x10
7101c3b0b0  mov w1,#0x8
7101c3b0b4  bl 0x710392e290
7101c3b0b8  mov x19,x0
7101c3b0bc  cbnz x0,0x7101c3b0c4
7101c3b0c0  mov x19,xzr
7101c3b0c4  mov x0,x19
7101c3b0c8  bl 0x7103773200
7101c3b0cc  mov w0,#0x10
7101c3b0d0  mov w1,#0x8
7101c3b0d4  str x19,[x21, #0x21c0]
7101c3b0d8  bl 0x710392e290
7101c3b0dc  mov x19,x0
7101c3b0e0  cbnz x0,0x7101c3b130
7101c3b0e4  adrp x8,0x7105332000
7101c3b0e8  ldr x0,[x8, #0xf00]
7101c3b0ec  cbz x0,0x7101c3b12c
7101c3b0f0  mov w8,#0x8
7101c3b0f4  str wzr,[sp, #0x3220]
7101c3b0f8  add x1,sp,#0x3, LSL #12
7101c3b0fc  str x8,[sp, #0xd0]
7101c3b100  ldr x8,[x0]
7101c3b104  ldr x8,[x8, #0x30]
7101c3b108  add x1,x1,#0x220
7101c3b10c  add x2,sp,#0xd0
7101c3b110  blr x8
7101c3b114  tbz w0,#0x0,0x7101c3b12c
7101c3b118  mov w0,#0x10
7101c3b11c  mov w1,#0x8
7101c3b120  bl 0x710392e290
7101c3b124  mov x19,x0
7101c3b128  cbnz x0,0x7101c3b130
7101c3b12c  mov x19,xzr
7101c3b130  mov x0,x19
7101c3b134  bl 0x7103773200
7101c3b138  mov w0,#0x10
7101c3b13c  mov w1,#0x8
7101c3b140  str x19,[x21, #0x21c8]
7101c3b144  bl 0x710392e290
7101c3b148  mov x19,x0
7101c3b14c  cbnz x0,0x7101c3b19c
7101c3b150  adrp x8,0x7105332000
7101c3b154  ldr x0,[x8, #0xf00]
7101c3b158  cbz x0,0x7101c3b198
7101c3b15c  mov w8,#0x8
7101c3b160  str wzr,[sp, #0x3220]
7101c3b164  add x1,sp,#0x3, LSL #12
7101c3b168  str x8,[sp, #0xd0]
7101c3b16c  ldr x8,[x0]
7101c3b170  ldr x8,[x8, #0x30]
7101c3b174  add x1,x1,#0x220
7101c3b178  add x2,sp,#0xd0
7101c3b17c  blr x8
7101c3b180  tbz w0,#0x0,0x7101c3b198
7101c3b184  mov w0,#0x10
7101c3b188  mov w1,#0x8
7101c3b18c  bl 0x710392e290
7101c3b190  mov x19,x0
7101c3b194  cbnz x0,0x7101c3b19c
7101c3b198  mov x19,xzr
7101c3b19c  mov x0,x19
7101c3b1a0  bl 0x7103773200
7101c3b1a4  mov w0,#0x10
7101c3b1a8  mov w1,#0x8
7101c3b1ac  str x19,[x21, #0x21d0]
7101c3b1b0  bl 0x710392e290
7101c3b1b4  mov x19,x0
7101c3b1b8  cbnz x0,0x7101c3b208
7101c3b1bc  adrp x8,0x7105332000
7101c3b1c0  ldr x0,[x8, #0xf00]
7101c3b1c4  cbz x0,0x7101c3b204
7101c3b1c8  mov w8,#0x8
7101c3b1cc  str wzr,[sp, #0x3220]
7101c3b1d0  add x1,sp,#0x3, LSL #12
7101c3b1d4  str x8,[sp, #0xd0]
7101c3b1d8  ldr x8,[x0]
7101c3b1dc  ldr x8,[x8, #0x30]
7101c3b1e0  add x1,x1,#0x220
7101c3b1e4  add x2,sp,#0xd0
7101c3b1e8  blr x8
7101c3b1ec  tbz w0,#0x0,0x7101c3b204
7101c3b1f0  mov w0,#0x10
7101c3b1f4  mov w1,#0x8
7101c3b1f8  bl 0x710392e290
7101c3b1fc  mov x19,x0
7101c3b200  cbnz x0,0x7101c3b208
7101c3b204  mov x19,xzr
7101c3b208  mov x0,x19
7101c3b20c  bl 0x7103773200
7101c3b210  mov w0,#0x10
7101c3b214  mov w1,#0x8
7101c3b218  str x19,[x21, #0x21d8]
7101c3b21c  bl 0x710392e290
7101c3b220  mov x19,x0
7101c3b224  cbnz x0,0x7101c3b274
7101c3b228  adrp x8,0x7105332000
7101c3b22c  ldr x0,[x8, #0xf00]
7101c3b230  cbz x0,0x7101c3b270
7101c3b234  mov w8,#0x8
7101c3b238  str wzr,[sp, #0x3220]
7101c3b23c  add x1,sp,#0x3, LSL #12
7101c3b240  str x8,[sp, #0xd0]
7101c3b244  ldr x8,[x0]
7101c3b248  ldr x8,[x8, #0x30]
7101c3b24c  add x1,x1,#0x220
7101c3b250  add x2,sp,#0xd0
7101c3b254  blr x8
7101c3b258  tbz w0,#0x0,0x7101c3b270
7101c3b25c  mov w0,#0x10
7101c3b260  mov w1,#0x8
7101c3b264  bl 0x710392e290
7101c3b268  mov x19,x0
7101c3b26c  cbnz x0,0x7101c3b274
7101c3b270  mov x19,xzr
7101c3b274  mov x0,x19
7101c3b278  bl 0x7103773200
7101c3b27c  mov w0,#0x10
7101c3b280  mov w1,#0x8
7101c3b284  str x19,[x21, #0x21e0]
7101c3b288  bl 0x710392e290
7101c3b28c  mov x19,x0
7101c3b290  cbnz x0,0x7101c3b2e0
7101c3b294  adrp x8,0x7105332000
7101c3b298  ldr x0,[x8, #0xf00]
7101c3b29c  cbz x0,0x7101c3b2dc
7101c3b2a0  mov w8,#0x8
7101c3b2a4  str wzr,[sp, #0x3220]
7101c3b2a8  add x1,sp,#0x3, LSL #12
7101c3b2ac  str x8,[sp, #0xd0]
7101c3b2b0  ldr x8,[x0]
7101c3b2b4  ldr x8,[x8, #0x30]
7101c3b2b8  add x1,x1,#0x220
7101c3b2bc  add x2,sp,#0xd0
7101c3b2c0  blr x8
7101c3b2c4  tbz w0,#0x0,0x7101c3b2dc
7101c3b2c8  mov w0,#0x10
7101c3b2cc  mov w1,#0x8
7101c3b2d0  bl 0x710392e290
7101c3b2d4  mov x19,x0
7101c3b2d8  cbnz x0,0x7101c3b2e0
7101c3b2dc  mov x19,xzr
7101c3b2e0  mov x0,x19
7101c3b2e4  bl 0x7103773200
7101c3b2e8  mov w0,#0x10
7101c3b2ec  mov w1,#0x8
7101c3b2f0  str x19,[x21, #0x21e8]
7101c3b2f4  bl 0x710392e290
7101c3b2f8  mov x19,x0
7101c3b2fc  cbnz x0,0x7101c3b34c
7101c3b300  adrp x8,0x7105332000
7101c3b304  ldr x0,[x8, #0xf00]
7101c3b308  cbz x0,0x7101c3b348
7101c3b30c  mov w8,#0x8
7101c3b310  str wzr,[sp, #0x3220]
7101c3b314  add x1,sp,#0x3, LSL #12
7101c3b318  str x8,[sp, #0xd0]
7101c3b31c  ldr x8,[x0]
7101c3b320  ldr x8,[x8, #0x30]
7101c3b324  add x1,x1,#0x220
7101c3b328  add x2,sp,#0xd0
7101c3b32c  blr x8
7101c3b330  tbz w0,#0x0,0x7101c3b348
7101c3b334  mov w0,#0x10
7101c3b338  mov w1,#0x8
7101c3b33c  bl 0x710392e290
7101c3b340  mov x19,x0
7101c3b344  cbnz x0,0x7101c3b34c
7101c3b348  mov x19,xzr
7101c3b34c  mov x0,x19
7101c3b350  bl 0x7103773200
7101c3b354  mov w0,#0x10
7101c3b358  mov w1,#0x8
7101c3b35c  str x19,[x21, #0x21f0]
7101c3b360  bl 0x710392e290
7101c3b364  mov x19,x0
7101c3b368  cbnz x0,0x7101c3b3b8
7101c3b36c  adrp x8,0x7105332000
7101c3b370  ldr x0,[x8, #0xf00]
7101c3b374  cbz x0,0x7101c3b3b4
7101c3b378  mov w8,#0x8
7101c3b37c  str wzr,[sp, #0x3220]
7101c3b380  add x1,sp,#0x3, LSL #12
7101c3b384  str x8,[sp, #0xd0]
7101c3b388  ldr x8,[x0]
7101c3b38c  ldr x8,[x8, #0x30]
7101c3b390  add x1,x1,#0x220
7101c3b394  add x2,sp,#0xd0
7101c3b398  blr x8
7101c3b39c  tbz w0,#0x0,0x7101c3b3b4
7101c3b3a0  mov w0,#0x10
7101c3b3a4  mov w1,#0x8
7101c3b3a8  bl 0x710392e290
7101c3b3ac  mov x19,x0
7101c3b3b0  cbnz x0,0x7101c3b3b8
7101c3b3b4  mov x19,xzr
7101c3b3b8  mov x0,x19
7101c3b3bc  mov w26,#0x21c0
7101c3b3c0  mov w27,#0x21c8
7101c3b3c4  mov w24,#0x21d0
7101c3b3c8  mov w20,#0x21d8
7101c3b3cc  mov w23,#0x21e8
7101c3b3d0  mov w28,#0x21f0
7101c3b3d4  mov w22,#0x21f8
7101c3b3d8  bl 0x7103773200
7101c3b3dc  mov w0,#0x10
7101c3b3e0  mov w1,#0x8
7101c3b3e4  str x19,[x21, #0x21f8]
7101c3b3e8  mov w25,#0x2200
7101c3b3ec  bl 0x710392e290
7101c3b3f0  mov x19,x0
7101c3b3f4  cbnz x0,0x7101c3b444
7101c3b3f8  adrp x8,0x7105332000
7101c3b3fc  ldr x0,[x8, #0xf00]
7101c3b400  cbz x0,0x7101c3b440
7101c3b404  mov w8,#0x8
7101c3b408  str wzr,[sp, #0x3220]
7101c3b40c  add x1,sp,#0x3, LSL #12
7101c3b410  str x8,[sp, #0xd0]
7101c3b414  ldr x8,[x0]
7101c3b418  ldr x8,[x8, #0x30]
7101c3b41c  add x1,x1,#0x220
7101c3b420  add x2,sp,#0xd0
7101c3b424  blr x8
7101c3b428  tbz w0,#0x0,0x7101c3b440
7101c3b42c  mov w0,#0x10
7101c3b430  mov w1,#0x8
7101c3b434  bl 0x710392e290
7101c3b438  mov x19,x0
7101c3b43c  cbnz x0,0x7101c3b444
7101c3b440  mov x19,xzr
7101c3b444  mov x0,x19
7101c3b448  bl 0x7103773200
7101c3b44c  ldr x8,[sp, #0x80]
7101c3b450  str x8,[x21, #0x2208]
7101c3b454  adrp x8,0x710523d000
7101c3b458  add x8,x8,#0x9a8
7101c3b45c  mov w0,#0x10
7101c3b460  mov w1,#0x20
7101c3b464  str x19,[x21, #0x2200]
7101c3b468  str x8,[x21, #0x2210]
7101c3b46c  bl 0x710392e290
7101c3b470  cbnz x0,0x7101c3b4bc
7101c3b474  adrp x8,0x7105332000
7101c3b478  ldr x0,[x8, #0xf00]
7101c3b47c  cbz x0,0x7101c3b4b8
7101c3b480  mov w8,#0x20
7101c3b484  str wzr,[sp, #0x3220]
7101c3b488  add x1,sp,#0x3, LSL #12
7101c3b48c  str x8,[sp, #0xd0]
7101c3b490  ldr x8,[x0]
7101c3b494  ldr x8,[x8, #0x30]
7101c3b498  add x1,x1,#0x220
7101c3b49c  add x2,sp,#0xd0
7101c3b4a0  blr x8
7101c3b4a4  tbz w0,#0x0,0x7101c3b4b8
7101c3b4a8  mov w0,#0x10
7101c3b4ac  mov w1,#0x20
7101c3b4b0  bl 0x710392e290
7101c3b4b4  cbnz x0,0x7101c3b4bc
7101c3b4b8  mov x0,xzr
7101c3b4bc  add x8,x21,x26
7101c3b4c0  add x26,x21,x27
7101c3b4c4  add x27,x21,x24
7101c3b4c8  str x8,[sp, #0x70]
7101c3b4cc  add x8,x21,x20
7101c3b4d0  add x20,x21,x25
7101c3b4d4  str x8,[sp, #0x38]
7101c3b4d8  mov w8,#0x21e0
7101c3b4dc  add x8,x21,x8
7101c3b4e0  stp xzr,xzr,[x0, #0x10]
7101c3b4e4  str x8,[sp, #0x80]
7101c3b4e8  stp xzr,xzr,[x0]
7101c3b4ec  adrp x19,0x710523d000
7101c3b4f0  add x19,x19,#0x9a8
7101c3b4f4  mov w1,#0x20
7101c3b4f8  add x24,x21,x23
7101c3b4fc  str x0,[x21, #0x2218]
7101c3b500  mov w0,#0x10
7101c3b504  add x28,x21,x28
7101c3b508  add x22,x21,x22
7101c3b50c  str x19,[x21, #0x2220]
7101c3b510  bl 0x710392e290
7101c3b514  cbnz x0,0x7101c3b560
7101c3b518  adrp x8,0x7105332000
7101c3b51c  ldr x0,[x8, #0xf00]
7101c3b520  cbz x0,0x7101c3b55c
7101c3b524  mov w8,#0x20
7101c3b528  str wzr,[sp, #0x3220]
7101c3b52c  add x1,sp,#0x3, LSL #12
7101c3b530  str x8,[sp, #0xd0]
7101c3b534  ldr x8,[x0]
7101c3b538  ldr x8,[x8, #0x30]
7101c3b53c  add x1,x1,#0x220
7101c3b540  add x2,sp,#0xd0
7101c3b544  blr x8
7101c3b548  tbz w0,#0x0,0x7101c3b55c
7101c3b54c  mov w0,#0x10
7101c3b550  mov w1,#0x20
7101c3b554  bl 0x710392e290
7101c3b558  cbnz x0,0x7101c3b560
7101c3b55c  mov x0,xzr
7101c3b560  stp xzr,xzr,[x0, #0x10]
7101c3b564  mov w1,#0x20
7101c3b568  stp xzr,xzr,[x0]
7101c3b56c  mov w23,#0x20
7101c3b570  str x0,[x21, #0x2228]
7101c3b574  mov w0,#0x10
7101c3b578  str x19,[x21, #0x2230]
7101c3b57c  bl 0x710392e290
7101c3b580  cbnz x0,0x7101c3b5cc
7101c3b584  adrp x8,0x7105332000
7101c3b588  ldr x0,[x8, #0xf00]
7101c3b58c  cbz x0,0x7101c3b5c8
7101c3b590  mov w8,#0x20
7101c3b594  str wzr,[sp, #0x3220]
7101c3b598  add x1,sp,#0x3, LSL #12
7101c3b59c  str x8,[sp, #0xd0]
7101c3b5a0  ldr x8,[x0]
7101c3b5a4  ldr x8,[x8, #0x30]
7101c3b5a8  add x1,x1,#0x220
7101c3b5ac  add x2,sp,#0xd0
7101c3b5b0  blr x8
7101c3b5b4  tbz w0,#0x0,0x7101c3b5c8
7101c3b5b8  mov w0,#0x10
7101c3b5bc  mov w1,#0x20
7101c3b5c0  bl 0x710392e290
7101c3b5c4  cbnz x0,0x7101c3b5cc
7101c3b5c8  mov x0,xzr
7101c3b5cc  stp xzr,xzr,[x0, #0x10]
7101c3b5d0  mov w8,#0x2240
7101c3b5d4  stp xzr,xzr,[x0]
7101c3b5d8  ldr x9,[sp, #0x78]
7101c3b5dc  adrp x10,0x710532f000
7101c3b5e0  mov w1,wzr
7101c3b5e4  str x0,[x21, #0x2238]
7101c3b5e8  ldrh w9,[x9]
7101c3b5ec  strh w9,[x21, x8, LSL #0x0]
7101c3b5f0  mov w8,#0xffffffff
7101c3b5f4  str w8,[x21, #0x2244]
7101c3b5f8  mov w8,#0x2248
7101c3b5fc  mov w9,#0x1
7101c3b600  strb w9,[x21, x8, LSL ]
7101c3b604  mov x8,#0x650000000000
7101c3b608  movk x8,#0x87, LSL #48
7101c3b60c  str x8,[x21, #0x2268]
7101c3b610  mov w8,#0x2270
7101c3b614  str xzr,[x21, #0x2260]
7101c3b618  adrp x9,0x7101c31000
7101c3b61c  add x9,x9,#0xf10
7101c3b620  strb wzr,[x21, x8, LSL ]
7101c3b624  adrp x8,0x7104f73000
7101c3b628  add x8,x8,#0xd30
7101c3b62c  str x8,[x21, #0x2258]
7101c3b630  mov x8,#-0x1
7101c3b634  str x8,[x21, #0x2278]
7101c3b638  mov w8,#0x2290
7101c3b63c  str wzr,[x21, #0x2250]
7101c3b640  strh wzr,[x21, x8, LSL #0x0]
7101c3b644  adrp x8,0x7101c30000
7101c3b648  add x8,x8,#0x230
7101c3b64c  str x8,[x21, #0x2060]
7101c3b650  adrp x8,0x7101c30000
7101c3b654  add x8,x8,#0x520
7101c3b658  str x8,[x21, #0x2070]
7101c3b65c  adrp x8,0x7101c30000
7101c3b660  add x8,x8,#0x990
7101c3b664  str x8,[x21, #0x2080]
7101c3b668  adrp x8,0x7101c30000
7101c3b66c  add x8,x8,#0xa50
7101c3b670  str x8,[x21, #0x2090]
7101c3b674  adrp x8,0x7101c30000
7101c3b678  add x8,x8,#0xb10
7101c3b67c  str x8,[x21, #0x20a0]
7101c3b680  adrp x8,0x7101c31000
7101c3b684  add x8,x8,#0xc0
7101c3b688  str x8,[x21, #0x20b0]
7101c3b68c  adrp x8,0x7101c31000
7101c3b690  add x8,x8,#0x230
7101c3b694  str x8,[x21, #0x20c0]
7101c3b698  adrp x8,0x7101c31000
7101c3b69c  add x8,x8,#0x240
7101c3b6a0  str x8,[x21, #0x20d0]
7101c3b6a4  adrp x8,0x7101c31000
7101c3b6a8  add x8,x8,#0x320
7101c3b6ac  str x8,[x21, #0x20e0]
7101c3b6b0  adrp x8,0x7101c31000
7101c3b6b4  add x8,x8,#0x6d0
7101c3b6b8  str x8,[x21, #0x20f0]
7101c3b6bc  adrp x8,0x7101c31000
7101c3b6c0  add x8,x8,#0x880
7101c3b6c4  str x8,[x21, #0x2100]
7101c3b6c8  adrp x8,0x7101c31000
7101c3b6cc  add x8,x8,#0xb60
7101c3b6d0  str x8,[x21, #0x2110]
7101c3b6d4  adrp x8,0x7101c31000
7101c3b6d8  add x8,x8,#0xbd0
7101c3b6dc  str x8,[x21, #0x2120]
7101c3b6e0  adrp x8,0x7101c31000
7101c3b6e4  add x8,x8,#0xea0
7101c3b6e8  str x8,[x21, #0x2130]
7101c3b6ec  adrp x8,0x7101c32000
7101c3b6f0  add x8,x8,#0x140
7101c3b6f4  str xzr,[x21, #0x2288]
7101c3b6f8  str xzr,[x21, #0x2280]
7101c3b6fc  str xzr,[x21, #0x2068]
7101c3b700  str xzr,[x21, #0x2078]
7101c3b704  str xzr,[x21, #0x2088]
7101c3b708  str xzr,[x21, #0x2098]
7101c3b70c  str xzr,[x21, #0x20a8]
7101c3b710  str xzr,[x21, #0x20b8]
7101c3b714  str xzr,[x21, #0x20c8]
7101c3b718  str xzr,[x21, #0x20d8]
7101c3b71c  str xzr,[x21, #0x20e8]
7101c3b720  str xzr,[x21, #0x20f8]
7101c3b724  str xzr,[x21, #0x2108]
7101c3b728  str xzr,[x21, #0x2118]
7101c3b72c  str xzr,[x21, #0x2128]
7101c3b730  str xzr,[x21, #0x2138]
7101c3b734  str x9,[x21, #0x2140]
7101c3b738  str xzr,[x21, #0x2148]
7101c3b73c  str x8,[x21, #0x2150]
7101c3b740  str xzr,[x21, #0x2158]
7101c3b744  ldr x8,[x10, #0x840]
7101c3b748  ldr x8,[x8, #0x8]
7101c3b74c  ldr x0,[x8, #0xb8]
7101c3b750  bl 0x7101af86a0
7101c3b754  ldp x8,x25,[sp, #0x28]
7101c3b758  str x21,[x8, #0x80]
7101c3b75c  ldr x1,[x25]
7101c3b760  ldr x0,[sp, #0x70]
7101c3b764  adrp x2,0x7104545000
7101c3b768  add x2,x2,#0x160
7101c3b76c  mov w3,#0x1
7101c3b770  bl 0x71032cbf30
7101c3b774  ldr x1,[x25]
7101c3b778  adrp x2,0x7104545000
7101c3b77c  add x2,x2,#0x168
7101c3b780  mov w3,#0x1
7101c3b784  mov x0,x26
7101c3b788  bl 0x71032cbf30
7101c3b78c  ldr x1,[x25]
7101c3b790  adrp x2,0x7104545000
7101c3b794  add x2,x2,#0x170
7101c3b798  mov w3,#0x1
7101c3b79c  mov x0,x27
7101c3b7a0  bl 0x71032cbf30
7101c3b7a4  ldr x1,[x25]
7101c3b7a8  ldr x0,[sp, #0x38]
7101c3b7ac  adrp x2,0x7104545000
7101c3b7b0  add x2,x2,#0x178
7101c3b7b4  mov w3,#0x1
7101c3b7b8  bl 0x71032cbf30
7101c3b7bc  ldr x1,[x25]
7101c3b7c0  ldr x0,[sp, #0x80]
7101c3b7c4  adrp x2,0x7104545000
7101c3b7c8  add x2,x2,#0x180
7101c3b7cc  mov w3,#0x1
7101c3b7d0  bl 0x71032cbf30
7101c3b7d4  ldr x1,[x25]
7101c3b7d8  adrp x19,0x7104545000
7101c3b7dc  add x19,x19,#0x188
7101c3b7e0  mov w3,#0x1
7101c3b7e4  mov x0,x24
7101c3b7e8  mov x2,x19
7101c3b7ec  bl 0x71032cbf30
7101c3b7f0  ldr x1,[x25]
7101c3b7f4  mov w3,#0x1
7101c3b7f8  mov x0,x28
7101c3b7fc  mov x2,x19
7101c3b800  bl 0x71032cbf30
7101c3b804  ldr x1,[x25]
7101c3b808  adrp x2,0x7104545000
7101c3b80c  add x2,x2,#0x190
7101c3b810  mov w3,#0x1
7101c3b814  mov x0,x22
7101c3b818  bl 0x71032cbf30
7101c3b81c  ldr x1,[x25]
7101c3b820  adrp x2,0x7104545000
7101c3b824  add x2,x2,#0x198
7101c3b828  mov w3,#0x1
7101c3b82c  mov x0,x20
7101c3b830  bl 0x71032cbf30
7101c3b834  ldr x8,[x21, #0x21d0]
7101c3b838  ldr x8,[x8]
7101c3b83c  ldr x0,[x8]
7101c3b840  mov w1,wzr
7101c3b844  bl 0x71037760f0
7101c3b848  ldr x8,[x21, #0x21d0]
7101c3b84c  ldr x8,[x8]
7101c3b850  ldr x8,[x8]
7101c3b854  ldr x0,[x8, #0x600]
7101c3b858  mov w19,#0x198
7101c3b85c  mov w1,wzr
7101c3b860  mov x2,x19
7101c3b864  bl 0x71039c02a0
7101c3b868  ldr x8,[x21, #0x21d8]
7101c3b86c  ldr x8,[x8]
7101c3b870  ldr x0,[x8]
7101c3b874  mov w1,wzr
7101c3b878  bl 0x71037760f0
7101c3b87c  ldr x8,[x21, #0x21d8]
7101c3b880  ldr x8,[x8]
7101c3b884  ldr x8,[x8]
7101c3b888  ldr x0,[x8, #0x600]
7101c3b88c  mov w1,wzr
7101c3b890  mov x2,x19
7101c3b894  bl 0x71039c02a0
7101c3b898  ldr x8,[x21, #0x21e0]
7101c3b89c  ldr x8,[x8]
7101c3b8a0  ldr x0,[x8]
7101c3b8a4  mov w1,wzr
7101c3b8a8  bl 0x71037760f0
7101c3b8ac  ldr x8,[x21, #0x21e0]
7101c3b8b0  ldr x8,[x8]
7101c3b8b4  ldr x8,[x8]
7101c3b8b8  ldr x0,[x8, #0x600]
7101c3b8bc  mov w1,wzr
7101c3b8c0  mov x2,x19
7101c3b8c4  bl 0x71039c02a0
7101c3b8c8  ldr x8,[x21, #0x21e8]
7101c3b8cc  ldr x8,[x8]
7101c3b8d0  ldr x0,[x8]
7101c3b8d4  mov w1,wzr
7101c3b8d8  bl 0x71037760f0
7101c3b8dc  ldr x8,[x21, #0x21e8]
7101c3b8e0  ldr x8,[x8]
7101c3b8e4  ldr x8,[x8]
7101c3b8e8  ldr x0,[x8, #0x600]
7101c3b8ec  mov w1,wzr
7101c3b8f0  mov x2,x19
7101c3b8f4  bl 0x71039c02a0
7101c3b8f8  ldr x8,[x21, #0x21f0]
7101c3b8fc  ldr x8,[x8]
7101c3b900  ldr x0,[x8]
7101c3b904  mov w1,wzr
7101c3b908  bl 0x71037760f0
7101c3b90c  ldr x8,[x21, #0x21f0]
7101c3b910  ldr x8,[x8]
7101c3b914  ldr x8,[x8]
7101c3b918  ldr x0,[x8, #0x600]
7101c3b91c  mov w1,wzr
7101c3b920  mov x2,x19
7101c3b924  bl 0x71039c02a0
7101c3b928  ldr x8,[x21, #0x21c0]
7101c3b92c  ldr x8,[x8]
7101c3b930  ldr x8,[x8]
7101c3b934  ldr x8,[x8, #0x600]
7101c3b938  str w23,[x8, #0x10]
7101c3b93c  ldr x8,[x21, #0x21c0]
7101c3b940  ldr x8,[x8]
7101c3b944  ldr x8,[x8]
7101c3b948  ldr x8,[x8, #0x600]
7101c3b94c  mov w9,#0x40
7101c3b950  str w9,[x8, #0x14]
7101c3b954  ldr x8,[x21, #0x21c0]
7101c3b958  ldr x8,[x8]
7101c3b95c  ldr x8,[x8]
7101c3b960  ldr x8,[x8, #0x600]
7101c3b964  mov w10,#0x8
7101c3b968  movk w10,#0x80, LSL #16
7101c3b96c  str w10,[x8, #0x18]
7101c3b970  ldr x8,[x21, #0x21c0]
7101c3b974  ldr x8,[x8]
7101c3b978  ldr x8,[x8]
7101c3b97c  ldr x8,[x8, #0x600]
7101c3b980  mov w10,#0x2
7101c3b984  movk w10,#0x20, LSL #16
7101c3b988  str w10,[x8, #0x1c]
7101c3b98c  ldr x8,[x21, #0x21c0]
7101c3b990  ldr x8,[x8]
7101c3b994  ldr x8,[x8]
7101c3b998  ldr x8,[x8, #0x600]
7101c3b99c  mov w10,#0x1
7101c3b9a0  movk w10,#0x10, LSL #16
7101c3b9a4  str w10,[x8, #0x20]
7101c3b9a8  ldr x8,[x21, #0x21c0]
7101c3b9ac  ldr x8,[x8]
7101c3b9b0  ldr x8,[x8]
7101c3b9b4  ldr x8,[x8, #0x600]
7101c3b9b8  mov w10,#0x4
7101c3b9bc  movk w10,#0x40, LSL #16
7101c3b9c0  str w10,[x8, #0x24]
7101c3b9c4  ldr x8,[x21, #0x21c0]
7101c3b9c8  ldr x8,[x8]
7101c3b9cc  ldr x8,[x8]
7101c3b9d0  ldr x8,[x8, #0x600]
7101c3b9d4  mov w10,#0x40000
7101c3b9d8  str w10,[x8, #0x28]
7101c3b9dc  ldr x8,[x21, #0x21c8]
7101c3b9e0  ldr x8,[x8]
7101c3b9e4  ldr x8,[x8]
7101c3b9e8  ldr x8,[x8, #0x600]
7101c3b9ec  str w10,[x8, #0x28]
7101c3b9f0  ldr x8,[x21, #0x21d8]
7101c3b9f4  ldr x8,[x8]
7101c3b9f8  ldr x8,[x8]
7101c3b9fc  ldr x8,[x8, #0x600]
7101c3ba00  str w10,[x8, #0x28]
7101c3ba04  ldr x8,[x21, #0x21c0]
7101c3ba08  ldr x8,[x8]
7101c3ba0c  ldr x8,[x8]
7101c3ba10  ldr x8,[x8, #0x600]
7101c3ba14  orr w10,wzr,#0xbfffffff
7101c3ba18  str w10,[x8, #0x2c]
7101c3ba1c  ldr x8,[x21, #0x21c0]
7101c3ba20  ldr x8,[x8]
7101c3ba24  ldr x8,[x8]
7101c3ba28  ldr x8,[x8, #0x600]
7101c3ba2c  orr w10,wzr,#0xc0000
7101c3ba30  str w10,[x8, #0x30]
7101c3ba34  ldr x8,[x21, #0x21c0]
7101c3ba38  ldr x8,[x8]
7101c3ba3c  ldr x8,[x8]
7101c3ba40  ldr x8,[x8, #0x600]
7101c3ba44  str w9,[x8, #0x34]
7101c3ba48  ldr x8,[x21, #0x21d8]
7101c3ba4c  ldr x8,[x8]
7101c3ba50  add x0,x8,#0x8
7101c3ba54  adrp x1,0x71043cf000
7101c3ba58  add x1,x1,#0x41e
7101c3ba5c  sub x8,x29,#0x80
7101c3ba60  bl 0x7103776910
7101c3ba64  adrp x1,0x7104545000
7101c3ba68  add x1,x1,#0xc50
7101c3ba6c  mov x0,x25
7101c3ba70  mov w2,wzr
7101c3ba74  bl 0x7103240d30
7101c3ba78  mov x1,x0
7101c3ba7c  ldur x0,[x29, #-0x78]
7101c3ba80  bl 0x7103778b80
7101c3ba84  adrp x8,0x7105329000
7101c3ba88  ldr x8,[x8, #0x60]
7101c3ba8c  ldr x8,[x8, #0x8]
7101c3ba90  stur wzr,[x29, #-0xe0]
7101c3ba94  add x1,x8,#0x1b8
7101c3ba98  sub x0,x29,#0xe0
7101c3ba9c  sub x19,x29,#0xe0
7101c3baa0  bl 0x7101c32670
7101c3baa4  ldur w8,[x29, #-0xdc]
7101c3baa8  cbnz w8,0x7101c3bb10
7101c3baac  adrp x2,0x7104306000
7101c3bab0  add x2,x2,#0x2e3
7101c3bab4  add x0,sp,#0xd0
7101c3bab8  mov w1,#0x800
7101c3babc  mov w3,wzr
7101c3bac0  bl 0x71037ab600
7101c3bac4  add x0,sp,#0x3, LSL #12
7101c3bac8  add x20,sp,#0x3, LSL #12
7101c3bacc  add x1,sp,#0xd0
7101c3bad0  add x0,x0,#0x220
7101c3bad4  str xzr,[sp, #0x3220]
7101c3bad8  add x20,x20,#0x220
7101c3badc  bl 0x7101c32670
7101c3bae0  add x1,x20,#0x8
7101c3bae4  sub x0,x29,#0xe0
7101c3bae8  bl 0x7101c32670
7101c3baec  adrp x8,0x7105329000
7101c3baf0  ldr x8,[x8, #0x60]
7101c3baf4  ldr x8,[x8, #0x8]
7101c3baf8  add x0,x8,#0x1b0
7101c3bafc  cmp x0,x19
7101c3bb00  b.eq 0x7101c3bb10
7101c3bb04  sub x8,x29,#0xe0
7101c3bb08  add x1,x8,#0x8
7101c3bb0c  bl 0x7101c32670
7101c3bb10  ldr x8,[x27]
7101c3bb14  ldr x8,[x8]
7101c3bb18  add x0,x8,#0x8
7101c3bb1c  add x8,sp,#0x3, LSL #12
7101c3bb20  adrp x1,0x71043cf000
7101c3bb24  add x1,x1,#0x646
7101c3bb28  add x8,x8,#0x220
7101c3bb2c  bl 0x7103776640
7101c3bb30  add x0,sp,#0x3, LSL #12
7101c3bb34  adrp x1,0x710437c000
7101c3bb38  add x1,x1,#0x772
7101c3bb3c  add x8,sp,#0xd0
7101c3bb40  add x0,x0,#0x220
7101c3bb44  bl 0x7103776910
7101c3bb48  add x22,x19,#0x8
7101c3bb4c  adrp x1,0x71042d6000
7101c3bb50  add x1,x1,#0x236
7101c3bb54  add x0,sp,#0xd0
7101c3bb58  mov w2,#0x1
7101c3bb5c  mov x3,x22
7101c3bb60  bl 0x710377a280
7101c3bb64  ldr x0,[sp, #0xd8]
7101c3bb68  adrp x20,0x710523d000
7101c3bb6c  add x20,x20,#0x9a8
7101c3bb70  stp x20,xzr,[sp, #0xd0]
7101c3bb74  cbz x0,0x7101c3bb7c
7101c3bb78  bl 0x710392eb40
7101c3bb7c  ldr x19,[sp, #0x3228]
7101c3bb80  adrp x8,0x710523d000
7101c3bb84  add x8,x8,#0x988
7101c3bb88  str x8,[sp, #0x3220]
7101c3bb8c  str xzr,[sp, #0x3228]
7101c3bb90  cbz x19,0x7101c3bbac
7101c3bb94  ldr x0,[x19, #0x18]
7101c3bb98  stp x20,xzr,[x19, #0x10]
7101c3bb9c  cbz x0,0x7101c3bba4
7101c3bba0  bl 0x710392eb40
7101c3bba4  mov x0,x19
7101c3bba8  bl 0x710392eb40
7101c3bbac  ldr x8,[x26]
7101c3bbb0  ldr x8,[x8]
7101c3bbb4  add x0,x8,#0x8
7101c3bbb8  add x8,sp,#0x3, LSL #12
7101c3bbbc  adrp x1,0x710434a000
7101c3bbc0  add x1,x1,#0x2b7
7101c3bbc4  add x8,x8,#0x220
7101c3bbc8  bl 0x7103776640
7101c3bbcc  add x0,sp,#0x3, LSL #12
7101c3bbd0  adrp x1,0x710437c000
7101c3bbd4  add x1,x1,#0x772
7101c3bbd8  add x8,sp,#0xd0
7101c3bbdc  add x0,x0,#0x220
7101c3bbe0  bl 0x7103776910
7101c3bbe4  adrp x1,0x71042d6000
7101c3bbe8  add x1,x1,#0x236
7101c3bbec  add x0,sp,#0xd0
7101c3bbf0  mov w2,#0x1
7101c3bbf4  mov x3,x22
7101c3bbf8  bl 0x710377a280
7101c3bbfc  ldr x0,[sp, #0xd8]
7101c3bc00  stp x20,xzr,[sp, #0xd0]
7101c3bc04  cbz x0,0x7101c3bc0c
7101c3bc08  bl 0x710392eb40
7101c3bc0c  ldr x19,[sp, #0x3228]
7101c3bc10  adrp x8,0x710523d000
7101c3bc14  add x8,x8,#0x988
7101c3bc18  str x8,[sp, #0x3220]
7101c3bc1c  str xzr,[sp, #0x3228]
7101c3bc20  cbz x19,0x7101c3bc3c
7101c3bc24  ldr x0,[x19, #0x18]
7101c3bc28  stp x20,xzr,[x19, #0x10]
7101c3bc2c  cbz x0,0x7101c3bc34
7101c3bc30  bl 0x710392eb40
7101c3bc34  mov x0,x19
7101c3bc38  bl 0x710392eb40
7101c3bc3c  ldr x8,[sp, #0x38]
7101c3bc40  ldr x8,[x8]
7101c3bc44  ldr x8,[x8]
7101c3bc48  add x0,x8,#0x8
7101c3bc4c  adrp x1,0x710437c000
7101c3bc50  add x1,x1,#0x772
7101c3bc54  add x8,sp,#0xd0
7101c3bc58  mov w19,#0x2020
7101c3bc5c  mov w25,#0x2028
7101c3bc60  bl 0x7103776910
7101c3bc64  adrp x1,0x71042d6000
7101c3bc68  add x1,x1,#0x236
7101c3bc6c  add x0,sp,#0xd0
7101c3bc70  mov w2,#0x1
7101c3bc74  mov x3,x22
7101c3bc78  bl 0x710377a280
7101c3bc7c  ldr x0,[sp, #0xd8]
7101c3bc80  stp x20,xzr,[sp, #0xd0]
7101c3bc84  cbz x0,0x7101c3bc8c
7101c3bc88  bl 0x710392eb40
7101c3bc8c  ldr x8,[sp, #0x80]
7101c3bc90  ldr x8,[x8]
7101c3bc94  ldr x8,[x8]
7101c3bc98  add x0,x8,#0x8
7101c3bc9c  adrp x1,0x71043cd000
7101c3bca0  add x1,x1,#0xab4
7101c3bca4  add x8,sp,#0xd0
7101c3bca8  mov w20,#0x2210
7101c3bcac  mov w23,#0x2220
7101c3bcb0  mov w24,#0x2230
7101c3bcb4  bl 0x7103776910
7101c3bcb8  adrp x1,0x71042d6000
7101c3bcbc  add x1,x1,#0x236
7101c3bcc0  add x0,sp,#0xd0
7101c3bcc4  mov w2,#0x1
7101c3bcc8  mov x3,x22
7101c3bccc  bl 0x710377a280
7101c3bcd0  ldr x0,[sp, #0xd8]
7101c3bcd4  adrp x8,0x710523d000
7101c3bcd8  add x8,x8,#0x9a8
7101c3bcdc  stp x8,xzr,[sp, #0xd0]
7101c3bce0  cbz x0,0x7101c3bce8
7101c3bce4  bl 0x710392eb40
7101c3bce8  add x8,x21,x19
7101c3bcec  str x8,[sp, #0x18]
7101c3bcf0  add x8,x21,x25
7101c3bcf4  str x8,[sp, #0x20]
7101c3bcf8  ldr x8,[x26]
7101c3bcfc  ldr x8,[x8]
7101c3bd00  add x0,x8,#0x8
7101c3bd04  adrp x1,0x710434a000
7101c3bd08  add x1,x1,#0x2b7
7101c3bd0c  add x8,sp,#0xd0
7101c3bd10  add x22,sp,#0xd0
7101c3bd14  bl 0x7103776640
7101c3bd18  adrp x1,0x710433a000
7101c3bd1c  add x1,x1,#0x373
7101c3bd20  sub x8,x29,#0xf0
7101c3bd24  add x0,sp,#0xd0
7101c3bd28  bl 0x7103776910
7101c3bd2c  ldr x19,[sp, #0xd8]
7101c3bd30  adrp x8,0x710523d000
7101c3bd34  add x8,x8,#0x988
7101c3bd38  adrp x25,0x710523d000
7101c3bd3c  add x25,x25,#0x9a8
7101c3bd40  stp x8,xzr,[sp, #0xd0]
7101c3bd44  cbz x19,0x7101c3bd60
7101c3bd48  ldr x0,[x19, #0x18]
7101c3bd4c  stp x25,xzr,[x19, #0x10]
7101c3bd50  cbz x0,0x7101c3bd58
7101c3bd54  bl 0x710392eb40
7101c3bd58  mov x0,x19
7101c3bd5c  bl 0x710392eb40
7101c3bd60  add x8,x21,x20
7101c3bd64  str x8,[sp]
7101c3bd68  add x8,x21,x23
7101c3bd6c  str x8,[sp, #0x8]
7101c3bd70  add x8,x21,x24
7101c3bd74  adrp x1,0x710436c000
7101c3bd78  add x1,x1,#0x368
7101c3bd7c  sub x0,x29,#0xf0
7101c3bd80  str x8,[sp, #0x10]
7101c3bd84  bl 0x7101c321b0
7101c3bd88  mov w8,#0x1410
7101c3bd8c  add x8,x21,x8
7101c3bd90  str x8,[sp, #0x40]
7101c3bd94  mov w8,#0x1010
7101c3bd98  add x27,x21,x8
7101c3bd9c  sub x8,x22,x21
7101c3bda0  mov x9,#-0x1408
7101c3bda4  add x9,x8,x9
7101c3bda8  str x9,[sp, #0x50]
7101c3bdac  sub x9,x8,#0xc08
7101c3bdb0  str x9,[sp, #0x48]
7101c3bdb4  mov x9,#-0x1c08
7101c3bdb8  add x9,x8,x9
7101c3bdbc  str x9,[sp, #0x68]
7101c3bdc0  sub x9,x8,#0x408
7101c3bdc4  str x9,[sp, #0x60]
7101c3bdc8  orr x9,xzr,#-0x8
7101c3bdcc  sub x9,x9,x21
7101c3bdd0  add x9,x22,x9
7101c3bdd4  str x9,[sp, #0x58]
7101c3bdd8  mov x9,#-0x1008
7101c3bddc  add x9,x8,x9
7101c3bde0  ldr x24,[sp, #0x70]
7101c3bde4  str x9,[sp, #0x80]
7101c3bde8  sub x9,x8,#0x808
7101c3bdec  str x9,[sp, #0x78]
7101c3bdf0  mov x9,#-0x1808
7101c3bdf4  mov x23,xzr
7101c3bdf8  mov x26,xzr
7101c3bdfc  add x20,x8,x9
7101c3be00  cmp x26,#0x20
7101c3be04  b.cs 0x7101c3c080
7101c3be08  ldr x8,[x21, #0x21c0]
7101c3be0c  ldr x8,[x8]
7101c3be10  add x0,x8,#0x8
7101c3be14  add x8,sp,#0xd0
7101c3be18  adrp x1,0x71042f8000
7101c3be1c  add x1,x1,#0x553
7101c3be20  mov w2,w26
7101c3be24  bl 0x7103776640
7101c3be28  ldr x8,[sp, #0x58]
7101c3be2c  add x28,x21,x23
7101c3be30  cmp x8,x23
7101c3be34  b.eq 0x7101c3be64
7101c3be38  ldr x8,[sp, #0xd8]
7101c3be3c  str xzr,[sp, #0xd8]
7101c3be40  ldr x19,[x28, #0x10]
7101c3be44  str x8,[x28, #0x10]
7101c3be48  cbz x19,0x7101c3be64
7101c3be4c  ldr x0,[x19, #0x18]
7101c3be50  stp x25,xzr,[x19, #0x10]
7101c3be54  cbz x0,0x7101c3be5c
7101c3be58  bl 0x710392eb40
7101c3be5c  mov x0,x19
7101c3be60  bl 0x710392eb40
7101c3be64  ldr x19,[sp, #0xd8]
7101c3be68  adrp x8,0x710523d000
7101c3be6c  add x8,x8,#0x988
7101c3be70  stp x8,xzr,[sp, #0xd0]
7101c3be74  cbz x19,0x7101c3be90
7101c3be78  ldr x0,[x19, #0x18]
7101c3be7c  stp x25,xzr,[x19, #0x10]
7101c3be80  cbz x0,0x7101c3be88
7101c3be84  bl 0x710392eb40
7101c3be88  mov x0,x19
7101c3be8c  bl 0x710392eb40
7101c3be90  ldr x8,[x21, #0x21c0]
7101c3be94  ldr x8,[x8]
7101c3be98  add x19,x26,#0x20
7101c3be9c  mov w2,w19
7101c3bea0  add x0,x8,#0x8
7101c3bea4  add x8,sp,#0xd0
7101c3bea8  adrp x1,0x71042f8000
7101c3beac  add x1,x1,#0x553
7101c3beb0  add x24,x28,#0x8
7101c3beb4  bl 0x7103776640
7101c3beb8  ldr x8,[sp, #0x60]
7101c3bebc  add x25,x28,#0x408
7101c3bec0  cmp x8,x23
7101c3bec4  b.eq 0x7101c3befc
7101c3bec8  ldr x8,[sp, #0xd8]
7101c3becc  str xzr,[sp, #0xd8]
7101c3bed0  ldr x22,[x28, #0x410]
7101c3bed4  str x8,[x28, #0x410]
7101c3bed8  cbz x22,0x7101c3befc
7101c3bedc  ldr x0,[x22, #0x18]
7101c3bee0  adrp x8,0x710523d000
7101c3bee4  add x8,x8,#0x9a8
7101c3bee8  stp x8,xzr,[x22, #0x10]
7101c3beec  cbz x0,0x7101c3bef4
7101c3bef0  bl 0x710392eb40
7101c3bef4  mov x0,x22
7101c3bef8  bl 0x710392eb40
7101c3befc  ldr x22,[sp, #0xd8]
7101c3bf00  adrp x8,0x710523d000
7101c3bf04  add x8,x8,#0x988
7101c3bf08  stp x8,xzr,[sp, #0xd0]
7101c3bf0c  cbz x22,0x7101c3bf30
7101c3bf10  ldr x0,[x22, #0x18]
7101c3bf14  adrp x8,0x710523d000
7101c3bf18  add x8,x8,#0x9a8
7101c3bf1c  stp x8,xzr,[x22, #0x10]
7101c3bf20  cbz x0,0x7101c3bf28
7101c3bf24  bl 0x710392eb40
7101c3bf28  mov x0,x22
7101c3bf2c  bl 0x710392eb40
7101c3bf30  mov w1,#0x1
7101c3bf34  mov x0,x24
7101c3bf38  bl 0x7101c34000
7101c3bf3c  mov x0,x25
7101c3bf40  mov w1,wzr
7101c3bf44  bl 0x7101c34000
7101c3bf48  ldr x24,[sp, #0x70]
7101c3bf4c  ldr x8,[x24]
7101c3bf50  ldr x8,[x8]
7101c3bf54  add x0,x8,#0x8
7101c3bf58  add x8,sp,#0xd0
7101c3bf5c  adrp x1,0x710438c000
7101c3bf60  add x1,x1,#0x9d2
7101c3bf64  mov w2,w19
7101c3bf68  bl 0x7103776640
7101c3bf6c  ldr x8,[sp, #0x68]
7101c3bf70  add x22,x27,x23
7101c3bf74  adrp x25,0x710523d000
7101c3bf78  add x25,x25,#0x9a8
7101c3bf7c  cmp x8,x23
7101c3bf80  b.eq 0x7101c3bfb0
7101c3bf84  ldr x8,[sp, #0xd8]
7101c3bf88  str xzr,[sp, #0xd8]
7101c3bf8c  ldr x19,[x22, #0xc00]
7101c3bf90  str x8,[x22, #0xc00]
7101c3bf94  cbz x19,0x7101c3bfb0
7101c3bf98  ldr x0,[x19, #0x18]
7101c3bf9c  stp x25,xzr,[x19, #0x10]
7101c3bfa0  cbz x0,0x7101c3bfa8
7101c3bfa4  bl 0x710392eb40
7101c3bfa8  mov x0,x19
7101c3bfac  bl 0x710392eb40
7101c3bfb0  ldr x19,[sp, #0xd8]
7101c3bfb4  adrp x8,0x710523d000
7101c3bfb8  add x8,x8,#0x988
7101c3bfbc  stp x8,xzr,[sp, #0xd0]
7101c3bfc0  cbz x19,0x7101c3bfdc
7101c3bfc4  ldr x0,[x19, #0x18]
7101c3bfc8  stp x25,xzr,[x19, #0x10]
7101c3bfcc  cbz x0,0x7101c3bfd4
7101c3bfd0  bl 0x710392eb40
7101c3bfd4  mov x0,x19
7101c3bfd8  bl 0x710392eb40
7101c3bfdc  ldr x8,[x22, #0xc00]
7101c3bfe0  ldr x8,[x8, #0x8]
7101c3bfe4  cbz x8,0x7101c3c080
7101c3bfe8  add x19,x22,#0xbf8
7101c3bfec  add x8,sp,#0xd0
7101c3bff0  mov x0,x19
7101c3bff4  adrp x1,0x7104413000
7101c3bff8  add x1,x1,#0x831
7101c3bffc  bl 0x7103776910
7101c3c000  ldr x8,[sp, #0x48]
7101c3c004  cmp x8,x23
7101c3c008  b.eq 0x7101c3c024
7101c3c00c  ldr x8,[sp, #0xd8]
7101c3c010  str xzr,[sp, #0xd8]
7101c3c014  ldr x0,[x28, #0xc10]
7101c3c018  str x8,[x28, #0xc10]
7101c3c01c  cbz x0,0x7101c3c024
7101c3c020  bl 0x710392eb40
7101c3c024  ldr x0,[sp, #0xd8]
7101c3c028  stp x25,xzr,[sp, #0xd0]
7101c3c02c  cbz x0,0x7101c3c034
7101c3c030  bl 0x710392eb40
7101c3c034  add x8,sp,#0xd0
7101c3c038  mov x0,x19
7101c3c03c  adrp x1,0x71042e7000
7101c3c040  add x1,x1,#0x963
7101c3c044  bl 0x7103776910
7101c3c048  ldr x8,[sp, #0x50]
7101c3c04c  cmp x8,x23
7101c3c050  b.eq 0x7101c3c070
7101c3c054  ldr x9,[sp, #0x40]
7101c3c058  ldr x8,[sp, #0xd8]
7101c3c05c  str xzr,[sp, #0xd8]
7101c3c060  ldr x0,[x9, x23, LSL #0x0]
7101c3c064  str x8,[x9, x23, LSL #0x0]
7101c3c068  cbz x0,0x7101c3c070
7101c3c06c  bl 0x710392eb40
7101c3c070  ldr x0,[sp, #0xd8]
7101c3c074  stp x25,xzr,[sp, #0xd0]
7101c3c078  cbz x0,0x7101c3c080
7101c3c07c  bl 0x710392eb40
7101c3c080  ldr x8,[x24]
7101c3c084  ldr x8,[x8]
7101c3c088  add x0,x8,#0x8
7101c3c08c  add x8,sp,#0xd0
7101c3c090  adrp x1,0x710438c000
7101c3c094  add x1,x1,#0x9d2
7101c3c098  mov w2,w26
7101c3c09c  bl 0x7103776640
7101c3c0a0  add x22,x27,x23
7101c3c0a4  cmp x20,x23
7101c3c0a8  b.eq 0x7101c3c0d8
7101c3c0ac  ldr x8,[sp, #0xd8]
7101c3c0b0  str xzr,[sp, #0xd8]
7101c3c0b4  ldr x19,[x22, #0x800]
7101c3c0b8  str x8,[x22, #0x800]
7101c3c0bc  cbz x19,0x7101c3c0d8
7101c3c0c0  ldr x0,[x19, #0x18]
7101c3c0c4  stp x25,xzr,[x19, #0x10]
7101c3c0c8  cbz x0,0x7101c3c0d0
7101c3c0cc  bl 0x710392eb40
7101c3c0d0  mov x0,x19
7101c3c0d4  bl 0x710392eb40
7101c3c0d8  ldr x19,[sp, #0xd8]
7101c3c0dc  adrp x8,0x710523d000
7101c3c0e0  add x8,x8,#0x988
7101c3c0e4  stp x8,xzr,[sp, #0xd0]
7101c3c0e8  cbz x19,0x7101c3c104
7101c3c0ec  ldr x0,[x19, #0x18]
7101c3c0f0  stp x25,xzr,[x19, #0x10]
7101c3c0f4  cbz x0,0x7101c3c0fc
7101c3c0f8  bl 0x710392eb40
7101c3c0fc  mov x0,x19
7101c3c100  bl 0x710392eb40
7101c3c104  ldr x8,[x22, #0x800]
7101c3c108  ldr x8,[x8, #0x8]
7101c3c10c  cbz x8,0x7101c3c1a8
7101c3c110  add x19,x22,#0x7f8
7101c3c114  add x8,sp,#0xd0
7101c3c118  mov x0,x19
7101c3c11c  adrp x1,0x7104413000
7101c3c120  add x1,x1,#0x831
7101c3c124  bl 0x7103776910
7101c3c128  ldr x8,[sp, #0x78]
7101c3c12c  cmp x8,x23
7101c3c130  b.eq 0x7101c3c150
7101c3c134  ldr x8,[sp, #0xd8]
7101c3c138  str xzr,[sp, #0xd8]
7101c3c13c  add x9,x21,x23
7101c3c140  ldr x0,[x9, #0x810]
7101c3c144  str x8,[x9, #0x810]
7101c3c148  cbz x0,0x7101c3c150
7101c3c14c  bl 0x710392eb40
7101c3c150  ldr x0,[sp, #0xd8]
7101c3c154  stp x25,xzr,[sp, #0xd0]
7101c3c158  cbz x0,0x7101c3c160
7101c3c15c  bl 0x710392eb40
7101c3c160  add x8,sp,#0xd0
7101c3c164  mov x0,x19
7101c3c168  adrp x1,0x71042e7000
7101c3c16c  add x1,x1,#0x963
7101c3c170  bl 0x7103776910
7101c3c174  ldr x8,[sp, #0x80]
7101c3c178  cmp x8,x23
7101c3c17c  b.eq 0x7101c3c198
7101c3c180  ldr x8,[sp, #0xd8]
7101c3c184  str xzr,[sp, #0xd8]
7101c3c188  ldr x0,[x27, x23, LSL #0x0]
7101c3c18c  str x8,[x27, x23, LSL #0x0]
7101c3c190  cbz x0,0x7101c3c198
7101c3c194  bl 0x710392eb40
7101c3c198  ldr x0,[sp, #0xd8]
7101c3c19c  stp x25,xzr,[sp, #0xd0]
7101c3c1a0  cbz x0,0x7101c3c1a8
7101c3c1a4  bl 0x710392eb40
7101c3c1a8  add x23,x23,#0x10
7101c3c1ac  add x26,x26,#0x1
7101c3c1b0  cmp x23,#0x400
7101c3c1b4  b.ne 0x7101c3be00
7101c3c1b8  mov x0,x21
7101c3c1bc  bl 0x7101c33d10
7101c3c1c0  ldr x8,[x21, #0x21c0]
7101c3c1c4  ldr x8,[x8]
7101c3c1c8  ldr x19,[x8]
7101c3c1cc  ldr x0,[x19, #0x458]
7101c3c1d0  ldr s0,[x19, #0x640]
7101c3c1d4  fmov s8,wzr
7101c3c1d8  ldr x8,[x0]
7101c3c1dc  fmul s0,s0,s8
7101c3c1e0  ldr x8,[x8, #0x58]
7101c3c1e4  blr x8
7101c3c1e8  ldr x20,[x19, #0x460]
7101c3c1ec  ldr x22,[x19, #0x468]
7101c3c1f0  add x26,sp,#0x3, LSL #12
7101c3c1f4  add x26,x26,#0xf0
7101c3c1f8  cmp x20,x22
7101c3c1fc  b.eq 0x7101c3c234
7101c3c200  ldr x19,[x20]
7101c3c204  ldr x8,[x19]
7101c3c208  ldr x8,[x8, #0x40]
7101c3c20c  mov x0,x19
7101c3c210  blr x8
7101c3c214  tbz w0,#0x0,0x7101c3c228
7101c3c218  ldr x8,[x19]
7101c3c21c  ldr x8,[x8, #0x20]
7101c3c220  mov x0,x19
7101c3c224  blr x8
7101c3c228  add x20,x20,#0x8
7101c3c22c  cmp x22,x20
7101c3c230  b.ne 0x7101c3c200
7101c3c234  ldr x8,[x24]
7101c3c238  ldr x8,[x8]
7101c3c23c  add x0,x8,#0x8
7101c3c240  add x8,sp,#0x3, LSL #12
7101c3c244  adrp x1,0x710432a000
7101c3c248  add x1,x1,#0x284
7101c3c24c  add x8,x8,#0x220
7101c3c250  bl 0x7103776640
7101c3c254  add x0,sp,#0x3, LSL #12
7101c3c258  adrp x1,0x7104280000
7101c3c25c  add x1,x1,#0x9a2
7101c3c260  add x8,sp,#0xd0
7101c3c264  add x0,x0,#0x220
7101c3c268  add x19,sp,#0xd0
7101c3c26c  bl 0x7103776910
7101c3c270  ldr x8,[sp]
7101c3c274  cmp x19,x8
7101c3c278  b.eq 0x7101c3c294
7101c3c27c  ldr x8,[sp, #0xd8]
7101c3c280  str xzr,[sp, #0xd8]
7101c3c284  ldr x0,[x21, #0x2218]
7101c3c288  str x8,[x21, #0x2218]
7101c3c28c  cbz x0,0x7101c3c294
7101c3c290  bl 0x710392eb40
7101c3c294  ldr x0,[sp, #0xd8]
7101c3c298  stp x25,xzr,[sp, #0xd0]
7101c3c29c  cbz x0,0x7101c3c2a4
7101c3c2a0  bl 0x710392eb40
7101c3c2a4  ldr x19,[sp, #0x3228]
7101c3c2a8  adrp x8,0x710523d000
7101c3c2ac  add x8,x8,#0x988
7101c3c2b0  str x8,[sp, #0x3220]
7101c3c2b4  str xzr,[sp, #0x3228]
7101c3c2b8  cbz x19,0x7101c3c2d4
7101c3c2bc  ldr x0,[x19, #0x18]
7101c3c2c0  stp x25,xzr,[x19, #0x10]
7101c3c2c4  cbz x0,0x7101c3c2cc
7101c3c2c8  bl 0x710392eb40
7101c3c2cc  mov x0,x19
7101c3c2d0  bl 0x710392eb40
7101c3c2d4  ldr x8,[x24]
7101c3c2d8  ldr x8,[x8]
7101c3c2dc  add x0,x8,#0x8
7101c3c2e0  add x8,sp,#0x3, LSL #12
7101c3c2e4  adrp x1,0x710432a000
7101c3c2e8  add x1,x1,#0x284
7101c3c2ec  add x8,x8,#0x220
7101c3c2f0  bl 0x7103776640
7101c3c2f4  add x0,sp,#0x3, LSL #12
7101c3c2f8  adrp x1,0x710439d000
7101c3c2fc  add x1,x1,#0x3e9
7101c3c300  add x8,sp,#0xd0
7101c3c304  add x0,x0,#0x220
7101c3c308  add x19,sp,#0xd0
7101c3c30c  bl 0x7103776910
7101c3c310  ldr x8,[sp, #0x8]
7101c3c314  cmp x19,x8
7101c3c318  b.eq 0x7101c3c334
7101c3c31c  ldr x8,[sp, #0xd8]
7101c3c320  str xzr,[sp, #0xd8]
7101c3c324  ldr x0,[x21, #0x2228]
7101c3c328  str x8,[x21, #0x2228]
7101c3c32c  cbz x0,0x7101c3c334
7101c3c330  bl 0x710392eb40
7101c3c334  ldr x0,[sp, #0xd8]
7101c3c338  stp x25,xzr,[sp, #0xd0]
7101c3c33c  cbz x0,0x7101c3c344
7101c3c340  bl 0x710392eb40
7101c3c344  ldr x19,[sp, #0x3228]
7101c3c348  adrp x8,0x710523d000
7101c3c34c  add x8,x8,#0x988
7101c3c350  str x8,[sp, #0x3220]
7101c3c354  str xzr,[sp, #0x3228]
7101c3c358  cbz x19,0x7101c3c374
7101c3c35c  ldr x0,[x19, #0x18]
7101c3c360  stp x25,xzr,[x19, #0x10]
7101c3c364  cbz x0,0x7101c3c36c
7101c3c368  bl 0x710392eb40
7101c3c36c  mov x0,x19
7101c3c370  bl 0x710392eb40
7101c3c374  ldr x8,[x24]
7101c3c378  ldr x8,[x8]
7101c3c37c  add x0,x8,#0x8
7101c3c380  adrp x1,0x71042a3000
7101c3c384  add x1,x1,#0x5d
7101c3c388  add x8,sp,#0xd0
7101c3c38c  add x19,sp,#0xd0
7101c3c390  bl 0x7103776910
7101c3c394  ldr x8,[sp, #0x10]
7101c3c398  cmp x19,x8
7101c3c39c  b.eq 0x7101c3c3b8
7101c3c3a0  ldr x8,[sp, #0xd8]
7101c3c3a4  str xzr,[sp, #0xd8]
7101c3c3a8  ldr x0,[x21, #0x2238]
7101c3c3ac  str x8,[x21, #0x2238]
7101c3c3b0  cbz x0,0x7101c3c3b8
7101c3c3b4  bl 0x710392eb40
7101c3c3b8  ldr x0,[sp, #0xd8]
7101c3c3bc  stp x25,xzr,[sp, #0xd0]
7101c3c3c0  cbz x0,0x7101c3c3c8
7101c3c3c4  bl 0x710392eb40
7101c3c3c8  add x9,sp,#0x3, LSL #12
7101c3c3cc  add x0,sp,#0x3, LSL #12
7101c3c3d0  mov w20,#0x101
7101c3c3d4  add x9,x9,#0x220
7101c3c3d8  mov w8,#0x1
7101c3c3dc  str xzr,[sp, #0x3220]
7101c3c3e0  mov x22,#0x41f0000000000000
7101c3c3e4  add x0,x0,#0x220
7101c3c3e8  strh w20,[x26, #0x138]
7101c3c3ec  stur wzr,[x9, #0xa]
7101c3c3f0  strh wzr,[x9, #0xe]
7101c3c3f4  str w8,[sp, #0x3230]
7101c3c3f8  strh w8,[x9, #0x14]
7101c3c3fc  strb w8,[x9, #0x16]
7101c3c400  str x22,[sp, #0x3238]
7101c3c404  str wzr,[sp, #0x3240]
7101c3c408  str xzr,[sp, #0x3270]
7101c3c40c  str xzr,[sp, #0x32a0]
7101c3c410  str xzr,[sp, #0x32d0]
7101c3c414  str xzr,[sp, #0x3300]
7101c3c418  str xzr,[sp, #0x3330]
7101c3c41c  str wzr,[sp, #0x3340]
7101c3c420  strb w8,[x9, #0xd]
7101c3c424  bl 0x710337df20
7101c3c428  ldr x8,[x21, #0x21c8]
7101c3c42c  ldr x8,[x8]
7101c3c430  ldr x25,[sp, #0x18]
7101c3c434  add x3,sp,#0x3, LSL #12
7101c3c438  adrp x2,0x7104307000
7101c3c43c  add x2,x2,#0x72
7101c3c440  add x3,x3,#0x220
7101c3c444  mov x0,x25
7101c3c448  add x1,x8,#0x8
7101c3c44c  bl 0x7103770b30
7101c3c450  adrp x2,0x7104401000
7101c3c454  add x2,x2,#0xdad
7101c3c458  mov w1,#0x1
7101c3c45c  mov x0,x25
7101c3c460  bl 0x71037717d0
7101c3c464  adrp x2,0x7104308000
7101c3c468  add x2,x2,#0xc5c
7101c3c46c  mov w1,#0x2
7101c3c470  mov x0,x25
7101c3c474  bl 0x71037717d0
7101c3c478  adrp x2,0x710424f000
7101c3c47c  add x2,x2,#0xd25
7101c3c480  mov x0,x25
7101c3c484  mov w1,wzr
7101c3c488  bl 0x71037717d0
7101c3c48c  adrp x2,0x71043be000
7101c3c490  add x2,x2,#0xec7
7101c3c494  orr w1,wzr,#0x3
7101c3c498  mov x0,x25
7101c3c49c  bl 0x71037717d0
7101c3c4a0  ldr x0,[x21, #0x2020]
7101c3c4a4  mov w2,#0xa
7101c3c4a8  orr w1,wzr,#0x3
7101c3c4ac  mov w3,wzr
7101c3c4b0  bl 0x7103771930
7101c3c4b4  mov x8,#0xc6d8
7101c3c4b8  movk x8,#0xb001, LSL #16
7101c3c4bc  movk x8,#0x1a, LSL #32
7101c3c4c0  str x8,[sp, #0xd0]
7101c3c4c4  ldr x0,[x21, #0x2020]
7101c3c4c8  add x2,sp,#0xd0
7101c3c4cc  mov w1,wzr
7101c3c4d0  bl 0x7103772070
7101c3c4d4  mov w8,#0x2241
7101c3c4d8  ldrb w8,[x21, x8, LSL ]
7101c3c4dc  cbz w8,0x7101c3c4ec
7101c3c4e0  mov w1,#0x2
7101c3c4e4  mov x0,x25
7101c3c4e8  b 0x7101c3c4f4
7101c3c4ec  mov x0,x25
7101c3c4f0  mov w1,wzr
7101c3c4f4  mov w2,wzr
7101c3c4f8  bl 0x7103771a80
7101c3c4fc  ldr x0,[x25]
7101c3c500  ldr x8,[x0]
7101c3c504  ldr x8,[x8, #0x70]
7101c3c508  mov w1,#0x1
7101c3c50c  mov w19,#0x9dc5
7101c3c510  movk w19,#0x811c, LSL #16
7101c3c514  mov w23,#0x1
7101c3c518  blr x8
7101c3c51c  ldr x0,[x25]
7101c3c520  ldr x8,[x0]
7101c3c524  ldr x8,[x8, #0x60]
7101c3c528  mov w1,#0x1
7101c3c52c  blr x8
7101c3c530  ldr x8,[x24]
7101c3c534  ldr x8,[x8]
7101c3c538  ldr x8,[x8]
7101c3c53c  ldr x8,[x8, #0x600]
7101c3c540  add x0,sp,#0x3, LSL #12
7101c3c544  add x0,x0,#0xf0
7101c3c548  strb w23,[x8, #0x4aa]
7101c3c54c  str xzr,[sp, #0x30f0]
7101c3c550  strh w20,[x26, #0x8]
7101c3c554  strh wzr,[x26, #0xe]
7101c3c558  stur wzr,[x26, #0xa]
7101c3c55c  str w23,[sp, #0x3100]
7101c3c560  strh w23,[x26, #0x14]
7101c3c564  strb w23,[x26, #0x16]
7101c3c568  str x22,[sp, #0x3108]
7101c3c56c  str wzr,[sp, #0x3110]
7101c3c570  str xzr,[sp, #0x3140]
7101c3c574  str xzr,[sp, #0x3170]
7101c3c578  str xzr,[sp, #0x31a0]
7101c3c57c  str xzr,[sp, #0x31d0]
7101c3c580  str xzr,[sp, #0x3200]
7101c3c584  str wzr,[sp, #0x3210]
7101c3c588  bl 0x710337df20
7101c3c58c  ldr x8,[sp, #0x38]
7101c3c590  ldr x8,[x8]
7101c3c594  ldr x8,[x8]
7101c3c598  ldr x22,[sp, #0x20]
7101c3c59c  add x3,sp,#0x3, LSL #12
7101c3c5a0  adrp x2,0x7104307000
7101c3c5a4  add x2,x2,#0x72
7101c3c5a8  add x3,x3,#0xf0
7101c3c5ac  mov x0,x22
7101c3c5b0  add x1,x8,#0x8
7101c3c5b4  bl 0x7103770b30
7101c3c5b8  adrp x2,0x71043f0000
7101c3c5bc  add x2,x2,#0x985
7101c3c5c0  mov x0,x22
7101c3c5c4  mov w1,wzr
7101c3c5c8  bl 0x71037717d0
7101c3c5cc  ldr x0,[x22]
7101c3c5d0  mov w2,#0xa
7101c3c5d4  mov w1,wzr
7101c3c5d8  mov w3,wzr
7101c3c5dc  bl 0x7103771930
7101c3c5e0  mov x0,x22
7101c3c5e4  mov w1,wzr
7101c3c5e8  mov w2,wzr
7101c3c5ec  bl 0x7103771a80
7101c3c5f0  mov x8,#0x528c
7101c3c5f4  movk x8,#0x5d39, LSL #16
7101c3c5f8  movk x8,#0x18, LSL #32
7101c3c5fc  str x8,[sp, #0xd0]
7101c3c600  ldr x0,[x22]
7101c3c604  add x2,sp,#0xd0
7101c3c608  mov w1,wzr
7101c3c60c  add x20,sp,#0xd0
7101c3c610  bl 0x7103772070
7101c3c614  ldr x0,[x22]
7101c3c618  ldr x8,[x0]
7101c3c61c  ldr x8,[x8, #0x60]
7101c3c620  mov w1,wzr
7101c3c624  blr x8
7101c3c628  ldr x0,[x22]
7101c3c62c  ldr x8,[x0]
7101c3c630  ldr x8,[x8, #0x70]
7101c3c634  mov w1,wzr
7101c3c638  blr x8
7101c3c63c  mov w8,#0x100c
7101c3c640  str wzr,[sp, #0xd8]
7101c3c644  strh wzr,[sp, #0xdc]
7101c3c648  str xzr,[x20, x8, LSL #0x0]
7101c3c64c  mov w8,#0x2014
7101c3c650  strh wzr,[sp, #0x10e4]
7101c3c654  mov x22,#0x656d
7101c3c658  movk x22,#0x5f6c, LSL #16
7101c3c65c  str xzr,[x20, x8, LSL #0x0]
7101c3c660  mov w8,#0x201c
7101c3c664  strh wzr,[x20, x8, LSL #0x0]
7101c3c668  mov w8,#0x5
7101c3c66c  mov x11,#0x7275
7101c3c670  movk x11,#0x5f6e, LSL #16
7101c3c674  str x8,[sp, #0xd0]
7101c3c678  mov x8,#0x2100000000
7101c3c67c  movk x22,#0x6f74, LSL #32
7101c3c680  movk x22,#0x7275, LSL #48
7101c3c684  mov x23,#0x616e
7101c3c688  movk x23,#0x656d, LSL #16
7101c3c68c  mov x25,#0x6f62
7101c3c690  movk x25,#0x7261, LSL #16
7101c3c694  movk x11,#0x616e, LSL #32
7101c3c698  movk x11,#0x6d, LSL #48
7101c3c69c  stp x8,x22,[sp, #0x88]
7101c3c6a0  movk x23,#0x746e, LSL #32
7101c3c6a4  movk x23,#0x6b5f, LSL #48
7101c3c6a8  mov w24,#0x7965
7101c3c6ac  stur x11,[sp, #0xaa]
7101c3c6b0  movk x25,#0x5f64, LSL #32
7101c3c6b4  movk x25,#0x6f74, LSL #48
7101c3c6b8  str x23,[sp, #0x98]
7101c3c6bc  mov w9,#0x6d
7101c3c6c0  mov w8,#0x9
7101c3c6c4  strh w24,[sp, #0xa0]
7101c3c6c8  mov w20,#0x89
7101c3c6cc  add x10,sp,#0x88
7101c3c6d0  stur x25,[sp, #0xa2]
7101c3c6d4  mov w11,w19
7101c3c6d8  mul w11,w11,w20
7101c3c6dc  and w9,w9,#0xff
7101c3c6e0  eor w11,w11,w9
7101c3c6e4  ldrb w9,[x10, x8, LSL ]
7101c3c6e8  add x8,x8,#0x1
7101c3c6ec  cbnz w9,0x7101c3c6d8
7101c3c6f0  add x0,sp,#0xd0
7101c3c6f4  add x1,sp,#0x88
7101c3c6f8  str w11,[sp, #0x88]
7101c3c6fc  add x26,sp,#0x88
7101c3c700  bl 0x7103391610
7101c3c704  mov x8,#0x2700000000
7101c3c708  stp x8,x22,[sp, #0x88]
7101c3c70c  mov w8,#0x7275
7101c3c710  movk w8,#0x5f6e, LSL #16
7101c3c714  stur w8,[sp, #0xaa]
7101c3c718  mov w8,#0x656c
7101c3c71c  mov x10,#0x7474
7101c3c720  movk x10,#0x7265, LSL #16
7101c3c724  strh w8,[sp, #0xae]
7101c3c728  movk x10,#0x5f73, LSL #32
7101c3c72c  movk x10,#0x6e, LSL #48
7101c3c730  mov w9,#0x6d
7101c3c734  mov w8,#0x9
7101c3c738  str x23,[sp, #0x98]
7101c3c73c  strh w24,[sp, #0xa0]
7101c3c740  stur x25,[sp, #0xa2]
7101c3c744  str x10,[sp, #0xb0]
7101c3c748  mul w10,w19,w20
7101c3c74c  and w9,w9,#0xff
7101c3c750  eor w19,w10,w9
7101c3c754  ldrb w9,[x26, x8, LSL ]
7101c3c758  add x8,x8,#0x1
7101c3c75c  cbnz w9,0x7101c3c748
7101c3c760  mov w3,#0x2a
7101c3c764  add x0,sp,#0xd0
7101c3c768  add x1,sp,#0x88
7101c3c76c  mov w2,#0x1
7101c3c770  str w19,[sp, #0x88]
7101c3c774  bl 0x7103391970
7101c3c778  ldr x0,[x21, #0x2030]
7101c3c77c  add x1,sp,#0xd0
7101c3c780  bl 0x7103391f40
7101c3c784  adrp x26,0x7105329000
7101c3c788  adrp x10,0x7104466000
7101c3c78c  ldr q0,[x10, #0x940]
7101c3c790  ldr x8,[x26, #0x60]
7101c3c794  ldr x9,[x8, #0x8]!
7101c3c798  mov w20,#0xbf800000
7101c3c79c  str w20,[x9, #0x130]
7101c3c7a0  mov v9.16B,v8.16B
7101c3c7a4  stp q0,q0,[x9, #0x100]
7101c3c7a8  adrp x25,0x710523d000
7101c3c7ac  add x25,x25,#0x9a8
7101c3c7b0  str q0,[x9, #0x120]
7101c3c7b4  ldr x9,[x21, #0x2238]
7101c3c7b8  ldr x9,[x9]
7101c3c7bc  cbz x9,0x7101c3c7cc
7101c3c7c0  ldp s0,s1,[x9, #0x50]
7101c3c7c4  fabs s9,s1
7101c3c7c8  fabs s8,s0
7101c3c7cc  ldr x9,[x8]
7101c3c7d0  ldp w23,w22,[x9]
7101c3c7d4  ldrb w10,[x9, #0xb0]
7101c3c7d8  cbz w10,0x7101c3c824
7101c3c7dc  cbz w22,0x7101c3c7f8
7101c3c7e0  sub w8,w22,#0x1
7101c3c7e4  orr w10,wzr,#0x18
7101c3c7e8  umaddl x8,w8,w10,x9
7101c3c7ec  ldp x9,x8,[x8, #0x8]
7101c3c7f0  cmp x8,x9
7101c3c7f4  b.ne 0x7101c3c8b4
7101c3c7f8  mov x8,xzr
7101c3c7fc  ldr x8,[x8]
7101c3c800  ldr w24,[x8]
7101c3c804  cmp w24,#0x0
7101c3c808  cinc w8,w24,lt
7101c3c80c  sub w8,w24,w8, ASR #0x1
7101c3c810  mul w10,w8,w23
7101c3c814  sdiv w23,w10,w24
7101c3c818  ldr x8,[x26, #0x60]
7101c3c81c  ldr x9,[x8, #0x8]!
7101c3c820  b 0x7101c3c828
7101c3c824  add w22,w22,#0x1
7101c3c828  adrp x10,0x7104473000
7101c3c82c  ldr s0,[x10, #0x138]
7101c3c830  adrp x10,0x7104472000
7101c3c834  ldr s2,[x10, #0x610]
7101c3c838  orr w10,wzr,#0x3f800000
7101c3c83c  fsub s0,s0,s8
7101c3c840  fmov s1,0x3f000000
7101c3c844  fmul s0,s0,s1
7101c3c848  str s9,[x9, #0xc0]
7101c3c84c  scvtf s1,w22
7101c3c850  fdiv s0,s0,s1
7101c3c854  scvtf s1,w23
7101c3c858  fdiv s1,s2,s1
7101c3c85c  str s0,[x9, #0xb4]
7101c3c860  fmov s0,0x3f800000
7101c3c864  str s1,[x9, #0xb8]
7101c3c868  str s8,[x9, #0xbc]
7101c3c86c  ldr x9,[x8]
7101c3c870  str w10,[x9, #0x190]
7101c3c874  ldr x9,[x8]
7101c3c878  str w10,[x9, #0x194]
7101c3c87c  ldr x8,[x8]
7101c3c880  ldr w9,[x8, #0x4]
7101c3c884  cbz w9,0x7101c3c9e8
7101c3c888  ldp x10,x11,[x8, #0x8]
7101c3c88c  sub x10,x11,x10
7101c3c890  lsr x10,x10,#0x4
7101c3c894  cbz w10,0x7101c3c9e8
7101c3c898  ldr x10,[x21, #0x2228]
7101c3c89c  ldr x10,[x10]
7101c3c8a0  cbz x10,0x7101c3c90c
7101c3c8a4  ldp s0,s2,[x10, #0x50]
7101c3c8a8  fabs s1,s0
7101c3c8ac  fabs s0,s2
7101c3c8b0  b 0x7101c3c914
7101c3c8b4  ldp x8,x19,[x9]
7101c3c8b8  cbz x19,0x7101c3c7fc
7101c3c8bc  add x9,x19,#0x8
7101c3c8c0  ldxr x10,[x9]
7101c3c8c4  add x10,x10,#0x1
7101c3c8c8  stxr w11,x10,[x9]
7101c3c8cc  cbnz w11,0x7101c3c8c0
7101c3c8d0  ldr x8,[x8]
7101c3c8d4  ldr w24,[x8]
7101c3c8d8  add x8,x19,#0x8
7101c3c8dc  ldaxr x9,[x8]
7101c3c8e0  sub x10,x9,#0x1
7101c3c8e4  stlxr w11,x10,[x8]
7101c3c8e8  cbnz w11,0x7101c3c8dc
7101c3c8ec  cbnz x9,0x7101c3c804
7101c3c8f0  ldr x8,[x19]
7101c3c8f4  ldr x8,[x8, #0x10]
7101c3c8f8  mov x0,x19
7101c3c8fc  blr x8
7101c3c900  mov x0,x19
7101c3c904  bl 0x71039c2670
7101c3c908  b 0x7101c3c804
7101c3c90c  fmov s1,wzr
7101c3c910  mov v0.16B,v1.16B
7101c3c914  ldrb w10,[x8, #0xb0]
7101c3c918  cmp w10,#0x0
7101c3c91c  orr w11,wzr,#0xfffffffe
7101c3c920  cinc w11,w11,eq
7101c3c924  add w11,w9,w11
7101c3c928  add w11,w11,#0x1
7101c3c92c  fadd s2,s1,s1
7101c3c930  fcsel s1,s1,s2,eq
7101c3c934  ldr s2,[x8, #0xb4]
7101c3c938  ucvtf s3,w11
7101c3c93c  mov w11,#0x1
7101c3c940  fmul s3,s2,s3
7101c3c944  fadd s2,s2,s3
7101c3c948  fadd s3,s2,s2
7101c3c94c  fcsel s2,s2,s3,eq
7101c3c950  ldr s3,[x8, #0xbc]
7101c3c954  fadd s2,s3,s2
7101c3c958  fadd s1,s2,s1
7101c3c95c  sub w12,w9,#0x1
7101c3c960  add x13,x8,#0x98
7101c3c964  ldr w14,[x13], #0x4
7101c3c968  cmp w14,#0x0
7101c3c96c  cinc w15,w14,lt
7101c3c970  cmp w10,#0x0
7101c3c974  sub w15,w14,w15, ASR #0x1
7101c3c978  csel w15,w14,w15,eq
7101c3c97c  cmp x12,#0x0
7101c3c980  sub x12,x12,#0x1
7101c3c984  csel w14,w14,w15,ne
7101c3c988  mul w11,w14,w11
7101c3c98c  sub x9,x9,#0x1
7101c3c990  cbnz x9,0x7101c3c964
7101c3c994  adrp x9,0x7104472000
7101c3c998  ldr s2,[x9, #0xd58]
7101c3c99c  sub w9,w11,#0x1
7101c3c9a0  scvtf s3,w9
7101c3c9a4  adrp x9,0x7104472000
7101c3c9a8  fdiv s1,s2,s1
7101c3c9ac  ldr s2,[x8, #0xb8]
7101c3c9b0  fmul s2,s2,s3
7101c3c9b4  fadd s0,s0,s2
7101c3c9b8  ldr s2,[x9, #0x8ac]
7101c3c9bc  adrp x9,0x7104472000
7101c3c9c0  fdiv s0,s2,s0
7101c3c9c4  ldr s2,[x9, #0x7b4]
7101c3c9c8  adrp x9,0x7104472000
7101c3c9cc  fmul s1,s1,s2
7101c3c9d0  ldr s2,[x9, #0x6b8]
7101c3c9d4  fmul s0,s0,s2
7101c3c9d8  fcmp s0,s1
7101c3c9dc  fcsel s0,s0,s1,mi
7101c3c9e0  fmov s1,0x3f800000
7101c3c9e4  fmin s0,s0,s1
7101c3c9e8  str s0,[x8, #0xe4]
7101c3c9ec  str s0,[x8, #0xe8]
7101c3c9f0  str s0,[x8, #0xec]
7101c3c9f4  str w20,[x8, #0xf0]
7101c3c9f8  ldr x0,[sp, #0x3200]
7101c3c9fc  add x8,sp,#0x3, LSL #12
7101c3ca00  add x8,x8,#0xf0
7101c3ca04  add x8,x8,#0xf0
7101c3ca08  cmp x8,x0
7101c3ca0c  b.eq 0x7101c3ca20
7101c3ca10  cbz x0,0x7101c3ca2c
7101c3ca14  ldr x8,[x0]
7101c3ca18  ldr x8,[x8, #0x28]
7101c3ca1c  b 0x7101c3ca28
7101c3ca20  ldr x8,[x0]
7101c3ca24  ldr x8,[x8, #0x20]
7101c3ca28  blr x8
7101c3ca2c  ldr x0,[sp, #0x31d0]
7101c3ca30  add x8,sp,#0x3, LSL #12
7101c3ca34  add x8,x8,#0xf0
7101c3ca38  add x8,x8,#0xc0
7101c3ca3c  cmp x8,x0
7101c3ca40  b.eq 0x7101c3ca54
7101c3ca44  cbz x0,0x7101c3ca60
7101c3ca48  ldr x8,[x0]
7101c3ca4c  ldr x8,[x8, #0x28]
7101c3ca50  b 0x7101c3ca5c
7101c3ca54  ldr x8,[x0]
7101c3ca58  ldr x8,[x8, #0x20]
7101c3ca5c  blr x8
7101c3ca60  ldr x0,[sp, #0x31a0]
7101c3ca64  add x8,sp,#0x3, LSL #12
7101c3ca68  add x8,x8,#0xf0
7101c3ca6c  add x8,x8,#0x90
7101c3ca70  cmp x8,x0
7101c3ca74  b.eq 0x7101c3ca88
7101c3ca78  cbz x0,0x7101c3ca94
7101c3ca7c  ldr x8,[x0]
7101c3ca80  ldr x8,[x8, #0x28]
7101c3ca84  b 0x7101c3ca90
7101c3ca88  ldr x8,[x0]
7101c3ca8c  ldr x8,[x8, #0x20]
7101c3ca90  blr x8
7101c3ca94  ldr x0,[sp, #0x3170]
7101c3ca98  add x8,sp,#0x3, LSL #12
7101c3ca9c  add x8,x8,#0xf0
7101c3caa0  add x8,x8,#0x60
7101c3caa4  cmp x8,x0
7101c3caa8  b.eq 0x7101c3cabc
7101c3caac  cbz x0,0x7101c3cac8
7101c3cab0  ldr x8,[x0]
7101c3cab4  ldr x8,[x8, #0x28]
7101c3cab8  b 0x7101c3cac4
7101c3cabc  ldr x8,[x0]
7101c3cac0  ldr x8,[x8, #0x20]
7101c3cac4  blr x8
7101c3cac8  ldr x0,[sp, #0x3140]
7101c3cacc  add x8,sp,#0x3, LSL #12
7101c3cad0  add x8,x8,#0xf0
7101c3cad4  add x8,x8,#0x30
7101c3cad8  cmp x8,x0
7101c3cadc  b.eq 0x7101c3caf0
7101c3cae0  cbz x0,0x7101c3cafc
7101c3cae4  ldr x8,[x0]
7101c3cae8  ldr x8,[x8, #0x28]
7101c3caec  b 0x7101c3caf8
7101c3caf0  ldr x8,[x0]
7101c3caf4  ldr x8,[x8, #0x20]
7101c3caf8  blr x8
7101c3cafc  ldr x0,[sp, #0x3330]
7101c3cb00  add x8,sp,#0x3, LSL #12
7101c3cb04  add x8,x8,#0x220
7101c3cb08  add x8,x8,#0xf0
7101c3cb0c  cmp x8,x0
7101c3cb10  b.eq 0x7101c3cb24
7101c3cb14  cbz x0,0x7101c3cb30
7101c3cb18  ldr x8,[x0]
7101c3cb1c  ldr x8,[x8, #0x28]
7101c3cb20  b 0x7101c3cb2c
7101c3cb24  ldr x8,[x0]
7101c3cb28  ldr x8,[x8, #0x20]
7101c3cb2c  blr x8
7101c3cb30  ldr x0,[sp, #0x3300]
7101c3cb34  add x8,sp,#0x3, LSL #12
7101c3cb38  add x8,x8,#0x220
7101c3cb3c  add x8,x8,#0xc0
7101c3cb40  cmp x8,x0
7101c3cb44  b.eq 0x7101c3cb58
7101c3cb48  cbz x0,0x7101c3cb64
7101c3cb4c  ldr x8,[x0]
7101c3cb50  ldr x8,[x8, #0x28]
7101c3cb54  b 0x7101c3cb60
7101c3cb58  ldr x8,[x0]
7101c3cb5c  ldr x8,[x8, #0x20]
7101c3cb60  blr x8
7101c3cb64  ldr x0,[sp, #0x32d0]
7101c3cb68  add x8,sp,#0x3, LSL #12
7101c3cb6c  add x8,x8,#0x220
7101c3cb70  add x8,x8,#0x90
7101c3cb74  cmp x8,x0
7101c3cb78  b.eq 0x7101c3cb8c
7101c3cb7c  cbz x0,0x7101c3cb98
7101c3cb80  ldr x8,[x0]
7101c3cb84  ldr x8,[x8, #0x28]
7101c3cb88  b 0x7101c3cb94
7101c3cb8c  ldr x8,[x0]
7101c3cb90  ldr x8,[x8, #0x20]
7101c3cb94  blr x8
7101c3cb98  ldr x0,[sp, #0x32a0]
7101c3cb9c  add x8,sp,#0x3, LSL #12
7101c3cba0  add x8,x8,#0x220
7101c3cba4  add x8,x8,#0x60
7101c3cba8  cmp x8,x0
7101c3cbac  b.eq 0x7101c3cbc0
7101c3cbb0  cbz x0,0x7101c3cbcc
7101c3cbb4  ldr x8,[x0]
7101c3cbb8  ldr x8,[x8, #0x28]
7101c3cbbc  b 0x7101c3cbc8
7101c3cbc0  ldr x8,[x0]
7101c3cbc4  ldr x8,[x8, #0x20]
7101c3cbc8  blr x8
7101c3cbcc  ldr x0,[sp, #0x3270]
7101c3cbd0  add x8,sp,#0x3, LSL #12
7101c3cbd4  add x8,x8,#0x220
7101c3cbd8  add x8,x8,#0x30
7101c3cbdc  cmp x8,x0
7101c3cbe0  b.eq 0x7101c3cbf4
7101c3cbe4  cbz x0,0x7101c3cc00
7101c3cbe8  ldr x8,[x0]
7101c3cbec  ldr x8,[x8, #0x28]
7101c3cbf0  b 0x7101c3cbfc
7101c3cbf4  ldr x8,[x0]
7101c3cbf8  ldr x8,[x8, #0x20]
7101c3cbfc  blr x8
7101c3cc00  ldur x0,[x29, #-0xe8]
7101c3cc04  stp x25,xzr,[x29, #-0xf0]
7101c3cc08  cbz x0,0x7101c3cc10
7101c3cc0c  bl 0x710392eb40
7101c3cc10  ldur x0,[x29, #-0x78]
7101c3cc14  stp x25,xzr,[x29, #-0x80]
7101c3cc18  cbz x0,0x7101c3cc20
7101c3cc1c  bl 0x710392eb40
7101c3cc20  ldp x8,x19,[sp, #0x28]
7101c3cc24  strb wzr,[x8, #0x70]
7101c3cc28  ldr x8,[x19]
7101c3cc2c  add x0,x8,#0x8
7101c3cc30  adrp x1,0x7104545000
7101c3cc34  add x1,x1,#0x160
7101c3cc38  bl 0x710323eba0
7101c3cc3c  ldr x8,[x19]
7101c3cc40  add x0,x8,#0x8
7101c3cc44  adrp x1,0x7104545000
7101c3cc48  add x1,x1,#0x168
7101c3cc4c  bl 0x710323eba0
7101c3cc50  ldr x8,[x19]
7101c3cc54  add x0,x8,#0x8
7101c3cc58  adrp x1,0x7104545000
7101c3cc5c  add x1,x1,#0x170
7101c3cc60  bl 0x710323eba0
7101c3cc64  ldr x8,[x19]
7101c3cc68  add x0,x8,#0x8
7101c3cc6c  adrp x1,0x7104545000
7101c3cc70  add x1,x1,#0x178
7101c3cc74  bl 0x710323eba0
7101c3cc78  ldr x8,[x19]
7101c3cc7c  add x0,x8,#0x8
7101c3cc80  adrp x1,0x7104545000
7101c3cc84  add x1,x1,#0x180
7101c3cc88  bl 0x710323eba0
7101c3cc8c  ldr x8,[x19]
7101c3cc90  add x0,x8,#0x8
7101c3cc94  adrp x1,0x7104545000
7101c3cc98  add x1,x1,#0x188
7101c3cc9c  bl 0x710323eba0
7101c3cca0  ldr x8,[x19]
7101c3cca4  add x0,x8,#0x8
7101c3cca8  adrp x1,0x7104545000
7101c3ccac  add x1,x1,#0x190
7101c3ccb0  bl 0x710323eba0
7101c3ccb4  ldr x8,[x19]
7101c3ccb8  adrp x1,0x7104545000
7101c3ccbc  add x1,x1,#0x198
7101c3ccc0  add x0,x8,#0x8
7101c3ccc4  add sp,sp,#0x3, LSL #12
7101c3ccc8  add sp,sp,#0x3e0
7101c3cccc  ldp x29,x30,[sp, #0x60]
7101c3ccd0  ldp x20,x19,[sp, #0x50]
7101c3ccd4  ldp x22,x21,[sp, #0x40]
7101c3ccd8  ldp x24,x23,[sp, #0x30]
7101c3ccdc  ldp x26,x25,[sp, #0x20]
7101c3cce0  ldp x28,x27,[sp, #0x10]
7101c3cce4  ldp d9,d8,[sp], #0x70
7101c3cce8  b 0x710323eba0
