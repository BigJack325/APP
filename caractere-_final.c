#include <stdio.h>
int mot(char chaine[], char caractere)
{
	int i,f=-1;
	for(i=0;chaine[i]!='\0';i++)
	{
		if (chaine[i]==caractere)
		{
			f=i;
			break;
		}
	}
	return f;
}
int main(void)
{
	char chaine[4][40] = {{"anticonstitutionnelement"},{"bonjour"},{"bonjour"},{"allocommentcava"}};
	char caractere[4]= {'n','e','r','a'};
	for(int i=0;i<4;i++)
	{
		int f = mot(chaine[i],caractere[i]);
		printf("Le mot est %s\n",chaine[i]);
		printf("Le caractere est %c\n",caractere[i]);
		printf("Le caractere se situe a la case %d\n",f);
	}



	return 0;
}

