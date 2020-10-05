#include <stdio.h>
#define c 2
#define r 3

int somme(int matriceA[r][c], int matriceB[r][c],int matriceR[r][c])
{
	int somme;
	for(int i=0;i<r;i++) 
	{
		for(int j=0;j<c;j++)
		{
			somme= matriceA[i][j]+matriceB[i][j];
			matriceR[i][j]=somme;
		}
		somme=0;

	}
	return 0;
}
int main()
{
	int matriceA[r][c] = {{1,2},{3,4},{5,6}};
	int matriceB[r][c] = {{6,5},{4,3},{2,1}};
	int matriceR[r][c] = {{0,0},{0,0},{0,0}};
	somme(matriceA,matriceB,matriceR);
	printf("MatriceA:\n");
	for(int i=0;i<r;i++) 
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",matriceA[i][j]);
		}
		printf("\n");
	}
	printf("MatriceB:\n");
	for(int i=0;i<r;i++) 
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",matriceB[i][j]);
		}
		printf("\n");
	}
	printf("Matrice Résultante:\n");
	for(int i=0;i<r;i++) 
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",matriceR[i][j]);
		}
		printf("\n");
	}
	return 0;
}

