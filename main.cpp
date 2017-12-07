#include <iostream>
#include "jeu.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //variables
    bool fin (false);

    //creation du plateau de jeu
    jeu plateau;
    plateau.affichage();

    //test deplacment
    plateau.deplace(NOIR);
    plateau.affichage();
    return 0;
}
