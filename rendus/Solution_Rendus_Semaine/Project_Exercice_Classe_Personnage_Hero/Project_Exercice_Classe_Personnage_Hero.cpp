// Project_Exercice_Classe_Personnage_Hero.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"

using namespace Personnages;
using namespace std;

int main()
{
    Personnage perso_1("Guethenoc");
    cout << "Creation du personnage " << &perso_1 << "il s'appelle : " << perso_1.GetNom() << endl;

    Personnage* perso_2;
    perso_2 = new Personnage("Balcmeg");
    cout << "Creation du personnage " << &perso_2 << "il s'appelle : " << perso_2->GetNom() << endl;

    Personnage* perso_3;
    perso_3 = new Personnage("Commetuveux");
    cout << "Creation du personnage " << &perso_3 << "il s'appelle : " << perso_3->GetNom() << endl;

    //delete de personnage
    delete perso_2;
    delete perso_3;
}
