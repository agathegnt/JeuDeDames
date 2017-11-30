#ifndef JEU_H
#define JEU_H

#include "piece.h"

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
        vector <vector<piece>> m_board (100);
};

#endif // JEU_H
