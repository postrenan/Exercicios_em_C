#include <stdio.h>
#include <math.h>

int main(){
	int num, var, dez;
	
	printf("digite um numero de tres digitos\n");
	scanf("%d", &num);
	var =  num % 100;
	//printf("o valor da dezena eh %d", var);
	dez = var /10;
	printf("o valor da dezena eh : %d", dez);
	
	
	return 0;
}
