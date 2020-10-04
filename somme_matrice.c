#include <stdio.h>
int main()
{
	int matriceA[3][2] = {{1,2},{3,4},{5,6}};
	int matriceB[3][2] = {{6,5},{4,3},{2,1}};
	int const range=3;
	int const colonne=2;
	int somme;
	for(int i=0;i<range;i++) //car 0-2
	{
		for(int j=0;j<colonne;j++) //car 0-1
		{
			somme= matriceA[i][j]+matriceB[i][j];
			printf("%d\t",somme);
		}
		printf("\n");
	}
	
	return 0;
}

