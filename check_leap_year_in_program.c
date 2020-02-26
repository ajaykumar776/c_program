#include<stdio.h>

void check(int n)

{
    if((n%400==0 )||(n%4==0&& n%100!=0))
    {

        printf("given  year is leap year");
    }
    else
    {
        printf("given year is not leap year");
    }


}

void main()
{

    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    check(n);


}
