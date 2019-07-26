#include<stdio.h>
void main()
{

	int a,b,i,lcm;
	printf("enter the element");
	scanf("%d %d",&a,&b);

	int max = (a>b) ? a : b;

	for (i=max;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			lcm=i;
			break;
		}
	}

	printf("lcm of %d\n",lcm);
}
