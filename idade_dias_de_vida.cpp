#include <stdio.h>
#include <math.h>

int main(){
	
	float idade, dias_de_vida;
	
	printf("digite a sua idade\n ");
	scanf("%f", &idade);
	dias_de_vida = idade * 365;
	printf("seus dias de vida foram contados %.2f\n", dias_de_vida);
	
	return 0;
}
