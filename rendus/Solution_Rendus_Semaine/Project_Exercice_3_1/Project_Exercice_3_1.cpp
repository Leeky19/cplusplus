// Project_Exercice_3_1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int saisiEntierMin() {
    int mi;
    cout << "Saisir un valeur qui sera le mimum " << endl;
    cin >> mi;
    return mi;
}

int saisiEntierMax(const int mi) {
    int ma;
    cout << "Saisir un valeur qui sera le maxumum " << endl;
    cin >> ma;
    while (ma <= mi) {
        cout << "la valeur mainumum est : " << mi <<"\nil faut que ce soit plus grand que ce nombre !!!" << endl;
        cin >> ma;
    }
    return ma;
}

int saisirEntierEntre(int min, int max) {
    int i;
    cout << "Saisir un valeur comprise entre " << min << " et " << max << endl ;
    cin >> i;
    while ((i < min) || (i > max)) {
        cout << "Saisir un valeur comprise entre " << min << " et " << max << endl;
        cin >> i;
    }
    return i;
}

int main()
{
    int min = saisiEntierMin();
    int max = saisiEntierMax(min);
    int num = saisirEntierEntre(min, max);
    return 0;
}
