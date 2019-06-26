#include<stdio.h>
void main()
{

	int a=6,b=4,i,lcm;
	int max = (a>b) ? a : b;

	for (i=max;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			lcm=i;
			break;
		}
	}

	printf("lcm of %d\n",lcm);
}