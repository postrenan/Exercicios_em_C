#include <stdio.h>
#include <math.h>

int main(){
	
	float preco, desconto, novpreco, aumento, novaumento;
	printf("digite o valor do produto ");
	scanf("%f", &preco );
	desconto = preco / 10;
	novpreco = preco - desconto ;
	aumento = (preco * 20.0)/100 ;
	novaumento = preco + aumento;
	printf("o preco era %.2f e agora eh %.2f", preco, novpreco);
	printf("o preco eh %f e o preco com aumento eh %f", preco, novaumento );
	
	
	return 0;
}
