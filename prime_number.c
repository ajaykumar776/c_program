#include<stdio.h>

void main()
{
	int i,n=11,flag=0;
	for(i=2;i<n;i++){
		if( n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1){
		printf("it is non prime");
	}
	else{
		printf("prime number");
	}

}