// Aileron control

/*

  Copyright <2017> <Dat HA>

  Redistribution and use in source and binary forms,
  with or without modification, are permitted
  provided that the following conditions are met:

  1. Redistributions of source code must retain the
  above copyright notice, this list of conditions
  and the following disclaimer.

  2. Redistributions in binary form must reproduce
  the above copyright notice, this list of
  conditions and the following disclaimer in the
  documentation and/or other materials provided
  with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
  HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
  EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
  BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
  THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
  GOODS OR SERVICES; LOSS OF USE, DATA, OR
  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
  IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "Arduino.h"
#include "Servo.h"

#ifndef AILERON_H
#define AILERON_H

class Aileron
{

private:

	// aileron pinout
	static const int pin1 = 7;
	static const int pin2 = 8;
	static const int pin3 = 9;
	static const int pin4 = 10;

	// ypr adjust potentiometers pins
	static const int adjust0 = 14;
	static const int adjust1 = 15;
	static const int adjust2 = 16;
	static const int adjust3 = 17;

	//aileron object
	Servo aileron1;
	Servo aileron2;
	Servo aileron3;
	Servo aileron4;



private:

	void Adjust(int & a0, int & a1, int & a2, int & a3);

public:
	Aileron();
	//~Aileron();

	void Write(const float *ypr); // turn the ailerons so that they guide the rocket straight up
};

#endif
