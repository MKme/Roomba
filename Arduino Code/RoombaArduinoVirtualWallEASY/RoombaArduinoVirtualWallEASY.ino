/*
  A trivial Arduino sketch to mimic iRobot Virtual Wall for Roomba
Youtube : http://www.youtube.com/mkmeorg Website, Forum and store are at http://mkme.org
Parts needed
Arduino NANO https://amzn.to/2EaMzZI
IR LED https://amzn.to/2QOqUgE
Resistor https://amzn.to/2EhIbsf
  ----------------------------------------------------------------
  Based on information found at:
  http://sites.google.com/site/irobotcreate2/createanirbeacon
  
  Uses "A Multi-Protocol Infrared Remote Library for the Arduino":
  http://www.arcfn.com/2009/08/multi-protocol-infrared-remote-library.html
*/

#include <IRremote.h>

// Initiate IRremote on Pin 3.
IRsend irsend;

void setup()
{
  irsend.enableIROut(38);//Lib function
}

void loop()
{
  //These values should work for pre i models of roomba
  irsend.mark(1000);
  irsend.space(1000);
  
  //For "i" models (i3, i7 etc) use the following
  //irsend.mark(500);
  //irsend.space(7500);
  
}
