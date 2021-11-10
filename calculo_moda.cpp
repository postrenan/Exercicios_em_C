#include <stdio.h>

int main(){
	float nota1, nota2, peso1, peso2, media;
	
	
	printf("digite 2 notas e 2 pesos\n");
	scanf("%f %f %f %f", &nota1, &nota2, &peso1, &peso2 );
	media = ((nota1 * peso1)+(nota2 * peso2))/(peso1 + peso2);
	printf("media eh %f \n", media);
	

	return 0;
}
