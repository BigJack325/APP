#include <stdio.h>
int signe(int n)
{
	int reponse1=1;
	for(int i=0; i<=n; i++)
	{
		reponse1 = (-1)^i;
	}
	return reponse1;
}

float exponentielle( float rad, int n)
{
	float reponse2=0;
	for(int i=0; i<=n; i++)
	{
		reponse2=(rad)^((2*n)+1);
	}
	return reponse2;
}
		
int factorielle(int n)
{
	int reponse3=0;
	for(int i=0; i<=n; i++)
	{
		int reponse3 = reponse3*((2*i)+1);
	}
	return reponse3;
}
	
int main()
{
	int n=12;
	float degre=45.0;
	float rad = degre*(3.14/180);
	int reponse1 = signe(n);
	int reponse2 = exponentielle(rad,n);
	int reponse3 = factorielle(n);
	float sinus=0;
	for(int i=0; i<=n;i++)
	{
		float sinus= sinus+((reponse1*reponse2)/reponse3);
	}
	printf("La valeur du sinus est: %f",sinus);
	return 0;
}

