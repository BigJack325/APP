/*
Fichier: palindrome_lettre
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Détecter si la chaine de caractères est un palindrome
*/

// Description: Trouver si la chaine de mots dans le tableau chaine est un plaindrome
// Préconditions: Avoir une chaine de mots dans le tableau chaine
// Postconditions: Retourne une valeur booléenne de soit 0(pas un palindrome) ou 1(est un palindrome)
#include <stdio.h>
int palindrome(char chaine[])
{
	int i=0,j;
	while( chaine[i]!='\0')
	{
	i++;
	}
	j=i-1;
	for(i=0,j=j;i<=j;i++,j--)
	{
		if (chaine[i]!=chaine[j])
		{
		return 0;
		}
	}
return 1;
}
int main()
{
	char chaine[21] = {"laval"};
	int reponse = palindrome(chaine);
	printf("Chaine choisie: %s\nEst un palindrome = 1\nN'est pas un palindrome = 0\nResultat:  %d", chaine,reponse);

	return 0;


}
