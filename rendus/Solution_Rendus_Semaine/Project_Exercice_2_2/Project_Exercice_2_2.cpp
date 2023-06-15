// Project_Exercice_2_2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int SaisirAge() {
	int age;
	cout << "Entrer un age" << endl;
	cin >> age;
	cout << "Cette personne a " << age << "an(s)" << endl;
	return age;
}

string Categorieif(int age) {
	string str;
	if ((age >= 0) && (age <= 5)) {
		str = "pas de categorie";
	}
	else if ((age >= 6) && (age <= 9)) {
		str = "pre-poussin";
	}
	else if (age == 10 || age == 11) {
		str = "poussin";
	}
	else if (age == 12 || age == 13) {
		str = "benjamin";
	}
	else if (age == 14 || age == 15) {
		str = "minime";
	}
	else if (age == 16 || age == 17) {
		str = "cadet";
	}
	else{
		str = "senior";
	}
	cout << "Cette personne est dans cette categorie : "<< str << endl; 
	return str;
}

string Categorieswitch(int age) {
	string str;
	return str;
}

int main()
{
	int a = SaisirAge();
	string cate = Categorieif(a);
	return 0;
}
