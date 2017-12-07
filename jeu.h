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
        bool checkPriseObligatoire (int colonne, int ligne, int colonne_visee, int ligne_visee); //check si il y a prise obligatoire et supprime le pion pris si besoin
    protected:
    private:
        std::vector <std::vector<piece> > m_board;
};

#endif // JEU_H
