/*
  A trivial Arduino sketch to mimic iRobot Virtual Wall for Roomba
  ----------------------------------------------------------------
  Based on information found at:
  http://sites.google.com/site/irobotcreate2/createanirbeacon
  
  Uses "A Multi-Protocol Infrared Remote Library for the Arduino":
  http://www.arcfn.com/2009/08/multi-protocol-infrared-remote-library.html
*/

#include <IRremote.h>

// Instantiate IRremote on Pin 3.
IRsend irsend;

void setup()
{
  irsend.enableIROut(38);
}

void loop()
{
  irsend.mark(1000);
  irsend.space(1000);
}
