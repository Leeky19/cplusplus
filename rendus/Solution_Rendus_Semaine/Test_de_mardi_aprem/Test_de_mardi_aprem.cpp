// Test_de_mardi_aprem.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;




//Question 2 //
bool choixGenre() {
    char c = 't';
    while ((c !='H') && (c !='h') && (c !='F') && (c !='f')) {
        cout << "Quel est votre genre ? (H, h / F, f) " << endl;
        cin >> c;
    }
    
    if ((c == 'H') || (c == 'h')) {
        return true;
    }
    else if ((c == 'F') || (c == 'f')) {
        return false;
    }

}

// Affiche sexe
string sexepersonne(bool s) {
    if (s == false) {
        return "Femme";
    }
    else {
        return "Homme";
    }
}

//Question 3
void saisieInfoPersonne(string& prenom, unsigned int& age, bool& homme) {
    string p;
    unsigned int a;
    bool s;

    cout << "Quel est votre Prenom ? " << endl;
    cin >> p;
    prenom = p;
    cout << "Quel est votre age ?" << endl;
    cin >> a;
    age = a;
    s = choixGenre();
    homme = s;
    string sexe = sexepersonne(s);

    cout << "Vous etes un(e) :" << sexe << "\nVous vous appellez :" << prenom << "\nVous avez : " << age << " ans\n" << endl;
}

// Question 4

float saisieRepos() {
    float frRepos;
    cout << "saisir FCRepos :" << endl;
    cin >> frRepos;
    cout << "\nFCRepos :" << frRepos << "\n" << endl;
    return frRepos;
}

float calculFcMax(bool sexe, unsigned int age) {
    float fcmax;
    if (sexe == true) {
        fcmax = 220 - age;
    }
    else {
        fcmax = 226 - age;
    }
    cout << "FC Max : " << fcmax << "\n" << endl;
    return fcmax;
}

float calculFcReserve(float fcmax, float fcrepos) {
    float fcreserve = fcmax - fcrepos;
    cout << "FC Res : " << fcreserve << "\n" << endl;

    return fcreserve;
}

void entrainementEndurance(float Fcreserve, float frRepose) {
    float FCMinEndurance = 0.5 * Fcreserve + frRepose;
    float FCMaxEndurance = 0.7 * Fcreserve + frRepose;
    cout << "Pour un entrainement en Endurance : FC entre " << FCMinEndurance << " et " << FCMaxEndurance << " p / min" << endl;
}

void entrainementAnaerobie(float Fcreserve, float frRepose) {
    float FCMinEndurance = 0.7 * Fcreserve + frRepose;
    float FCMaxEndurance = 0.85 * Fcreserve + frRepose;
    cout << "Pour un entrainement en Anaerobie : FC entre " << FCMinEndurance << " et " << FCMaxEndurance << " p / min" << endl;
}

void entrainementAerobie(float Fcreserve, float frRepose) {
    float FCMinEndurance = 0.85 * Fcreserve + frRepose;
    float FCMaxEndurance = 0.95 * Fcreserve + frRepose;
    cout << "Pour un entrainement en Aerobie : FC entre " << FCMinEndurance << " et " << FCMaxEndurance << " p / min" << endl;
}


void selectProgramme(float Fcreserve, float frRepose) {
    int selection = 5 ; //on force le programme à rentrer dans le while

    while ((selection <= 0) || (selection > 3)) {
        cout << "Quel programme voulez vous suivre ? Saisissez 1 ou 2 ou 3 \n1-Endurance\n2-Anaerobie\n3-Aerobie" << endl;
        cin >> selection;
    }

    if (selection == 1) {
        entrainementEndurance(Fcreserve,frRepose);
    }
    if (selection == 2) {
        entrainementAnaerobie(Fcreserve,frRepose);
    }

    if (selection == 3) {
        entrainementAerobie(Fcreserve,frRepose);
    }
}


int main()
{
    //Question 1 mise exemple afin de pouvoir utilisé la fonction
    string prenom ="John";
    unsigned int age = 1;
    bool genre = true;
    saisieInfoPersonne(prenom, age, genre);
    float frequance_au_repos = saisieRepos();
    float frequance_au_max = calculFcMax(genre, age);
    float frenquence_de_reserve = calculFcReserve(frequance_au_max, frequance_au_repos);
    selectProgramme(frenquence_de_reserve, frequance_au_repos);
    return 0;
}