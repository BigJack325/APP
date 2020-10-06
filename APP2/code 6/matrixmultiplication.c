/*
Fichier: Matrix multiplication
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Multiplication de deux matrices carre
*/

#include <stdio.h>
#define n 4  //dimensions de les matrices

int matrixmult(int matrixa[n][n],int matrixb[n][n],int matrixc[n][n])
{
		int i;
		int j;
		int k;
		int somme=0;
		
		for(i=0;i<n;i++)
		{
			
			for(j=0; j<n; j++)
			{
				for(k=0; k<n; k++)
				{
					somme= somme + matrixa[i][k]*matrixb[k][j];
				}
				matrixc[i][j]= somme;
				somme=0;	
			}
		}
		return 0;
}
	

int main(int argc, char **argv)
{
	int m1[n][n]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int m2[n][n]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int matrixc[n][n]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

	matrixmult(m1,m2,matrixc);
	
	int i;
	int j;
	
printf("Matrix 1:\n");
	for(i=0;i<n;i++)
		{
			for(j=0; j<n; j++)
			{
				printf("%d\t", m1[i][j]);
			}	
			printf("\n");
		}
		printf("\n");
		
printf("Matrix 2:\n");
	for(i=0;i<n;i++)
		{
			for(j=0; j<n; j++)
			{
				printf("%d\t", m2[i][j]);
			}	
			printf("\n");
		}
		printf("\n");
	
printf("product:\n");
	for(i=0;i<n;i++)
	{
		for(j=0; j<n; j++)
		{
		printf("%d\t", matrixc[i][j]);
		}	
	printf("\n");
	}
	printf("\n");
	return 0;
}
