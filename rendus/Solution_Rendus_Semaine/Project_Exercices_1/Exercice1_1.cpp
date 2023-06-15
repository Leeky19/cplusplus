#include <iostream>
using namespace std;

// Variable
int a = 1;
int b = 5;
float f = 3.14;
char c('C');
char d;


void AfficheVar() {
	cout << "valeur variable a : " << a << " son adresse est : " << &a << " et en hexa : " << hex << int(a) << endl;
	cout << "valeur variable b : " << b << " son adresse est : " << &b << endl;
	cout << "valeur variable f : " << f << " son adresse est : " << &f << endl;
	cout << "valeur variable c : " << c << " son adresse est : " << &f << endl;
	cout << "valeur variable d : " << d << " son adresse est : " << &d << endl;
}

void PermutAetB(int &i, int &j) {
	auto t = i ;
	i = j ;
	j = t ;
	cout << "nouvelle variable de 1er variable : " << i << endl;
	cout << "nouvelle variable de 2eme variable : " << j << endl;
}

void InitD(char &car) {
	car = 90;
	cout << "valeur variable d : " << d << endl; //affiche Z car on lui a affectuer une valeur en code ASCII
}
void AjoutD(char& car) {
	car = car+255;
	cout << "valeur variable d : " << d << endl; //affiche Y car on afait le "tour de tout les codes ASCII"
}

int main(void)
{
	AfficheVar();
	PermutAetB(a, b);
	// PermutAetB(a, f); fait une erreur car pas de meme type.
	f = a;
	cout << "valeur de f : " << f << endl;
	InitD(d);
	AjoutD(d);
	return 0;
}