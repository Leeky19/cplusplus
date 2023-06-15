// Project_Exercice_2_1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
using namespace std;


int QuelleMinute() {
	int m = 61;
	
	while ( ( m < 0 ) || ( m >= 60 ) )
	{
		cout << "Quelle minute est-il ? " << endl;
		cin >> m;
	}
	return m;
}

int QuelleHeure() {
	int h = 26;

	while ((h < 0) || (h > 24)) {
		cout << "Quelle heure est-il ? " << endl;
		cin >> h;
	}
	if (h == 24) {
		h = 0;
	}
	
	return h;
}
/*
int  Minutesoixante(int m) {
	if (m == 60)
	{
		m = 0;
	}
	return m;
}
*/
void VerifHeure(int &heu) {
	if (heu == 24) {
		heu = 0;
	}
}

void QuelleHeureMinute(int he, int min) {

	cout << "Il est : " << he << "H" << min << "min" << endl;

}

void Prediction(int& he, int& mi) {
	mi++;
	if (mi == 60)
	{
		mi = 0;
		he++;
	}
	VerifHeure(he);
	cout << "Dans une minute il sera : " << he << "h" << mi << endl;
}

int main(void) {
	
	int min = QuelleMinute();
	int heure = QuelleHeure();
	QuelleHeureMinute(heure,min);
	Prediction(heure, min);
	return 0;
}