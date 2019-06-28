#include<stdio.h>

float get_pi(){
	float x = 3.14;
	return(x);
}

void main(){
	float n = get_pi();
	printf("%f\n", n);

	printf("%f\n", get_pi());
}