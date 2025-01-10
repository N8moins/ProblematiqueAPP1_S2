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
#include "forme.h"

using namespace std;

class Rectangle : public Forme
{
    public:
        Rectangle(int x = 0, int y = 0, int largeur, int hauteur);
        ~Rectangle();
    protected:
        int largeur;
        int hauteur;
}

#endif