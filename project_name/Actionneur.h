/*********************************************************************
 * @file  Actionneur.h
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier header de l'Actionneur
 *********************************************************************/
#ifndef ACTIONNEUR_H_
#define ACTIONNEUR_H_

#include "Composant.h"

/**
  * @class Actionneur
  * @brief Classe Actionneur 
*/    
class Actionneur : public Composant
{
  public :   
    virtual void init(void)=0;;

};
#endif