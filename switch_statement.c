#include<stdio.h>
void main()
{

int a,b,c,ch;
printf(" enter the value of the a,b: \n");
scanf("%d %d",&a,&b);
printf("\n menu\n");
printf("\n1.addition\n");
printf("\n2.multi\n");
printf("\n3.division\n");
printf("enter the value between 1 to 3:\n");
scanf("%d",&ch);
switch(ch){
case 1 : c=a+b;
        printf("sum=%d\n",c);
        break;
case 2: c=a*b;
        printf("mul=%d\n",c);
        break;
case 3: c=a/b;
        printf("div=%d\n",c);
        break;
default:printf(" you have enter wrong choice \n");
        break;
        }
}

