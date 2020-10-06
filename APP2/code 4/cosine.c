/*
Fichier: cosinus
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Calcul du cosinus avec une serie
*/

#include <stdio.h>
//#define iterations

float puissance(float x, float n)
{
	float power=1;
	int i=1;
	
	if(n==0)
		{
			return 1;
		}	
	while(i<=n)
		{
			power = x * power;
			i=i+1;
		}
	return power;
}

int factoriel(int factor)
{
	int i=1;
	int factvalu=1;
	
		for(i=1; i<=factor; i++)
	{
		factvalu= factvalu * i;
	}
		return factvalu;
}


float calculcosinus(float radian)
{
	float somme=0;
	int iterations=15;                   //given in variables globales??
	int counter;
		
		for(counter=0; counter<=iterations; counter++)
		{
			somme= (somme) + (( puissance((-1),counter) * puissance(radian, (2*counter))) / factoriel(2*counter));
			printf("%f\n",somme);
		}
	return somme;
}





int main(int argc, char **argv)
{
	float radians= .9;
	float reponse= calculcosinus(radians);
	printf("%f",reponse);
	return 0;
}
