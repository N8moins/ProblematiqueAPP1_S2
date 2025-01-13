/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 13 juin 2024 (creation)
 * Modifie par : Nathan Lessard et Gabriel Bruneau
 * Date : 13 janvier 2025
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"
#include "./Formes/Rectangle.h"
#include "./Formes/Carre.h"
#include "./Formes/Cercle.h"
#include "couche.h"

void Tests::tests_unitaires_formes()
{
   Forme* pCarre = new Carre(0, 0, 3);
   pCarre->afficher(std::cout);
   pCarre->translater(2, -1);
   pCarre->afficher(std::cout);
   pCarre->setAncrage({5, 5});
   pCarre->afficher(std::cout);
   delete pCarre;
   Forme* pCercle = new Cercle(2, 3, 5);
   pCercle->afficher(std::cout);
   delete pCercle;
   Forme* pRectangle = new Rectangle(0, 0, 3, 4);
   pRectangle->afficher(std::cout);
   delete pRectangle; 
}

void Tests::tests_unitaires_couche()
{
   Couche* couche = new Couche();
   couche->changerEtat(Couche::Etat::actif);
   Forme* pCarre = new Carre(0, 0, 3);
   couche->ajouterForme(pCarre);
   Forme* pCercle = new Cercle(2, 3, 5);
   couche->ajouterForme(pCercle);
   Forme* pRectangle = new Rectangle(0, 0, 3, 4);
   couche->ajouterForme(pRectangle);
   couche->afficherCouche(std::cout);
   couche->translater(2, -1);
   couche->afficherCouche(std::cout);
   couche->afficherCouche(std::cout);
   Forme* pCarre2 = new Carre(0, 0, 3);
   couche->ajouterForme(pCarre2);
   Forme *pCercle2 = new Cercle(2, 3, 5);
   couche->ajouterForme(pCercle2);
   Forme *pRectangle2 = new Rectangle(0, 0, 3, 4);
   couche->ajouterForme(pRectangle2);
   couche->afficherCouche(std::cout);
   couche->changerEtat(Couche::Etat::desactive);
   couche->afficherCouche(std::cout);
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_canevas()
{
   Canevas* canevas = new Canevas();
    canevas->afficher(std::cout);
    std::cout << "Test ajouter : " << canevas->ajouterCouche() << endl;
    canevas->afficher(std::cout);
   Forme* pCarre = new Carre(0, 0, 3);
   canevas->ajouterForme(pCarre);
   canevas->afficher(std::cout);
   Forme* pCercle = new Cercle(2, 3, 5);
   canevas->ajouterForme(pCercle);
   Forme* pRectangle = new Rectangle(0, 0, 3, 4);
   canevas->ajouterForme(pRectangle);
   canevas->afficher(std::cout);
   canevas->activerCouche(0);
   canevas->afficher(std::cout);
   canevas->ajouterCouche();
   canevas->afficher(std::cout);
   canevas->activerCouche(1);
   canevas->afficher(std::cout);

}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   //tests_unitaires_formes();
   //tests_unitaires_couche();
   tests_unitaires_vecteur();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
