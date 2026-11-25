/*********************************************************************
 * @file  Ecran_RGB.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'Ecran_RGB
 *********************************************************************/

#include "Ecran_RGB.h"
#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

Ecran_RGB::Ecran_RGB()
{
  // Code
  ; 
}
  
Ecran_RGB::~Ecran_RGB()
{
  // blablabla
  ;
}  

void Ecran_RGB::init(void)
{
  lcd.begin(16, 2);
  lcd.setRGB(255, 0, 0);
  lcd.print("hello, world!");
    ;
}

