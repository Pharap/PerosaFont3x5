// Copyright (c) 2018, Filmote
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// Heavily modified by Pharap

#include "PerosaFont3x5.h"

#include <Sprites.h>

constexpr char uppercaseFirst = 'A';
constexpr char uppercaseLast = 'Z';
constexpr uint8_t uppercaseIndex = 0;
constexpr uint8_t uppercaseCount = ((uppercaseLast - uppercaseFirst) + 1);

constexpr char digitsFirst = '0';
constexpr char digitsLast = '9';
constexpr uint8_t digitsIndex = (uppercaseIndex + uppercaseCount);
constexpr uint8_t digitsCount = ((digitsLast - digitsFirst) + 1);

constexpr char punctuationGroupAFirst = '!';
constexpr char punctuationGroupALast = '/';
constexpr uint8_t punctuationGroupAIndex = (digitsIndex + digitsCount);
constexpr uint8_t punctuationGroupACount = ((punctuationGroupALast - punctuationGroupAFirst) + 1);

constexpr char punctuationGroupBFirst = ':';
constexpr char punctuationGroupBLast = '@';
constexpr uint8_t punctuationGroupBIndex = (punctuationGroupAIndex + punctuationGroupACount);
constexpr uint8_t punctuationGroupBCount = ((punctuationGroupBLast - punctuationGroupBFirst) + 1);

constexpr char punctuationGroupCFirst = '[';
constexpr char punctuationGroupCLast = '`';
constexpr uint8_t punctuationGroupCIndex = (punctuationGroupBIndex + punctuationGroupBCount);
constexpr uint8_t punctuationGroupCCount = ((punctuationGroupCLast - punctuationGroupCFirst) + 1);

constexpr char punctuationGroupDFirst = '{';
constexpr char punctuationGroupDLast = '~';
constexpr uint8_t punctuationGroupDIndex = (punctuationGroupCIndex + punctuationGroupCCount);
constexpr uint8_t punctuationGroupDCount = ((punctuationGroupDLast - punctuationGroupDFirst) + 1);

int8_t PerosaFont3x5::getCharIndex(char c)
{
	if((c >= uppercaseFirst) && (c <= uppercaseLast))
		return static_cast<int8_t>(uppercaseIndex + (c - uppercaseFirst));

	if((c >= digitsFirst) && (c <= digitsLast))
		return static_cast<int8_t>(digitsIndex + (c - digitsFirst));

	if((c >= punctuationGroupAFirst) && (c <= punctuationGroupALast))
		return static_cast<int8_t>(punctuationGroupAIndex + (c - punctuationGroupAFirst));

	if((c >= punctuationGroupBFirst) && (c <= punctuationGroupBLast))
		return static_cast<int8_t>(punctuationGroupBIndex + (c - punctuationGroupBFirst));

	if((c >= punctuationGroupCFirst) && (c <= punctuationGroupCLast))
		return static_cast<int8_t>(punctuationGroupCIndex + (c - punctuationGroupCFirst));

	if((c >= punctuationGroupDFirst) && (c <= punctuationGroupDLast))
		return static_cast<int8_t>(punctuationGroupDIndex + (c - punctuationGroupDFirst));

	return -1;
}

const uint8_t PROGMEM fontImages[] =
{
	// Width, Height
	3, 5,


	/* --- Uppercase --- */

	// #065 Letter 'A' (U+0041 Latin Capital Letter A)
	0x1E,  // ░░░▓▓▓▓░
	0x09,  // ░░░░▓░░▓
	0x1E,  // ░░░▓▓▓▓░

	// #066 Letter 'B' (U+0042 Latin Capital Letter B)
	0x1F,  // ░░░▓▓▓▓▓
	0x15,  // ░░░▓░▓░▓
	0x0A,  // ░░░░▓░▓░

	// #067 Letter 'C' (U+0043 Latin Capital Letter C)
	0x0E,  // ░░░░▓▓▓░
	0x11,  // ░░░▓░░░▓
	0x0A,  // ░░░░▓░▓░

	// #068 Letter 'D' (U+0044 Latin Capital Letter D)
	0x1F,  // ░░░▓▓▓▓▓
	0x11,  // ░░░▓░░░▓
	0x0E,  // ░░░░▓▓▓░

	// #069 Letter 'E' (U+0045 Latin Capital Letter E)
	0x1F,  // ░░░▓▓▓▓▓
	0x15,  // ░░░▓░▓░▓
	0x11,  // ░░░▓░░░▓

	// #070 Letter 'F' (U+0046 Latin Capital Letter F)
	0x1F,  // ░░░▓▓▓▓▓
	0x05,  // ░░░░░▓░▓
	0x01,  // ░░░░░░░▓

	// #071 Letter 'G' (U+0047 Latin Capital Letter G)
	0x1F,  // ░░░▓▓▓▓▓
	0x11,  // ░░░▓░░░▓
	0x19,  // ░░░▓▓░░▓

	// #072 Letter 'H' (U+0048 Latin Capital Letter H)
	0x1F,  // ░░░▓▓▓▓▓
	0x04,  // ░░░░░▓░░
	0x1F,  // ░░░▓▓▓▓▓

	// #073 Letter 'I' (U+0049 Latin Capital Letter I)
	0x11,  // ░░░▓░░░▓
	0x1F,  // ░░░▓▓▓▓▓
	0x11,  // ░░░▓░░░▓

	// #074 Letter 'J' (U+004A Latin Capital Letter J)
	0x18,  // ░░░▓▓░░░
	0x10,  // ░░░▓░░░░
	0x1F,  // ░░░▓▓▓▓▓

	// #075 Letter 'K' (U+004B Latin Capital Letter K)
	0x1F,  // ░░░▓▓▓▓▓
	0x04,  // ░░░░░▓░░
	0x1B,  // ░░░▓▓░▓▓

	// #076 Letter 'L' (U+004C Latin Capital Letter L)
	0x1F,  // ░░░▓▓▓▓▓
	0x10,  // ░░░▓░░░░
	0x10,  // ░░░▓░░░░

	// #077 Letter 'M' (U+004D Latin Capital Letter M)
	0x1F,  // ░░░▓▓▓▓▓
	0x06,  // ░░░░░▓▓░
	0x1F,  // ░░░▓▓▓▓▓

	// #078 Letter 'N' (U+004E Latin Capital Letter N)
	0x1F,  // ░░░▓▓▓▓▓
	0x01,  // ░░░░░░░▓
	0x1F,  // ░░░▓▓▓▓▓

	// #079 Letter 'O' (U+004F Latin Capital Letter O)
	0x1F,  // ░░░▓▓▓▓▓
	0x11,  // ░░░▓░░░▓
	0x1F,  // ░░░▓▓▓▓▓

	// #080 Letter 'P' (U+0050 Latin Capital Letter P)
	0x1F,  // ░░░▓▓▓▓▓
	0x09,  // ░░░░▓░░▓
	0x06,  // ░░░░░▓▓░

	// #081 Letter 'Q' (U+0051 Latin Capital Letter Q)
	0x0F,  // ░░░░▓▓▓▓
	0x09,  // ░░░░▓░░▓
	0x17,  // ░░░▓░▓▓▓

	// #082 Letter 'R' (U+0052 Latin Capital Letter R)
	0x1F,  // ░░░▓▓▓▓▓
	0x09,  // ░░░░▓░░▓
	0x16,  // ░░░▓░▓▓░

	// #083 Letter 'S' (U+0053 Latin Capital Letter S)
	0x17,  // ░░░▓░▓▓▓
	0x15,  // ░░░▓░▓░▓
	0x1D,  // ░░░▓▓▓░▓

	// #084 Letter 'T' (U+0054 Latin Capital Letter T)
	0x01,  // ░░░░░░░▓
	0x1F,  // ░░░▓▓▓▓▓
	0x01,  // ░░░░░░░▓

	// #085 Letter 'U' (U+0055 Latin Capital Letter U)
	0x1F,  // ░░░▓▓▓▓▓
	0x10,  // ░░░▓░░░░
	0x1F,  // ░░░▓▓▓▓▓

	// #086 Letter 'V' (U+0056 Latin Capital Letter V)
	0x0F,  // ░░░░▓▓▓▓
	0x10,  // ░░░▓░░░░
	0x0F,  // ░░░░▓▓▓▓

	// #087 Letter 'W' (U+0057 Latin Capital Letter W)
	0x1F,  // ░░░▓▓▓▓▓
	0x0C,  // ░░░░▓▓░░
	0x1F,  // ░░░▓▓▓▓▓

	// #088 Letter 'X' (U+0058 Latin Capital Letter X)
	0x1B,  // ░░░▓▓░▓▓
	0x04,  // ░░░░░▓░░
	0x1B,  // ░░░▓▓░▓▓

	// #089 Letter 'Y' (U+0059 Latin Capital Letter Y)
	0x07,  // ░░░░░▓▓▓
	0x18,  // ░░░▓▓░░░
	0x07,  // ░░░░░▓▓▓

	// #090 Letter 'Z' (U+005A Latin Capital Letter Z)
	0x19,  // ░░░▓▓░░▓
	0x15,  // ░░░▓░▓░▓
	0x13,  // ░░░▓░░▓▓


	/* --- Digits --- */

	// #048 Number '0' (U+0030 Digit Zero)
	0x1F,  // ░░░▓▓▓▓▓
	0x11,  // ░░░▓░░░▓
	0x1F,  // ░░░▓▓▓▓▓

	// #049 Number '1' (U+0031 Digit One)
	0x12,  // ░░░▓░░▓░
	0x1F,  // ░░░▓▓▓▓▓
	0x10,  // ░░░▓░░░░

	// #050 Number '2' (U+0032 Digit Two)
	0x19,  // ░░░▓▓░░▓
	0x15,  // ░░░▓░▓░▓
	0x12,  // ░░░▓░░▓░

	// #051 Number '3' (U+0033 Digit Three)
	0x15,  // ░░░▓░▓░▓
	0x15,  // ░░░▓░▓░▓
	0x1F,  // ░░░▓▓▓▓▓

	// #052 Number '4' (U+0034 Digit Four)
	0x07,  // ░░░░░▓▓▓
	0x04,  // ░░░░░▓░░
	0x1F,  // ░░░▓▓▓▓▓

	// #053 Number '5' (U+0035 Digit Five)
	0x17,  // ░░░▓░▓▓▓
	0x15,  // ░░░▓░▓░▓
	0x0D,  // ░░░░▓▓░▓

	// #054 Number '6' (U+0036 Digit Six)
	0x1F,  // ░░░▓▓▓▓▓
	0x15,  // ░░░▓░▓░▓
	0x1D,  // ░░░▓▓▓░▓

	// #055 Number '7' (U+0037 Digit Seven)
	0x03,  // ░░░░░░▓▓
	0x01,  // ░░░░░░░▓
	0x1F,  // ░░░▓▓▓▓▓

	// #056 Number '8' (U+0038 Digit Eight)
	0x1F,  // ░░░▓▓▓▓▓
	0x15,  // ░░░▓░▓░▓
	0x1F,  // ░░░▓▓▓▓▓

	// #057 Number '9' (U+0039 Digit Nine)
	0x07,  // ░░░░░▓▓▓
	0x05,  // ░░░░░▓░▓
	0x1F,  // ░░░▓▓▓▓▓


	/* --- Punctuation Group A --- */

	// #033 Symbol '!' (U+0021 Exclamation Mark)
	0x00,  // ░░░░░░░░
	0x17,  // ░░░▓░▓▓▓
	0x00,  // ░░░░░░░░

	// #034 Symbol '"' (U+0022 Quotation Mark)
	0x03,  // ░░░░░░▓▓
	0x00,  // ░░░░░░░░
	0x03,  // ░░░░░░▓▓

	// #035 Symbol '#' (U+0023 Number Sign) - bank
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░

	// #036 Symbol '$' (U+0024 Dollar Sign) - blank
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░

	// #037 Symbol '%' (U+0025 Percent Sign)
	0x19,  // ░░░▓▓░░▓
	0x04,  // ░░░░░▓░░
	0x13,  // ░░░▓░░▓▓

	// #038 Symbol '&' (U+0026 Ampersand) - blank
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░

	// #039 Symbol ''' (U+0027 Apostrophe)
	0x00,  // ░░░░░░░░
	0x03,  // ░░░░░░▓▓
	0x00,  // ░░░░░░░░

	// #040 Symbol '(' (U+0028 Left Parenthesis)
	0x00,  // ░░░░░░░░
	0x0E,  // ░░░░▓▓▓░
	0x11,  // ░░░▓░░░▓

	// #041 Symbol ')' (U+0029 Right Parenthesis)
	0x11,  // ░░░▓░░░▓
	0x0E,  // ░░░░▓▓▓░
	0x00,  // ░░░░░░░░

	// #042 Symbol '*' (U+002A Asterisk)
	0x0A,  // ░░░░▓░▓░
	0x04,  // ░░░░░▓░░
	0x0A,  // ░░░░▓░▓░

	// #043 Symbol '+' (U+002B Plus Sign)
	0x04,  // ░░░░░▓░░
	0x0E,  // ░░░░▓▓▓░
	0x04,  // ░░░░░▓░░

	// #044 Symbol ',' (U+002C Comma)
	0x10,  // ░░░▓░░░░
	0x08,  // ░░░░▓░░░
	0x00,  // ░░░░░░░░

	// #045 Symbol '-' (U+002D Hyphen-Minus)
	0x04,  // ░░░░░▓░░
	0x04,  // ░░░░░▓░░
	0x04,  // ░░░░░▓░░

	// #046 Symbol '.' (U+002E Full Stop)
	0x00,  // ░░░░░░░░
	0x10,  // ░░░▓░░░░
	0x00,  // ░░░░░░░░

	// #047 Symbol '/' (U+002F Solidus)
	0x18,  // ░░░▓▓░░░
	0x04,  // ░░░░░▓░░
	0x03,  // ░░░░░░▓▓


/* --- Punctuation Group B --- */

	// #058 Symbol ':' (U+003A Colon)
	0x00,  // ░░░░░░░░
	0x1B,  // ░░░▓▓░▓▓
	0x00,  // ░░░░░░░░

	// #059 Symbol ';' (U+003B Semicolon)
	0x10,  // ░░░▓░░░░
	0x0B,  // ░░░░▓░▓▓
	0x00,  // ░░░░░░░░

	// #060 Symbol '<' (U+003C Less-Than Sign)
	0x04,  // ░░░░░▓░░
	0x0A,  // ░░░░▓░▓░
	0x11,  // ░░░▓░░░▓

	// #061 Symbol '=' (U+003D Equals Sign)
	0x0A,  // ░░░░▓░▓░
	0x0A,  // ░░░░▓░▓░
	0x0A,  // ░░░░▓░▓░

	// #062 Symbol '>' (U+003E Greater-Than Sign)
	0x11,  // ░░░▓░░░▓
	0x0A,  // ░░░░▓░▓░
	0x04,  // ░░░░░▓░░

	// #063 Symbol '?' (U+003F Question Mark)
	0x01,  // ░░░░░░░▓
	0x15,  // ░░░▓░▓░▓
	0x03,  // ░░░░░░▓▓

	// #064 Symbol '@' (U+0040 Commercial At) - blank
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░


/* --- Punctuation Group C --- */

	// #091 Symbol '[' (U+005B Left Square Bracket)
	0x00,  // ░░░░░░░░
	0x1F,  // ░░░▓▓▓▓▓
	0x11,  // ░░░▓░░░▓

	// #092 Symbol '\' (U+005C Reverse Solidus)
	0x03,  // ░░░░░░▓▓
	0x04,  // ░░░░░▓░░
	0x18,  // ░░░▓▓░░░

	// #093 Symbol ']' (U+005D Right Square Bracket)
	0x11,  // ░░░▓░░░▓
	0x1F,  // ░░░▓▓▓▓▓
	0x00,  // ░░░░░░░░

	// #094 Symbol '^' (U+005E Circumflex Accent)
	0x02,  // ░░░░░░▓░
	0x01,  // ░░░░░░░▓
	0x02,  // ░░░░░░▓░

	// #095 Symbol '_' (U+005F Low Line)
	0x10,  // ░░░▓░░░░
	0x10,  // ░░░▓░░░░
	0x10,  // ░░░▓░░░░

	// #096 Symbol '`' (U+0060 Grave Accent)
	0x00,  // ░░░░░░░░
	0x01,  // ░░░░░░░▓
	0x02,  // ░░░░░░▓░


	/* --- Punctuation Group D --- */

	// #123 Symbol '{' (U+007B Left Curly Bracket)
	0x04,  // ░░░░░▓░░
	0x0E,  // ░░░░▓▓▓░
	0x11,  // ░░░▓░░░▓

	// #124 Symbol '|' (U+007C Vertical Line)
	0x00,  // ░░░░░░░░
	0x1F,  // ░░░▓▓▓▓▓
	0x00,  // ░░░░░░░░

	// #125 Symbol '}' (U+007D Right Curly Bracket)
	0x11,  // ░░░▓░░░▓
	0x0E,  // ░░░░▓▓▓░
	0x04,  // ░░░░░▓░░

	// #126 Symbol '~' (U+007E Tilde) - blank
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░
	0x00,  // ░░░░░░░░

};

size_t PerosaFont3x5::write(uint8_t c)
{
	if (c == '\n')
	{
		this->cursorX = this->baseX;
		this->cursorY += this->lineHeight;
	}
	else
	{
		this->printChar(c, this->cursorX, this->cursorY);
		this->cursorX += (charWidth + this->letterSpacing);
	}
	return 1;
}

void PerosaFont3x5::printChar(char c, int8_t x, int8_t y)
{
	int8_t index = getCharIndex(c);
	if (index >= 0)
	{
		if (this->textColour != 0)
			Sprites::drawSelfMasked(x, (y + 1), fontImages, index);
		else
			Sprites::drawErase(x, (y + 1), fontImages, index);
	}
}

void PerosaFont3x5::setCursor(int8_t x, int8_t y)
{
	this->baseX = x;
	this->cursorX = x;
	this->cursorY = y;
}

void PerosaFont3x5::setTextColour(uint8_t colour)
{
	this->textColour = colour;
}

void PerosaFont3x5::setHeight(uint8_t colour)
{
	this->lineHeight = colour;
}
