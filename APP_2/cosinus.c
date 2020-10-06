/*
Fichier: cosinus
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Calcul d'une fonction cosinus
*/

// Description: Calcul du cosinus avec un angle en radians
// Préconditions: Avoir une valeur x en radian entre 0 et 2π
// Postconditions: Retourne une valeur entre 0 et 1
#include <stdio.h>
int signe(int n)
{
	int reponse1=1,i;
	for(i=1; i<n; i++)
	{
		reponse1 = reponse1* (-1);
	}
	return reponse1;
}

float exponentielle( float x, int n)
{
	float reponse2=1,i;
	for(i=1; i<=(2*n-2);i++)
	{
		reponse2 = reponse2*x;
	}
	return reponse2;
}
		
int factorielle(int n)
{
	int reponse3=1,i;
	for(i=1; i<=(2*n-2);i++)
	{
		reponse3 = reponse3*i;
	}
	return reponse3;
}
float cosinus(float x)
{
	const int n=5;
	float resultat=0;
	for(int i=1; i<=n;i++)
	{
		int reponse1 = signe(i);
		float reponse2 = exponentielle(x,i);
		int reponse3 = factorielle(i);
		resultat = resultat+((reponse1*reponse2)/reponse3);
	}
	return resultat;
}
		
int main()
{
	float x[4] = {1.0,0.0,(3.14/4),(3.14/2)};
	float theorique[4] = {0.5403,1.0,0.7071,0.0};
	for(int i=0;i<4;i++)
	{
		float resultat=cosinus(x[i]);
		printf("La valeur en radian testé est: %f\n",x[i]);
		printf("La valeur du cosinus théorique est: %f\n",theorique[i]);
		printf("La valeur du cosinus calculée est: %f\n",resultat);
	}

	
	return 0;
}

