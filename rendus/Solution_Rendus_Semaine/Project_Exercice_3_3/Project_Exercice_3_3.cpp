// Project_Exercice_3_3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

void permutDonnesRslt(char &v1, char &v2) {
	auto temp = v1;
	v1 = v2;
	v2 = temp;
}

float permutcopie(float i, float& j) {
	float t = i;
	 i= j;
	 return j = t;
}
//lors de l'utilisation de cette fonction faire : permutPoint( &nbSaisie, &nb2);
void permutPoint(int* a, int* b) {
	auto t = *a;
	*a = *b;
	*b = t;
}

int SaisirNombre() {
	int i;
	cout << "Saisir un nombre entier" << endl;
	cin >> i;
	cout << "Nombre choisit : " << i << endl;
	return i;
}

int main()
{
	SaisirNombre();
	return 0;
}
