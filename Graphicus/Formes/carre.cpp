#include "carre.h"

Carre::Carre(int x, int y, int cote)
{
    ancrage.x = x;
    ancrage.y = y;
    this.cote = cote;
}

Carre::~Carre()
{
}

double Carre::aire()
{
    return cote * cote;
}