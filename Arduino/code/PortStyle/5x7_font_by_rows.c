int font_data[127][7] = {
	// Space
	// 0
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// !
	// 1
	{0x0, 0x4, 0x4, 0x4, 0x0, 0x4, 0x0},
	// "
	// 2
	{0x0, 0xa, 0xa, 0x0, 0x0, 0x0, 0x0},
	// #
	// 3
	{0x0, 0xa, 0x1f, 0xa, 0x1f, 0xa, 0x0},
	// $
	// 4
	{0x4, 0xe, 0x8, 0xe, 0x2, 0xe, 0x4},
	// %
	{0x0, 0x10, 0x2, 0x4, 0x8, 0x11, 0x0},
	// &amp;
	{0x0, 0x4, 0xa, 0xa, 0x14, 0x12, 0xd},
	// '
	{0x0, 0x4, 0x4, 0x0, 0x0, 0x0, 0x0},
	// (
	{0x0, 0x4, 0x8, 0x8, 0x8, 0x4, 0x0},
	// )
	{0x0, 0x4, 0x2, 0x2, 0x2, 0x4, 0x0},
	// *
	{0x0, 0xa, 0x4, 0xe, 0x4, 0xa, 0x0},
	// +
	{0x0, 0x0, 0x4, 0xe, 0x4, 0x0, 0x0},
	// ,
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x8},
	// -
	{0x0, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x0},
	// .
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0},
	// /
	{0x0, 0x1, 0x2, 0x4, 0x8, 0x10, 0x0},


	// 0
	{0x0, 0xe, 0xa, 0xa, 0xa, 0xe, 0x0},
	// 1
	{0x0, 0xc, 0x4, 0x4, 0x4, 0xe, 0x0},
	// 2
	{0x0, 0xc, 0x2, 0x4, 0x8, 0xe, 0x0},
	// 3
	{0x0, 0xc, 0x2, 0xe, 0x2, 0xc, 0x0},
	// 4
	{0x0, 0xa, 0xa, 0xe, 0x2, 0x2, 0x0},
	// 5
	{0x0, 0xe, 0x8, 0xc, 0x2, 0xc, 0x0},
	// 6
	{0x0, 0xe, 0x8, 0xe, 0xa, 0xe, 0x0},
	// 7
	{0x0, 0xe, 0x2, 0x2, 0x2, 0x2, 0x0},
	// 8
	{0x0, 0xe, 0xa, 0xe, 0xa, 0xe, 0x0},
	// 9
	{0x0, 0xe, 0xa, 0xe, 0x2, 0x2, 0x0},


	// :
	{0x0, 0x0, 0x4, 0x0, 0x4, 0x0, 0x0},
	// ;
	{0x0, 0x0, 0x0, 0x4, 0x0, 0x4, 0x8},
	// &lt;
	{0x0, 0x4, 0x8, 0x10, 0x8, 0x4, 0x0},
	// =
	{0x0, 0x0, 0xe, 0x0, 0xe, 0x0, 0x0},
	// &gt;
	{0x0, 0x10, 0x8, 0x4, 0x8, 0x10, 0x0},
	// ?
	{0x0, 0xc, 0x2, 0x2, 0x4, 0x0, 0x4},
	// @
	{0x0, 0xe, 0x11, 0x15, 0x15, 0x13, 0x8},

	// A
	{0x0, 0xe, 0x11, 0x1f, 0x11, 0x11, 0x0},
	// B
	{0x0, 0x1e, 0x11, 0x1e, 0x11, 0x1e, 0x0},
	// C
	0x0, 0xe, 0x11, 0x10, 0x11, 0xe, 0x0},
	// D
	{0x0, 0x1e, 0x11, 0x11, 0x11, 0x1e, 0x0},
	// E
	{0x0, 0x1f, 0x10, 0x1c, 0x10, 0x1f, 0x0},
	// F
	{0x0, 0x1f, 0x10, 0x1c, 0x10, 0x10, 0x0},
	// G
	{0x0, 0xf, 0x10, 0x13, 0x11, 0xf, 0x0},
	// H
	{0x0, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x0},
	// I
	{0x0, 0x1f, 0x4, 0x4, 0x4, 0x1f, 0x0},
	// J
	{0x0, 0xf, 0x2, 0x2, 0x12, 0x1c, 0x0},
	// K
	{0x0, 0x11, 0x12, 0x1c, 0x12, 0x11, 0x0},
	// L
	{0x0, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x0},
	// M
	{0x0, 0xa, 0x15, 0x15, 0x11, 0x11, 0x0},
	// N
	{0x0, 0x11, 0x19, 0x15, 0x13, 0x11, 0x0},
	// O
	{0x0, 0xe, 0x11, 0x11, 0x11, 0xe, 0x0},
	// P
	{0x0, 0x1e, 0x11, 0x1e, 0x10, 0x10, 0x0},
	// Q
	{0x0, 0xc, 0x12, 0x12, 0x12, 0xe, 0x3},
	// R
	{0x0, 0x1e, 0x11, 0x1e, 0x12, 0x11, 0x0},
	// S
	{0x0, 0xf, 0x10, 0xe, 0x1, 0x1e, 0x0},
	// T
	{0x0, 0x1f, 0x4, 0x4, 0x4, 0x4, 0x0},
	// U
	{0x0, 0x11, 0x11, 0x11, 0x11, 0xe, 0x0},
	// V
	{0x0, 0x11, 0x11, 0xa, 0xa, 0x4, 0x0},
	// W
	{0x0, 0x11, 0x11, 0x15, 0x15, 0xa, 0x0},
	// X
	{0x0, 0x11, 0xa, 0x4, 0xa, 0x11, 0x0},
	// Y
	{0x0, 0x11, 0x11, 0xa, 0x4, 0x4, 0x0},
	// Z
	{0x0, 0x1f, 0x1, 0xe, 0x10, 0x1f, 0x0},


	// {
	{0x0, 0xe, 0x8, 0x8, 0x8, 0xe, 0x0},
	// backslash
	{0x0, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0},
	// }
	{0x0, 0xe, 0x2, 0x2, 0x2, 0xe, 0x0},
	// ^
	{0x0, 0x4, 0xa, 0x11, 0x0, 0x0, 0x0},
	// _
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x1e, 0x0},
	// `
	{0x0, 0x8, 0x4, 0x0, 0x0, 0x0, 0x0},


	// a
	{0x0, 0x0, 0x0, 0xc, 0x14, 0x1c, 0x4},
	// b
	{0x0, 0x10, 0x10, 0x1c, 0x14, 0x1c, 0x0},
	// c
	{0x0, 0x0, 0x0, 0x1c, 0x10, 0x1c, 0x0},
	// d
	{0x0, 0x4, 0x4, 0x1c, 0x14, 0x1c, 0x0},
	// e
	{0x0, 0x0, 0x8, 0x14, 0x1c, 0x10, 0xc},
	// f
	{0x0, 0x0, 0xc, 0x10, 0x18, 0x10, 0x0},
	// g
	{0x0, 0x0, 0x1c, 0x14, 0x1c, 0x4, 0x18},
	// h
	{0x0, 0x10, 0x10, 0x18, 0x14, 0x14, 0x0},
	// i
	{0x0, 0x4, 0x0, 0x4, 0x4, 0x4, 0x0},
	// j
	{0x0, 0x4, 0x0, 0x4, 0x4, 0x14, 0x8},
	// k
	{0x0, 0x10, 0x14, 0x18, 0x14, 0x14, 0x0},
	// l
	{0x0, 0x4, 0x4, 0x4, 0x4, 0x4, 0x0},
	// m
	{0x0, 0x0, 0x0, 0x1e, 0x15, 0x15, 0x0},
	// n
	{0x0, 0x0, 0x0, 0x18, 0x14, 0x14, 0x0},
	// o
	{0x0, 0x0, 0x0, 0x1c, 0x14, 0x1c, 0x0},
	// p
	{0x0, 0x0, 0x0, 0x1c, 0x14, 0x1c, 0x10},
	// q
	{0x0, 0x0, 0x0, 0x1c, 0x14, 0x1c, 0x04},
	// r
	{0x0, 0x0, 0x0, 0x1c, 0x10, 0x10, 0x0},
	// s
	{0x0, 0x0, 0x0, 0xc, 0x8, 0x18, 0x0},
	// t
	{0x0, 0x0, 0x8, 0x1c, 0x8, 0xc, 0x0}, 
	// u
	{0x0, 0x0, 0x0, 0x14, 0x14, 0x1c, 0x0},
	// v
	{0x0, 0x0, 0x0, 0x14, 0x14, 0x8, 0x0},
	// w
	{0x0, 0x0, 0x0, 0x11, 0x15, 0xa, 0x0},
	// x
	{0x0, 0x0, 0x0, 0x14, 0x8, 0x14, 0x0},
	// y
	{0x0, 0x0, 0x0, 0x14, 0x1c, 0x4, 0x18},
	// z
	{0x0, 0x0, 0x0, 0x18, 0x8, 0xc, 0x0},


	// {
	{0x0, 0x6, 0x4, 0x8, 0x4, 0x6, 0x0},
	// |
	{0x0, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0x0},
	// }
	{0x0, 0xc, 0x4, 0x2, 0x4, 0xc, 0x0},
	// ~
	{0x0, 0x0, 0x6, 0x14, 0x0, 0x0, 0x0}


};
