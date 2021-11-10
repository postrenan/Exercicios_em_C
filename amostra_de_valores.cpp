#include <stdio.h>

int main(){
	int x;
	float y;
	double z;
	
	scanf(" %d %.3f %.4lf");
	printf(" os valores sao %d %.3f %.4lf", &x, &y, &z);
	
	return 0;
}
