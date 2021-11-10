#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float a, b, c;
	//char crescente, decrescente, meio;
	
	printf("digite o valor de i, a, b, c\n");
	scanf("%d %f %f %f", &i, &a, &b, &c);
	
	switch (i)
	{	
	
	
		case 1 : if ( a > b && b > c)
					{
						printf("os valores em ordem crescente sao %f %f %f \n", c, b, a);
					}
					else
						if (b > a && a > c)
						{
							printf("os valores em ordem crescente sao %f %f %f \n", c, a, b);
						}
						else
							if ( b > c &&  c > a)
							{
								printf("os valores em ordem crescente sao %f %f %f \n", a, c, b);
							}
							else
								if (c > b && b > a )
								{
									printf("os valores em ordem crescente sao %f %f %f \n", a, b, c);
								}
								else
									if ( a > c && c > b)
									{
										printf("os valores em ordem crescente sao %f %f %f \n", b, c, a);	
									}
									else
										if ( c > a && a > b)
										{
											printf("os valores em ordem crescente sao %f %f %f \n", b, a, c);
										}
					break;
		
		case 2 : if ( a > b && b > c)
					{
						printf("os valores em ordem decrescente sao %f %f %f \n", a, b, c);
					}
					else
						if (b > a && a > c)
						{
							printf("os valores em ordem decrescente sao %f %f %f \n", b, a, c);
						}
						else
							if ( b > c &&  c > a)
							{
								printf("os valores em ordem decrescente sao %f %f %f \n", b, c, a);
							}
							else
								if (c > b && b > a )
								{
									printf("os valores em ordem decrescente sao %f %f %f \n", c, b, a);
								}
								else
									if ( a > c && c > b)
									{
										printf("os valores em ordem decrescente sao %f %f %f \n", a, c , b);	
									}
									else
										if ( c > a && a > b)
										{
											printf("os valores em ordem decrescente sao %f %f %f \n", c, a, b);
										}
					break;

		case 3 : if ( a > b && b > c)
					{
						printf("os valores em ordem com o maior no meio sao %f %f %f \n", c, a, b);
					}
					else
						if (b > a && a > c)
						{
							printf("os valores em ordem com o maior no meio sao %f %f %f \n", c, b, a);
						}
						else
							if ( b > c &&  c > a)
							{
								printf("os valores em ordem com o maior no meio sao %f %f %f \n", a, b, c);
							}
							else
								if (c > b && b > a )
								{
									printf("os valores em ordem com o maior no meio sao %f %f %f \n", b, c, a);
								}
								else
									if ( a > c && c > b)
									{
										printf("os valores em ordem com o maior no meio sao %f %f %f \n", b, a, c);	
									}
									else
										if ( c > a && a > b)
										{
											printf("os valores em ordem com o maior no meio sao %f %f %f \n", a, c, b);
										}
					break;
		default : printf("digite um valor valido\n");
	}
	

	return 0;
}
