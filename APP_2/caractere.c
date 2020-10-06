/*
Fichier: caractere
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Retourner comme valeur la position de la première occurrence d’un caractère dans une chaine de caractères
*/

#include <stdio.h>
#define r 4
#define c 40

// Description: fonction qui retourne la variable f qui est soit une valeur de -1 si le caractere n'est pas localise ou la valeur de la case ou le caractere est situe
// Préconditions: Un caractere a localiser et une chaine de mot ou chercher le caractere. La chaine de mot ne peut pas depasser 39 caracteres
// Postconditions: Une valeur de f allant de -1 à 39
int mot(char chaine[r], char caractere)
{
	int i,f=-1;
	for(i=0;chaine[i]!='\0';i++)
	{
		if (chaine[i]==caractere)
		{
			f=i;
			return f;
		}
	}
	return f;
}
int main(void)
{
	char chaine[r][c] = {{"anticonstitutionnelement"},{"bonjour"},{"bonjour"},{"allocommentcava"}};
	char caractere[r]= {'n','e','r','a'};
	for(int i=0;i<r;i++)
	{
		int f = mot(chaine[i],caractere[i]);
		printf("Le mot est %s\n",chaine[i]);
		printf("Le caractere est %c\n",caractere[i]);
		printf("Le caractere se situe a la case %d\n",f);
	}



	return 0;
}

