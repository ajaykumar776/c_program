#include<stdio.h>
void main()
{
    int n;
    printf("enter the marks");
    scanf("%d ",&n);
    if(n>=40&&n<60)
    {
        printf("pass");

     }
     else if(n>60)
     {
        printf("first");

    }else
    {
        printf("fail");
    }
}
