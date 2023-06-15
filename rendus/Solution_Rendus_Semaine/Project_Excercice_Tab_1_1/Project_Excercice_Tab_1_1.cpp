// Project_Excercice_Tab_1_1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

const int TAILLE_MAX = 100;
// Tableau non dynamique
int SaisirNb() {
    int nb = TAILLE_MAX +1;
    while (nb > TAILLE_MAX) {
        cout << "Saisir la taille du tableau (maximum " << TAILLE_MAX <<")" << endl;
        cin >> nb;
    }
    
    return nb;
}

// Tableau non dynamique
void remplirTab(int *tab, int taille) {
    cout << "Tableau d'entier " << endl;

    for (int i = 0; i < taille; i++) {
        int var;
        cout << "Cellule numero : " << i << endl;
        cin >> var;
        tab[i] = var;
    }
}
// Tableau non dynamique
void afficheTab(int tab[], int taille) {
    cout << "Affichage du tableau et début à l'adresse" << tab <<" :" << endl;
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << "\n";
    }
}

int main()
{
    int taille_tab = SaisirNb();
    int tableau[TAILLE_MAX];
    remplirTab(tableau, taille_tab);
    afficheTab(tableau, taille_tab);
    
    return 0;
}
