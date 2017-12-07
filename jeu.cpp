#include "jeu.h"
#include <iostream>
using namespace std;

jeu::jeu() : m_board (10, std::vector<piece> (10))
{
    //ctor
    //remplissage des lignes 0 et 2 avec des pions noirs
    for (int i=1; i<10;i+=2)
    {
        for (int j=0; j<4;j+=2)
        {
            m_board[i][j]=piece(NOIR);
        }
    }
    //remplissage des lignes 1 et 3 avec des pions noirs
    for (int i=0; i<10;i+=2)
    {
        for (int j=1; j<4;j+=2)
        {
            m_board[i][j]=piece(NOIR);
        }
    }
    //remplissage des lignes 6 et 8 avec des pions blancs
    for (int i=1; i<10;i+=2)
    {
        for (int j=6; j<10;j+=2)
        {
            m_board[i][j]=piece(BLANC);
        }
    }
    //remplissage des lignes 7 et 9 avec des pions blancs
    for (int i=0; i<10;i+=2)
    {
        for (int j=7; j<10;j+=2)
        {
            m_board[i][j]=piece(BLANC);
        }
    }
}

jeu::~jeu()
{
    //dtor
}

bool jeu::deplace(int color)
{
    //deplacementAutorise
    bool deplacementAutorise (true);

    // a qui le tour
    if (color==BLANC)
    {
        cout << "c'est au tour du joueur blanc"<<endl;
    }
    else if (color==NOIR)
    {
        cout << "c'est au tour du joueur noir"<<endl;
    }

    //selection du pion a deplacer
    int colonne;
    int ligne;
    cout << "Colonne du pion a deplacer"<<endl;
    cin >> colonne;
    cout << "Ligne du pion a deplacer"<<endl;
    cin >> ligne;

    //choix case visee
    int colonne_visee;
    int ligne_visee;
    cout << "Colonne du pion a deplacer"<<endl;
    cin >> colonne_visee;
    cout << "Ligne du pion a deplacer"<<endl;
    cin >> ligne_visee;

    //check si pion dans cette case de depart
    if ((m_board[colonne][ligne]).getType()==NONE)
    {
        cout<<"Il n'y a pas de pion dans cette case"<<endl;
        deplacementAutorise = false;
    }

    else
    {
        //si le pion de la case de depart est de la bonne couleur
        if ((m_board[colonne][ligne]).getColor()!=color)
        {
            cout<<"Le pion choisi n'est pas de la bonne couleur"<<endl;
            deplacementAutorise = false;
        }
        else
        {
            //check si il y a prise obligatoire et supprime le pion pris si besoin
            deplacementAutorise = checkPriseObligatoire (colonne, ligne, colonne_visee, ligne_visee);

            if (!deplacementAutorise)
            {
                cout << "Le deplacement n'est pas autorise"<< endl;
            }
            else
            {
                m_board[colonne_visee][ligne_visee]=m_board[colonne][ligne];
                m_board[colonne_visee][ligne_visee]=piece();
            }
        }
    }
    return deplacementAutorise;
}

bool checkPriseObligatoire (int colonne, int ligne, int colonne_visee, int ligne_visee)
{
    bool deplacementAutorise (true);

    return deplacementAutorise;
}
