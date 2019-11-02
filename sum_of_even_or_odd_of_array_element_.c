#include<stdio.h>

void main()

{
    int a[10],i ,sum=0,sum1=0;
    printf("enter the array element\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            sum=sum+a[i];
        }else
        sum1=sum1+a[i];

    }
    printf("%d %d",sum,sum1);




}
