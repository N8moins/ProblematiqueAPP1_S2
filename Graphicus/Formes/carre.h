/***
 * Fichier:  rectangle.h
 * Auteurs: Nathan Lessard
 * Date: 09 janvier 2024
 * Description: Definition de la classe Rectangle selon 
 * les specifications de Graphicus. 
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle
{
    public:
        Carre(int x = 0, int y = 0, int cote);
        ~Carre();
    protected:
        int cote
}

#endif