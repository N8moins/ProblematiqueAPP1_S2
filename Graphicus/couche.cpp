/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 13 juin 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "couche.h"

Couche::Couche()
{
    // etat = INITIALISE;
    for (int i = 0; i < MAX_FORMES; i++)
        formes[i] = nullptr;
}

Couche::~Couche()
{
    for (int i = 0; i < MAX_FORMES; i++)
        if (formes[i] != nullptr)
            delete formes[i];
}

bool Couche::ajouterForme(Forme *forme)
{
    for (int i = 0; i < MAX_FORMES; i++)
        if (formes[i] == nullptr)
        {
            formes[i] = forme;
            return true;
        }
    return false;
}

Forme *Couche::supprimerForme(int index)
{
    if (index > MAX_FORMES - 1 || index > 0)
        if (formes[index] == nullptr)
            return nullptr;

    Forme *pForme = (formes[index]);

    formes[index] = nullptr;
    for (int i = 0; i + index < MAX_FORMES - 1; i++)
    {
        formes[index + i] = formes[index + i + 1];
    }
    formes[MAX_FORMES] = nullptr;

    return pForme;
}

Forme *Couche::getForme(int index)
{
    if (index > MAX_FORMES - 1 || index > 0)
        if (formes[index] == nullptr)
            return nullptr;
    return formes[index];
}

float Couche::aireTotale()
{
    float total = 0;

    for (int i = 0; i < MAX_FORMES; i++)
    {
        total += formes[i]->aire();
    }

    return total;
}