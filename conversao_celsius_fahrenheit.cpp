#include <stdio.h>
#include <math.h>

int main(){
	float celsius, fahrenheit;
	printf("escreva a temperatura em celsius\n");
	scanf("%f", &celsius );
	fahrenheit = ((celsius * 9)/ 5)+32;
	printf("a temperatura em fahrenheit eh : %.2fF", fahrenheit);
	
	 
	return 0;
}
