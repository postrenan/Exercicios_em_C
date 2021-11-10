#include <stdio.h>
#include <math.h>


int main(){
	int dia, mes, ano, data;
	
	printf("digite a data\n");
	scanf("%d", &data);
	dia = data / 10000;
	mes = (data % 10000) / 100;
	ano = (data % 100);
	printf("dia %d, mes %d, ano %d\n", dia, mes, ano);
    
	return 0;
}
