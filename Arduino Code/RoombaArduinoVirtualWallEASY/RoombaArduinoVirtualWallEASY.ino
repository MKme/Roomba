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
  
  Uses https://github.com/Arduino-IRremote/Arduino-IRremote
*/

#include <IRremote.hpp>

void setup()
{
  IrSender.begin(3, false);
  IrSender.enableIROut(38);
}

void loop()
{
  //These values should work for pre i models of roomba
  IrSender.mark(1000);
  IrSender.space(1000);

  //For "i" models (i3, i7 etc) use the following
  //IrSender.mark(500);
  //IrSender.space(7500);
}
