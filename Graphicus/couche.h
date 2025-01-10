/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 13 juin 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe gere un tableau de formes en accord avec
 *    les specifications de Graphicus. Ce fichier fait partie de
 *    la distribution de Graphicus.
 ********/

#ifndef COUCHE_H
#define COUCHE_H

#include "forme.h"
#include "coordonnee.h"

const int MAX_FORMES = 5;

// A completer

class Couche
{

  Coordonnee ancrage;

public:
  Couche();
  ~Couche();
  bool ajouterForme(Forme *forme);
  Forme* supprimerForme(int index);
  Forme*  getForme(int index);
  float aireTotale();
  void translater(int deltaX, int deltaY);
  void setAncrage(Coordonnee c);
  Coordonnee getAncrage();

private:
  Forme *formes[MAX_FORMES];
};

#endif

