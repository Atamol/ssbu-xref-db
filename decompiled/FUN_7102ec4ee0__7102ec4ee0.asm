// addr:      7102ec4ee0
// offset:    0x2ec4ee0
// name:      FUN_7102ec4ee0
// mangled:   
// size:      3576

7102ec4ee0  sub sp,sp,#0xd0
7102ec4ee4  str d8,[sp, #0x90]
7102ec4ee8  stp x22,x21,[sp, #0xa0]
7102ec4eec  stp x20,x19,[sp, #0xb0]
7102ec4ef0  stp x29,x30,[sp, #0xc0]
7102ec4ef4  add x29,sp,#0xc0
7102ec4ef8  mov v8.16B,v0.16B
7102ec4efc  ldr s0,[x0, #0x264]
7102ec4f00  fsub s0,s0,s8
7102ec4f04  fmov s1,wzr
7102ec4f08  fmax s0,s0,s1
7102ec4f0c  ldr x20,[x0, #0x40]
7102ec4f10  mov x19,x0
7102ec4f14  str s0,[x0, #0x264]
7102ec4f18  ldr x8,[x20, #0x38]
7102ec4f1c  cbz x8,0x7102ec4f84
7102ec4f20  adrp x8,0x7105314000
7102ec4f24  add x8,x8,#0x4d8
7102ec4f28  ldarb w8,[x8]
7102ec4f2c  tbz w8,#0x0,0x7102ec5c50
7102ec4f30  adrp x8,0x71052c5000
7102ec4f34  ldrb w8,[x8, #0x18a]
7102ec4f38  cbz w8,0x7102ec4f48
7102ec4f3c  adrp x0,0x710532f000
7102ec4f40  add x0,x0,#0x420
7102ec4f44  b 0x7102ec4f60
7102ec4f48  ldr x8,[x20, #0x38]
7102ec4f4c  ldr x0,[x8, #0x130]
7102ec4f50  ldr x8,[x0]
7102ec4f54  ldr x8,[x8, #0x138]
7102ec4f58  blr x8
7102ec4f5c  cbz x0,0x7102ec4f84
7102ec4f60  ldr x8,[x0, #0x8]
7102ec4f64  cmp x0,x8
7102ec4f68  b.eq 0x7102ec4f84
7102ec4f6c  ldr w9,[x8, #0x10]
7102ec4f70  cmp w9,#0x1
7102ec4f74  b.eq 0x7102ec5054
7102ec4f78  ldr x8,[x8, #0x8]
7102ec4f7c  cmp x0,x8
7102ec4f80  b.ne 0x7102ec4f6c
7102ec4f84  ldr s0,[x19, #0x264]
7102ec4f88  ldr x8,[x19, #0x18]
7102ec4f8c  cbz x8,0x7102ec506c
7102ec4f90  ldrb w9,[x8, #0xe0]
7102ec4f94  cbz w9,0x7102ec4fc4
7102ec4f98  ldr x9,[x8, #0xc8]
7102ec4f9c  cbz x9,0x7102ec4fb0
7102ec4fa0  ldrb w10,[x9, #0x30]
7102ec4fa4  cbz w10,0x7102ec506c
7102ec4fa8  ldrb w9,[x9, #0x31]
7102ec4fac  cbz w9,0x7102ec4fec
7102ec4fb0  ldr x9,[x8, #0xb0]
7102ec4fb4  ldrb w9,[x9, #0x10]
7102ec4fb8  cmp w9,#0x0
7102ec4fbc  cset w10,eq
7102ec4fc0  b 0x7102ec4fc8
7102ec4fc4  mov w10,#0x1
7102ec4fc8  ldr x11,[x8, #0xd8]
7102ec4fcc  cmp x11,#0x0
7102ec4fd0  cset w9,eq
7102ec4fd4  and w9,w10,w9
7102ec4fd8  cbz x11,0x7102ec4fec
7102ec4fdc  cbz w10,0x7102ec4fec
7102ec4fe0  ldrb w9,[x11, #0x21]
7102ec4fe4  cmp w9,#0x0
7102ec4fe8  cset w9,ne
7102ec4fec  fcmp s0,#0.0
7102ec4ff0  b.le 0x7102ec5078
7102ec4ff4  cmp x8,#0x0
7102ec4ff8  cset w10,eq
7102ec4ffc  orr w9,w9,w10
7102ec5000  tbnz w9,#0x0,0x7102ec50b8
7102ec5004  ldrb w9,[x8, #0xe0]
7102ec5008  cbz w9,0x7102ec501c
7102ec500c  ldr x9,[x8, #0xc8]
7102ec5010  cbz x9,0x7102ec501c
7102ec5014  mov w10,#0x101
7102ec5018  strh w10,[x9, #0x30]
7102ec501c  ldr x9,[x8, #0xd8]
7102ec5020  cbz x9,0x7102ec502c
7102ec5024  mov w10,#0x1
7102ec5028  strb w10,[x9, #0x21]
7102ec502c  ldrb w9,[x8, #0xe0]
7102ec5030  cbz w9,0x7102ec50b8
7102ec5034  ldr x8,[x8, #0xb0]
7102ec5038  strb wzr,[x8, #0x10]
7102ec503c  ldrb w8,[x19, #0x260]
7102ec5040  cbnz w8,0x7102ec50c0
7102ec5044  ldrb w8,[x19, #0x261]
7102ec5048  cbz w8,0x7102ec50e0
7102ec504c  strb wzr,[x19, #0x261]
7102ec5050  b 0x7102ec50e0
7102ec5054  ldr x8,[x19, #0x10]
7102ec5058  ldr w8,[x8, #0x2ec]
7102ec505c  fmov s0,w8
7102ec5060  str w8,[x19, #0x264]
7102ec5064  ldr x8,[x19, #0x18]
7102ec5068  cbnz x8,0x7102ec4f90
7102ec506c  mov w9,wzr
7102ec5070  fcmp s0,#0.0
7102ec5074  b.gt 0x7102ec4ff4
7102ec5078  cbz x8,0x7102ec50b8
7102ec507c  eor w9,w9,#0x1
7102ec5080  tbnz w9,#0x0,0x7102ec50b8
7102ec5084  ldrb w9,[x8, #0xe0]
7102ec5088  cbz w9,0x7102ec5098
7102ec508c  ldr x9,[x8, #0xc8]
7102ec5090  cbz x9,0x7102ec5098
7102ec5094  strh wzr,[x9, #0x30]
7102ec5098  ldr x9,[x8, #0xd8]
7102ec509c  cbz x9,0x7102ec50a4
7102ec50a0  strb wzr,[x9, #0x21]
7102ec50a4  ldrb w9,[x8, #0xe0]
7102ec50a8  cbz w9,0x7102ec50b8
7102ec50ac  ldr x8,[x8, #0xb0]
7102ec50b0  mov w9,#0x1
7102ec50b4  strb w9,[x8, #0x10]
7102ec50b8  ldrb w8,[x19, #0x260]
7102ec50bc  cbz w8,0x7102ec5044
7102ec50c0  ldr s0,[x19, #0x25c]
7102ec50c4  fsub s0,s0,s8
7102ec50c8  fcmp s0,#0.0
7102ec50cc  str s0,[x19, #0x25c]
7102ec50d0  b.pl 0x7102ec50e0
7102ec50d4  mov w8,#0x100
7102ec50d8  str wzr,[x19, #0x25c]
7102ec50dc  strh w8,[x19, #0x260]
7102ec50e0  ldr x0,[x19, #0x1d8]
7102ec50e4  mov v0.16B,v8.16B
7102ec50e8  bl 0x7102ecf700
7102ec50ec  ldr x0,[x19, #0x1e0]
7102ec50f0  mov v0.16B,v8.16B
7102ec50f4  bl 0x7102ecf700
7102ec50f8  ldr x0,[x19, #0x1e8]
7102ec50fc  mov v0.16B,v8.16B
7102ec5100  bl 0x7102ecf700
7102ec5104  ldr x0,[x19, #0x1f0]
7102ec5108  mov v0.16B,v8.16B
7102ec510c  bl 0x7102ecf700
7102ec5110  ldr x0,[x19, #0x1f8]
7102ec5114  mov v0.16B,v8.16B
7102ec5118  bl 0x7102ecf700
7102ec511c  ldr x0,[x19, #0x200]
7102ec5120  mov v0.16B,v8.16B
7102ec5124  bl 0x7102ecf700
7102ec5128  ldr x0,[x19, #0x208]
7102ec512c  mov v0.16B,v8.16B
7102ec5130  bl 0x7102ecf700
7102ec5134  ldr x0,[x19, #0x210]
7102ec5138  mov v0.16B,v8.16B
7102ec513c  bl 0x7102ecf700
7102ec5140  ldr x0,[x19, #0x218]
7102ec5144  mov v0.16B,v8.16B
7102ec5148  bl 0x7102ecf700
7102ec514c  ldr x0,[x19, #0x220]
7102ec5150  mov v0.16B,v8.16B
7102ec5154  bl 0x7102ecf700
7102ec5158  ldr x0,[x19, #0x228]
7102ec515c  mov v0.16B,v8.16B
7102ec5160  bl 0x7102ecf700
7102ec5164  ldr x0,[x19, #0x230]
7102ec5168  mov v0.16B,v8.16B
7102ec516c  bl 0x7102ecf700
7102ec5170  ldr x0,[x19, #0x238]
7102ec5174  mov v0.16B,v8.16B
7102ec5178  bl 0x7102ecf700
7102ec517c  ldr x0,[x19, #0x240]
7102ec5180  mov v0.16B,v8.16B
7102ec5184  bl 0x7102ecf700
7102ec5188  ldr x0,[x19, #0x248]
7102ec518c  mov v0.16B,v8.16B
7102ec5190  bl 0x7102ecf700
7102ec5194  ldr x0,[x19, #0x250]
7102ec5198  mov v0.16B,v8.16B
7102ec519c  bl 0x7102ecf700
7102ec51a0  ldrb w8,[x19, #0x1d0]
7102ec51a4  cbz w8,0x7102ec54b0
7102ec51a8  ldr s0,[x19, #0x25c]
7102ec51ac  fcmp s0,#0.0
7102ec51b0  b.ne 0x7102ec54b0
7102ec51b4  ldr x8,[x19, #0x10]
7102ec51b8  ldr w8,[x8, #0x2e8]
7102ec51bc  str w8,[x19, #0x25c]
7102ec51c0  str w8,[x19, #0x258]
7102ec51c4  mov w8,#0x1
7102ec51c8  strh w8,[x19, #0x260]
7102ec51cc  ldr x8,[x19, #0x1d8]
7102ec51d0  ldr x9,[x8, #0xf0]
7102ec51d4  cbz x9,0x7102ec51e0
7102ec51d8  ldrb w9,[x9, #0x35]
7102ec51dc  cbnz w9,0x7102ec51e8
7102ec51e0  ldr w8,[x8, #0x78]
7102ec51e4  cbz w8,0x7102ec53cc
7102ec51e8  add x21,x19,#0x1e0
7102ec51ec  ldr x8,[x21]
7102ec51f0  ldr x9,[x8, #0xf0]
7102ec51f4  cbz x9,0x7102ec5200
7102ec51f8  ldrb w9,[x9, #0x35]
7102ec51fc  cbnz w9,0x7102ec5208
7102ec5200  ldr w8,[x8, #0x78]
7102ec5204  cbz w8,0x7102ec53d0
7102ec5208  add x21,x19,#0x1e8
7102ec520c  ldr x8,[x21]
7102ec5210  ldr x9,[x8, #0xf0]
7102ec5214  cbz x9,0x7102ec5220
7102ec5218  ldrb w9,[x9, #0x35]
7102ec521c  cbnz w9,0x7102ec5228
7102ec5220  ldr w8,[x8, #0x78]
7102ec5224  cbz w8,0x7102ec53d0
7102ec5228  add x21,x19,#0x1f0
7102ec522c  ldr x8,[x21]
7102ec5230  ldr x9,[x8, #0xf0]
7102ec5234  cbz x9,0x7102ec5240
7102ec5238  ldrb w9,[x9, #0x35]
7102ec523c  cbnz w9,0x7102ec5248
7102ec5240  ldr w8,[x8, #0x78]
7102ec5244  cbz w8,0x7102ec53d0
7102ec5248  add x21,x19,#0x1f8
7102ec524c  ldr x8,[x21]
7102ec5250  ldr x9,[x8, #0xf0]
7102ec5254  cbz x9,0x7102ec5260
7102ec5258  ldrb w9,[x9, #0x35]
7102ec525c  cbnz w9,0x7102ec5268
7102ec5260  ldr w8,[x8, #0x78]
7102ec5264  cbz w8,0x7102ec53d0
7102ec5268  add x21,x19,#0x200
7102ec526c  ldr x8,[x21]
7102ec5270  ldr x9,[x8, #0xf0]
7102ec5274  cbz x9,0x7102ec5280
7102ec5278  ldrb w9,[x9, #0x35]
7102ec527c  cbnz w9,0x7102ec5288
7102ec5280  ldr w8,[x8, #0x78]
7102ec5284  cbz w8,0x7102ec53d0
7102ec5288  add x21,x19,#0x208
7102ec528c  ldr x8,[x21]
7102ec5290  ldr x9,[x8, #0xf0]
7102ec5294  cbz x9,0x7102ec52a0
7102ec5298  ldrb w9,[x9, #0x35]
7102ec529c  cbnz w9,0x7102ec52a8
7102ec52a0  ldr w8,[x8, #0x78]
7102ec52a4  cbz w8,0x7102ec53d0
7102ec52a8  add x21,x19,#0x210
7102ec52ac  ldr x8,[x21]
7102ec52b0  ldr x9,[x8, #0xf0]
7102ec52b4  cbz x9,0x7102ec52c0
7102ec52b8  ldrb w9,[x9, #0x35]
7102ec52bc  cbnz w9,0x7102ec52c8
7102ec52c0  ldr w8,[x8, #0x78]
7102ec52c4  cbz w8,0x7102ec53d0
7102ec52c8  add x21,x19,#0x218
7102ec52cc  ldr x8,[x21]
7102ec52d0  ldr x9,[x8, #0xf0]
7102ec52d4  cbz x9,0x7102ec52e0
7102ec52d8  ldrb w9,[x9, #0x35]
7102ec52dc  cbnz w9,0x7102ec52e8
7102ec52e0  ldr w8,[x8, #0x78]
7102ec52e4  cbz w8,0x7102ec53d0
7102ec52e8  add x21,x19,#0x220
7102ec52ec  ldr x8,[x21]
7102ec52f0  ldr x9,[x8, #0xf0]
7102ec52f4  cbz x9,0x7102ec5300
7102ec52f8  ldrb w9,[x9, #0x35]
7102ec52fc  cbnz w9,0x7102ec5308
7102ec5300  ldr w8,[x8, #0x78]
7102ec5304  cbz w8,0x7102ec53d0
7102ec5308  add x21,x19,#0x228
7102ec530c  ldr x8,[x21]
7102ec5310  ldr x9,[x8, #0xf0]
7102ec5314  cbz x9,0x7102ec5320
7102ec5318  ldrb w9,[x9, #0x35]
7102ec531c  cbnz w9,0x7102ec5328
7102ec5320  ldr w8,[x8, #0x78]
7102ec5324  cbz w8,0x7102ec53d0
7102ec5328  add x21,x19,#0x230
7102ec532c  ldr x8,[x21]
7102ec5330  ldr x9,[x8, #0xf0]
7102ec5334  cbz x9,0x7102ec5340
7102ec5338  ldrb w9,[x9, #0x35]
7102ec533c  cbnz w9,0x7102ec5348
7102ec5340  ldr w8,[x8, #0x78]
7102ec5344  cbz w8,0x7102ec53d0
7102ec5348  add x21,x19,#0x238
7102ec534c  ldr x8,[x21]
7102ec5350  ldr x9,[x8, #0xf0]
7102ec5354  cbz x9,0x7102ec5360
7102ec5358  ldrb w9,[x9, #0x35]
7102ec535c  cbnz w9,0x7102ec5368
7102ec5360  ldr w8,[x8, #0x78]
7102ec5364  cbz w8,0x7102ec53d0
7102ec5368  add x21,x19,#0x240
7102ec536c  ldr x8,[x21]
7102ec5370  ldr x9,[x8, #0xf0]
7102ec5374  cbz x9,0x7102ec5380
7102ec5378  ldrb w9,[x9, #0x35]
7102ec537c  cbnz w9,0x7102ec5388
7102ec5380  ldr w8,[x8, #0x78]
7102ec5384  cbz w8,0x7102ec53d0
7102ec5388  add x21,x19,#0x248
7102ec538c  ldr x8,[x21]
7102ec5390  ldr x9,[x8, #0xf0]
7102ec5394  cbz x9,0x7102ec53a0
7102ec5398  ldrb w9,[x9, #0x35]
7102ec539c  cbnz w9,0x7102ec53a8
7102ec53a0  ldr w8,[x8, #0x78]
7102ec53a4  cbz w8,0x7102ec53d0
7102ec53a8  add x21,x19,#0x250
7102ec53ac  ldr x8,[x21]
7102ec53b0  ldr x9,[x8, #0xf0]
7102ec53b4  cbz x9,0x7102ec53c0
7102ec53b8  ldrb w9,[x9, #0x35]
7102ec53bc  cbnz w9,0x7102ec54b0
7102ec53c0  ldr w8,[x8, #0x78]
7102ec53c4  cbnz w8,0x7102ec54b0
7102ec53c8  b 0x7102ec53d0
7102ec53cc  add x21,x19,#0x1d8
7102ec53d0  adrp x8,0x710446a000
7102ec53d4  ldr q2,[x8, #0x350]
7102ec53d8  ldr x22,[x19, #0x18]
7102ec53dc  cbz x22,0x7102ec5490
7102ec53e0  ldr x8,[x22, #0xd8]
7102ec53e4  cbz x8,0x7102ec5424
7102ec53e8  ldr x8,[x8, #0x8]
7102ec53ec  adrp x1,0x71042b2000
7102ec53f0  add x1,x1,#0x592
7102ec53f4  str q2,[sp]
7102ec53f8  ldr x0,[x8, #0x8]
7102ec53fc  ldr x8,[x0]
7102ec5400  ldr x8,[x8, #0x18]
7102ec5404  blr x8
7102ec5408  ldr q2,[sp]
7102ec540c  ldr x22,[x19, #0x18]
7102ec5410  cbz x22,0x7102ec5490
7102ec5414  mov w20,w0
7102ec5418  ldr x8,[x22, #0xd8]
7102ec541c  cbnz x8,0x7102ec5430
7102ec5420  b 0x7102ec5478
7102ec5424  mov w20,#0xffffffff
7102ec5428  ldr x8,[x22, #0xd8]
7102ec542c  cbz x8,0x7102ec5478
7102ec5430  ldr x8,[x8, #0x8]
7102ec5434  ldr x0,[x8, #0x8]
7102ec5438  ldr x8,[x0]
7102ec543c  ldr x8,[x8, #0x10]
7102ec5440  blr x8
7102ec5444  cmp w0,w20
7102ec5448  b.ls 0x7102ec5478
7102ec544c  ldr x8,[x22, #0xd8]
7102ec5450  ldr x8,[x8, #0x8]
7102ec5454  ldr x0,[x8, #0x48]
7102ec5458  ldr x8,[x0]
7102ec545c  ldr x8,[x8, #0x38]
7102ec5460  mov w1,wzr
7102ec5464  blr x8
7102ec5468  mov w8,w20
7102ec546c  add x8,x1,x8, LSL #0x6
7102ec5470  add x8,x8,#0x30
7102ec5474  b 0x7102ec548c
7102ec5478  ldr x0,[x22, #0x90]
7102ec547c  ldr x8,[x0]
7102ec5480  ldr x8,[x8, #0x158]
7102ec5484  blr x8
7102ec5488  add x8,x0,#0x30
7102ec548c  ldr q2,[x8]
7102ec5490  ext v0.16B,v2.16B,v2.16B,0x8
7102ec5494  fmov s1,wzr
7102ec5498  ldr x8,[x21]
7102ec549c  mov v0.S[0x1],v1.S[0x0]
7102ec54a0  mov w9,#0x1
7102ec54a4  str w9,[x8, #0x78]
7102ec54a8  mov v2.D[0x1],v0.D[0x0]
7102ec54ac  str q2,[x8, #0x90]
7102ec54b0  ldr s0,[x19, #0x264]
7102ec54b4  fcmp s0,#0.0
7102ec54b8  b.le 0x7102ec54c4
7102ec54bc  add x21,x19,#0xf0
7102ec54c0  b 0x7102ec58ac
7102ec54c4  ldrb w8,[x19, #0x38]
7102ec54c8  cbz w8,0x7102ec557c
7102ec54cc  ldr s0,[x19, #0x34]
7102ec54d0  fsub s0,s0,s8
7102ec54d4  fcmp s0,#0.0
7102ec54d8  fmov s2,wzr
7102ec54dc  str s0,[x19, #0x34]
7102ec54e0  b.pl 0x7102ec558c
7102ec54e4  mov w8,#0x100
7102ec54e8  str wzr,[x19, #0x34]
7102ec54ec  strh w8,[x19, #0x38]
7102ec54f0  ldr x8,[x19, #0x18]
7102ec54f4  cbz x8,0x7102ec5594
7102ec54f8  ldrb w8,[x8, #0x110]
7102ec54fc  cbz w8,0x7102ec5594
7102ec5500  ldr x20,[x19, #0x90]
7102ec5504  ldr x8,[x20, #0x38]
7102ec5508  mov v0.16B,v2.16B
7102ec550c  cbz x8,0x7102ec554c
7102ec5510  adrp x8,0x7105314000
7102ec5514  add x8,x8,#0x4d8
7102ec5518  ldarb w8,[x8]
7102ec551c  tbz w8,#0x0,0x7102ec5c90
7102ec5520  adrp x8,0x71052c5000
7102ec5524  ldrb w8,[x8, #0x18a]
7102ec5528  mov v0.16B,v2.16B
7102ec552c  cbnz w8,0x7102ec554c
7102ec5530  ldr x8,[x20, #0x38]
7102ec5534  ldr x0,[x8, #0x130]
7102ec5538  ldr x8,[x0]
7102ec553c  ldr x8,[x8, #0xb0]
7102ec5540  mov w1,wzr
7102ec5544  blr x8
7102ec5548  fmov s2,wzr
7102ec554c  ldr s1,[x19, #0xe0]
7102ec5550  fsub s0,s1,s0
7102ec5554  fmax s0,s0,s2
7102ec5558  fcmp s0,#0.0
7102ec555c  str s0,[x19, #0xe0]
7102ec5560  b.hi 0x7102ec5594
7102ec5564  mov w8,#0x1
7102ec5568  strh w8,[x19, #0x38]
7102ec556c  mov w8,#0x5
7102ec5570  str xzr,[x19, #0x30]
7102ec5574  str w8,[x19, #0x2c]
7102ec5578  b 0x7102ec5594
7102ec557c  ldrb w8,[x19, #0x39]
7102ec5580  fmov s2,wzr
7102ec5584  cbz w8,0x7102ec558c
7102ec5588  strb wzr,[x19, #0x39]
7102ec558c  ldr x8,[x19, #0x18]
7102ec5590  cbnz x8,0x7102ec54f8
7102ec5594  adrp x8,0x7104468000
7102ec5598  ldr q0,[x8, #0xca0]
7102ec559c  mov x21,x19
7102ec55a0  adrp x8,0x710446a000
7102ec55a4  str q0,[x21, #0xf0]!
7102ec55a8  ldr q0,[x8, #0x360]
7102ec55ac  adrp x8,0x7104465000
7102ec55b0  ldr q1,[x8, #0x6b0]
7102ec55b4  adrp x8,0x710446a000
7102ec55b8  stp q0,q1,[x21, #0x10]
7102ec55bc  ldr q0,[x8, #0x350]
7102ec55c0  ldur w8,[x21, #-0xc4]
7102ec55c4  sub w8,w8,#0x1
7102ec55c8  cmp w8,#0x4
7102ec55cc  str q0,[x21, #0x30]
7102ec55d0  b.hi 0x7102ec58ac
7102ec55d4  adrp x9,0x710451f000
7102ec55d8  add x9,x9,#0x88c
7102ec55dc  ldrsw x8,[x9, x8, LSL #0x2]
7102ec55e0  add x8,x8,x9
7102ec55e4  br x8
7102ec55e8  str q0,[sp]
7102ec55ec  ldp x9,x10,[x19, #0x160]
7102ec55f0  mov w8,#0x42c80000
7102ec55f4  ldp x11,x12,[x19, #0x150]
7102ec55f8  str w8,[x19, #0xe0]
7102ec55fc  stp x12,x9,[x21, #0x28]
7102ec5600  str x11,[x21, #0x20]
7102ec5604  ldp x8,x9,[x19, #0x130]
7102ec5608  mov w20,#0x1
7102ec560c  ldp x11,x13,[x19, #0x140]
7102ec5610  str x10,[x21, #0x38]
7102ec5614  stp x11,x13,[x21, #0x10]
7102ec5618  mov w10,#0x2
7102ec561c  stp x8,x9,[x21]
7102ec5620  ldp x9,x8,[x19, #0x10]
7102ec5624  ldr w9,[x9, #0x2dc]
7102ec5628  stp w9,w9,[x19, #0x30]
7102ec562c  str w10,[x19, #0x2c]
7102ec5630  strh w20,[x19, #0x38]
7102ec5634  cbz x8,0x7102ec5644
7102ec5638  add x0,x8,#0x108
7102ec563c  strb w20,[x8, #0x110]
7102ec5640  bl 0x71025e9d50
7102ec5644  ldr x0,[x19, #0x40]
7102ec5648  bl 0x710313ef20
7102ec564c  ldr x0,[x19, #0x18]
7102ec5650  fmov s0,wzr
7102ec5654  mov w1,#0x1
7102ec5658  strb wzr,[x19, #0x1d0]
7102ec565c  str xzr,[x19, #0x258]
7102ec5660  strh w20,[x19, #0x260]
7102ec5664  bl 0x710260fdd0
7102ec5668  ldr x22,[x19, #0x18]
7102ec566c  cbz x22,0x7102ec5aa0
7102ec5670  ldr x8,[x22, #0xd8]
7102ec5674  cbz x8,0x7102ec5aa8
7102ec5678  ldr x8,[x8, #0x8]
7102ec567c  ldr x0,[x8, #0x8]
7102ec5680  ldr x8,[x0]
7102ec5684  ldr x8,[x8, #0x18]
7102ec5688  adrp x1,0x7104348000
7102ec568c  add x1,x1,#0x63e
7102ec5690  blr x8
7102ec5694  ldr q1,[sp]
7102ec5698  ldr x22,[x19, #0x18]
7102ec569c  cbz x22,0x7102ec5b14
7102ec56a0  mov w20,w0
7102ec56a4  ldr x8,[x22, #0xd8]
7102ec56a8  cbnz x8,0x7102ec5ab4
7102ec56ac  b 0x7102ec5afc
7102ec56b0  ldp s0,s1,[x19, #0x30]
7102ec56b4  ldr x8,[x19, #0x10]
7102ec56b8  ldr s2,[x8, #0x2dc]
7102ec56bc  fcmp s1,#0.0
7102ec56c0  fsub s0,s0,s1
7102ec56c4  fdiv s0,s0,s2
7102ec56c8  movi v2.2D,#0x0
7102ec56cc  ldr q3,[x19, #0x1c0]
7102ec56d0  mov v2.S[0x0],v0.S[0x0]
7102ec56d4  mov v2.S[0x1],v0.S[0x0]
7102ec56d8  mov v2.S[0x2],v0.S[0x0]
7102ec56dc  ldr q0,[x19, #0x170]
7102ec56e0  fsub v3.4S,v3.4S,v0.4S
7102ec56e4  fmul v2.4S,v3.4S,v2.4S
7102ec56e8  fadd v0.4S,v0.4S,v2.4S
7102ec56ec  fmov s2,0x3f800000
7102ec56f0  mov v3.16B,v0.16B
7102ec56f4  mov v3.S[0x3],v2.S[0x0]
7102ec56f8  ext v0.16B,v3.16B,v0.16B,0xc
7102ec56fc  ext v2.16B,v0.16B,v3.16B,0x4
7102ec5700  ext v0.16B,v0.16B,v0.16B,0x8
7102ec5704  ext v0.16B,v2.16B,v0.16B,0xc
7102ec5708  str q0,[x19, #0x120]
7102ec570c  b.ne 0x7102ec58ac
7102ec5710  ldr w8,[x8, #0x2e0]
7102ec5714  stp w8,w8,[x19, #0x30]
7102ec5718  mov w8,#0x1
7102ec571c  strh w8,[x19, #0x38]
7102ec5720  ldrb w8,[x19, #0x1d0]
7102ec5724  orr w9,wzr,#0x3
7102ec5728  str w9,[x19, #0x2c]
7102ec572c  cbnz w8,0x7102ec58ac
7102ec5730  ldr x8,[x19, #0x8]
7102ec5734  ldr x8,[x8, #0x340]
7102ec5738  ldp w9,w10,[x8]
7102ec573c  str w10,[x8]
7102ec5740  ldp w10,w11,[x8, #0x8]
7102ec5744  eor w9,w9,w9, LSL #0xb
7102ec5748  eor w9,w9,w9, LSR #0x8
7102ec574c  eor w9,w9,w11
7102ec5750  eor w9,w9,w11, LSR #0x13
7102ec5754  ucvtf s0,w9
7102ec5758  stp w10,w11,[x8, #0x4]
7102ec575c  str w9,[x8, #0xc]
7102ec5760  adrp x8,0x7104473000
7102ec5764  ldr s1,[x8, #0x710]
7102ec5768  ldr x8,[x19, #0x10]
7102ec576c  fmul s0,s0,s1
7102ec5770  ldr s1,[x8, #0x2f0]
7102ec5774  fcmp s0,s1
7102ec5778  b.pl 0x7102ec5c34
7102ec577c  mov w8,#0x1
7102ec5780  strb w8,[x19, #0x1d0]
7102ec5784  b 0x7102ec5c3c
7102ec5788  ldr q0,[x19, #0x1c0]
7102ec578c  fmov s1,0x3f800000
7102ec5790  mov v2.16B,v0.16B
7102ec5794  mov v2.S[0x3],v1.S[0x0]
7102ec5798  ext v0.16B,v2.16B,v0.16B,0xc
7102ec579c  ext v1.16B,v0.16B,v2.16B,0x4
7102ec57a0  ext v0.16B,v0.16B,v0.16B,0x8
7102ec57a4  ext v0.16B,v1.16B,v0.16B,0xc
7102ec57a8  str q0,[x19, #0x120]
7102ec57ac  ldr s0,[x19, #0x34]
7102ec57b0  fcmp s0,#0.0
7102ec57b4  b.ne 0x7102ec58ac
7102ec57b8  ldr x8,[x19, #0x10]
7102ec57bc  ldr w8,[x8, #0x2e4]
7102ec57c0  stp w8,w8,[x19, #0x30]
7102ec57c4  mov w9,#0x4
7102ec57c8  mov w8,#0x1
7102ec57cc  str w9,[x19, #0x2c]
7102ec57d0  strh w8,[x19, #0x38]
7102ec57d4  b 0x7102ec58ac
7102ec57d8  ldr x8,[x19, #0x10]
7102ec57dc  ldr s0,[x19, #0x34]
7102ec57e0  movi v2.2D,#0x0
7102ec57e4  ldr q3,[x19, #0x1c0]
7102ec57e8  fcmp s0,#0.0
7102ec57ec  ldr s1,[x8, #0x2e4]
7102ec57f0  fdiv s1,s0,s1
7102ec57f4  mov v2.S[0x0],v1.S[0x0]
7102ec57f8  mov v2.S[0x1],v1.S[0x0]
7102ec57fc  mov v2.S[0x2],v1.S[0x0]
7102ec5800  ldr q1,[x19, #0x170]
7102ec5804  fsub v3.4S,v3.4S,v1.4S
7102ec5808  fmul v2.4S,v3.4S,v2.4S
7102ec580c  fadd v1.4S,v1.4S,v2.4S
7102ec5810  fmov s2,0x3f800000
7102ec5814  mov v3.16B,v1.16B
7102ec5818  mov v3.S[0x3],v2.S[0x0]
7102ec581c  ext v1.16B,v3.16B,v1.16B,0xc
7102ec5820  ext v2.16B,v1.16B,v3.16B,0x4
7102ec5824  ext v1.16B,v1.16B,v1.16B,0x8
7102ec5828  ext v1.16B,v2.16B,v1.16B,0xc
7102ec582c  str q1,[x19, #0x120]
7102ec5830  b.ne 0x7102ec58ac
7102ec5834  strb wzr,[x19, #0x1d0]
7102ec5838  ldr x20,[x19, #0x40]
7102ec583c  ldrb w8,[x20, #0x40]
7102ec5840  cbz w8,0x7102ec5890
7102ec5844  ldr x22,[x20, #0x30]
7102ec5848  cbz x22,0x7102ec5880
7102ec584c  ldrb w8,[x22, #0x10]
7102ec5850  cbz w8,0x7102ec5880
7102ec5854  ldrb w8,[x22, #0x50]
7102ec5858  strb wzr,[x22, #0x10]
7102ec585c  cbz w8,0x7102ec5880
7102ec5860  ldr x8,[x22]
7102ec5864  ldr w0,[x8, #0x8]
7102ec5868  bl 0x71003ac560
7102ec586c  ldr x8,[x0]
7102ec5870  ldr x8,[x8, #0x48]
7102ec5874  mov w1,wzr
7102ec5878  blr x8
7102ec587c  strb wzr,[x22, #0x50]
7102ec5880  ldr x8,[x20]
7102ec5884  ldr x8,[x8, #0x30]
7102ec5888  mov x0,x20
7102ec588c  blr x8
7102ec5890  strb wzr,[x20, #0x40]
7102ec5894  ldr x8,[x19, #0x18]
7102ec5898  cbz x8,0x7102ec58a8
7102ec589c  add x0,x8,#0x108
7102ec58a0  strb wzr,[x8, #0x110]
7102ec58a4  bl 0x71025e9d50
7102ec58a8  str wzr,[x19, #0x2c]
7102ec58ac  ldp x10,x9,[x21, #0x10]
7102ec58b0  str x9,[sp, #0x28]
7102ec58b4  ldp x9,x8,[x21]
7102ec58b8  str x9,[sp, #0x10]
7102ec58bc  stp x8,x10,[sp, #0x18]
7102ec58c0  ldp x10,x9,[x21, #0x30]
7102ec58c4  str x9,[sp, #0x48]
7102ec58c8  ldp x9,x8,[x21, #0x20]
7102ec58cc  str x9,[sp, #0x30]
7102ec58d0  stp x8,x10,[sp, #0x38]
7102ec58d4  ldr x20,[x19, #0x18]
7102ec58d8  cbz x20,0x7102ec59d8
7102ec58dc  ldr x0,[x20, #0x90]
7102ec58e0  ldr x8,[x0]
7102ec58e4  ldr x8,[x8, #0x148]
7102ec58e8  add x1,sp,#0x10
7102ec58ec  blr x8
7102ec58f0  ldr x20,[x20, #0xd8]
7102ec58f4  cbz x20,0x7102ec5960
7102ec58f8  ldr x8,[sp, #0x28]
7102ec58fc  str x8,[sp, #0x68]
7102ec5900  ldr x8,[sp, #0x20]
7102ec5904  str x8,[sp, #0x60]
7102ec5908  ldr x8,[sp, #0x18]
7102ec590c  str x8,[sp, #0x58]
7102ec5910  ldr x8,[sp, #0x10]
7102ec5914  str x8,[sp, #0x50]
7102ec5918  ldr x8,[sp, #0x48]
7102ec591c  str x8,[sp, #0x88]
7102ec5920  ldr x8,[sp, #0x40]
7102ec5924  str x8,[sp, #0x80]
7102ec5928  ldr x8,[sp, #0x38]
7102ec592c  str x8,[sp, #0x78]
7102ec5930  ldr x8,[sp, #0x30]
7102ec5934  str x8,[sp, #0x70]
7102ec5938  ldr x8,[x20, #0x8]
7102ec593c  ldrb w9,[x8, #0xa8]
7102ec5940  cbz w9,0x7102ec5958
7102ec5944  ldr x0,[x8, #0x48]
7102ec5948  ldr x8,[x0]
7102ec594c  ldr x8,[x8, #0x20]
7102ec5950  add x1,sp,#0x50
7102ec5954  blr x8
7102ec5958  mov w8,#0x1
7102ec595c  strb w8,[x20, #0x20]
7102ec5960  ldr x8,[x19, #0x18]
7102ec5964  cbz x8,0x7102ec59d8
7102ec5968  ldr x20,[x8, #0xd8]
7102ec596c  ldr x8,[x20]
7102ec5970  ldr x8,[x8, #0x10]
7102ec5974  mov x0,x20
7102ec5978  blr x8
7102ec597c  ldr x8,[x20, #0x8]
7102ec5980  ldrb w9,[x8, #0xa8]
7102ec5984  cbz w9,0x7102ec59d4
7102ec5988  ldr x0,[x8, #0x48]
7102ec598c  ldr x8,[x0]
7102ec5990  ldr x8,[x8, #0x10]
7102ec5994  mov w1,wzr
7102ec5998  blr x8
7102ec599c  ldr x8,[x20, #0x8]
7102ec59a0  ldrb w9,[x8, #0xa8]
7102ec59a4  cbz w9,0x7102ec59d4
7102ec59a8  ldr x21,[x8, #0x48]
7102ec59ac  ldr x8,[x21]
7102ec59b0  ldr x8,[x8, #0x10]
7102ec59b4  mov w1,#0x1
7102ec59b8  mov x0,x21
7102ec59bc  blr x8
7102ec59c0  ldr x8,[x21]
7102ec59c4  ldr x8,[x8, #0x10]
7102ec59c8  mov w1,#0x2
7102ec59cc  mov x0,x21
7102ec59d0  blr x8
7102ec59d4  strb wzr,[x20, #0x20]
7102ec59d8  ldr x8,[x19, #0x40]
7102ec59dc  ldr x9,[x8, #0x30]
7102ec59e0  cbz x9,0x7102ec59f0
7102ec59e4  ldrb w9,[x9, #0x10]
7102ec59e8  cmp w9,#0x0
7102ec59ec  cset w9,ne
7102ec59f0  tbnz w9,#0x0,0x7102ec59fc
7102ec59f4  ldrb w9,[x8, #0x40]
7102ec59f8  cbz w9,0x7102ec5a30
7102ec59fc  ldr q0,[sp, #0x40]
7102ec5a00  add x9,x19,#0x8c
7102ec5a04  ld1 {v0.S}[3],[x9]
7102ec5a08  str q0,[x19, #0x80]
7102ec5a0c  ldr x8,[x8, #0x38]
7102ec5a10  cbz x8,0x7102ec5a30
7102ec5a14  ldr x0,[x8, #0x130]
7102ec5a18  ldr x8,[x0]
7102ec5a1c  ldr x8,[x8, #0x178]
7102ec5a20  add x1,x19,#0x50
7102ec5a24  mov w3,#0x1
7102ec5a28  mov x2,x1
7102ec5a2c  blr x8
7102ec5a30  ldr x8,[x19, #0x90]
7102ec5a34  ldr x9,[x8, #0x30]
7102ec5a38  cbz x9,0x7102ec5a48
7102ec5a3c  ldrb w9,[x9, #0x10]
7102ec5a40  cmp w9,#0x0
7102ec5a44  cset w9,ne
7102ec5a48  tbnz w9,#0x0,0x7102ec5a54
7102ec5a4c  ldrb w9,[x8, #0x40]
7102ec5a50  cbz w9,0x7102ec5a88
7102ec5a54  ldr q0,[sp, #0x40]
7102ec5a58  add x9,x19,#0xdc
7102ec5a5c  ld1 {v0.S}[3],[x9]
7102ec5a60  str q0,[x19, #0xd0]
7102ec5a64  ldr x8,[x8, #0x38]
7102ec5a68  cbz x8,0x7102ec5a88
7102ec5a6c  ldr x0,[x8, #0x130]
7102ec5a70  ldr x8,[x0]
7102ec5a74  ldr x8,[x8, #0x168]
7102ec5a78  add x1,x19,#0xa0
7102ec5a7c  mov w3,#0x1
7102ec5a80  mov x2,x1
7102ec5a84  blr x8
7102ec5a88  ldr d8,[sp, #0x90]
7102ec5a8c  ldp x29,x30,[sp, #0xc0]
7102ec5a90  ldp x20,x19,[sp, #0xb0]
7102ec5a94  ldp x22,x21,[sp, #0xa0]
7102ec5a98  add sp,sp,#0xd0
7102ec5a9c  ret
7102ec5aa0  ldr q1,[sp]
7102ec5aa4  b 0x7102ec5b14
7102ec5aa8  mov w20,#0xffffffff
7102ec5aac  ldr x8,[x22, #0xd8]
7102ec5ab0  cbz x8,0x7102ec5afc
7102ec5ab4  ldr x8,[x8, #0x8]
7102ec5ab8  ldr x0,[x8, #0x8]
7102ec5abc  ldr x8,[x0]
7102ec5ac0  ldr x8,[x8, #0x10]
7102ec5ac4  blr x8
7102ec5ac8  cmp w0,w20
7102ec5acc  b.ls 0x7102ec5afc
7102ec5ad0  ldr x8,[x22, #0xd8]
7102ec5ad4  ldr x8,[x8, #0x8]
7102ec5ad8  ldr x0,[x8, #0x48]
7102ec5adc  ldr x8,[x0]
7102ec5ae0  ldr x8,[x8, #0x38]
7102ec5ae4  mov w1,wzr
7102ec5ae8  blr x8
7102ec5aec  mov w8,w20
7102ec5af0  add x8,x1,x8, LSL #0x6
7102ec5af4  add x8,x8,#0x30
7102ec5af8  b 0x7102ec5b10
7102ec5afc  ldr x0,[x22, #0x90]
7102ec5b00  ldr x8,[x0]
7102ec5b04  ldr x8,[x8, #0x158]
7102ec5b08  blr x8
7102ec5b0c  add x8,x0,#0x30
7102ec5b10  ldr q1,[x8]
7102ec5b14  ext v0.16B,v1.16B,v1.16B,0x8
7102ec5b18  fmov s2,wzr
7102ec5b1c  mov v0.S[0x1],v2.S[0x0]
7102ec5b20  mov v1.D[0x1],v0.D[0x0]
7102ec5b24  str q1,[sp, #0x50]
7102ec5b28  ldr x8,[x19, #0x20]
7102ec5b2c  ldr x22,[x8]
7102ec5b30  ldr x0,[x22, #0x8]
7102ec5b34  cbz x0,0x7102ec58ac
7102ec5b38  add x1,sp,#0x10
7102ec5b3c  mov w2,#0x1
7102ec5b40  str xzr,[sp, #0x10]
7102ec5b44  bl 0x7102405040
7102ec5b48  cmn w0,#0x1
7102ec5b4c  b.eq 0x7102ec5bac
7102ec5b50  mov w20,w0
7102ec5b54  cmp w0,#0x18
7102ec5b58  b.hi 0x7102ec5b94
7102ec5b5c  ldr x8,[x22, #0x8]
7102ec5b60  mov w9,#0x50
7102ec5b64  smaddl x8,w20,w9,x8
7102ec5b68  ldr x0,[x8, #0x68]
7102ec5b6c  ldr x8,[x0]
7102ec5b70  cbz x8,0x7102ec5b94
7102ec5b74  ldr w9,[x0, #0x8]
7102ec5b78  cmn w9,#0x1
7102ec5b7c  b.eq 0x7102ec5b94
7102ec5b80  ldr w8,[x8, #0x20]
7102ec5b84  cmp w9,w8
7102ec5b88  b.ne 0x7102ec5b94
7102ec5b8c  add x1,sp,#0x50
7102ec5b90  bl 0x7103736cf0
7102ec5b94  ldr x0,[x22, #0x8]
7102ec5b98  ldr x8,[x0]
7102ec5b9c  ldr x8,[x8, #0x58]
7102ec5ba0  mov w1,wzr
7102ec5ba4  mov w2,w20
7102ec5ba8  blr x8
7102ec5bac  ldr x8,[x19, #0x20]
7102ec5bb0  ldr x22,[x8]
7102ec5bb4  ldr x0,[x22, #0x8]
7102ec5bb8  cbz x0,0x7102ec58ac
7102ec5bbc  add x1,sp,#0x10
7102ec5bc0  mov w2,#0x1
7102ec5bc4  str xzr,[sp, #0x10]
7102ec5bc8  bl 0x7102405040
7102ec5bcc  cmn w0,#0x1
7102ec5bd0  b.eq 0x7102ec58ac
7102ec5bd4  mov w20,w0
7102ec5bd8  cmp w0,#0x18
7102ec5bdc  b.hi 0x7102ec5c18
7102ec5be0  ldr x8,[x22, #0x8]
7102ec5be4  mov w9,#0x50
7102ec5be8  smaddl x8,w20,w9,x8
7102ec5bec  ldr x0,[x8, #0x68]
7102ec5bf0  ldr x8,[x0]
7102ec5bf4  cbz x8,0x7102ec5c18
7102ec5bf8  ldr w9,[x0, #0x8]
7102ec5bfc  cmn w9,#0x1
7102ec5c00  b.eq 0x7102ec5c18
7102ec5c04  ldr w8,[x8, #0x20]
7102ec5c08  cmp w9,w8
7102ec5c0c  b.ne 0x7102ec5c18
7102ec5c10  add x1,sp,#0x50
7102ec5c14  bl 0x7103736cf0
7102ec5c18  ldr x0,[x22, #0x8]
7102ec5c1c  ldr x8,[x0]
7102ec5c20  ldr x8,[x8, #0x58]
7102ec5c24  mov w1,#0x1
7102ec5c28  mov w2,w20
7102ec5c2c  blr x8
7102ec5c30  b 0x7102ec58ac
7102ec5c34  ldrb w8,[x19, #0x1d0]
7102ec5c38  cbz w8,0x7102ec58ac
7102ec5c3c  ldr x0,[x19, #0x18]
7102ec5c40  fmov s0,0x41300000
7102ec5c44  mov w1,#0x1
7102ec5c48  bl 0x710260fdd0
7102ec5c4c  b 0x7102ec58ac
7102ec5c50  adrp x0,0x7105314000
7102ec5c54  add x0,x0,#0x4d8
7102ec5c58  bl 0x71039c06b0
7102ec5c5c  cbz w0,0x7102ec4f30
7102ec5c60  bl 0x7101764000
7102ec5c64  adrp x0,0x7101763000
7102ec5c68  add x0,x0,#0xc40
7102ec5c6c  adrp x1,0x71052c5000
7102ec5c70  add x1,x1,#0x180
7102ec5c74  adrp x2,0x7104f17000
7102ec5c78  add x2,x2,#0x0
7102ec5c7c  bl 0x71000001c0
7102ec5c80  adrp x0,0x7105314000
7102ec5c84  add x0,x0,#0x4d8
7102ec5c88  bl 0x71039c06c0
7102ec5c8c  b 0x7102ec4f30
7102ec5c90  adrp x0,0x7105314000
7102ec5c94  add x0,x0,#0x4d8
7102ec5c98  bl 0x71039c06b0
7102ec5c9c  fmov s2,wzr
7102ec5ca0  cbz w0,0x7102ec5520
7102ec5ca4  bl 0x7101764000
7102ec5ca8  adrp x0,0x7101763000
7102ec5cac  add x0,x0,#0xc40
7102ec5cb0  adrp x1,0x71052c5000
7102ec5cb4  add x1,x1,#0x180
7102ec5cb8  adrp x2,0x7104f17000
7102ec5cbc  add x2,x2,#0x0
7102ec5cc0  bl 0x71000001c0
7102ec5cc4  adrp x0,0x7105314000
7102ec5cc8  add x0,x0,#0x4d8
7102ec5ccc  bl 0x71039c06c0
7102ec5cd0  fmov s2,wzr
7102ec5cd4  b 0x7102ec5520
