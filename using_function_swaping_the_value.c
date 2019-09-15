#include<stdio.h>

int a,b;

void swap()
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("values after swap a = %d and b = %d\n", a, b);
}

void main()
{
    printf("enter the value of a  b");
    scanf("%d %d",&a,&b);
    swap();
    printf("a %d b %d\n", a, b);
}
