#include <stdio.h>
int main()
{
	char mot[30]={"anticonstitutionnelement"};
	char caractere='n';
	int i,f=-1;
	
	for(i=0;mot[i]!='\0';i++)
	{
		if (mot[i]==caractere)
		{
			f=i;
			break; //car on veut la premiere fois
		}
	}
	if(f==i)
	printf("Le caractere est a la case: %d",f);
	else
	printf("Le caractere est a la case: %d",f);	

	

	return 0;
}

