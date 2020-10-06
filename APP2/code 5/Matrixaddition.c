/*
Fichier: Matrix Addition
Auteurs: Kevin Amyot amyk0901
         Olivier Jackson jaco2303
Date: 05 octobre 2020
Description: Addition deux matrices
*/

#include <stdio.h>
#define m 3 //lignes;
#define n 2 //colonnes;

int matrixadd(int matrixa[m][n], int matrixb[m][n], int matrixc[m][n])
{
	int i;       
	int j;
	int somme=0;
		
		for(i=0;i<m;i++)
		{
			for(j=0; j<n; j++)
			{
				somme= matrixa[i][j]+matrixb[i][j];
				matrixc[i][j]= somme;
				somme=0;
			}	
		}
	return 0;	
}

int main(int argc, char **argv)
{
int matrixa[3][2]={{1,2},{3,4},{5,6}};	
int matrixb[3][2]={{6,5},{4,3},{2,1}};
int matrixc[3][2]={{0,0},{0,0},{0,0}};

matrixadd(matrixa, matrixb, matrixc);

printf("Matrix A:\n");
printf("%d\t%d\n", matrixa[0][0],matrixa[0][1]);
printf("%d\t%d\n", matrixa[1][0],matrixa[1][1]);
printf("%d\t%d\n\n", matrixa[2][0],matrixa[2][1]);

printf("Matrix B:\n");
printf("%d\t%d\n", matrixb[0][0],matrixb[0][1]);
printf("%d\t%d\n", matrixb[1][0],matrixb[1][1]);
printf("%d\t%d\n\n", matrixb[2][0],matrixb[2][1]);


printf("Resultat:\n");
printf("%d\t%d\n", matrixc[0][0],matrixc[0][1]);
printf("%d\t%d\n", matrixc[1][0],matrixc[1][1]);
printf("%d\t%d\n", matrixc[2][0],matrixc[2][1]);

return 0;
}
