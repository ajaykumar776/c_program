#include<stdio.h>

void main()

{
	int h=0,m=0,s=0;
	double i;
	printf("enter the current hrs min sec\n");
	scanf("%d %d %d",&h,&m,&s);
	printf("%d%d%d\n",h,m,s );
	start :;
	for(h;h<24;h++){
		for(m;m<60;m++){
			for(s;s<60;s++){
				printf("\n%d:%d:%d\n",h,m,s );
				for(i=0;i<999999999;i++){
					i++;
					i--;
				}
			}
			s=0;
			
		}
		m=0;
		goto start;

	}
	
}