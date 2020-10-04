#include <stdio.h>

int main()
{
	char mot[21] = {"laval"};
	int i=1,j=2;
	if(mot[i]!= mot[j])
	{
		j++;
		
	if(mot[i]==mot[j])
	{
		i++;
		j--;
	}
	if(mot[i]==mot[j])
		printf("Le mot %s est un palindrome!", mot);
	else
		printf("Le mot %s n'est pas un palindrome!", mot);
	}
			
	return 0;
}

