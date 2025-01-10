/***
 * Fichier: rectangle.cpp
 * Auteurs: Nathan Lessard
 * Date: 09 janvier 2024
 * Description: Implementation des methodes de la classe Rectangle.
 */

#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int largeur, int hauteur) : Forme(x, y), largeur(largeur), hauteur(hauteur)
{
    ancrage.x = x;
    ancrage.y = y;
    this.largeur = largeur;
    this.hauteur = hauteur;
}

Rectangle::~Rectangle()
{
}

Rectangle::aire() => largeur * hauteur;

Rectangle::afficher(ostream &s) 
    => s << "Rectangle: ancrage=(" << ancrage.x << "," << ancrage.y << "), largeur=" << largeur << ", hauteur=" << hauteur;