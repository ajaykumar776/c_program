#include<stdio.h>
void sum(int *p1,int *p2,int *p3)
{
    int x=9,y=9,z=5;
    p1=&x;
    p2=&y;
    p3=&z;
    printf("your sum is =%d",*p1+*p2+*p3);


}
void main()
{
    int x,y,z;
    sum(&x,&y,&z);


}
