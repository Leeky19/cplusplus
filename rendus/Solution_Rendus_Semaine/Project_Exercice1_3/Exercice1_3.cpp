// Project_Exercice1_3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
using namespace std;


int main(void){
	// Variable

	int a = 3;
	int b = 10;
	int* p;


	//Affectation de p
	p = &b;

	//Affichage de p
	cout << "valeur de p : " << p << "\nadresse de p : " << &p << "\nvaleur pointee par p : " << *p << endl; 
	
	//Nouvelle effectaction de p
	p = &a;
	*p = *p *2;// modification de la valeur de la variable de l'adresse.
	cout << "valeur de p : " << p << "\nadresse de p : " << &p << "\nvaleur pointee par p : " << *p << endl;

	//Nouvelle effecttation de p 
	p++; //la valeur pointée donne un résultat "rendom".
	cout << "valeur de p : " << p << "\nadresse de p : " << &p << "\nvaleur pointee par p : " << *p << endl;
	return 0;
}