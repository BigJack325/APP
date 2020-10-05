#include <stdio.h>
#define n 2
#define m 3

int somme(int matriceA[m][n], int matriceB[m][n],int matriceR[m][n])
{
	int somme;
	for(int i=0;i<m;i++) 
	{
		for(int j=0;j<n;j++)
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
	int matriceA[m][n] = {{1,2},{3,4},{5,6}};
	int matriceB[m][n] = {{6,5},{4,3},{2,1}};
	int matriceR[m][n] = {{0,0},{0,0},{0,0}};
	somme(matriceA,matriceB,matriceR);
	printf("MatriceA:\n");
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",matriceA[i][j]);
		}
		printf("\n");
	}
	printf("MatriceB:\n");
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",matriceB[i][j]);
		}
		printf("\n");
	}
	printf("Matrice Résultante:\n");
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",matriceR[i][j]);
		}
		printf("\n");
	}
	return 0;
}

