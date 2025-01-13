/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 13 juin 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "canevas.h"

Canevas::Canevas()
{
}

Canevas::~Canevas()
{
}

bool Canevas::ajouterCouche()
{
   try
   {
      Couche *tmp = new Couche();

      bool isActive = true;

      for (Couche c : this->couches)
      {
         if (c.getEtat() == Couche::Etat::actif)
            isActive = false;
      }

      if (isActive)
         tmp->changerEtat(Couche::Etat::actif);

      couches->ajouter(tmp);

      return true;
   }
   catch (const std::exception &e)
   {
      return false;
   }
}

bool Canevas::retirerCouche(int index)
{
   if (index < 0 || index >= couches->Count())
      return false;

   if (couches->IsEmpty())
       return false;

   Couche* c = couches[index];

   c->reinitialiser();
   delete c;

   return true;
}

bool Canevas::reinitialiser()
{
   try {
       for (Couche* c : couches) {
           c->reinitialiser();
       }

       couches->Clear();
       return true;
   } catch (const std::exception &e)
   {
       return false;
   }
}

bool Canevas::reinitialiserCouche(int index)
{
   if (index >= couches->Count() || index < 0)
       return false;
   if (couches.Get(index) == active)
       return false;

   couches->Get(index)->reinitialiser();

   return true;
}

bool Canevas::activerCouche(int index)
{
    if (index >= couches->Count() || index < 0)
        return false;
    if (couches.Get(index) == active)
        return false;

    couches->Get(index)->changerEtat(Couche::Etat:actif);

    active->changerEtat(Couche::Etat::desactive);
    active = couches->Get(index);
    return true;
}

bool Canevas::desactiverCouche(int index)
{
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   return true;
}

bool Canevas::retirerForme(int index)
{
   return true;
}

double Canevas::aire()
{
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream &s)
{
}
