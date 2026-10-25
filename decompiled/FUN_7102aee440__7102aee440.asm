// addr:      7102aee440
// offset:    0x2aee440
// name:      FUN_7102aee440
// mangled:   
// size:      1016

7102aee440  str x21,[sp, #-0x30]!
7102aee444  stp x20,x19,[sp, #0x10]
7102aee448  stp x29,x30,[sp, #0x20]
7102aee44c  add x29,sp,#0x20
7102aee450  ldr x8,[x0, #0x10]
7102aee454  ldr x9,[x8, #0x310]
7102aee458  mov x19,x0
7102aee45c  ldp x8,x9,[x9, #0xd0]
7102aee460  cmp x8,x9
7102aee464  b.eq 0x7102aee49c
7102aee468  mov x10,#0xf949
7102aee46c  movk x10,#0x55f0, LSL #16
7102aee470  movk x10,#0xf, LSL #32
7102aee474  ldr w11,[x8, #0x8]
7102aee478  cmp w11,#0x1
7102aee47c  b.hi 0x7102aee490
7102aee480  ldr x20,[x8]
7102aee484  ldr x11,[x20, #0x68]
7102aee488  cmp x11,x10
7102aee48c  b.eq 0x7102aee4e4
7102aee490  add x8,x8,#0x10
7102aee494  cmp x9,x8
7102aee498  b.ne 0x7102aee474
7102aee49c  mov x8,#-0x1
7102aee4a0  str x8,[x19, #0x88]
7102aee4a4  mov x8,#-0x1
7102aee4a8  mov w0,#0xffffffff
7102aee4ac  str x8,[x19, #0x90]
7102aee4b0  stur x8,[x19, #0x7c]
7102aee4b4  str w0,[x19, #0x84]
7102aee4b8  stur x8,[x19, #0x74]
7102aee4bc  str x8,[x19, #0x68]
7102aee4c0  stp x8,x8,[x19, #0x58]
7102aee4c4  mov w8,#0x1
7102aee4c8  str w0,[x19, #0x70]
7102aee4cc  mov w0,#0x1
7102aee4d0  strb w8,[x19, #0xa8]
7102aee4d4  ldp x29,x30,[sp, #0x20]
7102aee4d8  ldp x20,x19,[sp, #0x10]
7102aee4dc  ldr x21,[sp], #0x30
7102aee4e0  ret
7102aee4e4  cbz x20,0x7102aee4f4
7102aee4e8  ldr x8,[x20, #0xd8]
7102aee4ec  cbnz x8,0x7102aee528
7102aee4f0  b 0x7102aee4f8
7102aee4f4  cbz x20,0x7102aee49c
7102aee4f8  ldr x8,[x20, #0xd8]
7102aee4fc  cbnz x8,0x7102aee528
7102aee500  add x0,x20,#0x90
7102aee504  mov x1,xzr
7102aee508  bl 0x71026533a0
7102aee50c  mov x8,x0
7102aee510  ldr x0,[x20, #0xd8]
7102aee514  str x8,[x20, #0xd8]
7102aee518  cbz x0,0x7102aee528
7102aee51c  ldr x8,[x0]
7102aee520  ldr x8,[x8, #0x8]
7102aee524  blr x8
7102aee528  ldr x8,[x20, #0xd8]
7102aee52c  mov w21,#0xffffffff
7102aee530  cbz x8,0x7102aee554
7102aee534  ldr x8,[x8, #0x8]
7102aee538  ldr x0,[x8, #0x8]
7102aee53c  ldr x8,[x0]
7102aee540  ldr x8,[x8, #0x18]
7102aee544  adrp x1,0x71042a1000
7102aee548  add x1,x1,#0x25c
7102aee54c  blr x8
7102aee550  b 0x7102aee558
7102aee554  mov w0,w21
7102aee558  str w0,[x19, #0x88]
7102aee55c  ldr x8,[x20, #0xd8]
7102aee560  cbz x8,0x7102aee590
7102aee564  ldr x8,[x8, #0x8]
7102aee568  ldr x0,[x8, #0x8]
7102aee56c  ldr x8,[x0]
7102aee570  ldr x8,[x8, #0x18]
7102aee574  adrp x1,0x71043bc000
7102aee578  add x1,x1,#0x748
7102aee57c  blr x8
7102aee580  str w0,[x19, #0x8c]
7102aee584  ldr x8,[x20, #0xd8]
7102aee588  cbnz x8,0x7102aee5a0
7102aee58c  b 0x7102aee5c0
7102aee590  str w21,[x19, #0x8c]
7102aee594  cbz x20,0x7102aee4a4
7102aee598  ldr x8,[x20, #0xd8]
7102aee59c  cbz x8,0x7102aee5c0
7102aee5a0  ldr x8,[x8, #0x8]
7102aee5a4  ldr x0,[x8, #0x8]
7102aee5a8  ldr x8,[x0]
7102aee5ac  ldr x8,[x8, #0x18]
7102aee5b0  adrp x1,0x710437a000
7102aee5b4  add x1,x1,#0x7b5
7102aee5b8  blr x8
7102aee5bc  b 0x7102aee5c4
7102aee5c0  mov w0,#0xffffffff
7102aee5c4  str w0,[x19, #0x90]
7102aee5c8  ldr x8,[x20, #0xd8]
7102aee5cc  cbz x8,0x7102aee5f0
7102aee5d0  ldr x8,[x8, #0x8]
7102aee5d4  ldr x0,[x8, #0x8]
7102aee5d8  ldr x8,[x0]
7102aee5dc  ldr x8,[x8, #0x18]
7102aee5e0  adrp x1,0x710425d000
7102aee5e4  add x1,x1,#0x4ac
7102aee5e8  blr x8
7102aee5ec  b 0x7102aee5f4
7102aee5f0  mov w0,#0xffffffff
7102aee5f4  str w0,[x19, #0x94]
7102aee5f8  ldr x8,[x20, #0xd8]
7102aee5fc  cbz x8,0x7102aee620
7102aee600  ldr x8,[x8, #0x8]
7102aee604  ldr x0,[x8, #0x8]
7102aee608  ldr x8,[x0]
7102aee60c  ldr x8,[x8, #0x18]
7102aee610  adrp x1,0x71042b2000
7102aee614  add x1,x1,#0x273
7102aee618  blr x8
7102aee61c  b 0x7102aee624
7102aee620  mov w0,#0xffffffff
7102aee624  str w0,[x19, #0x78]
7102aee628  ldr x8,[x20, #0xd8]
7102aee62c  cbz x8,0x7102aee650
7102aee630  ldr x8,[x8, #0x8]
7102aee634  ldr x0,[x8, #0x8]
7102aee638  ldr x8,[x0]
7102aee63c  ldr x8,[x8, #0x18]
7102aee640  adrp x1,0x7104420000
7102aee644  add x1,x1,#0x516
7102aee648  blr x8
7102aee64c  b 0x7102aee654
7102aee650  mov w0,#0xffffffff
7102aee654  str w0,[x19, #0x7c]
7102aee658  ldr x8,[x20, #0xd8]
7102aee65c  cbz x8,0x7102aee680
7102aee660  ldr x8,[x8, #0x8]
7102aee664  ldr x0,[x8, #0x8]
7102aee668  ldr x8,[x0]
7102aee66c  ldr x8,[x8, #0x18]
7102aee670  adrp x1,0x71043cd000
7102aee674  add x1,x1,#0x60f
7102aee678  blr x8
7102aee67c  b 0x7102aee684
7102aee680  mov w0,#0xffffffff
7102aee684  str w0,[x19, #0x80]
7102aee688  ldr x8,[x20, #0xd8]
7102aee68c  cbz x8,0x7102aee6b0
7102aee690  ldr x8,[x8, #0x8]
7102aee694  ldr x0,[x8, #0x8]
7102aee698  ldr x8,[x0]
7102aee69c  ldr x8,[x8, #0x18]
7102aee6a0  adrp x1,0x710436a000
7102aee6a4  add x1,x1,#0x5f0
7102aee6a8  blr x8
7102aee6ac  b 0x7102aee6b4
7102aee6b0  mov w0,#0xffffffff
7102aee6b4  str w0,[x19, #0x84]
7102aee6b8  ldr x8,[x20, #0xd8]
7102aee6bc  cbz x8,0x7102aee6e0
7102aee6c0  ldr x8,[x8, #0x8]
7102aee6c4  ldr x0,[x8, #0x8]
7102aee6c8  ldr x8,[x0]
7102aee6cc  ldr x8,[x8, #0x18]
7102aee6d0  adrp x1,0x710436a000
7102aee6d4  add x1,x1,#0x5fe
7102aee6d8  blr x8
7102aee6dc  b 0x7102aee6e4
7102aee6e0  mov w0,#0xffffffff
7102aee6e4  str w0,[x19, #0x74]
7102aee6e8  ldr x8,[x20, #0xd8]
7102aee6ec  cbz x8,0x7102aee710
7102aee6f0  ldr x8,[x8, #0x8]
7102aee6f4  ldr x0,[x8, #0x8]
7102aee6f8  ldr x8,[x0]
7102aee6fc  ldr x8,[x8, #0x18]
7102aee700  adrp x1,0x7104328000
7102aee704  add x1,x1,#0x15b
7102aee708  blr x8
7102aee70c  b 0x7102aee714
7102aee710  mov w0,#0xffffffff
7102aee714  str w0,[x19, #0x58]
7102aee718  ldr x8,[x20, #0xd8]
7102aee71c  cbz x8,0x7102aee740
7102aee720  ldr x8,[x8, #0x8]
7102aee724  ldr x0,[x8, #0x8]
7102aee728  ldr x8,[x0]
7102aee72c  ldr x8,[x8, #0x18]
7102aee730  adrp x1,0x7104410000
7102aee734  add x1,x1,#0x8f7
7102aee738  blr x8
7102aee73c  b 0x7102aee744
7102aee740  mov w0,#0xffffffff
7102aee744  str w0,[x19, #0x5c]
7102aee748  ldr x8,[x20, #0xd8]
7102aee74c  cbz x8,0x7102aee770
7102aee750  ldr x8,[x8, #0x8]
7102aee754  ldr x0,[x8, #0x8]
7102aee758  ldr x8,[x0]
7102aee75c  ldr x8,[x8, #0x18]
7102aee760  adrp x1,0x710438a000
7102aee764  add x1,x1,#0xd5f
7102aee768  blr x8
7102aee76c  b 0x7102aee774
7102aee770  mov w0,#0xffffffff
7102aee774  str w0,[x19, #0x60]
7102aee778  ldr x8,[x20, #0xd8]
7102aee77c  cbz x8,0x7102aee7a0
7102aee780  ldr x8,[x8, #0x8]
7102aee784  ldr x0,[x8, #0x8]
7102aee788  ldr x8,[x0]
7102aee78c  ldr x8,[x8, #0x18]
7102aee790  adrp x1,0x7104463000
7102aee794  add x1,x1,#0xc73
7102aee798  blr x8
7102aee79c  b 0x7102aee7a4
7102aee7a0  mov w0,#0xffffffff
7102aee7a4  str w0,[x19, #0x64]
7102aee7a8  ldr x8,[x20, #0xd8]
7102aee7ac  cbz x8,0x7102aee7d0
7102aee7b0  ldr x8,[x8, #0x8]
7102aee7b4  ldr x0,[x8, #0x8]
7102aee7b8  ldr x8,[x0]
7102aee7bc  ldr x8,[x8, #0x18]
7102aee7c0  adrp x1,0x71042a1000
7102aee7c4  add x1,x1,#0x26f
7102aee7c8  blr x8
7102aee7cc  b 0x7102aee7d4
7102aee7d0  mov w0,#0xffffffff
7102aee7d4  str w0,[x19, #0x68]
7102aee7d8  ldr x8,[x20, #0xd8]
7102aee7dc  cbz x8,0x7102aee800
7102aee7e0  ldr x8,[x8, #0x8]
7102aee7e4  ldr x0,[x8, #0x8]
7102aee7e8  ldr x8,[x0]
7102aee7ec  ldr x8,[x8, #0x18]
7102aee7f0  adrp x1,0x7104359000
7102aee7f4  add x1,x1,#0x565
7102aee7f8  blr x8
7102aee7fc  b 0x7102aee804
7102aee800  mov w0,#0xffffffff
7102aee804  str w0,[x19, #0x6c]
7102aee808  ldr x8,[x20, #0xd8]
7102aee80c  cbz x8,0x7102aee830
7102aee810  ldr x8,[x8, #0x8]
7102aee814  ldr x0,[x8, #0x8]
7102aee818  ldr x8,[x0]
7102aee81c  ldr x8,[x8, #0x18]
7102aee820  adrp x1,0x710425d000
7102aee824  add x1,x1,#0x4bf
7102aee828  blr x8
7102aee82c  b 0x7102aee4c4
7102aee830  mov w0,#0xffffffff
7102aee834  b 0x7102aee4c4
