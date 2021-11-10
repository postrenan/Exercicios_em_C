#include <stdio.h>
#include <math.h>

int main()
{
	float altura, fm, fh;
	char sexo;
	
	printf("digite o seu altura em m e sexo f pra feminino e m pra masculino \n");
	scanf("%f %c", &altura, &sexo );

	
	fm = (62.1 * altura) - 44.7;
	fh = (72.7 * altura) - 58;
	
	if ( sexo == 'f' )
	{
		printf("seu peso ideal eh %.2f\n", fm);
	}
	else if ( sexo == 'm' )
	{
		printf("seu peso ideal eh %.2f\n", fh);
	}
	else 
	{
		printf("sexo invalido");
	}

	return 0;
}
