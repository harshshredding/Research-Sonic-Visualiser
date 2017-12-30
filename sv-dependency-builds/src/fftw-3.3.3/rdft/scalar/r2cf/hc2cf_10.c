/*
 * Copyright (c) 2003, 2007-11 Matteo Frigo
 * Copyright (c) 2003, 2007-11 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sun Nov 25 07:40:30 EST 2012 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_hc2c.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -n 10 -dit -name hc2cf_10 -include hc2cf.h */

/*
 * This function contains 102 FP additions, 72 FP multiplications,
 * (or, 48 additions, 18 multiplications, 54 fused multiply/add),
 * 70 stack variables, 4 constants, and 40 memory accesses
 */
#include "hc2cf.h"

static void hc2cf_10(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 18); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 18, MAKE_VOLATILE_STRIDE(40, rs)) {
	       E T1X, T21, T20, T22;
	       {
		    E T26, T1U, T8, T12, T1n, T1P, T24, T1K, T1Y, T18, T10, T2b, T1H, T23, T15;
		    E T1Z, T2a, Tz, T1O, T1y;
		    {
			 E T1, T1T, T3, T6, T2, T5;
			 T1 = Rp[0];
			 T1T = Rm[0];
			 T3 = Ip[WS(rs, 2)];
			 T6 = Im[WS(rs, 2)];
			 T2 = W[8];
			 T5 = W[9];
			 {
			      E T1l, TY, T1h, T1J, TM, T16, T1j, TS;
			      {
				   E TF, T1e, TO, TR, T1g, TL, TN, TQ, T1i, TP;
				   {
					E TU, TX, TT, TW;
					{
					     E TB, TE, T1R, T4, TA, TD;
					     TB = Rp[WS(rs, 2)];
					     TE = Rm[WS(rs, 2)];
					     T1R = T2 * T6;
					     T4 = T2 * T3;
					     TA = W[6];
					     TD = W[7];
					     {
						  E T1S, T7, T1d, TC;
						  T1S = FNMS(T5, T3, T1R);
						  T7 = FMA(T5, T6, T4);
						  T1d = TA * TE;
						  TC = TA * TB;
						  T26 = T1T - T1S;
						  T1U = T1S + T1T;
						  T8 = T1 - T7;
						  T12 = T1 + T7;
						  TF = FMA(TD, TE, TC);
						  T1e = FNMS(TD, TB, T1d);
					     }
					}
					TU = Ip[0];
					TX = Im[0];
					TT = W[0];
					TW = W[1];
					{
					     E TH, TK, TJ, T1f, TI, T1k, TV, TG;
					     TH = Ip[WS(rs, 4)];
					     TK = Im[WS(rs, 4)];
					     T1k = TT * TX;
					     TV = TT * TU;
					     TG = W[16];
					     TJ = W[17];
					     T1l = FNMS(TW, TU, T1k);
					     TY = FMA(TW, TX, TV);
					     T1f = TG * TK;
					     TI = TG * TH;
					     TO = Rp[WS(rs, 3)];
					     TR = Rm[WS(rs, 3)];
					     T1g = FNMS(TJ, TH, T1f);
					     TL = FMA(TJ, TK, TI);
					     TN = W[10];
					     TQ = W[11];
					}
				   }
				   T1h = T1e + T1g;
				   T1J = T1g - T1e;
				   TM = TF - TL;
				   T16 = TF + TL;
				   T1i = TN * TR;
				   TP = TN * TO;
				   T1j = FNMS(TQ, TO, T1i);
				   TS = FMA(TQ, TR, TP);
			      }
			      {
				   E T1p, Te, T1w, Tx, Tn, Tq, Tp, T1r, Tk, T1t, To;
				   {
					E Tt, Tw, Tv, T1v, Tu;
					{
					     E Ta, Td, T9, Tc, T1o, Tb, Ts;
					     Ta = Rp[WS(rs, 1)];
					     Td = Rm[WS(rs, 1)];
					     {
						  E T1I, T1m, TZ, T17;
						  T1I = T1l - T1j;
						  T1m = T1j + T1l;
						  TZ = TS - TY;
						  T17 = TS + TY;
						  T1n = T1h - T1m;
						  T1P = T1h + T1m;
						  T24 = T1J + T1I;
						  T1K = T1I - T1J;
						  T1Y = T16 - T17;
						  T18 = T16 + T17;
						  T10 = TM + TZ;
						  T2b = TZ - TM;
						  T9 = W[2];
					     }
					     Tc = W[3];
					     Tt = Ip[WS(rs, 1)];
					     Tw = Im[WS(rs, 1)];
					     T1o = T9 * Td;
					     Tb = T9 * Ta;
					     Ts = W[4];
					     Tv = W[5];
					     T1p = FNMS(Tc, Ta, T1o);
					     Te = FMA(Tc, Td, Tb);
					     T1v = Ts * Tw;
					     Tu = Ts * Tt;
					}
					{
					     E Tg, Tj, Tf, Ti, T1q, Th, Tm;
					     Tg = Ip[WS(rs, 3)];
					     Tj = Im[WS(rs, 3)];
					     T1w = FNMS(Tv, Tt, T1v);
					     Tx = FMA(Tv, Tw, Tu);
					     Tf = W[12];
					     Ti = W[13];
					     Tn = Rp[WS(rs, 4)];
					     Tq = Rm[WS(rs, 4)];
					     T1q = Tf * Tj;
					     Th = Tf * Tg;
					     Tm = W[14];
					     Tp = W[15];
					     T1r = FNMS(Ti, Tg, T1q);
					     Tk = FMA(Ti, Tj, Th);
					     T1t = Tm * Tq;
					     To = Tm * Tn;
					}
				   }
				   {
					E T1s, T1G, Tl, T13, T1u, Tr;
					T1s = T1p + T1r;
					T1G = T1r - T1p;
					Tl = Te - Tk;
					T13 = Te + Tk;
					T1u = FNMS(Tp, Tn, T1t);
					Tr = FMA(Tp, Tq, To);
					{
					     E T1x, T1F, T14, Ty;
					     T1x = T1u + T1w;
					     T1F = T1w - T1u;
					     T14 = Tr + Tx;
					     Ty = Tr - Tx;
					     T1H = T1F - T1G;
					     T23 = T1G + T1F;
					     T15 = T13 + T14;
					     T1Z = T13 - T14;
					     T2a = Ty - Tl;
					     Tz = Tl + Ty;
					     T1O = T1s + T1x;
					     T1y = T1s - T1x;
					}
				   }
			      }
			 }
		    }
		    {
			 E T2c, T2e, T29, T2d;
			 {
			      E T1D, T11, T25, T28, T27;
			      T1D = Tz - T10;
			      T11 = Tz + T10;
			      T25 = T23 + T24;
			      T28 = T24 - T23;
			      {
				   E T1N, T1L, T1C, T1M, T1E;
				   T1N = FNMS(KP618033988, T1H, T1K);
				   T1L = FMA(KP618033988, T1K, T1H);
				   Rm[WS(rs, 4)] = T8 + T11;
				   T1C = FNMS(KP250000000, T11, T8);
				   T1M = FNMS(KP559016994, T1D, T1C);
				   T1E = FMA(KP559016994, T1D, T1C);
				   T27 = FMA(KP250000000, T25, T26);
				   T2c = FMA(KP618033988, T2b, T2a);
				   T2e = FNMS(KP618033988, T2a, T2b);
				   Rp[WS(rs, 1)] = FMA(KP951056516, T1L, T1E);
				   Rm[0] = FNMS(KP951056516, T1L, T1E);
				   Rp[WS(rs, 3)] = FMA(KP951056516, T1N, T1M);
				   Rm[WS(rs, 2)] = FNMS(KP951056516, T1N, T1M);
			      }
			      Im[WS(rs, 4)] = T25 - T26;
			      T29 = FMA(KP559016994, T28, T27);
			      T2d = FNMS(KP559016994, T28, T27);
			 }
			 {
			      E T1c, T1A, T1z, T1B, T19, T1b, T1a, T1Q, T1W, T1V;
			      T19 = T15 + T18;
			      T1b = T15 - T18;
			      Ip[WS(rs, 3)] = FMA(KP951056516, T2e, T2d);
			      Im[WS(rs, 2)] = FMS(KP951056516, T2e, T2d);
			      Ip[WS(rs, 1)] = FMA(KP951056516, T2c, T29);
			      Im[0] = FMS(KP951056516, T2c, T29);
			      T1a = FNMS(KP250000000, T19, T12);
			      Rp[0] = T12 + T19;
			      T1c = FNMS(KP559016994, T1b, T1a);
			      T1A = FMA(KP559016994, T1b, T1a);
			      T1z = FNMS(KP618033988, T1y, T1n);
			      T1B = FMA(KP618033988, T1n, T1y);
			      T1Q = T1O + T1P;
			      T1W = T1O - T1P;
			      Rm[WS(rs, 3)] = FMA(KP951056516, T1B, T1A);
			      Rp[WS(rs, 4)] = FNMS(KP951056516, T1B, T1A);
			      Rm[WS(rs, 1)] = FMA(KP951056516, T1z, T1c);
			      Rp[WS(rs, 2)] = FNMS(KP951056516, T1z, T1c);
			      T1V = FNMS(KP250000000, T1Q, T1U);
			      Ip[0] = T1Q + T1U;
			      T1X = FNMS(KP559016994, T1W, T1V);
			      T21 = FMA(KP559016994, T1W, T1V);
			      T20 = FNMS(KP618033988, T1Z, T1Y);
			      T22 = FMA(KP618033988, T1Y, T1Z);
			 }
		    }
	       }
	       Ip[WS(rs, 4)] = FMA(KP951056516, T22, T21);
	       Im[WS(rs, 3)] = FMS(KP951056516, T22, T21);
	       Ip[WS(rs, 2)] = FMA(KP951056516, T20, T1X);
	       Im[WS(rs, 1)] = FMS(KP951056516, T20, T1X);
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 10},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 10, "hc2cf_10", twinstr, &GENUS, {48, 18, 54, 0} };

void X(codelet_hc2cf_10) (planner *p) {
     X(khc2c_register) (p, hc2cf_10, &desc, HC2C_VIA_RDFT);
}
#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_hc2c.native -compact -variables 4 -pipeline-latency 4 -n 10 -dit -name hc2cf_10 -include hc2cf.h */

/*
 * This function contains 102 FP additions, 60 FP multiplications,
 * (or, 72 additions, 30 multiplications, 30 fused multiply/add),
 * 45 stack variables, 4 constants, and 40 memory accesses
 */
#include "hc2cf.h"

static void hc2cf_10(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 18); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 18, MAKE_VOLATILE_STRIDE(40, rs)) {
	       E T7, T1O, TT, T1C, TF, TQ, TR, T1r, T1s, T1L, TX, TY, TZ, T16, T19;
	       E T1y, Ti, Tt, Tu, T1o, T1p, T1M, TU, TV, TW, T1d, T1g, T1x;
	       {
		    E T1, T1B, T6, T1A;
		    T1 = Rp[0];
		    T1B = Rm[0];
		    {
			 E T3, T5, T2, T4;
			 T3 = Ip[WS(rs, 2)];
			 T5 = Im[WS(rs, 2)];
			 T2 = W[8];
			 T4 = W[9];
			 T6 = FMA(T2, T3, T4 * T5);
			 T1A = FNMS(T4, T3, T2 * T5);
		    }
		    T7 = T1 - T6;
		    T1O = T1B - T1A;
		    TT = T1 + T6;
		    T1C = T1A + T1B;
	       }
	       {
		    E Tz, T14, TP, T18, TE, T15, TK, T17;
		    {
			 E Tw, Ty, Tv, Tx;
			 Tw = Rp[WS(rs, 2)];
			 Ty = Rm[WS(rs, 2)];
			 Tv = W[6];
			 Tx = W[7];
			 Tz = FMA(Tv, Tw, Tx * Ty);
			 T14 = FNMS(Tx, Tw, Tv * Ty);
		    }
		    {
			 E TM, TO, TL, TN;
			 TM = Ip[0];
			 TO = Im[0];
			 TL = W[0];
			 TN = W[1];
			 TP = FMA(TL, TM, TN * TO);
			 T18 = FNMS(TN, TM, TL * TO);
		    }
		    {
			 E TB, TD, TA, TC;
			 TB = Ip[WS(rs, 4)];
			 TD = Im[WS(rs, 4)];
			 TA = W[16];
			 TC = W[17];
			 TE = FMA(TA, TB, TC * TD);
			 T15 = FNMS(TC, TB, TA * TD);
		    }
		    {
			 E TH, TJ, TG, TI;
			 TH = Rp[WS(rs, 3)];
			 TJ = Rm[WS(rs, 3)];
			 TG = W[10];
			 TI = W[11];
			 TK = FMA(TG, TH, TI * TJ);
			 T17 = FNMS(TI, TH, TG * TJ);
		    }
		    TF = Tz - TE;
		    TQ = TK - TP;
		    TR = TF + TQ;
		    T1r = T14 - T15;
		    T1s = T18 - T17;
		    T1L = T1s - T1r;
		    TX = Tz + TE;
		    TY = TK + TP;
		    TZ = TX + TY;
		    T16 = T14 + T15;
		    T19 = T17 + T18;
		    T1y = T16 + T19;
	       }
	       {
		    E Tc, T1b, Ts, T1f, Th, T1c, Tn, T1e;
		    {
			 E T9, Tb, T8, Ta;
			 T9 = Rp[WS(rs, 1)];
			 Tb = Rm[WS(rs, 1)];
			 T8 = W[2];
			 Ta = W[3];
			 Tc = FMA(T8, T9, Ta * Tb);
			 T1b = FNMS(Ta, T9, T8 * Tb);
		    }
		    {
			 E Tp, Tr, To, Tq;
			 Tp = Ip[WS(rs, 1)];
			 Tr = Im[WS(rs, 1)];
			 To = W[4];
			 Tq = W[5];
			 Ts = FMA(To, Tp, Tq * Tr);
			 T1f = FNMS(Tq, Tp, To * Tr);
		    }
		    {
			 E Te, Tg, Td, Tf;
			 Te = Ip[WS(rs, 3)];
			 Tg = Im[WS(rs, 3)];
			 Td = W[12];
			 Tf = W[13];
			 Th = FMA(Td, Te, Tf * Tg);
			 T1c = FNMS(Tf, Te, Td * Tg);
		    }
		    {
			 E Tk, Tm, Tj, Tl;
			 Tk = Rp[WS(rs, 4)];
			 Tm = Rm[WS(rs, 4)];
			 Tj = W[14];
			 Tl = W[15];
			 Tn = FMA(Tj, Tk, Tl * Tm);
			 T1e = FNMS(Tl, Tk, Tj * Tm);
		    }
		    Ti = Tc - Th;
		    Tt = Tn - Ts;
		    Tu = Ti + Tt;
		    T1o = T1b - T1c;
		    T1p = T1e - T1f;
		    T1M = T1o + T1p;
		    TU = Tc + Th;
		    TV = Tn + Ts;
		    TW = TU + TV;
		    T1d = T1b + T1c;
		    T1g = T1e + T1f;
		    T1x = T1d + T1g;
	       }
	       {
		    E T1l, TS, T1m, T1u, T1w, T1q, T1t, T1v, T1n;
		    T1l = KP559016994 * (Tu - TR);
		    TS = Tu + TR;
		    T1m = FNMS(KP250000000, TS, T7);
		    T1q = T1o - T1p;
		    T1t = T1r + T1s;
		    T1u = FMA(KP951056516, T1q, KP587785252 * T1t);
		    T1w = FNMS(KP587785252, T1q, KP951056516 * T1t);
		    Rm[WS(rs, 4)] = T7 + TS;
		    T1v = T1m - T1l;
		    Rm[WS(rs, 2)] = T1v - T1w;
		    Rp[WS(rs, 3)] = T1v + T1w;
		    T1n = T1l + T1m;
		    Rm[0] = T1n - T1u;
		    Rp[WS(rs, 1)] = T1n + T1u;
	       }
	       {
		    E T1S, T1N, T1T, T1R, T1V, T1P, T1Q, T1W, T1U;
		    T1S = KP559016994 * (T1M + T1L);
		    T1N = T1L - T1M;
		    T1T = FMA(KP250000000, T1N, T1O);
		    T1P = TQ - TF;
		    T1Q = Ti - Tt;
		    T1R = FNMS(KP951056516, T1Q, KP587785252 * T1P);
		    T1V = FMA(KP587785252, T1Q, KP951056516 * T1P);
		    Im[WS(rs, 4)] = T1N - T1O;
		    T1W = T1T - T1S;
		    Im[WS(rs, 2)] = T1V - T1W;
		    Ip[WS(rs, 3)] = T1V + T1W;
		    T1U = T1S + T1T;
		    Im[0] = T1R - T1U;
		    Ip[WS(rs, 1)] = T1R + T1U;
	       }
	       {
		    E T12, T10, T11, T1i, T1k, T1a, T1h, T1j, T13;
		    T12 = KP559016994 * (TW - TZ);
		    T10 = TW + TZ;
		    T11 = FNMS(KP250000000, T10, TT);
		    T1a = T16 - T19;
		    T1h = T1d - T1g;
		    T1i = FNMS(KP587785252, T1h, KP951056516 * T1a);
		    T1k = FMA(KP951056516, T1h, KP587785252 * T1a);
		    Rp[0] = TT + T10;
		    T1j = T12 + T11;
		    Rp[WS(rs, 4)] = T1j - T1k;
		    Rm[WS(rs, 3)] = T1j + T1k;
		    T13 = T11 - T12;
		    Rp[WS(rs, 2)] = T13 - T1i;
		    Rm[WS(rs, 1)] = T13 + T1i;
	       }
	       {
		    E T1H, T1z, T1G, T1F, T1J, T1D, T1E, T1K, T1I;
		    T1H = KP559016994 * (T1x - T1y);
		    T1z = T1x + T1y;
		    T1G = FNMS(KP250000000, T1z, T1C);
		    T1D = TX - TY;
		    T1E = TU - TV;
		    T1F = FNMS(KP587785252, T1E, KP951056516 * T1D);
		    T1J = FMA(KP951056516, T1E, KP587785252 * T1D);
		    Ip[0] = T1z + T1C;
		    T1K = T1H + T1G;
		    Im[WS(rs, 3)] = T1J - T1K;
		    Ip[WS(rs, 4)] = T1J + T1K;
		    T1I = T1G - T1H;
		    Im[WS(rs, 1)] = T1F - T1I;
		    Ip[WS(rs, 2)] = T1F + T1I;
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 10},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 10, "hc2cf_10", twinstr, &GENUS, {72, 30, 30, 0} };

void X(codelet_hc2cf_10) (planner *p) {
     X(khc2c_register) (p, hc2cf_10, &desc, HC2C_VIA_RDFT);
}
#endif				/* HAVE_FMA */
