#include <stdio.h>
#include <math.h>

int main()
{
	float num;
	
	printf("digite um numero \n");
	scanf("%f", &num);
	
	if (num > 0)
	{
	num = 1/num;
	printf("o numero e %f", num);
	}
	else 
	{
	num = fabs(num);
	printf("o numero e %f", num);
	}
	
	
	return 0;
}
