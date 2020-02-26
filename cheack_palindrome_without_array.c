#include<stdio.h>

void main()
{

    int sum=0,n,n1,r;
    printf("enter the value of n");
    scanf("%d",&n);
    n1=n;
    do
    {
        r=n%10;
        sum=10*sum+r;
        n=n/10;
    }
    while(n!=0);   
    if(n1==sum){

        printf("your number is palindrome \n");
    }else{

        printf("your number is not palindrome");
    }


}
