#ifndef JEU_H
#define JEU_H

#include "piece.h"
#include <vector>

class jeu
{
    public:
        jeu();
        virtual ~jeu();

		int getSize();
		piece getCase(int colonne, int ligne);
		std::vector <std::vector<piece> > getPlateau();

        //methodes
        bool deplace(int color);
        bool checkPriseObligatoire (int colonne, int ligne, int colonne_visee, int ligne_visee, int color); //check si il y a prise obligatoire et supprime le pion pris si besoin
        void affichage ();
        bool deplacementUneCaseOK (int colonne, int ligne, int colonne_visee, int ligne_visee); // renvoit vrai si il s'agit d'un deplacement d'une case en diagonale et faux sinon
    protected:
    private:
        std::vector <std::vector<piece> > m_board;
};

#endif // JEU_H
