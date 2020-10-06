/*
Fichier: Palindrome
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Detection d'un palindrome
*/

#include <stdio.h>

int detectpalin(char palin[])
{
	int	i=0;   //compteur de chaine
	int j;     //position du dernier caractere de la chaine
	
	
		while(palin[i]!='\0')                
		{
			i=i+1;
				
		}
			j= i-1;
			printf("length of chaine: %d\n", j);
	
		for(i=0,j=j ;i<=j;i++,j--)    
		{
			if(palin[i]!=palin[j])
			{
			return 0;           //boleene???
			}
		}
	return 1;                   //boleene???
}





int main(int argc, char **argv)
{
	char chain[]={"abcdefgfedcba"};
	int reponse= detectpalin(chain);  
	printf("%s\n", chain);
	printf(" Palindrome (1) non-palindrome (0): %d", reponse);            
	return 0;
}
