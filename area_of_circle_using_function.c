#include<stdio.h>
#define PI 3.14

float area(int r)

{
    float a;
    a=r*r*PI;
    return a;
}

void main()
{
    int  r;
    printf("enter the value of r");
    scanf("%d",&r);

    printf("%f", area(r));
}

