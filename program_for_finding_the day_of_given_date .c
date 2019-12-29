#include<stdio.h>
void main()
{
	
	int y,y1,d,cal,m1,flag,flag1=0;
	int m;;
	int jan=0;
	int feb=3;
	int march=3;
	int april=6;
	int may=1,june=4,july=6,aug=2,sept=2,oct=5,nov=3,dec=5;
	printf("enter the year/month /date \n");
	scanf("%d%d%d",&y,&m,&d);
	if(m==1)
		m1=0;
	if(m==2||m==3||m==11)
		m1=3;
	if(m==4||m==7)
		m1=6;
	if(m==5)
		m1=1;
	if(m==6)
		m1=4;
	if(m==8||m==9)
		m1=2;
	if(m==10||m==12)
		m1=5;


	if((y%400==0 )||(y%4==0&& y%100!=0))
	{
		flag1=1;
	}
	y1=y%100;
	int y2=y1/4;
	if(y>=2000||y<=2099)
	{
		flag=6;
		cal=((int)(d+m1+y1+y2+flag));
		//printf("%d\n",cal );
		if(flag1==1){
			cal=cal-1;
			printf("%d\n",cal );
		}
		cal=(int)cal%7;
		//printf("%d\n",cal );
	}
	if(cal==0){
		printf("sunday\n");
	}
	if(cal==1){
		printf("monday\n");
	}
	if(cal==2){
		printf("tuesday\n");
	}
	if(cal==3){
	printf("wednday\n");
	}
	if(cal==4){
		printf("thursday\n");
	}
	if(cal==5){
		printf("friday\n");
	}
	if(cal==6){
		printf("saturday\n");
	}

}