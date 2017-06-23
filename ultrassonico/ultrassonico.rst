                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.6 #9917 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module ultrassonico
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _Tit1
                                     12 	.globl _setLCD4
                                     13 	.globl _main
                                     14 	.globl _ext_1
                                     15 	.globl _inic
                                     16 	.globl _iniLCD4
                                     17 	.globl _char2LCD
                                     18 	.globl _wrLCD4
                                     19 	.globl _wrLCD8
                                     20 	.globl _timer_0
                                     21 	.globl _ext_0
                                     22 	.globl _TrigPin
                                     23 	.globl _RW
                                     24 	.globl _DC
                                     25 	.globl _adcDt
                                     26 	.globl _adcCk
                                     27 	.globl _adcCS
                                     28 	.globl _lcdCS
                                     29 	.globl _S2D2
                                     30 	.globl _S1D1
                                     31 	.globl _SwInt
                                     32 	.globl _TxBip
                                     33 	.globl _RxLed
                                     34 	.globl _CY
                                     35 	.globl _AC
                                     36 	.globl _F0
                                     37 	.globl _RS1
                                     38 	.globl _RS0
                                     39 	.globl _OV
                                     40 	.globl _F1
                                     41 	.globl _P
                                     42 	.globl _PS
                                     43 	.globl _PT1
                                     44 	.globl _PX1
                                     45 	.globl _PT0
                                     46 	.globl _PX0
                                     47 	.globl _RD
                                     48 	.globl _WR
                                     49 	.globl _T1
                                     50 	.globl _T0
                                     51 	.globl _INT1
                                     52 	.globl _INT0
                                     53 	.globl _TXD
                                     54 	.globl _RXD
                                     55 	.globl _P3_7
                                     56 	.globl _P3_6
                                     57 	.globl _P3_5
                                     58 	.globl _P3_4
                                     59 	.globl _P3_3
                                     60 	.globl _P3_2
                                     61 	.globl _P3_1
                                     62 	.globl _P3_0
                                     63 	.globl _EA
                                     64 	.globl _ES
                                     65 	.globl _ET1
                                     66 	.globl _EX1
                                     67 	.globl _ET0
                                     68 	.globl _EX0
                                     69 	.globl _P2_7
                                     70 	.globl _P2_6
                                     71 	.globl _P2_5
                                     72 	.globl _P2_4
                                     73 	.globl _P2_3
                                     74 	.globl _P2_2
                                     75 	.globl _P2_1
                                     76 	.globl _P2_0
                                     77 	.globl _SM0
                                     78 	.globl _SM1
                                     79 	.globl _SM2
                                     80 	.globl _REN
                                     81 	.globl _TB8
                                     82 	.globl _RB8
                                     83 	.globl _TI
                                     84 	.globl _RI
                                     85 	.globl _P1_7
                                     86 	.globl _P1_6
                                     87 	.globl _P1_5
                                     88 	.globl _P1_4
                                     89 	.globl _P1_3
                                     90 	.globl _P1_2
                                     91 	.globl _P1_1
                                     92 	.globl _P1_0
                                     93 	.globl _TF1
                                     94 	.globl _TR1
                                     95 	.globl _TF0
                                     96 	.globl _TR0
                                     97 	.globl _IE1
                                     98 	.globl _IT1
                                     99 	.globl _IE0
                                    100 	.globl _IT0
                                    101 	.globl _P0_7
                                    102 	.globl _P0_6
                                    103 	.globl _P0_5
                                    104 	.globl _P0_4
                                    105 	.globl _P0_3
                                    106 	.globl _P0_2
                                    107 	.globl _P0_1
                                    108 	.globl _P0_0
                                    109 	.globl _LCD
                                    110 	.globl _CLKREG
                                    111 	.globl _B
                                    112 	.globl _ACC
                                    113 	.globl _PSW
                                    114 	.globl _IP
                                    115 	.globl _P3
                                    116 	.globl _IE
                                    117 	.globl _P2
                                    118 	.globl _SBUF
                                    119 	.globl _SCON
                                    120 	.globl _P1
                                    121 	.globl _TH1
                                    122 	.globl _TH0
                                    123 	.globl _TL1
                                    124 	.globl _TL0
                                    125 	.globl _TMOD
                                    126 	.globl _TCON
                                    127 	.globl _PCON
                                    128 	.globl _DPH
                                    129 	.globl _DPL
                                    130 	.globl _SP
                                    131 	.globl _P0
                                    132 	.globl _wrLCD4_PARM_1
                                    133 	.globl _wrLCD8_PARM_1
                                    134 	.globl _useBuf
                                    135 	.globl _Ch01
                                    136 	.globl _ad2On
                                    137 	.globl _ad1On
                                    138 	.globl _Txing
                                    139 	.globl _TxFlag
                                    140 	.globl _RxFlag
                                    141 	.globl _tip
                                    142 	.globl _bip
                                    143 	.globl _som
                                    144 	.globl _umSeg
                                    145 	.globl _TrigCont
                                    146 	.globl _Echo
                                    147 	.globl _char2LCD_PARM_3
                                    148 	.globl _char2LCD_PARM_2
                                    149 	.globl _algs
                                    150 	.globl _TxB
                                    151 	.globl _RxB
                                    152 	.globl _wTxB
                                    153 	.globl _rTxB
                                    154 	.globl _wRxB
                                    155 	.globl _rRxB
                                    156 	.globl _TxByte
                                    157 	.globl _RxByte
                                    158 	.globl _freq
                                    159 	.globl _x50us
                                    160 	.globl _cnt200
                                    161 	.globl _cnt100
                                    162 	.globl _disp2
                                    163 	.globl _disp1
                                    164 	.globl _cont
                                    165 	.globl _S2
                                    166 	.globl _S1
                                    167 	.globl _delay50
                                    168 	.globl _RTproc_1
                                    169 	.globl _RTproc_2
                                    170 ;--------------------------------------------------------
                                    171 ; special function registers
                                    172 ;--------------------------------------------------------
                                    173 	.area RSEG    (ABS,DATA)
      000000                        174 	.org 0x0000
                           000080   175 G$P0$0$0 == 0x0080
                           000080   176 _P0	=	0x0080
                           000081   177 G$SP$0$0 == 0x0081
                           000081   178 _SP	=	0x0081
                           000082   179 G$DPL$0$0 == 0x0082
                           000082   180 _DPL	=	0x0082
                           000083   181 G$DPH$0$0 == 0x0083
                           000083   182 _DPH	=	0x0083
                           000087   183 G$PCON$0$0 == 0x0087
                           000087   184 _PCON	=	0x0087
                           000088   185 G$TCON$0$0 == 0x0088
                           000088   186 _TCON	=	0x0088
                           000089   187 G$TMOD$0$0 == 0x0089
                           000089   188 _TMOD	=	0x0089
                           00008A   189 G$TL0$0$0 == 0x008a
                           00008A   190 _TL0	=	0x008a
                           00008B   191 G$TL1$0$0 == 0x008b
                           00008B   192 _TL1	=	0x008b
                           00008C   193 G$TH0$0$0 == 0x008c
                           00008C   194 _TH0	=	0x008c
                           00008D   195 G$TH1$0$0 == 0x008d
                           00008D   196 _TH1	=	0x008d
                           000090   197 G$P1$0$0 == 0x0090
                           000090   198 _P1	=	0x0090
                           000098   199 G$SCON$0$0 == 0x0098
                           000098   200 _SCON	=	0x0098
                           000099   201 G$SBUF$0$0 == 0x0099
                           000099   202 _SBUF	=	0x0099
                           0000A0   203 G$P2$0$0 == 0x00a0
                           0000A0   204 _P2	=	0x00a0
                           0000A8   205 G$IE$0$0 == 0x00a8
                           0000A8   206 _IE	=	0x00a8
                           0000B0   207 G$P3$0$0 == 0x00b0
                           0000B0   208 _P3	=	0x00b0
                           0000B8   209 G$IP$0$0 == 0x00b8
                           0000B8   210 _IP	=	0x00b8
                           0000D0   211 G$PSW$0$0 == 0x00d0
                           0000D0   212 _PSW	=	0x00d0
                           0000E0   213 G$ACC$0$0 == 0x00e0
                           0000E0   214 _ACC	=	0x00e0
                           0000F0   215 G$B$0$0 == 0x00f0
                           0000F0   216 _B	=	0x00f0
                           00008F   217 G$CLKREG$0$0 == 0x008f
                           00008F   218 _CLKREG	=	0x008f
                           000090   219 G$LCD$0$0 == 0x0090
                           000090   220 _LCD	=	0x0090
                                    221 ;--------------------------------------------------------
                                    222 ; special function bits
                                    223 ;--------------------------------------------------------
                                    224 	.area RSEG    (ABS,DATA)
      000000                        225 	.org 0x0000
                           000080   226 G$P0_0$0$0 == 0x0080
                           000080   227 _P0_0	=	0x0080
                           000081   228 G$P0_1$0$0 == 0x0081
                           000081   229 _P0_1	=	0x0081
                           000082   230 G$P0_2$0$0 == 0x0082
                           000082   231 _P0_2	=	0x0082
                           000083   232 G$P0_3$0$0 == 0x0083
                           000083   233 _P0_3	=	0x0083
                           000084   234 G$P0_4$0$0 == 0x0084
                           000084   235 _P0_4	=	0x0084
                           000085   236 G$P0_5$0$0 == 0x0085
                           000085   237 _P0_5	=	0x0085
                           000086   238 G$P0_6$0$0 == 0x0086
                           000086   239 _P0_6	=	0x0086
                           000087   240 G$P0_7$0$0 == 0x0087
                           000087   241 _P0_7	=	0x0087
                           000088   242 G$IT0$0$0 == 0x0088
                           000088   243 _IT0	=	0x0088
                           000089   244 G$IE0$0$0 == 0x0089
                           000089   245 _IE0	=	0x0089
                           00008A   246 G$IT1$0$0 == 0x008a
                           00008A   247 _IT1	=	0x008a
                           00008B   248 G$IE1$0$0 == 0x008b
                           00008B   249 _IE1	=	0x008b
                           00008C   250 G$TR0$0$0 == 0x008c
                           00008C   251 _TR0	=	0x008c
                           00008D   252 G$TF0$0$0 == 0x008d
                           00008D   253 _TF0	=	0x008d
                           00008E   254 G$TR1$0$0 == 0x008e
                           00008E   255 _TR1	=	0x008e
                           00008F   256 G$TF1$0$0 == 0x008f
                           00008F   257 _TF1	=	0x008f
                           000090   258 G$P1_0$0$0 == 0x0090
                           000090   259 _P1_0	=	0x0090
                           000091   260 G$P1_1$0$0 == 0x0091
                           000091   261 _P1_1	=	0x0091
                           000092   262 G$P1_2$0$0 == 0x0092
                           000092   263 _P1_2	=	0x0092
                           000093   264 G$P1_3$0$0 == 0x0093
                           000093   265 _P1_3	=	0x0093
                           000094   266 G$P1_4$0$0 == 0x0094
                           000094   267 _P1_4	=	0x0094
                           000095   268 G$P1_5$0$0 == 0x0095
                           000095   269 _P1_5	=	0x0095
                           000096   270 G$P1_6$0$0 == 0x0096
                           000096   271 _P1_6	=	0x0096
                           000097   272 G$P1_7$0$0 == 0x0097
                           000097   273 _P1_7	=	0x0097
                           000098   274 G$RI$0$0 == 0x0098
                           000098   275 _RI	=	0x0098
                           000099   276 G$TI$0$0 == 0x0099
                           000099   277 _TI	=	0x0099
                           00009A   278 G$RB8$0$0 == 0x009a
                           00009A   279 _RB8	=	0x009a
                           00009B   280 G$TB8$0$0 == 0x009b
                           00009B   281 _TB8	=	0x009b
                           00009C   282 G$REN$0$0 == 0x009c
                           00009C   283 _REN	=	0x009c
                           00009D   284 G$SM2$0$0 == 0x009d
                           00009D   285 _SM2	=	0x009d
                           00009E   286 G$SM1$0$0 == 0x009e
                           00009E   287 _SM1	=	0x009e
                           00009F   288 G$SM0$0$0 == 0x009f
                           00009F   289 _SM0	=	0x009f
                           0000A0   290 G$P2_0$0$0 == 0x00a0
                           0000A0   291 _P2_0	=	0x00a0
                           0000A1   292 G$P2_1$0$0 == 0x00a1
                           0000A1   293 _P2_1	=	0x00a1
                           0000A2   294 G$P2_2$0$0 == 0x00a2
                           0000A2   295 _P2_2	=	0x00a2
                           0000A3   296 G$P2_3$0$0 == 0x00a3
                           0000A3   297 _P2_3	=	0x00a3
                           0000A4   298 G$P2_4$0$0 == 0x00a4
                           0000A4   299 _P2_4	=	0x00a4
                           0000A5   300 G$P2_5$0$0 == 0x00a5
                           0000A5   301 _P2_5	=	0x00a5
                           0000A6   302 G$P2_6$0$0 == 0x00a6
                           0000A6   303 _P2_6	=	0x00a6
                           0000A7   304 G$P2_7$0$0 == 0x00a7
                           0000A7   305 _P2_7	=	0x00a7
                           0000A8   306 G$EX0$0$0 == 0x00a8
                           0000A8   307 _EX0	=	0x00a8
                           0000A9   308 G$ET0$0$0 == 0x00a9
                           0000A9   309 _ET0	=	0x00a9
                           0000AA   310 G$EX1$0$0 == 0x00aa
                           0000AA   311 _EX1	=	0x00aa
                           0000AB   312 G$ET1$0$0 == 0x00ab
                           0000AB   313 _ET1	=	0x00ab
                           0000AC   314 G$ES$0$0 == 0x00ac
                           0000AC   315 _ES	=	0x00ac
                           0000AF   316 G$EA$0$0 == 0x00af
                           0000AF   317 _EA	=	0x00af
                           0000B0   318 G$P3_0$0$0 == 0x00b0
                           0000B0   319 _P3_0	=	0x00b0
                           0000B1   320 G$P3_1$0$0 == 0x00b1
                           0000B1   321 _P3_1	=	0x00b1
                           0000B2   322 G$P3_2$0$0 == 0x00b2
                           0000B2   323 _P3_2	=	0x00b2
                           0000B3   324 G$P3_3$0$0 == 0x00b3
                           0000B3   325 _P3_3	=	0x00b3
                           0000B4   326 G$P3_4$0$0 == 0x00b4
                           0000B4   327 _P3_4	=	0x00b4
                           0000B5   328 G$P3_5$0$0 == 0x00b5
                           0000B5   329 _P3_5	=	0x00b5
                           0000B6   330 G$P3_6$0$0 == 0x00b6
                           0000B6   331 _P3_6	=	0x00b6
                           0000B7   332 G$P3_7$0$0 == 0x00b7
                           0000B7   333 _P3_7	=	0x00b7
                           0000B0   334 G$RXD$0$0 == 0x00b0
                           0000B0   335 _RXD	=	0x00b0
                           0000B1   336 G$TXD$0$0 == 0x00b1
                           0000B1   337 _TXD	=	0x00b1
                           0000B2   338 G$INT0$0$0 == 0x00b2
                           0000B2   339 _INT0	=	0x00b2
                           0000B3   340 G$INT1$0$0 == 0x00b3
                           0000B3   341 _INT1	=	0x00b3
                           0000B4   342 G$T0$0$0 == 0x00b4
                           0000B4   343 _T0	=	0x00b4
                           0000B5   344 G$T1$0$0 == 0x00b5
                           0000B5   345 _T1	=	0x00b5
                           0000B6   346 G$WR$0$0 == 0x00b6
                           0000B6   347 _WR	=	0x00b6
                           0000B7   348 G$RD$0$0 == 0x00b7
                           0000B7   349 _RD	=	0x00b7
                           0000B8   350 G$PX0$0$0 == 0x00b8
                           0000B8   351 _PX0	=	0x00b8
                           0000B9   352 G$PT0$0$0 == 0x00b9
                           0000B9   353 _PT0	=	0x00b9
                           0000BA   354 G$PX1$0$0 == 0x00ba
                           0000BA   355 _PX1	=	0x00ba
                           0000BB   356 G$PT1$0$0 == 0x00bb
                           0000BB   357 _PT1	=	0x00bb
                           0000BC   358 G$PS$0$0 == 0x00bc
                           0000BC   359 _PS	=	0x00bc
                           0000D0   360 G$P$0$0 == 0x00d0
                           0000D0   361 _P	=	0x00d0
                           0000D1   362 G$F1$0$0 == 0x00d1
                           0000D1   363 _F1	=	0x00d1
                           0000D2   364 G$OV$0$0 == 0x00d2
                           0000D2   365 _OV	=	0x00d2
                           0000D3   366 G$RS0$0$0 == 0x00d3
                           0000D3   367 _RS0	=	0x00d3
                           0000D4   368 G$RS1$0$0 == 0x00d4
                           0000D4   369 _RS1	=	0x00d4
                           0000D5   370 G$F0$0$0 == 0x00d5
                           0000D5   371 _F0	=	0x00d5
                           0000D6   372 G$AC$0$0 == 0x00d6
                           0000D6   373 _AC	=	0x00d6
                           0000D7   374 G$CY$0$0 == 0x00d7
                           0000D7   375 _CY	=	0x00d7
                           0000B0   376 G$RxLed$0$0 == 0x00b0
                           0000B0   377 _RxLed	=	0x00b0
                           0000B1   378 G$TxBip$0$0 == 0x00b1
                           0000B1   379 _TxBip	=	0x00b1
                           0000B2   380 G$SwInt$0$0 == 0x00b2
                           0000B2   381 _SwInt	=	0x00b2
                           000090   382 G$S1D1$0$0 == 0x0090
                           000090   383 _S1D1	=	0x0090
                           000091   384 G$S2D2$0$0 == 0x0091
                           000091   385 _S2D2	=	0x0091
      0000B7                        386 	.org 0x00B7
                           0000B7   387 G$lcdCS$0$0==.
      0000B7                        388 _lcdCS::
      0000B7                        389 	.ds 1
                           000093   390 G$adcCS$0$0 == 0x0093
                           000093   391 _adcCS	=	0x0093
                           0000B4   392 G$adcCk$0$0 == 0x00b4
                           0000B4   393 _adcCk	=	0x00b4
                           0000B5   394 G$adcDt$0$0 == 0x00b5
                           0000B5   395 _adcDt	=	0x00b5
                           0000B4   396 G$DC$0$0 == 0x00b4
                           0000B4   397 _DC	=	0x00b4
                           0000B5   398 G$RW$0$0 == 0x00b5
                           0000B5   399 _RW	=	0x00b5
                           000092   400 G$TrigPin$0$0 == 0x0092
                           000092   401 _TrigPin	=	0x0092
                                    402 ;--------------------------------------------------------
                                    403 ; overlayable register banks
                                    404 ;--------------------------------------------------------
                                    405 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        406 	.ds 8
                                    407 ;--------------------------------------------------------
                                    408 ; internal ram data
                                    409 ;--------------------------------------------------------
                                    410 	.area DSEG    (DATA)
                           000000   411 G$S1$0$0==.
      000022                        412 _S1::
      000022                        413 	.ds 1
                           000001   414 G$S2$0$0==.
      000023                        415 _S2::
      000023                        416 	.ds 1
                           000002   417 G$cont$0$0==.
      000024                        418 _cont::
      000024                        419 	.ds 1
                           000003   420 G$disp1$0$0==.
      000025                        421 _disp1::
      000025                        422 	.ds 1
                           000004   423 G$disp2$0$0==.
      000026                        424 _disp2::
      000026                        425 	.ds 1
                           000005   426 G$cnt100$0$0==.
      000027                        427 _cnt100::
      000027                        428 	.ds 1
                           000006   429 G$cnt200$0$0==.
      000028                        430 _cnt200::
      000028                        431 	.ds 1
                           000007   432 G$x50us$0$0==.
      000029                        433 _x50us::
      000029                        434 	.ds 1
                           000008   435 G$freq$0$0==.
      00002A                        436 _freq::
      00002A                        437 	.ds 1
                           000009   438 G$RxByte$0$0==.
      00002B                        439 _RxByte::
      00002B                        440 	.ds 1
                           00000A   441 G$TxByte$0$0==.
      00002C                        442 _TxByte::
      00002C                        443 	.ds 1
                           00000B   444 G$rRxB$0$0==.
      00002D                        445 _rRxB::
      00002D                        446 	.ds 1
                           00000C   447 G$wRxB$0$0==.
      00002E                        448 _wRxB::
      00002E                        449 	.ds 1
                           00000D   450 G$rTxB$0$0==.
      00002F                        451 _rTxB::
      00002F                        452 	.ds 1
                           00000E   453 G$wTxB$0$0==.
      000030                        454 _wTxB::
      000030                        455 	.ds 1
                           00000F   456 G$RxB$0$0==.
      000031                        457 _RxB::
      000031                        458 	.ds 16
                           00001F   459 G$TxB$0$0==.
      000041                        460 _TxB::
      000041                        461 	.ds 16
                           00002F   462 G$algs$0$0==.
      000051                        463 _algs::
      000051                        464 	.ds 5
                           000034   465 Lultrassonico.char2LCD$val$1$12==.
      000056                        466 _char2LCD_PARM_2:
      000056                        467 	.ds 1
                           000035   468 Lultrassonico.char2LCD$dot$1$12==.
      000057                        469 _char2LCD_PARM_3:
      000057                        470 	.ds 1
                           000036   471 G$Echo$0$0==.
      000058                        472 _Echo::
      000058                        473 	.ds 2
                           000038   474 G$TrigCont$0$0==.
      00005A                        475 _TrigCont::
      00005A                        476 	.ds 1
                                    477 ;--------------------------------------------------------
                                    478 ; overlayable items in internal ram 
                                    479 ;--------------------------------------------------------
                                    480 ;--------------------------------------------------------
                                    481 ; Stack segment in internal ram 
                                    482 ;--------------------------------------------------------
                                    483 	.area	SSEG
      00005B                        484 __start__stack:
      00005B                        485 	.ds	1
                                    486 
                                    487 ;--------------------------------------------------------
                                    488 ; indirectly addressable internal ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area ISEG    (DATA)
                                    491 ;--------------------------------------------------------
                                    492 ; absolute internal ram data
                                    493 ;--------------------------------------------------------
                                    494 	.area IABS    (ABS,DATA)
                                    495 	.area IABS    (ABS,DATA)
                                    496 ;--------------------------------------------------------
                                    497 ; bit data
                                    498 ;--------------------------------------------------------
                                    499 	.area BSEG    (BIT)
                           000000   500 G$umSeg$0$0==.
      000000                        501 _umSeg::
      000000                        502 	.ds 1
                           000001   503 G$som$0$0==.
      000001                        504 _som::
      000001                        505 	.ds 1
                           000002   506 G$bip$0$0==.
      000002                        507 _bip::
      000002                        508 	.ds 1
                           000003   509 G$tip$0$0==.
      000003                        510 _tip::
      000003                        511 	.ds 1
                           000004   512 G$RxFlag$0$0==.
      000004                        513 _RxFlag::
      000004                        514 	.ds 1
                           000005   515 G$TxFlag$0$0==.
      000005                        516 _TxFlag::
      000005                        517 	.ds 1
                           000006   518 G$Txing$0$0==.
      000006                        519 _Txing::
      000006                        520 	.ds 1
                           000007   521 G$ad1On$0$0==.
      000007                        522 _ad1On::
      000007                        523 	.ds 1
                           000008   524 G$ad2On$0$0==.
      000008                        525 _ad2On::
      000008                        526 	.ds 1
                           000009   527 G$Ch01$0$0==.
      000009                        528 _Ch01::
      000009                        529 	.ds 1
                           00000A   530 G$useBuf$0$0==.
      00000A                        531 _useBuf::
      00000A                        532 	.ds 1
                           00000B   533 Lultrassonico.wrLCD8$rs$1$8==.
      00000B                        534 _wrLCD8_PARM_1:
      00000B                        535 	.ds 1
                           00000C   536 Lultrassonico.wrLCD8$sloc0$1$0==.
      00000C                        537 _wrLCD8_sloc0_1_0:
      00000C                        538 	.ds 1
                           00000D   539 Lultrassonico.wrLCD4$rs$1$10==.
      00000D                        540 _wrLCD4_PARM_1:
      00000D                        541 	.ds 1
                                    542 ;--------------------------------------------------------
                                    543 ; paged external ram data
                                    544 ;--------------------------------------------------------
                                    545 	.area PSEG    (PAG,XDATA)
                                    546 ;--------------------------------------------------------
                                    547 ; external ram data
                                    548 ;--------------------------------------------------------
                                    549 	.area XSEG    (XDATA)
                                    550 ;--------------------------------------------------------
                                    551 ; absolute external ram data
                                    552 ;--------------------------------------------------------
                                    553 	.area XABS    (ABS,XDATA)
                                    554 ;--------------------------------------------------------
                                    555 ; external initialized ram data
                                    556 ;--------------------------------------------------------
                                    557 	.area XISEG   (XDATA)
                                    558 	.area HOME    (CODE)
                                    559 	.area GSINIT0 (CODE)
                                    560 	.area GSINIT1 (CODE)
                                    561 	.area GSINIT2 (CODE)
                                    562 	.area GSINIT3 (CODE)
                                    563 	.area GSINIT4 (CODE)
                                    564 	.area GSINIT5 (CODE)
                                    565 	.area GSINIT  (CODE)
                                    566 	.area GSFINAL (CODE)
                                    567 	.area CSEG    (CODE)
                                    568 ;--------------------------------------------------------
                                    569 ; interrupt vector 
                                    570 ;--------------------------------------------------------
                                    571 	.area HOME    (CODE)
      000000                        572 __interrupt_vect:
      000000 02 00 19         [24]  573 	ljmp	__sdcc_gsinit_startup
      000003 02 00 B7         [24]  574 	ljmp	_ext_0
      000006                        575 	.ds	5
      00000B 02 00 D7         [24]  576 	ljmp	_timer_0
      00000E                        577 	.ds	5
      000013 02 02 A4         [24]  578 	ljmp	_ext_1
                                    579 ;--------------------------------------------------------
                                    580 ; global & static initialisations
                                    581 ;--------------------------------------------------------
                                    582 	.area HOME    (CODE)
                                    583 	.area GSINIT  (CODE)
                                    584 	.area GSFINAL (CODE)
                                    585 	.area GSINIT  (CODE)
                                    586 	.globl __sdcc_gsinit_startup
                                    587 	.globl __sdcc_program_startup
                                    588 	.globl __start__stack
                                    589 	.globl __mcs51_genXINIT
                                    590 	.globl __mcs51_genXRAMCLEAR
                                    591 	.globl __mcs51_genRAMCLEAR
                           000000   592 	C$uRTOS_2.21.h$38$1$26 ==.
                                    593 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:38: unsigned char S1=0;             //R1 estado de S1
      000072 75 22 00         [24]  594 	mov	_S1,#0x00
                           000003   595 	C$uRTOS_2.21.h$39$1$26 ==.
                                    596 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:39: unsigned char S2=0;             //R2 estado de S2
      000075 75 23 00         [24]  597 	mov	_S2,#0x00
                           000006   598 	C$uRTOS_2.21.h$40$1$26 ==.
                                    599 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:40: unsigned char cont=0;           //R3 N x 50µs
      000078 75 24 00         [24]  600 	mov	_cont,#0x00
                           000009   601 	C$uRTOS_2.21.h$41$1$26 ==.
                                    602 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:41: unsigned char disp1=0xFF;       //R4 7seg MSD
      00007B 75 25 FF         [24]  603 	mov	_disp1,#0xff
                           00000C   604 	C$uRTOS_2.21.h$42$1$26 ==.
                                    605 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:42: unsigned char disp2=0xFF;       //R5 7seg LSD
      00007E 75 26 FF         [24]  606 	mov	_disp2,#0xff
                           00000F   607 	C$uRTOS_2.21.h$43$1$26 ==.
                                    608 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:43: unsigned char cnt100=100;       //R6 100x10ms=1s
      000081 75 27 64         [24]  609 	mov	_cnt100,#0x64
                           000012   610 	C$uRTOS_2.21.h$44$1$26 ==.
                                    611 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:44: unsigned char cnt200=200;       //R7 200 int's
      000084 75 28 C8         [24]  612 	mov	_cnt200,#0xc8
                           000015   613 	C$uRTOS_2.21.h$46$1$26 ==.
                                    614 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:46: unsigned char freq=8;           //R9 fBip=1/(2*50*freq)
      000087 75 2A 08         [24]  615 	mov	_freq,#0x08
                           000018   616 	C$uRTOS_2.21.h$49$1$26 ==.
                                    617 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:49: unsigned char rRxB=0;           //tag leitura RxB
      00008A 75 2D 00         [24]  618 	mov	_rRxB,#0x00
                           00001B   619 	C$uRTOS_2.21.h$50$1$26 ==.
                                    620 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:50: unsigned char wRxB=0;           //tag escrita RxB
      00008D 75 2E 00         [24]  621 	mov	_wRxB,#0x00
                           00001E   622 	C$uRTOS_2.21.h$51$1$26 ==.
                                    623 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:51: unsigned char rTxB=0;           //tag leitura TxB
      000090 75 2F 00         [24]  624 	mov	_rTxB,#0x00
                           000021   625 	C$uRTOS_2.21.h$52$1$26 ==.
                                    626 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:52: unsigned char wTxB=0;           //tag escrita TxB
      000093 75 30 00         [24]  627 	mov	_wTxB,#0x00
                           000024   628 	C$ultrassonico.c$4$1$26 ==.
                                    629 ;	ultrassonico.c:4: unsigned int Echo=0x00; 
      000096 E4               [12]  630 	clr	a
      000097 F5 58            [12]  631 	mov	_Echo,a
      000099 F5 59            [12]  632 	mov	(_Echo + 1),a
                           000029   633 	C$ultrassonico.c$5$1$26 ==.
                                    634 ;	ultrassonico.c:5: unsigned char TrigCont=100;
      00009B 75 5A 64         [24]  635 	mov	_TrigCont,#0x64
                           00002C   636 	C$uRTOS_2.21.h$27$1$26 ==.
                                    637 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:27: volatile __bit umSeg=0;         //1seg completo
                                    638 ;	assignBit
      00009E C2 00            [12]  639 	clr	_umSeg
                           00002E   640 	C$uRTOS_2.21.h$28$1$26 ==.
                                    641 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:28: __bit som=0;                    //som ligado
                                    642 ;	assignBit
      0000A0 C2 01            [12]  643 	clr	_som
                           000030   644 	C$uRTOS_2.21.h$29$1$26 ==.
                                    645 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:29: __bit bip=0;                    //bip ligado
                                    646 ;	assignBit
      0000A2 C2 02            [12]  647 	clr	_bip
                           000032   648 	C$uRTOS_2.21.h$30$1$26 ==.
                                    649 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:30: __bit tip=0;                    //trava do bip1
                                    650 ;	assignBit
      0000A4 C2 03            [12]  651 	clr	_tip
                           000034   652 	C$uRTOS_2.21.h$31$1$26 ==.
                                    653 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:31: __bit RxFlag=0;                 //rxBuff vazio
                                    654 ;	assignBit
      0000A6 C2 04            [12]  655 	clr	_RxFlag
                           000036   656 	C$uRTOS_2.21.h$32$1$26 ==.
                                    657 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:32: __bit TxFlag=1;                 //txBuff vazio
                                    658 ;	assignBit
      0000A8 D2 05            [12]  659 	setb	_TxFlag
                           000038   660 	C$uRTOS_2.21.h$33$1$26 ==.
                                    661 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:33: __bit Txing=0;                  //enviando do buffer
                                    662 ;	assignBit
      0000AA C2 06            [12]  663 	clr	_Txing
                           00003A   664 	C$uRTOS_2.21.h$34$1$26 ==.
                                    665 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:34: __bit ad1On=0;                  //ADC1 habilitado
                                    666 ;	assignBit
      0000AC C2 07            [12]  667 	clr	_ad1On
                           00003C   668 	C$uRTOS_2.21.h$35$1$26 ==.
                                    669 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:35: __bit ad2On=0;                  //ADC2 habilitado
                                    670 ;	assignBit
      0000AE C2 08            [12]  671 	clr	_ad2On
                           00003E   672 	C$uRTOS_2.21.h$37$1$26 ==.
                                    673 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:37: __bit useBuf=0;                 //=1 usa RxB
                                    674 ;	assignBit
      0000B0 C2 0A            [12]  675 	clr	_useBuf
                           000040   676 	C$uRTOS_2.21.h$20$1$26 ==.
                                    677 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:20: volatile __sbit __at (0xB7) lcdCS=0;//P3.7 CS   LCD
                                    678 ;	assignBit
      0000B2 C2 B7            [12]  679 	clr	_lcdCS
                                    680 	.area GSFINAL (CODE)
      0000B4 02 00 16         [24]  681 	ljmp	__sdcc_program_startup
                                    682 ;--------------------------------------------------------
                                    683 ; Home
                                    684 ;--------------------------------------------------------
                                    685 	.area HOME    (CODE)
                                    686 	.area HOME    (CODE)
      000016                        687 __sdcc_program_startup:
      000016 02 02 D2         [24]  688 	ljmp	_main
                                    689 ;	return from main will return to caller
                                    690 ;--------------------------------------------------------
                                    691 ; code
                                    692 ;--------------------------------------------------------
                                    693 	.area CSEG    (CODE)
                                    694 ;------------------------------------------------------------
                                    695 ;Allocation info for local variables in function 'ext_0'
                                    696 ;------------------------------------------------------------
                           000000   697 	G$ext_0$0$0 ==.
                           000000   698 	C$uRTOS_2.21.h$76$0$0 ==.
                                    699 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:76: void ext_0 (void) __interrupt(0){
                                    700 ;	-----------------------------------------
                                    701 ;	 function ext_0
                                    702 ;	-----------------------------------------
      0000B7                        703 _ext_0:
                           000007   704 	ar7 = 0x07
                           000006   705 	ar6 = 0x06
                           000005   706 	ar5 = 0x05
                           000004   707 	ar4 = 0x04
                           000003   708 	ar3 = 0x03
                           000002   709 	ar2 = 0x02
                           000001   710 	ar1 = 0x01
                           000000   711 	ar0 = 0x00
      0000B7 C0 E0            [24]  712 	push	acc
      0000B9 C0 D0            [24]  713 	push	psw
                           000004   714 	C$uRTOS_2.21.h$77$1$2 ==.
                                    715 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:77: EX0=0;
                                    716 ;	assignBit
      0000BB C2 A8            [12]  717 	clr	_EX0
                           000006   718 	C$uRTOS_2.21.h$78$1$2 ==.
                                    719 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:78: if(!S1D1){
      0000BD 20 90 0A         [24]  720 	jb	_S1D1,00106$
                           000009   721 	C$uRTOS_2.21.h$79$2$3 ==.
                                    722 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:79: if (S1<2) S1++;
      0000C0 74 FE            [12]  723 	mov	a,#0x100 - 0x02
      0000C2 25 22            [12]  724 	add	a,_S1
      0000C4 40 0C            [24]  725 	jc	00108$
      0000C6 05 22            [12]  726 	inc	_S1
      0000C8 80 08            [24]  727 	sjmp	00108$
      0000CA                        728 00106$:
                           000013   729 	C$uRTOS_2.21.h$82$2$4 ==.
                                    730 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:82: if (S2<2) S2++;
      0000CA 74 FE            [12]  731 	mov	a,#0x100 - 0x02
      0000CC 25 23            [12]  732 	add	a,_S2
      0000CE 40 02            [24]  733 	jc	00108$
      0000D0 05 23            [12]  734 	inc	_S2
      0000D2                        735 00108$:
      0000D2 D0 D0            [24]  736 	pop	psw
      0000D4 D0 E0            [24]  737 	pop	acc
                           00001F   738 	C$uRTOS_2.21.h$84$1$2 ==.
                           00001F   739 	XG$ext_0$0$0 ==.
      0000D6 32               [24]  740 	reti
                                    741 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    742 ;	eliminated unneeded push/pop dpl
                                    743 ;	eliminated unneeded push/pop dph
                                    744 ;	eliminated unneeded push/pop b
                                    745 ;------------------------------------------------------------
                                    746 ;Allocation info for local variables in function 'timer_0'
                                    747 ;------------------------------------------------------------
                           000020   748 	G$timer_0$0$0 ==.
                           000020   749 	C$uRTOS_2.21.h$89$1$2 ==.
                                    750 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:89: void timer_0(void) __interrupt(1) __naked{
                                    751 ;	-----------------------------------------
                                    752 ;	 function timer_0
                                    753 ;	-----------------------------------------
      0000D7                        754 _timer_0:
                                    755 ;	naked function: no prologue.
                           000020   756 	C$uRTOS_2.21.h$129$1$6 ==.
                                    757 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:129: __endasm;
      0000D7 C0 E0            [24]  758 	push	acc ;salva contexto
      0000D9 C0 D0            [24]  759 	push	PSW ;
      0000DB D5 24 0B         [24]  760 	djnz	_cont, Cala ;gerar audio?
      0000DE 20 01 03         [24]  761 	jb	_som, Bipa ;tem som?
      0000E1 30 02 05         [24]  762 	jnb	_bip, Cala ;tem bip?
      0000E4                        763 	Bipa:
      0000E4 85 2A 24         [24]  764 	mov _cont, _freq ;tempo ½ ciclo
      0000E7 B2 B1            [12]  765 	cpl	_TxBip ;½ ciclo som
      0000E9                        766 	Cala:
      0000E9 D5 28 3F         [24]  767 	djnz _cnt200, RT1 ;10mS completo?
      0000EC 75 28 C8         [24]  768 	mov	_cnt200, #200 ;200*50us
      0000EF D5 27 05         [24]  769 	djnz	_cnt100, Bip1 ;1 seg?
      0000F2 75 27 64         [24]  770 	mov	_cnt100, #100 ;recarga 100
      0000F5 D2 00            [12]  771 	setb	_umSeg ;sim, cmpl 1s
      0000F7                        772 	Bip1:
      0000F7 30 02 07         [24]  773 	jnb _bip, Mux ;se bip ligado
      0000FA B2 03            [12]  774 	cpl	_tip ;|gera de 10ms|
      0000FC 20 03 02         [24]  775 	jb	_tip, Mux ;|a 19.95ms de|
      0000FF C2 02            [12]  776 	clr	_bip ;|2*freq*50us.|
      000101                        777 	Mux:
      000101 20 90 11         [24]  778 	jb _S1D1, D2 ;disp1 ligado?
      000104                        779 	D1:
      000104 74 02            [12]  780 	mov a, #0x02 ;2=filtrada
      000106 B5 22 06         [24]  781 	cjne	a, _S1, D1a ;filtrada?
      000109 30 B2 03         [24]  782 	jnb	_SwInt, D1a ;liberada?
      00010C 75 22 03         [24]  783 	mov	_S1, #0x03 ;sim,sobe flag
      00010F                        784 	D1a:
      00010F D2 90            [12]  785 	setb _S1D1 ;S1 deshab
      000111 C2 91            [12]  786 	clr	_S2D2 ;S2 hab
      000113 80 0F            [24]  787 	sjmp	RT2 ;recarga/sai
      000115                        788 	D2:
      000115 74 02            [12]  789 	mov a, #0x02
      000117 B5 23 06         [24]  790 	cjne	a, _S2, D2a ;filtrada?
      00011A 30 B2 03         [24]  791 	jnb	_SwInt, D2a ;liberada?
      00011D 75 23 03         [24]  792 	mov	_S2, #0x03 ;sim,sobe flag
      000120                        793 	D2a:
      000120 D2 91            [12]  794 	setb _S2D2 ;S2 deshab
      000122 C2 90            [12]  795 	clr	_S1D1 ;S1 hab
                                    796 ;
      000124                        797 	RT2:
      000124 D2 A8            [12]  798 	setb _EX0 ;hab. chaves
      000126 12 02 8E         [24]  799 	lcall	_RTproc_2 ;a cada 10ms
      000129 80 03            [24]  800 	sjmp	SAI
      00012B                        801 	RT1:
      00012B 12 02 8D         [24]  802 	lcall _RTproc_1 ;a cada 50µs
      00012E                        803 	SAI:
      00012E D0 D0            [24]  804 	pop PSW ;recup. contexto
      000130 D0 E0            [24]  805 	pop	acc ;
      000132 32               [24]  806 	reti
                                    807 ;	naked function: no epilogue.
                           00007C   808 	C$uRTOS_2.21.h$130$1$6 ==.
                           00007C   809 	XG$timer_0$0$0 ==.
                                    810 ;------------------------------------------------------------
                                    811 ;Allocation info for local variables in function 'delay50'
                                    812 ;------------------------------------------------------------
                           00007C   813 	G$delay50$0$0 ==.
                           00007C   814 	C$uRTOS_2.21.h$134$1$6 ==.
                                    815 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:134: void delay50() __naked{
                                    816 ;	-----------------------------------------
                                    817 ;	 function delay50
                                    818 ;	-----------------------------------------
      000133                        819 _delay50:
                                    820 ;	naked function: no prologue.
                           00007C   821 	C$uRTOS_2.21.h$148$1$7 ==.
                                    822 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:148: __endasm;
      000133 C0 E0            [24]  823 	push	acc ;salva contexto
      000135 C0 D0            [24]  824 	push	PSW ;
      000137 E5 28            [12]  825 	mov	a, _cnt200 ;tempo atual
      000139 C3               [12]  826 	clr	c
      00013A 95 29            [12]  827 	subb	a, _x50us ;prox tempo
      00013C 50 02            [24]  828 	jnc	Po ;negativo?
      00013E 24 C8            [12]  829 	add	a, #200 ;soma 200
      000140                        830 	Po:
      000140 04               [12]  831 	inc a ;nunca zero
      000141                        832 	Ps:
      000141 B5 28 FD         [24]  833 	cjne a, _cnt200, Ps ;espera chegar
      000144 D0 D0            [24]  834 	pop	PSW ;recup. contexto
      000146 D0 E0            [24]  835 	pop	acc ;
      000148 22               [24]  836 	ret
                                    837 ;	naked function: no epilogue.
                           000092   838 	C$uRTOS_2.21.h$149$1$7 ==.
                           000092   839 	XG$delay50$0$0 ==.
                                    840 ;------------------------------------------------------------
                                    841 ;Allocation info for local variables in function 'wrLCD8'
                                    842 ;------------------------------------------------------------
                                    843 ;val                       Allocated to registers r7 
                                    844 ;------------------------------------------------------------
                           000092   845 	G$wrLCD8$0$0 ==.
                           000092   846 	C$uRTOS_2.21.h$153$1$7 ==.
                                    847 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:153: void wrLCD8(__bit rs, char val){//comando p/ LCD
                                    848 ;	-----------------------------------------
                                    849 ;	 function wrLCD8
                                    850 ;	-----------------------------------------
      000149                        851 _wrLCD8:
      000149 AF 82            [24]  852 	mov	r7,dpl
                           000094   853 	C$uRTOS_2.21.h$154$1$9 ==.
                                    854 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:154: DC=rs; RW=0;                //1dado 0cmd, escrever
                                    855 ;	assignBit
      00014B A2 0B            [12]  856 	mov	c,_wrLCD8_PARM_1
      00014D 92 B4            [24]  857 	mov	_DC,c
                                    858 ;	assignBit
      00014F C2 B5            [12]  859 	clr	_RW
                           00009A   860 	C$uRTOS_2.21.h$155$1$9 ==.
                                    861 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:155: P1_4=(val&0x10); P1_5=(val&0x20);
      000151 EF               [12]  862 	mov	a,r7
      000152 A2 E4            [12]  863 	mov	c,acc[4]
                                    864 ;	assignBit
      000154 92 0C            [24]  865 	mov  _wrLCD8_sloc0_1_0,c
      000156 92 94            [24]  866 	mov	_P1_4,c
      000158 EF               [12]  867 	mov	a,r7
      000159 A2 E5            [12]  868 	mov	c,acc[5]
                                    869 ;	assignBit
      00015B 92 0C            [24]  870 	mov  _wrLCD8_sloc0_1_0,c
      00015D 92 95            [24]  871 	mov	_P1_5,c
                           0000A8   872 	C$uRTOS_2.21.h$156$1$9 ==.
                                    873 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:156: P1_6=(val&0x40); P1_7=(val&0x80);
      00015F EF               [12]  874 	mov	a,r7
      000160 A2 E6            [12]  875 	mov	c,acc[6]
                                    876 ;	assignBit
      000162 92 0C            [24]  877 	mov  _wrLCD8_sloc0_1_0,c
      000164 92 96            [24]  878 	mov	_P1_6,c
      000166 EF               [12]  879 	mov	a,r7
      000167 33               [12]  880 	rlc	a
                                    881 ;	assignBit
      000168 92 0C            [24]  882 	mov  _wrLCD8_sloc0_1_0,c
      00016A 92 97            [24]  883 	mov	_P1_7,c
                           0000B5   884 	C$uRTOS_2.21.h$157$1$9 ==.
                                    885 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:157: x50us=2; delay50();         //Tas=100us
      00016C 75 29 02         [24]  886 	mov	_x50us,#0x02
      00016F 12 01 33         [24]  887 	lcall	_delay50
                           0000BB   888 	C$uRTOS_2.21.h$158$1$9 ==.
                                    889 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:158: lcdCS=1;                    //para gravar
                                    890 ;	assignBit
      000172 D2 B7            [12]  891 	setb	_lcdCS
                           0000BD   892 	C$uRTOS_2.21.h$159$1$9 ==.
                                    893 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:159: x50us=8; delay50();         //PWeh=400us
      000174 75 29 08         [24]  894 	mov	_x50us,#0x08
      000177 12 01 33         [24]  895 	lcall	_delay50
                           0000C3   896 	C$uRTOS_2.21.h$160$1$9 ==.
                                    897 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:160: lcdCS=0;                    //grava
                                    898 ;	assignBit
      00017A C2 B7            [12]  899 	clr	_lcdCS
                           0000C5   900 	C$uRTOS_2.21.h$161$1$9 ==.
                                    901 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:161: x50us=4; delay50();         //Tah=200us
      00017C 75 29 04         [24]  902 	mov	_x50us,#0x04
      00017F 12 01 33         [24]  903 	lcall	_delay50
                           0000CB   904 	C$uRTOS_2.21.h$162$1$9 ==.
                                    905 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:162: RW=1; DC=1;                 //linhas ADC em 1
                                    906 ;	assignBit
      000182 D2 B5            [12]  907 	setb	_RW
                                    908 ;	assignBit
      000184 D2 B4            [12]  909 	setb	_DC
                           0000CF   910 	C$uRTOS_2.21.h$163$1$9 ==.
                           0000CF   911 	XG$wrLCD8$0$0 ==.
      000186 22               [24]  912 	ret
                                    913 ;------------------------------------------------------------
                                    914 ;Allocation info for local variables in function 'wrLCD4'
                                    915 ;------------------------------------------------------------
                                    916 ;val                       Allocated to registers r7 
                                    917 ;temp                      Allocated to registers r6 
                                    918 ;------------------------------------------------------------
                           0000D0   919 	G$wrLCD4$0$0 ==.
                           0000D0   920 	C$uRTOS_2.21.h$167$1$9 ==.
                                    921 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:167: void wrLCD4(__bit rs, char val){//comando p/ LCD
                                    922 ;	-----------------------------------------
                                    923 ;	 function wrLCD4
                                    924 ;	-----------------------------------------
      000187                        925 _wrLCD4:
      000187 AF 82            [24]  926 	mov	r7,dpl
                           0000D2   927 	C$uRTOS_2.21.h$169$1$11 ==.
                                    928 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:169: temp=(val&0xF0);
      000189 74 F0            [12]  929 	mov	a,#0xf0
      00018B 5F               [12]  930 	anl	a,r7
      00018C FE               [12]  931 	mov	r6,a
                           0000D6   932 	C$uRTOS_2.21.h$170$1$11 ==.
                                    933 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:170: wrLCD8(rs, temp);           //repassa p wrLCD8
                                    934 ;	assignBit
      00018D A2 0D            [12]  935 	mov	c,_wrLCD4_PARM_1
      00018F 92 0B            [24]  936 	mov	_wrLCD8_PARM_1,c
      000191 8E 82            [24]  937 	mov	dpl,r6
      000193 C0 07            [24]  938 	push	ar7
      000195 12 01 49         [24]  939 	lcall	_wrLCD8
      000198 D0 07            [24]  940 	pop	ar7
                           0000E3   941 	C$uRTOS_2.21.h$171$1$11 ==.
                                    942 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:171: temp=((val<<4)&0xF0);       //pega low nible
      00019A EF               [12]  943 	mov	a,r7
      00019B C4               [12]  944 	swap	a
      00019C 54 F0            [12]  945 	anl	a,#0xf0
      00019E FF               [12]  946 	mov	r7,a
      00019F 74 F0            [12]  947 	mov	a,#0xf0
      0001A1 5F               [12]  948 	anl	a,r7
      0001A2 FE               [12]  949 	mov	r6,a
                           0000EC   950 	C$uRTOS_2.21.h$172$1$11 ==.
                                    951 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:172: wrLCD8(rs, temp);           //repassa p wrLCD8
                                    952 ;	assignBit
      0001A3 A2 0D            [12]  953 	mov	c,_wrLCD4_PARM_1
      0001A5 92 0B            [24]  954 	mov	_wrLCD8_PARM_1,c
      0001A7 8E 82            [24]  955 	mov	dpl,r6
      0001A9 12 01 49         [24]  956 	lcall	_wrLCD8
                           0000F5   957 	C$uRTOS_2.21.h$173$1$11 ==.
                           0000F5   958 	XG$wrLCD4$0$0 ==.
      0001AC 22               [24]  959 	ret
                                    960 ;------------------------------------------------------------
                                    961 ;Allocation info for local variables in function 'char2LCD'
                                    962 ;------------------------------------------------------------
                                    963 ;val                       Allocated with name '_char2LCD_PARM_2'
                                    964 ;dot                       Allocated with name '_char2LCD_PARM_3'
                                    965 ;ddRam                     Allocated to registers r7 
                                    966 ;i                         Allocated to registers r7 
                                    967 ;------------------------------------------------------------
                           0000F6   968 	G$char2LCD$0$0 ==.
                           0000F6   969 	C$uRTOS_2.21.h$178$1$11 ==.
                                    970 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:178: void char2LCD(char ddRam, unsigned char val, char dot){
                                    971 ;	-----------------------------------------
                                    972 ;	 function char2LCD
                                    973 ;	-----------------------------------------
      0001AD                        974 _char2LCD:
      0001AD AF 82            [24]  975 	mov	r7,dpl
                           0000F8   976 	C$uRTOS_2.21.h$180$1$13 ==.
                                    977 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:180: wrLCD4(comand,ddRam);           //posição número
                                    978 ;	assignBit
      0001AF C2 0D            [12]  979 	clr	_wrLCD4_PARM_1
      0001B1 8F 82            [24]  980 	mov	dpl,r7
      0001B3 12 01 87         [24]  981 	lcall	_wrLCD4
                           0000FF   982 	C$uRTOS_2.21.h$181$1$13 ==.
                                    983 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:181: algs[0]=0x30+(val/100);
      0001B6 75 F0 64         [24]  984 	mov	b,#0x64
      0001B9 E5 56            [12]  985 	mov	a,_char2LCD_PARM_2
      0001BB 84               [48]  986 	div	ab
      0001BC 24 30            [12]  987 	add	a,#0x30
      0001BE F5 51            [12]  988 	mov	_algs,a
                           000109   989 	C$uRTOS_2.21.h$182$1$13 ==.
                                    990 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:182: val=val%100;
      0001C0 75 F0 64         [24]  991 	mov	b,#0x64
      0001C3 E5 56            [12]  992 	mov	a,_char2LCD_PARM_2
      0001C5 84               [48]  993 	div	ab
      0001C6 85 F0 56         [24]  994 	mov	_char2LCD_PARM_2,b
                           000112   995 	C$uRTOS_2.21.h$183$1$13 ==.
                                    996 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:183: algs[1]=0x30+(val/10);
      0001C9 75 F0 0A         [24]  997 	mov	b,#0x0a
      0001CC E5 56            [12]  998 	mov	a,_char2LCD_PARM_2
      0001CE 84               [48]  999 	div	ab
      0001CF 24 30            [12] 1000 	add	a,#0x30
      0001D1 F5 52            [12] 1001 	mov	(_algs + 0x0001),a
                           00011C  1002 	C$uRTOS_2.21.h$184$1$13 ==.
                                   1003 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:184: algs[2]=0x30+(val%10);
      0001D3 75 F0 0A         [24] 1004 	mov	b,#0x0a
      0001D6 E5 56            [12] 1005 	mov	a,_char2LCD_PARM_2
      0001D8 84               [48] 1006 	div	ab
      0001D9 E5 F0            [12] 1007 	mov	a,b
      0001DB 24 30            [12] 1008 	add	a,#0x30
      0001DD F5 53            [12] 1009 	mov	(_algs + 0x0002),a
                           000128  1010 	C$uRTOS_2.21.h$185$2$14 ==.
                                   1011 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      0001DF 7F 00            [12] 1012 	mov	r7,#0x00
      0001E1                       1013 00104$:
                           00012A  1014 	C$uRTOS_2.21.h$186$3$15 ==.
                                   1015 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:186: if(i==dot)wrLCD4(letra, 46);
      0001E1 EF               [12] 1016 	mov	a,r7
      0001E2 B5 57 0C         [24] 1017 	cjne	a,_char2LCD_PARM_3,00102$
                                   1018 ;	assignBit
      0001E5 D2 0D            [12] 1019 	setb	_wrLCD4_PARM_1
      0001E7 75 82 2E         [24] 1020 	mov	dpl,#0x2e
      0001EA C0 07            [24] 1021 	push	ar7
      0001EC 12 01 87         [24] 1022 	lcall	_wrLCD4
      0001EF D0 07            [24] 1023 	pop	ar7
      0001F1                       1024 00102$:
                           00013A  1025 	C$uRTOS_2.21.h$187$3$15 ==.
                                   1026 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:187: wrLCD4(letra, algs[i]);     //coloca número
      0001F1 EF               [12] 1027 	mov	a,r7
      0001F2 24 51            [12] 1028 	add	a,#_algs
      0001F4 F9               [12] 1029 	mov	r1,a
      0001F5 87 82            [24] 1030 	mov	dpl,@r1
                                   1031 ;	assignBit
      0001F7 D2 0D            [12] 1032 	setb	_wrLCD4_PARM_1
      0001F9 C0 07            [24] 1033 	push	ar7
      0001FB 12 01 87         [24] 1034 	lcall	_wrLCD4
      0001FE D0 07            [24] 1035 	pop	ar7
                           000149  1036 	C$uRTOS_2.21.h$185$2$14 ==.
                                   1037 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      000200 0F               [12] 1038 	inc	r7
      000201 BF 03 00         [24] 1039 	cjne	r7,#0x03,00116$
      000204                       1040 00116$:
      000204 40 DB            [24] 1041 	jc	00104$
                           00014F  1042 	C$uRTOS_2.21.h$189$2$14 ==.
                           00014F  1043 	XG$char2LCD$0$0 ==.
      000206 22               [24] 1044 	ret
                                   1045 ;------------------------------------------------------------
                                   1046 ;Allocation info for local variables in function 'iniLCD4'
                                   1047 ;------------------------------------------------------------
                                   1048 ;i                         Allocated to registers r7 
                                   1049 ;cmD                       Allocated to registers r6 
                                   1050 ;BF                        Allocated to registers 
                                   1051 ;------------------------------------------------------------
                           000150  1052 	G$iniLCD4$0$0 ==.
                           000150  1053 	C$uRTOS_2.21.h$193$2$14 ==.
                                   1054 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:193: void iniLCD4(){                 //inicializa LCD
                                   1055 ;	-----------------------------------------
                                   1056 ;	 function iniLCD4
                                   1057 ;	-----------------------------------------
      000207                       1058 _iniLCD4:
                           000150  1059 	C$uRTOS_2.21.h$197$1$16 ==.
                                   1060 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:197: lcdCS=0;                    //seleciona LCD
                                   1061 ;	assignBit
      000207 C2 B7            [12] 1062 	clr	_lcdCS
                           000152  1063 	C$uRTOS_2.21.h$198$1$16 ==.
                                   1064 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:198: umSeg=0; cnt100=100;        //reinicia umSeg
                                   1065 ;	assignBit
      000209 C2 00            [12] 1066 	clr	_umSeg
      00020B 75 27 64         [24] 1067 	mov	_cnt100,#0x64
                           000157  1068 	C$uRTOS_2.21.h$199$1$16 ==.
                                   1069 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:199: while(!umSeg);              //para acomodar LCD
      00020E                       1070 00101$:
                           000157  1071 	C$uRTOS_2.21.h$200$1$16 ==.
                                   1072 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:200: umSeg=0;
                                   1073 ;	assignBit
      00020E 10 00 02         [24] 1074 	jbc	_umSeg,00163$
      000211 80 FB            [24] 1075 	sjmp	00101$
      000213                       1076 00163$:
                           00015C  1077 	C$uRTOS_2.21.h$201$1$16 ==.
                                   1078 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:201: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1079 ;	assignBit
      000213 C2 0B            [12] 1080 	clr	_wrLCD8_PARM_1
      000215 75 82 30         [24] 1081 	mov	dpl,#0x30
      000218 12 01 49         [24] 1082 	lcall	_wrLCD8
                           000164  1083 	C$uRTOS_2.21.h$202$1$16 ==.
                                   1084 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:202: while(S1D1); while(S2D2);	//garante 10ms
      00021B                       1085 00104$:
      00021B 20 90 FD         [24] 1086 	jb	_S1D1,00104$
      00021E                       1087 00107$:
      00021E 20 91 FD         [24] 1088 	jb	_S2D2,00107$
                           00016A  1089 	C$uRTOS_2.21.h$203$1$16 ==.
                                   1090 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:203: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1091 ;	assignBit
      000221 C2 0B            [12] 1092 	clr	_wrLCD8_PARM_1
      000223 75 82 30         [24] 1093 	mov	dpl,#0x30
      000226 12 01 49         [24] 1094 	lcall	_wrLCD8
                           000172  1095 	C$uRTOS_2.21.h$204$1$16 ==.
                                   1096 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:204: while(S1D1); while(S2D2);	//garante 10ms
      000229                       1097 00110$:
      000229 20 90 FD         [24] 1098 	jb	_S1D1,00110$
      00022C                       1099 00113$:
      00022C 20 91 FD         [24] 1100 	jb	_S2D2,00113$
                           000178  1101 	C$uRTOS_2.21.h$205$1$16 ==.
                                   1102 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:205: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1103 ;	assignBit
      00022F C2 0B            [12] 1104 	clr	_wrLCD8_PARM_1
      000231 75 82 30         [24] 1105 	mov	dpl,#0x30
      000234 12 01 49         [24] 1106 	lcall	_wrLCD8
                           000180  1107 	C$uRTOS_2.21.h$206$1$16 ==.
                                   1108 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:206: x50us=4; delay50();         //delay 200us
      000237 75 29 04         [24] 1109 	mov	_x50us,#0x04
      00023A 12 01 33         [24] 1110 	lcall	_delay50
                           000186  1111 	C$uRTOS_2.21.h$207$1$16 ==.
                                   1112 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:207: wrLCD8(comand, 0x20);       //inicia em 8 bits
                                   1113 ;	assignBit
      00023D C2 0B            [12] 1114 	clr	_wrLCD8_PARM_1
      00023F 75 82 20         [24] 1115 	mov	dpl,#0x20
      000242 12 01 49         [24] 1116 	lcall	_wrLCD8
                           00018E  1117 	C$uRTOS_2.21.h$208$1$16 ==.
                                   1118 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:208: x50us=4; delay50();         //delay 200us
      000245 75 29 04         [24] 1119 	mov	_x50us,#0x04
      000248 12 01 33         [24] 1120 	lcall	_delay50
                           000194  1121 	C$uRTOS_2.21.h$209$2$17 ==.
                                   1122 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      00024B 7F 00            [12] 1123 	mov	r7,#0x00
      00024D                       1124 00123$:
                           000196  1125 	C$uRTOS_2.21.h$210$3$18 ==.
                                   1126 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:210: cmD=setLCD4[i];         // seleciona comando
      00024D EF               [12] 1127 	mov	a,r7
      00024E 90 03 43         [24] 1128 	mov	dptr,#_setLCD4
      000251 93               [24] 1129 	movc	a,@a+dptr
      000252 FE               [12] 1130 	mov	r6,a
                           00019C  1131 	C$uRTOS_2.21.h$211$3$18 ==.
                                   1132 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:211: wrLCD4(comand, cmD);
                                   1133 ;	assignBit
      000253 C2 0D            [12] 1134 	clr	_wrLCD4_PARM_1
      000255 8E 82            [24] 1135 	mov	dpl,r6
      000257 C0 07            [24] 1136 	push	ar7
      000259 12 01 87         [24] 1137 	lcall	_wrLCD4
      00025C D0 07            [24] 1138 	pop	ar7
                           0001A7  1139 	C$uRTOS_2.21.h$212$3$18 ==.
                                   1140 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:212: while(S1D1);
      00025E                       1141 00116$:
      00025E 20 90 FD         [24] 1142 	jb	_S1D1,00116$
                           0001AA  1143 	C$uRTOS_2.21.h$213$3$18 ==.
                                   1144 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:213: while(S2D2);            //garante 10ms
      000261                       1145 00119$:
      000261 20 91 FD         [24] 1146 	jb	_S2D2,00119$
                           0001AD  1147 	C$uRTOS_2.21.h$209$2$17 ==.
                                   1148 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      000264 0F               [12] 1149 	inc	r7
      000265 BF 04 00         [24] 1150 	cjne	r7,#0x04,00170$
      000268                       1151 00170$:
      000268 40 E3            [24] 1152 	jc	00123$
                           0001B3  1153 	C$uRTOS_2.21.h$215$2$17 ==.
                           0001B3  1154 	XG$iniLCD4$0$0 ==.
      00026A 22               [24] 1155 	ret
                                   1156 ;------------------------------------------------------------
                                   1157 ;Allocation info for local variables in function 'inic'
                                   1158 ;------------------------------------------------------------
                           0001B4  1159 	G$inic$0$0 ==.
                           0001B4  1160 	C$uRTOS_2.21.h$219$2$17 ==.
                                   1161 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:219: void inic(void){
                                   1162 ;	-----------------------------------------
                                   1163 ;	 function inic
                                   1164 ;	-----------------------------------------
      00026B                       1165 _inic:
                           0001B4  1166 	C$uRTOS_2.21.h$220$1$20 ==.
                                   1167 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:220: PT0=1;                  //prioridade TC0
                                   1168 ;	assignBit
      00026B D2 B9            [12] 1169 	setb	_PT0
                           0001B6  1170 	C$uRTOS_2.21.h$221$1$20 ==.
                                   1171 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:221: IE=0x93;                //EA+ES+ET0+EX0
      00026D 75 A8 93         [24] 1172 	mov	_IE,#0x93
                           0001B9  1173 	C$uRTOS_2.21.h$222$1$20 ==.
                                   1174 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:222: TMOD=0x22;              //TC0=TC1=modo2
      000270 75 89 22         [24] 1175 	mov	_TMOD,#0x22
                           0001BC  1176 	C$uRTOS_2.21.h$223$1$20 ==.
                                   1177 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:223: TL0=206;                //conta 50
      000273 75 8A CE         [24] 1178 	mov	_TL0,#0xce
                           0001BF  1179 	C$uRTOS_2.21.h$224$1$20 ==.
                                   1180 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:224: TH0=206;                //recarrega
      000276 75 8C CE         [24] 1181 	mov	_TH0,#0xce
                           0001C2  1182 	C$uRTOS_2.21.h$225$1$20 ==.
                                   1183 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:225: TL1=243;                //conta 13
      000279 75 8B F3         [24] 1184 	mov	_TL1,#0xf3
                           0001C5  1185 	C$uRTOS_2.21.h$226$1$20 ==.
                                   1186 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:226: TH1=243;                //recarrega
      00027C 75 8D F3         [24] 1187 	mov	_TH1,#0xf3
                           0001C8  1188 	C$uRTOS_2.21.h$227$1$20 ==.
                                   1189 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:227: PCON=0x80;              //serial x2 (/16)
      00027F 75 87 80         [24] 1190 	mov	_PCON,#0x80
                           0001CB  1191 	C$uRTOS_2.21.h$228$1$20 ==.
                                   1192 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:228: SCON=0xC8;              //serial modo 3
      000282 75 98 C8         [24] 1193 	mov	_SCON,#0xc8
                           0001CE  1194 	C$uRTOS_2.21.h$229$1$20 ==.
                                   1195 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:229: TR0=1;                  //liga tc0
                                   1196 ;	assignBit
      000285 D2 8C            [12] 1197 	setb	_TR0
                           0001D0  1198 	C$uRTOS_2.21.h$230$1$20 ==.
                                   1199 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:230: TR1=1;                  //liga tc1
                                   1200 ;	assignBit
      000287 D2 8E            [12] 1201 	setb	_TR1
                           0001D2  1202 	C$uRTOS_2.21.h$231$1$20 ==.
                                   1203 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:231: iniLCD4();              //inicializa LCD
      000289 12 02 07         [24] 1204 	lcall	_iniLCD4
                           0001D5  1205 	C$uRTOS_2.21.h$232$1$20 ==.
                           0001D5  1206 	XG$inic$0$0 ==.
      00028C 22               [24] 1207 	ret
                                   1208 ;------------------------------------------------------------
                                   1209 ;Allocation info for local variables in function 'RTproc_1'
                                   1210 ;------------------------------------------------------------
                           0001D6  1211 	G$RTproc_1$0$0 ==.
                           0001D6  1212 	C$ultrassonico.c$10$1$20 ==.
                                   1213 ;	ultrassonico.c:10: void RTproc_1(){ 
                                   1214 ;	-----------------------------------------
                                   1215 ;	 function RTproc_1
                                   1216 ;	-----------------------------------------
      00028D                       1217 _RTproc_1:
                           0001D6  1218 	C$ultrassonico.c$11$1$20 ==.
                                   1219 ;	ultrassonico.c:11: }
                           0001D6  1220 	C$ultrassonico.c$11$1$20 ==.
                           0001D6  1221 	XG$RTproc_1$0$0 ==.
      00028D 22               [24] 1222 	ret
                                   1223 ;------------------------------------------------------------
                                   1224 ;Allocation info for local variables in function 'RTproc_2'
                                   1225 ;------------------------------------------------------------
                           0001D7  1226 	G$RTproc_2$0$0 ==.
                           0001D7  1227 	C$ultrassonico.c$13$1$20 ==.
                                   1228 ;	ultrassonico.c:13: void RTproc_2(){ 
                                   1229 ;	-----------------------------------------
                                   1230 ;	 function RTproc_2
                                   1231 ;	-----------------------------------------
      00028E                       1232 _RTproc_2:
                           0001D7  1233 	C$ultrassonico.c$14$1$22 ==.
                                   1234 ;	ultrassonico.c:14: TrigCont--; 
                           0001D7  1235 	C$ultrassonico.c$15$1$22 ==.
                                   1236 ;	ultrassonico.c:15: if (TrigCont==0){
      00028E D5 5A 12         [24] 1237 	djnz	_TrigCont,00106$
                           0001DA  1238 	C$ultrassonico.c$16$2$23 ==.
                                   1239 ;	ultrassonico.c:16: TrigPin=1 ; 
                                   1240 ;	assignBit
      000291 D2 92            [12] 1241 	setb	_TrigPin
                           0001DC  1242 	C$ultrassonico.c$17$2$23 ==.
                                   1243 ;	ultrassonico.c:17: TrigCont=4;
      000293 75 5A 04         [24] 1244 	mov	_TrigCont,#0x04
                           0001DF  1245 	C$ultrassonico.c$18$2$23 ==.
                                   1246 ;	ultrassonico.c:18: while(TrigCont)TrigCont--;
      000296                       1247 00101$:
      000296 E5 5A            [12] 1248 	mov	a,_TrigCont
      000298 60 04            [24] 1249 	jz	00103$
      00029A 15 5A            [12] 1250 	dec	_TrigCont
      00029C 80 F8            [24] 1251 	sjmp	00101$
      00029E                       1252 00103$:
                           0001E7  1253 	C$ultrassonico.c$19$2$23 ==.
                                   1254 ;	ultrassonico.c:19: TrigCont=100 ;
      00029E 75 5A 64         [24] 1255 	mov	_TrigCont,#0x64
                           0001EA  1256 	C$ultrassonico.c$20$2$23 ==.
                                   1257 ;	ultrassonico.c:20: TrigPin=0; 
                                   1258 ;	assignBit
      0002A1 C2 92            [12] 1259 	clr	_TrigPin
      0002A3                       1260 00106$:
                           0001EC  1261 	C$ultrassonico.c$21$1$22 ==.
                           0001EC  1262 	XG$RTproc_2$0$0 ==.
      0002A3 22               [24] 1263 	ret
                                   1264 ;------------------------------------------------------------
                                   1265 ;Allocation info for local variables in function 'ext_1'
                                   1266 ;------------------------------------------------------------
                           0001ED  1267 	G$ext_1$0$0 ==.
                           0001ED  1268 	C$ultrassonico.c$23$1$22 ==.
                                   1269 ;	ultrassonico.c:23: void ext_1 (void) __interrupt(2){
                                   1270 ;	-----------------------------------------
                                   1271 ;	 function ext_1
                                   1272 ;	-----------------------------------------
      0002A4                       1273 _ext_1:
      0002A4 C0 E0            [24] 1274 	push	acc
      0002A6 C0 07            [24] 1275 	push	ar7
      0002A8 C0 06            [24] 1276 	push	ar6
      0002AA C0 D0            [24] 1277 	push	psw
      0002AC 75 D0 00         [24] 1278 	mov	psw,#0x00
                           0001F8  1279 	C$ultrassonico.c$24$1$25 ==.
                                   1280 ;	ultrassonico.c:24: Echo=TH1<<8; 
      0002AF AE 8D            [24] 1281 	mov	r6,_TH1
      0002B1 7F 00            [12] 1282 	mov	r7,#0x00
      0002B3 8E 59            [24] 1283 	mov	(_Echo + 1),r6
                                   1284 ;	1-genFromRTrack replaced	mov	_Echo,#0x00
      0002B5 8F 58            [24] 1285 	mov	_Echo,r7
                           000200  1286 	C$ultrassonico.c$25$1$25 ==.
                                   1287 ;	ultrassonico.c:25: Echo=Echo+TL1; 
      0002B7 AE 8B            [24] 1288 	mov	r6,_TL1
      0002B9 7F 00            [12] 1289 	mov	r7,#0x00
      0002BB EE               [12] 1290 	mov	a,r6
      0002BC 25 58            [12] 1291 	add	a,_Echo
      0002BE F5 58            [12] 1292 	mov	_Echo,a
      0002C0 EF               [12] 1293 	mov	a,r7
      0002C1 35 59            [12] 1294 	addc	a,(_Echo + 1)
      0002C3 F5 59            [12] 1295 	mov	(_Echo + 1),a
                           00020E  1296 	C$ultrassonico.c$26$1$25 ==.
                                   1297 ;	ultrassonico.c:26: TL1=0x00; 
                                   1298 ;	1-genFromRTrack replaced	mov	_TL1,#0x00
      0002C5 8F 8B            [24] 1299 	mov	_TL1,r7
                           000210  1300 	C$ultrassonico.c$27$1$25 ==.
                                   1301 ;	ultrassonico.c:27: TH1=0x00; 
                                   1302 ;	1-genFromRTrack replaced	mov	_TH1,#0x00
      0002C7 8F 8D            [24] 1303 	mov	_TH1,r7
      0002C9 D0 D0            [24] 1304 	pop	psw
      0002CB D0 06            [24] 1305 	pop	ar6
      0002CD D0 07            [24] 1306 	pop	ar7
      0002CF D0 E0            [24] 1307 	pop	acc
                           00021A  1308 	C$ultrassonico.c$28$1$25 ==.
                           00021A  1309 	XG$ext_1$0$0 ==.
      0002D1 32               [24] 1310 	reti
                                   1311 ;	eliminated unneeded push/pop dpl
                                   1312 ;	eliminated unneeded push/pop dph
                                   1313 ;	eliminated unneeded push/pop b
                                   1314 ;------------------------------------------------------------
                                   1315 ;Allocation info for local variables in function 'main'
                                   1316 ;------------------------------------------------------------
                                   1317 ;i                         Allocated to registers r7 
                                   1318 ;distCM                    Allocated to registers 
                                   1319 ;------------------------------------------------------------
                           00021B  1320 	G$main$0$0 ==.
                           00021B  1321 	C$ultrassonico.c$29$1$25 ==.
                                   1322 ;	ultrassonico.c:29: void main (){
                                   1323 ;	-----------------------------------------
                                   1324 ;	 function main
                                   1325 ;	-----------------------------------------
      0002D2                       1326 _main:
                           00021B  1327 	C$ultrassonico.c$32$1$26 ==.
                                   1328 ;	ultrassonico.c:32: TrigPin=0; 
                                   1329 ;	assignBit
      0002D2 C2 92            [12] 1330 	clr	_TrigPin
                           00021D  1331 	C$ultrassonico.c$33$1$26 ==.
                                   1332 ;	ultrassonico.c:33: inic();
      0002D4 12 02 6B         [24] 1333 	lcall	_inic
                           000220  1334 	C$ultrassonico.c$34$1$26 ==.
                                   1335 ;	ultrassonico.c:34: TMOD=0x92; 
      0002D7 75 89 92         [24] 1336 	mov	_TMOD,#0x92
                           000223  1337 	C$ultrassonico.c$35$1$26 ==.
                                   1338 ;	ultrassonico.c:35: IT1=1; 
                                   1339 ;	assignBit
      0002DA D2 8A            [12] 1340 	setb	_IT1
                           000225  1341 	C$ultrassonico.c$36$1$26 ==.
                                   1342 ;	ultrassonico.c:36: EX1=1; 
                                   1343 ;	assignBit
      0002DC D2 AA            [12] 1344 	setb	_EX1
                           000227  1345 	C$ultrassonico.c$37$2$27 ==.
                                   1346 ;	ultrassonico.c:37: for(i=0;i<15;i++){
      0002DE 7F 00            [12] 1347 	mov	r7,#0x00
      0002E0                       1348 00105$:
                           000229  1349 	C$ultrassonico.c$38$3$28 ==.
                                   1350 ;	ultrassonico.c:38: wrLCD4(letra, Tit1[i]);   
      0002E0 EF               [12] 1351 	mov	a,r7
      0002E1 90 03 47         [24] 1352 	mov	dptr,#_Tit1
      0002E4 93               [24] 1353 	movc	a,@a+dptr
      0002E5 FE               [12] 1354 	mov	r6,a
                                   1355 ;	assignBit
      0002E6 D2 0D            [12] 1356 	setb	_wrLCD4_PARM_1
      0002E8 8E 82            [24] 1357 	mov	dpl,r6
      0002EA C0 07            [24] 1358 	push	ar7
      0002EC 12 01 87         [24] 1359 	lcall	_wrLCD4
      0002EF D0 07            [24] 1360 	pop	ar7
                           00023A  1361 	C$ultrassonico.c$37$2$27 ==.
                                   1362 ;	ultrassonico.c:37: for(i=0;i<15;i++){
      0002F1 0F               [12] 1363 	inc	r7
      0002F2 BF 0F 00         [24] 1364 	cjne	r7,#0x0f,00115$
      0002F5                       1365 00115$:
      0002F5 40 E9            [24] 1366 	jc	00105$
                           000240  1367 	C$ultrassonico.c$40$1$26 ==.
                                   1368 ;	ultrassonico.c:40: while(1){
      0002F7                       1369 00103$:
                           000240  1370 	C$ultrassonico.c$41$1$26 ==.
                                   1371 ;	ultrassonico.c:41: distCM=(Echo/58);
      0002F7 75 08 3A         [24] 1372 	mov	__divuint_PARM_2,#0x3a
      0002FA 75 09 00         [24] 1373 	mov	(__divuint_PARM_2 + 1),#0x00
      0002FD 85 58 82         [24] 1374 	mov	dpl,_Echo
      000300 85 59 83         [24] 1375 	mov	dph,(_Echo + 1)
      000303 12 03 16         [24] 1376 	lcall	__divuint
      000306 AE 82            [24] 1377 	mov	r6,dpl
      000308 8E 56            [24] 1378 	mov	_char2LCD_PARM_2,r6
                           000253  1379 	C$ultrassonico.c$42$2$29 ==.
                                   1380 ;	ultrassonico.c:42: char2LCD(0xC0,distCM,4);
      00030A 75 57 04         [24] 1381 	mov	_char2LCD_PARM_3,#0x04
      00030D 75 82 C0         [24] 1382 	mov	dpl,#0xc0
      000310 12 01 AD         [24] 1383 	lcall	_char2LCD
      000313 80 E2            [24] 1384 	sjmp	00103$
                           00025E  1385 	C$ultrassonico.c$43$1$26 ==.
                           00025E  1386 	XG$main$0$0 ==.
      000315 22               [24] 1387 	ret
                                   1388 	.area CSEG    (CODE)
                                   1389 	.area CONST   (CODE)
                           000000  1390 G$setLCD4$0$0 == .
      000343                       1391 _setLCD4:
      000343 28                    1392 	.db #0x28	; 40
      000344 06                    1393 	.db #0x06	; 6
      000345 0E                    1394 	.db #0x0e	; 14
      000346 01                    1395 	.db #0x01	; 1
                           000004  1396 G$Tit1$0$0 == .
      000347                       1397 _Tit1:
      000347 44 69 73 74 61 6E 63  1398 	.ascii "Distancia (cm):"
             69 61 20 28 63 6D 29
             3A
      000356 00                    1399 	.db 0x00
                                   1400 	.area XINIT   (CODE)
                                   1401 	.area CABS    (ABS,CODE)
