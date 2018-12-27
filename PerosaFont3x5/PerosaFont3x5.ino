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

#include <Arduboy2.h>
#include "PerosaFont3x5.h"

Arduboy2Base arduboy;
PerosaFont3x5 font3x5;

void setup()
{
	arduboy.begin();
}

void loop()
{
	if (!arduboy.nextFrame())
		return;

	arduboy.clear();
	
	font3x5.setCursor(12, 12);
	font3x5.println(F("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	font3x5.println(F("0123456789"));
	font3x5.println(F("!\"#$%&'()*+,-./"));
	font3x5.println(F(":;<=>?@"));
	font3x5.println(F("[\\]^_`"));
	font3x5.println(F("{|}~"));
	
	arduboy.display();
}