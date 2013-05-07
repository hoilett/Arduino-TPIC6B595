/*
  Seg7.h - A library to control the TPIC6B595 Serial to Parallel Shift Register
  Created by Derek Chafin, October 8, 2011
  Released into the public domain.
*/

#ifndef TPIC6B595_h
#define TPIC6B595_h

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class TPIC6B595
{
  public:
    TPIC6B595(int dataPin,int clockPin, int latchPin, int clearPin);
    void digitalWrite(int pin, int mode);
    
    void clear();
  private:
    int _dataPin;
    int _clockPin;
    int _latchPin;
    int _clearPin;  
    byte * _register_pins;
    byte _num_registers;
    void pulsePin(int pin, int active);    
};
#endif
