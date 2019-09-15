
 //Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
#include<stdio.h>
int test(int a,int b)
{
    int sum=0,flag=0;
    sum=a+b;
    if(a==30 || b==30|| sum==30){
        flag=1;
    }
    else
        flag=0;
    return flag;

    printf("%d",flag);

}

void main()
{

     int a,b;
     printf("enter the value of a and b");
     scanf("%d %d",&a,&b);
     printf("%d",test(a,b));
     test(a,b);

}




