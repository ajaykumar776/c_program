#include<stdio.h>
void sum();
void main()
{
    sum();  
    sum();
}
void sum()
{
    int a,b,c;
    printf("enter the value of a b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d\n",c );
}