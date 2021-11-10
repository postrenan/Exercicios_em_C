#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	
	printf("digite dois valores\n");
	scanf("%d %d", &a, &b );
	
	if ( a % b == 0 || b % a == 0)
	{
		printf("sao multiplos\n");
	}
	else
	{
		printf("nao sao multiplos\n");
	}
	return 0;
}
