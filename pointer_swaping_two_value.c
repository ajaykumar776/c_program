#include<stdio.h>
void main()
{
    int a,b,c;
    int *p,*q;
    p=&a;
    q=&b;
    printf("enter the value of a,b");
    scanf("%d%d",p,q);
    c=*p;
    *p=*q;
    *q=c;
    printf("value of a=%d:\n",a);
    printf("value of b=%d:\n",b);
}
