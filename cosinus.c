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
	float x = 1.0;
	float resultat=cosinus(x);
	printf("La valeur en radian testé est: %f\n",x);
	printf("La valeur du cosinus théorique est: 0.5403\n");
	printf("La valeur du cosinus calculée est: %f",resultat);
	
	return 0;
}

