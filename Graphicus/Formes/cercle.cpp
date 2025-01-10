

#include "cercle.h"

Cercle::Cercle(int x, int y, int rayon) : Forme(x, y), rayon(rayon)
{
    ancrage.x = x;
    ancrage.y = y;
    this->rayon = rayon;
}

Cercle::~Cercle()
{
}

double Cercle::aire()
{
    return 3.14159 * rayon * rayon;
}