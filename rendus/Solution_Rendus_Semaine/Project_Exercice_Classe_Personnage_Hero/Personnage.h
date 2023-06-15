#pragma once
#ifndef personnage_h
#define personnage_h
#include <string>
using namespace std;

namespace Personnages {
	class Personnage
	{
	private : 
		string nom = "";

	protected:
		double vie = 10.0;
		int niveau = 1;

	public: 
		Personnage(string nom);
		string GetNom();
		~Personnage();
		int GetNiveau();

	};

	class Heros : public Personnage {
	public:
		Heros(string nom; int niveau = 2);//si pas de niveau en paramettre lors de la declaration il sera par defaut de niveau 2
		~Heros();
	};

}

#endif /*personnage_h*/