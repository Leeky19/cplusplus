// Exercice1_2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
using namespace std;

//Variables

int i1 = 1;
int i2 = 3;
int r1 = i1 / i2;

float d1 = 1;
float d2 = 3;
float r2 = d1 / d2;

int main(void) {

	cout << "valeur var r1 = " << r1 << endl;
	cout << "valeur var r2 = " << r2 << endl;
	r2 = i1 / i2;
	cout << "nouvelle valeur var r2 = " << r2 << endl;
	r2 = d1 / i2;
	cout << "nouvelle valeur var r2 = " << r2 << endl;
	r2 = i1 / d2;
	cout << "nouvelle valeur var r2 = " << r2 << endl;
	r2 = d1 / d2;
	cout << "nouvelle valeur var r2 = " << r2 << endl;
	return 0;
}
