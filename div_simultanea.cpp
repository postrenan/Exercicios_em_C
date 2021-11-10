#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	
	printf("digite um numero \n");
	scanf("%d", &num);
	if ( (num % 7)  == 0 and (num % 3) == 0) 
	{
		printf("o numero eh simultaneamente divisivel \n");
	}
	else
	{
		printf(" o numero nao pode ser dividido pelo 3 e 7");
	}
	
	return 0;	
}
