// addr:      71032cf130
// offset:    0x32cf130
// name:      FUN_71032cf130
// mangled:   
// size:      1712

71032cf130  sub sp,sp,#0xe0
71032cf134  stp d9,d8,[sp, #0x70]
71032cf138  stp x28,x27,[sp, #0x80]
71032cf13c  stp x26,x25,[sp, #0x90]
71032cf140  stp x24,x23,[sp, #0xa0]
71032cf144  stp x22,x21,[sp, #0xb0]
71032cf148  stp x20,x19,[sp, #0xc0]
71032cf14c  stp x29,x30,[sp, #0xd0]
71032cf150  add x29,sp,#0xd0
71032cf154  ldr w8,[x2]
71032cf158  mov x24,x0
71032cf15c  str wzr,[x0, #0xbe4]
71032cf160  cmp w8,#0x1
71032cf164  str w8,[x0, #0xbe0]
71032cf168  b.lt 0x71032cf7b0
71032cf16c  add x8,sp,#0x58
71032cf170  sub x9,x8,#0x90
71032cf174  str x9,[sp, #0x40]
71032cf178  sub x9,x8,#0x80
71032cf17c  str x9,[sp, #0x38]
71032cf180  sub x9,x8,#0x70
71032cf184  str x9,[sp, #0x30]
71032cf188  sub x9,x8,#0x60
71032cf18c  str x9,[sp, #0x28]
71032cf190  sub x9,x8,#0x30
71032cf194  sub x8,x8,#0x20
71032cf198  fmov s9,wzr
71032cf19c  stp x8,x9,[sp, #0x18]
71032cf1a0  mov w8,#0xcccd
71032cf1a4  movk w8,#0x3f4c, LSL #16
71032cf1a8  dup v0.4S,w8
71032cf1ac  fmov s8,0x3f800000
71032cf1b0  mov x20,x2
71032cf1b4  mov x21,x1
71032cf1b8  mov x22,xzr
71032cf1bc  adrp x23,0x7104452000
71032cf1c0  add x23,x23,#0xf80
71032cf1c4  adrp x27,0x710523d000
71032cf1c8  add x27,x27,#0x988
71032cf1cc  adrp x28,0x710523d000
71032cf1d0  add x28,x28,#0x9a8
71032cf1d4  mov x19,x24
71032cf1d8  str q0,[sp]
71032cf1dc  cmp x22,#0xa
71032cf1e0  b.cs 0x71032cf7dc
71032cf1e4  add x0,sp,#0x48
71032cf1e8  mov x1,x21
71032cf1ec  bl 0x7103776390
71032cf1f0  add x8,sp,#0x48
71032cf1f4  cmp x8,x19
71032cf1f8  b.eq 0x71032cf26c
71032cf1fc  ldr x8,[sp, #0x50]
71032cf200  ldr x8,[x8]
71032cf204  ldr x9,[x19, #0x8]
71032cf208  str x8,[x9]
71032cf20c  ldr x8,[sp, #0x50]
71032cf210  ldr x8,[x8, #0x8]
71032cf214  ldr x9,[x19, #0x8]
71032cf218  str x8,[x9, #0x8]
71032cf21c  ldr x9,[sp, #0x50]
71032cf220  ldr x8,[x19, #0x8]
71032cf224  cmp x8,x9
71032cf228  b.eq 0x71032cf26c
71032cf22c  ldr x10,[x9, #0x18]
71032cf230  ldr x10,[x10]
71032cf234  ldr x11,[x8, #0x18]
71032cf238  str x10,[x11]
71032cf23c  ldr x10,[x9, #0x18]
71032cf240  ldr x10,[x10, #0x8]
71032cf244  ldr x11,[x8, #0x18]
71032cf248  str x10,[x11, #0x8]
71032cf24c  ldr x10,[x9, #0x18]
71032cf250  ldr x10,[x10, #0x10]
71032cf254  ldr x11,[x8, #0x18]
71032cf258  str x10,[x11, #0x10]
71032cf25c  ldr x9,[x9, #0x18]
71032cf260  ldr x9,[x9, #0x18]
71032cf264  ldr x8,[x8, #0x18]
71032cf268  str x9,[x8, #0x18]
71032cf26c  ldr w8,[x20, #0x8]
71032cf270  stp w8,w22,[x19, #0x14]
71032cf274  add x8,sp,#0x58
71032cf278  add x0,sp,#0x48
71032cf27c  mov x1,x23
71032cf280  mov w2,w22
71032cf284  bl 0x7103776640
71032cf288  ldr x8,[sp, #0x18]
71032cf28c  cmp x8,x19
71032cf290  b.eq 0x71032cf2c0
71032cf294  ldr x8,[sp, #0x60]
71032cf298  str xzr,[sp, #0x60]
71032cf29c  ldr x25,[x19, #0x28]
71032cf2a0  str x8,[x19, #0x28]
71032cf2a4  cbz x25,0x71032cf2c0
71032cf2a8  ldr x0,[x25, #0x18]
71032cf2ac  stp x28,xzr,[x25, #0x10]
71032cf2b0  cbz x0,0x71032cf2b8
71032cf2b4  bl 0x710392eb40
71032cf2b8  mov x0,x25
71032cf2bc  bl 0x710392eb40
71032cf2c0  ldr x25,[sp, #0x60]
71032cf2c4  stp x27,xzr,[sp, #0x58]
71032cf2c8  cbz x25,0x71032cf2e4
71032cf2cc  ldr x0,[x25, #0x18]
71032cf2d0  stp x28,xzr,[x25, #0x10]
71032cf2d4  cbz x0,0x71032cf2dc
71032cf2d8  bl 0x710392eb40
71032cf2dc  mov x0,x25
71032cf2e0  bl 0x710392eb40
71032cf2e4  add x8,sp,#0x58
71032cf2e8  add x0,sp,#0x48
71032cf2ec  mov x1,x23
71032cf2f0  mov w2,w22
71032cf2f4  bl 0x7103776910
71032cf2f8  ldr x8,[sp, #0x20]
71032cf2fc  cmp x8,x19
71032cf300  b.eq 0x71032cf31c
71032cf304  ldr x8,[sp, #0x60]
71032cf308  str xzr,[sp, #0x60]
71032cf30c  ldr x0,[x19, #0x38]
71032cf310  str x8,[x19, #0x38]
71032cf314  cbz x0,0x71032cf31c
71032cf318  bl 0x710392eb40
71032cf31c  ldr x0,[sp, #0x60]
71032cf320  stp x28,xzr,[sp, #0x58]
71032cf324  cbz x0,0x71032cf32c
71032cf328  bl 0x710392eb40
71032cf32c  ldr x8,[x19, #0x38]
71032cf330  ldr x8,[x8]
71032cf334  cbz x8,0x71032cf340
71032cf338  ldr x25,[x8, #0x18]
71032cf33c  b 0x71032cf344
71032cf340  mov x25,xzr
71032cf344  mov w0,#0x10
71032cf348  mov w1,#0x20
71032cf34c  bl 0x710392e290
71032cf350  mov x26,x0
71032cf354  cbnz x0,0x71032cf3a0
71032cf358  adrp x8,0x7105332000
71032cf35c  ldr x0,[x8, #0xf00]
71032cf360  cbz x0,0x71032cf39c
71032cf364  mov w8,#0x20
71032cf368  stur wzr,[x29, #-0x64]
71032cf36c  sub x1,x29,#0x64
71032cf370  str x8,[sp, #0x58]
71032cf374  ldr x8,[x0]
71032cf378  ldr x8,[x8, #0x30]
71032cf37c  add x2,sp,#0x58
71032cf380  blr x8
71032cf384  tbz w0,#0x0,0x71032cf39c
71032cf388  mov w0,#0x10
71032cf38c  mov w1,#0x20
71032cf390  bl 0x710392e290
71032cf394  mov x26,x0
71032cf398  cbnz x0,0x71032cf3a0
71032cf39c  mov x26,xzr
71032cf3a0  stp xzr,xzr,[x26, #0x10]
71032cf3a4  stp xzr,xzr,[x26]
71032cf3a8  cbz x25,0x71032cf3d4
71032cf3ac  mov x0,x25
71032cf3b0  str x25,[x26]
71032cf3b4  bl 0x7103772ed0
71032cf3b8  str x0,[x26, #0x8]
71032cf3bc  mov x0,x25
71032cf3c0  bl 0x7103772fe0
71032cf3c4  str x0,[x26, #0x10]
71032cf3c8  mov x0,x25
71032cf3cc  bl 0x71037730f0
71032cf3d0  str x0,[x26, #0x18]
71032cf3d4  ldr x0,[x19, #0x58]
71032cf3d8  str x26,[x19, #0x58]
71032cf3dc  cbz x0,0x71032cf3e4
71032cf3e0  bl 0x710392eb40
71032cf3e4  add x8,sp,#0x58
71032cf3e8  mov x0,x19
71032cf3ec  adrp x1,0x7104359000
71032cf3f0  add x1,x1,#0x985
71032cf3f4  mov w2,w22
71032cf3f8  bl 0x7103776910
71032cf3fc  ldr x8,[sp, #0x28]
71032cf400  cmp x8,x19
71032cf404  adrp x26,0x710523d000
71032cf408  add x26,x26,#0x9e8
71032cf40c  b.eq 0x71032cf428
71032cf410  ldr x8,[sp, #0x60]
71032cf414  str xzr,[sp, #0x60]
71032cf418  ldr x0,[x19, #0x68]
71032cf41c  str x8,[x19, #0x68]
71032cf420  cbz x0,0x71032cf428
71032cf424  bl 0x710392eb40
71032cf428  ldr x0,[sp, #0x60]
71032cf42c  stp x28,xzr,[sp, #0x58]
71032cf430  cbz x0,0x71032cf438
71032cf434  bl 0x710392eb40
71032cf438  add x8,sp,#0x58
71032cf43c  mov x0,x19
71032cf440  adrp x1,0x710428f000
71032cf444  add x1,x1,#0xf59
71032cf448  mov w2,w22
71032cf44c  add x25,x19,#0x20
71032cf450  bl 0x7103776910
71032cf454  ldr x8,[sp, #0x30]
71032cf458  cmp x8,x19
71032cf45c  b.eq 0x71032cf478
71032cf460  ldr x8,[sp, #0x60]
71032cf464  str xzr,[sp, #0x60]
71032cf468  ldr x0,[x19, #0x78]
71032cf46c  str x8,[x19, #0x78]
71032cf470  cbz x0,0x71032cf478
71032cf474  bl 0x710392eb40
71032cf478  ldr x0,[sp, #0x60]
71032cf47c  stp x28,xzr,[sp, #0x58]
71032cf480  cbz x0,0x71032cf488
71032cf484  bl 0x710392eb40
71032cf488  ldr x8,[x19, #0x58]
71032cf48c  ldr x8,[x8]
71032cf490  ldr x9,[x19, #0x48]
71032cf494  str x8,[x9]
71032cf498  ldr x8,[x19, #0x58]
71032cf49c  ldr x8,[x8, #0x8]
71032cf4a0  ldr x9,[x19, #0x48]
71032cf4a4  str x8,[x9, #0x8]
71032cf4a8  ldr x8,[x19, #0x58]
71032cf4ac  ldr x8,[x8, #0x10]
71032cf4b0  ldr x9,[x19, #0x48]
71032cf4b4  str x8,[x9, #0x10]
71032cf4b8  ldr x8,[x19, #0x58]
71032cf4bc  ldr x8,[x8, #0x18]
71032cf4c0  ldr x9,[x19, #0x48]
71032cf4c4  str x8,[x9, #0x18]
71032cf4c8  add x8,sp,#0x58
71032cf4cc  mov x0,x25
71032cf4d0  adrp x1,0x71043ef000
71032cf4d4  add x1,x1,#0x51
71032cf4d8  bl 0x71037780e0
71032cf4dc  ldr x8,[sp, #0x38]
71032cf4e0  cmp x8,x19
71032cf4e4  b.eq 0x71032cf500
71032cf4e8  ldr x8,[sp, #0x60]
71032cf4ec  str xzr,[sp, #0x60]
71032cf4f0  ldr x0,[x19, #0x88]
71032cf4f4  str x8,[x19, #0x88]
71032cf4f8  cbz x0,0x71032cf500
71032cf4fc  bl 0x710392eb40
71032cf500  ldr x0,[sp, #0x60]
71032cf504  stp x26,xzr,[sp, #0x58]
71032cf508  cbz x0,0x71032cf510
71032cf50c  bl 0x710392eb40
71032cf510  add x8,sp,#0x58
71032cf514  mov x0,x25
71032cf518  adrp x1,0x7104410000
71032cf51c  add x1,x1,#0xd59
71032cf520  bl 0x71037780e0
71032cf524  ldr x8,[sp, #0x40]
71032cf528  cmp x8,x19
71032cf52c  b.eq 0x71032cf548
71032cf530  ldr x8,[sp, #0x60]
71032cf534  str xzr,[sp, #0x60]
71032cf538  ldr x0,[x19, #0x98]
71032cf53c  str x8,[x19, #0x98]
71032cf540  cbz x0,0x71032cf548
71032cf544  bl 0x710392eb40
71032cf548  ldr x0,[sp, #0x60]
71032cf54c  stp x26,xzr,[sp, #0x58]
71032cf550  cbz x0,0x71032cf558
71032cf554  bl 0x710392eb40
71032cf558  add x8,sp,#0x58
71032cf55c  mov x0,x25
71032cf560  adrp x1,0x7104464000
71032cf564  add x1,x1,#0x1f6
71032cf568  bl 0x7103776910
71032cf56c  ldr x0,[sp, #0x60]
71032cf570  ldr x8,[x0]
71032cf574  mov v1.16B,v9.16B
71032cf578  mov v0.16B,v9.16B
71032cf57c  cbz x8,0x71032cf58c
71032cf580  ldp s0,s2,[x8, #0x50]
71032cf584  fabs s1,s0
71032cf588  fabs s0,s2
71032cf58c  movi v2.2D,#0x0
71032cf590  mov v2.S[0x0],v1.S[0x0]
71032cf594  mov v2.S[0x1],v0.S[0x0]
71032cf598  str q2,[x19, #0xa0]
71032cf59c  stp x28,xzr,[sp, #0x58]
71032cf5a0  cbz x0,0x71032cf5a8
71032cf5a4  bl 0x710392eb40
71032cf5a8  ldr x8,[x19, #0x28]
71032cf5ac  ldr x8,[x8, #0x18]
71032cf5b0  ldr x8,[x8]
71032cf5b4  cbz x8,0x71032cf5cc
71032cf5b8  ldr w9,[x19, #0x108]
71032cf5bc  stp w9,w9,[x8, #0x48]
71032cf5c0  ldrb w9,[x8, #0x58]
71032cf5c4  orr w9,w9,#0x10
71032cf5c8  strb w9,[x8, #0x58]
71032cf5cc  ldr s0,[x19, #0x100]
71032cf5d0  ldr q1,[x19, #0xa0]
71032cf5d4  add x8,sp,#0x58
71032cf5d8  fmul v0.4S,v1.4S,v0.S[0x0]
71032cf5dc  ldr q1,[sp]
71032cf5e0  fmul v0.4S,v0.4S,v1.4S
71032cf5e4  mov x0,x25
71032cf5e8  adrp x1,0x710437a000
71032cf5ec  add x1,x1,#0xd66
71032cf5f0  str q0,[x19, #0xb0]
71032cf5f4  bl 0x7103776910
71032cf5f8  ldr x25,[sp, #0x60]
71032cf5fc  ldr x0,[x25, #0x10]
71032cf600  cbz x0,0x71032cf618
71032cf604  sub x1,x29,#0x64
71032cf608  mov w2,wzr
71032cf60c  mov w3,wzr
71032cf610  stur wzr,[x29, #-0x64]
71032cf614  bl 0x71037a2270
71032cf618  ldr w8,[x20, #0x4]
71032cf61c  cmp w8,#0x1
71032cf620  b.eq 0x71032cf63c
71032cf624  cmp w8,#0x2
71032cf628  b.ne 0x71032cf664
71032cf62c  ldr x0,[x19, #0x28]
71032cf630  adrp x1,0x71042b2000
71032cf634  add x1,x1,#0x7a3
71032cf638  b 0x71032cf648
71032cf63c  ldr x0,[x19, #0x28]
71032cf640  adrp x1,0x7104420000
71032cf644  add x1,x1,#0xa4d
71032cf648  mov v0.16B,v8.16B
71032cf64c  bl 0x7103778300
71032cf650  ldr x8,[x25]
71032cf654  cbz x8,0x71032cf68c
71032cf658  ldrb w9,[x8, #0x58]
71032cf65c  and w9,w9,#0xfe
71032cf660  b 0x71032cf688
71032cf664  ldr x0,[x19, #0x28]
71032cf668  mov v0.16B,v8.16B
71032cf66c  adrp x1,0x71042b2000
71032cf670  add x1,x1,#0x7a3
71032cf674  bl 0x7103778300
71032cf678  ldr x8,[x25]
71032cf67c  cbz x8,0x71032cf68c
71032cf680  ldrb w9,[x8, #0x58]
71032cf684  orr w9,w9,#0x1
71032cf688  strb w9,[x8, #0x58]
71032cf68c  ldr x0,[x19, #0x28]
71032cf690  adrp x1,0x7104464000
71032cf694  add x1,x1,#0x1ee
71032cf698  bl 0x7103778760
71032cf69c  ldr x0,[x19, #0x28]
71032cf6a0  adrp x1,0x71042f6000
71032cf6a4  add x1,x1,#0x3e8
71032cf6a8  bl 0x7103778760
71032cf6ac  ldr x0,[x19, #0x28]
71032cf6b0  adrp x1,0x7104441000
71032cf6b4  add x1,x1,#0xf72
71032cf6b8  bl 0x7103778760
71032cf6bc  ldr x0,[x19, #0x28]
71032cf6c0  adrp x1,0x71042d4000
71032cf6c4  add x1,x1,#0xaad
71032cf6c8  bl 0x7103778760
71032cf6cc  mov x0,x25
71032cf6d0  stp x28,xzr,[sp, #0x58]
71032cf6d4  bl 0x710392eb40
71032cf6d8  ldr x25,[sp, #0x50]
71032cf6dc  stp x27,xzr,[sp, #0x48]
71032cf6e0  cbz x25,0x71032cf6fc
71032cf6e4  ldr x0,[x25, #0x18]
71032cf6e8  stp x28,xzr,[x25, #0x10]
71032cf6ec  cbz x0,0x71032cf6f4
71032cf6f0  bl 0x710392eb40
71032cf6f4  mov x0,x25
71032cf6f8  bl 0x710392eb40
71032cf6fc  add x8,sp,#0x58
71032cf700  mov x0,x21
71032cf704  mov x1,x23
71032cf708  mov w2,w22
71032cf70c  bl 0x7103776640
71032cf710  ldr x25,[sp, #0x60]
71032cf714  ldr x8,[x25, #0x8]
71032cf718  cbz x8,0x71032cf730
71032cf71c  ldr x8,[x8, #0x18]
71032cf720  cbz x8,0x71032cf730
71032cf724  ldrb w9,[x8, #0x58]
71032cf728  and w9,w9,#0xfe
71032cf72c  strb w9,[x8, #0x58]
71032cf730  stp x27,xzr,[sp, #0x58]
71032cf734  cbz x25,0x71032cf750
71032cf738  ldr x0,[x25, #0x18]
71032cf73c  stp x28,xzr,[x25, #0x10]
71032cf740  cbz x0,0x71032cf748
71032cf744  bl 0x710392eb40
71032cf748  mov x0,x25
71032cf74c  bl 0x710392eb40
71032cf750  ldr x8,[x19, #0x28]
71032cf754  strb wzr,[x19, #0x11a]
71032cf758  ldr x9,[x8, #0x8]!
71032cf75c  cbz x9,0x71032cf77c
71032cf760  ldr x9,[x9, #0x18]
71032cf764  cbz x9,0x71032cf77c
71032cf768  ldrb w8,[x9, #0x58]
71032cf76c  and w8,w8,#0xfe
71032cf770  strb w8,[x9, #0x58]
71032cf774  ldr x8,[x19, #0x28]
71032cf778  add x8,x8,#0x8
71032cf77c  strb wzr,[x19, #0x11b]
71032cf780  ldr x8,[x8]
71032cf784  cbz x8,0x71032cf79c
71032cf788  ldr x8,[x8, #0x18]
71032cf78c  cbz x8,0x71032cf79c
71032cf790  ldrb w9,[x8, #0x58]
71032cf794  and w9,w9,#0xfe
71032cf798  strb w9,[x8, #0x58]
71032cf79c  ldrsw x8,[x24, #0xbe0]
71032cf7a0  add x22,x22,#0x1
71032cf7a4  add x19,x19,#0x130
71032cf7a8  cmp x22,x8
71032cf7ac  b.lt 0x71032cf1dc
71032cf7b0  mov x0,x24
71032cf7b4  bl 0x71032ce230
71032cf7b8  ldp d9,d8,[sp, #0x70]
71032cf7bc  ldp x29,x30,[sp, #0xd0]
71032cf7c0  ldp x20,x19,[sp, #0xc0]
71032cf7c4  ldp x22,x21,[sp, #0xb0]
71032cf7c8  ldp x24,x23,[sp, #0xa0]
71032cf7cc  ldp x26,x25,[sp, #0x90]
71032cf7d0  ldp x28,x27,[sp, #0x80]
71032cf7d4  add sp,sp,#0xe0
71032cf7d8  ret
71032cf7dc  bl 0x71039c2650
