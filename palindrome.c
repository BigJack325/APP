#include <stdio.h>

int main()
{
	int n=4664, somme=0, x, t;
	
	t = n; //il faut mettre une valeur temporaire de n pour ne pas le modifier
	
	while(t>0)
	{
		x=t%10;
		somme=somme*10+x;
		t=t/10;
		}
	
	if (somme==n)
	printf("Le nombre %d est un palindrome!",n);
	else
	printf("Le nombre %d n'est pas un palindrome!",n);

	
	return 0;
}

