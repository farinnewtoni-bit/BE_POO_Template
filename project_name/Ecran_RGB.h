/*********************************************************************
 * @file  Ecran_RGB.h
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier header de l'Ecran_RGB
 *********************************************************************/
#ifndef ECRAN_RGB_H_
#define ECRAN_RGB_H_

#include "Actionneur.h"

/**
  * @class Ecran_RGB
  * @brief Classe Ecran_RGB 
*/    
class Ecran_RGB : public Actionneur
{
  public :   

      /**
     * @fn Ecran_RGB();
     * @brief Constructeur par defaut
    */    
    Ecran_RGB();
    /**
     * @fn Ecran_RGB();
     * @brief Destructeur
    */    
    ~Ecran_RGB();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void init(void);

};
#endif