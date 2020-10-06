/*
Fichier: Sinus
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Calcul du sinus avec une serie
*/
// Description: Calcul du cosinus avec un angle en radians
// Préconditions: Avoir une valeur x en radian entre 0 et 2π
// Postconditions: Retourne une valeur entre 0 et 1

#include <stdio.h>
#define iterations 5

float puissance(float base, float exponent)
{
	float power=1;
	int i=1;
	
	if(exponent==0)
		{
			return 1;
		}	
	while(i<= exponent)
		{
			power = base * power;
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
	int counter;
		
		for(counter=1; counter<=iterations; counter++)
		{
			somme= (somme) + (( puissance((-1),counter-1) * puissance(radian, (2*counter-1))) / factoriel(2*counter-1));
		}
	return somme;
}





int main(int argc, char **argv)
{
	float radians= 1;
	float reponse = calculsinus(radians);
	printf("valeur donner: %f\n",radians);
	printf("resultat voulu:0.8415\n");
	printf("resultat %f\n\n", reponse);
	
	float radians2= 0;
	float reponse2 = calculsinus(radians2);
	printf("valeur donner: %f\n",radians2);
	printf("resultat voulu:0\n");
	printf("resultat %f\n\n", reponse2);
	
	float radians3= 3.14159/4;
	float reponse3 = calculsinus(radians3);
	printf("valeur donner: %f\n",radians3);
	printf("resultat voulu:0.7071\n");
	printf("resultat %f\n\n", reponse3);
	
	float radians4= 3.14159/2;
	float reponse4 = calculsinus(radians4);
	printf("valeur donner: %f\n",radians4);
	printf("resultat voulu:1\n");
	printf("resultat %f\n\n", reponse4);
	
	return 0;
}
