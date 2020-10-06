/*
Fichier: Sinus
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Calcul du sinus avec une serie
*/

#include <stdio.h>
#define iterations 5

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


float calculsinus(float radian)
{
	float somme=0;
	//int iterations=20;                   //given in variables globales
	int counter;
		
		for(counter=1; counter<=iterations; counter++)
		{
			somme= (somme) + (( puissance((-1),counter-1) * puissance(radian, (2*counter-1))) / factoriel(2*counter-1));
			//printf("%f\n",somme);
		}
	return somme;
}





int main(int argc, char **argv)
{
	float radians= 1;
	float reponse = calculsinus(radians);
	printf("valeur donner: %f\n",radians);
	printf("resultat %f\n\n", reponse);
	
	float radians2= 0;
	float reponse2 = calculsinus(radians2);
	printf("valeur donner: %f\n",radians2);
	printf("resultat %f\n\n", reponse2);
	
	float radians3= 3.14159/4;
	float reponse3 = calculsinus(radians3);
	printf("valeur donner: %f\n",radians3);
	printf("resultat %f\n\n", reponse3);
	
	float radians4= 3.14159/2;
	float reponse4 = calculsinus(radians4);
	printf("valeur donner: %f\n",radians4);
	printf("resultat %f\n\n", reponse4);
	
	return 0;
}
