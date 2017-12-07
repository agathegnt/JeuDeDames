// test_gtest.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include<iostream>
#include "stdafx.h"
#include "gtest\gtest.h"
#include "JDD\jeu.h"

using namespace std;

// On teste que les pieces s'initient correctement 
TEST(TestPieceCreation,TypesEtCouleur){

	//Piece vide
	piece p;
	EXPECT_EQ(-1,p.getColor());
	EXPECT_EQ(-10,p.getType());

	//pion noire
	piece n(NOIR);
	EXPECT_EQ(1,n.getColor());
	EXPECT_EQ(10,n.getType());

	//pion noire
	piece b(BLANC);
	EXPECT_EQ(0,b.getColor());
	EXPECT_EQ(10,b.getType());
}

//On teste si le plateau s'initial permet de bouger
TEST(InitPlateau,PiecePeutJouer){

	jeu j;

	EXPECT_EQ(1,((j.getPlateau())[0][3]).getColor() );
	EXPECT_EQ(-1,((j.getPlateau())[1][4]).getColor() );
	
	/*
	for(int colonne = 0; colonne < (j.getPlateau()).size(); colonne++)
	{
		for(int ligne = 0; ligne < (j.getPlateau()[colonne]).size(); ligne++)
		{
			if(colonne<2)
			{
				if((ligne)%2 == 0
				EXPECT_EQ(1,n.getColor());
			}
		}
	}*/


}


