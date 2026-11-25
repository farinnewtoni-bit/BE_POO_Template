#include "Application.h"
#include "Composant.h"


Application myApplication;
Composant mesComposants;

void setup() 
{
  // put your setup code here, to run once:
  mesComposants.init();
  myApplication.init();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  myApplication.run();
}
