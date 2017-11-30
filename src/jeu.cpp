#include "jeu.h"

jeu::jeu()
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

bool deplace(int color)
{
    //deplacementAutorise
    bool deplacementAutorise (true);

    // a qui le tour
    if (color=BLANC)
    {
        cout << "c'est au tour du joueur blanc"<<endl;
    }
    else if (color=NOIR)
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

    //check le pion est de la bonne couleur
    if ((m_board[colonne][ligne]).getColor()!=color)
    {
        cout<<"ERROR le pion choisi n'est pas de la bonne couleur"<<endl;
        deplacementAutorise = false;
    }
    else
    {
        //check si il y a prise obligatoire et supprime le pion pris si besoin
        deplacementAutorise = checkPrise (colonne_visee, ligne_visee);

        if (!deplacementAutorise)
        {
            cout << "Le deplacement n'est pas autoris�"<< endl;
        }
        else
        {
            m_board[colonne_visee][ligne_visee]=m_board[colonne][ligne];
        }
    }
}
