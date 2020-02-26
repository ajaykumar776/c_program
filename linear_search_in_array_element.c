#include<stdio.h>

void main()
{
    int a[5],n,i,flag=0;
    printf("enter the five array element \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<5;i++){

    if(a[i]==n){
        flag=1;
    }

    }
    if(flag==1){

        printf("your number is available");

    }
    else
    {

        printf("your number is  not available");

    }




}
