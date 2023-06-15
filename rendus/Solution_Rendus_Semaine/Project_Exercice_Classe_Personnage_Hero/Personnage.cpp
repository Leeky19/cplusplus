#include "Personnage.h"
using namespace std; 

namespace Personnages {
	Personnage::Personnage(string nom) {
		this->nom = nom;
	};

	Personnage::~Personnage() {
		this->vie = 0.0;
	};

	string Personnage::GetNom() {
		return this->nom;
	};

	Heros::Heros(string nom, int niveau) : Personnage(nom) {
		this->niveau = niveau;
	};

	Heros::~Heros() {
		this->vie = 0.0;
	};

	innt Personnage::GetNiveau() {
		return this->niveau;
	};
}