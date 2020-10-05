#include <stdio.h>
int palindrome(char chaine[])
{
	int i=0,j;
	while( chaine[i]!='\0')
	{
	i++;
	}
	j=i-1;
	for(i=0,j=j;i<=j;i++,j--)
	{
		if (chaine[i]!=chaine[j])
		{
		return 0;
		}
	}
return 1;
}
int main()
{
	char chaine[21] = {"laval"};
	int reponse = palindrome(chaine);
	printf("Palindrome = 1 Non-palindrome = 0: %d", reponse);

	return 0;


}
