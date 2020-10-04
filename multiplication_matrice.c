#include <stdio.h>

int main()
{
	int matriceA[2][2] = {{1,2},{3,4}};
	int matriceB[2][2] = {{5,6},{7,8}};
	int const range=2;
	int const colonne=2;
	int somme;
	for(int i=0;i<range;i++)
	{
		for(int j=0;j<colonne;j++)
		{
			for(int k=0; k<colonne;k++)
			{
				somme= somme+(matriceA[i][k]*matriceB[k][j]);
				
			}
		 printf("%d\t",somme);	
		 somme = 0;	 //mettre à 0 pour ne éliminer la mémoire de somme
		}
	printf("\n");
	}
	
	return 0;
}
