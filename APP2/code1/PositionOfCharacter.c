/*
Fichier: PositionOfCharacter
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Trouver la position d'un caractere dans une chaine
*/

#include <stdio.h>

int positionchar(char charwanted, char chain[])
{
	int i=0;
	int maxlength=2000;     //max????                  //length of chaine
		                                          //detect length??
		for(i=0; i<maxlength; i++)                //max byte size 255??
		{
			if(charwanted==chain[i])
			{
			return i;
			}
			if('\0'==chain[i])
			{
				//printf("%d",i);    //delete
			return -1;
			}
		}
	return 0;
}


int main(int argc, char **argv)
{
	char wanted= 'n';
	char chaingiven[]={"anticonstitutionnellement"};	
	int position= positionchar(wanted, chaingiven);
	printf("caractere: %c\n",wanted);
	printf("chaine: %s\n", chaingiven);
	printf("resultat: %d\n\n",position);                      
	
	
	char wanted2= 'e';
	char chaingiven2[]={"bonjour"};	
	int position2= positionchar(wanted2, chaingiven2);
	printf("caractere: %c\n",wanted2);
	printf("chaine: %s\n", chaingiven2);
	printf("resultat: %d\n\n",position2);    
	
	
	char wanted3= 'r';
	char chaingiven3[]={"bonjour"};	
	int position3= positionchar(wanted3, chaingiven3);
	printf("caractere: %c\n",wanted3);
	printf("chaine: %s\n", chaingiven3);
	printf("resultat: %d\n\n",position3); 
	
	char wanted4= 'a';
	char chaingiven4[]={"allocommentcava"};	
	int position4= positionchar(wanted4, chaingiven);
	printf("caractere: %c\n",wanted4);
	printf("chaine: %s\n", chaingiven4);
	printf("resultat: %d\n\n",position4); 
	
	return 0;
}
