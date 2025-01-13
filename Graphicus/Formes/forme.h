/********
 * Fichier: forme.h
 * Auteurs: C.-A. Brunet
 * Date: 13 juin 2024 (creation)
 * Description: Declaration des classes de formes geometriques. La
 *    classe Forme ne doit pas etre modifiee. Ce fichier fait partie de
 *    la distribution de Graphicus.
 ********/

#ifndef FORME_H
#define FORME_H

#include <iostream>
#include "../coordonnee.h"

using namespace std;

class Forme
{
public:
  Forme(int x = 0, int y = 0);
  virtual ~Forme();
  void translater(int deltaX, int deltaY);
  virtual Coordonnee getAncrage() = 0;
  virtual void setAncrage(Coordonnee c) = 0;
  virtual double aire() = 0;
  virtual void afficher(ostream &s) = 0;

protected:
  Coordonnee ancrage;
};

#endif
