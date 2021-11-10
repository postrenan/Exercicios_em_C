#include <stdio.h>
#include <math.h>

int main()
{
	float num;
	
	printf("digite um numero\n");
	scanf("%f", &num);
	if(num > 0)
	{
		printf("numero positivo\n");
	}
	else 
		if ( num < 0)
		{
			printf("numero negativo\n");
		}
		else
		{
			printf("numero nulo\n");
		}

	return 0;
}
