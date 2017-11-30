#ifndef JEU_H
#define JEU_H

#include "piece.h"
#include <vector>

class jeu
{
    public:
        jeu();
        virtual ~jeu();

        //methodes
        bool deplace(int color);
        bool checkPriseObligatoire (int colonne, int ligne); //check si il y a prise obligatoire et supprime le pion pris si besoin
    protected:
    private:
        std::vector <std::vector<piece> > m_board (10, std::vector<piece> (10));
};

#endif // JEU_H
